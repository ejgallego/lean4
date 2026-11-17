// Lean compiler output
// Module: Lean.Meta.Sym.Simp.Forall
// Imports: public import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.Simp.Result import Lean.Meta.Sym.Util import Lean.Meta.Sym.InstantiateS import Lean.Meta.Sym.AbstractS
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
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD(uint8_t);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getTrueExpr___redArg(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isTrueExpr___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Level_isZero(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_getResultExpr(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isFalseExpr___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateRevRangeS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_Sym_instantiateS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkForallFVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg();
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_Sym_mkLambdaFVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getLevel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_Expr_isArrow(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t, uint8_t);
lean_object* l_Lean_Level_succ___override(lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lift"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sound"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrArg"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(188, 17, 22, 243, 206, 91, 171, 36)}};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__4_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__5_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ndrec"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Quot"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "p'"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(153, 84, 71, 254, 8, 249, 37, 40)}};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__4;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "q"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 208, 133, 57, 225, 251, 103, 73)}};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__1;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__2_value),LEAN_SCALAR_PTR_LITERAL(34, 153, 146, 175, 179, 220, 230, 134)}};
static const lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Arrow"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__1_value),LEAN_SCALAR_PTR_LITERAL(203, 51, 73, 212, 39, 172, 156, 118)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toForall_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "arrow_true"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 60, 249, 93, 169, 23, 87, 100)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "arrow_true_congr"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__2_value),LEAN_SCALAR_PTR_LITERAL(26, 244, 117, 192, 201, 44, 53, 165)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "true_arrow"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__4_value),LEAN_SCALAR_PTR_LITERAL(167, 3, 129, 158, 41, 225, 71, 211)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__6;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "arrow_congr_right"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__7_value),LEAN_SCALAR_PTR_LITERAL(29, 119, 110, 93, 174, 252, 11, 102)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__8 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "true_arrow_congr_right"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__9 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__9_value),LEAN_SCALAR_PTR_LITERAL(118, 96, 91, 171, 163, 176, 69, 89)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__10 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__11;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "arrow_congr_left"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__12 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__13_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__12_value),LEAN_SCALAR_PTR_LITERAL(162, 72, 118, 56, 86, 132, 84, 122)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__13 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "true_arrow_congr_left"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__14 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__14_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__14_value),LEAN_SCALAR_PTR_LITERAL(6, 117, 111, 18, 228, 157, 82, 38)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__15 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__15_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__16;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "arrow_congr"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__17 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__17_value),LEAN_SCALAR_PTR_LITERAL(166, 43, 230, 22, 134, 52, 48, 206)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__18 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "true_arrow_congr"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__19 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__20_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__19_value),LEAN_SCALAR_PTR_LITERAL(229, 237, 254, 33, 163, 119, 59, 188)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__20 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__20_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__21;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "false_arrow"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__22 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__22_value),LEAN_SCALAR_PTR_LITERAL(67, 232, 237, 20, 202, 143, 10, 43)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__23 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__23_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__24;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "false_arrow_congr"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__25 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__25_value),LEAN_SCALAR_PTR_LITERAL(249, 202, 81, 21, 94, 79, 156, 30)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__26 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__26_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__27;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 40, 198, 234, 16, 168, 79, 243)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpArrowTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpArrowTelescope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Simp_simpArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "implies_congr_right"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpArrow___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpArrow___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpArrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 214, 41, 106, 32, 244, 82, 54)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpArrow___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpArrow___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.Sym.AlphaShareBuilder"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpArrow___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpArrow___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpArrow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Expr.updateForallS!"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpArrow___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpArrow___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpArrow___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "forall expected"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpArrow___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpArrow___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpArrow___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpArrow___closed__5;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpArrow___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "implies_congr_left"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpArrow___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpArrow___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpArrow___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpArrow___closed__6_value),LEAN_SCALAR_PTR_LITERAL(19, 33, 3, 245, 8, 162, 217, 112)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpArrow___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpArrow___closed__7_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpArrow___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "implies_congr"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpArrow___closed__8 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpArrow___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpArrow___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpArrow___closed__8_value),LEAN_SCALAR_PTR_LITERAL(141, 71, 54, 187, 9, 73, 178, 153)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpArrow___closed__9 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpArrow___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "substr"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__0_value),LEAN_SCALAR_PTR_LITERAL(85, 253, 121, 186, 205, 175, 35, 173)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "forall_prop_congr_dom"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(79, 60, 41, 113, 120, 179, 141, 84)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__2;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "forall_prop_domain_congr"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(50, 216, 34, 74, 208, 79, 94, 130)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.Sym.Simp.Forall"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "_private.Lean.Meta.Sym.Simp.Forall.0.Lean.Meta.Sym.Simp.simpForall'.simpPropDomain"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_mkCongr___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_mkCongr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_mkCongr(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_mkCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_close___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_close___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_close(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_close___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_go___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Sym_Simp_simpForall_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpForall_x27___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpForall_x27___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpForall_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpForall_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__1_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "exists_prop_congr_dom"};
static const lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__3_value),LEAN_SCALAR_PTR_LITERAL(11, 186, 167, 124, 20, 150, 71, 194)}};
static const lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_Simp_simpForall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_simpArrow___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_simpForall___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpForall___closed__0_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_simpForall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_simp___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_simpForall___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpForall___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0(lean_object* v___x_9_, lean_object* v_a_10_, lean_object* v___x_11_, lean_object* v___x_12_, lean_object* v_xs_13_, lean_object* v___x_14_, lean_object* v_a_15_, lean_object* v___x_16_, lean_object* v_a_17_, lean_object* v___x_18_, lean_object* v___x_19_, lean_object* v_prop_20_, uint8_t v___x_21_, uint8_t v___x_22_, uint8_t v___x_23_, lean_object* v___x_24_, lean_object* v_p_25_, lean_object* v_q_26_, lean_object* v_h_27_, lean_object* v___x_28_, lean_object* v___x_29_, lean_object* v___x_30_, lean_object* v___x_31_, lean_object* v___x_32_, lean_object* v___x_33_, lean_object* v_p_x27_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; uint8_t v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_40_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__0));
lean_inc_ref(v___x_9_);
v___x_41_ = l_Lean_Name_mkStr2(v___x_9_, v___x_40_);
lean_inc(v___x_11_);
lean_inc(v_a_10_);
v___x_42_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_42_, 0, v_a_10_);
lean_ctor_set(v___x_42_, 1, v___x_11_);
v___x_43_ = l_Lean_mkConst(v___x_41_, v___x_42_);
v___x_44_ = 0;
v___x_45_ = l_Lean_Expr_bvar___override(v___x_12_);
lean_inc_ref(v___x_45_);
v___x_46_ = l_Lean_mkAppN(v___x_45_, v_xs_13_);
lean_inc_ref(v___x_46_);
lean_inc_ref_n(v_a_15_, 4);
lean_inc(v___x_14_);
v___x_47_ = l_Lean_mkLambda(v___x_14_, v___x_44_, v_a_15_, v___x_46_);
lean_inc(v___x_16_);
v___x_48_ = l_Lean_Expr_bvar___override(v___x_16_);
lean_inc_ref_n(v_a_17_, 2);
v___x_49_ = l_Lean_mkAppB(v_a_17_, v___x_48_, v___x_45_);
v___x_50_ = l_Lean_mkLambda(v___x_18_, v___x_44_, v___x_49_, v___x_46_);
v___x_51_ = l_Lean_mkLambda(v___x_19_, v___x_44_, v_a_15_, v___x_50_);
v___x_52_ = l_Lean_mkLambda(v___x_14_, v___x_44_, v_a_15_, v___x_51_);
lean_inc_ref(v_p_x27_34_);
lean_inc_ref(v_prop_20_);
v___x_53_ = l_Lean_mkApp6(v___x_43_, v_a_15_, v_a_17_, v_prop_20_, v___x_47_, v___x_52_, v_p_x27_34_);
v___x_54_ = lean_mk_empty_array_with_capacity(v___x_16_);
lean_dec(v___x_16_);
lean_inc_ref(v___x_54_);
v___x_55_ = lean_array_push(v___x_54_, v_p_x27_34_);
v___x_56_ = l_Array_append___redArg(v___x_55_, v_xs_13_);
v___x_57_ = l_Lean_Meta_mkLambdaFVars(v___x_56_, v___x_53_, v___x_21_, v___x_22_, v___x_21_, v___x_22_, v___x_23_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
lean_dec_ref(v___x_56_);
if (lean_obj_tag(v___x_57_) == 0)
{
lean_object* v_a_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v_a_58_ = lean_ctor_get(v___x_57_, 0);
lean_inc(v_a_58_);
lean_dec_ref_known(v___x_57_, 1);
v___x_59_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__1));
lean_inc_ref(v___x_9_);
v___x_60_ = l_Lean_Name_mkStr2(v___x_9_, v___x_59_);
lean_inc_n(v___x_24_, 3);
v___x_61_ = l_Lean_mkConst(v___x_60_, v___x_24_);
lean_inc_ref(v_h_27_);
lean_inc_ref_n(v_q_26_, 2);
lean_inc_ref_n(v_p_25_, 2);
lean_inc_ref_n(v_a_17_, 2);
lean_inc_ref_n(v_a_15_, 4);
v___x_62_ = l_Lean_mkApp5(v___x_61_, v_a_15_, v_a_17_, v_p_25_, v_q_26_, v_h_27_);
v___x_63_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__2));
v___x_64_ = l_Lean_Name_mkStr2(v___x_9_, v___x_63_);
v___x_65_ = l_Lean_mkConst(v___x_64_, v___x_24_);
lean_inc_ref(v___x_65_);
v___x_66_ = l_Lean_mkApp3(v___x_65_, v_a_15_, v_a_17_, v_p_25_);
v___x_67_ = l_Lean_mkApp3(v___x_65_, v_a_15_, v_a_17_, v_q_26_);
v___x_68_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__4));
v___x_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_69_, 0, v_a_10_);
lean_ctor_set(v___x_69_, 1, v___x_24_);
v___x_70_ = l_Lean_mkConst(v___x_68_, v___x_69_);
v___x_71_ = l_Lean_mkApp6(v___x_70_, v___x_28_, v_a_15_, v___x_66_, v___x_67_, v_a_58_, v___x_62_);
v___x_72_ = l_Lean_Meta_mkForallFVars(v_xs_13_, v___x_29_, v___x_21_, v___x_22_, v___x_22_, v___x_23_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
if (lean_obj_tag(v___x_72_) == 0)
{
lean_object* v_a_73_; lean_object* v___x_74_; 
v_a_73_ = lean_ctor_get(v___x_72_, 0);
lean_inc(v_a_73_);
lean_dec_ref_known(v___x_72_, 1);
v___x_74_ = l_Lean_Meta_mkForallFVars(v_xs_13_, v___x_30_, v___x_21_, v___x_22_, v___x_22_, v___x_23_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
if (lean_obj_tag(v___x_74_) == 0)
{
lean_object* v_a_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v_a_75_ = lean_ctor_get(v___x_74_, 0);
lean_inc(v_a_75_);
lean_dec_ref_known(v___x_74_, 1);
lean_inc_ref(v_q_26_);
v___x_76_ = lean_array_push(v___x_54_, v_q_26_);
lean_inc(v_a_73_);
lean_inc_ref(v_prop_20_);
v___x_77_ = l_Lean_mkApp3(v___x_31_, v_prop_20_, v_a_73_, v_a_75_);
v___x_78_ = l_Lean_Meta_mkLambdaFVars(v___x_76_, v___x_77_, v___x_21_, v___x_22_, v___x_21_, v___x_22_, v___x_23_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
lean_dec_ref(v___x_76_);
if (lean_obj_tag(v___x_78_) == 0)
{
lean_object* v_a_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v_a_79_ = lean_ctor_get(v___x_78_, 0);
lean_inc(v_a_79_);
lean_dec_ref_known(v___x_78_, 1);
v___x_80_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__5));
lean_inc_ref(v___x_32_);
v___x_81_ = l_Lean_Name_mkStr2(v___x_32_, v___x_80_);
v___x_82_ = l_Lean_mkConst(v___x_81_, v___x_11_);
v___x_83_ = l_Lean_mkAppB(v___x_82_, v_prop_20_, v_a_73_);
v___x_84_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___closed__6));
v___x_85_ = l_Lean_Name_mkStr2(v___x_32_, v___x_84_);
v___x_86_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_33_);
lean_ctor_set(v___x_86_, 1, v___x_24_);
v___x_87_ = l_Lean_mkConst(v___x_85_, v___x_86_);
lean_inc_ref(v_q_26_);
lean_inc_ref(v_p_25_);
v___x_88_ = l_Lean_mkApp6(v___x_87_, v_a_15_, v_p_25_, v_a_79_, v___x_83_, v_q_26_, v___x_71_);
v___x_89_ = lean_unsigned_to_nat(3u);
v___x_90_ = lean_mk_empty_array_with_capacity(v___x_89_);
v___x_91_ = lean_array_push(v___x_90_, v_p_25_);
v___x_92_ = lean_array_push(v___x_91_, v_q_26_);
v___x_93_ = lean_array_push(v___x_92_, v_h_27_);
v___x_94_ = l_Lean_Meta_mkLambdaFVars(v___x_93_, v___x_88_, v___x_21_, v___x_22_, v___x_21_, v___x_22_, v___x_23_, v___y_35_, v___y_36_, v___y_37_, v___y_38_);
lean_dec_ref(v___x_93_);
return v___x_94_;
}
else
{
lean_dec(v_a_73_);
lean_dec_ref(v___x_71_);
lean_dec(v___x_33_);
lean_dec_ref(v___x_32_);
lean_dec_ref(v_h_27_);
lean_dec_ref(v_q_26_);
lean_dec_ref(v_p_25_);
lean_dec(v___x_24_);
lean_dec_ref(v_prop_20_);
lean_dec_ref(v_a_15_);
lean_dec(v___x_11_);
return v___x_78_;
}
}
else
{
lean_dec(v_a_73_);
lean_dec_ref(v___x_71_);
lean_dec_ref(v___x_54_);
lean_dec(v___x_33_);
lean_dec_ref(v___x_32_);
lean_dec_ref(v___x_31_);
lean_dec_ref(v_h_27_);
lean_dec_ref(v_q_26_);
lean_dec_ref(v_p_25_);
lean_dec(v___x_24_);
lean_dec_ref(v_prop_20_);
lean_dec_ref(v_a_15_);
lean_dec(v___x_11_);
return v___x_74_;
}
}
else
{
lean_dec_ref(v___x_71_);
lean_dec_ref(v___x_54_);
lean_dec(v___x_33_);
lean_dec_ref(v___x_32_);
lean_dec_ref(v___x_31_);
lean_dec_ref(v___x_30_);
lean_dec_ref(v_h_27_);
lean_dec_ref(v_q_26_);
lean_dec_ref(v_p_25_);
lean_dec(v___x_24_);
lean_dec_ref(v_prop_20_);
lean_dec_ref(v_a_15_);
lean_dec(v___x_11_);
return v___x_72_;
}
}
else
{
lean_dec_ref(v___x_54_);
lean_dec(v___x_33_);
lean_dec_ref(v___x_32_);
lean_dec_ref(v___x_31_);
lean_dec_ref(v___x_30_);
lean_dec_ref(v___x_29_);
lean_dec_ref(v___x_28_);
lean_dec_ref(v_h_27_);
lean_dec_ref(v_q_26_);
lean_dec_ref(v_p_25_);
lean_dec(v___x_24_);
lean_dec_ref(v_prop_20_);
lean_dec_ref(v_a_17_);
lean_dec_ref(v_a_15_);
lean_dec(v___x_11_);
lean_dec(v_a_10_);
lean_dec_ref(v___x_9_);
return v___x_57_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___boxed(lean_object** _args){
lean_object* v___x_95_ = _args[0];
lean_object* v_a_96_ = _args[1];
lean_object* v___x_97_ = _args[2];
lean_object* v___x_98_ = _args[3];
lean_object* v_xs_99_ = _args[4];
lean_object* v___x_100_ = _args[5];
lean_object* v_a_101_ = _args[6];
lean_object* v___x_102_ = _args[7];
lean_object* v_a_103_ = _args[8];
lean_object* v___x_104_ = _args[9];
lean_object* v___x_105_ = _args[10];
lean_object* v_prop_106_ = _args[11];
lean_object* v___x_107_ = _args[12];
lean_object* v___x_108_ = _args[13];
lean_object* v___x_109_ = _args[14];
lean_object* v___x_110_ = _args[15];
lean_object* v_p_111_ = _args[16];
lean_object* v_q_112_ = _args[17];
lean_object* v_h_113_ = _args[18];
lean_object* v___x_114_ = _args[19];
lean_object* v___x_115_ = _args[20];
lean_object* v___x_116_ = _args[21];
lean_object* v___x_117_ = _args[22];
lean_object* v___x_118_ = _args[23];
lean_object* v___x_119_ = _args[24];
lean_object* v_p_x27_120_ = _args[25];
lean_object* v___y_121_ = _args[26];
lean_object* v___y_122_ = _args[27];
lean_object* v___y_123_ = _args[28];
lean_object* v___y_124_ = _args[29];
lean_object* v___y_125_ = _args[30];
_start:
{
uint8_t v___x_2438__boxed_126_; uint8_t v___x_2439__boxed_127_; uint8_t v___x_2440__boxed_128_; lean_object* v_res_129_; 
v___x_2438__boxed_126_ = lean_unbox(v___x_107_);
v___x_2439__boxed_127_ = lean_unbox(v___x_108_);
v___x_2440__boxed_128_ = lean_unbox(v___x_109_);
v_res_129_ = l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0(v___x_95_, v_a_96_, v___x_97_, v___x_98_, v_xs_99_, v___x_100_, v_a_101_, v___x_102_, v_a_103_, v___x_104_, v___x_105_, v_prop_106_, v___x_2438__boxed_126_, v___x_2439__boxed_127_, v___x_2440__boxed_128_, v___x_110_, v_p_111_, v_q_112_, v_h_113_, v___x_114_, v___x_115_, v___x_116_, v___x_117_, v___x_118_, v___x_119_, v_p_x27_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_);
lean_dec(v___y_124_);
lean_dec_ref(v___y_123_);
lean_dec(v___y_122_);
lean_dec_ref(v___y_121_);
lean_dec_ref(v_xs_99_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___redArg___lam__0(lean_object* v_k_130_, lean_object* v_b_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v___x_137_; 
lean_inc(v___y_135_);
lean_inc_ref(v___y_134_);
lean_inc(v___y_133_);
lean_inc_ref(v___y_132_);
v___x_137_ = lean_apply_6(v_k_130_, v_b_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_, lean_box(0));
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_138_, lean_object* v_b_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___redArg___lam__0(v_k_138_, v_b_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
lean_dec(v___y_141_);
lean_dec_ref(v___y_140_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___redArg(lean_object* v_name_146_, uint8_t v_bi_147_, lean_object* v_type_148_, lean_object* v_k_149_, uint8_t v_kind_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v___f_156_; lean_object* v___x_157_; 
v___f_156_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_156_, 0, v_k_149_);
v___x_157_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_146_, v_bi_147_, v_type_148_, v___f_156_, v_kind_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_);
if (lean_obj_tag(v___x_157_) == 0)
{
lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_165_; 
v_a_158_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_165_ == 0)
{
v___x_160_ = v___x_157_;
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_157_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_a_158_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
else
{
lean_object* v_a_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_173_; 
v_a_166_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_173_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_173_ == 0)
{
v___x_168_ = v___x_157_;
v_isShared_169_ = v_isSharedCheck_173_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_a_166_);
lean_dec(v___x_157_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_173_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_171_; 
if (v_isShared_169_ == 0)
{
v___x_171_ = v___x_168_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_a_166_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___redArg___boxed(lean_object* v_name_174_, lean_object* v_bi_175_, lean_object* v_type_176_, lean_object* v_k_177_, lean_object* v_kind_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_){
_start:
{
uint8_t v_bi_boxed_184_; uint8_t v_kind_boxed_185_; lean_object* v_res_186_; 
v_bi_boxed_184_ = lean_unbox(v_bi_175_);
v_kind_boxed_185_ = lean_unbox(v_kind_178_);
v_res_186_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___redArg(v_name_174_, v_bi_boxed_184_, v_type_176_, v_k_177_, v_kind_boxed_185_, v___y_179_, v___y_180_, v___y_181_, v___y_182_);
lean_dec(v___y_182_);
lean_dec_ref(v___y_181_);
lean_dec(v___y_180_);
lean_dec_ref(v___y_179_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0___redArg(lean_object* v_name_187_, lean_object* v_type_188_, lean_object* v_k_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
uint8_t v___x_195_; uint8_t v___x_196_; lean_object* v___x_197_; 
v___x_195_ = 0;
v___x_196_ = 0;
v___x_197_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___redArg(v_name_187_, v___x_195_, v_type_188_, v_k_189_, v___x_196_, v___y_190_, v___y_191_, v___y_192_, v___y_193_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0___redArg___boxed(lean_object* v_name_198_, lean_object* v_type_199_, lean_object* v_k_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0___redArg(v_name_198_, v_type_199_, v_k_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1(lean_object* v_xs_213_, lean_object* v___x_214_, uint8_t v___x_215_, uint8_t v___x_216_, uint8_t v___x_217_, lean_object* v_p_218_, lean_object* v_q_219_, lean_object* v_a_220_, lean_object* v___x_221_, lean_object* v_a_222_, lean_object* v___x_223_, lean_object* v___x_224_, lean_object* v___x_225_, lean_object* v___x_226_, lean_object* v___x_227_, lean_object* v___x_228_, lean_object* v_prop_229_, lean_object* v___x_230_, lean_object* v___x_231_, lean_object* v___x_232_, lean_object* v___x_233_, lean_object* v___x_234_, lean_object* v_h_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = l_Lean_Meta_mkForallFVars(v_xs_213_, v___x_214_, v___x_215_, v___x_216_, v___x_216_, v___x_217_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
if (lean_obj_tag(v___x_241_) == 0)
{
lean_object* v_a_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v_a_242_ = lean_ctor_get(v___x_241_, 0);
lean_inc(v_a_242_);
lean_dec_ref_known(v___x_241_, 1);
v___x_243_ = lean_unsigned_to_nat(2u);
v___x_244_ = lean_mk_empty_array_with_capacity(v___x_243_);
lean_inc_ref(v_p_218_);
v___x_245_ = lean_array_push(v___x_244_, v_p_218_);
lean_inc_ref(v_q_219_);
v___x_246_ = lean_array_push(v___x_245_, v_q_219_);
v___x_247_ = l_Lean_Meta_mkLambdaFVars(v___x_246_, v_a_242_, v___x_215_, v___x_216_, v___x_215_, v___x_216_, v___x_217_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
lean_dec_ref(v___x_246_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_a_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___f_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v_a_248_ = lean_ctor_get(v___x_247_, 0);
lean_inc_n(v_a_248_, 2);
lean_dec_ref_known(v___x_247_, 1);
v___x_249_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__0));
v___x_250_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__1));
lean_inc(v_a_220_);
v___x_251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_251_, 0, v_a_220_);
lean_ctor_set(v___x_251_, 1, v___x_221_);
lean_inc_ref(v___x_251_);
v___x_252_ = l_Lean_mkConst(v___x_250_, v___x_251_);
lean_inc_ref(v_a_222_);
v___x_253_ = l_Lean_mkAppB(v___x_252_, v_a_222_, v_a_248_);
v___x_254_ = lean_box(v___x_215_);
v___x_255_ = lean_box(v___x_216_);
v___x_256_ = lean_box(v___x_217_);
lean_inc_ref(v___x_253_);
v___f_257_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__0___boxed), 31, 25);
lean_closure_set(v___f_257_, 0, v___x_249_);
lean_closure_set(v___f_257_, 1, v_a_220_);
lean_closure_set(v___f_257_, 2, v___x_223_);
lean_closure_set(v___f_257_, 3, v___x_224_);
lean_closure_set(v___f_257_, 4, v_xs_213_);
lean_closure_set(v___f_257_, 5, v___x_225_);
lean_closure_set(v___f_257_, 6, v_a_222_);
lean_closure_set(v___f_257_, 7, v___x_226_);
lean_closure_set(v___f_257_, 8, v_a_248_);
lean_closure_set(v___f_257_, 9, v___x_227_);
lean_closure_set(v___f_257_, 10, v___x_228_);
lean_closure_set(v___f_257_, 11, v_prop_229_);
lean_closure_set(v___f_257_, 12, v___x_254_);
lean_closure_set(v___f_257_, 13, v___x_255_);
lean_closure_set(v___f_257_, 14, v___x_256_);
lean_closure_set(v___f_257_, 15, v___x_251_);
lean_closure_set(v___f_257_, 16, v_p_218_);
lean_closure_set(v___f_257_, 17, v_q_219_);
lean_closure_set(v___f_257_, 18, v_h_235_);
lean_closure_set(v___f_257_, 19, v___x_253_);
lean_closure_set(v___f_257_, 20, v___x_230_);
lean_closure_set(v___f_257_, 21, v___x_231_);
lean_closure_set(v___f_257_, 22, v___x_232_);
lean_closure_set(v___f_257_, 23, v___x_233_);
lean_closure_set(v___f_257_, 24, v___x_234_);
v___x_258_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___closed__3));
v___x_259_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0___redArg(v___x_258_, v___x_253_, v___f_257_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
return v___x_259_;
}
else
{
lean_dec_ref(v_h_235_);
lean_dec(v___x_234_);
lean_dec_ref(v___x_233_);
lean_dec_ref(v___x_232_);
lean_dec_ref(v___x_231_);
lean_dec_ref(v___x_230_);
lean_dec_ref(v_prop_229_);
lean_dec(v___x_228_);
lean_dec(v___x_227_);
lean_dec(v___x_226_);
lean_dec(v___x_225_);
lean_dec(v___x_224_);
lean_dec(v___x_223_);
lean_dec_ref(v_a_222_);
lean_dec(v___x_221_);
lean_dec(v_a_220_);
lean_dec_ref(v_q_219_);
lean_dec_ref(v_p_218_);
lean_dec_ref(v_xs_213_);
return v___x_247_;
}
}
else
{
lean_dec_ref(v_h_235_);
lean_dec(v___x_234_);
lean_dec_ref(v___x_233_);
lean_dec_ref(v___x_232_);
lean_dec_ref(v___x_231_);
lean_dec_ref(v___x_230_);
lean_dec_ref(v_prop_229_);
lean_dec(v___x_228_);
lean_dec(v___x_227_);
lean_dec(v___x_226_);
lean_dec(v___x_225_);
lean_dec(v___x_224_);
lean_dec(v___x_223_);
lean_dec_ref(v_a_222_);
lean_dec(v___x_221_);
lean_dec(v_a_220_);
lean_dec_ref(v_q_219_);
lean_dec_ref(v_p_218_);
lean_dec_ref(v_xs_213_);
return v___x_241_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___boxed(lean_object** _args){
lean_object* v_xs_260_ = _args[0];
lean_object* v___x_261_ = _args[1];
lean_object* v___x_262_ = _args[2];
lean_object* v___x_263_ = _args[3];
lean_object* v___x_264_ = _args[4];
lean_object* v_p_265_ = _args[5];
lean_object* v_q_266_ = _args[6];
lean_object* v_a_267_ = _args[7];
lean_object* v___x_268_ = _args[8];
lean_object* v_a_269_ = _args[9];
lean_object* v___x_270_ = _args[10];
lean_object* v___x_271_ = _args[11];
lean_object* v___x_272_ = _args[12];
lean_object* v___x_273_ = _args[13];
lean_object* v___x_274_ = _args[14];
lean_object* v___x_275_ = _args[15];
lean_object* v_prop_276_ = _args[16];
lean_object* v___x_277_ = _args[17];
lean_object* v___x_278_ = _args[18];
lean_object* v___x_279_ = _args[19];
lean_object* v___x_280_ = _args[20];
lean_object* v___x_281_ = _args[21];
lean_object* v_h_282_ = _args[22];
lean_object* v___y_283_ = _args[23];
lean_object* v___y_284_ = _args[24];
lean_object* v___y_285_ = _args[25];
lean_object* v___y_286_ = _args[26];
lean_object* v___y_287_ = _args[27];
_start:
{
uint8_t v___x_2727__boxed_288_; uint8_t v___x_2728__boxed_289_; uint8_t v___x_2729__boxed_290_; lean_object* v_res_291_; 
v___x_2727__boxed_288_ = lean_unbox(v___x_262_);
v___x_2728__boxed_289_ = lean_unbox(v___x_263_);
v___x_2729__boxed_290_ = lean_unbox(v___x_264_);
v_res_291_ = l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1(v_xs_260_, v___x_261_, v___x_2727__boxed_288_, v___x_2728__boxed_289_, v___x_2729__boxed_290_, v_p_265_, v_q_266_, v_a_267_, v___x_268_, v_a_269_, v___x_270_, v___x_271_, v___x_272_, v___x_273_, v___x_274_, v___x_275_, v_prop_276_, v___x_277_, v___x_278_, v___x_279_, v___x_280_, v___x_281_, v_h_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
lean_dec(v___y_284_);
lean_dec_ref(v___y_283_);
return v_res_291_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__2(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_unsigned_to_nat(1u);
v___x_296_ = l_Lean_Level_ofNat(v___x_295_);
return v___x_296_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__3(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_297_ = lean_box(0);
v___x_298_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__2, &l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__2_once, _init_l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__2);
v___x_299_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
lean_ctor_set(v___x_299_, 1, v___x_297_);
return v___x_299_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__4(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_300_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__3, &l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__3_once, _init_l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__3);
v___x_301_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__1));
v___x_302_ = l_Lean_mkConst(v___x_301_, v___x_300_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2(lean_object* v_p_306_, lean_object* v_xs_307_, lean_object* v_prop_308_, uint8_t v___x_309_, uint8_t v___x_310_, uint8_t v___x_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v___x_314_, lean_object* v___x_315_, lean_object* v___x_316_, lean_object* v___x_317_, lean_object* v_q_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_324_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__0));
v___x_325_ = lean_unsigned_to_nat(1u);
v___x_326_ = lean_box(0);
v___x_327_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__3, &l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__3_once, _init_l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__3);
v___x_328_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__4, &l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__4_once, _init_l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__4);
lean_inc_ref(v_p_306_);
v___x_329_ = l_Lean_mkAppN(v_p_306_, v_xs_307_);
lean_inc_ref(v_q_318_);
v___x_330_ = l_Lean_mkAppN(v_q_318_, v_xs_307_);
lean_inc_ref(v___x_330_);
lean_inc_ref(v___x_329_);
lean_inc_ref(v_prop_308_);
v___x_331_ = l_Lean_mkApp3(v___x_328_, v_prop_308_, v___x_329_, v___x_330_);
lean_inc_ref(v___x_331_);
v___x_332_ = l_Lean_Meta_mkForallFVars(v_xs_307_, v___x_331_, v___x_309_, v___x_310_, v___x_310_, v___x_311_, v___y_319_, v___y_320_, v___y_321_, v___y_322_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___f_338_; lean_object* v___x_339_; 
v_a_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_a_333_);
lean_dec_ref_known(v___x_332_, 1);
v___x_334_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__6));
v___x_335_ = lean_box(v___x_309_);
v___x_336_ = lean_box(v___x_310_);
v___x_337_ = lean_box(v___x_311_);
v___f_338_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__1___boxed), 28, 22);
lean_closure_set(v___f_338_, 0, v_xs_307_);
lean_closure_set(v___f_338_, 1, v___x_331_);
lean_closure_set(v___f_338_, 2, v___x_335_);
lean_closure_set(v___f_338_, 3, v___x_336_);
lean_closure_set(v___f_338_, 4, v___x_337_);
lean_closure_set(v___f_338_, 5, v_p_306_);
lean_closure_set(v___f_338_, 6, v_q_318_);
lean_closure_set(v___f_338_, 7, v_a_312_);
lean_closure_set(v___f_338_, 8, v___x_326_);
lean_closure_set(v___f_338_, 9, v_a_313_);
lean_closure_set(v___f_338_, 10, v___x_327_);
lean_closure_set(v___f_338_, 11, v___x_314_);
lean_closure_set(v___f_338_, 12, v___x_315_);
lean_closure_set(v___f_338_, 13, v___x_325_);
lean_closure_set(v___f_338_, 14, v___x_334_);
lean_closure_set(v___f_338_, 15, v___x_316_);
lean_closure_set(v___f_338_, 16, v_prop_308_);
lean_closure_set(v___f_338_, 17, v___x_329_);
lean_closure_set(v___f_338_, 18, v___x_330_);
lean_closure_set(v___f_338_, 19, v___x_328_);
lean_closure_set(v___f_338_, 20, v___x_324_);
lean_closure_set(v___f_338_, 21, v___x_317_);
v___x_339_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0___redArg(v___x_334_, v_a_333_, v___f_338_, v___y_319_, v___y_320_, v___y_321_, v___y_322_);
return v___x_339_;
}
else
{
lean_dec_ref(v___x_331_);
lean_dec_ref(v___x_330_);
lean_dec_ref(v___x_329_);
lean_dec_ref(v_q_318_);
lean_dec(v___x_317_);
lean_dec(v___x_316_);
lean_dec(v___x_315_);
lean_dec(v___x_314_);
lean_dec_ref(v_a_313_);
lean_dec(v_a_312_);
lean_dec_ref(v_prop_308_);
lean_dec_ref(v_xs_307_);
lean_dec_ref(v_p_306_);
return v___x_332_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___boxed(lean_object** _args){
lean_object* v_p_340_ = _args[0];
lean_object* v_xs_341_ = _args[1];
lean_object* v_prop_342_ = _args[2];
lean_object* v___x_343_ = _args[3];
lean_object* v___x_344_ = _args[4];
lean_object* v___x_345_ = _args[5];
lean_object* v_a_346_ = _args[6];
lean_object* v_a_347_ = _args[7];
lean_object* v___x_348_ = _args[8];
lean_object* v___x_349_ = _args[9];
lean_object* v___x_350_ = _args[10];
lean_object* v___x_351_ = _args[11];
lean_object* v_q_352_ = _args[12];
lean_object* v___y_353_ = _args[13];
lean_object* v___y_354_ = _args[14];
lean_object* v___y_355_ = _args[15];
lean_object* v___y_356_ = _args[16];
lean_object* v___y_357_ = _args[17];
_start:
{
uint8_t v___x_2869__boxed_358_; uint8_t v___x_2870__boxed_359_; uint8_t v___x_2871__boxed_360_; lean_object* v_res_361_; 
v___x_2869__boxed_358_ = lean_unbox(v___x_343_);
v___x_2870__boxed_359_ = lean_unbox(v___x_344_);
v___x_2871__boxed_360_ = lean_unbox(v___x_345_);
v_res_361_ = l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2(v_p_340_, v_xs_341_, v_prop_342_, v___x_2869__boxed_358_, v___x_2870__boxed_359_, v___x_2871__boxed_360_, v_a_346_, v_a_347_, v___x_348_, v___x_349_, v___x_350_, v___x_351_, v_q_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__3(lean_object* v_xs_365_, lean_object* v_prop_366_, uint8_t v___x_367_, uint8_t v___x_368_, uint8_t v___x_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v___x_372_, lean_object* v___x_373_, lean_object* v___x_374_, lean_object* v_p_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___f_385_; lean_object* v___x_386_; 
v___x_381_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__3___closed__1));
v___x_382_ = lean_box(v___x_367_);
v___x_383_ = lean_box(v___x_368_);
v___x_384_ = lean_box(v___x_369_);
lean_inc_ref(v_a_371_);
v___f_385_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___boxed), 18, 12);
lean_closure_set(v___f_385_, 0, v_p_375_);
lean_closure_set(v___f_385_, 1, v_xs_365_);
lean_closure_set(v___f_385_, 2, v_prop_366_);
lean_closure_set(v___f_385_, 3, v___x_382_);
lean_closure_set(v___f_385_, 4, v___x_383_);
lean_closure_set(v___f_385_, 5, v___x_384_);
lean_closure_set(v___f_385_, 6, v_a_370_);
lean_closure_set(v___f_385_, 7, v_a_371_);
lean_closure_set(v___f_385_, 8, v___x_372_);
lean_closure_set(v___f_385_, 9, v___x_373_);
lean_closure_set(v___f_385_, 10, v___x_381_);
lean_closure_set(v___f_385_, 11, v___x_374_);
v___x_386_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0___redArg(v___x_381_, v_a_371_, v___f_385_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__3___boxed(lean_object* v_xs_387_, lean_object* v_prop_388_, lean_object* v___x_389_, lean_object* v___x_390_, lean_object* v___x_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v___x_394_, lean_object* v___x_395_, lean_object* v___x_396_, lean_object* v_p_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
uint8_t v___x_2964__boxed_403_; uint8_t v___x_2965__boxed_404_; uint8_t v___x_2966__boxed_405_; lean_object* v_res_406_; 
v___x_2964__boxed_403_ = lean_unbox(v___x_389_);
v___x_2965__boxed_404_ = lean_unbox(v___x_390_);
v___x_2966__boxed_405_ = lean_unbox(v___x_391_);
v_res_406_ = l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__3(v_xs_387_, v_prop_388_, v___x_2964__boxed_403_, v___x_2965__boxed_404_, v___x_2966__boxed_405_, v_a_392_, v_a_393_, v___x_394_, v___x_395_, v___x_396_, v_p_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
return v_res_406_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__0(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = lean_unsigned_to_nat(0u);
v___x_408_ = l_Lean_Level_ofNat(v___x_407_);
return v___x_408_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__1(void){
_start:
{
lean_object* v___x_409_; lean_object* v_prop_410_; 
v___x_409_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__0, &l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__0_once, _init_l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__0);
v_prop_410_ = l_Lean_mkSort(v___x_409_);
return v_prop_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor(lean_object* v_xs_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v_prop_422_; uint8_t v___x_423_; uint8_t v___x_424_; uint8_t v___x_425_; lean_object* v___x_426_; 
v___x_420_ = lean_unsigned_to_nat(0u);
v___x_421_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__0, &l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__0_once, _init_l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__0);
v_prop_422_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__1, &l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__1_once, _init_l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__1);
v___x_423_ = 0;
v___x_424_ = 1;
v___x_425_ = 1;
v___x_426_ = l_Lean_Meta_mkForallFVars(v_xs_414_, v_prop_422_, v___x_423_, v___x_424_, v___x_424_, v___x_425_, v_a_415_, v_a_416_, v_a_417_, v_a_418_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; lean_object* v___x_428_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
lean_inc_n(v_a_427_, 2);
lean_dec_ref_known(v___x_426_, 1);
v___x_428_ = l_Lean_Meta_getLevel(v_a_427_, v_a_415_, v_a_416_, v_a_417_, v_a_418_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___f_434_; lean_object* v___x_435_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_a_429_);
lean_dec_ref_known(v___x_428_, 1);
v___x_430_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__3));
v___x_431_ = lean_box(v___x_423_);
v___x_432_ = lean_box(v___x_424_);
v___x_433_ = lean_box(v___x_425_);
lean_inc(v_a_427_);
v___f_434_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__3___boxed), 16, 10);
lean_closure_set(v___f_434_, 0, v_xs_414_);
lean_closure_set(v___f_434_, 1, v_prop_422_);
lean_closure_set(v___f_434_, 2, v___x_431_);
lean_closure_set(v___f_434_, 3, v___x_432_);
lean_closure_set(v___f_434_, 4, v___x_433_);
lean_closure_set(v___f_434_, 5, v_a_429_);
lean_closure_set(v___f_434_, 6, v_a_427_);
lean_closure_set(v___f_434_, 7, v___x_420_);
lean_closure_set(v___f_434_, 8, v___x_430_);
lean_closure_set(v___f_434_, 9, v___x_421_);
v___x_435_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0___redArg(v___x_430_, v_a_427_, v___f_434_, v_a_415_, v_a_416_, v_a_417_, v_a_418_);
return v___x_435_;
}
else
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
lean_dec(v_a_427_);
lean_dec_ref(v_xs_414_);
v_a_436_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_428_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_428_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
else
{
lean_dec_ref(v_xs_414_);
return v___x_426_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor___boxed(lean_object* v_xs_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Lean_Meta_Sym_Simp_mkForallCongrFor(v_xs_444_, v_a_445_, v_a_446_, v_a_447_, v_a_448_);
lean_dec(v_a_448_);
lean_dec_ref(v_a_447_);
lean_dec(v_a_446_);
lean_dec_ref(v_a_445_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0(lean_object* v_00_u03b1_451_, lean_object* v_name_452_, uint8_t v_bi_453_, lean_object* v_type_454_, lean_object* v_k_455_, uint8_t v_kind_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___redArg(v_name_452_, v_bi_453_, v_type_454_, v_k_455_, v_kind_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0___boxed(lean_object* v_00_u03b1_463_, lean_object* v_name_464_, lean_object* v_bi_465_, lean_object* v_type_466_, lean_object* v_k_467_, lean_object* v_kind_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_){
_start:
{
uint8_t v_bi_boxed_474_; uint8_t v_kind_boxed_475_; lean_object* v_res_476_; 
v_bi_boxed_474_ = lean_unbox(v_bi_465_);
v_kind_boxed_475_ = lean_unbox(v_kind_468_);
v_res_476_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0_spec__0(v_00_u03b1_463_, v_name_464_, v_bi_boxed_474_, v_type_466_, v_k_467_, v_kind_boxed_475_, v___y_469_, v___y_470_, v___y_471_, v___y_472_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
lean_dec(v___y_470_);
lean_dec_ref(v___y_469_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0(lean_object* v_00_u03b1_477_, lean_object* v_name_478_, lean_object* v_type_479_, lean_object* v_k_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0___redArg(v_name_478_, v_type_479_, v_k_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0___boxed(lean_object* v_00_u03b1_487_, lean_object* v_name_488_, lean_object* v_type_489_, lean_object* v_k_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Sym_Simp_mkForallCongrFor_spec__0(v_00_u03b1_487_, v_name_488_, v_type_489_, v_k_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
lean_dec(v___y_492_);
lean_dec_ref(v___y_491_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__0___redArg(lean_object* v_declName_497_, lean_object* v_us_498_, lean_object* v___y_499_){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = l_Lean_Expr_const___override(v_declName_497_, v_us_498_);
v___x_502_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_501_, v___y_499_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__0___redArg___boxed(lean_object* v_declName_503_, lean_object* v_us_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__0___redArg(v_declName_503_, v_us_504_, v___y_505_);
lean_dec(v___y_505_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__0(lean_object* v_declName_508_, lean_object* v_us_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__0___redArg(v_declName_508_, v_us_509_, v___y_511_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__0___boxed(lean_object* v_declName_518_, lean_object* v_us_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__0(v_declName_518_, v_us_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_);
lean_dec(v___y_525_);
lean_dec_ref(v___y_524_);
lean_dec(v___y_523_);
lean_dec_ref(v___y_522_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1_spec__1(lean_object* v_f_528_, lean_object* v_a_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_){
_start:
{
lean_object* v___y_538_; lean_object* v___x_541_; uint8_t v_debug_542_; 
v___x_541_ = lean_st_ref_get(v___y_531_);
v_debug_542_ = lean_ctor_get_uint8(v___x_541_, sizeof(void*)*13);
lean_dec(v___x_541_);
if (v_debug_542_ == 0)
{
v___y_538_ = v___y_531_;
goto v___jp_537_;
}
else
{
lean_object* v___x_543_; 
v___x_543_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_528_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
if (lean_obj_tag(v___x_543_) == 0)
{
lean_object* v___x_544_; 
lean_dec_ref_known(v___x_543_, 1);
v___x_544_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_dec_ref_known(v___x_544_, 1);
v___y_538_ = v___y_531_;
goto v___jp_537_;
}
else
{
lean_object* v_a_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_552_; 
lean_dec_ref(v_a_529_);
lean_dec_ref(v_f_528_);
v_a_545_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_552_ == 0)
{
v___x_547_ = v___x_544_;
v_isShared_548_ = v_isSharedCheck_552_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_a_545_);
lean_dec(v___x_544_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_552_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_550_; 
if (v_isShared_548_ == 0)
{
v___x_550_ = v___x_547_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_a_545_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
}
else
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_560_; 
lean_dec_ref(v_a_529_);
lean_dec_ref(v_f_528_);
v_a_553_ = lean_ctor_get(v___x_543_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_560_ == 0)
{
v___x_555_ = v___x_543_;
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_543_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_558_; 
if (v_isShared_556_ == 0)
{
v___x_558_ = v___x_555_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_a_553_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
}
v___jp_537_:
{
lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_539_ = l_Lean_Expr_app___override(v_f_528_, v_a_529_);
v___x_540_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_539_, v___y_538_);
return v___x_540_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1_spec__1___boxed(lean_object* v_f_561_, lean_object* v_a_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1_spec__1(v_f_561_, v_a_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
lean_dec(v___y_568_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1(lean_object* v_f_571_, lean_object* v_a_u2081_572_, lean_object* v_a_u2082_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1_spec__1(v_f_571_, v_a_u2081_572_, v___y_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; lean_object* v___x_583_; 
v_a_582_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_582_);
lean_dec_ref_known(v___x_581_, 1);
v___x_583_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1_spec__1(v_a_582_, v_a_u2082_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_);
return v___x_583_;
}
else
{
lean_dec_ref(v_a_u2082_573_);
return v___x_581_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1___boxed(lean_object* v_f_584_, lean_object* v_a_u2081_585_, lean_object* v_a_u2082_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1(v_f_584_, v_a_u2081_585_, v_a_u2082_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow(lean_object* v_e_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_){
_start:
{
lean_object* v___y_609_; lean_object* v___y_610_; lean_object* v___y_611_; lean_object* v___y_612_; lean_object* v___y_613_; 
if (lean_obj_tag(v_e_600_) == 7)
{
lean_object* v_binderName_633_; lean_object* v_binderType_634_; lean_object* v_body_635_; uint8_t v_binderInfo_636_; uint8_t v___x_637_; 
v_binderName_633_ = lean_ctor_get(v_e_600_, 0);
v_binderType_634_ = lean_ctor_get(v_e_600_, 1);
v_body_635_ = lean_ctor_get(v_e_600_, 2);
v_binderInfo_636_ = lean_ctor_get_uint8(v_e_600_, sizeof(void*)*3 + 8);
v___x_637_ = l_Lean_Expr_hasLooseBVars(v_body_635_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; 
lean_inc_ref(v_body_635_);
lean_inc_ref(v_binderType_634_);
lean_inc(v_binderName_633_);
lean_dec_ref_known(v_e_600_, 3);
v___x_638_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow(v_body_635_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; lean_object* v_arrow_640_; lean_object* v_infos_641_; lean_object* v_v_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_693_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
lean_inc(v_a_639_);
lean_dec_ref_known(v___x_638_, 1);
v_arrow_640_ = lean_ctor_get(v_a_639_, 0);
v_infos_641_ = lean_ctor_get(v_a_639_, 1);
v_v_642_ = lean_ctor_get(v_a_639_, 2);
v_isSharedCheck_693_ = !lean_is_exclusive(v_a_639_);
if (v_isSharedCheck_693_ == 0)
{
v___x_644_ = v_a_639_;
v_isShared_645_ = v_isSharedCheck_693_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_v_642_);
lean_inc(v_infos_641_);
lean_inc(v_arrow_640_);
lean_dec(v_a_639_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_693_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_646_; 
lean_inc_ref(v_binderType_634_);
v___x_646_ = l_Lean_Meta_Sym_getLevel___redArg(v_binderType_634_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_);
if (lean_obj_tag(v___x_646_) == 0)
{
lean_object* v_a_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v_a_647_ = lean_ctor_get(v___x_646_, 0);
lean_inc_n(v_a_647_, 2);
lean_dec_ref_known(v___x_646_, 1);
v___x_648_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__2));
v___x_649_ = lean_box(0);
lean_inc(v_v_642_);
v___x_650_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_650_, 0, v_v_642_);
lean_ctor_set(v___x_650_, 1, v___x_649_);
v___x_651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_651_, 0, v_a_647_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
v___x_652_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__0___redArg(v___x_648_, v___x_651_, v_a_602_);
if (lean_obj_tag(v___x_652_) == 0)
{
lean_object* v_a_653_; lean_object* v___x_654_; 
v_a_653_ = lean_ctor_get(v___x_652_, 0);
lean_inc(v_a_653_);
lean_dec_ref_known(v___x_652_, 1);
v___x_654_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1(v_a_653_, v_binderType_634_, v_arrow_640_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_668_; 
v_a_655_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_668_ == 0)
{
v___x_657_ = v___x_654_;
v_isShared_658_ = v_isSharedCheck_668_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_dec(v___x_654_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_668_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_663_; 
lean_inc(v_v_642_);
lean_inc(v_a_647_);
v___x_659_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_659_, 0, v_binderName_633_);
lean_ctor_set(v___x_659_, 1, v_a_647_);
lean_ctor_set(v___x_659_, 2, v_v_642_);
lean_ctor_set_uint8(v___x_659_, sizeof(void*)*3, v_binderInfo_636_);
v___x_660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
lean_ctor_set(v___x_660_, 1, v_infos_641_);
v___x_661_ = l_Lean_mkLevelIMax_x27(v_a_647_, v_v_642_);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 2, v___x_661_);
lean_ctor_set(v___x_644_, 1, v___x_660_);
lean_ctor_set(v___x_644_, 0, v_a_655_);
v___x_663_ = v___x_644_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_a_655_);
lean_ctor_set(v_reuseFailAlloc_667_, 1, v___x_660_);
lean_ctor_set(v_reuseFailAlloc_667_, 2, v___x_661_);
v___x_663_ = v_reuseFailAlloc_667_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
lean_object* v___x_665_; 
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 0, v___x_663_);
v___x_665_ = v___x_657_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v___x_663_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
else
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_676_; 
lean_dec(v_a_647_);
lean_del_object(v___x_644_);
lean_dec(v_v_642_);
lean_dec(v_infos_641_);
lean_dec(v_binderName_633_);
v_a_669_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_676_ == 0)
{
v___x_671_ = v___x_654_;
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_654_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_674_; 
if (v_isShared_672_ == 0)
{
v___x_674_ = v___x_671_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_669_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
else
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_684_; 
lean_dec(v_a_647_);
lean_del_object(v___x_644_);
lean_dec(v_v_642_);
lean_dec(v_infos_641_);
lean_dec_ref(v_arrow_640_);
lean_dec_ref(v_binderType_634_);
lean_dec(v_binderName_633_);
v_a_677_ = lean_ctor_get(v___x_652_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_684_ == 0)
{
v___x_679_ = v___x_652_;
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___x_652_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_682_; 
if (v_isShared_680_ == 0)
{
v___x_682_ = v___x_679_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_a_677_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
}
else
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_692_; 
lean_del_object(v___x_644_);
lean_dec(v_v_642_);
lean_dec(v_infos_641_);
lean_dec_ref(v_arrow_640_);
lean_dec_ref(v_binderType_634_);
lean_dec(v_binderName_633_);
v_a_685_ = lean_ctor_get(v___x_646_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_692_ == 0)
{
v___x_687_ = v___x_646_;
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_646_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
}
else
{
lean_dec_ref(v_binderType_634_);
lean_dec(v_binderName_633_);
return v___x_638_;
}
}
else
{
v___y_609_ = v_a_602_;
v___y_610_ = v_a_603_;
v___y_611_ = v_a_604_;
v___y_612_ = v_a_605_;
v___y_613_ = v_a_606_;
goto v___jp_608_;
}
}
else
{
v___y_609_ = v_a_602_;
v___y_610_ = v_a_603_;
v___y_611_ = v_a_604_;
v___y_612_ = v_a_605_;
v___y_613_ = v_a_606_;
goto v___jp_608_;
}
v___jp_608_:
{
lean_object* v___x_614_; 
lean_inc_ref(v_e_600_);
v___x_614_ = l_Lean_Meta_Sym_getLevel___redArg(v_e_600_, v___y_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_624_; 
v_a_615_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_624_ == 0)
{
v___x_617_ = v___x_614_;
v_isShared_618_ = v_isSharedCheck_624_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_614_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_624_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_622_; 
v___x_619_ = lean_box(0);
v___x_620_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_620_, 0, v_e_600_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
lean_ctor_set(v___x_620_, 2, v_a_615_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 0, v___x_620_);
v___x_622_ = v___x_617_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
else
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
lean_dec_ref(v_e_600_);
v_a_625_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_614_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_614_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___boxed(lean_object* v_e_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow(v_e_694_, v_a_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_);
lean_dec(v_a_700_);
lean_dec_ref(v_a_699_);
lean_dec(v_a_698_);
lean_dec_ref(v_a_697_);
lean_dec(v_a_696_);
lean_dec_ref(v_a_695_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toForall_spec__0(lean_object* v_x_703_, uint8_t v_bi_704_, lean_object* v_t_705_, lean_object* v_b_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v___y_715_; lean_object* v___x_718_; uint8_t v_debug_719_; 
v___x_718_ = lean_st_ref_get(v___y_708_);
v_debug_719_ = lean_ctor_get_uint8(v___x_718_, sizeof(void*)*13);
lean_dec(v___x_718_);
if (v_debug_719_ == 0)
{
v___y_715_ = v___y_708_;
goto v___jp_714_;
}
else
{
lean_object* v___x_720_; 
v___x_720_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_705_, v___y_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
if (lean_obj_tag(v___x_720_) == 0)
{
lean_object* v___x_721_; 
lean_dec_ref_known(v___x_720_, 1);
v___x_721_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_dec_ref_known(v___x_721_, 1);
v___y_715_ = v___y_708_;
goto v___jp_714_;
}
else
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
lean_dec_ref(v_b_706_);
lean_dec_ref(v_t_705_);
lean_dec(v_x_703_);
v_a_722_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_721_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_721_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_725_ == 0)
{
v___x_727_ = v___x_724_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
}
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
lean_dec_ref(v_b_706_);
lean_dec_ref(v_t_705_);
lean_dec(v_x_703_);
v_a_730_ = lean_ctor_get(v___x_720_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_720_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_720_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_720_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
v___jp_714_:
{
lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_716_ = l_Lean_Expr_forallE___override(v_x_703_, v_t_705_, v_b_706_, v_bi_704_);
v___x_717_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_716_, v___y_715_);
return v___x_717_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toForall_spec__0___boxed(lean_object* v_x_738_, lean_object* v_bi_739_, lean_object* v_t_740_, lean_object* v_b_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_){
_start:
{
uint8_t v_bi_boxed_749_; lean_object* v_res_750_; 
v_bi_boxed_749_ = lean_unbox(v_bi_739_);
v_res_750_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toForall_spec__0(v_x_738_, v_bi_boxed_749_, v_t_740_, v_b_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
lean_dec(v___y_745_);
lean_dec_ref(v___y_744_);
lean_dec(v___y_743_);
lean_dec_ref(v___y_742_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toForall(lean_object* v_e_751_, lean_object* v_infos_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_){
_start:
{
if (lean_obj_tag(v_infos_752_) == 1)
{
lean_object* v_head_760_; lean_object* v_tail_761_; lean_object* v_binderName_762_; uint8_t v_binderInfo_763_; lean_object* v___x_764_; uint8_t v___x_765_; 
v_head_760_ = lean_ctor_get(v_infos_752_, 0);
lean_inc(v_head_760_);
v_tail_761_ = lean_ctor_get(v_infos_752_, 1);
lean_inc(v_tail_761_);
lean_dec_ref_known(v_infos_752_, 2);
v_binderName_762_ = lean_ctor_get(v_head_760_, 0);
lean_inc(v_binderName_762_);
v_binderInfo_763_ = lean_ctor_get_uint8(v_head_760_, sizeof(void*)*3);
lean_dec(v_head_760_);
v___x_764_ = l_Lean_Expr_cleanupAnnotations(v_e_751_);
v___x_765_ = l_Lean_Expr_isApp(v___x_764_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; 
lean_dec_ref(v___x_764_);
lean_dec(v_binderName_762_);
lean_dec(v_tail_761_);
v___x_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_766_, 0, v_e_751_);
return v___x_766_;
}
else
{
lean_object* v___x_767_; uint8_t v___x_768_; 
v___x_767_ = l_Lean_Expr_appFnCleanup___redArg(v___x_764_);
v___x_768_ = l_Lean_Expr_isApp(v___x_767_);
if (v___x_768_ == 0)
{
lean_object* v___x_769_; 
lean_dec_ref(v___x_767_);
lean_dec_ref(v___x_764_);
lean_dec(v_binderName_762_);
lean_dec(v_tail_761_);
v___x_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_769_, 0, v_e_751_);
return v___x_769_;
}
else
{
lean_object* v___x_770_; lean_object* v___x_771_; uint8_t v___x_772_; 
v___x_770_ = l_Lean_Expr_appFnCleanup___redArg(v___x_767_);
v___x_771_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__2));
v___x_772_ = l_Lean_Expr_isConstOf(v___x_770_, v___x_771_);
lean_dec_ref(v___x_770_);
if (v___x_772_ == 0)
{
lean_object* v___x_773_; 
lean_dec_ref(v___x_767_);
lean_dec_ref(v___x_764_);
lean_dec(v_binderName_762_);
lean_dec(v_tail_761_);
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v_e_751_);
return v___x_773_;
}
else
{
lean_object* v_arg_774_; lean_object* v_arg_775_; lean_object* v___x_776_; 
lean_dec_ref(v_e_751_);
v_arg_774_ = lean_ctor_get(v___x_764_, 1);
lean_inc_ref(v_arg_774_);
lean_dec_ref(v___x_764_);
v_arg_775_ = lean_ctor_get(v___x_767_, 1);
lean_inc_ref(v_arg_775_);
lean_dec_ref(v___x_767_);
v___x_776_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toForall(v_arg_774_, v_tail_761_, v_a_753_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_);
if (lean_obj_tag(v___x_776_) == 0)
{
lean_object* v_a_777_; lean_object* v___x_778_; 
v_a_777_ = lean_ctor_get(v___x_776_, 0);
lean_inc(v_a_777_);
lean_dec_ref_known(v___x_776_, 1);
v___x_778_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toForall_spec__0(v_binderName_762_, v_binderInfo_763_, v_arg_775_, v_a_777_, v_a_753_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_);
return v___x_778_;
}
else
{
lean_dec_ref(v_arg_775_);
lean_dec(v_binderName_762_);
return v___x_776_;
}
}
}
}
}
else
{
lean_object* v___x_779_; 
lean_dec(v_infos_752_);
v___x_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_779_, 0, v_e_751_);
return v___x_779_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toForall___boxed(lean_object* v_e_780_, lean_object* v_infos_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_){
_start:
{
lean_object* v_res_789_; 
v_res_789_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toForall(v_e_780_, v_infos_781_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_);
lean_dec(v_a_787_);
lean_dec_ref(v_a_786_);
lean_dec(v_a_785_);
lean_dec_ref(v_a_784_);
lean_dec(v_a_783_);
lean_dec_ref(v_a_782_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0_spec__0___redArg(lean_object* v_f_790_, lean_object* v_a_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_){
_start:
{
lean_object* v___y_800_; lean_object* v___x_803_; uint8_t v_debug_804_; 
v___x_803_ = lean_st_ref_get(v___y_793_);
v_debug_804_ = lean_ctor_get_uint8(v___x_803_, sizeof(void*)*13);
lean_dec(v___x_803_);
if (v_debug_804_ == 0)
{
v___y_800_ = v___y_793_;
goto v___jp_799_;
}
else
{
lean_object* v___x_805_; 
v___x_805_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_790_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_object* v___x_806_; 
lean_dec_ref_known(v___x_805_, 1);
v___x_806_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_dec_ref_known(v___x_806_, 1);
v___y_800_ = v___y_793_;
goto v___jp_799_;
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec_ref(v_a_791_);
lean_dec_ref(v_f_790_);
v_a_807_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_806_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_806_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
else
{
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
lean_dec_ref(v_a_791_);
lean_dec_ref(v_f_790_);
v_a_815_ = lean_ctor_get(v___x_805_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_822_ == 0)
{
v___x_817_ = v___x_805_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v___x_805_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_815_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
}
v___jp_799_:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = l_Lean_Expr_app___override(v_f_790_, v_a_791_);
v___x_802_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_801_, v___y_800_);
return v___x_802_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0_spec__0___redArg___boxed(lean_object* v_f_823_, lean_object* v_a_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0_spec__0___redArg(v_f_823_, v_a_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_, v___y_830_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
lean_dec(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0(lean_object* v_f_833_, lean_object* v_a_u2081_834_, lean_object* v_a_u2082_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0_spec__0___redArg(v_f_833_, v_a_u2081_834_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_);
if (lean_obj_tag(v___x_846_) == 0)
{
lean_object* v_a_847_; lean_object* v___x_848_; 
v_a_847_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_a_847_);
lean_dec_ref_known(v___x_846_, 1);
v___x_848_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0_spec__0___redArg(v_a_847_, v_a_u2082_835_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_);
return v___x_848_;
}
else
{
lean_dec_ref(v_a_u2082_835_);
return v___x_846_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0___boxed(lean_object* v_f_849_, lean_object* v_a_u2081_850_, lean_object* v_a_u2082_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0(v_f_849_, v_a_u2081_850_, v_a_u2082_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec(v___y_854_);
lean_dec_ref(v___y_853_);
lean_dec(v___y_852_);
return v_res_862_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__6(void){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_875_ = lean_box(0);
v___x_876_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__5));
v___x_877_ = l_Lean_mkConst(v___x_876_, v___x_875_);
return v___x_877_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__11(void){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_886_ = lean_box(0);
v___x_887_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__10));
v___x_888_ = l_Lean_mkConst(v___x_887_, v___x_886_);
return v___x_888_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__16(void){
_start:
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_897_ = lean_box(0);
v___x_898_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__15));
v___x_899_ = l_Lean_mkConst(v___x_898_, v___x_897_);
return v___x_899_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__21(void){
_start:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_908_ = lean_box(0);
v___x_909_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__20));
v___x_910_ = l_Lean_mkConst(v___x_909_, v___x_908_);
return v___x_910_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__24(void){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_915_ = lean_box(0);
v___x_916_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__23));
v___x_917_ = l_Lean_mkConst(v___x_916_, v___x_915_);
return v___x_917_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__27(void){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_922_ = lean_box(0);
v___x_923_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__26));
v___x_924_ = l_Lean_mkConst(v___x_923_, v___x_922_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows(lean_object* v_e_925_, lean_object* v_infos_926_, lean_object* v_simpBody_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_){
_start:
{
lean_object* v___y_939_; lean_object* v___y_940_; lean_object* v___y_941_; lean_object* v___y_942_; lean_object* v___y_943_; lean_object* v___y_944_; lean_object* v___y_945_; lean_object* v___y_946_; lean_object* v___y_947_; uint8_t v___y_967_; lean_object* v___y_972_; lean_object* v___y_973_; uint8_t v___y_974_; lean_object* v___y_975_; uint8_t v___y_976_; 
if (lean_obj_tag(v_infos_926_) == 0)
{
lean_object* v___x_980_; 
lean_inc(v_a_936_);
lean_inc_ref(v_a_935_);
lean_inc(v_a_934_);
lean_inc_ref(v_a_933_);
lean_inc(v_a_932_);
lean_inc_ref(v_a_931_);
lean_inc(v_a_930_);
lean_inc_ref(v_a_929_);
lean_inc(v_a_928_);
v___x_980_ = lean_apply_11(v_simpBody_927_, v_e_925_, v_a_928_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_, lean_box(0));
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_989_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_989_ == 0)
{
v___x_983_ = v___x_980_;
v_isShared_984_ = v_isSharedCheck_989_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_980_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_989_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_985_; lean_object* v___x_987_; 
v___x_985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_985_, 0, v_a_981_);
lean_ctor_set(v___x_985_, 1, v_infos_926_);
if (v_isShared_984_ == 0)
{
lean_ctor_set(v___x_983_, 0, v___x_985_);
v___x_987_ = v___x_983_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v___x_985_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
else
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
v_a_990_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_997_ == 0)
{
v___x_992_ = v___x_980_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_980_);
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
else
{
lean_object* v_head_998_; lean_object* v_tail_999_; lean_object* v___y_1001_; uint8_t v___y_1002_; lean_object* v___y_1003_; lean_object* v___y_1004_; uint8_t v___y_1005_; lean_object* v___x_1010_; uint8_t v___x_1011_; 
v_head_998_ = lean_ctor_get(v_infos_926_, 0);
v_tail_999_ = lean_ctor_get(v_infos_926_, 1);
v___x_1010_ = l_Lean_Expr_cleanupAnnotations(v_e_925_);
v___x_1011_ = l_Lean_Expr_isApp(v___x_1010_);
if (v___x_1011_ == 0)
{
lean_dec_ref(v___x_1010_);
v___y_939_ = v_a_928_;
v___y_940_ = v_a_929_;
v___y_941_ = v_a_930_;
v___y_942_ = v_a_931_;
v___y_943_ = v_a_932_;
v___y_944_ = v_a_933_;
v___y_945_ = v_a_934_;
v___y_946_ = v_a_935_;
v___y_947_ = v_a_936_;
goto v___jp_938_;
}
else
{
lean_object* v___x_1012_; uint8_t v___x_1013_; 
v___x_1012_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1010_);
v___x_1013_ = l_Lean_Expr_isApp(v___x_1012_);
if (v___x_1013_ == 0)
{
lean_dec_ref(v___x_1012_);
lean_dec_ref(v___x_1010_);
v___y_939_ = v_a_928_;
v___y_940_ = v_a_929_;
v___y_941_ = v_a_930_;
v___y_942_ = v_a_931_;
v___y_943_ = v_a_932_;
v___y_944_ = v_a_933_;
v___y_945_ = v_a_934_;
v___y_946_ = v_a_935_;
v___y_947_ = v_a_936_;
goto v___jp_938_;
}
else
{
lean_object* v___x_1014_; lean_object* v___x_1015_; uint8_t v___x_1016_; 
v___x_1014_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1012_);
v___x_1015_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow___closed__2));
v___x_1016_ = l_Lean_Expr_isConstOf(v___x_1014_, v___x_1015_);
if (v___x_1016_ == 0)
{
lean_dec_ref(v___x_1014_);
lean_dec_ref(v___x_1012_);
lean_dec_ref(v___x_1010_);
v___y_939_ = v_a_928_;
v___y_940_ = v_a_929_;
v___y_941_ = v_a_930_;
v___y_942_ = v_a_931_;
v___y_943_ = v_a_932_;
v___y_944_ = v_a_933_;
v___y_945_ = v_a_934_;
v___y_946_ = v_a_935_;
v___y_947_ = v_a_936_;
goto v___jp_938_;
}
else
{
lean_object* v_arg_1017_; lean_object* v_arg_1018_; uint8_t v___y_1020_; uint8_t v___y_1021_; uint8_t v___y_1048_; lean_object* v_proof_1049_; uint8_t v___y_1050_; uint8_t v___y_1077_; lean_object* v___y_1078_; uint8_t v___y_1079_; uint8_t v___y_1085_; lean_object* v___y_1086_; uint8_t v___y_1087_; lean_object* v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; uint8_t v___y_1124_; uint8_t v___y_1125_; lean_object* v___y_1151_; uint8_t v___y_1152_; lean_object* v___y_1153_; lean_object* v___y_1154_; uint8_t v___y_1155_; uint8_t v___y_1182_; lean_object* v___y_1183_; lean_object* v___y_1184_; lean_object* v___y_1185_; uint8_t v___y_1186_; lean_object* v___y_1212_; uint8_t v___y_1213_; lean_object* v___y_1214_; lean_object* v___y_1215_; uint8_t v___y_1216_; lean_object* v___y_1243_; uint8_t v___y_1244_; uint8_t v___y_1245_; lean_object* v___y_1246_; lean_object* v___y_1247_; lean_object* v___y_1248_; lean_object* v___y_1249_; uint8_t v___y_1250_; lean_object* v___x_1265_; 
lean_dec_ref(v_e_925_);
v_arg_1017_ = lean_ctor_get(v___x_1010_, 1);
lean_inc_ref(v_arg_1017_);
lean_dec_ref(v___x_1010_);
v_arg_1018_ = lean_ctor_get(v___x_1012_, 1);
lean_inc_ref_n(v_arg_1018_, 2);
lean_dec_ref(v___x_1012_);
lean_inc(v_a_936_);
lean_inc_ref(v_a_935_);
lean_inc(v_a_934_);
lean_inc_ref(v_a_933_);
lean_inc(v_a_932_);
lean_inc_ref(v_a_931_);
lean_inc(v_a_930_);
lean_inc_ref(v_a_929_);
lean_inc(v_a_928_);
v___x_1265_ = lean_sym_simp(v_arg_1018_, v_a_928_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
lean_inc(v_a_1266_);
lean_dec_ref_known(v___x_1265_, 1);
v___x_1267_ = l_Lean_Meta_Sym_Simp_Result_getResultExpr(v_arg_1018_, v_a_1266_);
v___x_1268_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v___x_1267_, v_a_931_);
lean_dec_ref(v___x_1267_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_object* v_a_1269_; uint8_t v___y_1271_; uint8_t v___x_1334_; 
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
lean_inc(v_a_1269_);
lean_dec_ref_known(v___x_1268_, 1);
v___x_1334_ = lean_unbox(v_a_1269_);
if (v___x_1334_ == 0)
{
uint8_t v___x_1335_; 
v___x_1335_ = lean_unbox(v_a_1269_);
lean_dec(v_a_1269_);
v___y_1271_ = v___x_1335_;
goto v___jp_1270_;
}
else
{
lean_object* v_v_1336_; uint8_t v___x_1337_; 
lean_dec(v_a_1269_);
v_v_1336_ = lean_ctor_get(v_head_998_, 2);
v___x_1337_ = l_Lean_Level_isZero(v_v_1336_);
if (v___x_1337_ == 0)
{
v___y_1271_ = v___x_1337_;
goto v___jp_1270_;
}
else
{
lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1401_; 
lean_dec_ref(v___x_1014_);
lean_dec_ref(v_simpBody_927_);
v_isSharedCheck_1401_ = !lean_is_exclusive(v_infos_926_);
if (v_isSharedCheck_1401_ == 0)
{
lean_object* v_unused_1402_; lean_object* v_unused_1403_; 
v_unused_1402_ = lean_ctor_get(v_infos_926_, 1);
lean_dec(v_unused_1402_);
v_unused_1403_ = lean_ctor_get(v_infos_926_, 0);
lean_dec(v_unused_1403_);
v___x_1339_ = v_infos_926_;
v_isShared_1340_ = v_isSharedCheck_1401_;
goto v_resetjp_1338_;
}
else
{
lean_dec(v_infos_926_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1401_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
if (lean_obj_tag(v_a_1266_) == 0)
{
uint8_t v_contextDependent_1341_; lean_object* v___x_1342_; 
lean_dec_ref(v_arg_1018_);
v_contextDependent_1341_ = lean_ctor_get_uint8(v_a_1266_, 1);
lean_dec_ref_known(v_a_1266_, 0);
v___x_1342_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_931_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1358_; 
v_a_1343_ = lean_ctor_get(v___x_1342_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1345_ = v___x_1342_;
v_isShared_1346_ = v_isSharedCheck_1358_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1342_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1358_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; uint8_t v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1353_; 
v___x_1347_ = lean_box(0);
v___x_1348_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__24, &l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__24_once, _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__24);
v___x_1349_ = l_Lean_Expr_app___override(v___x_1348_, v_arg_1017_);
v___x_1350_ = 0;
v___x_1351_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1351_, 0, v_a_1343_);
lean_ctor_set(v___x_1351_, 1, v___x_1349_);
lean_ctor_set_uint8(v___x_1351_, sizeof(void*)*2, v___x_1350_);
lean_ctor_set_uint8(v___x_1351_, sizeof(void*)*2 + 1, v_contextDependent_1341_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set_tag(v___x_1339_, 0);
lean_ctor_set(v___x_1339_, 1, v___x_1347_);
lean_ctor_set(v___x_1339_, 0, v___x_1351_);
v___x_1353_ = v___x_1339_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v___x_1351_);
lean_ctor_set(v_reuseFailAlloc_1357_, 1, v___x_1347_);
v___x_1353_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
lean_object* v___x_1355_; 
if (v_isShared_1346_ == 0)
{
lean_ctor_set(v___x_1345_, 0, v___x_1353_);
v___x_1355_ = v___x_1345_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v___x_1353_);
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
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
lean_del_object(v___x_1339_);
lean_dec_ref(v_arg_1017_);
v_a_1359_ = lean_ctor_get(v___x_1342_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1342_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1342_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1359_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
}
}
else
{
lean_object* v_proof_1367_; uint8_t v_contextDependent_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1399_; 
v_proof_1367_ = lean_ctor_get(v_a_1266_, 1);
v_contextDependent_1368_ = lean_ctor_get_uint8(v_a_1266_, sizeof(void*)*2 + 1);
v_isSharedCheck_1399_ = !lean_is_exclusive(v_a_1266_);
if (v_isSharedCheck_1399_ == 0)
{
lean_object* v_unused_1400_; 
v_unused_1400_ = lean_ctor_get(v_a_1266_, 0);
lean_dec(v_unused_1400_);
v___x_1370_ = v_a_1266_;
v_isShared_1371_ = v_isSharedCheck_1399_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_proof_1367_);
lean_dec(v_a_1266_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1399_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1372_; 
v___x_1372_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_931_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1390_; 
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1375_ = v___x_1372_;
v_isShared_1376_ = v_isSharedCheck_1390_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1372_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1390_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; uint8_t v___x_1380_; lean_object* v___x_1382_; 
v___x_1377_ = lean_box(0);
v___x_1378_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__27, &l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__27_once, _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__27);
v___x_1379_ = l_Lean_mkApp3(v___x_1378_, v_arg_1018_, v_arg_1017_, v_proof_1367_);
v___x_1380_ = 0;
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 1, v___x_1379_);
lean_ctor_set(v___x_1370_, 0, v_a_1373_);
v___x_1382_ = v___x_1370_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_a_1373_);
lean_ctor_set(v_reuseFailAlloc_1389_, 1, v___x_1379_);
lean_ctor_set_uint8(v_reuseFailAlloc_1389_, sizeof(void*)*2 + 1, v_contextDependent_1368_);
v___x_1382_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
lean_object* v___x_1384_; 
lean_ctor_set_uint8(v___x_1382_, sizeof(void*)*2, v___x_1380_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set_tag(v___x_1339_, 0);
lean_ctor_set(v___x_1339_, 1, v___x_1377_);
lean_ctor_set(v___x_1339_, 0, v___x_1382_);
v___x_1384_ = v___x_1339_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v___x_1382_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v___x_1377_);
v___x_1384_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
lean_object* v___x_1386_; 
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1384_);
v___x_1386_ = v___x_1375_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1384_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
else
{
lean_object* v_a_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1398_; 
lean_del_object(v___x_1370_);
lean_dec_ref(v_proof_1367_);
lean_del_object(v___x_1339_);
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v_arg_1017_);
v_a_1391_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1393_ = v___x_1372_;
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_a_1391_);
lean_dec(v___x_1372_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1396_; 
if (v_isShared_1394_ == 0)
{
v___x_1396_ = v___x_1393_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_a_1391_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
}
}
}
}
}
v___jp_1270_:
{
lean_object* v___x_1272_; 
lean_inc(v_tail_999_);
lean_inc_ref(v_arg_1017_);
v___x_1272_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows(v_arg_1017_, v_tail_999_, v_simpBody_927_, v_a_928_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v_fst_1274_; lean_object* v_snd_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
lean_inc(v_a_1273_);
lean_dec_ref_known(v___x_1272_, 1);
v_fst_1274_ = lean_ctor_get(v_a_1273_, 0);
lean_inc(v_fst_1274_);
v_snd_1275_ = lean_ctor_get(v_a_1273_, 1);
lean_inc(v_snd_1275_);
lean_dec(v_a_1273_);
v___x_1276_ = l_Lean_Meta_Sym_Simp_Result_getResultExpr(v_arg_1017_, v_fst_1274_);
v___x_1277_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v___x_1276_, v_a_931_);
lean_dec_ref(v___x_1276_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v_a_1278_; uint8_t v___x_1279_; 
v_a_1278_ = lean_ctor_get(v___x_1277_, 0);
lean_inc(v_a_1278_);
lean_dec_ref_known(v___x_1277_, 1);
v___x_1279_ = lean_unbox(v_a_1278_);
if (v___x_1279_ == 0)
{
if (lean_obj_tag(v_a_1266_) == 0)
{
if (lean_obj_tag(v_fst_1274_) == 0)
{
uint8_t v_contextDependent_1280_; 
lean_dec_ref(v___x_1014_);
v_contextDependent_1280_ = lean_ctor_get_uint8(v_a_1266_, 1);
lean_dec_ref_known(v_a_1266_, 0);
if (v_contextDependent_1280_ == 0)
{
uint8_t v_contextDependent_1281_; uint8_t v___x_1282_; 
v_contextDependent_1281_ = lean_ctor_get_uint8(v_fst_1274_, 1);
lean_dec_ref_known(v_fst_1274_, 0);
v___x_1282_ = lean_unbox(v_a_1278_);
lean_dec(v_a_1278_);
v___y_1085_ = v___x_1282_;
v___y_1086_ = v_snd_1275_;
v___y_1087_ = v_contextDependent_1281_;
goto v___jp_1084_;
}
else
{
uint8_t v___x_1283_; 
lean_dec_ref_known(v_fst_1274_, 0);
v___x_1283_ = lean_unbox(v_a_1278_);
lean_dec(v_a_1278_);
v___y_1085_ = v___x_1283_;
v___y_1086_ = v_snd_1275_;
v___y_1087_ = v_contextDependent_1280_;
goto v___jp_1084_;
}
}
else
{
uint8_t v_contextDependent_1284_; 
lean_inc(v_head_998_);
lean_dec_ref_known(v_infos_926_, 2);
v_contextDependent_1284_ = lean_ctor_get_uint8(v_a_1266_, 1);
lean_dec_ref_known(v_a_1266_, 0);
if (v_contextDependent_1284_ == 0)
{
lean_object* v_e_x27_1285_; lean_object* v_proof_1286_; uint8_t v_contextDependent_1287_; uint8_t v___x_1288_; 
v_e_x27_1285_ = lean_ctor_get(v_fst_1274_, 0);
lean_inc_ref(v_e_x27_1285_);
v_proof_1286_ = lean_ctor_get(v_fst_1274_, 1);
lean_inc_ref(v_proof_1286_);
v_contextDependent_1287_ = lean_ctor_get_uint8(v_fst_1274_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_fst_1274_, 2);
v___x_1288_ = lean_unbox(v_a_1278_);
lean_dec(v_a_1278_);
v___y_1151_ = v_e_x27_1285_;
v___y_1152_ = v___x_1288_;
v___y_1153_ = v_snd_1275_;
v___y_1154_ = v_proof_1286_;
v___y_1155_ = v_contextDependent_1287_;
goto v___jp_1150_;
}
else
{
lean_object* v_e_x27_1289_; lean_object* v_proof_1290_; uint8_t v___x_1291_; 
v_e_x27_1289_ = lean_ctor_get(v_fst_1274_, 0);
lean_inc_ref(v_e_x27_1289_);
v_proof_1290_ = lean_ctor_get(v_fst_1274_, 1);
lean_inc_ref(v_proof_1290_);
lean_dec_ref_known(v_fst_1274_, 2);
v___x_1291_ = lean_unbox(v_a_1278_);
lean_dec(v_a_1278_);
v___y_1151_ = v_e_x27_1289_;
v___y_1152_ = v___x_1291_;
v___y_1153_ = v_snd_1275_;
v___y_1154_ = v_proof_1290_;
v___y_1155_ = v_contextDependent_1284_;
goto v___jp_1150_;
}
}
}
else
{
lean_inc(v_head_998_);
lean_dec_ref_known(v_infos_926_, 2);
if (lean_obj_tag(v_fst_1274_) == 0)
{
uint8_t v_contextDependent_1292_; 
v_contextDependent_1292_ = lean_ctor_get_uint8(v_a_1266_, sizeof(void*)*2 + 1);
if (v_contextDependent_1292_ == 0)
{
lean_object* v_e_x27_1293_; lean_object* v_proof_1294_; uint8_t v_contextDependent_1295_; uint8_t v___x_1296_; 
v_e_x27_1293_ = lean_ctor_get(v_a_1266_, 0);
lean_inc_ref(v_e_x27_1293_);
v_proof_1294_ = lean_ctor_get(v_a_1266_, 1);
lean_inc_ref(v_proof_1294_);
lean_dec_ref_known(v_a_1266_, 2);
v_contextDependent_1295_ = lean_ctor_get_uint8(v_fst_1274_, 1);
lean_dec_ref_known(v_fst_1274_, 0);
v___x_1296_ = lean_unbox(v_a_1278_);
lean_dec(v_a_1278_);
v___y_1212_ = v_e_x27_1293_;
v___y_1213_ = v___x_1296_;
v___y_1214_ = v_proof_1294_;
v___y_1215_ = v_snd_1275_;
v___y_1216_ = v_contextDependent_1295_;
goto v___jp_1211_;
}
else
{
lean_object* v_e_x27_1297_; lean_object* v_proof_1298_; uint8_t v___x_1299_; 
lean_dec_ref_known(v_fst_1274_, 0);
v_e_x27_1297_ = lean_ctor_get(v_a_1266_, 0);
lean_inc_ref(v_e_x27_1297_);
v_proof_1298_ = lean_ctor_get(v_a_1266_, 1);
lean_inc_ref(v_proof_1298_);
lean_dec_ref_known(v_a_1266_, 2);
v___x_1299_ = lean_unbox(v_a_1278_);
lean_dec(v_a_1278_);
v___y_1212_ = v_e_x27_1297_;
v___y_1213_ = v___x_1299_;
v___y_1214_ = v_proof_1298_;
v___y_1215_ = v_snd_1275_;
v___y_1216_ = v_contextDependent_1292_;
goto v___jp_1211_;
}
}
else
{
lean_object* v_e_x27_1300_; lean_object* v_proof_1301_; uint8_t v_contextDependent_1302_; lean_object* v_e_x27_1303_; lean_object* v_proof_1304_; uint8_t v_contextDependent_1305_; lean_object* v___x_1306_; 
v_e_x27_1300_ = lean_ctor_get(v_a_1266_, 0);
lean_inc_ref(v_e_x27_1300_);
v_proof_1301_ = lean_ctor_get(v_a_1266_, 1);
lean_inc_ref(v_proof_1301_);
v_contextDependent_1302_ = lean_ctor_get_uint8(v_a_1266_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1266_, 2);
v_e_x27_1303_ = lean_ctor_get(v_fst_1274_, 0);
lean_inc_ref(v_e_x27_1303_);
v_proof_1304_ = lean_ctor_get(v_fst_1274_, 1);
lean_inc_ref(v_proof_1304_);
v_contextDependent_1305_ = lean_ctor_get_uint8(v_fst_1274_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_fst_1274_, 2);
v___x_1306_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_x27_1300_, v_a_931_);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v_a_1307_; uint8_t v___x_1308_; 
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_a_1307_);
lean_dec_ref_known(v___x_1306_, 1);
v___x_1308_ = lean_unbox(v_a_1307_);
if (v___x_1308_ == 0)
{
uint8_t v___x_1309_; 
lean_dec(v_a_1278_);
v___x_1309_ = lean_unbox(v_a_1307_);
lean_dec(v_a_1307_);
v___y_1243_ = v_e_x27_1303_;
v___y_1244_ = v_contextDependent_1305_;
v___y_1245_ = v_contextDependent_1302_;
v___y_1246_ = v_e_x27_1300_;
v___y_1247_ = v_snd_1275_;
v___y_1248_ = v_proof_1301_;
v___y_1249_ = v_proof_1304_;
v___y_1250_ = v___x_1309_;
goto v___jp_1242_;
}
else
{
lean_object* v_v_1310_; uint8_t v___x_1311_; 
lean_dec(v_a_1307_);
v_v_1310_ = lean_ctor_get(v_head_998_, 2);
v___x_1311_ = l_Lean_Level_isZero(v_v_1310_);
if (v___x_1311_ == 0)
{
lean_dec(v_a_1278_);
v___y_1243_ = v_e_x27_1303_;
v___y_1244_ = v_contextDependent_1305_;
v___y_1245_ = v_contextDependent_1302_;
v___y_1246_ = v_e_x27_1300_;
v___y_1247_ = v_snd_1275_;
v___y_1248_ = v_proof_1301_;
v___y_1249_ = v_proof_1304_;
v___y_1250_ = v___x_1311_;
goto v___jp_1242_;
}
else
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
lean_dec_ref(v_e_x27_1300_);
lean_dec_ref(v___x_1014_);
lean_dec(v_head_998_);
v___x_1312_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__21, &l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__21_once, _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__21);
lean_inc_ref(v_e_x27_1303_);
v___x_1313_ = l_Lean_mkApp5(v___x_1312_, v_arg_1018_, v_arg_1017_, v_e_x27_1303_, v_proof_1301_, v_proof_1304_);
if (v_contextDependent_1302_ == 0)
{
uint8_t v___x_1314_; 
v___x_1314_ = lean_unbox(v_a_1278_);
lean_dec(v_a_1278_);
v___y_972_ = v_e_x27_1303_;
v___y_973_ = v___x_1313_;
v___y_974_ = v___x_1314_;
v___y_975_ = v_snd_1275_;
v___y_976_ = v_contextDependent_1305_;
goto v___jp_971_;
}
else
{
uint8_t v___x_1315_; 
v___x_1315_ = lean_unbox(v_a_1278_);
lean_dec(v_a_1278_);
v___y_972_ = v_e_x27_1303_;
v___y_973_ = v___x_1313_;
v___y_974_ = v___x_1315_;
v___y_975_ = v_snd_1275_;
v___y_976_ = v_contextDependent_1302_;
goto v___jp_971_;
}
}
}
}
else
{
lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1323_; 
lean_dec_ref(v_proof_1304_);
lean_dec_ref(v_e_x27_1303_);
lean_dec_ref(v_proof_1301_);
lean_dec_ref(v_e_x27_1300_);
lean_dec(v_a_1278_);
lean_dec(v_snd_1275_);
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v_arg_1017_);
lean_dec_ref(v___x_1014_);
lean_dec(v_head_998_);
v_a_1316_ = lean_ctor_get(v___x_1306_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1306_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1318_ = v___x_1306_;
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_dec(v___x_1306_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1321_; 
if (v_isShared_1319_ == 0)
{
v___x_1321_ = v___x_1318_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1316_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
}
}
}
else
{
lean_inc(v_head_998_);
lean_dec(v_a_1278_);
lean_dec(v_snd_1275_);
lean_dec_ref(v___x_1014_);
lean_dec_ref_known(v_infos_926_, 2);
if (lean_obj_tag(v_a_1266_) == 0)
{
uint8_t v_contextDependent_1324_; 
v_contextDependent_1324_ = lean_ctor_get_uint8(v_a_1266_, 1);
lean_dec_ref_known(v_a_1266_, 0);
v___y_1077_ = v___y_1271_;
v___y_1078_ = v_fst_1274_;
v___y_1079_ = v_contextDependent_1324_;
goto v___jp_1076_;
}
else
{
uint8_t v_contextDependent_1325_; 
v_contextDependent_1325_ = lean_ctor_get_uint8(v_a_1266_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1266_, 2);
v___y_1077_ = v___y_1271_;
v___y_1078_ = v_fst_1274_;
v___y_1079_ = v_contextDependent_1325_;
goto v___jp_1076_;
}
}
}
else
{
lean_object* v_a_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1333_; 
lean_dec(v_snd_1275_);
lean_dec(v_fst_1274_);
lean_dec(v_a_1266_);
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v_arg_1017_);
lean_dec_ref(v___x_1014_);
lean_dec_ref_known(v_infos_926_, 2);
v_a_1326_ = lean_ctor_get(v___x_1277_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1328_ = v___x_1277_;
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v___x_1277_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1331_; 
if (v_isShared_1329_ == 0)
{
v___x_1331_ = v___x_1328_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_a_1326_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
else
{
lean_dec(v_a_1266_);
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v_arg_1017_);
lean_dec_ref(v___x_1014_);
lean_dec_ref_known(v_infos_926_, 2);
return v___x_1272_;
}
}
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
lean_dec(v_a_1266_);
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v_arg_1017_);
lean_dec_ref(v___x_1014_);
lean_dec_ref_known(v_infos_926_, 2);
lean_dec_ref(v_simpBody_927_);
v_a_1404_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1268_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1268_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
else
{
lean_object* v_a_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1419_; 
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v_arg_1017_);
lean_dec_ref(v___x_1014_);
lean_dec_ref_known(v_infos_926_, 2);
lean_dec_ref(v_simpBody_927_);
v_a_1412_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1414_ = v___x_1265_;
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_a_1412_);
lean_dec(v___x_1265_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v___x_1417_; 
if (v_isShared_1415_ == 0)
{
v___x_1417_ = v___x_1414_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_a_1412_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
return v___x_1417_;
}
}
}
v___jp_1019_:
{
lean_object* v___x_1022_; 
v___x_1022_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_931_);
if (lean_obj_tag(v___x_1022_) == 0)
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1038_; 
v_a_1023_ = lean_ctor_get(v___x_1022_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1025_ = v___x_1022_;
v_isShared_1026_ = v_isSharedCheck_1038_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___x_1022_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1038_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v_u_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1036_; 
v_u_1027_ = lean_ctor_get(v_head_998_, 1);
lean_inc(v_u_1027_);
lean_dec(v_head_998_);
v___x_1028_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__1));
v___x_1029_ = lean_box(0);
v___x_1030_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1030_, 0, v_u_1027_);
lean_ctor_set(v___x_1030_, 1, v___x_1029_);
v___x_1031_ = l_Lean_mkConst(v___x_1028_, v___x_1030_);
v___x_1032_ = l_Lean_Expr_app___override(v___x_1031_, v_arg_1018_);
v___x_1033_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1033_, 0, v_a_1023_);
lean_ctor_set(v___x_1033_, 1, v___x_1032_);
lean_ctor_set_uint8(v___x_1033_, sizeof(void*)*2, v___y_1020_);
lean_ctor_set_uint8(v___x_1033_, sizeof(void*)*2 + 1, v___y_1021_);
v___x_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
lean_ctor_set(v___x_1034_, 1, v___x_1029_);
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 0, v___x_1034_);
v___x_1036_ = v___x_1025_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1034_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
else
{
lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1046_; 
lean_dec_ref(v_arg_1018_);
lean_dec(v_head_998_);
v_a_1039_ = lean_ctor_get(v___x_1022_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_1022_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_1022_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
v___jp_1047_:
{
lean_object* v___x_1051_; 
v___x_1051_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_931_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1067_; 
v_a_1052_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1054_ = v___x_1051_;
v_isShared_1055_ = v_isSharedCheck_1067_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v___x_1051_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1067_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v_u_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1065_; 
v_u_1056_ = lean_ctor_get(v_head_998_, 1);
lean_inc(v_u_1056_);
lean_dec(v_head_998_);
v___x_1057_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__3));
v___x_1058_ = lean_box(0);
v___x_1059_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1059_, 0, v_u_1056_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
v___x_1060_ = l_Lean_mkConst(v___x_1057_, v___x_1059_);
v___x_1061_ = l_Lean_mkApp3(v___x_1060_, v_arg_1018_, v_arg_1017_, v_proof_1049_);
v___x_1062_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1062_, 0, v_a_1052_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
lean_ctor_set_uint8(v___x_1062_, sizeof(void*)*2, v___y_1048_);
lean_ctor_set_uint8(v___x_1062_, sizeof(void*)*2 + 1, v___y_1050_);
v___x_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
lean_ctor_set(v___x_1063_, 1, v___x_1058_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 0, v___x_1063_);
v___x_1065_ = v___x_1054_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1063_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
lean_dec_ref(v_proof_1049_);
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v_arg_1017_);
lean_dec(v_head_998_);
v_a_1068_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1051_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1051_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
v___jp_1076_:
{
if (v___y_1079_ == 0)
{
if (lean_obj_tag(v___y_1078_) == 0)
{
uint8_t v_contextDependent_1080_; 
lean_dec_ref(v_arg_1017_);
v_contextDependent_1080_ = lean_ctor_get_uint8(v___y_1078_, 1);
lean_dec_ref_known(v___y_1078_, 0);
v___y_1020_ = v___y_1077_;
v___y_1021_ = v_contextDependent_1080_;
goto v___jp_1019_;
}
else
{
lean_object* v_proof_1081_; uint8_t v_contextDependent_1082_; 
v_proof_1081_ = lean_ctor_get(v___y_1078_, 1);
lean_inc_ref(v_proof_1081_);
v_contextDependent_1082_ = lean_ctor_get_uint8(v___y_1078_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v___y_1078_, 2);
v___y_1048_ = v___y_1077_;
v_proof_1049_ = v_proof_1081_;
v___y_1050_ = v_contextDependent_1082_;
goto v___jp_1047_;
}
}
else
{
if (lean_obj_tag(v___y_1078_) == 0)
{
lean_dec_ref_known(v___y_1078_, 0);
lean_dec_ref(v_arg_1017_);
v___y_1020_ = v___y_1077_;
v___y_1021_ = v___y_1079_;
goto v___jp_1019_;
}
else
{
lean_object* v_proof_1083_; 
v_proof_1083_ = lean_ctor_get(v___y_1078_, 1);
lean_inc_ref(v_proof_1083_);
lean_dec_ref_known(v___y_1078_, 2);
v___y_1048_ = v___y_1077_;
v_proof_1049_ = v_proof_1083_;
v___y_1050_ = v___y_1079_;
goto v___jp_1047_;
}
}
}
v___jp_1084_:
{
lean_object* v___x_1088_; 
v___x_1088_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_arg_1018_, v_a_931_);
lean_dec_ref(v_arg_1018_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1111_; 
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1091_ = v___x_1088_;
v_isShared_1092_ = v_isSharedCheck_1111_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1088_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1111_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
uint8_t v___x_1093_; 
v___x_1093_ = lean_unbox(v_a_1089_);
lean_dec(v_a_1089_);
if (v___x_1093_ == 0)
{
lean_del_object(v___x_1091_);
lean_dec(v___y_1086_);
lean_dec_ref(v_arg_1017_);
v___y_967_ = v___y_1087_;
goto v___jp_966_;
}
else
{
lean_object* v_v_1094_; uint8_t v___x_1095_; 
v_v_1094_ = lean_ctor_get(v_head_998_, 2);
v___x_1095_ = l_Lean_Level_isZero(v_v_1094_);
if (v___x_1095_ == 0)
{
lean_del_object(v___x_1091_);
lean_dec(v___y_1086_);
lean_dec_ref(v_arg_1017_);
v___y_967_ = v___y_1087_;
goto v___jp_966_;
}
else
{
lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1108_; 
v_isSharedCheck_1108_ = !lean_is_exclusive(v_infos_926_);
if (v_isSharedCheck_1108_ == 0)
{
lean_object* v_unused_1109_; lean_object* v_unused_1110_; 
v_unused_1109_ = lean_ctor_get(v_infos_926_, 1);
lean_dec(v_unused_1109_);
v_unused_1110_ = lean_ctor_get(v_infos_926_, 0);
lean_dec(v_unused_1110_);
v___x_1097_ = v_infos_926_;
v_isShared_1098_ = v_isSharedCheck_1108_;
goto v_resetjp_1096_;
}
else
{
lean_dec(v_infos_926_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1108_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1103_; 
v___x_1099_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__6, &l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__6_once, _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__6);
lean_inc_ref(v_arg_1017_);
v___x_1100_ = l_Lean_Expr_app___override(v___x_1099_, v_arg_1017_);
v___x_1101_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1101_, 0, v_arg_1017_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
lean_ctor_set_uint8(v___x_1101_, sizeof(void*)*2, v___y_1085_);
lean_ctor_set_uint8(v___x_1101_, sizeof(void*)*2 + 1, v___y_1087_);
if (v_isShared_1098_ == 0)
{
lean_ctor_set_tag(v___x_1097_, 0);
lean_ctor_set(v___x_1097_, 1, v___y_1086_);
lean_ctor_set(v___x_1097_, 0, v___x_1101_);
v___x_1103_ = v___x_1097_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1101_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v___y_1086_);
v___x_1103_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
lean_object* v___x_1105_; 
if (v_isShared_1092_ == 0)
{
lean_ctor_set(v___x_1091_, 0, v___x_1103_);
v___x_1105_ = v___x_1091_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v___x_1103_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1119_; 
lean_dec(v___y_1086_);
lean_dec_ref(v_arg_1017_);
lean_dec_ref_known(v_infos_926_, 2);
v_a_1112_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1114_ = v___x_1088_;
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1088_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1117_; 
if (v_isShared_1115_ == 0)
{
v___x_1117_ = v___x_1114_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_a_1112_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
}
v___jp_1120_:
{
lean_object* v___x_1126_; 
lean_inc_ref(v___y_1121_);
lean_inc_ref(v_arg_1018_);
lean_inc_ref(v___x_1014_);
v___x_1126_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0(v___x_1014_, v_arg_1018_, v___y_1121_, v_a_928_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1141_; 
v_a_1127_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1129_ = v___x_1126_;
v_isShared_1130_ = v_isSharedCheck_1141_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_dec(v___x_1126_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1141_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1139_; 
v___x_1131_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__8));
v___x_1132_ = l_Lean_Expr_constLevels_x21(v___x_1014_);
lean_dec_ref(v___x_1014_);
v___x_1133_ = l_Lean_mkConst(v___x_1131_, v___x_1132_);
v___x_1134_ = l_Lean_mkApp4(v___x_1133_, v_arg_1018_, v_arg_1017_, v___y_1121_, v___y_1123_);
v___x_1135_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1135_, 0, v_a_1127_);
lean_ctor_set(v___x_1135_, 1, v___x_1134_);
lean_ctor_set_uint8(v___x_1135_, sizeof(void*)*2, v___y_1125_);
lean_ctor_set_uint8(v___x_1135_, sizeof(void*)*2 + 1, v___y_1124_);
v___x_1136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1136_, 0, v_head_998_);
lean_ctor_set(v___x_1136_, 1, v___y_1122_);
v___x_1137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1135_);
lean_ctor_set(v___x_1137_, 1, v___x_1136_);
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 0, v___x_1137_);
v___x_1139_ = v___x_1129_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v_arg_1017_);
lean_dec_ref(v___x_1014_);
lean_dec(v_head_998_);
v_a_1142_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1144_ = v___x_1126_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1126_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1142_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
v___jp_1150_:
{
lean_object* v___x_1156_; 
v___x_1156_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_arg_1018_, v_a_931_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1172_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1159_ = v___x_1156_;
v_isShared_1160_ = v_isSharedCheck_1172_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1156_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1172_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
uint8_t v___x_1161_; 
v___x_1161_ = lean_unbox(v_a_1157_);
if (v___x_1161_ == 0)
{
uint8_t v___x_1162_; 
lean_del_object(v___x_1159_);
v___x_1162_ = lean_unbox(v_a_1157_);
lean_dec(v_a_1157_);
v___y_1121_ = v___y_1151_;
v___y_1122_ = v___y_1153_;
v___y_1123_ = v___y_1154_;
v___y_1124_ = v___y_1155_;
v___y_1125_ = v___x_1162_;
goto v___jp_1120_;
}
else
{
lean_object* v_v_1163_; uint8_t v___x_1164_; 
lean_dec(v_a_1157_);
v_v_1163_ = lean_ctor_get(v_head_998_, 2);
v___x_1164_ = l_Lean_Level_isZero(v_v_1163_);
if (v___x_1164_ == 0)
{
lean_del_object(v___x_1159_);
v___y_1121_ = v___y_1151_;
v___y_1122_ = v___y_1153_;
v___y_1123_ = v___y_1154_;
v___y_1124_ = v___y_1155_;
v___y_1125_ = v___x_1164_;
goto v___jp_1120_;
}
else
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1170_; 
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v___x_1014_);
lean_dec(v_head_998_);
v___x_1165_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__11, &l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__11_once, _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__11);
lean_inc_ref(v___y_1151_);
v___x_1166_ = l_Lean_mkApp3(v___x_1165_, v_arg_1017_, v___y_1151_, v___y_1154_);
v___x_1167_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1167_, 0, v___y_1151_);
lean_ctor_set(v___x_1167_, 1, v___x_1166_);
lean_ctor_set_uint8(v___x_1167_, sizeof(void*)*2, v___y_1152_);
lean_ctor_set_uint8(v___x_1167_, sizeof(void*)*2 + 1, v___y_1155_);
v___x_1168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1167_);
lean_ctor_set(v___x_1168_, 1, v___y_1153_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 0, v___x_1168_);
v___x_1170_ = v___x_1159_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v___x_1168_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
}
else
{
lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1180_; 
lean_dec_ref(v___y_1154_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1151_);
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v_arg_1017_);
lean_dec_ref(v___x_1014_);
lean_dec(v_head_998_);
v_a_1173_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1175_ = v___x_1156_;
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___x_1156_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1178_; 
if (v_isShared_1176_ == 0)
{
v___x_1178_ = v___x_1175_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v_a_1173_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
}
}
v___jp_1181_:
{
lean_object* v___x_1187_; 
lean_inc_ref(v_arg_1017_);
lean_inc_ref(v___y_1183_);
lean_inc_ref(v___x_1014_);
v___x_1187_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0(v___x_1014_, v___y_1183_, v_arg_1017_, v_a_928_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_);
if (lean_obj_tag(v___x_1187_) == 0)
{
lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1202_; 
v_a_1188_ = lean_ctor_get(v___x_1187_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1187_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1190_ = v___x_1187_;
v_isShared_1191_ = v_isSharedCheck_1202_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_dec(v___x_1187_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1202_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1200_; 
v___x_1192_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__13));
v___x_1193_ = l_Lean_Expr_constLevels_x21(v___x_1014_);
lean_dec_ref(v___x_1014_);
v___x_1194_ = l_Lean_mkConst(v___x_1192_, v___x_1193_);
v___x_1195_ = l_Lean_mkApp4(v___x_1194_, v_arg_1018_, v___y_1183_, v_arg_1017_, v___y_1185_);
v___x_1196_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1196_, 0, v_a_1188_);
lean_ctor_set(v___x_1196_, 1, v___x_1195_);
lean_ctor_set_uint8(v___x_1196_, sizeof(void*)*2, v___y_1186_);
lean_ctor_set_uint8(v___x_1196_, sizeof(void*)*2 + 1, v___y_1182_);
v___x_1197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1197_, 0, v_head_998_);
lean_ctor_set(v___x_1197_, 1, v___y_1184_);
v___x_1198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1196_);
lean_ctor_set(v___x_1198_, 1, v___x_1197_);
if (v_isShared_1191_ == 0)
{
lean_ctor_set(v___x_1190_, 0, v___x_1198_);
v___x_1200_ = v___x_1190_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1198_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
else
{
lean_object* v_a_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1210_; 
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v_arg_1017_);
lean_dec_ref(v___x_1014_);
lean_dec(v_head_998_);
v_a_1203_ = lean_ctor_get(v___x_1187_, 0);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1187_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1205_ = v___x_1187_;
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_a_1203_);
lean_dec(v___x_1187_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1208_; 
if (v_isShared_1206_ == 0)
{
v___x_1208_ = v___x_1205_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_a_1203_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
}
v___jp_1211_:
{
lean_object* v___x_1217_; 
v___x_1217_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v___y_1212_, v_a_931_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1233_; 
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1220_ = v___x_1217_;
v_isShared_1221_ = v_isSharedCheck_1233_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1233_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
uint8_t v___x_1222_; 
v___x_1222_ = lean_unbox(v_a_1218_);
if (v___x_1222_ == 0)
{
uint8_t v___x_1223_; 
lean_del_object(v___x_1220_);
v___x_1223_ = lean_unbox(v_a_1218_);
lean_dec(v_a_1218_);
v___y_1182_ = v___y_1216_;
v___y_1183_ = v___y_1212_;
v___y_1184_ = v___y_1215_;
v___y_1185_ = v___y_1214_;
v___y_1186_ = v___x_1223_;
goto v___jp_1181_;
}
else
{
lean_object* v_v_1224_; uint8_t v___x_1225_; 
lean_dec(v_a_1218_);
v_v_1224_ = lean_ctor_get(v_head_998_, 2);
v___x_1225_ = l_Lean_Level_isZero(v_v_1224_);
if (v___x_1225_ == 0)
{
lean_del_object(v___x_1220_);
v___y_1182_ = v___y_1216_;
v___y_1183_ = v___y_1212_;
v___y_1184_ = v___y_1215_;
v___y_1185_ = v___y_1214_;
v___y_1186_ = v___x_1225_;
goto v___jp_1181_;
}
else
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1231_; 
lean_dec_ref(v___y_1212_);
lean_dec_ref(v___x_1014_);
lean_dec(v_head_998_);
v___x_1226_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__16, &l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__16_once, _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__16);
lean_inc_ref(v_arg_1017_);
v___x_1227_ = l_Lean_mkApp3(v___x_1226_, v_arg_1018_, v_arg_1017_, v___y_1214_);
v___x_1228_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1228_, 0, v_arg_1017_);
lean_ctor_set(v___x_1228_, 1, v___x_1227_);
lean_ctor_set_uint8(v___x_1228_, sizeof(void*)*2, v___y_1213_);
lean_ctor_set_uint8(v___x_1228_, sizeof(void*)*2 + 1, v___y_1216_);
v___x_1229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1228_);
lean_ctor_set(v___x_1229_, 1, v___y_1215_);
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 0, v___x_1229_);
v___x_1231_ = v___x_1220_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v___x_1229_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
}
else
{
lean_object* v_a_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1241_; 
lean_dec(v___y_1215_);
lean_dec_ref(v___y_1214_);
lean_dec_ref(v___y_1212_);
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v_arg_1017_);
lean_dec_ref(v___x_1014_);
lean_dec(v_head_998_);
v_a_1234_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1236_ = v___x_1217_;
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_dec(v___x_1217_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1239_; 
if (v_isShared_1237_ == 0)
{
v___x_1239_ = v___x_1236_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1234_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
}
v___jp_1242_:
{
lean_object* v___x_1251_; 
lean_inc_ref(v___y_1243_);
lean_inc_ref(v___y_1246_);
lean_inc_ref(v___x_1014_);
v___x_1251_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0(v___x_1014_, v___y_1246_, v___y_1243_, v_a_928_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v_a_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v_a_1252_ = lean_ctor_get(v___x_1251_, 0);
lean_inc(v_a_1252_);
lean_dec_ref_known(v___x_1251_, 1);
v___x_1253_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___closed__18));
v___x_1254_ = l_Lean_Expr_constLevels_x21(v___x_1014_);
lean_dec_ref(v___x_1014_);
v___x_1255_ = l_Lean_mkConst(v___x_1253_, v___x_1254_);
v___x_1256_ = l_Lean_mkApp6(v___x_1255_, v_arg_1018_, v___y_1246_, v_arg_1017_, v___y_1243_, v___y_1248_, v___y_1249_);
if (v___y_1245_ == 0)
{
v___y_1001_ = v___x_1256_;
v___y_1002_ = v___y_1250_;
v___y_1003_ = v___y_1247_;
v___y_1004_ = v_a_1252_;
v___y_1005_ = v___y_1244_;
goto v___jp_1000_;
}
else
{
v___y_1001_ = v___x_1256_;
v___y_1002_ = v___y_1250_;
v___y_1003_ = v___y_1247_;
v___y_1004_ = v_a_1252_;
v___y_1005_ = v___y_1245_;
goto v___jp_1000_;
}
}
else
{
lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1264_; 
lean_dec_ref(v___y_1249_);
lean_dec_ref(v___y_1248_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
lean_dec_ref(v___y_1243_);
lean_dec_ref(v_arg_1018_);
lean_dec_ref(v_arg_1017_);
lean_dec_ref(v___x_1014_);
lean_dec(v_head_998_);
v_a_1257_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1259_ = v___x_1251_;
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_dec(v___x_1251_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1262_; 
if (v_isShared_1260_ == 0)
{
v___x_1262_ = v___x_1259_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_a_1257_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
}
}
}
}
}
v___jp_1000_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1006_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1006_, 0, v___y_1004_);
lean_ctor_set(v___x_1006_, 1, v___y_1001_);
lean_ctor_set_uint8(v___x_1006_, sizeof(void*)*2, v___y_1002_);
lean_ctor_set_uint8(v___x_1006_, sizeof(void*)*2 + 1, v___y_1005_);
v___x_1007_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1007_, 0, v_head_998_);
lean_ctor_set(v___x_1007_, 1, v___y_1003_);
v___x_1008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1006_);
lean_ctor_set(v___x_1008_, 1, v___x_1007_);
v___x_1009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1008_);
return v___x_1009_;
}
}
v___jp_938_:
{
lean_object* v___x_948_; 
lean_inc(v___y_947_);
lean_inc_ref(v___y_946_);
lean_inc(v___y_945_);
lean_inc_ref(v___y_944_);
lean_inc(v___y_943_);
lean_inc_ref(v___y_942_);
lean_inc(v___y_941_);
lean_inc_ref(v___y_940_);
lean_inc(v___y_939_);
v___x_948_ = lean_apply_11(v_simpBody_927_, v_e_925_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_, lean_box(0));
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_957_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_957_ == 0)
{
v___x_951_ = v___x_948_;
v_isShared_952_ = v_isSharedCheck_957_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_957_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_953_; lean_object* v___x_955_; 
v___x_953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_953_, 0, v_a_949_);
lean_ctor_set(v___x_953_, 1, v_infos_926_);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v___x_953_);
v___x_955_ = v___x_951_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___x_953_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
else
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
lean_dec(v_infos_926_);
v_a_958_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_948_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_948_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
v___jp_966_:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_968_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v___y_967_);
v___x_969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_969_, 0, v___x_968_);
lean_ctor_set(v___x_969_, 1, v_infos_926_);
v___x_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_970_, 0, v___x_969_);
return v___x_970_;
}
v___jp_971_:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_977_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_977_, 0, v___y_972_);
lean_ctor_set(v___x_977_, 1, v___y_973_);
lean_ctor_set_uint8(v___x_977_, sizeof(void*)*2, v___y_974_);
lean_ctor_set_uint8(v___x_977_, sizeof(void*)*2 + 1, v___y_976_);
v___x_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_977_);
lean_ctor_set(v___x_978_, 1, v___y_975_);
v___x_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_979_, 0, v___x_978_);
return v___x_979_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows___boxed(lean_object* v_e_1420_, lean_object* v_infos_1421_, lean_object* v_simpBody_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows(v_e_1420_, v_infos_1421_, v_simpBody_1422_, v_a_1423_, v_a_1424_, v_a_1425_, v_a_1426_, v_a_1427_, v_a_1428_, v_a_1429_, v_a_1430_, v_a_1431_);
lean_dec(v_a_1431_);
lean_dec_ref(v_a_1430_);
lean_dec(v_a_1429_);
lean_dec_ref(v_a_1428_);
lean_dec(v_a_1427_);
lean_dec_ref(v_a_1426_);
lean_dec(v_a_1425_);
lean_dec_ref(v_a_1424_);
lean_dec(v_a_1423_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0_spec__0(lean_object* v_f_1434_, lean_object* v_a_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_){
_start:
{
lean_object* v___x_1446_; 
v___x_1446_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0_spec__0___redArg(v_f_1434_, v_a_1435_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0_spec__0___boxed(lean_object* v_f_1447_, lean_object* v_a_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0_spec__0(v_f_1447_, v_a_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
lean_dec(v___y_1457_);
lean_dec_ref(v___y_1456_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v___y_1449_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpArrowTelescope(lean_object* v_simpBody_1467_, lean_object* v_e_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_){
_start:
{
uint8_t v___x_1479_; 
v___x_1479_ = l_Lean_Expr_isArrow(v_e_1468_);
if (v___x_1479_ == 0)
{
lean_object* v___x_1480_; lean_object* v___x_1481_; 
lean_dec_ref(v_e_1468_);
lean_dec_ref(v_simpBody_1467_);
v___x_1480_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1480_, 0, v___x_1479_);
lean_ctor_set_uint8(v___x_1480_, 1, v___x_1479_);
v___x_1481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1480_);
return v___x_1481_;
}
else
{
lean_object* v___x_1482_; 
lean_inc_ref(v_e_1468_);
v___x_1482_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow(v_e_1468_, v_a_1472_, v_a_1473_, v_a_1474_, v_a_1475_, v_a_1476_, v_a_1477_);
if (lean_obj_tag(v___x_1482_) == 0)
{
lean_object* v_a_1483_; lean_object* v_arrow_1484_; lean_object* v_infos_1485_; lean_object* v_v_1486_; lean_object* v___x_1487_; 
v_a_1483_ = lean_ctor_get(v___x_1482_, 0);
lean_inc(v_a_1483_);
lean_dec_ref_known(v___x_1482_, 1);
v_arrow_1484_ = lean_ctor_get(v_a_1483_, 0);
lean_inc_ref_n(v_arrow_1484_, 2);
v_infos_1485_ = lean_ctor_get(v_a_1483_, 1);
lean_inc(v_infos_1485_);
v_v_1486_ = lean_ctor_get(v_a_1483_, 2);
lean_inc(v_v_1486_);
lean_dec(v_a_1483_);
v___x_1487_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows(v_arrow_1484_, v_infos_1485_, v_simpBody_1467_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_, v_a_1473_, v_a_1474_, v_a_1475_, v_a_1476_, v_a_1477_);
if (lean_obj_tag(v___x_1487_) == 0)
{
lean_object* v_a_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1545_; 
v_a_1488_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1490_ = v___x_1487_;
v_isShared_1491_ = v_isSharedCheck_1545_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_a_1488_);
lean_dec(v___x_1487_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1545_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v_fst_1492_; 
v_fst_1492_ = lean_ctor_get(v_a_1488_, 0);
lean_inc(v_fst_1492_);
if (lean_obj_tag(v_fst_1492_) == 0)
{
uint8_t v_contextDependent_1493_; lean_object* v___x_1494_; lean_object* v___x_1496_; 
lean_dec(v_a_1488_);
lean_dec(v_v_1486_);
lean_dec_ref(v_arrow_1484_);
lean_dec_ref(v_e_1468_);
v_contextDependent_1493_ = lean_ctor_get_uint8(v_fst_1492_, 1);
lean_dec_ref_known(v_fst_1492_, 0);
v___x_1494_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_1479_, v_contextDependent_1493_);
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 0, v___x_1494_);
v___x_1496_ = v___x_1490_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v___x_1494_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
else
{
lean_object* v_snd_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1543_; 
lean_del_object(v___x_1490_);
v_snd_1498_ = lean_ctor_get(v_a_1488_, 1);
v_isSharedCheck_1543_ = !lean_is_exclusive(v_a_1488_);
if (v_isSharedCheck_1543_ == 0)
{
lean_object* v_unused_1544_; 
v_unused_1544_ = lean_ctor_get(v_a_1488_, 0);
lean_dec(v_unused_1544_);
v___x_1500_ = v_a_1488_;
v_isShared_1501_ = v_isSharedCheck_1543_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_snd_1498_);
lean_dec(v_a_1488_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1543_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v_e_x27_1502_; lean_object* v_proof_1503_; uint8_t v_contextDependent_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1542_; 
v_e_x27_1502_ = lean_ctor_get(v_fst_1492_, 0);
v_proof_1503_ = lean_ctor_get(v_fst_1492_, 1);
v_contextDependent_1504_ = lean_ctor_get_uint8(v_fst_1492_, sizeof(void*)*2 + 1);
v_isSharedCheck_1542_ = !lean_is_exclusive(v_fst_1492_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1506_ = v_fst_1492_;
v_isShared_1507_ = v_isSharedCheck_1542_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_proof_1503_);
lean_inc(v_e_x27_1502_);
lean_dec(v_fst_1492_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1542_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1508_; 
lean_inc_ref(v_e_x27_1502_);
v___x_1508_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toForall(v_e_x27_1502_, v_snd_1498_, v_a_1472_, v_a_1473_, v_a_1474_, v_a_1475_, v_a_1476_, v_a_1477_);
if (lean_obj_tag(v___x_1508_) == 0)
{
lean_object* v_a_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1533_; 
v_a_1509_ = lean_ctor_get(v___x_1508_, 0);
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1508_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1511_ = v___x_1508_;
v_isShared_1512_ = v_isSharedCheck_1533_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_a_1509_);
lean_dec(v___x_1508_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1533_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1518_; 
lean_inc(v_v_1486_);
v___x_1513_ = l_Lean_mkSort(v_v_1486_);
v___x_1514_ = l_Lean_Level_succ___override(v_v_1486_);
v___x_1515_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__1));
v___x_1516_ = lean_box(0);
if (v_isShared_1501_ == 0)
{
lean_ctor_set_tag(v___x_1500_, 1);
lean_ctor_set(v___x_1500_, 1, v___x_1516_);
lean_ctor_set(v___x_1500_, 0, v___x_1514_);
v___x_1518_ = v___x_1500_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v___x_1514_);
lean_ctor_set(v_reuseFailAlloc_1532_, 1, v___x_1516_);
v___x_1518_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1527_; 
lean_inc_ref(v___x_1518_);
v___x_1519_ = l_Lean_mkConst(v___x_1515_, v___x_1518_);
v___x_1520_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpArrowTelescope___closed__2));
v___x_1521_ = l_Lean_mkConst(v___x_1520_, v___x_1518_);
lean_inc_ref(v_arrow_1484_);
lean_inc_ref_n(v___x_1513_, 3);
lean_inc_ref(v___x_1521_);
v___x_1522_ = l_Lean_mkAppB(v___x_1521_, v___x_1513_, v_arrow_1484_);
lean_inc_ref(v_e_x27_1502_);
lean_inc_ref(v_e_1468_);
lean_inc_ref(v___x_1519_);
v___x_1523_ = l_Lean_mkApp6(v___x_1519_, v___x_1513_, v_e_1468_, v_arrow_1484_, v_e_x27_1502_, v___x_1522_, v_proof_1503_);
lean_inc_n(v_a_1509_, 2);
v___x_1524_ = l_Lean_mkAppB(v___x_1521_, v___x_1513_, v_a_1509_);
v___x_1525_ = l_Lean_mkApp6(v___x_1519_, v___x_1513_, v_e_1468_, v_e_x27_1502_, v_a_1509_, v___x_1523_, v___x_1524_);
if (v_isShared_1507_ == 0)
{
lean_ctor_set(v___x_1506_, 1, v___x_1525_);
lean_ctor_set(v___x_1506_, 0, v_a_1509_);
v___x_1527_ = v___x_1506_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1509_);
lean_ctor_set(v_reuseFailAlloc_1531_, 1, v___x_1525_);
lean_ctor_set_uint8(v_reuseFailAlloc_1531_, sizeof(void*)*2 + 1, v_contextDependent_1504_);
v___x_1527_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
lean_object* v___x_1529_; 
lean_ctor_set_uint8(v___x_1527_, sizeof(void*)*2, v___x_1479_);
if (v_isShared_1512_ == 0)
{
lean_ctor_set(v___x_1511_, 0, v___x_1527_);
v___x_1529_ = v___x_1511_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v___x_1527_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
}
}
}
else
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1541_; 
lean_del_object(v___x_1506_);
lean_dec_ref(v_proof_1503_);
lean_dec_ref(v_e_x27_1502_);
lean_del_object(v___x_1500_);
lean_dec(v_v_1486_);
lean_dec_ref(v_arrow_1484_);
lean_dec_ref(v_e_1468_);
v_a_1534_ = lean_ctor_get(v___x_1508_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1508_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1536_ = v___x_1508_;
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1508_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
v___x_1539_ = v___x_1536_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1534_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
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
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
lean_dec(v_v_1486_);
lean_dec_ref(v_arrow_1484_);
lean_dec_ref(v_e_1468_);
v_a_1546_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1487_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1487_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_a_1546_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
}
else
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1561_; 
lean_dec_ref(v_e_1468_);
lean_dec_ref(v_simpBody_1467_);
v_a_1554_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1556_ = v___x_1482_;
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1482_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1557_ == 0)
{
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1554_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpArrowTelescope___boxed(lean_object* v_simpBody_1562_, lean_object* v_e_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l_Lean_Meta_Sym_Simp_simpArrowTelescope(v_simpBody_1562_, v_e_1563_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_);
lean_dec(v_a_1572_);
lean_dec_ref(v_a_1571_);
lean_dec(v_a_1570_);
lean_dec_ref(v_a_1569_);
lean_dec(v_a_1568_);
lean_dec_ref(v_a_1567_);
lean_dec(v_a_1566_);
lean_dec_ref(v_a_1565_);
lean_dec(v_a_1564_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0___redArg(lean_object* v_x_1575_, uint8_t v_bi_1576_, lean_object* v_t_1577_, lean_object* v_b_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v___y_1587_; lean_object* v___x_1590_; uint8_t v_debug_1591_; 
v___x_1590_ = lean_st_ref_get(v___y_1580_);
v_debug_1591_ = lean_ctor_get_uint8(v___x_1590_, sizeof(void*)*13);
lean_dec(v___x_1590_);
if (v_debug_1591_ == 0)
{
v___y_1587_ = v___y_1580_;
goto v___jp_1586_;
}
else
{
lean_object* v___x_1592_; 
v___x_1592_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_1577_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
if (lean_obj_tag(v___x_1592_) == 0)
{
lean_object* v___x_1593_; 
lean_dec_ref_known(v___x_1592_, 1);
v___x_1593_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_dec_ref_known(v___x_1593_, 1);
v___y_1587_ = v___y_1580_;
goto v___jp_1586_;
}
else
{
lean_object* v_a_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1601_; 
lean_dec_ref(v_b_1578_);
lean_dec_ref(v_t_1577_);
lean_dec(v_x_1575_);
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1596_ = v___x_1593_;
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_a_1594_);
lean_dec(v___x_1593_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1599_; 
if (v_isShared_1597_ == 0)
{
v___x_1599_ = v___x_1596_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_a_1594_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
}
else
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
lean_dec_ref(v_b_1578_);
lean_dec_ref(v_t_1577_);
lean_dec(v_x_1575_);
v_a_1602_ = lean_ctor_get(v___x_1592_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1592_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1604_ = v___x_1592_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1592_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v_a_1602_);
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
v___jp_1586_:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1588_ = l_Lean_Expr_forallE___override(v_x_1575_, v_t_1577_, v_b_1578_, v_bi_1576_);
v___x_1589_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_1588_, v___y_1587_);
return v___x_1589_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0___redArg___boxed(lean_object* v_x_1610_, lean_object* v_bi_1611_, lean_object* v_t_1612_, lean_object* v_b_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_){
_start:
{
uint8_t v_bi_boxed_1621_; lean_object* v_res_1622_; 
v_bi_boxed_1621_ = lean_unbox(v_bi_1611_);
v_res_1622_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0___redArg(v_x_1610_, v_bi_boxed_1621_, v_t_1612_, v_b_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0(lean_object* v_x_1623_, uint8_t v_bi_1624_, lean_object* v_t_1625_, lean_object* v_b_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v___x_1637_; 
v___x_1637_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0___redArg(v_x_1623_, v_bi_1624_, v_t_1625_, v_b_1626_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0___boxed(lean_object* v_x_1638_, lean_object* v_bi_1639_, lean_object* v_t_1640_, lean_object* v_b_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_){
_start:
{
uint8_t v_bi_boxed_1652_; lean_object* v_res_1653_; 
v_bi_boxed_1652_ = lean_unbox(v_bi_1639_);
v_res_1653_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0(v_x_1638_, v_bi_boxed_1652_, v_t_1640_, v_b_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_);
lean_dec(v___y_1650_);
lean_dec_ref(v___y_1649_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
lean_dec(v___y_1646_);
lean_dec_ref(v___y_1645_);
lean_dec(v___y_1644_);
lean_dec_ref(v___y_1643_);
lean_dec(v___y_1642_);
return v_res_1653_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1654_; 
v___x_1654_ = l_instMonadEIO___redArg();
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1(lean_object* v_msg_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v_toApplicative_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1738_; 
v___x_1670_ = lean_obj_once(&l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__0, &l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__0_once, _init_l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__0);
v___x_1671_ = l_StateRefT_x27_instMonad___redArg(v___x_1670_);
v_toApplicative_1672_ = lean_ctor_get(v___x_1671_, 0);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1738_ == 0)
{
lean_object* v_unused_1739_; 
v_unused_1739_ = lean_ctor_get(v___x_1671_, 1);
lean_dec(v_unused_1739_);
v___x_1674_ = v___x_1671_;
v_isShared_1675_ = v_isSharedCheck_1738_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_toApplicative_1672_);
lean_dec(v___x_1671_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1738_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v_toFunctor_1676_; lean_object* v_toSeq_1677_; lean_object* v_toSeqLeft_1678_; lean_object* v_toSeqRight_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1736_; 
v_toFunctor_1676_ = lean_ctor_get(v_toApplicative_1672_, 0);
v_toSeq_1677_ = lean_ctor_get(v_toApplicative_1672_, 2);
v_toSeqLeft_1678_ = lean_ctor_get(v_toApplicative_1672_, 3);
v_toSeqRight_1679_ = lean_ctor_get(v_toApplicative_1672_, 4);
v_isSharedCheck_1736_ = !lean_is_exclusive(v_toApplicative_1672_);
if (v_isSharedCheck_1736_ == 0)
{
lean_object* v_unused_1737_; 
v_unused_1737_ = lean_ctor_get(v_toApplicative_1672_, 1);
lean_dec(v_unused_1737_);
v___x_1681_ = v_toApplicative_1672_;
v_isShared_1682_ = v_isSharedCheck_1736_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_toSeqRight_1679_);
lean_inc(v_toSeqLeft_1678_);
lean_inc(v_toSeq_1677_);
lean_inc(v_toFunctor_1676_);
lean_dec(v_toApplicative_1672_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1736_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___f_1683_; lean_object* v___f_1684_; lean_object* v___f_1685_; lean_object* v___f_1686_; lean_object* v___x_1687_; lean_object* v___f_1688_; lean_object* v___f_1689_; lean_object* v___f_1690_; lean_object* v___x_1692_; 
v___f_1683_ = ((lean_object*)(l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__1));
v___f_1684_ = ((lean_object*)(l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__2));
lean_inc_ref(v_toFunctor_1676_);
v___f_1685_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1685_, 0, v_toFunctor_1676_);
v___f_1686_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1686_, 0, v_toFunctor_1676_);
v___x_1687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1687_, 0, v___f_1685_);
lean_ctor_set(v___x_1687_, 1, v___f_1686_);
v___f_1688_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1688_, 0, v_toSeqRight_1679_);
v___f_1689_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1689_, 0, v_toSeqLeft_1678_);
v___f_1690_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1690_, 0, v_toSeq_1677_);
if (v_isShared_1682_ == 0)
{
lean_ctor_set(v___x_1681_, 4, v___f_1688_);
lean_ctor_set(v___x_1681_, 3, v___f_1689_);
lean_ctor_set(v___x_1681_, 2, v___f_1690_);
lean_ctor_set(v___x_1681_, 1, v___f_1683_);
lean_ctor_set(v___x_1681_, 0, v___x_1687_);
v___x_1692_ = v___x_1681_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v___x_1687_);
lean_ctor_set(v_reuseFailAlloc_1735_, 1, v___f_1683_);
lean_ctor_set(v_reuseFailAlloc_1735_, 2, v___f_1690_);
lean_ctor_set(v_reuseFailAlloc_1735_, 3, v___f_1689_);
lean_ctor_set(v_reuseFailAlloc_1735_, 4, v___f_1688_);
v___x_1692_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
lean_object* v___x_1694_; 
if (v_isShared_1675_ == 0)
{
lean_ctor_set(v___x_1674_, 1, v___f_1684_);
lean_ctor_set(v___x_1674_, 0, v___x_1692_);
v___x_1694_ = v___x_1674_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v___x_1692_);
lean_ctor_set(v_reuseFailAlloc_1734_, 1, v___f_1684_);
v___x_1694_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
lean_object* v___x_1695_; lean_object* v_toApplicative_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1732_; 
v___x_1695_ = l_StateRefT_x27_instMonad___redArg(v___x_1694_);
v_toApplicative_1696_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1732_ == 0)
{
lean_object* v_unused_1733_; 
v_unused_1733_ = lean_ctor_get(v___x_1695_, 1);
lean_dec(v_unused_1733_);
v___x_1698_ = v___x_1695_;
v_isShared_1699_ = v_isSharedCheck_1732_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_toApplicative_1696_);
lean_dec(v___x_1695_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1732_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v_toFunctor_1700_; lean_object* v_toSeq_1701_; lean_object* v_toSeqLeft_1702_; lean_object* v_toSeqRight_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1730_; 
v_toFunctor_1700_ = lean_ctor_get(v_toApplicative_1696_, 0);
v_toSeq_1701_ = lean_ctor_get(v_toApplicative_1696_, 2);
v_toSeqLeft_1702_ = lean_ctor_get(v_toApplicative_1696_, 3);
v_toSeqRight_1703_ = lean_ctor_get(v_toApplicative_1696_, 4);
v_isSharedCheck_1730_ = !lean_is_exclusive(v_toApplicative_1696_);
if (v_isSharedCheck_1730_ == 0)
{
lean_object* v_unused_1731_; 
v_unused_1731_ = lean_ctor_get(v_toApplicative_1696_, 1);
lean_dec(v_unused_1731_);
v___x_1705_ = v_toApplicative_1696_;
v_isShared_1706_ = v_isSharedCheck_1730_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_toSeqRight_1703_);
lean_inc(v_toSeqLeft_1702_);
lean_inc(v_toSeq_1701_);
lean_inc(v_toFunctor_1700_);
lean_dec(v_toApplicative_1696_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1730_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___f_1707_; lean_object* v___f_1708_; lean_object* v___f_1709_; lean_object* v___f_1710_; lean_object* v___x_1711_; lean_object* v___f_1712_; lean_object* v___f_1713_; lean_object* v___f_1714_; lean_object* v___x_1716_; 
v___f_1707_ = ((lean_object*)(l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__3));
v___f_1708_ = ((lean_object*)(l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___closed__4));
lean_inc_ref(v_toFunctor_1700_);
v___f_1709_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1709_, 0, v_toFunctor_1700_);
v___f_1710_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1710_, 0, v_toFunctor_1700_);
v___x_1711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1711_, 0, v___f_1709_);
lean_ctor_set(v___x_1711_, 1, v___f_1710_);
v___f_1712_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1712_, 0, v_toSeqRight_1703_);
v___f_1713_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1713_, 0, v_toSeqLeft_1702_);
v___f_1714_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1714_, 0, v_toSeq_1701_);
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 4, v___f_1712_);
lean_ctor_set(v___x_1705_, 3, v___f_1713_);
lean_ctor_set(v___x_1705_, 2, v___f_1714_);
lean_ctor_set(v___x_1705_, 1, v___f_1707_);
lean_ctor_set(v___x_1705_, 0, v___x_1711_);
v___x_1716_ = v___x_1705_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v___x_1711_);
lean_ctor_set(v_reuseFailAlloc_1729_, 1, v___f_1707_);
lean_ctor_set(v_reuseFailAlloc_1729_, 2, v___f_1714_);
lean_ctor_set(v_reuseFailAlloc_1729_, 3, v___f_1713_);
lean_ctor_set(v_reuseFailAlloc_1729_, 4, v___f_1712_);
v___x_1716_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
lean_object* v___x_1718_; 
if (v_isShared_1699_ == 0)
{
lean_ctor_set(v___x_1698_, 1, v___f_1708_);
lean_ctor_set(v___x_1698_, 0, v___x_1716_);
v___x_1718_ = v___x_1698_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v___x_1716_);
lean_ctor_set(v_reuseFailAlloc_1728_, 1, v___f_1708_);
v___x_1718_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_24914__overap_1726_; lean_object* v___x_1727_; 
v___x_1719_ = l_StateRefT_x27_instMonad___redArg(v___x_1718_);
v___x_1720_ = l_ReaderT_instMonad___redArg(v___x_1719_);
v___x_1721_ = l_StateRefT_x27_instMonad___redArg(v___x_1720_);
v___x_1722_ = l_ReaderT_instMonad___redArg(v___x_1721_);
v___x_1723_ = l_ReaderT_instMonad___redArg(v___x_1722_);
v___x_1724_ = l_Lean_instInhabitedExpr;
v___x_1725_ = l_instInhabitedOfMonad___redArg(v___x_1723_, v___x_1724_);
v___x_24914__overap_1726_ = lean_panic_fn_borrowed(v___x_1725_, v_msg_1659_);
lean_dec(v___x_1725_);
lean_inc(v___y_1668_);
lean_inc_ref(v___y_1667_);
lean_inc(v___y_1666_);
lean_inc_ref(v___y_1665_);
lean_inc(v___y_1664_);
lean_inc_ref(v___y_1663_);
lean_inc(v___y_1662_);
lean_inc_ref(v___y_1661_);
lean_inc(v___y_1660_);
v___x_1727_ = lean_apply_10(v___x_24914__overap_1726_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_, lean_box(0));
return v___x_1727_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1___boxed(lean_object* v_msg_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1(v_msg_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_, v___y_1749_);
lean_dec(v___y_1749_);
lean_dec_ref(v___y_1748_);
lean_dec(v___y_1747_);
lean_dec_ref(v___y_1746_);
lean_dec(v___y_1745_);
lean_dec_ref(v___y_1744_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec(v___y_1741_);
return v_res_1751_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpArrow___closed__5(void){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
v___x_1758_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpArrow___closed__4));
v___x_1759_ = lean_unsigned_to_nat(31u);
v___x_1760_ = lean_unsigned_to_nat(160u);
v___x_1761_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpArrow___closed__3));
v___x_1762_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpArrow___closed__2));
v___x_1763_ = l_mkPanicMessageWithDecl(v___x_1762_, v___x_1761_, v___x_1760_, v___x_1759_, v___x_1758_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpArrow(lean_object* v_e_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_){
_start:
{
uint8_t v___y_1782_; lean_object* v___y_1783_; lean_object* v___y_1784_; uint8_t v___y_1785_; uint8_t v___y_1789_; lean_object* v___y_1790_; lean_object* v___y_1791_; uint8_t v___y_1792_; uint8_t v___y_1796_; lean_object* v___y_1797_; lean_object* v___y_1798_; uint8_t v___y_1799_; lean_object* v_p_1802_; lean_object* v_q_1803_; lean_object* v___x_1804_; 
v_p_1802_ = l_Lean_Expr_bindingDomain_x21(v_e_1770_);
v_q_1803_ = l_Lean_Expr_bindingBody_x21(v_e_1770_);
lean_inc(v_a_1779_);
lean_inc_ref(v_a_1778_);
lean_inc(v_a_1777_);
lean_inc_ref(v_a_1776_);
lean_inc(v_a_1775_);
lean_inc_ref(v_a_1774_);
lean_inc(v_a_1773_);
lean_inc_ref(v_a_1772_);
lean_inc(v_a_1771_);
lean_inc_ref(v_p_1802_);
v___x_1804_ = lean_sym_simp(v_p_1802_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
if (lean_obj_tag(v___x_1804_) == 0)
{
lean_object* v_a_1805_; lean_object* v___x_1806_; 
v_a_1805_ = lean_ctor_get(v___x_1804_, 0);
lean_inc(v_a_1805_);
lean_dec_ref_known(v___x_1804_, 1);
lean_inc(v_a_1779_);
lean_inc_ref(v_a_1778_);
lean_inc(v_a_1777_);
lean_inc_ref(v_a_1776_);
lean_inc(v_a_1775_);
lean_inc_ref(v_a_1774_);
lean_inc(v_a_1773_);
lean_inc_ref(v_a_1772_);
lean_inc(v_a_1771_);
lean_inc_ref(v_q_1803_);
v___x_1806_ = lean_sym_simp(v_q_1803_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
if (lean_obj_tag(v___x_1806_) == 0)
{
lean_object* v_a_1807_; lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1995_; 
v_a_1807_ = lean_ctor_get(v___x_1806_, 0);
v_isSharedCheck_1995_ = !lean_is_exclusive(v___x_1806_);
if (v_isSharedCheck_1995_ == 0)
{
v___x_1809_ = v___x_1806_;
v_isShared_1810_ = v_isSharedCheck_1995_;
goto v_resetjp_1808_;
}
else
{
lean_inc(v_a_1807_);
lean_dec(v___x_1806_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1995_;
goto v_resetjp_1808_;
}
v_resetjp_1808_:
{
uint8_t v___y_1812_; 
if (lean_obj_tag(v_a_1805_) == 0)
{
if (lean_obj_tag(v_a_1807_) == 0)
{
uint8_t v_contextDependent_1817_; 
lean_dec_ref(v_q_1803_);
lean_dec_ref(v_p_1802_);
lean_dec_ref(v_e_1770_);
v_contextDependent_1817_ = lean_ctor_get_uint8(v_a_1805_, 1);
lean_dec_ref_known(v_a_1805_, 0);
if (v_contextDependent_1817_ == 0)
{
uint8_t v_contextDependent_1818_; 
v_contextDependent_1818_ = lean_ctor_get_uint8(v_a_1807_, 1);
lean_dec_ref_known(v_a_1807_, 0);
v___y_1812_ = v_contextDependent_1818_;
goto v___jp_1811_;
}
else
{
lean_dec_ref_known(v_a_1807_, 0);
v___y_1812_ = v_contextDependent_1817_;
goto v___jp_1811_;
}
}
else
{
uint8_t v_contextDependent_1819_; lean_object* v_e_x27_1820_; lean_object* v_proof_1821_; uint8_t v_contextDependent_1822_; lean_object* v___x_1823_; 
lean_del_object(v___x_1809_);
v_contextDependent_1819_ = lean_ctor_get_uint8(v_a_1805_, 1);
lean_dec_ref_known(v_a_1805_, 0);
v_e_x27_1820_ = lean_ctor_get(v_a_1807_, 0);
lean_inc_ref(v_e_x27_1820_);
v_proof_1821_ = lean_ctor_get(v_a_1807_, 1);
lean_inc_ref(v_proof_1821_);
v_contextDependent_1822_ = lean_ctor_get_uint8(v_a_1807_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1807_, 2);
lean_inc_ref(v_p_1802_);
v___x_1823_ = l_Lean_Meta_Sym_getLevel___redArg(v_p_1802_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1825_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1823_, 1);
lean_inc_ref(v_q_1803_);
v___x_1825_ = l_Lean_Meta_Sym_getLevel___redArg(v_q_1803_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
if (lean_obj_tag(v___x_1825_) == 0)
{
lean_object* v_a_1826_; lean_object* v_a_1828_; lean_object* v___y_1837_; 
v_a_1826_ = lean_ctor_get(v___x_1825_, 0);
lean_inc(v_a_1826_);
lean_dec_ref_known(v___x_1825_, 1);
if (lean_obj_tag(v_e_1770_) == 7)
{
lean_object* v_binderName_1847_; lean_object* v_binderType_1848_; lean_object* v_body_1849_; uint8_t v_binderInfo_1850_; size_t v___x_1851_; size_t v___x_1852_; uint8_t v___x_1853_; 
v_binderName_1847_ = lean_ctor_get(v_e_1770_, 0);
v_binderType_1848_ = lean_ctor_get(v_e_1770_, 1);
v_body_1849_ = lean_ctor_get(v_e_1770_, 2);
v_binderInfo_1850_ = lean_ctor_get_uint8(v_e_1770_, sizeof(void*)*3 + 8);
v___x_1851_ = lean_ptr_addr(v_binderType_1848_);
v___x_1852_ = lean_ptr_addr(v_p_1802_);
v___x_1853_ = lean_usize_dec_eq(v___x_1851_, v___x_1852_);
if (v___x_1853_ == 0)
{
lean_object* v___x_1854_; 
lean_inc(v_binderName_1847_);
lean_dec_ref_known(v_e_1770_, 3);
lean_inc_ref(v_e_x27_1820_);
lean_inc_ref(v_p_1802_);
v___x_1854_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0___redArg(v_binderName_1847_, v_binderInfo_1850_, v_p_1802_, v_e_x27_1820_, v_a_1774_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
v___y_1837_ = v___x_1854_;
goto v___jp_1836_;
}
else
{
size_t v___x_1855_; size_t v___x_1856_; uint8_t v___x_1857_; 
v___x_1855_ = lean_ptr_addr(v_body_1849_);
v___x_1856_ = lean_ptr_addr(v_e_x27_1820_);
v___x_1857_ = lean_usize_dec_eq(v___x_1855_, v___x_1856_);
if (v___x_1857_ == 0)
{
lean_object* v___x_1858_; 
lean_inc(v_binderName_1847_);
lean_dec_ref_known(v_e_1770_, 3);
lean_inc_ref(v_e_x27_1820_);
lean_inc_ref(v_p_1802_);
v___x_1858_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0___redArg(v_binderName_1847_, v_binderInfo_1850_, v_p_1802_, v_e_x27_1820_, v_a_1774_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
v___y_1837_ = v___x_1858_;
goto v___jp_1836_;
}
else
{
v_a_1828_ = v_e_1770_;
goto v___jp_1827_;
}
}
}
else
{
lean_object* v___x_1859_; lean_object* v___x_1860_; 
lean_dec_ref(v_e_1770_);
v___x_1859_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpArrow___closed__5, &l_Lean_Meta_Sym_Simp_simpArrow___closed__5_once, _init_l_Lean_Meta_Sym_Simp_simpArrow___closed__5);
v___x_1860_ = l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1(v___x_1859_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
v___y_1837_ = v___x_1860_;
goto v___jp_1836_;
}
v___jp_1827_:
{
lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; uint8_t v___x_1835_; 
v___x_1829_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpArrow___closed__1));
v___x_1830_ = lean_box(0);
v___x_1831_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1831_, 0, v_a_1826_);
lean_ctor_set(v___x_1831_, 1, v___x_1830_);
v___x_1832_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1832_, 0, v_a_1824_);
lean_ctor_set(v___x_1832_, 1, v___x_1831_);
v___x_1833_ = l_Lean_mkConst(v___x_1829_, v___x_1832_);
v___x_1834_ = l_Lean_mkApp4(v___x_1833_, v_p_1802_, v_q_1803_, v_e_x27_1820_, v_proof_1821_);
v___x_1835_ = 0;
if (v_contextDependent_1819_ == 0)
{
v___y_1782_ = v___x_1835_;
v___y_1783_ = v_a_1828_;
v___y_1784_ = v___x_1834_;
v___y_1785_ = v_contextDependent_1822_;
goto v___jp_1781_;
}
else
{
v___y_1782_ = v___x_1835_;
v___y_1783_ = v_a_1828_;
v___y_1784_ = v___x_1834_;
v___y_1785_ = v_contextDependent_1819_;
goto v___jp_1781_;
}
}
v___jp_1836_:
{
if (lean_obj_tag(v___y_1837_) == 0)
{
lean_object* v_a_1838_; 
v_a_1838_ = lean_ctor_get(v___y_1837_, 0);
lean_inc(v_a_1838_);
lean_dec_ref_known(v___y_1837_, 1);
v_a_1828_ = v_a_1838_;
goto v___jp_1827_;
}
else
{
lean_object* v_a_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1846_; 
lean_dec(v_a_1826_);
lean_dec(v_a_1824_);
lean_dec_ref(v_proof_1821_);
lean_dec_ref(v_e_x27_1820_);
lean_dec_ref(v_q_1803_);
lean_dec_ref(v_p_1802_);
v_a_1839_ = lean_ctor_get(v___y_1837_, 0);
v_isSharedCheck_1846_ = !lean_is_exclusive(v___y_1837_);
if (v_isSharedCheck_1846_ == 0)
{
v___x_1841_ = v___y_1837_;
v_isShared_1842_ = v_isSharedCheck_1846_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_a_1839_);
lean_dec(v___y_1837_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1846_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1844_; 
if (v_isShared_1842_ == 0)
{
v___x_1844_ = v___x_1841_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v_a_1839_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
return v___x_1844_;
}
}
}
}
}
else
{
lean_object* v_a_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1868_; 
lean_dec(v_a_1824_);
lean_dec_ref(v_proof_1821_);
lean_dec_ref(v_e_x27_1820_);
lean_dec_ref(v_q_1803_);
lean_dec_ref(v_p_1802_);
lean_dec_ref(v_e_1770_);
v_a_1861_ = lean_ctor_get(v___x_1825_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1825_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1863_ = v___x_1825_;
v_isShared_1864_ = v_isSharedCheck_1868_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_a_1861_);
lean_dec(v___x_1825_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1868_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
lean_object* v___x_1866_; 
if (v_isShared_1864_ == 0)
{
v___x_1866_ = v___x_1863_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v_a_1861_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
}
}
else
{
lean_object* v_a_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1876_; 
lean_dec_ref(v_proof_1821_);
lean_dec_ref(v_e_x27_1820_);
lean_dec_ref(v_q_1803_);
lean_dec_ref(v_p_1802_);
lean_dec_ref(v_e_1770_);
v_a_1869_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1871_ = v___x_1823_;
v_isShared_1872_ = v_isSharedCheck_1876_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_a_1869_);
lean_dec(v___x_1823_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1876_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1874_; 
if (v_isShared_1872_ == 0)
{
v___x_1874_ = v___x_1871_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_a_1869_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
}
}
else
{
lean_del_object(v___x_1809_);
if (lean_obj_tag(v_a_1807_) == 0)
{
lean_object* v_e_x27_1877_; lean_object* v_proof_1878_; uint8_t v_contextDependent_1879_; uint8_t v_contextDependent_1880_; lean_object* v___x_1881_; 
v_e_x27_1877_ = lean_ctor_get(v_a_1805_, 0);
lean_inc_ref(v_e_x27_1877_);
v_proof_1878_ = lean_ctor_get(v_a_1805_, 1);
lean_inc_ref(v_proof_1878_);
v_contextDependent_1879_ = lean_ctor_get_uint8(v_a_1805_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1805_, 2);
v_contextDependent_1880_ = lean_ctor_get_uint8(v_a_1807_, 1);
lean_dec_ref_known(v_a_1807_, 0);
lean_inc_ref(v_p_1802_);
v___x_1881_ = l_Lean_Meta_Sym_getLevel___redArg(v_p_1802_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1883_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
lean_inc(v_a_1882_);
lean_dec_ref_known(v___x_1881_, 1);
lean_inc_ref(v_q_1803_);
v___x_1883_ = l_Lean_Meta_Sym_getLevel___redArg(v_q_1803_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; lean_object* v_a_1886_; lean_object* v___y_1895_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref_known(v___x_1883_, 1);
if (lean_obj_tag(v_e_1770_) == 7)
{
lean_object* v_binderName_1905_; lean_object* v_binderType_1906_; lean_object* v_body_1907_; uint8_t v_binderInfo_1908_; size_t v___x_1909_; size_t v___x_1910_; uint8_t v___x_1911_; 
v_binderName_1905_ = lean_ctor_get(v_e_1770_, 0);
v_binderType_1906_ = lean_ctor_get(v_e_1770_, 1);
v_body_1907_ = lean_ctor_get(v_e_1770_, 2);
v_binderInfo_1908_ = lean_ctor_get_uint8(v_e_1770_, sizeof(void*)*3 + 8);
v___x_1909_ = lean_ptr_addr(v_binderType_1906_);
v___x_1910_ = lean_ptr_addr(v_e_x27_1877_);
v___x_1911_ = lean_usize_dec_eq(v___x_1909_, v___x_1910_);
if (v___x_1911_ == 0)
{
lean_object* v___x_1912_; 
lean_inc(v_binderName_1905_);
lean_dec_ref_known(v_e_1770_, 3);
lean_inc_ref(v_q_1803_);
lean_inc_ref(v_e_x27_1877_);
v___x_1912_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0___redArg(v_binderName_1905_, v_binderInfo_1908_, v_e_x27_1877_, v_q_1803_, v_a_1774_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
v___y_1895_ = v___x_1912_;
goto v___jp_1894_;
}
else
{
size_t v___x_1913_; size_t v___x_1914_; uint8_t v___x_1915_; 
v___x_1913_ = lean_ptr_addr(v_body_1907_);
v___x_1914_ = lean_ptr_addr(v_q_1803_);
v___x_1915_ = lean_usize_dec_eq(v___x_1913_, v___x_1914_);
if (v___x_1915_ == 0)
{
lean_object* v___x_1916_; 
lean_inc(v_binderName_1905_);
lean_dec_ref_known(v_e_1770_, 3);
lean_inc_ref(v_q_1803_);
lean_inc_ref(v_e_x27_1877_);
v___x_1916_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0___redArg(v_binderName_1905_, v_binderInfo_1908_, v_e_x27_1877_, v_q_1803_, v_a_1774_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
v___y_1895_ = v___x_1916_;
goto v___jp_1894_;
}
else
{
v_a_1886_ = v_e_1770_;
goto v___jp_1885_;
}
}
}
else
{
lean_object* v___x_1917_; lean_object* v___x_1918_; 
lean_dec_ref(v_e_1770_);
v___x_1917_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpArrow___closed__5, &l_Lean_Meta_Sym_Simp_simpArrow___closed__5_once, _init_l_Lean_Meta_Sym_Simp_simpArrow___closed__5);
v___x_1918_ = l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1(v___x_1917_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
v___y_1895_ = v___x_1918_;
goto v___jp_1894_;
}
v___jp_1885_:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; uint8_t v___x_1893_; 
v___x_1887_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpArrow___closed__7));
v___x_1888_ = lean_box(0);
v___x_1889_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1889_, 0, v_a_1884_);
lean_ctor_set(v___x_1889_, 1, v___x_1888_);
v___x_1890_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1890_, 0, v_a_1882_);
lean_ctor_set(v___x_1890_, 1, v___x_1889_);
v___x_1891_ = l_Lean_mkConst(v___x_1887_, v___x_1890_);
v___x_1892_ = l_Lean_mkApp4(v___x_1891_, v_p_1802_, v_e_x27_1877_, v_q_1803_, v_proof_1878_);
v___x_1893_ = 0;
if (v_contextDependent_1879_ == 0)
{
v___y_1789_ = v___x_1893_;
v___y_1790_ = v___x_1892_;
v___y_1791_ = v_a_1886_;
v___y_1792_ = v_contextDependent_1880_;
goto v___jp_1788_;
}
else
{
v___y_1789_ = v___x_1893_;
v___y_1790_ = v___x_1892_;
v___y_1791_ = v_a_1886_;
v___y_1792_ = v_contextDependent_1879_;
goto v___jp_1788_;
}
}
v___jp_1894_:
{
if (lean_obj_tag(v___y_1895_) == 0)
{
lean_object* v_a_1896_; 
v_a_1896_ = lean_ctor_get(v___y_1895_, 0);
lean_inc(v_a_1896_);
lean_dec_ref_known(v___y_1895_, 1);
v_a_1886_ = v_a_1896_;
goto v___jp_1885_;
}
else
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1904_; 
lean_dec(v_a_1884_);
lean_dec(v_a_1882_);
lean_dec_ref(v_proof_1878_);
lean_dec_ref(v_e_x27_1877_);
lean_dec_ref(v_q_1803_);
lean_dec_ref(v_p_1802_);
v_a_1897_ = lean_ctor_get(v___y_1895_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___y_1895_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1899_ = v___y_1895_;
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___y_1895_);
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
}
else
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1926_; 
lean_dec(v_a_1882_);
lean_dec_ref(v_proof_1878_);
lean_dec_ref(v_e_x27_1877_);
lean_dec_ref(v_q_1803_);
lean_dec_ref(v_p_1802_);
lean_dec_ref(v_e_1770_);
v_a_1919_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1921_ = v___x_1883_;
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1883_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1919_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
else
{
lean_object* v_a_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1934_; 
lean_dec_ref(v_proof_1878_);
lean_dec_ref(v_e_x27_1877_);
lean_dec_ref(v_q_1803_);
lean_dec_ref(v_p_1802_);
lean_dec_ref(v_e_1770_);
v_a_1927_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1934_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1934_ == 0)
{
v___x_1929_ = v___x_1881_;
v_isShared_1930_ = v_isSharedCheck_1934_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_a_1927_);
lean_dec(v___x_1881_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1934_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v___x_1932_; 
if (v_isShared_1930_ == 0)
{
v___x_1932_ = v___x_1929_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_a_1927_);
v___x_1932_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
return v___x_1932_;
}
}
}
}
else
{
lean_object* v_e_x27_1935_; lean_object* v_proof_1936_; uint8_t v_contextDependent_1937_; lean_object* v_e_x27_1938_; lean_object* v_proof_1939_; uint8_t v_contextDependent_1940_; lean_object* v___x_1941_; 
v_e_x27_1935_ = lean_ctor_get(v_a_1805_, 0);
lean_inc_ref(v_e_x27_1935_);
v_proof_1936_ = lean_ctor_get(v_a_1805_, 1);
lean_inc_ref(v_proof_1936_);
v_contextDependent_1937_ = lean_ctor_get_uint8(v_a_1805_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1805_, 2);
v_e_x27_1938_ = lean_ctor_get(v_a_1807_, 0);
lean_inc_ref(v_e_x27_1938_);
v_proof_1939_ = lean_ctor_get(v_a_1807_, 1);
lean_inc_ref(v_proof_1939_);
v_contextDependent_1940_ = lean_ctor_get_uint8(v_a_1807_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1807_, 2);
lean_inc_ref(v_p_1802_);
v___x_1941_ = l_Lean_Meta_Sym_getLevel___redArg(v_p_1802_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v___x_1943_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1942_);
lean_dec_ref_known(v___x_1941_, 1);
lean_inc_ref(v_q_1803_);
v___x_1943_ = l_Lean_Meta_Sym_getLevel___redArg(v_q_1803_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
if (lean_obj_tag(v___x_1943_) == 0)
{
lean_object* v_a_1944_; lean_object* v_a_1946_; lean_object* v___y_1955_; 
v_a_1944_ = lean_ctor_get(v___x_1943_, 0);
lean_inc(v_a_1944_);
lean_dec_ref_known(v___x_1943_, 1);
if (lean_obj_tag(v_e_1770_) == 7)
{
lean_object* v_binderName_1965_; lean_object* v_binderType_1966_; lean_object* v_body_1967_; uint8_t v_binderInfo_1968_; size_t v___x_1969_; size_t v___x_1970_; uint8_t v___x_1971_; 
v_binderName_1965_ = lean_ctor_get(v_e_1770_, 0);
v_binderType_1966_ = lean_ctor_get(v_e_1770_, 1);
v_body_1967_ = lean_ctor_get(v_e_1770_, 2);
v_binderInfo_1968_ = lean_ctor_get_uint8(v_e_1770_, sizeof(void*)*3 + 8);
v___x_1969_ = lean_ptr_addr(v_binderType_1966_);
v___x_1970_ = lean_ptr_addr(v_e_x27_1935_);
v___x_1971_ = lean_usize_dec_eq(v___x_1969_, v___x_1970_);
if (v___x_1971_ == 0)
{
lean_object* v___x_1972_; 
lean_inc(v_binderName_1965_);
lean_dec_ref_known(v_e_1770_, 3);
lean_inc_ref(v_e_x27_1938_);
lean_inc_ref(v_e_x27_1935_);
v___x_1972_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0___redArg(v_binderName_1965_, v_binderInfo_1968_, v_e_x27_1935_, v_e_x27_1938_, v_a_1774_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
v___y_1955_ = v___x_1972_;
goto v___jp_1954_;
}
else
{
size_t v___x_1973_; size_t v___x_1974_; uint8_t v___x_1975_; 
v___x_1973_ = lean_ptr_addr(v_body_1967_);
v___x_1974_ = lean_ptr_addr(v_e_x27_1938_);
v___x_1975_ = lean_usize_dec_eq(v___x_1973_, v___x_1974_);
if (v___x_1975_ == 0)
{
lean_object* v___x_1976_; 
lean_inc(v_binderName_1965_);
lean_dec_ref_known(v_e_1770_, 3);
lean_inc_ref(v_e_x27_1938_);
lean_inc_ref(v_e_x27_1935_);
v___x_1976_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Sym_Simp_simpArrow_spec__0___redArg(v_binderName_1965_, v_binderInfo_1968_, v_e_x27_1935_, v_e_x27_1938_, v_a_1774_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
v___y_1955_ = v___x_1976_;
goto v___jp_1954_;
}
else
{
v_a_1946_ = v_e_1770_;
goto v___jp_1945_;
}
}
}
else
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
lean_dec_ref(v_e_1770_);
v___x_1977_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpArrow___closed__5, &l_Lean_Meta_Sym_Simp_simpArrow___closed__5_once, _init_l_Lean_Meta_Sym_Simp_simpArrow___closed__5);
v___x_1978_ = l_panic___at___00Lean_Meta_Sym_Simp_simpArrow_spec__1(v___x_1977_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_, v_a_1779_);
v___y_1955_ = v___x_1978_;
goto v___jp_1954_;
}
v___jp_1945_:
{
lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; uint8_t v___x_1953_; 
v___x_1947_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpArrow___closed__9));
v___x_1948_ = lean_box(0);
v___x_1949_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1949_, 0, v_a_1944_);
lean_ctor_set(v___x_1949_, 1, v___x_1948_);
v___x_1950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1950_, 0, v_a_1942_);
lean_ctor_set(v___x_1950_, 1, v___x_1949_);
v___x_1951_ = l_Lean_mkConst(v___x_1947_, v___x_1950_);
v___x_1952_ = l_Lean_mkApp6(v___x_1951_, v_p_1802_, v_e_x27_1935_, v_q_1803_, v_e_x27_1938_, v_proof_1936_, v_proof_1939_);
v___x_1953_ = 0;
if (v_contextDependent_1937_ == 0)
{
v___y_1796_ = v___x_1953_;
v___y_1797_ = v_a_1946_;
v___y_1798_ = v___x_1952_;
v___y_1799_ = v_contextDependent_1940_;
goto v___jp_1795_;
}
else
{
v___y_1796_ = v___x_1953_;
v___y_1797_ = v_a_1946_;
v___y_1798_ = v___x_1952_;
v___y_1799_ = v_contextDependent_1937_;
goto v___jp_1795_;
}
}
v___jp_1954_:
{
if (lean_obj_tag(v___y_1955_) == 0)
{
lean_object* v_a_1956_; 
v_a_1956_ = lean_ctor_get(v___y_1955_, 0);
lean_inc(v_a_1956_);
lean_dec_ref_known(v___y_1955_, 1);
v_a_1946_ = v_a_1956_;
goto v___jp_1945_;
}
else
{
lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1964_; 
lean_dec(v_a_1944_);
lean_dec(v_a_1942_);
lean_dec_ref(v_proof_1939_);
lean_dec_ref(v_e_x27_1938_);
lean_dec_ref(v_proof_1936_);
lean_dec_ref(v_e_x27_1935_);
lean_dec_ref(v_q_1803_);
lean_dec_ref(v_p_1802_);
v_a_1957_ = lean_ctor_get(v___y_1955_, 0);
v_isSharedCheck_1964_ = !lean_is_exclusive(v___y_1955_);
if (v_isSharedCheck_1964_ == 0)
{
v___x_1959_ = v___y_1955_;
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_dec(v___y_1955_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1962_; 
if (v_isShared_1960_ == 0)
{
v___x_1962_ = v___x_1959_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v_a_1957_);
v___x_1962_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
return v___x_1962_;
}
}
}
}
}
else
{
lean_object* v_a_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1986_; 
lean_dec(v_a_1942_);
lean_dec_ref(v_proof_1939_);
lean_dec_ref(v_e_x27_1938_);
lean_dec_ref(v_proof_1936_);
lean_dec_ref(v_e_x27_1935_);
lean_dec_ref(v_q_1803_);
lean_dec_ref(v_p_1802_);
lean_dec_ref(v_e_1770_);
v_a_1979_ = lean_ctor_get(v___x_1943_, 0);
v_isSharedCheck_1986_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_1986_ == 0)
{
v___x_1981_ = v___x_1943_;
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_a_1979_);
lean_dec(v___x_1943_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1984_; 
if (v_isShared_1982_ == 0)
{
v___x_1984_ = v___x_1981_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v_a_1979_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
return v___x_1984_;
}
}
}
}
else
{
lean_object* v_a_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1994_; 
lean_dec_ref(v_proof_1939_);
lean_dec_ref(v_e_x27_1938_);
lean_dec_ref(v_proof_1936_);
lean_dec_ref(v_e_x27_1935_);
lean_dec_ref(v_q_1803_);
lean_dec_ref(v_p_1802_);
lean_dec_ref(v_e_1770_);
v_a_1987_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1989_ = v___x_1941_;
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_a_1987_);
lean_dec(v___x_1941_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1992_; 
if (v_isShared_1990_ == 0)
{
v___x_1992_ = v___x_1989_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_a_1987_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
}
}
}
v___jp_1811_:
{
lean_object* v___x_1813_; lean_object* v___x_1815_; 
v___x_1813_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v___y_1812_);
if (v_isShared_1810_ == 0)
{
lean_ctor_set(v___x_1809_, 0, v___x_1813_);
v___x_1815_ = v___x_1809_;
goto v_reusejp_1814_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v___x_1813_);
v___x_1815_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1814_;
}
v_reusejp_1814_:
{
return v___x_1815_;
}
}
}
}
else
{
lean_dec(v_a_1805_);
lean_dec_ref(v_q_1803_);
lean_dec_ref(v_p_1802_);
lean_dec_ref(v_e_1770_);
return v___x_1806_;
}
}
else
{
lean_dec_ref(v_q_1803_);
lean_dec_ref(v_p_1802_);
lean_dec_ref(v_e_1770_);
return v___x_1804_;
}
v___jp_1781_:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1786_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1786_, 0, v___y_1783_);
lean_ctor_set(v___x_1786_, 1, v___y_1784_);
lean_ctor_set_uint8(v___x_1786_, sizeof(void*)*2, v___y_1782_);
lean_ctor_set_uint8(v___x_1786_, sizeof(void*)*2 + 1, v___y_1785_);
v___x_1787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1787_, 0, v___x_1786_);
return v___x_1787_;
}
v___jp_1788_:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; 
v___x_1793_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1793_, 0, v___y_1791_);
lean_ctor_set(v___x_1793_, 1, v___y_1790_);
lean_ctor_set_uint8(v___x_1793_, sizeof(void*)*2, v___y_1789_);
lean_ctor_set_uint8(v___x_1793_, sizeof(void*)*2 + 1, v___y_1792_);
v___x_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1794_, 0, v___x_1793_);
return v___x_1794_;
}
v___jp_1795_:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1800_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1800_, 0, v___y_1797_);
lean_ctor_set(v___x_1800_, 1, v___y_1798_);
lean_ctor_set_uint8(v___x_1800_, sizeof(void*)*2, v___y_1796_);
lean_ctor_set_uint8(v___x_1800_, sizeof(void*)*2 + 1, v___y_1799_);
v___x_1801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1800_);
return v___x_1801_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpArrow___boxed(lean_object* v_e_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_){
_start:
{
lean_object* v_res_2007_; 
v_res_2007_ = l_Lean_Meta_Sym_Simp_simpArrow(v_e_1996_, v_a_1997_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_, v_a_2005_);
lean_dec(v_a_2005_);
lean_dec_ref(v_a_2004_);
lean_dec(v_a_2003_);
lean_dec_ref(v_a_2002_);
lean_dec(v_a_2001_);
lean_dec_ref(v_a_2000_);
lean_dec(v_a_1999_);
lean_dec_ref(v_a_1998_);
lean_dec(v_a_1997_);
return v_res_2007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__0___redArg(lean_object* v_u_2008_, lean_object* v___y_2009_){
_start:
{
lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2011_ = l_Lean_Expr_sort___override(v_u_2008_);
v___x_2012_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2011_, v___y_2009_);
return v___x_2012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__0___redArg___boxed(lean_object* v_u_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_){
_start:
{
lean_object* v_res_2016_; 
v_res_2016_ = l_Lean_Meta_Sym_Internal_mkSortS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__0___redArg(v_u_2013_, v___y_2014_);
lean_dec(v___y_2014_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__0(lean_object* v_u_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_){
_start:
{
lean_object* v___x_2025_; 
v___x_2025_ = l_Lean_Meta_Sym_Internal_mkSortS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__0___redArg(v_u_2017_, v___y_2019_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__0___boxed(lean_object* v_u_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_){
_start:
{
lean_object* v_res_2034_; 
v_res_2034_ = l_Lean_Meta_Sym_Internal_mkSortS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__0(v_u_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
lean_dec(v___y_2032_);
lean_dec_ref(v___y_2031_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
return v_res_2034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__1___redArg(lean_object* v_idx_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2038_ = l_Lean_Expr_bvar___override(v_idx_2035_);
v___x_2039_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2038_, v___y_2036_);
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__1___redArg___boxed(lean_object* v_idx_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_){
_start:
{
lean_object* v_res_2043_; 
v_res_2043_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__1___redArg(v_idx_2040_, v___y_2041_);
lean_dec(v___y_2041_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__1(lean_object* v_idx_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_){
_start:
{
lean_object* v___x_2052_; 
v___x_2052_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__1___redArg(v_idx_2044_, v___y_2046_);
return v___x_2052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__1___boxed(lean_object* v_idx_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_){
_start:
{
lean_object* v_res_2061_; 
v_res_2061_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__1(v_idx_2053_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_);
lean_dec(v___y_2059_);
lean_dec_ref(v___y_2058_);
lean_dec(v___y_2057_);
lean_dec_ref(v___y_2056_);
lean_dec(v___y_2055_);
lean_dec_ref(v___y_2054_);
return v_res_2061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__2(lean_object* v_x_2062_, uint8_t v_bi_2063_, lean_object* v_t_2064_, lean_object* v_b_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_){
_start:
{
lean_object* v___y_2074_; lean_object* v___x_2077_; uint8_t v_debug_2078_; 
v___x_2077_ = lean_st_ref_get(v___y_2067_);
v_debug_2078_ = lean_ctor_get_uint8(v___x_2077_, sizeof(void*)*13);
lean_dec(v___x_2077_);
if (v_debug_2078_ == 0)
{
v___y_2074_ = v___y_2067_;
goto v___jp_2073_;
}
else
{
lean_object* v___x_2079_; 
v___x_2079_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_2064_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_);
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_object* v___x_2080_; 
lean_dec_ref_known(v___x_2079_, 1);
v___x_2080_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_);
if (lean_obj_tag(v___x_2080_) == 0)
{
lean_dec_ref_known(v___x_2080_, 1);
v___y_2074_ = v___y_2067_;
goto v___jp_2073_;
}
else
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2088_; 
lean_dec_ref(v_b_2065_);
lean_dec_ref(v_t_2064_);
lean_dec(v_x_2062_);
v_a_2081_ = lean_ctor_get(v___x_2080_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2083_ = v___x_2080_;
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___x_2080_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_a_2081_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
}
else
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2096_; 
lean_dec_ref(v_b_2065_);
lean_dec_ref(v_t_2064_);
lean_dec(v_x_2062_);
v_a_2089_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2091_ = v___x_2079_;
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_2079_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2094_; 
if (v_isShared_2092_ == 0)
{
v___x_2094_ = v___x_2091_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_a_2089_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
}
v___jp_2073_:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; 
v___x_2075_ = l_Lean_Expr_lam___override(v_x_2062_, v_t_2064_, v_b_2065_, v_bi_2063_);
v___x_2076_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2075_, v___y_2074_);
return v___x_2076_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__2___boxed(lean_object* v_x_2097_, lean_object* v_bi_2098_, lean_object* v_t_2099_, lean_object* v_b_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_){
_start:
{
uint8_t v_bi_boxed_2108_; lean_object* v_res_2109_; 
v_bi_boxed_2108_ = lean_unbox(v_bi_2098_);
v_res_2109_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__2(v_x_2097_, v_bi_boxed_2108_, v_t_2099_, v_b_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
lean_dec(v___y_2106_);
lean_dec_ref(v___y_2105_);
lean_dec(v___y_2104_);
lean_dec_ref(v___y_2103_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
return v_res_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3_spec__4_spec__5(lean_object* v_f_2110_, lean_object* v_a_u2081_2111_, lean_object* v_a_u2082_2112_, lean_object* v_a_u2083_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_){
_start:
{
lean_object* v___x_2121_; 
v___x_2121_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1(v_f_2110_, v_a_u2081_2111_, v_a_u2082_2112_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_);
if (lean_obj_tag(v___x_2121_) == 0)
{
lean_object* v_a_2122_; lean_object* v___x_2123_; 
v_a_2122_ = lean_ctor_get(v___x_2121_, 0);
lean_inc(v_a_2122_);
lean_dec_ref_known(v___x_2121_, 1);
v___x_2123_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1_spec__1(v_a_2122_, v_a_u2083_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_);
return v___x_2123_;
}
else
{
lean_dec_ref(v_a_u2083_2113_);
return v___x_2121_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3_spec__4_spec__5___boxed(lean_object* v_f_2124_, lean_object* v_a_u2081_2125_, lean_object* v_a_u2082_2126_, lean_object* v_a_u2083_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_){
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3_spec__4_spec__5(v_f_2124_, v_a_u2081_2125_, v_a_u2082_2126_, v_a_u2083_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec(v___y_2131_);
lean_dec_ref(v___y_2130_);
lean_dec(v___y_2129_);
lean_dec_ref(v___y_2128_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3_spec__4(lean_object* v_f_2136_, lean_object* v_a_u2081_2137_, lean_object* v_a_u2082_2138_, lean_object* v_a_u2083_2139_, lean_object* v_a_u2084_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_){
_start:
{
lean_object* v___x_2148_; 
v___x_2148_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3_spec__4_spec__5(v_f_2136_, v_a_u2081_2137_, v_a_u2082_2138_, v_a_u2083_2139_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; lean_object* v___x_2150_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_a_2149_);
lean_dec_ref_known(v___x_2148_, 1);
v___x_2150_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1_spec__1(v_a_2149_, v_a_u2084_2140_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_);
return v___x_2150_;
}
else
{
lean_dec_ref(v_a_u2084_2140_);
return v___x_2148_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3_spec__4___boxed(lean_object* v_f_2151_, lean_object* v_a_u2081_2152_, lean_object* v_a_u2082_2153_, lean_object* v_a_u2083_2154_, lean_object* v_a_u2084_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_){
_start:
{
lean_object* v_res_2163_; 
v_res_2163_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3_spec__4(v_f_2151_, v_a_u2081_2152_, v_a_u2082_2153_, v_a_u2083_2154_, v_a_u2084_2155_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_, v___y_2161_);
lean_dec(v___y_2161_);
lean_dec_ref(v___y_2160_);
lean_dec(v___y_2159_);
lean_dec_ref(v___y_2158_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3(lean_object* v_f_2164_, lean_object* v_a_u2081_2165_, lean_object* v_a_u2082_2166_, lean_object* v_a_u2083_2167_, lean_object* v_a_u2084_2168_, lean_object* v_a_u2085_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_){
_start:
{
lean_object* v___x_2177_; 
v___x_2177_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3_spec__4(v_f_2164_, v_a_u2081_2165_, v_a_u2082_2166_, v_a_u2083_2167_, v_a_u2084_2168_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_);
if (lean_obj_tag(v___x_2177_) == 0)
{
lean_object* v_a_2178_; lean_object* v___x_2179_; 
v_a_2178_ = lean_ctor_get(v___x_2177_, 0);
lean_inc(v_a_2178_);
lean_dec_ref_known(v___x_2177_, 1);
v___x_2179_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1_spec__1(v_a_2178_, v_a_u2085_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_);
return v___x_2179_;
}
else
{
lean_dec_ref(v_a_u2085_2169_);
return v___x_2177_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3___boxed(lean_object* v_f_2180_, lean_object* v_a_u2081_2181_, lean_object* v_a_u2082_2182_, lean_object* v_a_u2083_2183_, lean_object* v_a_u2084_2184_, lean_object* v_a_u2085_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_){
_start:
{
lean_object* v_res_2193_; 
v_res_2193_ = l_Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3(v_f_2180_, v_a_u2081_2181_, v_a_u2082_2182_, v_a_u2083_2183_, v_a_u2084_2184_, v_a_u2085_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
return v_res_2193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3(lean_object* v_f_2194_, lean_object* v_a_u2081_2195_, lean_object* v_a_u2082_2196_, lean_object* v_a_u2083_2197_, lean_object* v_a_u2084_2198_, lean_object* v_a_u2085_2199_, lean_object* v_a_u2086_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_){
_start:
{
lean_object* v___x_2208_; 
v___x_2208_ = l_Lean_Meta_Sym_Internal_mkAppS_u2085___at___00Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3_spec__3(v_f_2194_, v_a_u2081_2195_, v_a_u2082_2196_, v_a_u2083_2197_, v_a_u2084_2198_, v_a_u2085_2199_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_);
if (lean_obj_tag(v___x_2208_) == 0)
{
lean_object* v_a_2209_; lean_object* v___x_2210_; 
v_a_2209_ = lean_ctor_get(v___x_2208_, 0);
lean_inc(v_a_2209_);
lean_dec_ref_known(v___x_2208_, 1);
v___x_2210_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__1_spec__1(v_a_2209_, v_a_u2086_2200_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_);
return v___x_2210_;
}
else
{
lean_dec_ref(v_a_u2086_2200_);
return v___x_2208_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3___boxed(lean_object* v_f_2211_, lean_object* v_a_u2081_2212_, lean_object* v_a_u2082_2213_, lean_object* v_a_u2083_2214_, lean_object* v_a_u2084_2215_, lean_object* v_a_u2085_2216_, lean_object* v_a_u2086_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = l_Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3(v_f_2211_, v_a_u2081_2212_, v_a_u2082_2213_, v_a_u2083_2214_, v_a_u2084_2215_, v_a_u2085_2216_, v_a_u2086_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_);
lean_dec(v___y_2223_);
lean_dec_ref(v___y_2222_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
lean_dec(v___y_2219_);
lean_dec_ref(v___y_2218_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS(lean_object* v_p_u2081_2233_, lean_object* v_p_u2082_2234_, lean_object* v_h_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_){
_start:
{
lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2244_ = lean_unsigned_to_nat(0u);
v___x_2245_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__0, &l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__0_once, _init_l_Lean_Meta_Sym_Simp_mkForallCongrFor___closed__0);
v___x_2246_ = l_Lean_Meta_Sym_Internal_mkSortS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__0___redArg(v___x_2245_, v_a_2238_);
if (lean_obj_tag(v___x_2246_) == 0)
{
lean_object* v_a_2247_; lean_object* v___x_2248_; 
v_a_2247_ = lean_ctor_get(v___x_2246_, 0);
lean_inc(v_a_2247_);
lean_dec_ref_known(v___x_2246_, 1);
v___x_2248_ = l_Lean_Meta_Sym_shareCommon(v_h_2235_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_, v_a_2241_, v_a_2242_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v_a_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
v_a_2249_ = lean_ctor_get(v___x_2248_, 0);
lean_inc(v_a_2249_);
lean_dec_ref_known(v___x_2248_, 1);
v___x_2250_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__1));
v___x_2251_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__3, &l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__3_once, _init_l_Lean_Meta_Sym_Simp_mkForallCongrFor___lam__2___closed__3);
v___x_2252_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_toArrow_spec__0___redArg(v___x_2250_, v___x_2251_, v_a_2238_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; lean_object* v___x_2254_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_a_2253_);
lean_dec_ref_known(v___x_2252_, 1);
v___x_2254_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__1___redArg(v___x_2244_, v_a_2238_);
if (lean_obj_tag(v___x_2254_) == 0)
{
lean_object* v_a_2255_; lean_object* v___x_2256_; uint8_t v___x_2257_; lean_object* v___x_2258_; 
v_a_2255_ = lean_ctor_get(v___x_2254_, 0);
lean_inc(v_a_2255_);
lean_dec_ref_known(v___x_2254_, 1);
v___x_2256_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___closed__3));
v___x_2257_ = 0;
lean_inc(v_a_2247_);
v___x_2258_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__2(v___x_2256_, v___x_2257_, v_a_2247_, v_a_2255_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_, v_a_2241_, v_a_2242_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2260_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_a_2259_);
lean_dec_ref_known(v___x_2258_, 1);
v___x_2260_ = l_Lean_Meta_Sym_Internal_mkAppS_u2086___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS_spec__3(v_a_2253_, v_a_2247_, v_a_2259_, v_p_u2082_2234_, v_p_u2081_2233_, v_a_2249_, v_a_2236_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_, v_a_2241_, v_a_2242_);
return v___x_2260_;
}
else
{
lean_dec(v_a_2253_);
lean_dec(v_a_2249_);
lean_dec(v_a_2247_);
lean_dec_ref(v_a_2236_);
lean_dec_ref(v_p_u2082_2234_);
lean_dec_ref(v_p_u2081_2233_);
return v___x_2258_;
}
}
else
{
lean_dec(v_a_2253_);
lean_dec(v_a_2249_);
lean_dec(v_a_2247_);
lean_dec_ref(v_a_2236_);
lean_dec_ref(v_p_u2082_2234_);
lean_dec_ref(v_p_u2081_2233_);
return v___x_2254_;
}
}
else
{
lean_dec(v_a_2249_);
lean_dec(v_a_2247_);
lean_dec_ref(v_a_2236_);
lean_dec_ref(v_p_u2082_2234_);
lean_dec_ref(v_p_u2081_2233_);
return v___x_2252_;
}
}
else
{
lean_dec(v_a_2247_);
lean_dec_ref(v_a_2236_);
lean_dec_ref(v_p_u2082_2234_);
lean_dec_ref(v_p_u2081_2233_);
return v___x_2248_;
}
}
else
{
lean_dec_ref(v_a_2236_);
lean_dec_ref(v_h_2235_);
lean_dec_ref(v_p_u2082_2234_);
lean_dec_ref(v_p_u2081_2233_);
return v___x_2246_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS___boxed(lean_object* v_p_u2081_2261_, lean_object* v_p_u2082_2262_, lean_object* v_h_2263_, lean_object* v_a_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_){
_start:
{
lean_object* v_res_2272_; 
v_res_2272_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS(v_p_u2081_2261_, v_p_u2082_2262_, v_h_2263_, v_a_2264_, v_a_2265_, v_a_2266_, v_a_2267_, v_a_2268_, v_a_2269_, v_a_2270_);
lean_dec(v_a_2270_);
lean_dec_ref(v_a_2269_);
lean_dec(v_a_2268_);
lean_dec_ref(v_a_2267_);
lean_dec(v_a_2266_);
lean_dec_ref(v_a_2265_);
return v_res_2272_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2273_; 
v___x_2273_ = l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg();
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__1(lean_object* v_msg_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_){
_start:
{
lean_object* v___x_2285_; lean_object* v___x_10050__overap_2286_; lean_object* v___x_2287_; 
v___x_2285_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__1___closed__0);
v___x_10050__overap_2286_ = lean_panic_fn_borrowed(v___x_2285_, v_msg_2274_);
lean_inc(v___y_2283_);
lean_inc_ref(v___y_2282_);
lean_inc(v___y_2281_);
lean_inc_ref(v___y_2280_);
lean_inc(v___y_2279_);
lean_inc_ref(v___y_2278_);
lean_inc(v___y_2277_);
lean_inc_ref(v___y_2276_);
lean_inc(v___y_2275_);
v___x_2287_ = lean_apply_10(v___x_10050__overap_2286_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, lean_box(0));
return v___x_2287_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__1___boxed(lean_object* v_msg_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_){
_start:
{
lean_object* v_res_2299_; 
v_res_2299_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__1(v_msg_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_);
lean_dec(v___y_2297_);
lean_dec_ref(v___y_2296_);
lean_dec(v___y_2295_);
lean_dec_ref(v___y_2294_);
lean_dec(v___y_2293_);
lean_dec_ref(v___y_2292_);
lean_dec(v___y_2291_);
lean_dec_ref(v___y_2290_);
lean_dec(v___y_2289_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__0(lean_object* v___y_2300_, lean_object* v_transientCache_2301_, lean_object* v_funext_2302_, lean_object* v_a_x3f_2303_){
_start:
{
lean_object* v___x_2305_; lean_object* v_numSteps_2306_; lean_object* v_persistentCache_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2317_; 
v___x_2305_ = lean_st_ref_take(v___y_2300_);
v_numSteps_2306_ = lean_ctor_get(v___x_2305_, 0);
v_persistentCache_2307_ = lean_ctor_get(v___x_2305_, 1);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2317_ == 0)
{
lean_object* v_unused_2318_; lean_object* v_unused_2319_; 
v_unused_2318_ = lean_ctor_get(v___x_2305_, 3);
lean_dec(v_unused_2318_);
v_unused_2319_ = lean_ctor_get(v___x_2305_, 2);
lean_dec(v_unused_2319_);
v___x_2309_ = v___x_2305_;
v_isShared_2310_ = v_isSharedCheck_2317_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_persistentCache_2307_);
lean_inc(v_numSteps_2306_);
lean_dec(v___x_2305_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2317_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2311_; lean_object* v___x_2313_; 
v___x_2311_ = lean_box(0);
if (v_isShared_2310_ == 0)
{
lean_ctor_set(v___x_2309_, 3, v_funext_2302_);
lean_ctor_set(v___x_2309_, 2, v_transientCache_2301_);
v___x_2313_ = v___x_2309_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_numSteps_2306_);
lean_ctor_set(v_reuseFailAlloc_2316_, 1, v_persistentCache_2307_);
lean_ctor_set(v_reuseFailAlloc_2316_, 2, v_transientCache_2301_);
lean_ctor_set(v_reuseFailAlloc_2316_, 3, v_funext_2302_);
v___x_2313_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2314_ = lean_st_ref_put(v___y_2300_, v___x_2313_);
v___x_2315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2311_);
return v___x_2315_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__0___boxed(lean_object* v___y_2320_, lean_object* v_transientCache_2321_, lean_object* v_funext_2322_, lean_object* v_a_x3f_2323_, lean_object* v___y_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__0(v___y_2320_, v_transientCache_2321_, v_funext_2322_, v_a_x3f_2323_);
lean_dec(v_a_x3f_2323_);
lean_dec(v___y_2320_);
return v_res_2325_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__2(void){
_start:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2329_ = lean_box(0);
v___x_2330_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__1));
v___x_2331_ = l_Lean_mkConst(v___x_2330_, v___x_2329_);
return v___x_2331_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__5(void){
_start:
{
lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
v___x_2335_ = lean_box(0);
v___x_2336_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__4));
v___x_2337_ = l_Lean_mkConst(v___x_2336_, v___x_2335_);
return v___x_2337_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1(lean_object* v_binderType_2338_, lean_object* v_p_u2082_2339_, lean_object* v_h_2340_, lean_object* v_body_2341_, lean_object* v_simpBody_2342_, lean_object* v_q_u2081_2343_, lean_object* v_a_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_){
_start:
{
lean_object* v___x_2355_; lean_object* v_transientCache_2356_; lean_object* v___x_2357_; lean_object* v_funext_2358_; lean_object* v_a_2360_; lean_object* v_a_2372_; lean_object* v___x_2383_; 
v___x_2355_ = lean_st_ref_get(v___y_2347_);
v_transientCache_2356_ = lean_ctor_get(v___x_2355_, 2);
lean_inc_ref(v_transientCache_2356_);
lean_dec(v___x_2355_);
v___x_2357_ = lean_st_ref_get(v___y_2347_);
v_funext_2358_ = lean_ctor_get(v___x_2357_, 3);
lean_inc_ref(v_funext_2358_);
lean_dec(v___x_2357_);
lean_inc_ref(v_a_2344_);
lean_inc_ref(v_h_2340_);
lean_inc_ref(v_p_u2082_2339_);
lean_inc_ref(v_binderType_2338_);
v___x_2383_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS(v_binderType_2338_, v_p_u2082_2339_, v_h_2340_, v_a_2344_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_);
if (lean_obj_tag(v___x_2383_) == 0)
{
lean_object* v_a_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; 
v_a_2384_ = lean_ctor_get(v___x_2383_, 0);
lean_inc(v_a_2384_);
lean_dec_ref_known(v___x_2383_, 1);
v___x_2385_ = lean_unsigned_to_nat(1u);
v___x_2386_ = lean_mk_empty_array_with_capacity(v___x_2385_);
lean_inc_ref(v___x_2386_);
v___x_2387_ = lean_array_push(v___x_2386_, v_a_2384_);
v___x_2388_ = l_Lean_Meta_Sym_instantiateS(v_body_2341_, v___x_2387_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v_a_2389_; lean_object* v___x_2390_; 
v_a_2389_ = lean_ctor_get(v___x_2388_, 0);
lean_inc_n(v_a_2389_, 2);
lean_dec_ref_known(v___x_2388_, 1);
lean_inc(v___y_2353_);
lean_inc_ref(v___y_2352_);
lean_inc(v___y_2351_);
lean_inc_ref(v___y_2350_);
lean_inc(v___y_2349_);
lean_inc_ref(v___y_2348_);
lean_inc(v___y_2347_);
lean_inc_ref(v___y_2346_);
lean_inc(v___y_2345_);
v___x_2390_ = lean_apply_11(v_simpBody_2342_, v_a_2389_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_, lean_box(0));
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_object* v_a_2391_; 
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
lean_inc(v_a_2391_);
lean_dec_ref_known(v___x_2390_, 1);
if (lean_obj_tag(v_a_2391_) == 0)
{
uint8_t v_contextDependent_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; 
v_contextDependent_2392_ = lean_ctor_get_uint8(v_a_2391_, 1);
lean_dec_ref_known(v_a_2391_, 0);
v___x_2393_ = lean_array_push(v___x_2386_, v_a_2344_);
v___x_2394_ = l_Lean_Meta_Sym_mkForallFVarsS(v___x_2393_, v_a_2389_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_);
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v_a_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; uint8_t v___x_2398_; lean_object* v___x_2399_; 
v_a_2395_ = lean_ctor_get(v___x_2394_, 0);
lean_inc(v_a_2395_);
lean_dec_ref_known(v___x_2394_, 1);
v___x_2396_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__2, &l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__2);
v___x_2397_ = l_Lean_mkApp4(v___x_2396_, v_binderType_2338_, v_p_u2082_2339_, v_h_2340_, v_q_u2081_2343_);
v___x_2398_ = 0;
v___x_2399_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2399_, 0, v_a_2395_);
lean_ctor_set(v___x_2399_, 1, v___x_2397_);
lean_ctor_set_uint8(v___x_2399_, sizeof(void*)*2, v___x_2398_);
lean_ctor_set_uint8(v___x_2399_, sizeof(void*)*2 + 1, v_contextDependent_2392_);
v_a_2372_ = v___x_2399_;
goto v___jp_2371_;
}
else
{
lean_object* v_a_2400_; 
lean_dec_ref(v_q_u2081_2343_);
lean_dec_ref(v_h_2340_);
lean_dec_ref(v_p_u2082_2339_);
lean_dec_ref(v_binderType_2338_);
v_a_2400_ = lean_ctor_get(v___x_2394_, 0);
lean_inc(v_a_2400_);
lean_dec_ref_known(v___x_2394_, 1);
v_a_2360_ = v_a_2400_;
goto v___jp_2359_;
}
}
else
{
lean_object* v_e_x27_2401_; lean_object* v_proof_2402_; uint8_t v_contextDependent_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2425_; 
lean_dec(v_a_2389_);
v_e_x27_2401_ = lean_ctor_get(v_a_2391_, 0);
v_proof_2402_ = lean_ctor_get(v_a_2391_, 1);
v_contextDependent_2403_ = lean_ctor_get_uint8(v_a_2391_, sizeof(void*)*2 + 1);
v_isSharedCheck_2425_ = !lean_is_exclusive(v_a_2391_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2405_ = v_a_2391_;
v_isShared_2406_ = v_isSharedCheck_2425_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_proof_2402_);
lean_inc(v_e_x27_2401_);
lean_dec(v_a_2391_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2425_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2407_; uint8_t v___x_2408_; uint8_t v___x_2409_; uint8_t v___x_2410_; lean_object* v___x_2411_; 
v___x_2407_ = lean_array_push(v___x_2386_, v_a_2344_);
v___x_2408_ = 0;
v___x_2409_ = 1;
v___x_2410_ = 1;
v___x_2411_ = l_Lean_Meta_mkLambdaFVars(v___x_2407_, v_proof_2402_, v___x_2408_, v___x_2409_, v___x_2408_, v___x_2409_, v___x_2410_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_);
if (lean_obj_tag(v___x_2411_) == 0)
{
lean_object* v_a_2412_; lean_object* v___x_2413_; 
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_a_2412_);
lean_dec_ref_known(v___x_2411_, 1);
lean_inc_ref(v_e_x27_2401_);
v___x_2413_ = l_Lean_Meta_mkLambdaFVars(v___x_2407_, v_e_x27_2401_, v___x_2408_, v___x_2409_, v___x_2408_, v___x_2409_, v___x_2410_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2415_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
lean_inc(v_a_2414_);
lean_dec_ref_known(v___x_2413_, 1);
v___x_2415_ = l_Lean_Meta_Sym_mkForallFVarsS(v___x_2407_, v_e_x27_2401_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_);
if (lean_obj_tag(v___x_2415_) == 0)
{
lean_object* v_a_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2420_; 
v_a_2416_ = lean_ctor_get(v___x_2415_, 0);
lean_inc(v_a_2416_);
lean_dec_ref_known(v___x_2415_, 1);
v___x_2417_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__5, &l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__5_once, _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___closed__5);
v___x_2418_ = l_Lean_mkApp6(v___x_2417_, v_binderType_2338_, v_p_u2082_2339_, v_q_u2081_2343_, v_a_2414_, v_h_2340_, v_a_2412_);
if (v_isShared_2406_ == 0)
{
lean_ctor_set(v___x_2405_, 1, v___x_2418_);
lean_ctor_set(v___x_2405_, 0, v_a_2416_);
v___x_2420_ = v___x_2405_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_a_2416_);
lean_ctor_set(v_reuseFailAlloc_2421_, 1, v___x_2418_);
lean_ctor_set_uint8(v_reuseFailAlloc_2421_, sizeof(void*)*2 + 1, v_contextDependent_2403_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
lean_ctor_set_uint8(v___x_2420_, sizeof(void*)*2, v___x_2408_);
v_a_2372_ = v___x_2420_;
goto v___jp_2371_;
}
}
else
{
lean_object* v_a_2422_; 
lean_dec(v_a_2414_);
lean_dec(v_a_2412_);
lean_del_object(v___x_2405_);
lean_dec_ref(v_q_u2081_2343_);
lean_dec_ref(v_h_2340_);
lean_dec_ref(v_p_u2082_2339_);
lean_dec_ref(v_binderType_2338_);
v_a_2422_ = lean_ctor_get(v___x_2415_, 0);
lean_inc(v_a_2422_);
lean_dec_ref_known(v___x_2415_, 1);
v_a_2360_ = v_a_2422_;
goto v___jp_2359_;
}
}
else
{
lean_object* v_a_2423_; 
lean_dec(v_a_2412_);
lean_dec_ref(v___x_2407_);
lean_del_object(v___x_2405_);
lean_dec_ref(v_e_x27_2401_);
lean_dec_ref(v_q_u2081_2343_);
lean_dec_ref(v_h_2340_);
lean_dec_ref(v_p_u2082_2339_);
lean_dec_ref(v_binderType_2338_);
v_a_2423_ = lean_ctor_get(v___x_2413_, 0);
lean_inc(v_a_2423_);
lean_dec_ref_known(v___x_2413_, 1);
v_a_2360_ = v_a_2423_;
goto v___jp_2359_;
}
}
else
{
lean_object* v_a_2424_; 
lean_dec_ref(v___x_2407_);
lean_del_object(v___x_2405_);
lean_dec_ref(v_e_x27_2401_);
lean_dec_ref(v_q_u2081_2343_);
lean_dec_ref(v_h_2340_);
lean_dec_ref(v_p_u2082_2339_);
lean_dec_ref(v_binderType_2338_);
v_a_2424_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_a_2424_);
lean_dec_ref_known(v___x_2411_, 1);
v_a_2360_ = v_a_2424_;
goto v___jp_2359_;
}
}
}
}
else
{
lean_object* v_a_2426_; 
lean_dec(v_a_2389_);
lean_dec_ref(v___x_2386_);
lean_dec_ref(v_a_2344_);
lean_dec_ref(v_q_u2081_2343_);
lean_dec_ref(v_h_2340_);
lean_dec_ref(v_p_u2082_2339_);
lean_dec_ref(v_binderType_2338_);
v_a_2426_ = lean_ctor_get(v___x_2390_, 0);
lean_inc(v_a_2426_);
lean_dec_ref_known(v___x_2390_, 1);
v_a_2360_ = v_a_2426_;
goto v___jp_2359_;
}
}
else
{
lean_object* v_a_2427_; 
lean_dec_ref(v___x_2386_);
lean_dec_ref(v_a_2344_);
lean_dec_ref(v_q_u2081_2343_);
lean_dec_ref(v_simpBody_2342_);
lean_dec_ref(v_h_2340_);
lean_dec_ref(v_p_u2082_2339_);
lean_dec_ref(v_binderType_2338_);
v_a_2427_ = lean_ctor_get(v___x_2388_, 0);
lean_inc(v_a_2427_);
lean_dec_ref_known(v___x_2388_, 1);
v_a_2360_ = v_a_2427_;
goto v___jp_2359_;
}
}
else
{
lean_object* v_a_2428_; 
lean_dec_ref(v_a_2344_);
lean_dec_ref(v_q_u2081_2343_);
lean_dec_ref(v_simpBody_2342_);
lean_dec_ref(v_body_2341_);
lean_dec_ref(v_h_2340_);
lean_dec_ref(v_p_u2082_2339_);
lean_dec_ref(v_binderType_2338_);
v_a_2428_ = lean_ctor_get(v___x_2383_, 0);
lean_inc(v_a_2428_);
lean_dec_ref_known(v___x_2383_, 1);
v_a_2360_ = v_a_2428_;
goto v___jp_2359_;
}
v___jp_2359_:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2369_; 
v___x_2361_ = lean_box(0);
v___x_2362_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__0(v___y_2347_, v_transientCache_2356_, v_funext_2358_, v___x_2361_);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2362_);
if (v_isSharedCheck_2369_ == 0)
{
lean_object* v_unused_2370_; 
v_unused_2370_ = lean_ctor_get(v___x_2362_, 0);
lean_dec(v_unused_2370_);
v___x_2364_ = v___x_2362_;
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
else
{
lean_dec(v___x_2362_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v___x_2367_; 
if (v_isShared_2365_ == 0)
{
lean_ctor_set_tag(v___x_2364_, 1);
lean_ctor_set(v___x_2364_, 0, v_a_2360_);
v___x_2367_ = v___x_2364_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_a_2360_);
v___x_2367_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
return v___x_2367_;
}
}
}
v___jp_2371_:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2381_; 
lean_inc_ref(v_a_2372_);
v___x_2373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2373_, 0, v_a_2372_);
v___x_2374_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__0(v___y_2347_, v_transientCache_2356_, v_funext_2358_, v___x_2373_);
lean_dec_ref_known(v___x_2373_, 1);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2381_ == 0)
{
lean_object* v_unused_2382_; 
v_unused_2382_ = lean_ctor_get(v___x_2374_, 0);
lean_dec(v_unused_2382_);
v___x_2376_ = v___x_2374_;
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
else
{
lean_dec(v___x_2374_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2379_; 
if (v_isShared_2377_ == 0)
{
lean_ctor_set(v___x_2376_, 0, v_a_2372_);
v___x_2379_ = v___x_2376_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_a_2372_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
return v___x_2379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___boxed(lean_object** _args){
lean_object* v_binderType_2429_ = _args[0];
lean_object* v_p_u2082_2430_ = _args[1];
lean_object* v_h_2431_ = _args[2];
lean_object* v_body_2432_ = _args[3];
lean_object* v_simpBody_2433_ = _args[4];
lean_object* v_q_u2081_2434_ = _args[5];
lean_object* v_a_2435_ = _args[6];
lean_object* v___y_2436_ = _args[7];
lean_object* v___y_2437_ = _args[8];
lean_object* v___y_2438_ = _args[9];
lean_object* v___y_2439_ = _args[10];
lean_object* v___y_2440_ = _args[11];
lean_object* v___y_2441_ = _args[12];
lean_object* v___y_2442_ = _args[13];
lean_object* v___y_2443_ = _args[14];
lean_object* v___y_2444_ = _args[15];
lean_object* v___y_2445_ = _args[16];
_start:
{
lean_object* v_res_2446_; 
v_res_2446_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1(v_binderType_2429_, v_p_u2082_2430_, v_h_2431_, v_body_2432_, v_simpBody_2433_, v_q_u2081_2434_, v_a_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_);
lean_dec(v___y_2444_);
lean_dec_ref(v___y_2443_);
lean_dec(v___y_2442_);
lean_dec_ref(v___y_2441_);
lean_dec(v___y_2440_);
lean_dec_ref(v___y_2439_);
lean_dec(v___y_2438_);
lean_dec_ref(v___y_2437_);
lean_dec(v___y_2436_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__0___redArg(lean_object* v_fvarId_2447_, lean_object* v___y_2448_){
_start:
{
lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2450_ = l_Lean_Expr_fvar___override(v_fvarId_2447_);
v___x_2451_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2450_, v___y_2448_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__0___redArg___boxed(lean_object* v_fvarId_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_){
_start:
{
lean_object* v_res_2455_; 
v_res_2455_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__0___redArg(v_fvarId_2452_, v___y_2453_);
lean_dec(v___y_2453_);
return v_res_2455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg___lam__0(lean_object* v_k_2456_, lean_object* v_x_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_){
_start:
{
lean_object* v___x_2468_; lean_object* v___x_2469_; 
v___x_2468_ = l_Lean_Expr_fvarId_x21(v_x_2457_);
v___x_2469_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__0___redArg(v___x_2468_, v___y_2462_);
if (lean_obj_tag(v___x_2469_) == 0)
{
lean_object* v_a_2470_; lean_object* v___x_2471_; 
v_a_2470_ = lean_ctor_get(v___x_2469_, 0);
lean_inc(v_a_2470_);
lean_dec_ref_known(v___x_2469_, 1);
lean_inc(v___y_2466_);
lean_inc_ref(v___y_2465_);
lean_inc(v___y_2464_);
lean_inc_ref(v___y_2463_);
lean_inc(v___y_2462_);
lean_inc_ref(v___y_2461_);
lean_inc(v___y_2460_);
lean_inc_ref(v___y_2459_);
lean_inc(v___y_2458_);
v___x_2471_ = lean_apply_11(v_k_2456_, v_a_2470_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, lean_box(0));
return v___x_2471_;
}
else
{
lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2479_; 
lean_dec_ref(v_k_2456_);
v_a_2472_ = lean_ctor_get(v___x_2469_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2469_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2474_ = v___x_2469_;
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v___x_2469_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2477_; 
if (v_isShared_2475_ == 0)
{
v___x_2477_ = v___x_2474_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2472_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg___lam__0___boxed(lean_object* v_k_2480_, lean_object* v_x_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_){
_start:
{
lean_object* v_res_2492_; 
v_res_2492_ = l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg___lam__0(v_k_2480_, v_x_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_);
lean_dec(v___y_2490_);
lean_dec_ref(v___y_2489_);
lean_dec(v___y_2488_);
lean_dec_ref(v___y_2487_);
lean_dec(v___y_2486_);
lean_dec_ref(v___y_2485_);
lean_dec(v___y_2484_);
lean_dec_ref(v___y_2483_);
lean_dec(v___y_2482_);
lean_dec_ref(v_x_2481_);
return v_res_2492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___redArg___lam__0(lean_object* v_k_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v_b_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_){
_start:
{
lean_object* v___x_2505_; 
lean_inc(v___y_2503_);
lean_inc_ref(v___y_2502_);
lean_inc(v___y_2501_);
lean_inc_ref(v___y_2500_);
lean_inc(v___y_2498_);
lean_inc_ref(v___y_2497_);
lean_inc(v___y_2496_);
lean_inc_ref(v___y_2495_);
lean_inc(v___y_2494_);
v___x_2505_ = lean_apply_11(v_k_2493_, v_b_2499_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_, lean_box(0));
return v___x_2505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v_k_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v_b_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___redArg___lam__0(v_k_2506_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v_b_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
lean_dec(v___y_2516_);
lean_dec_ref(v___y_2515_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v___y_2507_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___redArg(lean_object* v_name_2519_, uint8_t v_bi_2520_, lean_object* v_type_2521_, lean_object* v_k_2522_, uint8_t v_kind_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_){
_start:
{
lean_object* v___f_2534_; lean_object* v___x_2535_; 
lean_inc(v___y_2528_);
lean_inc_ref(v___y_2527_);
lean_inc(v___y_2526_);
lean_inc_ref(v___y_2525_);
lean_inc(v___y_2524_);
v___f_2534_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___redArg___lam__0___boxed), 12, 6);
lean_closure_set(v___f_2534_, 0, v_k_2522_);
lean_closure_set(v___f_2534_, 1, v___y_2524_);
lean_closure_set(v___f_2534_, 2, v___y_2525_);
lean_closure_set(v___f_2534_, 3, v___y_2526_);
lean_closure_set(v___f_2534_, 4, v___y_2527_);
lean_closure_set(v___f_2534_, 5, v___y_2528_);
v___x_2535_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2519_, v_bi_2520_, v_type_2521_, v___f_2534_, v_kind_2523_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_);
if (lean_obj_tag(v___x_2535_) == 0)
{
return v___x_2535_;
}
else
{
lean_object* v_a_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2543_; 
v_a_2536_ = lean_ctor_get(v___x_2535_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2538_ = v___x_2535_;
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_a_2536_);
lean_dec(v___x_2535_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2541_; 
if (v_isShared_2539_ == 0)
{
v___x_2541_ = v___x_2538_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v_a_2536_);
v___x_2541_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
return v___x_2541_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___redArg___boxed(lean_object* v_name_2544_, lean_object* v_bi_2545_, lean_object* v_type_2546_, lean_object* v_k_2547_, lean_object* v_kind_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_){
_start:
{
uint8_t v_bi_boxed_2559_; uint8_t v_kind_boxed_2560_; lean_object* v_res_2561_; 
v_bi_boxed_2559_ = lean_unbox(v_bi_2545_);
v_kind_boxed_2560_ = lean_unbox(v_kind_2548_);
v_res_2561_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___redArg(v_name_2544_, v_bi_boxed_2559_, v_type_2546_, v_k_2547_, v_kind_boxed_2560_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec(v___y_2555_);
lean_dec_ref(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2549_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg(lean_object* v_name_2562_, uint8_t v_bi_2563_, lean_object* v_type_2564_, lean_object* v_k_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_){
_start:
{
lean_object* v___f_2576_; uint8_t v___x_2577_; lean_object* v___x_2578_; 
v___f_2576_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg___lam__0___boxed), 12, 1);
lean_closure_set(v___f_2576_, 0, v_k_2565_);
v___x_2577_ = 0;
v___x_2578_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___redArg(v_name_2562_, v_bi_2563_, v_type_2564_, v___f_2576_, v___x_2577_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_);
return v___x_2578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg___boxed(lean_object* v_name_2579_, lean_object* v_bi_2580_, lean_object* v_type_2581_, lean_object* v_k_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_){
_start:
{
uint8_t v_bi_boxed_2593_; lean_object* v_res_2594_; 
v_bi_boxed_2593_ = lean_unbox(v_bi_2580_);
v_res_2594_ = l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg(v_name_2579_, v_bi_boxed_2593_, v_type_2581_, v_k_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
lean_dec(v___y_2587_);
lean_dec_ref(v___y_2586_);
lean_dec(v___y_2585_);
lean_dec_ref(v___y_2584_);
lean_dec(v___y_2583_);
return v_res_2594_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__3(void){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2598_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__2));
v___x_2599_ = lean_unsigned_to_nat(37u);
v___x_2600_ = lean_unsigned_to_nat(284u);
v___x_2601_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__1));
v___x_2602_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__0));
v___x_2603_ = l_mkPanicMessageWithDecl(v___x_2602_, v___x_2601_, v___x_2600_, v___x_2599_, v___x_2598_);
return v___x_2603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain(lean_object* v_simpBody_2604_, lean_object* v_e_2605_, lean_object* v_p_u2082_2606_, lean_object* v_h_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_, lean_object* v_a_2610_, lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_, lean_object* v_a_2616_){
_start:
{
if (lean_obj_tag(v_e_2605_) == 7)
{
lean_object* v_binderName_2618_; lean_object* v_binderType_2619_; lean_object* v_body_2620_; uint8_t v_binderInfo_2621_; lean_object* v_q_u2081_2622_; lean_object* v___f_2623_; lean_object* v___x_2624_; 
v_binderName_2618_ = lean_ctor_get(v_e_2605_, 0);
lean_inc_n(v_binderName_2618_, 2);
v_binderType_2619_ = lean_ctor_get(v_e_2605_, 1);
lean_inc_ref_n(v_binderType_2619_, 2);
v_body_2620_ = lean_ctor_get(v_e_2605_, 2);
lean_inc_ref_n(v_body_2620_, 2);
v_binderInfo_2621_ = lean_ctor_get_uint8(v_e_2605_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2605_, 3);
v_q_u2081_2622_ = l_Lean_mkLambda(v_binderName_2618_, v_binderInfo_2621_, v_binderType_2619_, v_body_2620_);
lean_inc_ref(v_p_u2082_2606_);
v___f_2623_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___lam__1___boxed), 17, 6);
lean_closure_set(v___f_2623_, 0, v_binderType_2619_);
lean_closure_set(v___f_2623_, 1, v_p_u2082_2606_);
lean_closure_set(v___f_2623_, 2, v_h_2607_);
lean_closure_set(v___f_2623_, 3, v_body_2620_);
lean_closure_set(v___f_2623_, 4, v_simpBody_2604_);
lean_closure_set(v___f_2623_, 5, v_q_u2081_2622_);
v___x_2624_ = l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg(v_binderName_2618_, v_binderInfo_2621_, v_p_u2082_2606_, v___f_2623_, v_a_2608_, v_a_2609_, v_a_2610_, v_a_2611_, v_a_2612_, v_a_2613_, v_a_2614_, v_a_2615_, v_a_2616_);
return v___x_2624_;
}
else
{
lean_object* v___x_2625_; lean_object* v___x_2626_; 
lean_dec_ref(v_h_2607_);
lean_dec_ref(v_p_u2082_2606_);
lean_dec_ref(v_e_2605_);
lean_dec_ref(v_simpBody_2604_);
v___x_2625_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__3, &l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__3_once, _init_l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___closed__3);
v___x_2626_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__1(v___x_2625_, v_a_2608_, v_a_2609_, v_a_2610_, v_a_2611_, v_a_2612_, v_a_2613_, v_a_2614_, v_a_2615_, v_a_2616_);
return v___x_2626_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain___boxed(lean_object* v_simpBody_2627_, lean_object* v_e_2628_, lean_object* v_p_u2082_2629_, lean_object* v_h_2630_, lean_object* v_a_2631_, lean_object* v_a_2632_, lean_object* v_a_2633_, lean_object* v_a_2634_, lean_object* v_a_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_, lean_object* v_a_2638_, lean_object* v_a_2639_, lean_object* v_a_2640_){
_start:
{
lean_object* v_res_2641_; 
v_res_2641_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain(v_simpBody_2627_, v_e_2628_, v_p_u2082_2629_, v_h_2630_, v_a_2631_, v_a_2632_, v_a_2633_, v_a_2634_, v_a_2635_, v_a_2636_, v_a_2637_, v_a_2638_, v_a_2639_);
lean_dec(v_a_2639_);
lean_dec_ref(v_a_2638_);
lean_dec(v_a_2637_);
lean_dec_ref(v_a_2636_);
lean_dec(v_a_2635_);
lean_dec_ref(v_a_2634_);
lean_dec(v_a_2633_);
lean_dec_ref(v_a_2632_);
lean_dec(v_a_2631_);
return v_res_2641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__0(lean_object* v_fvarId_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_){
_start:
{
lean_object* v___x_2650_; 
v___x_2650_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__0___redArg(v_fvarId_2642_, v___y_2644_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__0___boxed(lean_object* v_fvarId_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__0(v_fvarId_2651_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
lean_dec(v___y_2657_);
lean_dec_ref(v___y_2656_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2654_);
lean_dec(v___y_2653_);
lean_dec_ref(v___y_2652_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1(lean_object* v_00_u03b1_2660_, lean_object* v_name_2661_, uint8_t v_bi_2662_, lean_object* v_type_2663_, lean_object* v_k_2664_, uint8_t v_kind_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_){
_start:
{
lean_object* v___x_2676_; 
v___x_2676_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___redArg(v_name_2661_, v_bi_2662_, v_type_2663_, v_k_2664_, v_kind_2665_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_);
return v___x_2676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2677_, lean_object* v_name_2678_, lean_object* v_bi_2679_, lean_object* v_type_2680_, lean_object* v_k_2681_, lean_object* v_kind_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_){
_start:
{
uint8_t v_bi_boxed_2693_; uint8_t v_kind_boxed_2694_; lean_object* v_res_2695_; 
v_bi_boxed_2693_ = lean_unbox(v_bi_2679_);
v_kind_boxed_2694_ = lean_unbox(v_kind_2682_);
v_res_2695_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0_spec__1(v_00_u03b1_2677_, v_name_2678_, v_bi_boxed_2693_, v_type_2680_, v_k_2681_, v_kind_boxed_2694_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
lean_dec(v___y_2685_);
lean_dec_ref(v___y_2684_);
lean_dec(v___y_2683_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0(lean_object* v_00_u03b1_2696_, lean_object* v_name_2697_, uint8_t v_bi_2698_, lean_object* v_type_2699_, lean_object* v_k_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_){
_start:
{
lean_object* v___x_2711_; 
v___x_2711_ = l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg(v_name_2697_, v_bi_2698_, v_type_2699_, v_k_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___boxed(lean_object* v_00_u03b1_2712_, lean_object* v_name_2713_, lean_object* v_bi_2714_, lean_object* v_type_2715_, lean_object* v_k_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
uint8_t v_bi_boxed_2727_; lean_object* v_res_2728_; 
v_bi_boxed_2727_ = lean_unbox(v_bi_2714_);
v_res_2728_ = l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0(v_00_u03b1_2712_, v_name_2713_, v_bi_boxed_2727_, v_type_2715_, v_k_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
lean_dec(v___y_2721_);
lean_dec_ref(v___y_2720_);
lean_dec(v___y_2719_);
lean_dec_ref(v___y_2718_);
lean_dec(v___y_2717_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_mkCongr___redArg(lean_object* v_xs_2729_, lean_object* v_b_2730_, lean_object* v_r_2731_, uint8_t v_cd_u2080_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_){
_start:
{
uint8_t v___y_2741_; 
if (lean_obj_tag(v_r_2731_) == 0)
{
lean_dec_ref(v_b_2730_);
lean_dec_ref(v_xs_2729_);
if (v_cd_u2080_2732_ == 0)
{
uint8_t v_contextDependent_2744_; 
v_contextDependent_2744_ = lean_ctor_get_uint8(v_r_2731_, 1);
lean_dec_ref_known(v_r_2731_, 0);
v___y_2741_ = v_contextDependent_2744_;
goto v___jp_2740_;
}
else
{
lean_dec_ref_known(v_r_2731_, 0);
v___y_2741_ = v_cd_u2080_2732_;
goto v___jp_2740_;
}
}
else
{
lean_object* v_e_x27_2745_; lean_object* v_proof_2746_; uint8_t v_done_2747_; uint8_t v_contextDependent_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2834_; 
v_e_x27_2745_ = lean_ctor_get(v_r_2731_, 0);
v_proof_2746_ = lean_ctor_get(v_r_2731_, 1);
v_done_2747_ = lean_ctor_get_uint8(v_r_2731_, sizeof(void*)*2);
v_contextDependent_2748_ = lean_ctor_get_uint8(v_r_2731_, sizeof(void*)*2 + 1);
v_isSharedCheck_2834_ = !lean_is_exclusive(v_r_2731_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2750_ = v_r_2731_;
v_isShared_2751_ = v_isSharedCheck_2834_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_proof_2746_);
lean_inc(v_e_x27_2745_);
lean_dec(v_r_2731_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2834_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
uint8_t v___y_2753_; lean_object* v___x_2758_; lean_object* v___x_2759_; uint8_t v___x_2760_; 
v___x_2758_ = lean_array_get_size(v_xs_2729_);
v___x_2759_ = lean_unsigned_to_nat(0u);
v___x_2760_ = lean_nat_dec_eq(v___x_2758_, v___x_2759_);
if (v___x_2760_ == 0)
{
uint8_t v___x_2761_; uint8_t v___x_2762_; lean_object* v___x_2763_; 
lean_del_object(v___x_2750_);
v___x_2761_ = 1;
v___x_2762_ = 1;
v___x_2763_ = l_Lean_Meta_mkLambdaFVars(v_xs_2729_, v_proof_2746_, v___x_2760_, v___x_2761_, v___x_2760_, v___x_2761_, v___x_2762_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_);
if (lean_obj_tag(v___x_2763_) == 0)
{
lean_object* v_a_2764_; lean_object* v___x_2765_; 
v_a_2764_ = lean_ctor_get(v___x_2763_, 0);
lean_inc(v_a_2764_);
lean_dec_ref_known(v___x_2763_, 1);
lean_inc_ref(v_e_x27_2745_);
v___x_2765_ = l_Lean_Meta_mkForallFVars(v_xs_2729_, v_e_x27_2745_, v___x_2760_, v___x_2761_, v___x_2761_, v___x_2762_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v_a_2766_; lean_object* v___x_2767_; 
v_a_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2766_);
lean_dec_ref_known(v___x_2765_, 1);
v___x_2767_ = l_Lean_Meta_Sym_shareCommon(v_a_2766_, v_a_2733_, v_a_2734_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_);
if (lean_obj_tag(v___x_2767_) == 0)
{
lean_object* v_a_2768_; lean_object* v___x_2769_; 
v_a_2768_ = lean_ctor_get(v___x_2767_, 0);
lean_inc(v_a_2768_);
lean_dec_ref_known(v___x_2767_, 1);
lean_inc_ref(v_xs_2729_);
v___x_2769_ = l_Lean_Meta_Sym_Simp_mkForallCongrFor(v_xs_2729_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_object* v_a_2770_; lean_object* v___x_2771_; 
v_a_2770_ = lean_ctor_get(v___x_2769_, 0);
lean_inc(v_a_2770_);
lean_dec_ref_known(v___x_2769_, 1);
v___x_2771_ = l_Lean_Meta_mkLambdaFVars(v_xs_2729_, v_b_2730_, v___x_2760_, v___x_2761_, v___x_2760_, v___x_2761_, v___x_2762_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_);
if (lean_obj_tag(v___x_2771_) == 0)
{
lean_object* v_a_2772_; lean_object* v___x_2773_; 
v_a_2772_ = lean_ctor_get(v___x_2771_, 0);
lean_inc(v_a_2772_);
lean_dec_ref_known(v___x_2771_, 1);
v___x_2773_ = l_Lean_Meta_mkLambdaFVars(v_xs_2729_, v_e_x27_2745_, v___x_2760_, v___x_2761_, v___x_2760_, v___x_2761_, v___x_2762_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_);
lean_dec_ref(v_xs_2729_);
if (lean_obj_tag(v___x_2773_) == 0)
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2785_; 
v_a_2774_ = lean_ctor_get(v___x_2773_, 0);
v_isSharedCheck_2785_ = !lean_is_exclusive(v___x_2773_);
if (v_isSharedCheck_2785_ == 0)
{
v___x_2776_ = v___x_2773_;
v_isShared_2777_ = v_isSharedCheck_2785_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2773_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2785_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2778_; uint8_t v___y_2780_; 
v___x_2778_ = l_Lean_mkApp3(v_a_2770_, v_a_2772_, v_a_2774_, v_a_2764_);
if (v_cd_u2080_2732_ == 0)
{
v___y_2780_ = v_contextDependent_2748_;
goto v___jp_2779_;
}
else
{
v___y_2780_ = v___x_2761_;
goto v___jp_2779_;
}
v___jp_2779_:
{
lean_object* v___x_2781_; lean_object* v___x_2783_; 
v___x_2781_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2781_, 0, v_a_2768_);
lean_ctor_set(v___x_2781_, 1, v___x_2778_);
lean_ctor_set_uint8(v___x_2781_, sizeof(void*)*2, v___x_2760_);
lean_ctor_set_uint8(v___x_2781_, sizeof(void*)*2 + 1, v___y_2780_);
if (v_isShared_2777_ == 0)
{
lean_ctor_set(v___x_2776_, 0, v___x_2781_);
v___x_2783_ = v___x_2776_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2784_; 
v_reuseFailAlloc_2784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2784_, 0, v___x_2781_);
v___x_2783_ = v_reuseFailAlloc_2784_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
return v___x_2783_;
}
}
}
}
else
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2793_; 
lean_dec(v_a_2772_);
lean_dec(v_a_2770_);
lean_dec(v_a_2768_);
lean_dec(v_a_2764_);
v_a_2786_ = lean_ctor_get(v___x_2773_, 0);
v_isSharedCheck_2793_ = !lean_is_exclusive(v___x_2773_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2788_ = v___x_2773_;
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v___x_2773_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2791_; 
if (v_isShared_2789_ == 0)
{
v___x_2791_ = v___x_2788_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_a_2786_);
v___x_2791_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
return v___x_2791_;
}
}
}
}
else
{
lean_object* v_a_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2801_; 
lean_dec(v_a_2770_);
lean_dec(v_a_2768_);
lean_dec(v_a_2764_);
lean_dec_ref(v_e_x27_2745_);
lean_dec_ref(v_xs_2729_);
v_a_2794_ = lean_ctor_get(v___x_2771_, 0);
v_isSharedCheck_2801_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2801_ == 0)
{
v___x_2796_ = v___x_2771_;
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_a_2794_);
lean_dec(v___x_2771_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v___x_2799_; 
if (v_isShared_2797_ == 0)
{
v___x_2799_ = v___x_2796_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_a_2794_);
v___x_2799_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
return v___x_2799_;
}
}
}
}
else
{
lean_object* v_a_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2809_; 
lean_dec(v_a_2768_);
lean_dec(v_a_2764_);
lean_dec_ref(v_e_x27_2745_);
lean_dec_ref(v_b_2730_);
lean_dec_ref(v_xs_2729_);
v_a_2802_ = lean_ctor_get(v___x_2769_, 0);
v_isSharedCheck_2809_ = !lean_is_exclusive(v___x_2769_);
if (v_isSharedCheck_2809_ == 0)
{
v___x_2804_ = v___x_2769_;
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_a_2802_);
lean_dec(v___x_2769_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
lean_object* v___x_2807_; 
if (v_isShared_2805_ == 0)
{
v___x_2807_ = v___x_2804_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v_a_2802_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
return v___x_2807_;
}
}
}
}
else
{
lean_object* v_a_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2817_; 
lean_dec(v_a_2764_);
lean_dec_ref(v_e_x27_2745_);
lean_dec_ref(v_b_2730_);
lean_dec_ref(v_xs_2729_);
v_a_2810_ = lean_ctor_get(v___x_2767_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2767_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2812_ = v___x_2767_;
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_a_2810_);
lean_dec(v___x_2767_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2815_; 
if (v_isShared_2813_ == 0)
{
v___x_2815_ = v___x_2812_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_a_2810_);
v___x_2815_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
return v___x_2815_;
}
}
}
}
else
{
lean_object* v_a_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2825_; 
lean_dec(v_a_2764_);
lean_dec_ref(v_e_x27_2745_);
lean_dec_ref(v_b_2730_);
lean_dec_ref(v_xs_2729_);
v_a_2818_ = lean_ctor_get(v___x_2765_, 0);
v_isSharedCheck_2825_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2820_ = v___x_2765_;
v_isShared_2821_ = v_isSharedCheck_2825_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_a_2818_);
lean_dec(v___x_2765_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2825_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v___x_2823_; 
if (v_isShared_2821_ == 0)
{
v___x_2823_ = v___x_2820_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v_a_2818_);
v___x_2823_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
return v___x_2823_;
}
}
}
}
else
{
lean_object* v_a_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2833_; 
lean_dec_ref(v_e_x27_2745_);
lean_dec_ref(v_b_2730_);
lean_dec_ref(v_xs_2729_);
v_a_2826_ = lean_ctor_get(v___x_2763_, 0);
v_isSharedCheck_2833_ = !lean_is_exclusive(v___x_2763_);
if (v_isSharedCheck_2833_ == 0)
{
v___x_2828_ = v___x_2763_;
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
else
{
lean_inc(v_a_2826_);
lean_dec(v___x_2763_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v___x_2831_; 
if (v_isShared_2829_ == 0)
{
v___x_2831_ = v___x_2828_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_a_2826_);
v___x_2831_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
return v___x_2831_;
}
}
}
}
else
{
lean_dec_ref(v_b_2730_);
lean_dec_ref(v_xs_2729_);
if (v_cd_u2080_2732_ == 0)
{
v___y_2753_ = v_contextDependent_2748_;
goto v___jp_2752_;
}
else
{
v___y_2753_ = v_cd_u2080_2732_;
goto v___jp_2752_;
}
}
v___jp_2752_:
{
lean_object* v___x_2755_; 
if (v_isShared_2751_ == 0)
{
v___x_2755_ = v___x_2750_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v_e_x27_2745_);
lean_ctor_set(v_reuseFailAlloc_2757_, 1, v_proof_2746_);
lean_ctor_set_uint8(v_reuseFailAlloc_2757_, sizeof(void*)*2, v_done_2747_);
v___x_2755_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
lean_object* v___x_2756_; 
lean_ctor_set_uint8(v___x_2755_, sizeof(void*)*2 + 1, v___y_2753_);
v___x_2756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2756_, 0, v___x_2755_);
return v___x_2756_;
}
}
}
}
v___jp_2740_:
{
lean_object* v___x_2742_; lean_object* v___x_2743_; 
v___x_2742_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v___y_2741_);
v___x_2743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2743_, 0, v___x_2742_);
return v___x_2743_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_mkCongr___redArg___boxed(lean_object* v_xs_2835_, lean_object* v_b_2836_, lean_object* v_r_2837_, lean_object* v_cd_u2080_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_, lean_object* v_a_2844_, lean_object* v_a_2845_){
_start:
{
uint8_t v_cd_u2080_boxed_2846_; lean_object* v_res_2847_; 
v_cd_u2080_boxed_2846_ = lean_unbox(v_cd_u2080_2838_);
v_res_2847_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_mkCongr___redArg(v_xs_2835_, v_b_2836_, v_r_2837_, v_cd_u2080_boxed_2846_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_);
lean_dec(v_a_2844_);
lean_dec_ref(v_a_2843_);
lean_dec(v_a_2842_);
lean_dec_ref(v_a_2841_);
lean_dec(v_a_2840_);
lean_dec_ref(v_a_2839_);
return v_res_2847_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_mkCongr(lean_object* v_xs_2848_, lean_object* v_b_2849_, lean_object* v_r_2850_, uint8_t v_cd_u2080_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_, lean_object* v_a_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_){
_start:
{
lean_object* v___x_2862_; 
v___x_2862_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_mkCongr___redArg(v_xs_2848_, v_b_2849_, v_r_2850_, v_cd_u2080_2851_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_);
return v___x_2862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_mkCongr___boxed(lean_object* v_xs_2863_, lean_object* v_b_2864_, lean_object* v_r_2865_, lean_object* v_cd_u2080_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_, lean_object* v_a_2873_, lean_object* v_a_2874_, lean_object* v_a_2875_, lean_object* v_a_2876_){
_start:
{
uint8_t v_cd_u2080_boxed_2877_; lean_object* v_res_2878_; 
v_cd_u2080_boxed_2877_ = lean_unbox(v_cd_u2080_2866_);
v_res_2878_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_mkCongr(v_xs_2863_, v_b_2864_, v_r_2865_, v_cd_u2080_boxed_2877_, v_a_2867_, v_a_2868_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_, v_a_2873_, v_a_2874_, v_a_2875_);
lean_dec(v_a_2875_);
lean_dec_ref(v_a_2874_);
lean_dec(v_a_2873_);
lean_dec_ref(v_a_2872_);
lean_dec(v_a_2871_);
lean_dec_ref(v_a_2870_);
lean_dec(v_a_2869_);
lean_dec_ref(v_a_2868_);
lean_dec(v_a_2867_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg___lam__0(lean_object* v_a_2879_, lean_object* v_transientCache_2880_, lean_object* v_funext_2881_, lean_object* v_a_x3f_2882_){
_start:
{
lean_object* v___x_2884_; lean_object* v_numSteps_2885_; lean_object* v_persistentCache_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2896_; 
v___x_2884_ = lean_st_ref_take(v_a_2879_);
v_numSteps_2885_ = lean_ctor_get(v___x_2884_, 0);
v_persistentCache_2886_ = lean_ctor_get(v___x_2884_, 1);
v_isSharedCheck_2896_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2896_ == 0)
{
lean_object* v_unused_2897_; lean_object* v_unused_2898_; 
v_unused_2897_ = lean_ctor_get(v___x_2884_, 3);
lean_dec(v_unused_2897_);
v_unused_2898_ = lean_ctor_get(v___x_2884_, 2);
lean_dec(v_unused_2898_);
v___x_2888_ = v___x_2884_;
v_isShared_2889_ = v_isSharedCheck_2896_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_persistentCache_2886_);
lean_inc(v_numSteps_2885_);
lean_dec(v___x_2884_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2896_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v___x_2890_; lean_object* v___x_2892_; 
v___x_2890_ = lean_box(0);
if (v_isShared_2889_ == 0)
{
lean_ctor_set(v___x_2888_, 3, v_funext_2881_);
lean_ctor_set(v___x_2888_, 2, v_transientCache_2880_);
v___x_2892_ = v___x_2888_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v_numSteps_2885_);
lean_ctor_set(v_reuseFailAlloc_2895_, 1, v_persistentCache_2886_);
lean_ctor_set(v_reuseFailAlloc_2895_, 2, v_transientCache_2880_);
lean_ctor_set(v_reuseFailAlloc_2895_, 3, v_funext_2881_);
v___x_2892_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___x_2893_ = lean_st_ref_put(v_a_2879_, v___x_2892_);
v___x_2894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2890_);
return v___x_2894_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg___lam__0___boxed(lean_object* v_a_2899_, lean_object* v_transientCache_2900_, lean_object* v_funext_2901_, lean_object* v_a_x3f_2902_, lean_object* v___y_2903_){
_start:
{
lean_object* v_res_2904_; 
v_res_2904_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg___lam__0(v_a_2899_, v_transientCache_2900_, v_funext_2901_, v_a_x3f_2902_);
lean_dec(v_a_x3f_2902_);
lean_dec(v_a_2899_);
return v_res_2904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg(lean_object* v_xs_2905_, lean_object* v_k_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_, lean_object* v_a_2910_, lean_object* v_a_2911_, lean_object* v_a_2912_, lean_object* v_a_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_){
_start:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; uint8_t v___x_2919_; 
v___x_2917_ = lean_array_get_size(v_xs_2905_);
v___x_2918_ = lean_unsigned_to_nat(0u);
v___x_2919_ = lean_nat_dec_eq(v___x_2917_, v___x_2918_);
if (v___x_2919_ == 0)
{
lean_object* v___x_2920_; lean_object* v_transientCache_2921_; lean_object* v___x_2922_; lean_object* v_funext_2923_; lean_object* v_r_2924_; 
v___x_2920_ = lean_st_ref_get(v_a_2909_);
v_transientCache_2921_ = lean_ctor_get(v___x_2920_, 2);
lean_inc_ref(v_transientCache_2921_);
lean_dec(v___x_2920_);
v___x_2922_ = lean_st_ref_get(v_a_2909_);
v_funext_2923_ = lean_ctor_get(v___x_2922_, 3);
lean_inc_ref(v_funext_2923_);
lean_dec(v___x_2922_);
lean_inc(v_a_2915_);
lean_inc_ref(v_a_2914_);
lean_inc(v_a_2913_);
lean_inc_ref(v_a_2912_);
lean_inc(v_a_2911_);
lean_inc_ref(v_a_2910_);
lean_inc(v_a_2909_);
lean_inc_ref(v_a_2908_);
lean_inc(v_a_2907_);
v_r_2924_ = lean_apply_10(v_k_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_, lean_box(0));
if (lean_obj_tag(v_r_2924_) == 0)
{
lean_object* v_a_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2941_; 
v_a_2925_ = lean_ctor_get(v_r_2924_, 0);
v_isSharedCheck_2941_ = !lean_is_exclusive(v_r_2924_);
if (v_isSharedCheck_2941_ == 0)
{
v___x_2927_ = v_r_2924_;
v_isShared_2928_ = v_isSharedCheck_2941_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_a_2925_);
lean_dec(v_r_2924_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2941_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2930_; 
lean_inc(v_a_2925_);
if (v_isShared_2928_ == 0)
{
lean_ctor_set_tag(v___x_2927_, 1);
v___x_2930_ = v___x_2927_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v_a_2925_);
v___x_2930_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
lean_object* v___x_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2938_; 
v___x_2931_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg___lam__0(v_a_2909_, v_transientCache_2921_, v_funext_2923_, v___x_2930_);
lean_dec_ref(v___x_2930_);
v_isSharedCheck_2938_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_2938_ == 0)
{
lean_object* v_unused_2939_; 
v_unused_2939_ = lean_ctor_get(v___x_2931_, 0);
lean_dec(v_unused_2939_);
v___x_2933_ = v___x_2931_;
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
else
{
lean_dec(v___x_2931_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2936_; 
if (v_isShared_2934_ == 0)
{
lean_ctor_set(v___x_2933_, 0, v_a_2925_);
v___x_2936_ = v___x_2933_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v_a_2925_);
v___x_2936_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
return v___x_2936_;
}
}
}
}
}
else
{
lean_object* v_a_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2951_; 
v_a_2942_ = lean_ctor_get(v_r_2924_, 0);
lean_inc(v_a_2942_);
lean_dec_ref_known(v_r_2924_, 1);
v___x_2943_ = lean_box(0);
v___x_2944_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg___lam__0(v_a_2909_, v_transientCache_2921_, v_funext_2923_, v___x_2943_);
v_isSharedCheck_2951_ = !lean_is_exclusive(v___x_2944_);
if (v_isSharedCheck_2951_ == 0)
{
lean_object* v_unused_2952_; 
v_unused_2952_ = lean_ctor_get(v___x_2944_, 0);
lean_dec(v_unused_2952_);
v___x_2946_ = v___x_2944_;
v_isShared_2947_ = v_isSharedCheck_2951_;
goto v_resetjp_2945_;
}
else
{
lean_dec(v___x_2944_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2951_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v___x_2949_; 
if (v_isShared_2947_ == 0)
{
lean_ctor_set_tag(v___x_2946_, 1);
lean_ctor_set(v___x_2946_, 0, v_a_2942_);
v___x_2949_ = v___x_2946_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_a_2942_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
return v___x_2949_;
}
}
}
}
else
{
lean_object* v___x_2953_; 
lean_inc(v_a_2915_);
lean_inc_ref(v_a_2914_);
lean_inc(v_a_2913_);
lean_inc_ref(v_a_2912_);
lean_inc(v_a_2911_);
lean_inc_ref(v_a_2910_);
lean_inc(v_a_2909_);
lean_inc_ref(v_a_2908_);
lean_inc(v_a_2907_);
v___x_2953_ = lean_apply_10(v_k_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_, v_a_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_, lean_box(0));
return v___x_2953_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg___boxed(lean_object* v_xs_2954_, lean_object* v_k_2955_, lean_object* v_a_2956_, lean_object* v_a_2957_, lean_object* v_a_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_, lean_object* v_a_2961_, lean_object* v_a_2962_, lean_object* v_a_2963_, lean_object* v_a_2964_, lean_object* v_a_2965_){
_start:
{
lean_object* v_res_2966_; 
v_res_2966_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg(v_xs_2954_, v_k_2955_, v_a_2956_, v_a_2957_, v_a_2958_, v_a_2959_, v_a_2960_, v_a_2961_, v_a_2962_, v_a_2963_, v_a_2964_);
lean_dec(v_a_2964_);
lean_dec_ref(v_a_2963_);
lean_dec(v_a_2962_);
lean_dec_ref(v_a_2961_);
lean_dec(v_a_2960_);
lean_dec_ref(v_a_2959_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_xs_2954_);
return v_res_2966_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under(lean_object* v_00_u03b1_2967_, lean_object* v_xs_2968_, lean_object* v_k_2969_, lean_object* v_a_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_, lean_object* v_a_2977_, lean_object* v_a_2978_){
_start:
{
lean_object* v___x_2980_; 
v___x_2980_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg(v_xs_2968_, v_k_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_, v_a_2978_);
return v___x_2980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___boxed(lean_object* v_00_u03b1_2981_, lean_object* v_xs_2982_, lean_object* v_k_2983_, lean_object* v_a_2984_, lean_object* v_a_2985_, lean_object* v_a_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_, lean_object* v_a_2991_, lean_object* v_a_2992_, lean_object* v_a_2993_){
_start:
{
lean_object* v_res_2994_; 
v_res_2994_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under(v_00_u03b1_2981_, v_xs_2982_, v_k_2983_, v_a_2984_, v_a_2985_, v_a_2986_, v_a_2987_, v_a_2988_, v_a_2989_, v_a_2990_, v_a_2991_, v_a_2992_);
lean_dec(v_a_2992_);
lean_dec_ref(v_a_2991_);
lean_dec(v_a_2990_);
lean_dec_ref(v_a_2989_);
lean_dec(v_a_2988_);
lean_dec_ref(v_a_2987_);
lean_dec(v_a_2986_);
lean_dec_ref(v_a_2985_);
lean_dec(v_a_2984_);
lean_dec_ref(v_xs_2982_);
return v_res_2994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_close___redArg(lean_object* v_xs_2995_, lean_object* v_e_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_, lean_object* v_a_3002_){
_start:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; 
v___x_3004_ = lean_unsigned_to_nat(0u);
v___x_3005_ = lean_array_get_size(v_xs_2995_);
v___x_3006_ = l_Lean_Meta_Sym_instantiateRevRangeS(v_e_2996_, v___x_3004_, v___x_3005_, v_xs_2995_, v_a_2997_, v_a_2998_, v_a_2999_, v_a_3000_, v_a_3001_, v_a_3002_);
return v___x_3006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_close___redArg___boxed(lean_object* v_xs_3007_, lean_object* v_e_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_){
_start:
{
lean_object* v_res_3016_; 
v_res_3016_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_close___redArg(v_xs_3007_, v_e_3008_, v_a_3009_, v_a_3010_, v_a_3011_, v_a_3012_, v_a_3013_, v_a_3014_);
lean_dec(v_a_3014_);
lean_dec_ref(v_a_3013_);
lean_dec(v_a_3012_);
lean_dec_ref(v_a_3011_);
lean_dec(v_a_3010_);
lean_dec_ref(v_a_3009_);
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_close(lean_object* v_xs_3017_, lean_object* v_e_3018_, lean_object* v_a_3019_, lean_object* v_a_3020_, lean_object* v_a_3021_, lean_object* v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_){
_start:
{
lean_object* v___x_3029_; 
v___x_3029_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_close___redArg(v_xs_3017_, v_e_3018_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_);
return v___x_3029_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_close___boxed(lean_object* v_xs_3030_, lean_object* v_e_3031_, lean_object* v_a_3032_, lean_object* v_a_3033_, lean_object* v_a_3034_, lean_object* v_a_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_){
_start:
{
lean_object* v_res_3042_; 
v_res_3042_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_close(v_xs_3030_, v_e_3031_, v_a_3032_, v_a_3033_, v_a_3034_, v_a_3035_, v_a_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_);
lean_dec(v_a_3040_);
lean_dec_ref(v_a_3039_);
lean_dec(v_a_3038_);
lean_dec_ref(v_a_3037_);
lean_dec(v_a_3036_);
lean_dec_ref(v_a_3035_);
lean_dec(v_a_3034_);
lean_dec_ref(v_a_3033_);
lean_dec(v_a_3032_);
return v_res_3042_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_go___lam__0___boxed(lean_object* v_xs_3043_, lean_object* v_simpBody_3044_, lean_object* v_body_3045_, lean_object* v_cd_3046_, lean_object* v_x_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_){
_start:
{
uint8_t v_cd_boxed_3058_; lean_object* v_res_3059_; 
v_cd_boxed_3058_ = lean_unbox(v_cd_3046_);
v_res_3059_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_go___lam__0(v_xs_3043_, v_simpBody_3044_, v_body_3045_, v_cd_boxed_3058_, v_x_3047_, v___y_3048_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_);
lean_dec(v___y_3056_);
lean_dec_ref(v___y_3055_);
lean_dec(v___y_3054_);
lean_dec_ref(v___y_3053_);
lean_dec(v___y_3052_);
lean_dec_ref(v___y_3051_);
lean_dec(v___y_3050_);
lean_dec_ref(v___y_3049_);
lean_dec(v___y_3048_);
return v_res_3059_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_go(lean_object* v_simpBody_3060_, lean_object* v_xs_3061_, lean_object* v_e_3062_, uint8_t v_cd_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_, lean_object* v_a_3072_){
_start:
{
lean_object* v___y_3075_; lean_object* v___y_3076_; lean_object* v___y_3077_; lean_object* v___y_3078_; lean_object* v___y_3079_; lean_object* v___y_3080_; lean_object* v___y_3081_; lean_object* v___y_3082_; lean_object* v___y_3083_; 
if (lean_obj_tag(v_e_3062_) == 7)
{
lean_object* v_binderName_3098_; lean_object* v_binderType_3099_; lean_object* v_body_3100_; uint8_t v_binderInfo_3101_; lean_object* v___x_3102_; uint8_t v___x_3103_; 
v_binderName_3098_ = lean_ctor_get(v_e_3062_, 0);
v_binderType_3099_ = lean_ctor_get(v_e_3062_, 1);
v_body_3100_ = lean_ctor_get(v_e_3062_, 2);
v_binderInfo_3101_ = lean_ctor_get_uint8(v_e_3062_, sizeof(void*)*3 + 8);
v___x_3102_ = lean_unsigned_to_nat(0u);
v___x_3103_ = lean_expr_has_loose_bvar(v_body_3100_, v___x_3102_);
if (v___x_3103_ == 0)
{
v___y_3075_ = v_a_3064_;
v___y_3076_ = v_a_3065_;
v___y_3077_ = v_a_3066_;
v___y_3078_ = v_a_3067_;
v___y_3079_ = v_a_3068_;
v___y_3080_ = v_a_3069_;
v___y_3081_ = v_a_3070_;
v___y_3082_ = v_a_3071_;
v___y_3083_ = v_a_3072_;
goto v___jp_3074_;
}
else
{
lean_object* v___x_3104_; 
lean_inc_ref(v_binderType_3099_);
lean_inc_ref(v_xs_3061_);
v___x_3104_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_close___redArg(v_xs_3061_, v_binderType_3099_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3105_; uint8_t v_cd_3107_; lean_object* v___y_3108_; lean_object* v___y_3109_; lean_object* v___y_3110_; lean_object* v___y_3111_; lean_object* v___y_3112_; lean_object* v___y_3113_; lean_object* v___y_3114_; lean_object* v___y_3115_; lean_object* v___y_3116_; lean_object* v___x_3120_; 
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
lean_inc_n(v_a_3105_, 2);
lean_dec_ref_known(v___x_3104_, 1);
v___x_3120_ = l_Lean_Meta_isProp(v_a_3105_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_);
if (lean_obj_tag(v___x_3120_) == 0)
{
lean_object* v_a_3121_; uint8_t v___x_3122_; 
v_a_3121_ = lean_ctor_get(v___x_3120_, 0);
lean_inc(v_a_3121_);
lean_dec_ref_known(v___x_3120_, 1);
v___x_3122_ = lean_unbox(v_a_3121_);
lean_dec(v_a_3121_);
if (v___x_3122_ == 0)
{
lean_inc_ref(v_body_3100_);
lean_inc(v_binderName_3098_);
lean_dec_ref_known(v_e_3062_, 3);
v_cd_3107_ = v_cd_3063_;
v___y_3108_ = v_a_3064_;
v___y_3109_ = v_a_3065_;
v___y_3110_ = v_a_3066_;
v___y_3111_ = v_a_3067_;
v___y_3112_ = v_a_3068_;
v___y_3113_ = v_a_3069_;
v___y_3114_ = v_a_3070_;
v___y_3115_ = v_a_3071_;
v___y_3116_ = v_a_3072_;
goto v___jp_3106_;
}
else
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
lean_inc(v_a_3105_);
v___x_3123_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_3123_, 0, v_a_3105_);
v___x_3124_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg(v_xs_3061_, v___x_3123_, v_a_3064_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_object* v_a_3125_; 
v_a_3125_ = lean_ctor_get(v___x_3124_, 0);
lean_inc(v_a_3125_);
lean_dec_ref_known(v___x_3124_, 1);
if (lean_obj_tag(v_a_3125_) == 0)
{
lean_inc_ref(v_body_3100_);
lean_inc(v_binderName_3098_);
lean_dec_ref_known(v_e_3062_, 3);
if (v_cd_3063_ == 0)
{
uint8_t v_contextDependent_3126_; 
v_contextDependent_3126_ = lean_ctor_get_uint8(v_a_3125_, 1);
lean_dec_ref_known(v_a_3125_, 0);
v_cd_3107_ = v_contextDependent_3126_;
v___y_3108_ = v_a_3064_;
v___y_3109_ = v_a_3065_;
v___y_3110_ = v_a_3066_;
v___y_3111_ = v_a_3067_;
v___y_3112_ = v_a_3068_;
v___y_3113_ = v_a_3069_;
v___y_3114_ = v_a_3070_;
v___y_3115_ = v_a_3071_;
v___y_3116_ = v_a_3072_;
goto v___jp_3106_;
}
else
{
lean_dec_ref_known(v_a_3125_, 0);
v_cd_3107_ = v_cd_3063_;
v___y_3108_ = v_a_3064_;
v___y_3109_ = v_a_3065_;
v___y_3110_ = v_a_3066_;
v___y_3111_ = v_a_3067_;
v___y_3112_ = v_a_3068_;
v___y_3113_ = v_a_3069_;
v___y_3114_ = v_a_3070_;
v___y_3115_ = v_a_3071_;
v___y_3116_ = v_a_3072_;
goto v___jp_3106_;
}
}
else
{
lean_object* v_e_x27_3127_; lean_object* v_proof_3128_; uint8_t v_contextDependent_3129_; lean_object* v___x_3130_; 
lean_dec(v_a_3105_);
v_e_x27_3127_ = lean_ctor_get(v_a_3125_, 0);
lean_inc_ref(v_e_x27_3127_);
v_proof_3128_ = lean_ctor_get(v_a_3125_, 1);
lean_inc_ref(v_proof_3128_);
v_contextDependent_3129_ = lean_ctor_get_uint8(v_a_3125_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_3125_, 2);
lean_inc_ref(v_xs_3061_);
v___x_3130_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_close___redArg(v_xs_3061_, v_e_3062_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_);
if (lean_obj_tag(v___x_3130_) == 0)
{
lean_object* v_a_3131_; lean_object* v___x_3132_; 
v_a_3131_ = lean_ctor_get(v___x_3130_, 0);
lean_inc_n(v_a_3131_, 2);
lean_dec_ref_known(v___x_3130_, 1);
v___x_3132_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain(v_simpBody_3060_, v_a_3131_, v_e_x27_3127_, v_proof_3128_, v_a_3064_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_);
if (lean_obj_tag(v___x_3132_) == 0)
{
if (v_cd_3063_ == 0)
{
lean_object* v_a_3133_; lean_object* v___x_3134_; 
v_a_3133_ = lean_ctor_get(v___x_3132_, 0);
lean_inc(v_a_3133_);
lean_dec_ref_known(v___x_3132_, 1);
v___x_3134_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_mkCongr___redArg(v_xs_3061_, v_a_3131_, v_a_3133_, v_contextDependent_3129_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_);
return v___x_3134_;
}
else
{
lean_object* v_a_3135_; lean_object* v___x_3136_; 
v_a_3135_ = lean_ctor_get(v___x_3132_, 0);
lean_inc(v_a_3135_);
lean_dec_ref_known(v___x_3132_, 1);
v___x_3136_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_mkCongr___redArg(v_xs_3061_, v_a_3131_, v_a_3135_, v_cd_3063_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_);
return v___x_3136_;
}
}
else
{
lean_dec(v_a_3131_);
lean_dec_ref(v_xs_3061_);
return v___x_3132_;
}
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3144_; 
lean_dec_ref(v_proof_3128_);
lean_dec_ref(v_e_x27_3127_);
lean_dec_ref(v_xs_3061_);
lean_dec_ref(v_simpBody_3060_);
v_a_3137_ = lean_ctor_get(v___x_3130_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3130_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v___x_3130_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3130_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3142_; 
if (v_isShared_3140_ == 0)
{
v___x_3142_ = v___x_3139_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3137_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
}
}
}
else
{
lean_dec(v_a_3105_);
lean_dec_ref_known(v_e_3062_, 3);
lean_dec_ref(v_xs_3061_);
lean_dec_ref(v_simpBody_3060_);
return v___x_3124_;
}
}
}
else
{
lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3152_; 
lean_dec(v_a_3105_);
lean_dec_ref_known(v_e_3062_, 3);
lean_dec_ref(v_xs_3061_);
lean_dec_ref(v_simpBody_3060_);
v_a_3145_ = lean_ctor_get(v___x_3120_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3120_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3147_ = v___x_3120_;
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3120_);
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
v___jp_3106_:
{
lean_object* v___x_3117_; lean_object* v___f_3118_; lean_object* v___x_3119_; 
v___x_3117_ = lean_box(v_cd_3107_);
v___f_3118_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_go___lam__0___boxed), 15, 4);
lean_closure_set(v___f_3118_, 0, v_xs_3061_);
lean_closure_set(v___f_3118_, 1, v_simpBody_3060_);
lean_closure_set(v___f_3118_, 2, v_body_3100_);
lean_closure_set(v___f_3118_, 3, v___x_3117_);
v___x_3119_ = l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg(v_binderName_3098_, v_binderInfo_3101_, v_a_3105_, v___f_3118_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3119_;
}
}
else
{
lean_object* v_a_3153_; lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3160_; 
lean_dec_ref_known(v_e_3062_, 3);
lean_dec_ref(v_xs_3061_);
lean_dec_ref(v_simpBody_3060_);
v_a_3153_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3155_ = v___x_3104_;
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
else
{
lean_inc(v_a_3153_);
lean_dec(v___x_3104_);
v___x_3155_ = lean_box(0);
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
v_resetjp_3154_:
{
lean_object* v___x_3158_; 
if (v_isShared_3156_ == 0)
{
v___x_3158_ = v___x_3155_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v_a_3153_);
v___x_3158_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
return v___x_3158_;
}
}
}
}
}
else
{
v___y_3075_ = v_a_3064_;
v___y_3076_ = v_a_3065_;
v___y_3077_ = v_a_3066_;
v___y_3078_ = v_a_3067_;
v___y_3079_ = v_a_3068_;
v___y_3080_ = v_a_3069_;
v___y_3081_ = v_a_3070_;
v___y_3082_ = v_a_3071_;
v___y_3083_ = v_a_3072_;
goto v___jp_3074_;
}
v___jp_3074_:
{
lean_object* v___x_3084_; 
lean_inc_ref(v_xs_3061_);
v___x_3084_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_close___redArg(v_xs_3061_, v_e_3062_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_);
if (lean_obj_tag(v___x_3084_) == 0)
{
lean_object* v_a_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; 
v_a_3085_ = lean_ctor_get(v___x_3084_, 0);
lean_inc_n(v_a_3085_, 2);
lean_dec_ref_known(v___x_3084_, 1);
v___x_3086_ = lean_apply_1(v_simpBody_3060_, v_a_3085_);
v___x_3087_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_under___redArg(v_xs_3061_, v___x_3086_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_);
if (lean_obj_tag(v___x_3087_) == 0)
{
lean_object* v_a_3088_; lean_object* v___x_3089_; 
v_a_3088_ = lean_ctor_get(v___x_3087_, 0);
lean_inc(v_a_3088_);
lean_dec_ref_known(v___x_3087_, 1);
v___x_3089_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_mkCongr___redArg(v_xs_3061_, v_a_3085_, v_a_3088_, v_cd_3063_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_);
return v___x_3089_;
}
else
{
lean_dec(v_a_3085_);
lean_dec_ref(v_xs_3061_);
return v___x_3087_;
}
}
else
{
lean_object* v_a_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3097_; 
lean_dec_ref(v_xs_3061_);
lean_dec_ref(v_simpBody_3060_);
v_a_3090_ = lean_ctor_get(v___x_3084_, 0);
v_isSharedCheck_3097_ = !lean_is_exclusive(v___x_3084_);
if (v_isSharedCheck_3097_ == 0)
{
v___x_3092_ = v___x_3084_;
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_a_3090_);
lean_dec(v___x_3084_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v___x_3095_; 
if (v_isShared_3093_ == 0)
{
v___x_3095_ = v___x_3092_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v_a_3090_);
v___x_3095_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
return v___x_3095_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_go___lam__0(lean_object* v_xs_3161_, lean_object* v_simpBody_3162_, lean_object* v_body_3163_, uint8_t v_cd_3164_, lean_object* v_x_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_){
_start:
{
lean_object* v___x_3176_; lean_object* v___x_3177_; 
v___x_3176_ = lean_array_push(v_xs_3161_, v_x_3165_);
v___x_3177_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_go(v_simpBody_3162_, v___x_3176_, v_body_3163_, v_cd_3164_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_);
return v___x_3177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_go___boxed(lean_object* v_simpBody_3178_, lean_object* v_xs_3179_, lean_object* v_e_3180_, lean_object* v_cd_3181_, lean_object* v_a_3182_, lean_object* v_a_3183_, lean_object* v_a_3184_, lean_object* v_a_3185_, lean_object* v_a_3186_, lean_object* v_a_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_){
_start:
{
uint8_t v_cd_boxed_3192_; lean_object* v_res_3193_; 
v_cd_boxed_3192_ = lean_unbox(v_cd_3181_);
v_res_3193_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_go(v_simpBody_3178_, v_xs_3179_, v_e_3180_, v_cd_boxed_3192_, v_a_3182_, v_a_3183_, v_a_3184_, v_a_3185_, v_a_3186_, v_a_3187_, v_a_3188_, v_a_3189_, v_a_3190_);
lean_dec(v_a_3190_);
lean_dec_ref(v_a_3189_);
lean_dec(v_a_3188_);
lean_dec_ref(v_a_3187_);
lean_dec(v_a_3186_);
lean_dec_ref(v_a_3185_);
lean_dec(v_a_3184_);
lean_dec_ref(v_a_3183_);
lean_dec(v_a_3182_);
return v_res_3193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpForall_x27(lean_object* v_simpArrow_3196_, lean_object* v_simpBody_3197_, lean_object* v_e_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_, lean_object* v_a_3204_, lean_object* v_a_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_){
_start:
{
uint8_t v___x_3209_; 
v___x_3209_ = l_Lean_Expr_isArrow(v_e_3198_);
if (v___x_3209_ == 0)
{
lean_object* v___x_3210_; 
lean_dec_ref(v_simpArrow_3196_);
lean_inc_ref(v_e_3198_);
v___x_3210_ = l_Lean_Meta_isProp(v_e_3198_, v_a_3204_, v_a_3205_, v_a_3206_, v_a_3207_);
if (lean_obj_tag(v___x_3210_) == 0)
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3224_; 
v_a_3211_ = lean_ctor_get(v___x_3210_, 0);
v_isSharedCheck_3224_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3224_ == 0)
{
v___x_3213_ = v___x_3210_;
v_isShared_3214_ = v_isSharedCheck_3224_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v___x_3210_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3224_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
uint8_t v___x_3215_; 
v___x_3215_ = lean_unbox(v_a_3211_);
if (v___x_3215_ == 0)
{
lean_object* v___x_3216_; uint8_t v___x_3217_; uint8_t v___x_3218_; lean_object* v___x_3220_; 
lean_dec_ref(v_e_3198_);
lean_dec_ref(v_simpBody_3197_);
v___x_3216_ = lean_alloc_ctor(0, 0, 2);
v___x_3217_ = lean_unbox(v_a_3211_);
lean_ctor_set_uint8(v___x_3216_, 0, v___x_3217_);
v___x_3218_ = lean_unbox(v_a_3211_);
lean_dec(v_a_3211_);
lean_ctor_set_uint8(v___x_3216_, 1, v___x_3218_);
if (v_isShared_3214_ == 0)
{
lean_ctor_set(v___x_3213_, 0, v___x_3216_);
v___x_3220_ = v___x_3213_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v___x_3216_);
v___x_3220_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
return v___x_3220_;
}
}
else
{
lean_object* v___x_3222_; lean_object* v___x_3223_; 
lean_del_object(v___x_3213_);
lean_dec(v_a_3211_);
v___x_3222_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpForall_x27___closed__0));
v___x_3223_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_go(v_simpBody_3197_, v___x_3222_, v_e_3198_, v___x_3209_, v_a_3199_, v_a_3200_, v_a_3201_, v_a_3202_, v_a_3203_, v_a_3204_, v_a_3205_, v_a_3206_, v_a_3207_);
return v___x_3223_;
}
}
}
else
{
lean_object* v_a_3225_; lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3232_; 
lean_dec_ref(v_e_3198_);
lean_dec_ref(v_simpBody_3197_);
v_a_3225_ = lean_ctor_get(v___x_3210_, 0);
v_isSharedCheck_3232_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3232_ == 0)
{
v___x_3227_ = v___x_3210_;
v_isShared_3228_ = v_isSharedCheck_3232_;
goto v_resetjp_3226_;
}
else
{
lean_inc(v_a_3225_);
lean_dec(v___x_3210_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3232_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
lean_object* v___x_3230_; 
if (v_isShared_3228_ == 0)
{
v___x_3230_ = v___x_3227_;
goto v_reusejp_3229_;
}
else
{
lean_object* v_reuseFailAlloc_3231_; 
v_reuseFailAlloc_3231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3231_, 0, v_a_3225_);
v___x_3230_ = v_reuseFailAlloc_3231_;
goto v_reusejp_3229_;
}
v_reusejp_3229_:
{
return v___x_3230_;
}
}
}
}
else
{
lean_object* v___x_3233_; 
lean_dec_ref(v_simpBody_3197_);
lean_inc(v_a_3207_);
lean_inc_ref(v_a_3206_);
lean_inc(v_a_3205_);
lean_inc_ref(v_a_3204_);
lean_inc(v_a_3203_);
lean_inc_ref(v_a_3202_);
lean_inc(v_a_3201_);
lean_inc_ref(v_a_3200_);
lean_inc(v_a_3199_);
v___x_3233_ = lean_apply_11(v_simpArrow_3196_, v_e_3198_, v_a_3199_, v_a_3200_, v_a_3201_, v_a_3202_, v_a_3203_, v_a_3204_, v_a_3205_, v_a_3206_, v_a_3207_, lean_box(0));
return v___x_3233_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpForall_x27___boxed(lean_object* v_simpArrow_3234_, lean_object* v_simpBody_3235_, lean_object* v_e_3236_, lean_object* v_a_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_, lean_object* v_a_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_){
_start:
{
lean_object* v_res_3247_; 
v_res_3247_ = l_Lean_Meta_Sym_Simp_simpForall_x27(v_simpArrow_3234_, v_simpBody_3235_, v_e_3236_, v_a_3237_, v_a_3238_, v_a_3239_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_, v_a_3244_, v_a_3245_);
lean_dec(v_a_3245_);
lean_dec_ref(v_a_3244_);
lean_dec(v_a_3243_);
lean_dec_ref(v_a_3242_);
lean_dec(v_a_3241_);
lean_dec_ref(v_a_3240_);
lean_dec(v_a_3239_);
lean_dec_ref(v_a_3238_);
lean_dec(v_a_3237_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain___lam__0(lean_object* v_binderType_3248_, lean_object* v_e_x27_3249_, lean_object* v_proof_3250_, lean_object* v_body_3251_, lean_object* v_a_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_){
_start:
{
lean_object* v___x_3263_; 
lean_inc_ref(v_a_3252_);
v___x_3263_ = l___private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_mkPropDomainCastS(v_binderType_3248_, v_e_x27_3249_, v_proof_3250_, v_a_3252_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_);
if (lean_obj_tag(v___x_3263_) == 0)
{
lean_object* v_a_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; 
v_a_3264_ = lean_ctor_get(v___x_3263_, 0);
lean_inc(v_a_3264_);
lean_dec_ref_known(v___x_3263_, 1);
v___x_3265_ = lean_unsigned_to_nat(1u);
v___x_3266_ = lean_mk_empty_array_with_capacity(v___x_3265_);
lean_inc_ref(v___x_3266_);
v___x_3267_ = lean_array_push(v___x_3266_, v_a_3264_);
v___x_3268_ = l_Lean_Meta_Sym_instantiateS(v_body_3251_, v___x_3267_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_);
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_object* v_a_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; 
v_a_3269_ = lean_ctor_get(v___x_3268_, 0);
lean_inc(v_a_3269_);
lean_dec_ref_known(v___x_3268_, 1);
v___x_3270_ = lean_array_push(v___x_3266_, v_a_3252_);
v___x_3271_ = l_Lean_Meta_Sym_mkLambdaFVarsS(v___x_3270_, v_a_3269_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_);
return v___x_3271_;
}
else
{
lean_dec_ref(v___x_3266_);
lean_dec_ref(v_a_3252_);
return v___x_3268_;
}
}
else
{
lean_dec_ref(v_a_3252_);
lean_dec_ref(v_body_3251_);
return v___x_3263_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain___lam__0___boxed(lean_object* v_binderType_3272_, lean_object* v_e_x27_3273_, lean_object* v_proof_3274_, lean_object* v_body_3275_, lean_object* v_a_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_){
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l_Lean_Meta_Sym_Simp_simpExistsPropDomain___lam__0(v_binderType_3272_, v_e_x27_3273_, v_proof_3274_, v_body_3275_, v_a_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
lean_dec(v___y_3285_);
lean_dec_ref(v___y_3284_);
lean_dec(v___y_3283_);
lean_dec_ref(v___y_3282_);
lean_dec(v___y_3281_);
lean_dec_ref(v___y_3280_);
lean_dec(v___y_3279_);
lean_dec_ref(v___y_3278_);
lean_dec(v___y_3277_);
return v_res_3287_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__5(void){
_start:
{
lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; 
v___x_3296_ = lean_box(0);
v___x_3297_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__4));
v___x_3298_ = l_Lean_mkConst(v___x_3297_, v___x_3296_);
return v___x_3298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain(lean_object* v_e_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_, lean_object* v_a_3302_, lean_object* v_a_3303_, lean_object* v_a_3304_, lean_object* v_a_3305_, lean_object* v_a_3306_, lean_object* v_a_3307_, lean_object* v_a_3308_){
_start:
{
lean_object* v___x_3313_; uint8_t v___x_3314_; 
v___x_3313_ = l_Lean_Expr_cleanupAnnotations(v_e_3299_);
v___x_3314_ = l_Lean_Expr_isApp(v___x_3313_);
if (v___x_3314_ == 0)
{
lean_dec_ref(v___x_3313_);
goto v___jp_3310_;
}
else
{
lean_object* v___x_3315_; uint8_t v___x_3316_; 
v___x_3315_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3313_);
v___x_3316_ = l_Lean_Expr_isApp(v___x_3315_);
if (v___x_3316_ == 0)
{
lean_dec_ref(v___x_3315_);
lean_dec_ref(v___x_3313_);
goto v___jp_3310_;
}
else
{
lean_object* v___x_3317_; lean_object* v___x_3318_; uint8_t v___x_3319_; 
v___x_3317_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3315_);
lean_dec_ref(v___x_3315_);
v___x_3318_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__2));
v___x_3319_ = l_Lean_Expr_isConstOf(v___x_3317_, v___x_3318_);
if (v___x_3319_ == 0)
{
lean_dec_ref(v___x_3317_);
lean_dec_ref(v___x_3313_);
goto v___jp_3310_;
}
else
{
lean_object* v_arg_3320_; 
v_arg_3320_ = lean_ctor_get(v___x_3313_, 1);
lean_inc_ref(v_arg_3320_);
lean_dec_ref(v___x_3313_);
if (lean_obj_tag(v_arg_3320_) == 6)
{
lean_object* v_binderName_3321_; lean_object* v_binderType_3322_; lean_object* v_body_3323_; uint8_t v_binderInfo_3324_; lean_object* v___x_3325_; 
v_binderName_3321_ = lean_ctor_get(v_arg_3320_, 0);
v_binderType_3322_ = lean_ctor_get(v_arg_3320_, 1);
lean_inc_ref_n(v_binderType_3322_, 2);
v_body_3323_ = lean_ctor_get(v_arg_3320_, 2);
v_binderInfo_3324_ = lean_ctor_get_uint8(v_arg_3320_, sizeof(void*)*3 + 8);
v___x_3325_ = l_Lean_Meta_isProp(v_binderType_3322_, v_a_3305_, v_a_3306_, v_a_3307_, v_a_3308_);
if (lean_obj_tag(v___x_3325_) == 0)
{
lean_object* v_a_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3389_; 
v_a_3326_ = lean_ctor_get(v___x_3325_, 0);
v_isSharedCheck_3389_ = !lean_is_exclusive(v___x_3325_);
if (v_isSharedCheck_3389_ == 0)
{
v___x_3328_ = v___x_3325_;
v_isShared_3329_ = v_isSharedCheck_3389_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_a_3326_);
lean_dec(v___x_3325_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3389_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
uint8_t v___x_3330_; 
v___x_3330_ = lean_unbox(v_a_3326_);
if (v___x_3330_ == 0)
{
lean_object* v___x_3331_; uint8_t v___x_3332_; uint8_t v___x_3333_; lean_object* v___x_3335_; 
lean_dec_ref(v_binderType_3322_);
lean_dec_ref_known(v_arg_3320_, 3);
lean_dec_ref(v___x_3317_);
v___x_3331_ = lean_alloc_ctor(0, 0, 2);
v___x_3332_ = lean_unbox(v_a_3326_);
lean_ctor_set_uint8(v___x_3331_, 0, v___x_3332_);
v___x_3333_ = lean_unbox(v_a_3326_);
lean_dec(v_a_3326_);
lean_ctor_set_uint8(v___x_3331_, 1, v___x_3333_);
if (v_isShared_3329_ == 0)
{
lean_ctor_set(v___x_3328_, 0, v___x_3331_);
v___x_3335_ = v___x_3328_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3336_; 
v_reuseFailAlloc_3336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3336_, 0, v___x_3331_);
v___x_3335_ = v_reuseFailAlloc_3336_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
return v___x_3335_;
}
}
else
{
lean_object* v___x_3337_; 
lean_del_object(v___x_3328_);
lean_dec(v_a_3326_);
lean_inc(v_a_3308_);
lean_inc_ref(v_a_3307_);
lean_inc(v_a_3306_);
lean_inc_ref(v_a_3305_);
lean_inc(v_a_3304_);
lean_inc_ref(v_a_3303_);
lean_inc(v_a_3302_);
lean_inc_ref(v_a_3301_);
lean_inc(v_a_3300_);
lean_inc_ref(v_binderType_3322_);
v___x_3337_ = lean_sym_simp(v_binderType_3322_, v_a_3300_, v_a_3301_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_, v_a_3306_, v_a_3307_, v_a_3308_);
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_a_3338_; lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3388_; 
v_a_3338_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3340_ = v___x_3337_;
v_isShared_3341_ = v_isSharedCheck_3388_;
goto v_resetjp_3339_;
}
else
{
lean_inc(v_a_3338_);
lean_dec(v___x_3337_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3388_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
if (lean_obj_tag(v_a_3338_) == 0)
{
uint8_t v_contextDependent_3342_; lean_object* v___x_3343_; lean_object* v___x_3345_; 
lean_dec_ref(v_binderType_3322_);
lean_dec_ref_known(v_arg_3320_, 3);
lean_dec_ref(v___x_3317_);
v_contextDependent_3342_ = lean_ctor_get_uint8(v_a_3338_, 1);
lean_dec_ref_known(v_a_3338_, 0);
v___x_3343_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v_contextDependent_3342_);
if (v_isShared_3341_ == 0)
{
lean_ctor_set(v___x_3340_, 0, v___x_3343_);
v___x_3345_ = v___x_3340_;
goto v_reusejp_3344_;
}
else
{
lean_object* v_reuseFailAlloc_3346_; 
v_reuseFailAlloc_3346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3346_, 0, v___x_3343_);
v___x_3345_ = v_reuseFailAlloc_3346_;
goto v_reusejp_3344_;
}
v_reusejp_3344_:
{
return v___x_3345_;
}
}
else
{
lean_object* v_e_x27_3347_; lean_object* v_proof_3348_; uint8_t v_contextDependent_3349_; lean_object* v___x_3351_; uint8_t v_isShared_3352_; uint8_t v_isSharedCheck_3387_; 
lean_del_object(v___x_3340_);
v_e_x27_3347_ = lean_ctor_get(v_a_3338_, 0);
v_proof_3348_ = lean_ctor_get(v_a_3338_, 1);
v_contextDependent_3349_ = lean_ctor_get_uint8(v_a_3338_, sizeof(void*)*2 + 1);
v_isSharedCheck_3387_ = !lean_is_exclusive(v_a_3338_);
if (v_isSharedCheck_3387_ == 0)
{
v___x_3351_ = v_a_3338_;
v_isShared_3352_ = v_isSharedCheck_3387_;
goto v_resetjp_3350_;
}
else
{
lean_inc(v_proof_3348_);
lean_inc(v_e_x27_3347_);
lean_dec(v_a_3338_);
v___x_3351_ = lean_box(0);
v_isShared_3352_ = v_isSharedCheck_3387_;
goto v_resetjp_3350_;
}
v_resetjp_3350_:
{
lean_object* v___f_3353_; lean_object* v___x_3354_; 
lean_inc_ref(v_body_3323_);
lean_inc_ref(v_proof_3348_);
lean_inc_ref_n(v_e_x27_3347_, 2);
lean_inc_ref(v_binderType_3322_);
v___f_3353_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simpExistsPropDomain___lam__0___boxed), 15, 4);
lean_closure_set(v___f_3353_, 0, v_binderType_3322_);
lean_closure_set(v___f_3353_, 1, v_e_x27_3347_);
lean_closure_set(v___f_3353_, 2, v_proof_3348_);
lean_closure_set(v___f_3353_, 3, v_body_3323_);
lean_inc(v_binderName_3321_);
v___x_3354_ = l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpForall_x27_simpPropDomain_spec__0___redArg(v_binderName_3321_, v_binderInfo_3324_, v_e_x27_3347_, v___f_3353_, v_a_3300_, v_a_3301_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_, v_a_3306_, v_a_3307_, v_a_3308_);
if (lean_obj_tag(v___x_3354_) == 0)
{
lean_object* v_a_3355_; lean_object* v___x_3356_; 
v_a_3355_ = lean_ctor_get(v___x_3354_, 0);
lean_inc(v_a_3355_);
lean_dec_ref_known(v___x_3354_, 1);
lean_inc_ref(v_e_x27_3347_);
v___x_3356_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Sym_Simp_Forall_0__Lean_Meta_Sym_Simp_simpArrows_spec__0(v___x_3317_, v_e_x27_3347_, v_a_3355_, v_a_3300_, v_a_3301_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_, v_a_3306_, v_a_3307_, v_a_3308_);
if (lean_obj_tag(v___x_3356_) == 0)
{
lean_object* v_a_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3370_; 
v_a_3357_ = lean_ctor_get(v___x_3356_, 0);
v_isSharedCheck_3370_ = !lean_is_exclusive(v___x_3356_);
if (v_isSharedCheck_3370_ == 0)
{
v___x_3359_ = v___x_3356_;
v_isShared_3360_ = v_isSharedCheck_3370_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_a_3357_);
lean_dec(v___x_3356_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3370_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
lean_object* v___x_3361_; lean_object* v___x_3362_; uint8_t v___x_3363_; lean_object* v___x_3365_; 
v___x_3361_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__5, &l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__5_once, _init_l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__5);
v___x_3362_ = l_Lean_mkApp4(v___x_3361_, v_binderType_3322_, v_e_x27_3347_, v_proof_3348_, v_arg_3320_);
v___x_3363_ = 0;
if (v_isShared_3352_ == 0)
{
lean_ctor_set(v___x_3351_, 1, v___x_3362_);
lean_ctor_set(v___x_3351_, 0, v_a_3357_);
v___x_3365_ = v___x_3351_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3369_; 
v_reuseFailAlloc_3369_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_3369_, 0, v_a_3357_);
lean_ctor_set(v_reuseFailAlloc_3369_, 1, v___x_3362_);
lean_ctor_set_uint8(v_reuseFailAlloc_3369_, sizeof(void*)*2 + 1, v_contextDependent_3349_);
v___x_3365_ = v_reuseFailAlloc_3369_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
lean_object* v___x_3367_; 
lean_ctor_set_uint8(v___x_3365_, sizeof(void*)*2, v___x_3363_);
if (v_isShared_3360_ == 0)
{
lean_ctor_set(v___x_3359_, 0, v___x_3365_);
v___x_3367_ = v___x_3359_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v___x_3365_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
return v___x_3367_;
}
}
}
}
else
{
lean_object* v_a_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3378_; 
lean_del_object(v___x_3351_);
lean_dec_ref(v_proof_3348_);
lean_dec_ref(v_e_x27_3347_);
lean_dec_ref(v_binderType_3322_);
lean_dec_ref_known(v_arg_3320_, 3);
v_a_3371_ = lean_ctor_get(v___x_3356_, 0);
v_isSharedCheck_3378_ = !lean_is_exclusive(v___x_3356_);
if (v_isSharedCheck_3378_ == 0)
{
v___x_3373_ = v___x_3356_;
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_a_3371_);
lean_dec(v___x_3356_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3376_; 
if (v_isShared_3374_ == 0)
{
v___x_3376_ = v___x_3373_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v_a_3371_);
v___x_3376_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
return v___x_3376_;
}
}
}
}
else
{
lean_object* v_a_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3386_; 
lean_del_object(v___x_3351_);
lean_dec_ref(v_proof_3348_);
lean_dec_ref(v_e_x27_3347_);
lean_dec_ref(v_binderType_3322_);
lean_dec_ref_known(v_arg_3320_, 3);
lean_dec_ref(v___x_3317_);
v_a_3379_ = lean_ctor_get(v___x_3354_, 0);
v_isSharedCheck_3386_ = !lean_is_exclusive(v___x_3354_);
if (v_isSharedCheck_3386_ == 0)
{
v___x_3381_ = v___x_3354_;
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_a_3379_);
lean_dec(v___x_3354_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v___x_3384_; 
if (v_isShared_3382_ == 0)
{
v___x_3384_ = v___x_3381_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v_a_3379_);
v___x_3384_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
return v___x_3384_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_binderType_3322_);
lean_dec_ref_known(v_arg_3320_, 3);
lean_dec_ref(v___x_3317_);
return v___x_3337_;
}
}
}
}
else
{
lean_object* v_a_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3397_; 
lean_dec_ref(v_binderType_3322_);
lean_dec_ref_known(v_arg_3320_, 3);
lean_dec_ref(v___x_3317_);
v_a_3390_ = lean_ctor_get(v___x_3325_, 0);
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3325_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3392_ = v___x_3325_;
v_isShared_3393_ = v_isSharedCheck_3397_;
goto v_resetjp_3391_;
}
else
{
lean_inc(v_a_3390_);
lean_dec(v___x_3325_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3397_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
lean_object* v___x_3395_; 
if (v_isShared_3393_ == 0)
{
v___x_3395_ = v___x_3392_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v_a_3390_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
return v___x_3395_;
}
}
}
}
else
{
lean_object* v___x_3398_; lean_object* v___x_3399_; 
lean_dec_ref(v_arg_3320_);
lean_dec_ref(v___x_3317_);
v___x_3398_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__0));
v___x_3399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3398_);
return v___x_3399_;
}
}
}
}
v___jp_3310_:
{
lean_object* v___x_3311_; lean_object* v___x_3312_; 
v___x_3311_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpExistsPropDomain___closed__0));
v___x_3312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3312_, 0, v___x_3311_);
return v___x_3312_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpExistsPropDomain___boxed(lean_object* v_e_3400_, lean_object* v_a_3401_, lean_object* v_a_3402_, lean_object* v_a_3403_, lean_object* v_a_3404_, lean_object* v_a_3405_, lean_object* v_a_3406_, lean_object* v_a_3407_, lean_object* v_a_3408_, lean_object* v_a_3409_, lean_object* v_a_3410_){
_start:
{
lean_object* v_res_3411_; 
v_res_3411_ = l_Lean_Meta_Sym_Simp_simpExistsPropDomain(v_e_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_, v_a_3405_, v_a_3406_, v_a_3407_, v_a_3408_, v_a_3409_);
lean_dec(v_a_3409_);
lean_dec_ref(v_a_3408_);
lean_dec(v_a_3407_);
lean_dec_ref(v_a_3406_);
lean_dec(v_a_3405_);
lean_dec_ref(v_a_3404_);
lean_dec(v_a_3403_);
lean_dec_ref(v_a_3402_);
lean_dec(v_a_3401_);
lean_dec_ref(v_e_3400_);
return v_res_3411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpForall(lean_object* v_e_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_, lean_object* v_a_3422_, lean_object* v_a_3423_){
_start:
{
lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; 
v___x_3425_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpForall___closed__0));
v___x_3426_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpForall___closed__1));
v___x_3427_ = l_Lean_Meta_Sym_Simp_simpForall_x27(v___x_3425_, v___x_3426_, v_e_3414_, v_a_3415_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_, v_a_3421_, v_a_3422_, v_a_3423_);
return v___x_3427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpForall___boxed(lean_object* v_e_3428_, lean_object* v_a_3429_, lean_object* v_a_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_, lean_object* v_a_3433_, lean_object* v_a_3434_, lean_object* v_a_3435_, lean_object* v_a_3436_, lean_object* v_a_3437_, lean_object* v_a_3438_){
_start:
{
lean_object* v_res_3439_; 
v_res_3439_ = l_Lean_Meta_Sym_Simp_simpForall(v_e_3428_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_, v_a_3435_, v_a_3436_, v_a_3437_);
lean_dec(v_a_3437_);
lean_dec_ref(v_a_3436_);
lean_dec(v_a_3435_);
lean_dec_ref(v_a_3434_);
lean_dec(v_a_3433_);
lean_dec_ref(v_a_3432_);
lean_dec(v_a_3431_);
lean_dec_ref(v_a_3430_);
lean_dec(v_a_3429_);
return v_res_3439_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Result(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AbstractS(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AbstractS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Result(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AbstractS(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AbstractS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_Forall(builtin);
}
#ifdef __cplusplus
}
#endif
