// Lean compiler output
// Module: Lean.Compiler.LCNF.ResetReuse
// Imports: public import Lean.Compiler.LCNF.CompilerM public import Lean.Compiler.LCNF.PassManager import Lean.Compiler.LCNF.LiveVars import Lean.Compiler.LCNF.DependsOn import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.LCNF.PropagateBorrow
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
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
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
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(uint8_t, lean_object*);
lean_object* l_Lean_instSingletonFVarIdFVarIdSet___lam__0(lean_object*);
uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(uint8_t, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t l_Lean_Compiler_LCNF_CodeDecl_dependsOn(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_instInhabitedReaderT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_isFVarLiveIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getConfig___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_applyOwnedness(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
uint8_t l_Lean_Compiler_LCNF_instBEqOwnedness_beq(uint8_t, uint8_t);
uint8_t l_Lean_Compiler_LCNF_CtorInfo_isScalar(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0(lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateContImp"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.S.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Compiler.LCNF.ResetReuse"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tobj"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2_value),LEAN_SCALAR_PTR_LITERAL(25, 168, 138, 20, 203, 141, 233, 12)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.D.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.Code.insertResetReuse"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 100, .m_capacity = 100, .m_length = 99, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.Decl.insertResetReuseCore.collectResets"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "resetReuse"};
static const lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_insertResetReuse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(148, 201, 93, 114, 179, 16, 247, 72)}};
static const lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_insertResetReuse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_insertResetReuse___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_insertResetReuse;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(42, 22, 75, 214, 119, 69, 48, 225)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ResetReuse"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 165, 194, 12, 198, 157, 117, 65)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(105, 150, 117, 254, 63, 70, 178, 234)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(44, 242, 201, 181, 138, 172, 149, 255)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(182, 154, 112, 50, 132, 225, 68, 23)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 182, 243, 139, 183, 248, 56, 98)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(190, 130, 185, 126, 60, 87, 109, 106)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(223, 224, 225, 246, 174, 48, 45, 78)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(146, 47, 104, 191, 68, 113, 248, 179)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(96, 193, 129, 108, 61, 130, 124, 18)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(217, 251, 249, 254, 208, 86, 150, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(8, 85, 80, 162, 8, 82, 178, 101)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(lean_object* v_c_u2081_1_, lean_object* v_c_u2082_2_, lean_object* v_a_3_){
_start:
{
lean_object* v_name_5_; lean_object* v_size_6_; lean_object* v_usize_7_; lean_object* v_ssize_8_; lean_object* v_name_9_; lean_object* v_size_10_; lean_object* v_usize_11_; lean_object* v_ssize_12_; uint8_t v___x_13_; 
v_name_5_ = lean_ctor_get(v_c_u2081_1_, 0);
v_size_6_ = lean_ctor_get(v_c_u2081_1_, 2);
v_usize_7_ = lean_ctor_get(v_c_u2081_1_, 3);
v_ssize_8_ = lean_ctor_get(v_c_u2081_1_, 4);
v_name_9_ = lean_ctor_get(v_c_u2082_2_, 0);
v_size_10_ = lean_ctor_get(v_c_u2082_2_, 2);
v_usize_11_ = lean_ctor_get(v_c_u2082_2_, 3);
v_ssize_12_ = lean_ctor_get(v_c_u2082_2_, 4);
v___x_13_ = lean_nat_dec_eq(v_size_6_, v_size_10_);
if (v___x_13_ == 0)
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_box(v___x_13_);
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
return v___x_15_;
}
else
{
uint8_t v___x_16_; 
v___x_16_ = lean_nat_dec_eq(v_usize_7_, v_usize_11_);
if (v___x_16_ == 0)
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = lean_box(v___x_16_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
else
{
uint8_t v___x_19_; 
v___x_19_ = lean_nat_dec_eq(v_ssize_8_, v_ssize_12_);
if (v___x_19_ == 0)
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = lean_box(v___x_19_);
v___x_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
return v___x_21_;
}
else
{
uint8_t v_relaxedReuse_22_; 
v_relaxedReuse_22_ = lean_ctor_get_uint8(v_a_3_, sizeof(void*)*2);
if (v_relaxedReuse_22_ == 0)
{
lean_object* v___x_23_; lean_object* v___x_24_; uint8_t v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_23_ = l_Lean_Name_getPrefix(v_name_5_);
v___x_24_ = l_Lean_Name_getPrefix(v_name_9_);
v___x_25_ = lean_name_eq(v___x_23_, v___x_24_);
lean_dec(v___x_24_);
lean_dec(v___x_23_);
v___x_26_ = lean_box(v___x_25_);
v___x_27_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
return v___x_27_;
}
else
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_box(v_relaxedReuse_22_);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg___boxed(lean_object* v_c_u2081_30_, lean_object* v_c_u2082_31_, lean_object* v_a_32_, lean_object* v_a_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(v_c_u2081_30_, v_c_u2082_31_, v_a_32_);
lean_dec_ref(v_a_32_);
lean_dec_ref(v_c_u2082_31_);
lean_dec_ref(v_c_u2081_30_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse(lean_object* v_c_u2081_35_, lean_object* v_c_u2082_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(v_c_u2081_35_, v_c_u2082_36_, v_a_37_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___boxed(lean_object* v_c_u2081_44_, lean_object* v_c_u2082_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse(v_c_u2081_44_, v_c_u2082_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_a_46_);
lean_dec_ref(v_c_u2082_45_);
lean_dec_ref(v_c_u2081_44_);
return v_res_52_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0(lean_object* v_msg_54_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0);
v___x_56_ = lean_panic_fn_borrowed(v___x_55_, v_msg_54_);
return v___x_56_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_instMonadEIO___redArg();
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(lean_object* v_msg_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v_toApplicative_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_106_; 
v___x_67_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0);
v___x_68_ = l_StateRefT_x27_instMonad___redArg(v___x_67_);
v_toApplicative_69_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_106_ == 0)
{
lean_object* v_unused_107_; 
v_unused_107_ = lean_ctor_get(v___x_68_, 1);
lean_dec(v_unused_107_);
v___x_71_ = v___x_68_;
v_isShared_72_ = v_isSharedCheck_106_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_toApplicative_69_);
lean_dec(v___x_68_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_106_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v_toFunctor_73_; lean_object* v_toSeq_74_; lean_object* v_toSeqLeft_75_; lean_object* v_toSeqRight_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_104_; 
v_toFunctor_73_ = lean_ctor_get(v_toApplicative_69_, 0);
v_toSeq_74_ = lean_ctor_get(v_toApplicative_69_, 2);
v_toSeqLeft_75_ = lean_ctor_get(v_toApplicative_69_, 3);
v_toSeqRight_76_ = lean_ctor_get(v_toApplicative_69_, 4);
v_isSharedCheck_104_ = !lean_is_exclusive(v_toApplicative_69_);
if (v_isSharedCheck_104_ == 0)
{
lean_object* v_unused_105_; 
v_unused_105_ = lean_ctor_get(v_toApplicative_69_, 1);
lean_dec(v_unused_105_);
v___x_78_ = v_toApplicative_69_;
v_isShared_79_ = v_isSharedCheck_104_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_toSeqRight_76_);
lean_inc(v_toSeqLeft_75_);
lean_inc(v_toSeq_74_);
lean_inc(v_toFunctor_73_);
lean_dec(v_toApplicative_69_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_104_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___f_80_; lean_object* v___f_81_; lean_object* v___f_82_; lean_object* v___f_83_; lean_object* v___x_84_; lean_object* v___f_85_; lean_object* v___f_86_; lean_object* v___f_87_; lean_object* v___x_89_; 
v___f_80_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_81_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
lean_inc_ref(v_toFunctor_73_);
v___f_82_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_82_, 0, v_toFunctor_73_);
v___f_83_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_83_, 0, v_toFunctor_73_);
v___x_84_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_84_, 0, v___f_82_);
lean_ctor_set(v___x_84_, 1, v___f_83_);
v___f_85_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_85_, 0, v_toSeqRight_76_);
v___f_86_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_86_, 0, v_toSeqLeft_75_);
v___f_87_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_87_, 0, v_toSeq_74_);
if (v_isShared_79_ == 0)
{
lean_ctor_set(v___x_78_, 4, v___f_85_);
lean_ctor_set(v___x_78_, 3, v___f_86_);
lean_ctor_set(v___x_78_, 2, v___f_87_);
lean_ctor_set(v___x_78_, 1, v___f_80_);
lean_ctor_set(v___x_78_, 0, v___x_84_);
v___x_89_ = v___x_78_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_84_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v___f_80_);
lean_ctor_set(v_reuseFailAlloc_103_, 2, v___f_87_);
lean_ctor_set(v_reuseFailAlloc_103_, 3, v___f_86_);
lean_ctor_set(v_reuseFailAlloc_103_, 4, v___f_85_);
v___x_89_ = v_reuseFailAlloc_103_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
lean_object* v___x_91_; 
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 1, v___f_81_);
lean_ctor_set(v___x_71_, 0, v___x_89_);
v___x_91_ = v___x_71_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v___x_89_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v___f_81_);
v___x_91_ = v_reuseFailAlloc_102_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___f_98_; lean_object* v___f_99_; lean_object* v___x_3804__overap_100_; lean_object* v___x_101_; 
v___x_92_ = l_StateRefT_x27_instMonad___redArg(v___x_91_);
v___x_93_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0);
v___x_94_ = 0;
v___x_95_ = lean_box(v___x_94_);
v___x_96_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_93_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
v___x_97_ = l_instInhabitedOfMonad___redArg(v___x_92_, v___x_96_);
v___f_98_ = lean_alloc_closure((void*)(l_instInhabitedReaderT___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_98_, 0, v___x_97_);
v___f_99_ = lean_alloc_closure((void*)(l_instInhabitedReaderT___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_99_, 0, v___f_98_);
v___x_3804__overap_100_ = lean_panic_fn_borrowed(v___f_99_, v_msg_60_);
lean_dec_ref(v___f_99_);
lean_inc(v___y_65_);
lean_inc_ref(v___y_64_);
lean_inc(v___y_63_);
lean_inc_ref(v___y_62_);
lean_inc_ref(v___y_61_);
v___x_101_ = lean_apply_6(v___x_3804__overap_100_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, lean_box(0));
return v___x_101_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___boxed(lean_object* v_msg_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v_msg_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
lean_dec_ref(v___y_109_);
return v_res_115_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(lean_object* v_as_116_, size_t v_i_117_, size_t v_stop_118_){
_start:
{
uint8_t v___x_119_; 
v___x_119_ = lean_usize_dec_eq(v_i_117_, v_stop_118_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = lean_array_uget_borrowed(v_as_116_, v_i_117_);
v___x_121_ = lean_unbox(v___x_120_);
if (v___x_121_ == 0)
{
size_t v___x_122_; size_t v___x_123_; 
v___x_122_ = ((size_t)1ULL);
v___x_123_ = lean_usize_add(v_i_117_, v___x_122_);
v_i_117_ = v___x_123_;
goto _start;
}
else
{
uint8_t v___x_125_; 
v___x_125_ = lean_unbox(v___x_120_);
return v___x_125_;
}
}
else
{
uint8_t v___x_126_; 
v___x_126_ = 0;
return v___x_126_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2___boxed(lean_object* v_as_127_, lean_object* v_i_128_, lean_object* v_stop_129_){
_start:
{
size_t v_i_boxed_130_; size_t v_stop_boxed_131_; uint8_t v_res_132_; lean_object* v_r_133_; 
v_i_boxed_130_ = lean_unbox_usize(v_i_128_);
lean_dec(v_i_128_);
v_stop_boxed_131_ = lean_unbox_usize(v_stop_129_);
lean_dec(v_stop_129_);
v_res_132_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(v_as_127_, v_i_boxed_130_, v_stop_boxed_131_);
lean_dec_ref(v_as_127_);
v_r_133_ = lean_box(v_res_132_);
return v_r_133_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_137_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_138_ = lean_unsigned_to_nat(9u);
v___x_139_ = lean_unsigned_to_nat(650u);
v___x_140_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1));
v___x_141_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0));
v___x_142_ = l_mkPanicMessageWithDecl(v___x_141_, v___x_140_, v___x_139_, v___x_138_, v___x_137_);
return v___x_142_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_145_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_146_ = lean_unsigned_to_nat(61u);
v___x_147_ = lean_unsigned_to_nat(125u);
v___x_148_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5));
v___x_149_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_150_ = l_mkPanicMessageWithDecl(v___x_149_, v___x_148_, v___x_147_, v___x_146_, v___x_145_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(lean_object* v_info_151_, lean_object* v_w_152_, lean_object* v_c_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_){
_start:
{
uint8_t v___y_161_; lean_object* v___y_162_; lean_object* v_k_167_; lean_object* v___y_168_; lean_object* v___y_169_; lean_object* v___y_170_; lean_object* v___y_171_; lean_object* v___y_172_; 
switch(lean_obj_tag(v_c_153_))
{
case 0:
{
lean_object* v_decl_387_; lean_object* v_value_388_; 
v_decl_387_ = lean_ctor_get(v_c_153_, 0);
lean_inc_ref(v_decl_387_);
v_value_388_ = lean_ctor_get(v_decl_387_, 3);
lean_inc(v_value_388_);
if (lean_obj_tag(v_value_388_) == 5)
{
lean_object* v_k_389_; lean_object* v_fvarId_390_; lean_object* v_binderName_391_; lean_object* v_type_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_447_; 
v_k_389_ = lean_ctor_get(v_c_153_, 1);
v_fvarId_390_ = lean_ctor_get(v_decl_387_, 0);
v_binderName_391_ = lean_ctor_get(v_decl_387_, 1);
v_type_392_ = lean_ctor_get(v_decl_387_, 2);
v_isSharedCheck_447_ = !lean_is_exclusive(v_decl_387_);
if (v_isSharedCheck_447_ == 0)
{
lean_object* v_unused_448_; 
v_unused_448_ = lean_ctor_get(v_decl_387_, 3);
lean_dec(v_unused_448_);
v___x_394_ = v_decl_387_;
v_isShared_395_ = v_isSharedCheck_447_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_type_392_);
lean_inc(v_binderName_391_);
lean_inc(v_fvarId_390_);
lean_dec(v_decl_387_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_447_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v_i_396_; lean_object* v_args_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_446_; 
v_i_396_ = lean_ctor_get(v_value_388_, 0);
v_args_397_ = lean_ctor_get(v_value_388_, 1);
v_isSharedCheck_446_ = !lean_is_exclusive(v_value_388_);
if (v_isSharedCheck_446_ == 0)
{
v___x_399_ = v_value_388_;
v_isShared_400_ = v_isSharedCheck_446_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_args_397_);
lean_inc(v_i_396_);
lean_dec(v_value_388_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_446_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
uint8_t v___x_401_; lean_object* v___x_403_; 
v___x_401_ = 1;
lean_inc_ref(v_args_397_);
lean_inc_ref(v_i_396_);
if (v_isShared_400_ == 0)
{
v___x_403_ = v___x_399_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_i_396_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v_args_397_);
v___x_403_ = v_reuseFailAlloc_445_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
lean_object* v___x_405_; 
lean_inc_ref(v_type_392_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 3, v___x_403_);
v___x_405_ = v___x_394_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_fvarId_390_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v_binderName_391_);
lean_ctor_set(v_reuseFailAlloc_444_, 2, v_type_392_);
lean_ctor_set(v_reuseFailAlloc_444_, 3, v___x_403_);
v___x_405_ = v_reuseFailAlloc_444_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
lean_object* v___x_406_; 
v___x_406_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(v_info_151_, v_i_396_, v_a_154_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; uint8_t v___y_409_; uint8_t v___x_430_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc(v_a_407_);
lean_dec_ref_known(v___x_406_, 1);
v___x_430_ = lean_unbox(v_a_407_);
if (v___x_430_ == 0)
{
lean_dec(v_a_407_);
lean_dec_ref(v___x_405_);
lean_dec_ref(v_args_397_);
lean_dec_ref(v_i_396_);
lean_dec_ref(v_type_392_);
lean_inc_ref(v_k_389_);
v_k_167_ = v_k_389_;
v___y_168_ = v_a_154_;
v___y_169_ = v_a_155_;
v___y_170_ = v_a_156_;
v___y_171_ = v_a_157_;
v___y_172_ = v_a_158_;
goto v___jp_166_;
}
else
{
lean_object* v_cidx_431_; lean_object* v_cidx_432_; uint8_t v___x_433_; 
lean_inc_ref(v_k_389_);
lean_dec_ref_known(v_c_153_, 2);
v_cidx_431_ = lean_ctor_get(v_info_151_, 1);
v_cidx_432_ = lean_ctor_get(v_i_396_, 1);
v___x_433_ = lean_nat_dec_eq(v_cidx_431_, v_cidx_432_);
if (v___x_433_ == 0)
{
uint8_t v___x_434_; 
v___x_434_ = lean_unbox(v_a_407_);
v___y_409_ = v___x_434_;
goto v___jp_408_;
}
else
{
uint8_t v___x_435_; 
v___x_435_ = 0;
v___y_409_ = v___x_435_;
goto v___jp_408_;
}
}
v___jp_408_:
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = lean_alloc_ctor(12, 3, 1);
lean_ctor_set(v___x_410_, 0, v_w_152_);
lean_ctor_set(v___x_410_, 1, v_i_396_);
lean_ctor_set(v___x_410_, 2, v_args_397_);
lean_ctor_set_uint8(v___x_410_, sizeof(void*)*3, v___y_409_);
v___x_411_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_401_, v___x_405_, v_type_392_, v___x_410_, v_a_156_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_421_; 
v_a_412_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_421_ == 0)
{
v___x_414_ = v___x_411_;
v_isShared_415_ = v_isSharedCheck_421_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_411_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_421_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_419_; 
v___x_416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_416_, 0, v_a_412_);
lean_ctor_set(v___x_416_, 1, v_k_389_);
v___x_417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
lean_ctor_set(v___x_417_, 1, v_a_407_);
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 0, v___x_417_);
v___x_419_ = v___x_414_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
else
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_429_; 
lean_dec(v_a_407_);
lean_dec_ref(v_k_389_);
v_a_422_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_429_ == 0)
{
v___x_424_ = v___x_411_;
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_411_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_427_; 
if (v_isShared_425_ == 0)
{
v___x_427_ = v___x_424_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_a_422_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
}
}
else
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
lean_dec_ref(v___x_405_);
lean_dec_ref(v_args_397_);
lean_dec_ref(v_i_396_);
lean_dec_ref(v_type_392_);
lean_dec_ref_known(v_c_153_, 2);
lean_dec(v_w_152_);
v_a_436_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_406_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_406_);
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
}
}
}
}
else
{
lean_object* v_k_449_; 
lean_dec(v_value_388_);
lean_dec_ref(v_decl_387_);
v_k_449_ = lean_ctor_get(v_c_153_, 1);
lean_inc_ref(v_k_449_);
v_k_167_ = v_k_449_;
v___y_168_ = v_a_154_;
v___y_169_ = v_a_155_;
v___y_170_ = v_a_156_;
v___y_171_ = v_a_157_;
v___y_172_ = v_a_158_;
goto v___jp_166_;
}
}
case 2:
{
lean_object* v_decl_450_; lean_object* v_k_451_; lean_object* v_params_452_; lean_object* v_type_453_; lean_object* v_value_454_; uint8_t v___x_455_; lean_object* v___x_456_; 
v_decl_450_ = lean_ctor_get(v_c_153_, 0);
v_k_451_ = lean_ctor_get(v_c_153_, 1);
v_params_452_ = lean_ctor_get(v_decl_450_, 2);
v_type_453_ = lean_ctor_get(v_decl_450_, 3);
v_value_454_ = lean_ctor_get(v_decl_450_, 4);
v___x_455_ = 1;
lean_inc_ref(v_value_454_);
lean_inc(v_w_152_);
v___x_456_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_151_, v_w_152_, v_value_454_, v_a_154_, v_a_155_, v_a_156_, v_a_157_, v_a_158_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_457_; lean_object* v_snd_458_; uint8_t v___x_459_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_a_457_);
lean_dec_ref_known(v___x_456_, 1);
v_snd_458_ = lean_ctor_get(v_a_457_, 1);
lean_inc(v_snd_458_);
v___x_459_ = lean_unbox(v_snd_458_);
if (v___x_459_ == 0)
{
lean_dec(v_snd_458_);
lean_dec(v_a_457_);
lean_inc_ref(v_k_451_);
v_k_167_ = v_k_451_;
v___y_168_ = v_a_154_;
v___y_169_ = v_a_155_;
v___y_170_ = v_a_156_;
v___y_171_ = v_a_157_;
v___y_172_ = v_a_158_;
goto v___jp_166_;
}
else
{
lean_object* v_fst_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_510_; 
lean_dec(v_w_152_);
v_fst_460_ = lean_ctor_get(v_a_457_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v_a_457_);
if (v_isSharedCheck_510_ == 0)
{
lean_object* v_unused_511_; 
v_unused_511_ = lean_ctor_get(v_a_457_, 1);
lean_dec(v_unused_511_);
v___x_462_ = v_a_457_;
v_isShared_463_ = v_isSharedCheck_510_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_fst_460_);
lean_dec(v_a_457_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_510_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_464_; 
lean_inc_ref(v_params_452_);
lean_inc_ref(v_type_453_);
lean_inc_ref(v_decl_450_);
v___x_464_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_455_, v_decl_450_, v_type_453_, v_params_452_, v_fst_460_, v_a_156_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_501_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_501_ == 0)
{
v___x_467_ = v___x_464_;
v_isShared_468_ = v_isSharedCheck_501_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_464_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_501_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___y_470_; size_t v___x_477_; size_t v___x_478_; uint8_t v___x_479_; 
v___x_477_ = lean_ptr_addr(v_k_451_);
v___x_478_ = lean_ptr_addr(v_k_451_);
v___x_479_ = lean_usize_dec_eq(v___x_477_, v___x_478_);
if (v___x_479_ == 0)
{
lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_486_; 
lean_inc_ref(v_k_451_);
v_isSharedCheck_486_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_486_ == 0)
{
lean_object* v_unused_487_; lean_object* v_unused_488_; 
v_unused_487_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_487_);
v_unused_488_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_488_);
v___x_481_ = v_c_153_;
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
else
{
lean_dec(v_c_153_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 0, v_a_465_);
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_a_465_);
lean_ctor_set(v_reuseFailAlloc_485_, 1, v_k_451_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
v___y_470_ = v___x_484_;
goto v___jp_469_;
}
}
}
else
{
size_t v___x_489_; size_t v___x_490_; uint8_t v___x_491_; 
v___x_489_ = lean_ptr_addr(v_decl_450_);
v___x_490_ = lean_ptr_addr(v_a_465_);
v___x_491_ = lean_usize_dec_eq(v___x_489_, v___x_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
lean_inc_ref(v_k_451_);
v_isSharedCheck_498_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_498_ == 0)
{
lean_object* v_unused_499_; lean_object* v_unused_500_; 
v_unused_499_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_499_);
v_unused_500_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_500_);
v___x_493_ = v_c_153_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_dec(v_c_153_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 0, v_a_465_);
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_a_465_);
lean_ctor_set(v_reuseFailAlloc_497_, 1, v_k_451_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
v___y_470_ = v___x_496_;
goto v___jp_469_;
}
}
}
else
{
lean_dec(v_a_465_);
v___y_470_ = v_c_153_;
goto v___jp_469_;
}
}
v___jp_469_:
{
lean_object* v___x_472_; 
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 0, v___y_470_);
v___x_472_ = v___x_462_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___y_470_);
lean_ctor_set(v_reuseFailAlloc_476_, 1, v_snd_458_);
v___x_472_ = v_reuseFailAlloc_476_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
lean_object* v___x_474_; 
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v___x_472_);
v___x_474_ = v___x_467_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v___x_472_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
}
else
{
lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_509_; 
lean_del_object(v___x_462_);
lean_dec(v_snd_458_);
lean_dec_ref_known(v_c_153_, 2);
v_a_502_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_509_ == 0)
{
v___x_504_ = v___x_464_;
v_isShared_505_ = v_isSharedCheck_509_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v___x_464_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_509_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_507_; 
if (v_isShared_505_ == 0)
{
v___x_507_ = v___x_504_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_a_502_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_c_153_, 2);
lean_dec(v_w_152_);
return v___x_456_;
}
}
case 3:
{
uint8_t v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
lean_dec(v_w_152_);
v___x_512_ = 0;
v___x_513_ = lean_box(v___x_512_);
v___x_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_514_, 0, v_c_153_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
v___x_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
return v___x_515_;
}
case 4:
{
lean_object* v_cases_516_; lean_object* v_typeName_517_; lean_object* v_resultType_518_; lean_object* v_discr_519_; lean_object* v_alts_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_572_; 
v_cases_516_ = lean_ctor_get(v_c_153_, 0);
lean_inc_ref(v_cases_516_);
v_typeName_517_ = lean_ctor_get(v_cases_516_, 0);
v_resultType_518_ = lean_ctor_get(v_cases_516_, 1);
v_discr_519_ = lean_ctor_get(v_cases_516_, 2);
v_alts_520_ = lean_ctor_get(v_cases_516_, 3);
v_isSharedCheck_572_ = !lean_is_exclusive(v_cases_516_);
if (v_isSharedCheck_572_ == 0)
{
v___x_522_ = v_cases_516_;
v_isShared_523_ = v_isSharedCheck_572_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_alts_520_);
lean_inc(v_discr_519_);
lean_inc(v_resultType_518_);
lean_inc(v_typeName_517_);
lean_dec(v_cases_516_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_572_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
size_t v_sz_524_; size_t v___x_525_; lean_object* v___x_526_; 
v_sz_524_ = lean_array_size(v_alts_520_);
v___x_525_ = ((size_t)0ULL);
lean_inc_ref(v_alts_520_);
v___x_526_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(v_info_151_, v_w_152_, v_sz_524_, v___x_525_, v_alts_520_, v_a_154_, v_a_155_, v_a_156_, v_a_157_, v_a_158_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_563_; 
v_a_527_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_563_ == 0)
{
v___x_529_ = v___x_526_;
v_isShared_530_ = v_isSharedCheck_563_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_526_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_563_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___y_532_; uint8_t v___y_533_; lean_object* v___x_539_; lean_object* v_fst_540_; lean_object* v_snd_541_; lean_object* v___y_543_; size_t v___x_549_; size_t v___x_550_; uint8_t v___x_551_; 
v___x_539_ = l_Array_unzip___redArg(v_a_527_);
lean_dec(v_a_527_);
v_fst_540_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_fst_540_);
v_snd_541_ = lean_ctor_get(v___x_539_, 1);
lean_inc(v_snd_541_);
lean_dec_ref(v___x_539_);
v___x_549_ = lean_ptr_addr(v_alts_520_);
lean_dec_ref(v_alts_520_);
v___x_550_ = lean_ptr_addr(v_fst_540_);
v___x_551_ = lean_usize_dec_eq(v___x_549_, v___x_550_);
if (v___x_551_ == 0)
{
lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_561_; 
v_isSharedCheck_561_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_561_ == 0)
{
lean_object* v_unused_562_; 
v_unused_562_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_562_);
v___x_553_ = v_c_153_;
v_isShared_554_ = v_isSharedCheck_561_;
goto v_resetjp_552_;
}
else
{
lean_dec(v_c_153_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_561_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_523_ == 0)
{
lean_ctor_set(v___x_522_, 3, v_fst_540_);
v___x_556_ = v___x_522_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_typeName_517_);
lean_ctor_set(v_reuseFailAlloc_560_, 1, v_resultType_518_);
lean_ctor_set(v_reuseFailAlloc_560_, 2, v_discr_519_);
lean_ctor_set(v_reuseFailAlloc_560_, 3, v_fst_540_);
v___x_556_ = v_reuseFailAlloc_560_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
lean_object* v___x_558_; 
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 0, v___x_556_);
v___x_558_ = v___x_553_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v___x_556_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
v___y_543_ = v___x_558_;
goto v___jp_542_;
}
}
}
}
else
{
lean_dec(v_fst_540_);
lean_del_object(v___x_522_);
lean_dec(v_discr_519_);
lean_dec_ref(v_resultType_518_);
lean_dec(v_typeName_517_);
v___y_543_ = v_c_153_;
goto v___jp_542_;
}
v___jp_531_:
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_537_; 
v___x_534_ = lean_box(v___y_533_);
v___x_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_535_, 0, v___y_532_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 0, v___x_535_);
v___x_537_ = v___x_529_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v___x_535_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
v___jp_542_:
{
lean_object* v___x_544_; lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_544_ = lean_unsigned_to_nat(0u);
v___x_545_ = lean_array_get_size(v_snd_541_);
v___x_546_ = lean_nat_dec_lt(v___x_544_, v___x_545_);
if (v___x_546_ == 0)
{
lean_dec(v_snd_541_);
v___y_532_ = v___y_543_;
v___y_533_ = v___x_546_;
goto v___jp_531_;
}
else
{
if (v___x_546_ == 0)
{
lean_dec(v_snd_541_);
v___y_532_ = v___y_543_;
v___y_533_ = v___x_546_;
goto v___jp_531_;
}
else
{
size_t v___x_547_; uint8_t v___x_548_; 
v___x_547_ = lean_usize_of_nat(v___x_545_);
v___x_548_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(v_snd_541_, v___x_525_, v___x_547_);
lean_dec(v_snd_541_);
v___y_532_ = v___y_543_;
v___y_533_ = v___x_548_;
goto v___jp_531_;
}
}
}
}
}
else
{
lean_object* v_a_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_571_; 
lean_del_object(v___x_522_);
lean_dec_ref(v_alts_520_);
lean_dec(v_discr_519_);
lean_dec_ref(v_resultType_518_);
lean_dec(v_typeName_517_);
lean_dec_ref_known(v_c_153_, 1);
v_a_564_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_571_ == 0)
{
v___x_566_ = v___x_526_;
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_a_564_);
lean_dec(v___x_526_);
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
case 5:
{
uint8_t v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
lean_dec(v_w_152_);
v___x_573_ = 0;
v___x_574_ = lean_box(v___x_573_);
v___x_575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_575_, 0, v_c_153_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___x_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
return v___x_576_;
}
case 6:
{
uint8_t v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
lean_dec(v_w_152_);
v___x_577_ = 0;
v___x_578_ = lean_box(v___x_577_);
v___x_579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_579_, 0, v_c_153_);
lean_ctor_set(v___x_579_, 1, v___x_578_);
v___x_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
return v___x_580_;
}
case 8:
{
lean_object* v_k_581_; 
v_k_581_ = lean_ctor_get(v_c_153_, 3);
lean_inc_ref(v_k_581_);
v_k_167_ = v_k_581_;
v___y_168_ = v_a_154_;
v___y_169_ = v_a_155_;
v___y_170_ = v_a_156_;
v___y_171_ = v_a_157_;
v___y_172_ = v_a_158_;
goto v___jp_166_;
}
case 9:
{
lean_object* v_k_582_; 
v_k_582_ = lean_ctor_get(v_c_153_, 5);
lean_inc_ref(v_k_582_);
v_k_167_ = v_k_582_;
v___y_168_ = v_a_154_;
v___y_169_ = v_a_155_;
v___y_170_ = v_a_156_;
v___y_171_ = v_a_157_;
v___y_172_ = v_a_158_;
goto v___jp_166_;
}
default: 
{
lean_object* v___x_583_; lean_object* v___x_584_; 
lean_dec_ref(v_c_153_);
lean_dec(v_w_152_);
v___x_583_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6);
v___x_584_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v___x_583_, v_a_154_, v_a_155_, v_a_156_, v_a_157_, v_a_158_);
return v___x_584_;
}
}
v___jp_160_:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_163_ = lean_box(v___y_161_);
v___x_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_164_, 0, v___y_162_);
lean_ctor_set(v___x_164_, 1, v___x_163_);
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
return v___x_165_;
}
v___jp_166_:
{
lean_object* v___x_173_; 
v___x_173_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_151_, v_w_152_, v_k_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_);
if (lean_obj_tag(v___x_173_) == 0)
{
lean_object* v_a_174_; 
v_a_174_ = lean_ctor_get(v___x_173_, 0);
lean_inc(v_a_174_);
lean_dec_ref_known(v___x_173_, 1);
switch(lean_obj_tag(v_c_153_))
{
case 0:
{
lean_object* v_fst_175_; lean_object* v_snd_176_; lean_object* v_decl_177_; lean_object* v_k_178_; size_t v___x_179_; size_t v___x_180_; uint8_t v___x_181_; 
v_fst_175_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_175_);
v_snd_176_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_176_);
lean_dec(v_a_174_);
v_decl_177_ = lean_ctor_get(v_c_153_, 0);
v_k_178_ = lean_ctor_get(v_c_153_, 1);
v___x_179_ = lean_ptr_addr(v_k_178_);
v___x_180_ = lean_ptr_addr(v_fst_175_);
v___x_181_ = lean_usize_dec_eq(v___x_179_, v___x_180_);
if (v___x_181_ == 0)
{
lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_189_; 
lean_inc_ref(v_decl_177_);
v_isSharedCheck_189_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_189_ == 0)
{
lean_object* v_unused_190_; lean_object* v_unused_191_; 
v_unused_190_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_190_);
v_unused_191_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_191_);
v___x_183_ = v_c_153_;
v_isShared_184_ = v_isSharedCheck_189_;
goto v_resetjp_182_;
}
else
{
lean_dec(v_c_153_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_189_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 1, v_fst_175_);
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_decl_177_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v_fst_175_);
v___x_186_ = v_reuseFailAlloc_188_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
uint8_t v___x_187_; 
v___x_187_ = lean_unbox(v_snd_176_);
lean_dec(v_snd_176_);
v___y_161_ = v___x_187_;
v___y_162_ = v___x_186_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_192_; 
lean_dec(v_fst_175_);
v___x_192_ = lean_unbox(v_snd_176_);
lean_dec(v_snd_176_);
v___y_161_ = v___x_192_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 1:
{
lean_object* v_fst_193_; lean_object* v_snd_194_; lean_object* v_decl_195_; lean_object* v_k_196_; size_t v___x_197_; size_t v___x_198_; uint8_t v___x_199_; 
v_fst_193_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_193_);
v_snd_194_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_194_);
lean_dec(v_a_174_);
v_decl_195_ = lean_ctor_get(v_c_153_, 0);
v_k_196_ = lean_ctor_get(v_c_153_, 1);
v___x_197_ = lean_ptr_addr(v_k_196_);
v___x_198_ = lean_ptr_addr(v_fst_193_);
v___x_199_ = lean_usize_dec_eq(v___x_197_, v___x_198_);
if (v___x_199_ == 0)
{
lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_207_; 
lean_inc_ref(v_decl_195_);
v_isSharedCheck_207_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_207_ == 0)
{
lean_object* v_unused_208_; lean_object* v_unused_209_; 
v_unused_208_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_208_);
v_unused_209_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_209_);
v___x_201_ = v_c_153_;
v_isShared_202_ = v_isSharedCheck_207_;
goto v_resetjp_200_;
}
else
{
lean_dec(v_c_153_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_207_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 1, v_fst_193_);
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_decl_195_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v_fst_193_);
v___x_204_ = v_reuseFailAlloc_206_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
uint8_t v___x_205_; 
v___x_205_ = lean_unbox(v_snd_194_);
lean_dec(v_snd_194_);
v___y_161_ = v___x_205_;
v___y_162_ = v___x_204_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_210_; 
lean_dec(v_fst_193_);
v___x_210_ = lean_unbox(v_snd_194_);
lean_dec(v_snd_194_);
v___y_161_ = v___x_210_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 2:
{
lean_object* v_fst_211_; lean_object* v_snd_212_; lean_object* v_decl_213_; lean_object* v_k_214_; size_t v___x_215_; size_t v___x_216_; uint8_t v___x_217_; 
v_fst_211_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_211_);
v_snd_212_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_212_);
lean_dec(v_a_174_);
v_decl_213_ = lean_ctor_get(v_c_153_, 0);
v_k_214_ = lean_ctor_get(v_c_153_, 1);
v___x_215_ = lean_ptr_addr(v_k_214_);
v___x_216_ = lean_ptr_addr(v_fst_211_);
v___x_217_ = lean_usize_dec_eq(v___x_215_, v___x_216_);
if (v___x_217_ == 0)
{
lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_225_; 
lean_inc_ref(v_decl_213_);
v_isSharedCheck_225_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_225_ == 0)
{
lean_object* v_unused_226_; lean_object* v_unused_227_; 
v_unused_226_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_226_);
v_unused_227_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_227_);
v___x_219_ = v_c_153_;
v_isShared_220_ = v_isSharedCheck_225_;
goto v_resetjp_218_;
}
else
{
lean_dec(v_c_153_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_225_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_222_; 
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v_fst_211_);
v___x_222_ = v___x_219_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_decl_213_);
lean_ctor_set(v_reuseFailAlloc_224_, 1, v_fst_211_);
v___x_222_ = v_reuseFailAlloc_224_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
uint8_t v___x_223_; 
v___x_223_ = lean_unbox(v_snd_212_);
lean_dec(v_snd_212_);
v___y_161_ = v___x_223_;
v___y_162_ = v___x_222_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_228_; 
lean_dec(v_fst_211_);
v___x_228_ = lean_unbox(v_snd_212_);
lean_dec(v_snd_212_);
v___y_161_ = v___x_228_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 7:
{
lean_object* v_fst_229_; lean_object* v_snd_230_; lean_object* v_fvarId_231_; lean_object* v_i_232_; lean_object* v_y_233_; lean_object* v_k_234_; size_t v___x_235_; size_t v___x_236_; uint8_t v___x_237_; 
v_fst_229_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_229_);
v_snd_230_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_230_);
lean_dec(v_a_174_);
v_fvarId_231_ = lean_ctor_get(v_c_153_, 0);
v_i_232_ = lean_ctor_get(v_c_153_, 1);
v_y_233_ = lean_ctor_get(v_c_153_, 2);
v_k_234_ = lean_ctor_get(v_c_153_, 3);
v___x_235_ = lean_ptr_addr(v_k_234_);
v___x_236_ = lean_ptr_addr(v_fst_229_);
v___x_237_ = lean_usize_dec_eq(v___x_235_, v___x_236_);
if (v___x_237_ == 0)
{
lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_245_; 
lean_inc(v_y_233_);
lean_inc(v_i_232_);
lean_inc(v_fvarId_231_);
v_isSharedCheck_245_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_245_ == 0)
{
lean_object* v_unused_246_; lean_object* v_unused_247_; lean_object* v_unused_248_; lean_object* v_unused_249_; 
v_unused_246_ = lean_ctor_get(v_c_153_, 3);
lean_dec(v_unused_246_);
v_unused_247_ = lean_ctor_get(v_c_153_, 2);
lean_dec(v_unused_247_);
v_unused_248_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_248_);
v_unused_249_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_249_);
v___x_239_ = v_c_153_;
v_isShared_240_ = v_isSharedCheck_245_;
goto v_resetjp_238_;
}
else
{
lean_dec(v_c_153_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_245_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 3, v_fst_229_);
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_fvarId_231_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_i_232_);
lean_ctor_set(v_reuseFailAlloc_244_, 2, v_y_233_);
lean_ctor_set(v_reuseFailAlloc_244_, 3, v_fst_229_);
v___x_242_ = v_reuseFailAlloc_244_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
uint8_t v___x_243_; 
v___x_243_ = lean_unbox(v_snd_230_);
lean_dec(v_snd_230_);
v___y_161_ = v___x_243_;
v___y_162_ = v___x_242_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_250_; 
lean_dec(v_fst_229_);
v___x_250_ = lean_unbox(v_snd_230_);
lean_dec(v_snd_230_);
v___y_161_ = v___x_250_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 9:
{
lean_object* v_fst_251_; lean_object* v_snd_252_; lean_object* v_fvarId_253_; lean_object* v_i_254_; lean_object* v_offset_255_; lean_object* v_y_256_; lean_object* v_ty_257_; lean_object* v_k_258_; size_t v___x_259_; size_t v___x_260_; uint8_t v___x_261_; 
v_fst_251_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_251_);
v_snd_252_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_252_);
lean_dec(v_a_174_);
v_fvarId_253_ = lean_ctor_get(v_c_153_, 0);
v_i_254_ = lean_ctor_get(v_c_153_, 1);
v_offset_255_ = lean_ctor_get(v_c_153_, 2);
v_y_256_ = lean_ctor_get(v_c_153_, 3);
v_ty_257_ = lean_ctor_get(v_c_153_, 4);
v_k_258_ = lean_ctor_get(v_c_153_, 5);
v___x_259_ = lean_ptr_addr(v_k_258_);
v___x_260_ = lean_ptr_addr(v_fst_251_);
v___x_261_ = lean_usize_dec_eq(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_269_; 
lean_inc_ref(v_ty_257_);
lean_inc(v_y_256_);
lean_inc(v_offset_255_);
lean_inc(v_i_254_);
lean_inc(v_fvarId_253_);
v_isSharedCheck_269_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_269_ == 0)
{
lean_object* v_unused_270_; lean_object* v_unused_271_; lean_object* v_unused_272_; lean_object* v_unused_273_; lean_object* v_unused_274_; lean_object* v_unused_275_; 
v_unused_270_ = lean_ctor_get(v_c_153_, 5);
lean_dec(v_unused_270_);
v_unused_271_ = lean_ctor_get(v_c_153_, 4);
lean_dec(v_unused_271_);
v_unused_272_ = lean_ctor_get(v_c_153_, 3);
lean_dec(v_unused_272_);
v_unused_273_ = lean_ctor_get(v_c_153_, 2);
lean_dec(v_unused_273_);
v_unused_274_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_274_);
v_unused_275_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_275_);
v___x_263_ = v_c_153_;
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
else
{
lean_dec(v_c_153_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_269_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 5, v_fst_251_);
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_fvarId_253_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v_i_254_);
lean_ctor_set(v_reuseFailAlloc_268_, 2, v_offset_255_);
lean_ctor_set(v_reuseFailAlloc_268_, 3, v_y_256_);
lean_ctor_set(v_reuseFailAlloc_268_, 4, v_ty_257_);
lean_ctor_set(v_reuseFailAlloc_268_, 5, v_fst_251_);
v___x_266_ = v_reuseFailAlloc_268_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
uint8_t v___x_267_; 
v___x_267_ = lean_unbox(v_snd_252_);
lean_dec(v_snd_252_);
v___y_161_ = v___x_267_;
v___y_162_ = v___x_266_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_276_; 
lean_dec(v_fst_251_);
v___x_276_ = lean_unbox(v_snd_252_);
lean_dec(v_snd_252_);
v___y_161_ = v___x_276_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 8:
{
lean_object* v_fst_277_; lean_object* v_snd_278_; lean_object* v_fvarId_279_; lean_object* v_i_280_; lean_object* v_y_281_; lean_object* v_k_282_; size_t v___x_283_; size_t v___x_284_; uint8_t v___x_285_; 
v_fst_277_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_277_);
v_snd_278_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_278_);
lean_dec(v_a_174_);
v_fvarId_279_ = lean_ctor_get(v_c_153_, 0);
v_i_280_ = lean_ctor_get(v_c_153_, 1);
v_y_281_ = lean_ctor_get(v_c_153_, 2);
v_k_282_ = lean_ctor_get(v_c_153_, 3);
v___x_283_ = lean_ptr_addr(v_k_282_);
v___x_284_ = lean_ptr_addr(v_fst_277_);
v___x_285_ = lean_usize_dec_eq(v___x_283_, v___x_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_293_; 
lean_inc(v_y_281_);
lean_inc(v_i_280_);
lean_inc(v_fvarId_279_);
v_isSharedCheck_293_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_293_ == 0)
{
lean_object* v_unused_294_; lean_object* v_unused_295_; lean_object* v_unused_296_; lean_object* v_unused_297_; 
v_unused_294_ = lean_ctor_get(v_c_153_, 3);
lean_dec(v_unused_294_);
v_unused_295_ = lean_ctor_get(v_c_153_, 2);
lean_dec(v_unused_295_);
v_unused_296_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_296_);
v_unused_297_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_297_);
v___x_287_ = v_c_153_;
v_isShared_288_ = v_isSharedCheck_293_;
goto v_resetjp_286_;
}
else
{
lean_dec(v_c_153_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_293_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_290_; 
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 3, v_fst_277_);
v___x_290_ = v___x_287_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_fvarId_279_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_i_280_);
lean_ctor_set(v_reuseFailAlloc_292_, 2, v_y_281_);
lean_ctor_set(v_reuseFailAlloc_292_, 3, v_fst_277_);
v___x_290_ = v_reuseFailAlloc_292_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
uint8_t v___x_291_; 
v___x_291_ = lean_unbox(v_snd_278_);
lean_dec(v_snd_278_);
v___y_161_ = v___x_291_;
v___y_162_ = v___x_290_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_298_; 
lean_dec(v_fst_277_);
v___x_298_ = lean_unbox(v_snd_278_);
lean_dec(v_snd_278_);
v___y_161_ = v___x_298_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 10:
{
lean_object* v_fst_299_; lean_object* v_snd_300_; lean_object* v_fvarId_301_; lean_object* v_cidx_302_; lean_object* v_k_303_; size_t v___x_304_; size_t v___x_305_; uint8_t v___x_306_; 
v_fst_299_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_299_);
v_snd_300_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_300_);
lean_dec(v_a_174_);
v_fvarId_301_ = lean_ctor_get(v_c_153_, 0);
v_cidx_302_ = lean_ctor_get(v_c_153_, 1);
v_k_303_ = lean_ctor_get(v_c_153_, 2);
v___x_304_ = lean_ptr_addr(v_k_303_);
v___x_305_ = lean_ptr_addr(v_fst_299_);
v___x_306_ = lean_usize_dec_eq(v___x_304_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_314_; 
lean_inc(v_cidx_302_);
lean_inc(v_fvarId_301_);
v_isSharedCheck_314_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_314_ == 0)
{
lean_object* v_unused_315_; lean_object* v_unused_316_; lean_object* v_unused_317_; 
v_unused_315_ = lean_ctor_get(v_c_153_, 2);
lean_dec(v_unused_315_);
v_unused_316_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_316_);
v_unused_317_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_317_);
v___x_308_ = v_c_153_;
v_isShared_309_ = v_isSharedCheck_314_;
goto v_resetjp_307_;
}
else
{
lean_dec(v_c_153_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_314_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_311_; 
if (v_isShared_309_ == 0)
{
lean_ctor_set(v___x_308_, 2, v_fst_299_);
v___x_311_ = v___x_308_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_fvarId_301_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v_cidx_302_);
lean_ctor_set(v_reuseFailAlloc_313_, 2, v_fst_299_);
v___x_311_ = v_reuseFailAlloc_313_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
uint8_t v___x_312_; 
v___x_312_ = lean_unbox(v_snd_300_);
lean_dec(v_snd_300_);
v___y_161_ = v___x_312_;
v___y_162_ = v___x_311_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_318_; 
lean_dec(v_fst_299_);
v___x_318_ = lean_unbox(v_snd_300_);
lean_dec(v_snd_300_);
v___y_161_ = v___x_318_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 11:
{
lean_object* v_fst_319_; lean_object* v_snd_320_; lean_object* v_fvarId_321_; lean_object* v_n_322_; uint8_t v_check_323_; uint8_t v_persistent_324_; lean_object* v_k_325_; size_t v___x_326_; size_t v___x_327_; uint8_t v___x_328_; 
v_fst_319_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_319_);
v_snd_320_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_320_);
lean_dec(v_a_174_);
v_fvarId_321_ = lean_ctor_get(v_c_153_, 0);
v_n_322_ = lean_ctor_get(v_c_153_, 1);
v_check_323_ = lean_ctor_get_uint8(v_c_153_, sizeof(void*)*3);
v_persistent_324_ = lean_ctor_get_uint8(v_c_153_, sizeof(void*)*3 + 1);
v_k_325_ = lean_ctor_get(v_c_153_, 2);
v___x_326_ = lean_ptr_addr(v_k_325_);
v___x_327_ = lean_ptr_addr(v_fst_319_);
v___x_328_ = lean_usize_dec_eq(v___x_326_, v___x_327_);
if (v___x_328_ == 0)
{
lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_336_; 
lean_inc(v_n_322_);
lean_inc(v_fvarId_321_);
v_isSharedCheck_336_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_336_ == 0)
{
lean_object* v_unused_337_; lean_object* v_unused_338_; lean_object* v_unused_339_; 
v_unused_337_ = lean_ctor_get(v_c_153_, 2);
lean_dec(v_unused_337_);
v_unused_338_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_338_);
v_unused_339_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_339_);
v___x_330_ = v_c_153_;
v_isShared_331_ = v_isSharedCheck_336_;
goto v_resetjp_329_;
}
else
{
lean_dec(v_c_153_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_336_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 2, v_fst_319_);
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_fvarId_321_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_n_322_);
lean_ctor_set(v_reuseFailAlloc_335_, 2, v_fst_319_);
lean_ctor_set_uint8(v_reuseFailAlloc_335_, sizeof(void*)*3, v_check_323_);
lean_ctor_set_uint8(v_reuseFailAlloc_335_, sizeof(void*)*3 + 1, v_persistent_324_);
v___x_333_ = v_reuseFailAlloc_335_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
uint8_t v___x_334_; 
v___x_334_ = lean_unbox(v_snd_320_);
lean_dec(v_snd_320_);
v___y_161_ = v___x_334_;
v___y_162_ = v___x_333_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_340_; 
lean_dec(v_fst_319_);
v___x_340_ = lean_unbox(v_snd_320_);
lean_dec(v_snd_320_);
v___y_161_ = v___x_340_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 12:
{
lean_object* v_fst_341_; lean_object* v_snd_342_; lean_object* v_fvarId_343_; lean_object* v_n_344_; uint8_t v_check_345_; uint8_t v_persistent_346_; lean_object* v_objs_x3f_347_; lean_object* v_k_348_; size_t v___x_349_; size_t v___x_350_; uint8_t v___x_351_; 
v_fst_341_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_341_);
v_snd_342_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_342_);
lean_dec(v_a_174_);
v_fvarId_343_ = lean_ctor_get(v_c_153_, 0);
v_n_344_ = lean_ctor_get(v_c_153_, 1);
v_check_345_ = lean_ctor_get_uint8(v_c_153_, sizeof(void*)*4);
v_persistent_346_ = lean_ctor_get_uint8(v_c_153_, sizeof(void*)*4 + 1);
v_objs_x3f_347_ = lean_ctor_get(v_c_153_, 2);
v_k_348_ = lean_ctor_get(v_c_153_, 3);
v___x_349_ = lean_ptr_addr(v_k_348_);
v___x_350_ = lean_ptr_addr(v_fst_341_);
v___x_351_ = lean_usize_dec_eq(v___x_349_, v___x_350_);
if (v___x_351_ == 0)
{
lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_359_; 
lean_inc(v_objs_x3f_347_);
lean_inc(v_n_344_);
lean_inc(v_fvarId_343_);
v_isSharedCheck_359_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_359_ == 0)
{
lean_object* v_unused_360_; lean_object* v_unused_361_; lean_object* v_unused_362_; lean_object* v_unused_363_; 
v_unused_360_ = lean_ctor_get(v_c_153_, 3);
lean_dec(v_unused_360_);
v_unused_361_ = lean_ctor_get(v_c_153_, 2);
lean_dec(v_unused_361_);
v_unused_362_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_362_);
v_unused_363_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_363_);
v___x_353_ = v_c_153_;
v_isShared_354_ = v_isSharedCheck_359_;
goto v_resetjp_352_;
}
else
{
lean_dec(v_c_153_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_359_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_356_; 
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 3, v_fst_341_);
v___x_356_ = v___x_353_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_fvarId_343_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v_n_344_);
lean_ctor_set(v_reuseFailAlloc_358_, 2, v_objs_x3f_347_);
lean_ctor_set(v_reuseFailAlloc_358_, 3, v_fst_341_);
lean_ctor_set_uint8(v_reuseFailAlloc_358_, sizeof(void*)*4, v_check_345_);
lean_ctor_set_uint8(v_reuseFailAlloc_358_, sizeof(void*)*4 + 1, v_persistent_346_);
v___x_356_ = v_reuseFailAlloc_358_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
uint8_t v___x_357_; 
v___x_357_ = lean_unbox(v_snd_342_);
lean_dec(v_snd_342_);
v___y_161_ = v___x_357_;
v___y_162_ = v___x_356_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_364_; 
lean_dec(v_fst_341_);
v___x_364_ = lean_unbox(v_snd_342_);
lean_dec(v_snd_342_);
v___y_161_ = v___x_364_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
case 13:
{
lean_object* v_fst_365_; lean_object* v_snd_366_; lean_object* v_fvarId_367_; lean_object* v_k_368_; size_t v___x_369_; size_t v___x_370_; uint8_t v___x_371_; 
v_fst_365_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_365_);
v_snd_366_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_366_);
lean_dec(v_a_174_);
v_fvarId_367_ = lean_ctor_get(v_c_153_, 0);
v_k_368_ = lean_ctor_get(v_c_153_, 1);
v___x_369_ = lean_ptr_addr(v_k_368_);
v___x_370_ = lean_ptr_addr(v_fst_365_);
v___x_371_ = lean_usize_dec_eq(v___x_369_, v___x_370_);
if (v___x_371_ == 0)
{
lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_379_; 
lean_inc(v_fvarId_367_);
v_isSharedCheck_379_ = !lean_is_exclusive(v_c_153_);
if (v_isSharedCheck_379_ == 0)
{
lean_object* v_unused_380_; lean_object* v_unused_381_; 
v_unused_380_ = lean_ctor_get(v_c_153_, 1);
lean_dec(v_unused_380_);
v_unused_381_ = lean_ctor_get(v_c_153_, 0);
lean_dec(v_unused_381_);
v___x_373_ = v_c_153_;
v_isShared_374_ = v_isSharedCheck_379_;
goto v_resetjp_372_;
}
else
{
lean_dec(v_c_153_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_379_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_376_; 
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 1, v_fst_365_);
v___x_376_ = v___x_373_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_fvarId_367_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v_fst_365_);
v___x_376_ = v_reuseFailAlloc_378_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
uint8_t v___x_377_; 
v___x_377_ = lean_unbox(v_snd_366_);
lean_dec(v_snd_366_);
v___y_161_ = v___x_377_;
v___y_162_ = v___x_376_;
goto v___jp_160_;
}
}
}
else
{
uint8_t v___x_382_; 
lean_dec(v_fst_365_);
v___x_382_ = lean_unbox(v_snd_366_);
lean_dec(v_snd_366_);
v___y_161_ = v___x_382_;
v___y_162_ = v_c_153_;
goto v___jp_160_;
}
}
default: 
{
lean_object* v_snd_383_; lean_object* v___x_384_; lean_object* v___x_385_; uint8_t v___x_386_; 
lean_dec_ref(v_c_153_);
v_snd_383_ = lean_ctor_get(v_a_174_, 1);
lean_inc(v_snd_383_);
lean_dec(v_a_174_);
v___x_384_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3);
v___x_385_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0(v___x_384_);
v___x_386_ = lean_unbox(v_snd_383_);
lean_dec(v_snd_383_);
v___y_161_ = v___x_386_;
v___y_162_ = v___x_385_;
goto v___jp_160_;
}
}
}
else
{
lean_dec_ref(v_c_153_);
return v___x_173_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(lean_object* v_info_585_, lean_object* v_w_586_, size_t v_sz_587_, size_t v_i_588_, lean_object* v_bs_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
uint8_t v___x_596_; 
v___x_596_ = lean_usize_dec_lt(v_i_588_, v_sz_587_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; 
lean_dec(v_w_586_);
v___x_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_597_, 0, v_bs_589_);
return v___x_597_;
}
else
{
lean_object* v_v_598_; lean_object* v___x_599_; lean_object* v_bs_x27_600_; lean_object* v___y_602_; 
v_v_598_ = lean_array_uget(v_bs_589_, v_i_588_);
v___x_599_ = lean_unsigned_to_nat(0u);
v_bs_x27_600_ = lean_array_uset(v_bs_589_, v_i_588_, v___x_599_);
switch(lean_obj_tag(v_v_598_))
{
case 0:
{
lean_object* v_code_627_; 
v_code_627_ = lean_ctor_get(v_v_598_, 2);
lean_inc_ref(v_code_627_);
v___y_602_ = v_code_627_;
goto v___jp_601_;
}
case 1:
{
lean_object* v_code_628_; 
v_code_628_ = lean_ctor_get(v_v_598_, 1);
lean_inc_ref(v_code_628_);
v___y_602_ = v_code_628_;
goto v___jp_601_;
}
default: 
{
lean_object* v_code_629_; 
v_code_629_ = lean_ctor_get(v_v_598_, 0);
lean_inc_ref(v_code_629_);
v___y_602_ = v_code_629_;
goto v___jp_601_;
}
}
v___jp_601_:
{
lean_object* v___x_603_; 
lean_inc(v_w_586_);
v___x_603_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_585_, v_w_586_, v___y_602_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v_a_604_; lean_object* v_fst_605_; lean_object* v_snd_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_618_; 
v_a_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_a_604_);
lean_dec_ref_known(v___x_603_, 1);
v_fst_605_ = lean_ctor_get(v_a_604_, 0);
v_snd_606_ = lean_ctor_get(v_a_604_, 1);
v_isSharedCheck_618_ = !lean_is_exclusive(v_a_604_);
if (v_isSharedCheck_618_ == 0)
{
v___x_608_ = v_a_604_;
v_isShared_609_ = v_isSharedCheck_618_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_snd_606_);
lean_inc(v_fst_605_);
lean_dec(v_a_604_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_618_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_610_; lean_object* v___x_612_; 
v___x_610_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_598_, v_fst_605_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 0, v___x_610_);
v___x_612_ = v___x_608_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v___x_610_);
lean_ctor_set(v_reuseFailAlloc_617_, 1, v_snd_606_);
v___x_612_ = v_reuseFailAlloc_617_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
size_t v___x_613_; size_t v___x_614_; lean_object* v___x_615_; 
v___x_613_ = ((size_t)1ULL);
v___x_614_ = lean_usize_add(v_i_588_, v___x_613_);
v___x_615_ = lean_array_uset(v_bs_x27_600_, v_i_588_, v___x_612_);
v_i_588_ = v___x_614_;
v_bs_589_ = v___x_615_;
goto _start;
}
}
}
else
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_626_; 
lean_dec_ref(v_bs_x27_600_);
lean_dec(v_v_598_);
lean_dec(v_w_586_);
v_a_619_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_626_ == 0)
{
v___x_621_ = v___x_603_;
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_603_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_624_; 
if (v_isShared_622_ == 0)
{
v___x_624_ = v___x_621_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_619_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1___boxed(lean_object* v_info_630_, lean_object* v_w_631_, lean_object* v_sz_632_, lean_object* v_i_633_, lean_object* v_bs_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_){
_start:
{
size_t v_sz_boxed_641_; size_t v_i_boxed_642_; lean_object* v_res_643_; 
v_sz_boxed_641_ = lean_unbox_usize(v_sz_632_);
lean_dec(v_sz_632_);
v_i_boxed_642_ = lean_unbox_usize(v_i_633_);
lean_dec(v_i_633_);
v_res_643_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(v_info_630_, v_w_631_, v_sz_boxed_641_, v_i_boxed_642_, v_bs_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
lean_dec(v___y_637_);
lean_dec_ref(v___y_636_);
lean_dec_ref(v___y_635_);
lean_dec_ref(v_info_630_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___boxed(lean_object* v_info_644_, lean_object* v_w_645_, lean_object* v_c_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_644_, v_w_645_, v_c_646_, v_a_647_, v_a_648_, v_a_649_, v_a_650_, v_a_651_);
lean_dec(v_a_651_);
lean_dec_ref(v_a_650_);
lean_dec(v_a_649_);
lean_dec_ref(v_a_648_);
lean_dec_ref(v_a_647_);
lean_dec_ref(v_info_644_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(lean_object* v___y_654_){
_start:
{
lean_object* v___x_656_; lean_object* v_ngen_657_; lean_object* v_namePrefix_658_; lean_object* v_idx_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_689_; 
v___x_656_ = lean_st_ref_get(v___y_654_);
v_ngen_657_ = lean_ctor_get(v___x_656_, 2);
lean_inc_ref(v_ngen_657_);
lean_dec(v___x_656_);
v_namePrefix_658_ = lean_ctor_get(v_ngen_657_, 0);
v_idx_659_ = lean_ctor_get(v_ngen_657_, 1);
v_isSharedCheck_689_ = !lean_is_exclusive(v_ngen_657_);
if (v_isSharedCheck_689_ == 0)
{
v___x_661_ = v_ngen_657_;
v_isShared_662_ = v_isSharedCheck_689_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_idx_659_);
lean_inc(v_namePrefix_658_);
lean_dec(v_ngen_657_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_689_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v_r_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_667_; 
lean_inc(v_idx_659_);
lean_inc(v_namePrefix_658_);
v_r_663_ = l_Lean_Name_num___override(v_namePrefix_658_, v_idx_659_);
v___x_664_ = lean_unsigned_to_nat(1u);
v___x_665_ = lean_nat_add(v_idx_659_, v___x_664_);
lean_dec(v_idx_659_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 1, v___x_665_);
v___x_667_ = v___x_661_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_namePrefix_658_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v___x_665_);
v___x_667_ = v_reuseFailAlloc_688_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
lean_object* v___x_668_; lean_object* v_env_669_; lean_object* v_nextMacroScope_670_; lean_object* v_auxDeclNGen_671_; lean_object* v_traceState_672_; lean_object* v_cache_673_; lean_object* v_recordedDeps_674_; lean_object* v_messages_675_; lean_object* v_infoState_676_; lean_object* v_snapshotTasks_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_686_; 
v___x_668_ = lean_st_ref_take(v___y_654_);
v_env_669_ = lean_ctor_get(v___x_668_, 0);
v_nextMacroScope_670_ = lean_ctor_get(v___x_668_, 1);
v_auxDeclNGen_671_ = lean_ctor_get(v___x_668_, 3);
v_traceState_672_ = lean_ctor_get(v___x_668_, 4);
v_cache_673_ = lean_ctor_get(v___x_668_, 5);
v_recordedDeps_674_ = lean_ctor_get(v___x_668_, 6);
v_messages_675_ = lean_ctor_get(v___x_668_, 7);
v_infoState_676_ = lean_ctor_get(v___x_668_, 8);
v_snapshotTasks_677_ = lean_ctor_get(v___x_668_, 9);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_686_ == 0)
{
lean_object* v_unused_687_; 
v_unused_687_ = lean_ctor_get(v___x_668_, 2);
lean_dec(v_unused_687_);
v___x_679_ = v___x_668_;
v_isShared_680_ = v_isSharedCheck_686_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_snapshotTasks_677_);
lean_inc(v_infoState_676_);
lean_inc(v_messages_675_);
lean_inc(v_recordedDeps_674_);
lean_inc(v_cache_673_);
lean_inc(v_traceState_672_);
lean_inc(v_auxDeclNGen_671_);
lean_inc(v_nextMacroScope_670_);
lean_inc(v_env_669_);
lean_dec(v___x_668_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_686_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_682_; 
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 2, v___x_667_);
v___x_682_ = v___x_679_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_env_669_);
lean_ctor_set(v_reuseFailAlloc_685_, 1, v_nextMacroScope_670_);
lean_ctor_set(v_reuseFailAlloc_685_, 2, v___x_667_);
lean_ctor_set(v_reuseFailAlloc_685_, 3, v_auxDeclNGen_671_);
lean_ctor_set(v_reuseFailAlloc_685_, 4, v_traceState_672_);
lean_ctor_set(v_reuseFailAlloc_685_, 5, v_cache_673_);
lean_ctor_set(v_reuseFailAlloc_685_, 6, v_recordedDeps_674_);
lean_ctor_set(v_reuseFailAlloc_685_, 7, v_messages_675_);
lean_ctor_set(v_reuseFailAlloc_685_, 8, v_infoState_676_);
lean_ctor_set(v_reuseFailAlloc_685_, 9, v_snapshotTasks_677_);
v___x_682_ = v_reuseFailAlloc_685_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = lean_st_ref_put(v___y_654_, v___x_682_);
v___x_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_684_, 0, v_r_663_);
return v___x_684_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg___boxed(lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_690_);
lean_dec(v___y_690_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
lean_object* v___x_699_; lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_707_; 
v___x_699_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_697_);
v_a_700_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_707_ == 0)
{
v___x_702_ = v___x_699_;
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_699_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_705_; 
if (v_isShared_703_ == 0)
{
v___x_705_ = v___x_702_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_a_700_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0___boxed(lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
lean_dec(v___y_712_);
lean_dec_ref(v___y_711_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
lean_dec_ref(v___y_708_);
return v_res_714_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4(void){
_start:
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_721_ = lean_box(0);
v___x_722_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3));
v___x_723_ = l_Lean_Expr_const___override(v___x_722_, v___x_721_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(lean_object* v_x_724_, lean_object* v_info_725_, lean_object* v_c_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_){
_start:
{
lean_object* v___x_733_; 
v___x_733_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v_a_734_; lean_object* v___x_735_; 
v_a_734_ = lean_ctor_get(v___x_733_, 0);
lean_inc_n(v_a_734_, 2);
lean_dec_ref_known(v___x_733_, 1);
v___x_735_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_725_, v_a_734_, v_c_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_);
if (lean_obj_tag(v___x_735_) == 0)
{
lean_object* v_a_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_790_; 
v_a_736_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_790_ == 0)
{
v___x_738_ = v___x_735_;
v_isShared_739_ = v_isSharedCheck_790_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_a_736_);
lean_dec(v___x_735_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_790_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v_snd_740_; uint8_t v___x_741_; 
v_snd_740_ = lean_ctor_get(v_a_736_, 1);
v___x_741_ = lean_unbox(v_snd_740_);
if (v___x_741_ == 0)
{
lean_object* v_fst_742_; lean_object* v___x_744_; 
lean_dec(v_a_734_);
lean_dec(v_x_724_);
v_fst_742_ = lean_ctor_get(v_a_736_, 0);
lean_inc(v_fst_742_);
lean_dec(v_a_736_);
if (v_isShared_739_ == 0)
{
lean_ctor_set(v___x_738_, 0, v_fst_742_);
v___x_744_ = v___x_738_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_fst_742_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
else
{
lean_object* v_fst_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_788_; 
lean_del_object(v___x_738_);
v_fst_746_ = lean_ctor_get(v_a_736_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v_a_736_);
if (v_isSharedCheck_788_ == 0)
{
lean_object* v_unused_789_; 
v_unused_789_ = lean_ctor_get(v_a_736_, 1);
lean_dec(v_unused_789_);
v___x_748_ = v_a_736_;
v_isShared_749_ = v_isSharedCheck_788_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_fst_746_);
lean_dec(v_a_736_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_788_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1));
v___x_751_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_750_, v_a_729_);
if (lean_obj_tag(v___x_751_) == 0)
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_779_; 
v_a_752_ = lean_ctor_get(v___x_751_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_751_);
if (v_isSharedCheck_779_ == 0)
{
v___x_754_ = v___x_751_;
v_isShared_755_ = v_isSharedCheck_779_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v___x_751_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_779_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v_size_756_; uint8_t v___x_757_; lean_object* v___x_758_; lean_object* v___x_760_; 
v_size_756_ = lean_ctor_get(v_info_725_, 2);
v___x_757_ = 1;
v___x_758_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4);
lean_inc(v_size_756_);
if (v_isShared_749_ == 0)
{
lean_ctor_set_tag(v___x_748_, 11);
lean_ctor_set(v___x_748_, 1, v_x_724_);
lean_ctor_set(v___x_748_, 0, v_size_756_);
v___x_760_ = v___x_748_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_size_756_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v_x_724_);
v___x_760_ = v_reuseFailAlloc_778_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v_lctx_763_; lean_object* v_nextIdx_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_777_; 
v___x_761_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_761_, 0, v_a_734_);
lean_ctor_set(v___x_761_, 1, v_a_752_);
lean_ctor_set(v___x_761_, 2, v___x_758_);
lean_ctor_set(v___x_761_, 3, v___x_760_);
v___x_762_ = lean_st_ref_take(v_a_729_);
v_lctx_763_ = lean_ctor_get(v___x_762_, 0);
v_nextIdx_764_ = lean_ctor_get(v___x_762_, 1);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_762_);
if (v_isSharedCheck_777_ == 0)
{
v___x_766_ = v___x_762_;
v_isShared_767_ = v_isSharedCheck_777_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_nextIdx_764_);
lean_inc(v_lctx_763_);
lean_dec(v___x_762_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_777_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_768_; lean_object* v___x_770_; 
lean_inc_ref(v___x_761_);
v___x_768_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_757_, v_lctx_763_, v___x_761_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v___x_768_);
v___x_770_ = v___x_766_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v___x_768_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v_nextIdx_764_);
v___x_770_ = v_reuseFailAlloc_776_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_774_; 
v___x_771_ = lean_st_ref_put(v_a_729_, v___x_770_);
v___x_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_772_, 0, v___x_761_);
lean_ctor_set(v___x_772_, 1, v_fst_746_);
if (v_isShared_755_ == 0)
{
lean_ctor_set(v___x_754_, 0, v___x_772_);
v___x_774_ = v___x_754_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v___x_772_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
}
}
else
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
lean_del_object(v___x_748_);
lean_dec(v_fst_746_);
lean_dec(v_a_734_);
lean_dec(v_x_724_);
v_a_780_ = lean_ctor_get(v___x_751_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_751_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___x_751_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_751_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_780_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_dec(v_a_734_);
lean_dec(v_x_724_);
v_a_791_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_735_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_735_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
else
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
lean_dec_ref(v_c_726_);
lean_dec(v_x_724_);
v_a_799_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_733_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_733_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___boxed(lean_object* v_x_807_, lean_object* v_info_808_, lean_object* v_c_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_807_, v_info_808_, v_c_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_, v_a_814_);
lean_dec(v_a_814_);
lean_dec_ref(v_a_813_);
lean_dec(v_a_812_);
lean_dec_ref(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec_ref(v_info_808_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0(lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_821_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___boxed(lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0(v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_);
lean_dec(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec_ref(v___y_824_);
return v_res_830_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(lean_object* v_x_831_, lean_object* v_as_832_, size_t v_i_833_, size_t v_stop_834_){
_start:
{
uint8_t v___x_835_; 
v___x_835_ = lean_usize_dec_eq(v_i_833_, v_stop_834_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; uint8_t v___x_837_; lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_836_ = lean_array_uget_borrowed(v_as_832_, v_i_833_);
v___x_837_ = 1;
lean_inc(v_x_831_);
v___x_838_ = l_Lean_instSingletonFVarIdFVarIdSet___lam__0(v_x_831_);
v___x_839_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(v___x_837_, v___x_836_, v___x_838_);
lean_dec(v___x_838_);
if (v___x_839_ == 0)
{
size_t v___x_840_; size_t v___x_841_; 
v___x_840_ = ((size_t)1ULL);
v___x_841_ = lean_usize_add(v_i_833_, v___x_840_);
v_i_833_ = v___x_841_;
goto _start;
}
else
{
lean_dec(v_x_831_);
return v___x_839_;
}
}
else
{
uint8_t v___x_843_; 
lean_dec(v_x_831_);
v___x_843_ = 0;
return v___x_843_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___boxed(lean_object* v_x_844_, lean_object* v_as_845_, lean_object* v_i_846_, lean_object* v_stop_847_){
_start:
{
size_t v_i_boxed_848_; size_t v_stop_boxed_849_; uint8_t v_res_850_; lean_object* v_r_851_; 
v_i_boxed_848_ = lean_unbox_usize(v_i_846_);
lean_dec(v_i_846_);
v_stop_boxed_849_ = lean_unbox_usize(v_stop_847_);
lean_dec(v_stop_847_);
v_res_850_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(v_x_844_, v_as_845_, v_i_boxed_848_, v_stop_boxed_849_);
lean_dec_ref(v_as_845_);
v_r_851_ = lean_box(v_res_850_);
return v_r_851_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(lean_object* v_instr_852_, lean_object* v_x_853_){
_start:
{
if (lean_obj_tag(v_instr_852_) == 0)
{
lean_object* v_decl_854_; lean_object* v_value_855_; 
v_decl_854_ = lean_ctor_get(v_instr_852_, 0);
v_value_855_ = lean_ctor_get(v_decl_854_, 3);
if (lean_obj_tag(v_value_855_) == 5)
{
lean_object* v_args_856_; lean_object* v___x_857_; lean_object* v___x_858_; uint8_t v___x_859_; 
v_args_856_ = lean_ctor_get(v_value_855_, 1);
v___x_857_ = lean_unsigned_to_nat(0u);
v___x_858_ = lean_array_get_size(v_args_856_);
v___x_859_ = lean_nat_dec_lt(v___x_857_, v___x_858_);
if (v___x_859_ == 0)
{
lean_dec(v_x_853_);
return v___x_859_;
}
else
{
if (v___x_859_ == 0)
{
lean_dec(v_x_853_);
return v___x_859_;
}
else
{
size_t v___x_860_; size_t v___x_861_; uint8_t v___x_862_; 
v___x_860_ = ((size_t)0ULL);
v___x_861_ = lean_usize_of_nat(v___x_858_);
v___x_862_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(v_x_853_, v_args_856_, v___x_860_, v___x_861_);
return v___x_862_;
}
}
}
else
{
uint8_t v___x_863_; 
lean_dec(v_x_853_);
v___x_863_ = 0;
return v___x_863_;
}
}
else
{
uint8_t v___x_864_; 
lean_dec(v_x_853_);
v___x_864_ = 0;
return v___x_864_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing___boxed(lean_object* v_instr_865_, lean_object* v_x_866_){
_start:
{
uint8_t v_res_867_; lean_object* v_r_868_; 
v_res_867_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_865_, v_x_866_);
lean_dec_ref(v_instr_865_);
v_r_868_ = lean_box(v_res_867_);
return v_r_868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx___impl(uint8_t v_x_869_){
_start:
{
lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_870_ = lean_box(v_x_869_);
v___x_871_ = lean_obj_tag_nat(v___x_870_);
lean_dec(v___x_870_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx___impl___boxed(lean_object* v_x_872_){
_start:
{
uint8_t v_x_4__boxed_873_; lean_object* v_res_874_; 
v_x_4__boxed_873_ = lean_unbox(v_x_872_);
v_res_874_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx___impl(v_x_4__boxed_873_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg(lean_object* v_k_875_){
_start:
{
lean_inc(v_k_875_);
return v_k_875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg___boxed(lean_object* v_k_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg(v_k_876_);
lean_dec(v_k_876_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim(lean_object* v_motive_878_, lean_object* v_ctorIdx_879_, uint8_t v_t_880_, lean_object* v_h_881_, lean_object* v_k_882_){
_start:
{
lean_inc(v_k_882_);
return v_k_882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___boxed(lean_object* v_motive_883_, lean_object* v_ctorIdx_884_, lean_object* v_t_885_, lean_object* v_h_886_, lean_object* v_k_887_){
_start:
{
uint8_t v_t_boxed_888_; lean_object* v_res_889_; 
v_t_boxed_888_ = lean_unbox(v_t_885_);
v_res_889_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim(v_motive_883_, v_ctorIdx_884_, v_t_boxed_888_, v_h_886_, v_k_887_);
lean_dec(v_k_887_);
lean_dec(v_ctorIdx_884_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg(lean_object* v_ownedArg_890_){
_start:
{
lean_inc(v_ownedArg_890_);
return v_ownedArg_890_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg___boxed(lean_object* v_ownedArg_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg(v_ownedArg_891_);
lean_dec(v_ownedArg_891_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim(lean_object* v_motive_893_, uint8_t v_t_894_, lean_object* v_h_895_, lean_object* v_ownedArg_896_){
_start:
{
lean_inc(v_ownedArg_896_);
return v_ownedArg_896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___boxed(lean_object* v_motive_897_, lean_object* v_t_898_, lean_object* v_h_899_, lean_object* v_ownedArg_900_){
_start:
{
uint8_t v_t_boxed_901_; lean_object* v_res_902_; 
v_t_boxed_901_ = lean_unbox(v_t_898_);
v_res_902_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim(v_motive_897_, v_t_boxed_901_, v_h_899_, v_ownedArg_900_);
lean_dec(v_ownedArg_900_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg(lean_object* v_other_903_){
_start:
{
lean_inc(v_other_903_);
return v_other_903_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg___boxed(lean_object* v_other_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg(v_other_904_);
lean_dec(v_other_904_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim(lean_object* v_motive_906_, uint8_t v_t_907_, lean_object* v_h_908_, lean_object* v_other_909_){
_start:
{
lean_inc(v_other_909_);
return v_other_909_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___boxed(lean_object* v_motive_910_, lean_object* v_t_911_, lean_object* v_h_912_, lean_object* v_other_913_){
_start:
{
uint8_t v_t_boxed_914_; lean_object* v_res_915_; 
v_t_boxed_914_ = lean_unbox(v_t_911_);
v_res_915_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim(v_motive_910_, v_t_boxed_914_, v_h_912_, v_other_913_);
lean_dec(v_other_913_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg(lean_object* v_none_916_){
_start:
{
lean_inc(v_none_916_);
return v_none_916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg___boxed(lean_object* v_none_917_){
_start:
{
lean_object* v_res_918_; 
v_res_918_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg(v_none_917_);
lean_dec(v_none_917_);
return v_res_918_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim(lean_object* v_motive_919_, uint8_t v_t_920_, lean_object* v_h_921_, lean_object* v_none_922_){
_start:
{
lean_inc(v_none_922_);
return v_none_922_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___boxed(lean_object* v_motive_923_, lean_object* v_t_924_, lean_object* v_h_925_, lean_object* v_none_926_){
_start:
{
uint8_t v_t_boxed_927_; lean_object* v_res_928_; 
v_t_boxed_927_ = lean_unbox(v_t_924_);
v_res_928_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim(v_motive_923_, v_t_boxed_927_, v_h_925_, v_none_926_);
lean_dec(v_none_926_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(lean_object* v_x_929_, lean_object* v_as_930_, size_t v_sz_931_, size_t v_i_932_, lean_object* v_b_933_){
_start:
{
lean_object* v_a_936_; uint8_t v___x_940_; 
v___x_940_ = lean_usize_dec_lt(v_i_932_, v_sz_931_);
if (v___x_940_ == 0)
{
lean_object* v___x_941_; 
v___x_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_941_, 0, v_b_933_);
return v___x_941_;
}
else
{
lean_object* v_snd_942_; lean_object* v_fst_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_987_; 
v_snd_942_ = lean_ctor_get(v_b_933_, 1);
v_fst_943_ = lean_ctor_get(v_b_933_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v_b_933_);
if (v_isSharedCheck_987_ == 0)
{
v___x_945_ = v_b_933_;
v_isShared_946_ = v_isSharedCheck_987_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_snd_942_);
lean_inc(v_fst_943_);
lean_dec(v_b_933_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_987_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v_array_947_; lean_object* v_start_948_; lean_object* v_stop_949_; uint8_t v___x_950_; 
v_array_947_ = lean_ctor_get(v_snd_942_, 0);
v_start_948_ = lean_ctor_get(v_snd_942_, 1);
v_stop_949_ = lean_ctor_get(v_snd_942_, 2);
v___x_950_ = lean_nat_dec_lt(v_start_948_, v_stop_949_);
if (v___x_950_ == 0)
{
lean_object* v___x_952_; 
if (v_isShared_946_ == 0)
{
v___x_952_ = v___x_945_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_fst_943_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v_snd_942_);
v___x_952_ = v_reuseFailAlloc_954_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
lean_object* v___x_953_; 
v___x_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
return v___x_953_;
}
}
else
{
lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_983_; 
lean_inc(v_stop_949_);
lean_inc(v_start_948_);
lean_inc_ref(v_array_947_);
v_isSharedCheck_983_ = !lean_is_exclusive(v_snd_942_);
if (v_isSharedCheck_983_ == 0)
{
lean_object* v_unused_984_; lean_object* v_unused_985_; lean_object* v_unused_986_; 
v_unused_984_ = lean_ctor_get(v_snd_942_, 2);
lean_dec(v_unused_984_);
v_unused_985_ = lean_ctor_get(v_snd_942_, 1);
lean_dec(v_unused_985_);
v_unused_986_ = lean_ctor_get(v_snd_942_, 0);
lean_dec(v_unused_986_);
v___x_956_ = v_snd_942_;
v_isShared_957_ = v_isSharedCheck_983_;
goto v_resetjp_955_;
}
else
{
lean_dec(v_snd_942_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_983_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v_a_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_963_; 
v_a_958_ = lean_array_uget_borrowed(v_as_930_, v_i_932_);
v___x_959_ = lean_array_fget(v_array_947_, v_start_948_);
v___x_960_ = lean_unsigned_to_nat(1u);
v___x_961_ = lean_nat_add(v_start_948_, v___x_960_);
lean_dec(v_start_948_);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v___x_961_);
v___x_963_ = v___x_956_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_array_947_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v___x_961_);
lean_ctor_set(v_reuseFailAlloc_982_, 2, v_stop_949_);
v___x_963_ = v_reuseFailAlloc_982_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
uint8_t v___y_965_; 
if (lean_obj_tag(v_a_958_) == 1)
{
lean_object* v_fvarId_970_; uint8_t v___x_971_; 
v_fvarId_970_ = lean_ctor_get(v_a_958_, 0);
v___x_971_ = l_Lean_instBEqFVarId_beq(v_fvarId_970_, v_x_929_);
if (v___x_971_ == 0)
{
lean_object* v___x_972_; 
lean_dec(v___x_959_);
lean_del_object(v___x_945_);
v___x_972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_972_, 0, v_fst_943_);
lean_ctor_set(v___x_972_, 1, v___x_963_);
v_a_936_ = v___x_972_;
goto v___jp_935_;
}
else
{
uint8_t v___x_973_; 
v___x_973_ = lean_unbox(v_fst_943_);
switch(v___x_973_)
{
case 0:
{
uint8_t v_borrow_974_; 
v_borrow_974_ = lean_ctor_get_uint8(v___x_959_, sizeof(void*)*3);
lean_dec(v___x_959_);
if (v_borrow_974_ == 0)
{
uint8_t v___x_975_; 
v___x_975_ = lean_unbox(v_fst_943_);
lean_dec(v_fst_943_);
v___y_965_ = v___x_975_;
goto v___jp_964_;
}
else
{
uint8_t v___x_976_; 
lean_dec(v_fst_943_);
v___x_976_ = 1;
v___y_965_ = v___x_976_;
goto v___jp_964_;
}
}
case 1:
{
uint8_t v___x_977_; 
lean_dec(v___x_959_);
v___x_977_ = lean_unbox(v_fst_943_);
lean_dec(v_fst_943_);
v___y_965_ = v___x_977_;
goto v___jp_964_;
}
default: 
{
uint8_t v_borrow_978_; 
lean_dec(v_fst_943_);
v_borrow_978_ = lean_ctor_get_uint8(v___x_959_, sizeof(void*)*3);
lean_dec(v___x_959_);
if (v_borrow_978_ == 0)
{
uint8_t v___x_979_; 
v___x_979_ = 0;
v___y_965_ = v___x_979_;
goto v___jp_964_;
}
else
{
uint8_t v___x_980_; 
v___x_980_ = 1;
v___y_965_ = v___x_980_;
goto v___jp_964_;
}
}
}
}
}
else
{
lean_object* v___x_981_; 
lean_dec(v___x_959_);
lean_del_object(v___x_945_);
v___x_981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_981_, 0, v_fst_943_);
lean_ctor_set(v___x_981_, 1, v___x_963_);
v_a_936_ = v___x_981_;
goto v___jp_935_;
}
v___jp_964_:
{
lean_object* v___x_966_; lean_object* v___x_968_; 
v___x_966_ = lean_box(v___y_965_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 1, v___x_963_);
lean_ctor_set(v___x_945_, 0, v___x_966_);
v___x_968_ = v___x_945_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v___x_966_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v___x_963_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
v_a_936_ = v___x_968_;
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
size_t v___x_937_; size_t v___x_938_; 
v___x_937_ = ((size_t)1ULL);
v___x_938_ = lean_usize_add(v_i_932_, v___x_937_);
v_i_932_ = v___x_938_;
v_b_933_ = v_a_936_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg___boxed(lean_object* v_x_988_, lean_object* v_as_989_, lean_object* v_sz_990_, lean_object* v_i_991_, lean_object* v_b_992_, lean_object* v___y_993_){
_start:
{
size_t v_sz_boxed_994_; size_t v_i_boxed_995_; lean_object* v_res_996_; 
v_sz_boxed_994_ = lean_unbox_usize(v_sz_990_);
lean_dec(v_sz_990_);
v_i_boxed_995_ = lean_unbox_usize(v_i_991_);
lean_dec(v_i_991_);
v_res_996_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_988_, v_as_989_, v_sz_boxed_994_, v_i_boxed_995_, v_b_992_);
lean_dec_ref(v_as_989_);
lean_dec(v_x_988_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(lean_object* v_instr_997_, lean_object* v_x_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_){
_start:
{
if (lean_obj_tag(v_instr_997_) == 0)
{
lean_object* v_decl_1015_; lean_object* v_value_1016_; 
v_decl_1015_ = lean_ctor_get(v_instr_997_, 0);
v_value_1016_ = lean_ctor_get(v_decl_1015_, 3);
lean_inc(v_value_1016_);
switch(lean_obj_tag(v_value_1016_))
{
case 9:
{
lean_object* v_fn_1017_; lean_object* v_args_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1080_; 
lean_dec_ref_known(v_instr_997_, 1);
v_fn_1017_ = lean_ctor_get(v_value_1016_, 0);
v_args_1018_ = lean_ctor_get(v_value_1016_, 1);
v_isSharedCheck_1080_ = !lean_is_exclusive(v_value_1016_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1020_ = v_value_1016_;
v_isShared_1021_ = v_isSharedCheck_1080_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_args_1018_);
lean_inc(v_fn_1017_);
lean_dec(v_value_1016_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1080_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
uint8_t v___x_1022_; lean_object* v___x_1024_; 
v___x_1022_ = 1;
lean_inc_ref(v_args_1018_);
lean_inc(v_fn_1017_);
if (v_isShared_1021_ == 0)
{
v___x_1024_ = v___x_1020_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_fn_1017_);
lean_ctor_set(v_reuseFailAlloc_1079_, 1, v_args_1018_);
v___x_1024_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
lean_object* v___x_1025_; 
v___x_1025_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_1017_, v_a_1003_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1070_; 
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1028_ = v___x_1025_;
v_isShared_1029_ = v_isSharedCheck_1070_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_1025_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1070_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
if (lean_obj_tag(v_a_1026_) == 1)
{
lean_object* v_val_1030_; lean_object* v_params_1031_; uint8_t v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; size_t v_sz_1038_; size_t v___x_1039_; lean_object* v___x_1040_; 
lean_del_object(v___x_1028_);
lean_dec_ref(v___x_1024_);
v_val_1030_ = lean_ctor_get(v_a_1026_, 0);
lean_inc(v_val_1030_);
lean_dec_ref_known(v_a_1026_, 1);
v_params_1031_ = lean_ctor_get(v_val_1030_, 3);
lean_inc_ref(v_params_1031_);
lean_dec(v_val_1030_);
v___x_1032_ = 2;
v___x_1033_ = lean_unsigned_to_nat(0u);
v___x_1034_ = lean_array_get_size(v_params_1031_);
v___x_1035_ = l_Array_toSubarray___redArg(v_params_1031_, v___x_1033_, v___x_1034_);
v___x_1036_ = lean_box(v___x_1032_);
v___x_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1036_);
lean_ctor_set(v___x_1037_, 1, v___x_1035_);
v_sz_1038_ = lean_array_size(v_args_1018_);
v___x_1039_ = ((size_t)0ULL);
v___x_1040_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_998_, v_args_1018_, v_sz_1038_, v___x_1039_, v___x_1037_);
lean_dec_ref(v_args_1018_);
lean_dec(v_x_998_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1049_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1043_ = v___x_1040_;
v_isShared_1044_ = v_isSharedCheck_1049_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_1040_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1049_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v_fst_1045_; lean_object* v___x_1047_; 
v_fst_1045_ = lean_ctor_get(v_a_1041_, 0);
lean_inc(v_fst_1045_);
lean_dec(v_a_1041_);
if (v_isShared_1044_ == 0)
{
lean_ctor_set(v___x_1043_, 0, v_fst_1045_);
v___x_1047_ = v___x_1043_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_fst_1045_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
else
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1057_; 
v_a_1050_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1052_ = v___x_1040_;
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1040_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1055_; 
if (v_isShared_1053_ == 0)
{
v___x_1055_ = v___x_1052_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_a_1050_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
}
else
{
lean_object* v___x_1058_; uint8_t v___x_1059_; 
lean_dec(v_a_1026_);
lean_dec_ref(v_args_1018_);
v___x_1058_ = l_Lean_instSingletonFVarIdFVarIdSet___lam__0(v_x_998_);
v___x_1059_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1022_, v___x_1024_, v___x_1058_);
lean_dec(v___x_1058_);
lean_dec_ref(v___x_1024_);
if (v___x_1059_ == 0)
{
uint8_t v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1063_; 
v___x_1060_ = 2;
v___x_1061_ = lean_box(v___x_1060_);
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 0, v___x_1061_);
v___x_1063_ = v___x_1028_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v___x_1061_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
else
{
uint8_t v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1068_; 
v___x_1065_ = 0;
v___x_1066_ = lean_box(v___x_1065_);
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 0, v___x_1066_);
v___x_1068_ = v___x_1028_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v___x_1066_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
}
else
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1078_; 
lean_dec_ref(v___x_1024_);
lean_dec_ref(v_args_1018_);
lean_dec(v_x_998_);
v_a_1071_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1073_ = v___x_1025_;
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1025_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1076_; 
if (v_isShared_1074_ == 0)
{
v___x_1076_ = v___x_1073_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_a_1071_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
}
}
case 10:
{
lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1106_; 
v_isSharedCheck_1106_ = !lean_is_exclusive(v_instr_997_);
if (v_isSharedCheck_1106_ == 0)
{
lean_object* v_unused_1107_; 
v_unused_1107_ = lean_ctor_get(v_instr_997_, 0);
lean_dec(v_unused_1107_);
v___x_1082_ = v_instr_997_;
v_isShared_1083_ = v_isSharedCheck_1106_;
goto v_resetjp_1081_;
}
else
{
lean_dec(v_instr_997_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1106_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v_fn_1084_; lean_object* v_args_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1105_; 
v_fn_1084_ = lean_ctor_get(v_value_1016_, 0);
v_args_1085_ = lean_ctor_get(v_value_1016_, 1);
v_isSharedCheck_1105_ = !lean_is_exclusive(v_value_1016_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1087_ = v_value_1016_;
v_isShared_1088_ = v_isSharedCheck_1105_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_args_1085_);
lean_inc(v_fn_1084_);
lean_dec(v_value_1016_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1105_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
uint8_t v___x_1089_; lean_object* v___x_1091_; 
v___x_1089_ = 1;
if (v_isShared_1088_ == 0)
{
v___x_1091_ = v___x_1087_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_fn_1084_);
lean_ctor_set(v_reuseFailAlloc_1104_, 1, v_args_1085_);
v___x_1091_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
lean_object* v___x_1092_; uint8_t v___x_1093_; 
v___x_1092_ = l_Lean_instSingletonFVarIdFVarIdSet___lam__0(v_x_998_);
v___x_1093_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1089_, v___x_1091_, v___x_1092_);
lean_dec(v___x_1092_);
lean_dec_ref(v___x_1091_);
if (v___x_1093_ == 0)
{
uint8_t v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1097_; 
v___x_1094_ = 2;
v___x_1095_ = lean_box(v___x_1094_);
if (v_isShared_1083_ == 0)
{
lean_ctor_set(v___x_1082_, 0, v___x_1095_);
v___x_1097_ = v___x_1082_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v___x_1095_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
else
{
uint8_t v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1102_; 
v___x_1099_ = 0;
v___x_1100_ = lean_box(v___x_1099_);
if (v_isShared_1083_ == 0)
{
lean_ctor_set(v___x_1082_, 0, v___x_1100_);
v___x_1102_ = v___x_1082_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v___x_1100_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
return v___x_1102_;
}
}
}
}
}
}
case 4:
{
lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1133_; 
v_isSharedCheck_1133_ = !lean_is_exclusive(v_instr_997_);
if (v_isSharedCheck_1133_ == 0)
{
lean_object* v_unused_1134_; 
v_unused_1134_ = lean_ctor_get(v_instr_997_, 0);
lean_dec(v_unused_1134_);
v___x_1109_ = v_instr_997_;
v_isShared_1110_ = v_isSharedCheck_1133_;
goto v_resetjp_1108_;
}
else
{
lean_dec(v_instr_997_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1133_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v_fvarId_1111_; lean_object* v_args_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1132_; 
v_fvarId_1111_ = lean_ctor_get(v_value_1016_, 0);
v_args_1112_ = lean_ctor_get(v_value_1016_, 1);
v_isSharedCheck_1132_ = !lean_is_exclusive(v_value_1016_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1114_ = v_value_1016_;
v_isShared_1115_ = v_isSharedCheck_1132_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_args_1112_);
lean_inc(v_fvarId_1111_);
lean_dec(v_value_1016_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1132_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
uint8_t v___x_1116_; lean_object* v___x_1118_; 
v___x_1116_ = 1;
if (v_isShared_1115_ == 0)
{
v___x_1118_ = v___x_1114_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_fvarId_1111_);
lean_ctor_set(v_reuseFailAlloc_1131_, 1, v_args_1112_);
v___x_1118_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
lean_object* v___x_1119_; uint8_t v___x_1120_; 
v___x_1119_ = l_Lean_instSingletonFVarIdFVarIdSet___lam__0(v_x_998_);
v___x_1120_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1116_, v___x_1118_, v___x_1119_);
lean_dec(v___x_1119_);
lean_dec_ref(v___x_1118_);
if (v___x_1120_ == 0)
{
uint8_t v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1124_; 
v___x_1121_ = 2;
v___x_1122_ = lean_box(v___x_1121_);
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 0, v___x_1122_);
v___x_1124_ = v___x_1109_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v___x_1122_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
else
{
uint8_t v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1129_; 
v___x_1126_ = 0;
v___x_1127_ = lean_box(v___x_1126_);
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 0, v___x_1127_);
v___x_1129_ = v___x_1109_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v___x_1127_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
}
}
}
default: 
{
lean_dec(v_value_1016_);
goto v___jp_1005_;
}
}
}
else
{
goto v___jp_1005_;
}
v___jp_1005_:
{
uint8_t v___x_1006_; lean_object* v___x_1007_; uint8_t v___x_1008_; 
v___x_1006_ = 1;
v___x_1007_ = l_Lean_instSingletonFVarIdFVarIdSet___lam__0(v_x_998_);
v___x_1008_ = l_Lean_Compiler_LCNF_CodeDecl_dependsOn(v___x_1006_, v_instr_997_, v___x_1007_);
lean_dec(v___x_1007_);
lean_dec_ref(v_instr_997_);
if (v___x_1008_ == 0)
{
uint8_t v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1009_ = 2;
v___x_1010_ = lean_box(v___x_1009_);
v___x_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
return v___x_1011_;
}
else
{
uint8_t v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1012_ = 1;
v___x_1013_ = lean_box(v___x_1012_);
v___x_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
return v___x_1014_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse___boxed(lean_object* v_instr_1135_, lean_object* v_x_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1135_, v_x_1136_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_);
lean_dec(v_a_1141_);
lean_dec_ref(v_a_1140_);
lean_dec(v_a_1139_);
lean_dec_ref(v_a_1138_);
lean_dec_ref(v_a_1137_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0(lean_object* v_x_1144_, lean_object* v_as_1145_, size_t v_sz_1146_, size_t v_i_1147_, lean_object* v_b_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v___x_1155_; 
v___x_1155_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_1144_, v_as_1145_, v_sz_1146_, v_i_1147_, v_b_1148_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___boxed(lean_object* v_x_1156_, lean_object* v_as_1157_, lean_object* v_sz_1158_, lean_object* v_i_1159_, lean_object* v_b_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
size_t v_sz_boxed_1167_; size_t v_i_boxed_1168_; lean_object* v_res_1169_; 
v_sz_boxed_1167_ = lean_unbox_usize(v_sz_1158_);
lean_dec(v_sz_1158_);
v_i_boxed_1168_ = lean_unbox_usize(v_i_1159_);
lean_dec(v_i_1159_);
v_res_1169_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0(v_x_1156_, v_as_1157_, v_sz_boxed_1167_, v_i_boxed_1168_, v_b_1160_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
lean_dec(v___y_1163_);
lean_dec_ref(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec_ref(v_as_1157_);
lean_dec(v_x_1156_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(lean_object* v_alt_1170_, lean_object* v_f_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_){
_start:
{
lean_object* v___y_1179_; 
switch(lean_obj_tag(v_alt_1170_))
{
case 0:
{
lean_object* v_code_1198_; 
v_code_1198_ = lean_ctor_get(v_alt_1170_, 2);
lean_inc_ref(v_code_1198_);
v___y_1179_ = v_code_1198_;
goto v___jp_1178_;
}
case 1:
{
lean_object* v_code_1199_; 
v_code_1199_ = lean_ctor_get(v_alt_1170_, 1);
lean_inc_ref(v_code_1199_);
v___y_1179_ = v_code_1199_;
goto v___jp_1178_;
}
default: 
{
lean_object* v_code_1200_; 
v_code_1200_ = lean_ctor_get(v_alt_1170_, 0);
lean_inc_ref(v_code_1200_);
v___y_1179_ = v_code_1200_;
goto v___jp_1178_;
}
}
v___jp_1178_:
{
lean_object* v___x_1180_; 
lean_inc(v___y_1176_);
lean_inc_ref(v___y_1175_);
lean_inc(v___y_1174_);
lean_inc_ref(v___y_1173_);
lean_inc_ref(v___y_1172_);
v___x_1180_ = lean_apply_7(v_f_1171_, v___y_1179_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, lean_box(0));
if (lean_obj_tag(v___x_1180_) == 0)
{
lean_object* v_a_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1189_; 
v_a_1181_ = lean_ctor_get(v___x_1180_, 0);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1180_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1183_ = v___x_1180_;
v_isShared_1184_ = v_isSharedCheck_1189_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_a_1181_);
lean_dec(v___x_1180_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1189_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1185_; lean_object* v___x_1187_; 
v___x_1185_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_1170_, v_a_1181_);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 0, v___x_1185_);
v___x_1187_ = v___x_1183_;
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
}
else
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1197_; 
lean_dec_ref(v_alt_1170_);
v_a_1190_ = lean_ctor_get(v___x_1180_, 0);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1180_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1192_ = v___x_1180_;
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v___x_1180_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1195_; 
if (v_isShared_1193_ == 0)
{
v___x_1195_ = v___x_1192_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_a_1190_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg___boxed(lean_object* v_alt_1201_, lean_object* v_f_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_alt_1201_, v_f_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
lean_dec(v___y_1205_);
lean_dec_ref(v___y_1204_);
lean_dec_ref(v___y_1203_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D___boxed(lean_object* v_x_1210_, lean_object* v_info_1211_, lean_object* v_c_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(v_x_1210_, v_info_1211_, v_c_1212_, v_a_1213_, v_a_1214_, v_a_1215_, v_a_1216_, v_a_1217_);
lean_dec(v_a_1217_);
lean_dec_ref(v_a_1216_);
lean_dec(v_a_1215_);
lean_dec_ref(v_a_1214_);
lean_dec_ref(v_a_1213_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(lean_object* v_x_1220_, lean_object* v_info_1221_, lean_object* v_i_1222_, lean_object* v_as_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
lean_object* v___x_1230_; uint8_t v___x_1231_; 
v___x_1230_ = lean_array_get_size(v_as_1223_);
v___x_1231_ = lean_nat_dec_lt(v_i_1222_, v___x_1230_);
if (v___x_1231_ == 0)
{
lean_object* v___x_1232_; 
lean_dec(v_i_1222_);
lean_dec_ref(v_info_1221_);
lean_dec(v_x_1220_);
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v_as_1223_);
return v___x_1232_;
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v_a_1233_ = lean_array_fget_borrowed(v_as_1223_, v_i_1222_);
lean_inc_ref(v_info_1221_);
lean_inc(v_x_1220_);
v___x_1234_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D___boxed), 9, 2);
lean_closure_set(v___x_1234_, 0, v_x_1220_);
lean_closure_set(v___x_1234_, 1, v_info_1221_);
lean_inc(v_a_1233_);
v___x_1235_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_a_1233_, v___x_1234_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; size_t v___x_1237_; size_t v___x_1238_; uint8_t v___x_1239_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_a_1236_);
lean_dec_ref_known(v___x_1235_, 1);
v___x_1237_ = lean_ptr_addr(v_a_1233_);
v___x_1238_ = lean_ptr_addr(v_a_1236_);
v___x_1239_ = lean_usize_dec_eq(v___x_1237_, v___x_1238_);
if (v___x_1239_ == 0)
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1240_ = lean_unsigned_to_nat(1u);
v___x_1241_ = lean_nat_add(v_i_1222_, v___x_1240_);
v___x_1242_ = lean_array_fset(v_as_1223_, v_i_1222_, v_a_1236_);
lean_dec(v_i_1222_);
v_i_1222_ = v___x_1241_;
v_as_1223_ = v___x_1242_;
goto _start;
}
else
{
lean_object* v___x_1244_; lean_object* v___x_1245_; 
lean_dec(v_a_1236_);
v___x_1244_ = lean_unsigned_to_nat(1u);
v___x_1245_ = lean_nat_add(v_i_1222_, v___x_1244_);
lean_dec(v_i_1222_);
v_i_1222_ = v___x_1245_;
goto _start;
}
}
else
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
lean_dec_ref(v_as_1223_);
lean_dec(v_i_1222_);
lean_dec_ref(v_info_1221_);
lean_dec(v_x_1220_);
v_a_1247_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1235_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1235_);
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
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1(void){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1256_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_1257_ = lean_unsigned_to_nat(61u);
v___x_1258_ = lean_unsigned_to_nat(247u);
v___x_1259_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0));
v___x_1260_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_1261_ = l_mkPanicMessageWithDecl(v___x_1260_, v___x_1259_, v___x_1258_, v___x_1257_, v___x_1256_);
return v___x_1261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(lean_object* v_x_1262_, lean_object* v_info_1263_, lean_object* v_c_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_){
_start:
{
lean_object* v___y_1272_; lean_object* v___y_1278_; lean_object* v___y_1284_; 
switch(lean_obj_tag(v_c_1264_))
{
case 0:
{
lean_object* v_decl_1289_; lean_object* v_k_1290_; uint8_t v___x_1291_; lean_object* v_instr_1292_; uint8_t v___x_1293_; 
v_decl_1289_ = lean_ctor_get(v_c_1264_, 0);
v_k_1290_ = lean_ctor_get(v_c_1264_, 1);
v___x_1291_ = 1;
v_instr_1292_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_1291_, v_c_1264_);
lean_inc(v_x_1262_);
v___x_1293_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1292_, v_x_1262_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; 
lean_inc_ref(v_k_1290_);
lean_inc_ref(v_info_1263_);
lean_inc(v_x_1262_);
v___x_1294_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1262_, v_info_1263_, v_k_1290_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
if (lean_obj_tag(v___x_1294_) == 0)
{
lean_object* v_a_1295_; lean_object* v_fst_1296_; lean_object* v_snd_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1384_; 
v_a_1295_ = lean_ctor_get(v___x_1294_, 0);
lean_inc(v_a_1295_);
lean_dec_ref_known(v___x_1294_, 1);
v_fst_1296_ = lean_ctor_get(v_a_1295_, 0);
v_snd_1297_ = lean_ctor_get(v_a_1295_, 1);
v_isSharedCheck_1384_ = !lean_is_exclusive(v_a_1295_);
if (v_isSharedCheck_1384_ == 0)
{
v___x_1299_ = v_a_1295_;
v_isShared_1300_ = v_isSharedCheck_1384_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_snd_1297_);
lean_inc(v_fst_1296_);
lean_dec(v_a_1295_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1384_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
uint8_t v___x_1314_; 
v___x_1314_ = lean_unbox(v_snd_1297_);
if (v___x_1314_ == 0)
{
lean_object* v___x_1315_; 
lean_inc(v_x_1262_);
v___x_1315_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1292_, v_x_1262_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
if (lean_obj_tag(v___x_1315_) == 0)
{
lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1375_; 
v_a_1316_ = lean_ctor_get(v___x_1315_, 0);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1318_ = v___x_1315_;
v_isShared_1319_ = v_isSharedCheck_1375_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_dec(v___x_1315_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1375_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___y_1321_; uint8_t v___x_1328_; 
v___x_1328_ = lean_unbox(v_a_1316_);
lean_dec(v_a_1316_);
switch(v___x_1328_)
{
case 0:
{
lean_del_object(v___x_1318_);
lean_del_object(v___x_1299_);
lean_dec(v_snd_1297_);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
goto v___jp_1301_;
}
case 1:
{
lean_object* v___x_1329_; 
lean_del_object(v___x_1318_);
lean_del_object(v___x_1299_);
lean_dec(v_snd_1297_);
v___x_1329_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1262_, v_info_1263_, v_fst_1296_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
lean_dec_ref(v_info_1263_);
if (lean_obj_tag(v___x_1329_) == 0)
{
lean_object* v_a_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1354_; 
v_a_1330_ = lean_ctor_get(v___x_1329_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1329_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1332_ = v___x_1329_;
v_isShared_1333_ = v_isSharedCheck_1354_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_a_1330_);
lean_dec(v___x_1329_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1354_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___y_1335_; size_t v___x_1342_; size_t v___x_1343_; uint8_t v___x_1344_; 
v___x_1342_ = lean_ptr_addr(v_k_1290_);
v___x_1343_ = lean_ptr_addr(v_a_1330_);
v___x_1344_ = lean_usize_dec_eq(v___x_1342_, v___x_1343_);
if (v___x_1344_ == 0)
{
lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1351_; 
lean_inc_ref(v_decl_1289_);
v_isSharedCheck_1351_ = !lean_is_exclusive(v_c_1264_);
if (v_isSharedCheck_1351_ == 0)
{
lean_object* v_unused_1352_; lean_object* v_unused_1353_; 
v_unused_1352_ = lean_ctor_get(v_c_1264_, 1);
lean_dec(v_unused_1352_);
v_unused_1353_ = lean_ctor_get(v_c_1264_, 0);
lean_dec(v_unused_1353_);
v___x_1346_ = v_c_1264_;
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
else
{
lean_dec(v_c_1264_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1349_; 
if (v_isShared_1347_ == 0)
{
lean_ctor_set(v___x_1346_, 1, v_a_1330_);
v___x_1349_ = v___x_1346_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_decl_1289_);
lean_ctor_set(v_reuseFailAlloc_1350_, 1, v_a_1330_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
v___y_1335_ = v___x_1349_;
goto v___jp_1334_;
}
}
}
else
{
lean_dec(v_a_1330_);
v___y_1335_ = v_c_1264_;
goto v___jp_1334_;
}
v___jp_1334_:
{
uint8_t v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1340_; 
v___x_1336_ = 1;
v___x_1337_ = lean_box(v___x_1336_);
v___x_1338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1338_, 0, v___y_1335_);
lean_ctor_set(v___x_1338_, 1, v___x_1337_);
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 0, v___x_1338_);
v___x_1340_ = v___x_1332_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___x_1338_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
}
else
{
lean_object* v_a_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1362_; 
lean_dec_ref_known(v_c_1264_, 2);
v_a_1355_ = lean_ctor_get(v___x_1329_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1329_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1357_ = v___x_1329_;
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_a_1355_);
lean_dec(v___x_1329_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1360_; 
if (v_isShared_1358_ == 0)
{
v___x_1360_ = v___x_1357_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v_a_1355_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
}
default: 
{
size_t v___x_1363_; size_t v___x_1364_; uint8_t v___x_1365_; 
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
v___x_1363_ = lean_ptr_addr(v_k_1290_);
v___x_1364_ = lean_ptr_addr(v_fst_1296_);
v___x_1365_ = lean_usize_dec_eq(v___x_1363_, v___x_1364_);
if (v___x_1365_ == 0)
{
lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1372_; 
lean_inc_ref(v_decl_1289_);
v_isSharedCheck_1372_ = !lean_is_exclusive(v_c_1264_);
if (v_isSharedCheck_1372_ == 0)
{
lean_object* v_unused_1373_; lean_object* v_unused_1374_; 
v_unused_1373_ = lean_ctor_get(v_c_1264_, 1);
lean_dec(v_unused_1373_);
v_unused_1374_ = lean_ctor_get(v_c_1264_, 0);
lean_dec(v_unused_1374_);
v___x_1367_ = v_c_1264_;
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
else
{
lean_dec(v_c_1264_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1370_; 
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 1, v_fst_1296_);
v___x_1370_ = v___x_1367_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_decl_1289_);
lean_ctor_set(v_reuseFailAlloc_1371_, 1, v_fst_1296_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
v___y_1321_ = v___x_1370_;
goto v___jp_1320_;
}
}
}
else
{
lean_dec(v_fst_1296_);
v___y_1321_ = v_c_1264_;
goto v___jp_1320_;
}
}
}
v___jp_1320_:
{
lean_object* v___x_1323_; 
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 0, v___y_1321_);
v___x_1323_ = v___x_1299_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v___y_1321_);
lean_ctor_set(v_reuseFailAlloc_1327_, 1, v_snd_1297_);
v___x_1323_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
lean_object* v___x_1325_; 
if (v_isShared_1319_ == 0)
{
lean_ctor_set(v___x_1318_, 0, v___x_1323_);
v___x_1325_ = v___x_1318_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v___x_1323_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
}
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1383_; 
lean_del_object(v___x_1299_);
lean_dec(v_snd_1297_);
lean_dec(v_fst_1296_);
lean_dec_ref_known(v_c_1264_, 2);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
v_a_1376_ = lean_ctor_get(v___x_1315_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1378_ = v___x_1315_;
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1315_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1381_; 
if (v_isShared_1379_ == 0)
{
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_a_1376_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
}
}
else
{
lean_del_object(v___x_1299_);
lean_dec(v_snd_1297_);
lean_dec_ref(v_instr_1292_);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
goto v___jp_1301_;
}
v___jp_1301_:
{
size_t v___x_1302_; size_t v___x_1303_; uint8_t v___x_1304_; 
v___x_1302_ = lean_ptr_addr(v_k_1290_);
v___x_1303_ = lean_ptr_addr(v_fst_1296_);
v___x_1304_ = lean_usize_dec_eq(v___x_1302_, v___x_1303_);
if (v___x_1304_ == 0)
{
lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1311_; 
lean_inc_ref(v_decl_1289_);
v_isSharedCheck_1311_ = !lean_is_exclusive(v_c_1264_);
if (v_isSharedCheck_1311_ == 0)
{
lean_object* v_unused_1312_; lean_object* v_unused_1313_; 
v_unused_1312_ = lean_ctor_get(v_c_1264_, 1);
lean_dec(v_unused_1312_);
v_unused_1313_ = lean_ctor_get(v_c_1264_, 0);
lean_dec(v_unused_1313_);
v___x_1306_ = v_c_1264_;
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
else
{
lean_dec(v_c_1264_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1309_; 
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 1, v_fst_1296_);
v___x_1309_ = v___x_1306_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_decl_1289_);
lean_ctor_set(v_reuseFailAlloc_1310_, 1, v_fst_1296_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
v___y_1278_ = v___x_1309_;
goto v___jp_1277_;
}
}
}
else
{
lean_dec(v_fst_1296_);
v___y_1278_ = v_c_1264_;
goto v___jp_1277_;
}
}
}
}
else
{
lean_dec_ref(v_instr_1292_);
lean_dec_ref_known(v_c_1264_, 2);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
return v___x_1294_;
}
}
else
{
lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; 
lean_dec_ref(v_instr_1292_);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
v___x_1385_ = lean_box(v___x_1293_);
v___x_1386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1386_, 0, v_c_1264_);
lean_ctor_set(v___x_1386_, 1, v___x_1385_);
v___x_1387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1387_, 0, v___x_1386_);
return v___x_1387_;
}
}
case 2:
{
lean_object* v_decl_1388_; lean_object* v_k_1389_; lean_object* v___x_1390_; 
v_decl_1388_ = lean_ctor_get(v_c_1264_, 0);
v_k_1389_ = lean_ctor_get(v_c_1264_, 1);
lean_inc_ref(v_k_1389_);
lean_inc_ref(v_info_1263_);
lean_inc(v_x_1262_);
v___x_1390_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1262_, v_info_1263_, v_k_1389_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; lean_object* v_fst_1392_; lean_object* v_snd_1393_; lean_object* v_params_1394_; lean_object* v_type_1395_; lean_object* v_value_1396_; uint8_t v___x_1397_; lean_object* v___x_1398_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1391_);
lean_dec_ref_known(v___x_1390_, 1);
v_fst_1392_ = lean_ctor_get(v_a_1391_, 0);
lean_inc(v_fst_1392_);
v_snd_1393_ = lean_ctor_get(v_a_1391_, 1);
lean_inc(v_snd_1393_);
lean_dec(v_a_1391_);
v_params_1394_ = lean_ctor_get(v_decl_1388_, 2);
v_type_1395_ = lean_ctor_get(v_decl_1388_, 3);
v_value_1396_ = lean_ctor_get(v_decl_1388_, 4);
v___x_1397_ = 1;
lean_inc_ref(v_value_1396_);
v___x_1398_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1262_, v_info_1263_, v_value_1396_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v_fst_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1450_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
lean_inc(v_a_1399_);
lean_dec_ref_known(v___x_1398_, 1);
v_fst_1400_ = lean_ctor_get(v_a_1399_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v_a_1399_);
if (v_isSharedCheck_1450_ == 0)
{
lean_object* v_unused_1451_; 
v_unused_1451_ = lean_ctor_get(v_a_1399_, 1);
lean_dec(v_unused_1451_);
v___x_1402_ = v_a_1399_;
v_isShared_1403_ = v_isSharedCheck_1450_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_fst_1400_);
lean_dec(v_a_1399_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1450_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___x_1404_; 
lean_inc_ref(v_params_1394_);
lean_inc_ref(v_type_1395_);
lean_inc_ref(v_decl_1388_);
v___x_1404_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1397_, v_decl_1388_, v_type_1395_, v_params_1394_, v_fst_1400_, v_a_1267_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_a_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1441_; 
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1407_ = v___x_1404_;
v_isShared_1408_ = v_isSharedCheck_1441_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_a_1405_);
lean_dec(v___x_1404_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1441_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___y_1410_; size_t v___x_1417_; size_t v___x_1418_; uint8_t v___x_1419_; 
v___x_1417_ = lean_ptr_addr(v_k_1389_);
v___x_1418_ = lean_ptr_addr(v_fst_1392_);
v___x_1419_ = lean_usize_dec_eq(v___x_1417_, v___x_1418_);
if (v___x_1419_ == 0)
{
lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
v_isSharedCheck_1426_ = !lean_is_exclusive(v_c_1264_);
if (v_isSharedCheck_1426_ == 0)
{
lean_object* v_unused_1427_; lean_object* v_unused_1428_; 
v_unused_1427_ = lean_ctor_get(v_c_1264_, 1);
lean_dec(v_unused_1427_);
v_unused_1428_ = lean_ctor_get(v_c_1264_, 0);
lean_dec(v_unused_1428_);
v___x_1421_ = v_c_1264_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_dec(v_c_1264_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1422_ == 0)
{
lean_ctor_set(v___x_1421_, 1, v_fst_1392_);
lean_ctor_set(v___x_1421_, 0, v_a_1405_);
v___x_1424_ = v___x_1421_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1405_);
lean_ctor_set(v_reuseFailAlloc_1425_, 1, v_fst_1392_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
v___y_1410_ = v___x_1424_;
goto v___jp_1409_;
}
}
}
else
{
size_t v___x_1429_; size_t v___x_1430_; uint8_t v___x_1431_; 
v___x_1429_ = lean_ptr_addr(v_decl_1388_);
v___x_1430_ = lean_ptr_addr(v_a_1405_);
v___x_1431_ = lean_usize_dec_eq(v___x_1429_, v___x_1430_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1438_; 
v_isSharedCheck_1438_ = !lean_is_exclusive(v_c_1264_);
if (v_isSharedCheck_1438_ == 0)
{
lean_object* v_unused_1439_; lean_object* v_unused_1440_; 
v_unused_1439_ = lean_ctor_get(v_c_1264_, 1);
lean_dec(v_unused_1439_);
v_unused_1440_ = lean_ctor_get(v_c_1264_, 0);
lean_dec(v_unused_1440_);
v___x_1433_ = v_c_1264_;
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
else
{
lean_dec(v_c_1264_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1436_; 
if (v_isShared_1434_ == 0)
{
lean_ctor_set(v___x_1433_, 1, v_fst_1392_);
lean_ctor_set(v___x_1433_, 0, v_a_1405_);
v___x_1436_ = v___x_1433_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v_a_1405_);
lean_ctor_set(v_reuseFailAlloc_1437_, 1, v_fst_1392_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
v___y_1410_ = v___x_1436_;
goto v___jp_1409_;
}
}
}
else
{
lean_dec(v_a_1405_);
lean_dec(v_fst_1392_);
v___y_1410_ = v_c_1264_;
goto v___jp_1409_;
}
}
v___jp_1409_:
{
lean_object* v___x_1412_; 
if (v_isShared_1403_ == 0)
{
lean_ctor_set(v___x_1402_, 1, v_snd_1393_);
lean_ctor_set(v___x_1402_, 0, v___y_1410_);
v___x_1412_ = v___x_1402_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v___y_1410_);
lean_ctor_set(v_reuseFailAlloc_1416_, 1, v_snd_1393_);
v___x_1412_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_object* v___x_1414_; 
if (v_isShared_1408_ == 0)
{
lean_ctor_set(v___x_1407_, 0, v___x_1412_);
v___x_1414_ = v___x_1407_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v___x_1412_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
}
}
else
{
lean_object* v_a_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1449_; 
lean_del_object(v___x_1402_);
lean_dec(v_snd_1393_);
lean_dec(v_fst_1392_);
lean_dec_ref_known(v_c_1264_, 2);
v_a_1442_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1444_ = v___x_1404_;
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_a_1442_);
lean_dec(v___x_1404_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1447_; 
if (v_isShared_1445_ == 0)
{
v___x_1447_ = v___x_1444_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1442_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
}
}
else
{
lean_dec(v_snd_1393_);
lean_dec(v_fst_1392_);
lean_dec_ref_known(v_c_1264_, 2);
return v___x_1398_;
}
}
else
{
lean_dec_ref_known(v_c_1264_, 2);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
return v___x_1390_;
}
}
case 3:
{
lean_object* v___x_1452_; 
lean_dec_ref(v_info_1263_);
lean_inc_ref(v_c_1264_);
v___x_1452_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1264_, v_x_1262_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1461_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1455_ = v___x_1452_;
v_isShared_1456_ = v_isSharedCheck_1461_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_dec(v___x_1452_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1461_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1457_; lean_object* v___x_1459_; 
v___x_1457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1457_, 0, v_c_1264_);
lean_ctor_set(v___x_1457_, 1, v_a_1453_);
if (v_isShared_1456_ == 0)
{
lean_ctor_set(v___x_1455_, 0, v___x_1457_);
v___x_1459_ = v___x_1455_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v___x_1457_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
else
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1469_; 
lean_dec_ref_known(v_c_1264_, 2);
v_a_1462_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1464_ = v___x_1452_;
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1452_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1467_; 
if (v_isShared_1465_ == 0)
{
v___x_1467_ = v___x_1464_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_a_1462_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
}
case 4:
{
lean_object* v_cases_1470_; lean_object* v___x_1471_; 
v_cases_1470_ = lean_ctor_get(v_c_1264_, 0);
lean_inc_ref(v_cases_1470_);
lean_inc(v_x_1262_);
lean_inc_ref(v_c_1264_);
v___x_1471_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1264_, v_x_1262_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
if (lean_obj_tag(v___x_1471_) == 0)
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1524_; 
v_a_1472_ = lean_ctor_get(v___x_1471_, 0);
v_isSharedCheck_1524_ = !lean_is_exclusive(v___x_1471_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1474_ = v___x_1471_;
v_isShared_1475_ = v_isSharedCheck_1524_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1471_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1524_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
uint8_t v___x_1476_; 
v___x_1476_ = lean_unbox(v_a_1472_);
if (v___x_1476_ == 0)
{
lean_object* v___x_1477_; lean_object* v___x_1479_; 
lean_dec_ref(v_cases_1470_);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
v___x_1477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1477_, 0, v_c_1264_);
lean_ctor_set(v___x_1477_, 1, v_a_1472_);
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 0, v___x_1477_);
v___x_1479_ = v___x_1474_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v___x_1477_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
else
{
lean_object* v_typeName_1481_; lean_object* v_resultType_1482_; lean_object* v_discr_1483_; lean_object* v_alts_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1523_; 
lean_del_object(v___x_1474_);
v_typeName_1481_ = lean_ctor_get(v_cases_1470_, 0);
v_resultType_1482_ = lean_ctor_get(v_cases_1470_, 1);
v_discr_1483_ = lean_ctor_get(v_cases_1470_, 2);
v_alts_1484_ = lean_ctor_get(v_cases_1470_, 3);
v_isSharedCheck_1523_ = !lean_is_exclusive(v_cases_1470_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1486_ = v_cases_1470_;
v_isShared_1487_ = v_isSharedCheck_1523_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_alts_1484_);
lean_inc(v_discr_1483_);
lean_inc(v_resultType_1482_);
lean_inc(v_typeName_1481_);
lean_dec(v_cases_1470_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1523_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1488_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_1484_);
v___x_1489_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(v_x_1262_, v_info_1263_, v___x_1488_, v_alts_1484_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
if (lean_obj_tag(v___x_1489_) == 0)
{
lean_object* v_a_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1514_; 
v_a_1490_ = lean_ctor_get(v___x_1489_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1489_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1492_ = v___x_1489_;
v_isShared_1493_ = v_isSharedCheck_1514_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_dec(v___x_1489_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1514_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___y_1495_; size_t v___x_1500_; size_t v___x_1501_; uint8_t v___x_1502_; 
v___x_1500_ = lean_ptr_addr(v_alts_1484_);
lean_dec_ref(v_alts_1484_);
v___x_1501_ = lean_ptr_addr(v_a_1490_);
v___x_1502_ = lean_usize_dec_eq(v___x_1500_, v___x_1501_);
if (v___x_1502_ == 0)
{
lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1512_; 
v_isSharedCheck_1512_ = !lean_is_exclusive(v_c_1264_);
if (v_isSharedCheck_1512_ == 0)
{
lean_object* v_unused_1513_; 
v_unused_1513_ = lean_ctor_get(v_c_1264_, 0);
lean_dec(v_unused_1513_);
v___x_1504_ = v_c_1264_;
v_isShared_1505_ = v_isSharedCheck_1512_;
goto v_resetjp_1503_;
}
else
{
lean_dec(v_c_1264_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1512_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___x_1507_; 
if (v_isShared_1487_ == 0)
{
lean_ctor_set(v___x_1486_, 3, v_a_1490_);
v___x_1507_ = v___x_1486_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_typeName_1481_);
lean_ctor_set(v_reuseFailAlloc_1511_, 1, v_resultType_1482_);
lean_ctor_set(v_reuseFailAlloc_1511_, 2, v_discr_1483_);
lean_ctor_set(v_reuseFailAlloc_1511_, 3, v_a_1490_);
v___x_1507_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
lean_object* v___x_1509_; 
if (v_isShared_1505_ == 0)
{
lean_ctor_set(v___x_1504_, 0, v___x_1507_);
v___x_1509_ = v___x_1504_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1507_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
v___y_1495_ = v___x_1509_;
goto v___jp_1494_;
}
}
}
}
else
{
lean_dec(v_a_1490_);
lean_del_object(v___x_1486_);
lean_dec(v_discr_1483_);
lean_dec_ref(v_resultType_1482_);
lean_dec(v_typeName_1481_);
v___y_1495_ = v_c_1264_;
goto v___jp_1494_;
}
v___jp_1494_:
{
lean_object* v___x_1496_; lean_object* v___x_1498_; 
v___x_1496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1496_, 0, v___y_1495_);
lean_ctor_set(v___x_1496_, 1, v_a_1472_);
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 0, v___x_1496_);
v___x_1498_ = v___x_1492_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v___x_1496_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
return v___x_1498_;
}
}
}
}
else
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1522_; 
lean_del_object(v___x_1486_);
lean_dec_ref(v_alts_1484_);
lean_dec(v_discr_1483_);
lean_dec_ref(v_resultType_1482_);
lean_dec(v_typeName_1481_);
lean_dec(v_a_1472_);
lean_dec_ref_known(v_c_1264_, 1);
v_a_1515_ = lean_ctor_get(v___x_1489_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1489_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1517_ = v___x_1489_;
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1489_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1520_; 
if (v_isShared_1518_ == 0)
{
v___x_1520_ = v___x_1517_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_a_1515_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1532_; 
lean_dec_ref(v_cases_1470_);
lean_dec_ref_known(v_c_1264_, 1);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
v_a_1525_ = lean_ctor_get(v___x_1471_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1471_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1527_ = v___x_1471_;
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1471_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1530_; 
if (v_isShared_1528_ == 0)
{
v___x_1530_ = v___x_1527_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1525_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
}
case 5:
{
lean_object* v___x_1533_; 
lean_dec_ref(v_info_1263_);
lean_inc_ref(v_c_1264_);
v___x_1533_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1264_, v_x_1262_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1542_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1536_ = v___x_1533_;
v_isShared_1537_ = v_isSharedCheck_1542_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1533_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1542_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1538_; lean_object* v___x_1540_; 
v___x_1538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1538_, 0, v_c_1264_);
lean_ctor_set(v___x_1538_, 1, v_a_1534_);
if (v_isShared_1537_ == 0)
{
lean_ctor_set(v___x_1536_, 0, v___x_1538_);
v___x_1540_ = v___x_1536_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v___x_1538_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
else
{
lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1550_; 
lean_dec_ref_known(v_c_1264_, 1);
v_a_1543_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1550_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1550_ == 0)
{
v___x_1545_ = v___x_1533_;
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_dec(v___x_1533_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1548_; 
if (v_isShared_1546_ == 0)
{
v___x_1548_ = v___x_1545_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_a_1543_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
}
}
case 6:
{
lean_object* v___x_1551_; 
lean_dec_ref(v_info_1263_);
lean_inc_ref(v_c_1264_);
v___x_1551_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1264_, v_x_1262_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_object* v_a_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1560_; 
v_a_1552_ = lean_ctor_get(v___x_1551_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1554_ = v___x_1551_;
v_isShared_1555_ = v_isSharedCheck_1560_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_a_1552_);
lean_dec(v___x_1551_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1560_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v___x_1556_; lean_object* v___x_1558_; 
v___x_1556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1556_, 0, v_c_1264_);
lean_ctor_set(v___x_1556_, 1, v_a_1552_);
if (v_isShared_1555_ == 0)
{
lean_ctor_set(v___x_1554_, 0, v___x_1556_);
v___x_1558_ = v___x_1554_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v___x_1556_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
else
{
lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1568_; 
lean_dec_ref_known(v_c_1264_, 1);
v_a_1561_ = lean_ctor_get(v___x_1551_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1563_ = v___x_1551_;
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v___x_1551_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1566_; 
if (v_isShared_1564_ == 0)
{
v___x_1566_ = v___x_1563_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_a_1561_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
}
}
case 8:
{
lean_object* v_fvarId_1569_; lean_object* v_i_1570_; lean_object* v_y_1571_; lean_object* v_k_1572_; uint8_t v___x_1573_; lean_object* v_instr_1574_; uint8_t v___x_1575_; 
v_fvarId_1569_ = lean_ctor_get(v_c_1264_, 0);
v_i_1570_ = lean_ctor_get(v_c_1264_, 1);
v_y_1571_ = lean_ctor_get(v_c_1264_, 2);
v_k_1572_ = lean_ctor_get(v_c_1264_, 3);
v___x_1573_ = 1;
v_instr_1574_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_1573_, v_c_1264_);
lean_inc(v_x_1262_);
v___x_1575_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1574_, v_x_1262_);
if (v___x_1575_ == 0)
{
lean_object* v___x_1576_; 
lean_inc_ref(v_k_1572_);
lean_inc_ref(v_info_1263_);
lean_inc(v_x_1262_);
v___x_1576_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1262_, v_info_1263_, v_k_1572_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_a_1577_; lean_object* v_fst_1578_; lean_object* v_snd_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1672_; 
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_a_1577_);
lean_dec_ref_known(v___x_1576_, 1);
v_fst_1578_ = lean_ctor_get(v_a_1577_, 0);
v_snd_1579_ = lean_ctor_get(v_a_1577_, 1);
v_isSharedCheck_1672_ = !lean_is_exclusive(v_a_1577_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1581_ = v_a_1577_;
v_isShared_1582_ = v_isSharedCheck_1672_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_snd_1579_);
lean_inc(v_fst_1578_);
lean_dec(v_a_1577_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1672_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
uint8_t v___x_1598_; 
v___x_1598_ = lean_unbox(v_snd_1579_);
if (v___x_1598_ == 0)
{
lean_object* v___x_1599_; 
lean_inc(v_x_1262_);
v___x_1599_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1574_, v_x_1262_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
if (lean_obj_tag(v___x_1599_) == 0)
{
lean_object* v_a_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1663_; 
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1602_ = v___x_1599_;
v_isShared_1603_ = v_isSharedCheck_1663_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_a_1600_);
lean_dec(v___x_1599_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1663_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___y_1605_; uint8_t v___x_1612_; 
v___x_1612_ = lean_unbox(v_a_1600_);
lean_dec(v_a_1600_);
switch(v___x_1612_)
{
case 0:
{
lean_del_object(v___x_1602_);
lean_del_object(v___x_1581_);
lean_dec(v_snd_1579_);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
goto v___jp_1583_;
}
case 1:
{
lean_object* v___x_1613_; 
lean_del_object(v___x_1602_);
lean_del_object(v___x_1581_);
lean_dec(v_snd_1579_);
v___x_1613_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1262_, v_info_1263_, v_fst_1578_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
lean_dec_ref(v_info_1263_);
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1640_; 
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1616_ = v___x_1613_;
v_isShared_1617_ = v_isSharedCheck_1640_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1613_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1640_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___y_1619_; size_t v___x_1626_; size_t v___x_1627_; uint8_t v___x_1628_; 
v___x_1626_ = lean_ptr_addr(v_k_1572_);
v___x_1627_ = lean_ptr_addr(v_a_1614_);
v___x_1628_ = lean_usize_dec_eq(v___x_1626_, v___x_1627_);
if (v___x_1628_ == 0)
{
lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1635_; 
lean_inc(v_y_1571_);
lean_inc(v_i_1570_);
lean_inc(v_fvarId_1569_);
v_isSharedCheck_1635_ = !lean_is_exclusive(v_c_1264_);
if (v_isSharedCheck_1635_ == 0)
{
lean_object* v_unused_1636_; lean_object* v_unused_1637_; lean_object* v_unused_1638_; lean_object* v_unused_1639_; 
v_unused_1636_ = lean_ctor_get(v_c_1264_, 3);
lean_dec(v_unused_1636_);
v_unused_1637_ = lean_ctor_get(v_c_1264_, 2);
lean_dec(v_unused_1637_);
v_unused_1638_ = lean_ctor_get(v_c_1264_, 1);
lean_dec(v_unused_1638_);
v_unused_1639_ = lean_ctor_get(v_c_1264_, 0);
lean_dec(v_unused_1639_);
v___x_1630_ = v_c_1264_;
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
else
{
lean_dec(v_c_1264_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1633_; 
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 3, v_a_1614_);
v___x_1633_ = v___x_1630_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_fvarId_1569_);
lean_ctor_set(v_reuseFailAlloc_1634_, 1, v_i_1570_);
lean_ctor_set(v_reuseFailAlloc_1634_, 2, v_y_1571_);
lean_ctor_set(v_reuseFailAlloc_1634_, 3, v_a_1614_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
v___y_1619_ = v___x_1633_;
goto v___jp_1618_;
}
}
}
else
{
lean_dec(v_a_1614_);
v___y_1619_ = v_c_1264_;
goto v___jp_1618_;
}
v___jp_1618_:
{
uint8_t v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1624_; 
v___x_1620_ = 1;
v___x_1621_ = lean_box(v___x_1620_);
v___x_1622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1622_, 0, v___y_1619_);
lean_ctor_set(v___x_1622_, 1, v___x_1621_);
if (v_isShared_1617_ == 0)
{
lean_ctor_set(v___x_1616_, 0, v___x_1622_);
v___x_1624_ = v___x_1616_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v___x_1622_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
}
else
{
lean_object* v_a_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1648_; 
lean_dec_ref_known(v_c_1264_, 4);
v_a_1641_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1643_ = v___x_1613_;
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_a_1641_);
lean_dec(v___x_1613_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1646_; 
if (v_isShared_1644_ == 0)
{
v___x_1646_ = v___x_1643_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_a_1641_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
}
default: 
{
size_t v___x_1649_; size_t v___x_1650_; uint8_t v___x_1651_; 
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
v___x_1649_ = lean_ptr_addr(v_k_1572_);
v___x_1650_ = lean_ptr_addr(v_fst_1578_);
v___x_1651_ = lean_usize_dec_eq(v___x_1649_, v___x_1650_);
if (v___x_1651_ == 0)
{
lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
lean_inc(v_y_1571_);
lean_inc(v_i_1570_);
lean_inc(v_fvarId_1569_);
v_isSharedCheck_1658_ = !lean_is_exclusive(v_c_1264_);
if (v_isSharedCheck_1658_ == 0)
{
lean_object* v_unused_1659_; lean_object* v_unused_1660_; lean_object* v_unused_1661_; lean_object* v_unused_1662_; 
v_unused_1659_ = lean_ctor_get(v_c_1264_, 3);
lean_dec(v_unused_1659_);
v_unused_1660_ = lean_ctor_get(v_c_1264_, 2);
lean_dec(v_unused_1660_);
v_unused_1661_ = lean_ctor_get(v_c_1264_, 1);
lean_dec(v_unused_1661_);
v_unused_1662_ = lean_ctor_get(v_c_1264_, 0);
lean_dec(v_unused_1662_);
v___x_1653_ = v_c_1264_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_dec(v_c_1264_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
lean_ctor_set(v___x_1653_, 3, v_fst_1578_);
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_fvarId_1569_);
lean_ctor_set(v_reuseFailAlloc_1657_, 1, v_i_1570_);
lean_ctor_set(v_reuseFailAlloc_1657_, 2, v_y_1571_);
lean_ctor_set(v_reuseFailAlloc_1657_, 3, v_fst_1578_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
v___y_1605_ = v___x_1656_;
goto v___jp_1604_;
}
}
}
else
{
lean_dec(v_fst_1578_);
v___y_1605_ = v_c_1264_;
goto v___jp_1604_;
}
}
}
v___jp_1604_:
{
lean_object* v___x_1607_; 
if (v_isShared_1582_ == 0)
{
lean_ctor_set(v___x_1581_, 0, v___y_1605_);
v___x_1607_ = v___x_1581_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v___y_1605_);
lean_ctor_set(v_reuseFailAlloc_1611_, 1, v_snd_1579_);
v___x_1607_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
lean_object* v___x_1609_; 
if (v_isShared_1603_ == 0)
{
lean_ctor_set(v___x_1602_, 0, v___x_1607_);
v___x_1609_ = v___x_1602_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v___x_1607_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
return v___x_1609_;
}
}
}
}
}
else
{
lean_object* v_a_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1671_; 
lean_del_object(v___x_1581_);
lean_dec(v_snd_1579_);
lean_dec(v_fst_1578_);
lean_dec_ref_known(v_c_1264_, 4);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
v_a_1664_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1666_ = v___x_1599_;
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_a_1664_);
lean_dec(v___x_1599_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1669_; 
if (v_isShared_1667_ == 0)
{
v___x_1669_ = v___x_1666_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_a_1664_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
}
else
{
lean_del_object(v___x_1581_);
lean_dec(v_snd_1579_);
lean_dec_ref(v_instr_1574_);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
goto v___jp_1583_;
}
v___jp_1583_:
{
size_t v___x_1584_; size_t v___x_1585_; uint8_t v___x_1586_; 
v___x_1584_ = lean_ptr_addr(v_k_1572_);
v___x_1585_ = lean_ptr_addr(v_fst_1578_);
v___x_1586_ = lean_usize_dec_eq(v___x_1584_, v___x_1585_);
if (v___x_1586_ == 0)
{
lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1593_; 
lean_inc(v_y_1571_);
lean_inc(v_i_1570_);
lean_inc(v_fvarId_1569_);
v_isSharedCheck_1593_ = !lean_is_exclusive(v_c_1264_);
if (v_isSharedCheck_1593_ == 0)
{
lean_object* v_unused_1594_; lean_object* v_unused_1595_; lean_object* v_unused_1596_; lean_object* v_unused_1597_; 
v_unused_1594_ = lean_ctor_get(v_c_1264_, 3);
lean_dec(v_unused_1594_);
v_unused_1595_ = lean_ctor_get(v_c_1264_, 2);
lean_dec(v_unused_1595_);
v_unused_1596_ = lean_ctor_get(v_c_1264_, 1);
lean_dec(v_unused_1596_);
v_unused_1597_ = lean_ctor_get(v_c_1264_, 0);
lean_dec(v_unused_1597_);
v___x_1588_ = v_c_1264_;
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
else
{
lean_dec(v_c_1264_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
if (v_isShared_1589_ == 0)
{
lean_ctor_set(v___x_1588_, 3, v_fst_1578_);
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_fvarId_1569_);
lean_ctor_set(v_reuseFailAlloc_1592_, 1, v_i_1570_);
lean_ctor_set(v_reuseFailAlloc_1592_, 2, v_y_1571_);
lean_ctor_set(v_reuseFailAlloc_1592_, 3, v_fst_1578_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
v___y_1284_ = v___x_1591_;
goto v___jp_1283_;
}
}
}
else
{
lean_dec(v_fst_1578_);
v___y_1284_ = v_c_1264_;
goto v___jp_1283_;
}
}
}
}
else
{
lean_dec_ref(v_instr_1574_);
lean_dec_ref_known(v_c_1264_, 4);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
return v___x_1576_;
}
}
else
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
lean_dec_ref(v_instr_1574_);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
v___x_1673_ = lean_box(v___x_1575_);
v___x_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1674_, 0, v_c_1264_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
v___x_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1674_);
return v___x_1675_;
}
}
case 9:
{
lean_object* v_fvarId_1676_; lean_object* v_i_1677_; lean_object* v_offset_1678_; lean_object* v_y_1679_; lean_object* v_ty_1680_; lean_object* v_k_1681_; uint8_t v___x_1682_; lean_object* v_instr_1683_; uint8_t v___x_1684_; 
v_fvarId_1676_ = lean_ctor_get(v_c_1264_, 0);
v_i_1677_ = lean_ctor_get(v_c_1264_, 1);
v_offset_1678_ = lean_ctor_get(v_c_1264_, 2);
v_y_1679_ = lean_ctor_get(v_c_1264_, 3);
v_ty_1680_ = lean_ctor_get(v_c_1264_, 4);
v_k_1681_ = lean_ctor_get(v_c_1264_, 5);
v___x_1682_ = 1;
v_instr_1683_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_1682_, v_c_1264_);
lean_inc(v_x_1262_);
v___x_1684_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1683_, v_x_1262_);
if (v___x_1684_ == 0)
{
lean_object* v___x_1685_; 
lean_inc_ref(v_k_1681_);
lean_inc_ref(v_info_1263_);
lean_inc(v_x_1262_);
v___x_1685_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1262_, v_info_1263_, v_k_1681_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
if (lean_obj_tag(v___x_1685_) == 0)
{
lean_object* v_a_1686_; lean_object* v_fst_1687_; lean_object* v_snd_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1787_; 
v_a_1686_ = lean_ctor_get(v___x_1685_, 0);
lean_inc(v_a_1686_);
lean_dec_ref_known(v___x_1685_, 1);
v_fst_1687_ = lean_ctor_get(v_a_1686_, 0);
v_snd_1688_ = lean_ctor_get(v_a_1686_, 1);
v_isSharedCheck_1787_ = !lean_is_exclusive(v_a_1686_);
if (v_isSharedCheck_1787_ == 0)
{
v___x_1690_ = v_a_1686_;
v_isShared_1691_ = v_isSharedCheck_1787_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_snd_1688_);
lean_inc(v_fst_1687_);
lean_dec(v_a_1686_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1787_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
uint8_t v___x_1709_; 
v___x_1709_ = lean_unbox(v_snd_1688_);
if (v___x_1709_ == 0)
{
lean_object* v___x_1710_; 
lean_inc(v_x_1262_);
v___x_1710_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1683_, v_x_1262_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1778_; 
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1713_ = v___x_1710_;
v_isShared_1714_ = v_isSharedCheck_1778_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1710_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1778_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___y_1716_; uint8_t v___x_1723_; 
v___x_1723_ = lean_unbox(v_a_1711_);
lean_dec(v_a_1711_);
switch(v___x_1723_)
{
case 0:
{
lean_del_object(v___x_1713_);
lean_del_object(v___x_1690_);
lean_dec(v_snd_1688_);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
goto v___jp_1692_;
}
case 1:
{
lean_object* v___x_1724_; 
lean_del_object(v___x_1713_);
lean_del_object(v___x_1690_);
lean_dec(v_snd_1688_);
v___x_1724_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1262_, v_info_1263_, v_fst_1687_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
lean_dec_ref(v_info_1263_);
if (lean_obj_tag(v___x_1724_) == 0)
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1753_; 
v_a_1725_ = lean_ctor_get(v___x_1724_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1727_ = v___x_1724_;
v_isShared_1728_ = v_isSharedCheck_1753_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1724_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1753_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___y_1730_; size_t v___x_1737_; size_t v___x_1738_; uint8_t v___x_1739_; 
v___x_1737_ = lean_ptr_addr(v_k_1681_);
v___x_1738_ = lean_ptr_addr(v_a_1725_);
v___x_1739_ = lean_usize_dec_eq(v___x_1737_, v___x_1738_);
if (v___x_1739_ == 0)
{
lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1746_; 
lean_inc_ref(v_ty_1680_);
lean_inc(v_y_1679_);
lean_inc(v_offset_1678_);
lean_inc(v_i_1677_);
lean_inc(v_fvarId_1676_);
v_isSharedCheck_1746_ = !lean_is_exclusive(v_c_1264_);
if (v_isSharedCheck_1746_ == 0)
{
lean_object* v_unused_1747_; lean_object* v_unused_1748_; lean_object* v_unused_1749_; lean_object* v_unused_1750_; lean_object* v_unused_1751_; lean_object* v_unused_1752_; 
v_unused_1747_ = lean_ctor_get(v_c_1264_, 5);
lean_dec(v_unused_1747_);
v_unused_1748_ = lean_ctor_get(v_c_1264_, 4);
lean_dec(v_unused_1748_);
v_unused_1749_ = lean_ctor_get(v_c_1264_, 3);
lean_dec(v_unused_1749_);
v_unused_1750_ = lean_ctor_get(v_c_1264_, 2);
lean_dec(v_unused_1750_);
v_unused_1751_ = lean_ctor_get(v_c_1264_, 1);
lean_dec(v_unused_1751_);
v_unused_1752_ = lean_ctor_get(v_c_1264_, 0);
lean_dec(v_unused_1752_);
v___x_1741_ = v_c_1264_;
v_isShared_1742_ = v_isSharedCheck_1746_;
goto v_resetjp_1740_;
}
else
{
lean_dec(v_c_1264_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1746_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1744_; 
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 5, v_a_1725_);
v___x_1744_ = v___x_1741_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v_fvarId_1676_);
lean_ctor_set(v_reuseFailAlloc_1745_, 1, v_i_1677_);
lean_ctor_set(v_reuseFailAlloc_1745_, 2, v_offset_1678_);
lean_ctor_set(v_reuseFailAlloc_1745_, 3, v_y_1679_);
lean_ctor_set(v_reuseFailAlloc_1745_, 4, v_ty_1680_);
lean_ctor_set(v_reuseFailAlloc_1745_, 5, v_a_1725_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
v___y_1730_ = v___x_1744_;
goto v___jp_1729_;
}
}
}
else
{
lean_dec(v_a_1725_);
v___y_1730_ = v_c_1264_;
goto v___jp_1729_;
}
v___jp_1729_:
{
uint8_t v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1735_; 
v___x_1731_ = 1;
v___x_1732_ = lean_box(v___x_1731_);
v___x_1733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___y_1730_);
lean_ctor_set(v___x_1733_, 1, v___x_1732_);
if (v_isShared_1728_ == 0)
{
lean_ctor_set(v___x_1727_, 0, v___x_1733_);
v___x_1735_ = v___x_1727_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1733_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
}
else
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1761_; 
lean_dec_ref_known(v_c_1264_, 6);
v_a_1754_ = lean_ctor_get(v___x_1724_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1756_ = v___x_1724_;
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1724_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
if (v_isShared_1757_ == 0)
{
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_a_1754_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
}
default: 
{
size_t v___x_1762_; size_t v___x_1763_; uint8_t v___x_1764_; 
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
v___x_1762_ = lean_ptr_addr(v_k_1681_);
v___x_1763_ = lean_ptr_addr(v_fst_1687_);
v___x_1764_ = lean_usize_dec_eq(v___x_1762_, v___x_1763_);
if (v___x_1764_ == 0)
{
lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1771_; 
lean_inc_ref(v_ty_1680_);
lean_inc(v_y_1679_);
lean_inc(v_offset_1678_);
lean_inc(v_i_1677_);
lean_inc(v_fvarId_1676_);
v_isSharedCheck_1771_ = !lean_is_exclusive(v_c_1264_);
if (v_isSharedCheck_1771_ == 0)
{
lean_object* v_unused_1772_; lean_object* v_unused_1773_; lean_object* v_unused_1774_; lean_object* v_unused_1775_; lean_object* v_unused_1776_; lean_object* v_unused_1777_; 
v_unused_1772_ = lean_ctor_get(v_c_1264_, 5);
lean_dec(v_unused_1772_);
v_unused_1773_ = lean_ctor_get(v_c_1264_, 4);
lean_dec(v_unused_1773_);
v_unused_1774_ = lean_ctor_get(v_c_1264_, 3);
lean_dec(v_unused_1774_);
v_unused_1775_ = lean_ctor_get(v_c_1264_, 2);
lean_dec(v_unused_1775_);
v_unused_1776_ = lean_ctor_get(v_c_1264_, 1);
lean_dec(v_unused_1776_);
v_unused_1777_ = lean_ctor_get(v_c_1264_, 0);
lean_dec(v_unused_1777_);
v___x_1766_ = v_c_1264_;
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
else
{
lean_dec(v_c_1264_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1767_ == 0)
{
lean_ctor_set(v___x_1766_, 5, v_fst_1687_);
v___x_1769_ = v___x_1766_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_fvarId_1676_);
lean_ctor_set(v_reuseFailAlloc_1770_, 1, v_i_1677_);
lean_ctor_set(v_reuseFailAlloc_1770_, 2, v_offset_1678_);
lean_ctor_set(v_reuseFailAlloc_1770_, 3, v_y_1679_);
lean_ctor_set(v_reuseFailAlloc_1770_, 4, v_ty_1680_);
lean_ctor_set(v_reuseFailAlloc_1770_, 5, v_fst_1687_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
v___y_1716_ = v___x_1769_;
goto v___jp_1715_;
}
}
}
else
{
lean_dec(v_fst_1687_);
v___y_1716_ = v_c_1264_;
goto v___jp_1715_;
}
}
}
v___jp_1715_:
{
lean_object* v___x_1718_; 
if (v_isShared_1691_ == 0)
{
lean_ctor_set(v___x_1690_, 0, v___y_1716_);
v___x_1718_ = v___x_1690_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v___y_1716_);
lean_ctor_set(v_reuseFailAlloc_1722_, 1, v_snd_1688_);
v___x_1718_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
lean_object* v___x_1720_; 
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
}
}
else
{
lean_object* v_a_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1786_; 
lean_del_object(v___x_1690_);
lean_dec(v_snd_1688_);
lean_dec(v_fst_1687_);
lean_dec_ref_known(v_c_1264_, 6);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
v_a_1779_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1781_ = v___x_1710_;
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_a_1779_);
lean_dec(v___x_1710_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1784_; 
if (v_isShared_1782_ == 0)
{
v___x_1784_ = v___x_1781_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1779_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
else
{
lean_del_object(v___x_1690_);
lean_dec(v_snd_1688_);
lean_dec_ref(v_instr_1683_);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
goto v___jp_1692_;
}
v___jp_1692_:
{
size_t v___x_1693_; size_t v___x_1694_; uint8_t v___x_1695_; 
v___x_1693_ = lean_ptr_addr(v_k_1681_);
v___x_1694_ = lean_ptr_addr(v_fst_1687_);
v___x_1695_ = lean_usize_dec_eq(v___x_1693_, v___x_1694_);
if (v___x_1695_ == 0)
{
lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1702_; 
lean_inc_ref(v_ty_1680_);
lean_inc(v_y_1679_);
lean_inc(v_offset_1678_);
lean_inc(v_i_1677_);
lean_inc(v_fvarId_1676_);
v_isSharedCheck_1702_ = !lean_is_exclusive(v_c_1264_);
if (v_isSharedCheck_1702_ == 0)
{
lean_object* v_unused_1703_; lean_object* v_unused_1704_; lean_object* v_unused_1705_; lean_object* v_unused_1706_; lean_object* v_unused_1707_; lean_object* v_unused_1708_; 
v_unused_1703_ = lean_ctor_get(v_c_1264_, 5);
lean_dec(v_unused_1703_);
v_unused_1704_ = lean_ctor_get(v_c_1264_, 4);
lean_dec(v_unused_1704_);
v_unused_1705_ = lean_ctor_get(v_c_1264_, 3);
lean_dec(v_unused_1705_);
v_unused_1706_ = lean_ctor_get(v_c_1264_, 2);
lean_dec(v_unused_1706_);
v_unused_1707_ = lean_ctor_get(v_c_1264_, 1);
lean_dec(v_unused_1707_);
v_unused_1708_ = lean_ctor_get(v_c_1264_, 0);
lean_dec(v_unused_1708_);
v___x_1697_ = v_c_1264_;
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
else
{
lean_dec(v_c_1264_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1700_; 
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 5, v_fst_1687_);
v___x_1700_ = v___x_1697_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v_fvarId_1676_);
lean_ctor_set(v_reuseFailAlloc_1701_, 1, v_i_1677_);
lean_ctor_set(v_reuseFailAlloc_1701_, 2, v_offset_1678_);
lean_ctor_set(v_reuseFailAlloc_1701_, 3, v_y_1679_);
lean_ctor_set(v_reuseFailAlloc_1701_, 4, v_ty_1680_);
lean_ctor_set(v_reuseFailAlloc_1701_, 5, v_fst_1687_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
v___y_1272_ = v___x_1700_;
goto v___jp_1271_;
}
}
}
else
{
lean_dec(v_fst_1687_);
v___y_1272_ = v_c_1264_;
goto v___jp_1271_;
}
}
}
}
else
{
lean_dec_ref(v_instr_1683_);
lean_dec_ref_known(v_c_1264_, 6);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
return v___x_1685_;
}
}
else
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
lean_dec_ref(v_instr_1683_);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
v___x_1788_ = lean_box(v___x_1684_);
v___x_1789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1789_, 0, v_c_1264_);
lean_ctor_set(v___x_1789_, 1, v___x_1788_);
v___x_1790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1789_);
return v___x_1790_;
}
}
default: 
{
lean_object* v___x_1791_; lean_object* v___x_1792_; 
lean_dec_ref(v_c_1264_);
lean_dec_ref(v_info_1263_);
lean_dec(v_x_1262_);
v___x_1791_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1);
v___x_1792_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v___x_1791_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_);
return v___x_1792_;
}
}
v___jp_1271_:
{
uint8_t v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1273_ = 1;
v___x_1274_ = lean_box(v___x_1273_);
v___x_1275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___y_1272_);
lean_ctor_set(v___x_1275_, 1, v___x_1274_);
v___x_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
return v___x_1276_;
}
v___jp_1277_:
{
uint8_t v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1279_ = 1;
v___x_1280_ = lean_box(v___x_1279_);
v___x_1281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___y_1278_);
lean_ctor_set(v___x_1281_, 1, v___x_1280_);
v___x_1282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1281_);
return v___x_1282_;
}
v___jp_1283_:
{
uint8_t v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1285_ = 1;
v___x_1286_ = lean_box(v___x_1285_);
v___x_1287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___y_1284_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
v___x_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
return v___x_1288_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(lean_object* v_x_1793_, lean_object* v_info_1794_, lean_object* v_c_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_){
_start:
{
lean_object* v___x_1802_; 
lean_inc_ref(v_info_1794_);
lean_inc(v_x_1793_);
v___x_1802_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1793_, v_info_1794_, v_c_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_);
if (lean_obj_tag(v___x_1802_) == 0)
{
lean_object* v_a_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1815_; 
v_a_1803_ = lean_ctor_get(v___x_1802_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1802_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1805_ = v___x_1802_;
v_isShared_1806_ = v_isSharedCheck_1815_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_a_1803_);
lean_dec(v___x_1802_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1815_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v_snd_1807_; uint8_t v___x_1808_; 
v_snd_1807_ = lean_ctor_get(v_a_1803_, 1);
v___x_1808_ = lean_unbox(v_snd_1807_);
if (v___x_1808_ == 0)
{
lean_object* v_fst_1809_; lean_object* v___x_1810_; 
lean_del_object(v___x_1805_);
v_fst_1809_ = lean_ctor_get(v_a_1803_, 0);
lean_inc(v_fst_1809_);
lean_dec(v_a_1803_);
v___x_1810_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1793_, v_info_1794_, v_fst_1809_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_);
lean_dec_ref(v_info_1794_);
return v___x_1810_;
}
else
{
lean_object* v_fst_1811_; lean_object* v___x_1813_; 
lean_dec_ref(v_info_1794_);
lean_dec(v_x_1793_);
v_fst_1811_ = lean_ctor_get(v_a_1803_, 0);
lean_inc(v_fst_1811_);
lean_dec(v_a_1803_);
if (v_isShared_1806_ == 0)
{
lean_ctor_set(v___x_1805_, 0, v_fst_1811_);
v___x_1813_ = v___x_1805_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_fst_1811_);
v___x_1813_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
return v___x_1813_;
}
}
}
}
else
{
lean_object* v_a_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1823_; 
lean_dec_ref(v_info_1794_);
lean_dec(v_x_1793_);
v_a_1816_ = lean_ctor_get(v___x_1802_, 0);
v_isSharedCheck_1823_ = !lean_is_exclusive(v___x_1802_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1818_ = v___x_1802_;
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_a_1816_);
lean_dec(v___x_1802_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v___x_1821_; 
if (v_isShared_1819_ == 0)
{
v___x_1821_ = v___x_1818_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v_a_1816_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1___boxed(lean_object* v_x_1824_, lean_object* v_info_1825_, lean_object* v_i_1826_, lean_object* v_as_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_){
_start:
{
lean_object* v_res_1834_; 
v_res_1834_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(v_x_1824_, v_info_1825_, v_i_1826_, v_as_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_);
lean_dec(v___y_1832_);
lean_dec_ref(v___y_1831_);
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec_ref(v___y_1828_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___boxed(lean_object* v_x_1835_, lean_object* v_info_1836_, lean_object* v_c_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1835_, v_info_1836_, v_c_1837_, v_a_1838_, v_a_1839_, v_a_1840_, v_a_1841_, v_a_1842_);
lean_dec(v_a_1842_);
lean_dec_ref(v_a_1841_);
lean_dec(v_a_1840_);
lean_dec_ref(v_a_1839_);
lean_dec_ref(v_a_1838_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0(uint8_t v_pu_1845_, lean_object* v_alt_1846_, lean_object* v_f_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
lean_object* v___x_1854_; 
v___x_1854_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_alt_1846_, v_f_1847_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___boxed(lean_object* v_pu_1855_, lean_object* v_alt_1856_, lean_object* v_f_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_){
_start:
{
uint8_t v_pu_boxed_1864_; lean_object* v_res_1865_; 
v_pu_boxed_1864_ = lean_unbox(v_pu_1855_);
v_res_1865_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0(v_pu_boxed_1864_, v_alt_1856_, v_f_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
lean_dec_ref(v___y_1858_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(lean_object* v_msg_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_){
_start:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v_toApplicative_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1909_; 
v___x_1873_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0);
v___x_1874_ = l_StateRefT_x27_instMonad___redArg(v___x_1873_);
v_toApplicative_1875_ = lean_ctor_get(v___x_1874_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1909_ == 0)
{
lean_object* v_unused_1910_; 
v_unused_1910_ = lean_ctor_get(v___x_1874_, 1);
lean_dec(v_unused_1910_);
v___x_1877_ = v___x_1874_;
v_isShared_1878_ = v_isSharedCheck_1909_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_toApplicative_1875_);
lean_dec(v___x_1874_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1909_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v_toFunctor_1879_; lean_object* v_toSeq_1880_; lean_object* v_toSeqLeft_1881_; lean_object* v_toSeqRight_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1907_; 
v_toFunctor_1879_ = lean_ctor_get(v_toApplicative_1875_, 0);
v_toSeq_1880_ = lean_ctor_get(v_toApplicative_1875_, 2);
v_toSeqLeft_1881_ = lean_ctor_get(v_toApplicative_1875_, 3);
v_toSeqRight_1882_ = lean_ctor_get(v_toApplicative_1875_, 4);
v_isSharedCheck_1907_ = !lean_is_exclusive(v_toApplicative_1875_);
if (v_isSharedCheck_1907_ == 0)
{
lean_object* v_unused_1908_; 
v_unused_1908_ = lean_ctor_get(v_toApplicative_1875_, 1);
lean_dec(v_unused_1908_);
v___x_1884_ = v_toApplicative_1875_;
v_isShared_1885_ = v_isSharedCheck_1907_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_toSeqRight_1882_);
lean_inc(v_toSeqLeft_1881_);
lean_inc(v_toSeq_1880_);
lean_inc(v_toFunctor_1879_);
lean_dec(v_toApplicative_1875_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1907_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___f_1886_; lean_object* v___f_1887_; lean_object* v___f_1888_; lean_object* v___f_1889_; lean_object* v___x_1890_; lean_object* v___f_1891_; lean_object* v___f_1892_; lean_object* v___f_1893_; lean_object* v___x_1895_; 
v___f_1886_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_1887_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
lean_inc_ref(v_toFunctor_1879_);
v___f_1888_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1888_, 0, v_toFunctor_1879_);
v___f_1889_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1889_, 0, v_toFunctor_1879_);
v___x_1890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1890_, 0, v___f_1888_);
lean_ctor_set(v___x_1890_, 1, v___f_1889_);
v___f_1891_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1891_, 0, v_toSeqRight_1882_);
v___f_1892_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1892_, 0, v_toSeqLeft_1881_);
v___f_1893_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1893_, 0, v_toSeq_1880_);
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 4, v___f_1891_);
lean_ctor_set(v___x_1884_, 3, v___f_1892_);
lean_ctor_set(v___x_1884_, 2, v___f_1893_);
lean_ctor_set(v___x_1884_, 1, v___f_1886_);
lean_ctor_set(v___x_1884_, 0, v___x_1890_);
v___x_1895_ = v___x_1884_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v___x_1890_);
lean_ctor_set(v_reuseFailAlloc_1906_, 1, v___f_1886_);
lean_ctor_set(v_reuseFailAlloc_1906_, 2, v___f_1893_);
lean_ctor_set(v_reuseFailAlloc_1906_, 3, v___f_1892_);
lean_ctor_set(v_reuseFailAlloc_1906_, 4, v___f_1891_);
v___x_1895_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
lean_object* v___x_1897_; 
if (v_isShared_1878_ == 0)
{
lean_ctor_set(v___x_1877_, 1, v___f_1887_);
lean_ctor_set(v___x_1877_, 0, v___x_1895_);
v___x_1897_ = v___x_1877_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v___x_1895_);
lean_ctor_set(v_reuseFailAlloc_1905_, 1, v___f_1887_);
v___x_1897_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___f_1901_; lean_object* v___f_1902_; lean_object* v___x_5104__overap_1903_; lean_object* v___x_1904_; 
v___x_1898_ = l_StateRefT_x27_instMonad___redArg(v___x_1897_);
v___x_1899_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0);
v___x_1900_ = l_instInhabitedOfMonad___redArg(v___x_1898_, v___x_1899_);
v___f_1901_ = lean_alloc_closure((void*)(l_instInhabitedReaderT___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1901_, 0, v___x_1900_);
v___f_1902_ = lean_alloc_closure((void*)(l_instInhabitedReaderT___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1902_, 0, v___f_1901_);
v___x_5104__overap_1903_ = lean_panic_fn_borrowed(v___f_1902_, v_msg_1866_);
lean_dec_ref(v___f_1902_);
lean_inc(v___y_1871_);
lean_inc_ref(v___y_1870_);
lean_inc(v___y_1869_);
lean_inc_ref(v___y_1868_);
lean_inc_ref(v___y_1867_);
v___x_1904_ = lean_apply_6(v___x_5104__overap_1903_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, lean_box(0));
return v___x_1904_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4___boxed(lean_object* v_msg_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_){
_start:
{
lean_object* v_res_1918_; 
v_res_1918_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(v_msg_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_);
lean_dec(v___y_1916_);
lean_dec_ref(v___y_1915_);
lean_dec(v___y_1914_);
lean_dec_ref(v___y_1913_);
lean_dec_ref(v___y_1912_);
return v_res_1918_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(lean_object* v_a_1919_, lean_object* v_fallback_1920_, lean_object* v_x_1921_){
_start:
{
if (lean_obj_tag(v_x_1921_) == 0)
{
lean_inc(v_fallback_1920_);
return v_fallback_1920_;
}
else
{
lean_object* v_key_1922_; lean_object* v_value_1923_; lean_object* v_tail_1924_; uint8_t v___x_1925_; 
v_key_1922_ = lean_ctor_get(v_x_1921_, 0);
v_value_1923_ = lean_ctor_get(v_x_1921_, 1);
v_tail_1924_ = lean_ctor_get(v_x_1921_, 2);
v___x_1925_ = l_Lean_instBEqFVarId_beq(v_key_1922_, v_a_1919_);
if (v___x_1925_ == 0)
{
v_x_1921_ = v_tail_1924_;
goto _start;
}
else
{
lean_inc(v_value_1923_);
return v_value_1923_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg___boxed(lean_object* v_a_1927_, lean_object* v_fallback_1928_, lean_object* v_x_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_1927_, v_fallback_1928_, v_x_1929_);
lean_dec(v_x_1929_);
lean_dec(v_fallback_1928_);
lean_dec(v_a_1927_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(lean_object* v_m_1931_, lean_object* v_a_1932_, lean_object* v_fallback_1933_){
_start:
{
lean_object* v_buckets_1934_; lean_object* v___x_1935_; uint64_t v___x_1936_; uint64_t v___x_1937_; uint64_t v___x_1938_; uint64_t v_fold_1939_; uint64_t v___x_1940_; uint64_t v___x_1941_; uint64_t v___x_1942_; size_t v___x_1943_; size_t v___x_1944_; size_t v___x_1945_; size_t v___x_1946_; size_t v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; 
v_buckets_1934_ = lean_ctor_get(v_m_1931_, 1);
v___x_1935_ = lean_array_get_size(v_buckets_1934_);
v___x_1936_ = l_Lean_instHashableFVarId_hash(v_a_1932_);
v___x_1937_ = 32ULL;
v___x_1938_ = lean_uint64_shift_right(v___x_1936_, v___x_1937_);
v_fold_1939_ = lean_uint64_xor(v___x_1936_, v___x_1938_);
v___x_1940_ = 16ULL;
v___x_1941_ = lean_uint64_shift_right(v_fold_1939_, v___x_1940_);
v___x_1942_ = lean_uint64_xor(v_fold_1939_, v___x_1941_);
v___x_1943_ = lean_uint64_to_usize(v___x_1942_);
v___x_1944_ = lean_usize_of_nat(v___x_1935_);
v___x_1945_ = ((size_t)1ULL);
v___x_1946_ = lean_usize_sub(v___x_1944_, v___x_1945_);
v___x_1947_ = lean_usize_land(v___x_1943_, v___x_1946_);
v___x_1948_ = lean_array_uget_borrowed(v_buckets_1934_, v___x_1947_);
v___x_1949_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_1932_, v_fallback_1933_, v___x_1948_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg___boxed(lean_object* v_m_1950_, lean_object* v_a_1951_, lean_object* v_fallback_1952_){
_start:
{
lean_object* v_res_1953_; 
v_res_1953_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_m_1950_, v_a_1951_, v_fallback_1952_);
lean_dec(v_fallback_1952_);
lean_dec(v_a_1951_);
lean_dec_ref(v_m_1950_);
return v_res_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(lean_object* v_x_1954_, lean_object* v_x_1955_, lean_object* v_x_1956_, lean_object* v_x_1957_){
_start:
{
lean_object* v_ks_1958_; lean_object* v_vs_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1983_; 
v_ks_1958_ = lean_ctor_get(v_x_1954_, 0);
v_vs_1959_ = lean_ctor_get(v_x_1954_, 1);
v_isSharedCheck_1983_ = !lean_is_exclusive(v_x_1954_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1961_ = v_x_1954_;
v_isShared_1962_ = v_isSharedCheck_1983_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_vs_1959_);
lean_inc(v_ks_1958_);
lean_dec(v_x_1954_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1983_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1963_; uint8_t v___x_1964_; 
v___x_1963_ = lean_array_get_size(v_ks_1958_);
v___x_1964_ = lean_nat_dec_lt(v_x_1955_, v___x_1963_);
if (v___x_1964_ == 0)
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1968_; 
lean_dec(v_x_1955_);
v___x_1965_ = lean_array_push(v_ks_1958_, v_x_1956_);
v___x_1966_ = lean_array_push(v_vs_1959_, v_x_1957_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 1, v___x_1966_);
lean_ctor_set(v___x_1961_, 0, v___x_1965_);
v___x_1968_ = v___x_1961_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v___x_1965_);
lean_ctor_set(v_reuseFailAlloc_1969_, 1, v___x_1966_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
else
{
lean_object* v_k_x27_1970_; uint8_t v___x_1971_; 
v_k_x27_1970_ = lean_array_fget_borrowed(v_ks_1958_, v_x_1955_);
v___x_1971_ = l_Lean_instBEqFVarId_beq(v_x_1956_, v_k_x27_1970_);
if (v___x_1971_ == 0)
{
lean_object* v___x_1973_; 
if (v_isShared_1962_ == 0)
{
v___x_1973_ = v___x_1961_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_ks_1958_);
lean_ctor_set(v_reuseFailAlloc_1977_, 1, v_vs_1959_);
v___x_1973_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1974_ = lean_unsigned_to_nat(1u);
v___x_1975_ = lean_nat_add(v_x_1955_, v___x_1974_);
lean_dec(v_x_1955_);
v_x_1954_ = v___x_1973_;
v_x_1955_ = v___x_1975_;
goto _start;
}
}
else
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1981_; 
v___x_1978_ = lean_array_fset(v_ks_1958_, v_x_1955_, v_x_1956_);
v___x_1979_ = lean_array_fset(v_vs_1959_, v_x_1955_, v_x_1957_);
lean_dec(v_x_1955_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 1, v___x_1979_);
lean_ctor_set(v___x_1961_, 0, v___x_1978_);
v___x_1981_ = v___x_1961_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v___x_1978_);
lean_ctor_set(v_reuseFailAlloc_1982_, 1, v___x_1979_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(lean_object* v_n_1984_, lean_object* v_k_1985_, lean_object* v_v_1986_){
_start:
{
lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1987_ = lean_unsigned_to_nat(0u);
v___x_1988_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(v_n_1984_, v___x_1987_, v_k_1985_, v_v_1986_);
return v___x_1988_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_1989_; 
v___x_1989_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(lean_object* v_x_1990_, size_t v_x_1991_, size_t v_x_1992_, lean_object* v_x_1993_, lean_object* v_x_1994_){
_start:
{
if (lean_obj_tag(v_x_1990_) == 0)
{
lean_object* v_es_1995_; size_t v___x_1996_; size_t v___x_1997_; lean_object* v_j_1998_; lean_object* v___x_1999_; uint8_t v___x_2000_; 
v_es_1995_ = lean_ctor_get(v_x_1990_, 0);
v___x_1996_ = ((size_t)31ULL);
v___x_1997_ = lean_usize_land(v_x_1991_, v___x_1996_);
v_j_1998_ = lean_usize_to_nat(v___x_1997_);
v___x_1999_ = lean_array_get_size(v_es_1995_);
v___x_2000_ = lean_nat_dec_lt(v_j_1998_, v___x_1999_);
if (v___x_2000_ == 0)
{
lean_dec(v_j_1998_);
lean_dec(v_x_1994_);
lean_dec(v_x_1993_);
return v_x_1990_;
}
else
{
lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2039_; 
lean_inc_ref(v_es_1995_);
v_isSharedCheck_2039_ = !lean_is_exclusive(v_x_1990_);
if (v_isSharedCheck_2039_ == 0)
{
lean_object* v_unused_2040_; 
v_unused_2040_ = lean_ctor_get(v_x_1990_, 0);
lean_dec(v_unused_2040_);
v___x_2002_ = v_x_1990_;
v_isShared_2003_ = v_isSharedCheck_2039_;
goto v_resetjp_2001_;
}
else
{
lean_dec(v_x_1990_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2039_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v_v_2004_; lean_object* v___x_2005_; lean_object* v_xs_x27_2006_; lean_object* v___y_2008_; 
v_v_2004_ = lean_array_fget(v_es_1995_, v_j_1998_);
v___x_2005_ = lean_box(0);
v_xs_x27_2006_ = lean_array_fset(v_es_1995_, v_j_1998_, v___x_2005_);
switch(lean_obj_tag(v_v_2004_))
{
case 0:
{
lean_object* v_key_2013_; lean_object* v_val_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2024_; 
v_key_2013_ = lean_ctor_get(v_v_2004_, 0);
v_val_2014_ = lean_ctor_get(v_v_2004_, 1);
v_isSharedCheck_2024_ = !lean_is_exclusive(v_v_2004_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2016_ = v_v_2004_;
v_isShared_2017_ = v_isSharedCheck_2024_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_val_2014_);
lean_inc(v_key_2013_);
lean_dec(v_v_2004_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2024_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
uint8_t v___x_2018_; 
v___x_2018_ = l_Lean_instBEqFVarId_beq(v_x_1993_, v_key_2013_);
if (v___x_2018_ == 0)
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
lean_del_object(v___x_2016_);
v___x_2019_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2013_, v_val_2014_, v_x_1993_, v_x_1994_);
v___x_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2019_);
v___y_2008_ = v___x_2020_;
goto v___jp_2007_;
}
else
{
lean_object* v___x_2022_; 
lean_dec(v_val_2014_);
lean_dec(v_key_2013_);
if (v_isShared_2017_ == 0)
{
lean_ctor_set(v___x_2016_, 1, v_x_1994_);
lean_ctor_set(v___x_2016_, 0, v_x_1993_);
v___x_2022_ = v___x_2016_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_x_1993_);
lean_ctor_set(v_reuseFailAlloc_2023_, 1, v_x_1994_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
v___y_2008_ = v___x_2022_;
goto v___jp_2007_;
}
}
}
}
case 1:
{
lean_object* v_node_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2037_; 
v_node_2025_ = lean_ctor_get(v_v_2004_, 0);
v_isSharedCheck_2037_ = !lean_is_exclusive(v_v_2004_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2027_ = v_v_2004_;
v_isShared_2028_ = v_isSharedCheck_2037_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_node_2025_);
lean_dec(v_v_2004_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2037_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
size_t v___x_2029_; size_t v___x_2030_; size_t v___x_2031_; size_t v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2035_; 
v___x_2029_ = ((size_t)5ULL);
v___x_2030_ = lean_usize_shift_right(v_x_1991_, v___x_2029_);
v___x_2031_ = ((size_t)1ULL);
v___x_2032_ = lean_usize_add(v_x_1992_, v___x_2031_);
v___x_2033_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_node_2025_, v___x_2030_, v___x_2032_, v_x_1993_, v_x_1994_);
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 0, v___x_2033_);
v___x_2035_ = v___x_2027_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v___x_2033_);
v___x_2035_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
v___y_2008_ = v___x_2035_;
goto v___jp_2007_;
}
}
}
default: 
{
lean_object* v___x_2038_; 
v___x_2038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2038_, 0, v_x_1993_);
lean_ctor_set(v___x_2038_, 1, v_x_1994_);
v___y_2008_ = v___x_2038_;
goto v___jp_2007_;
}
}
v___jp_2007_:
{
lean_object* v___x_2009_; lean_object* v___x_2011_; 
v___x_2009_ = lean_array_fset(v_xs_x27_2006_, v_j_1998_, v___y_2008_);
lean_dec(v_j_1998_);
if (v_isShared_2003_ == 0)
{
lean_ctor_set(v___x_2002_, 0, v___x_2009_);
v___x_2011_ = v___x_2002_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v___x_2009_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
}
else
{
lean_object* v_ks_2041_; lean_object* v_vs_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2060_; 
v_ks_2041_ = lean_ctor_get(v_x_1990_, 0);
v_vs_2042_ = lean_ctor_get(v_x_1990_, 1);
v_isSharedCheck_2060_ = !lean_is_exclusive(v_x_1990_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2044_ = v_x_1990_;
v_isShared_2045_ = v_isSharedCheck_2060_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_vs_2042_);
lean_inc(v_ks_2041_);
lean_dec(v_x_1990_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2060_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___x_2047_; 
if (v_isShared_2045_ == 0)
{
v___x_2047_ = v___x_2044_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_ks_2041_);
lean_ctor_set(v_reuseFailAlloc_2059_, 1, v_vs_2042_);
v___x_2047_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
lean_object* v_newNode_2048_; size_t v___x_2049_; uint8_t v___x_2050_; 
v_newNode_2048_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(v___x_2047_, v_x_1993_, v_x_1994_);
v___x_2049_ = ((size_t)7ULL);
v___x_2050_ = lean_usize_dec_le(v___x_2049_, v_x_1992_);
if (v___x_2050_ == 0)
{
lean_object* v___x_2051_; lean_object* v___x_2052_; uint8_t v___x_2053_; 
v___x_2051_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2048_);
v___x_2052_ = lean_unsigned_to_nat(4u);
v___x_2053_ = lean_nat_dec_lt(v___x_2051_, v___x_2052_);
lean_dec(v___x_2051_);
if (v___x_2053_ == 0)
{
lean_object* v_ks_2054_; lean_object* v_vs_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; 
v_ks_2054_ = lean_ctor_get(v_newNode_2048_, 0);
lean_inc_ref(v_ks_2054_);
v_vs_2055_ = lean_ctor_get(v_newNode_2048_, 1);
lean_inc_ref(v_vs_2055_);
lean_dec_ref(v_newNode_2048_);
v___x_2056_ = lean_unsigned_to_nat(0u);
v___x_2057_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0);
v___x_2058_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_x_1992_, v_ks_2054_, v_vs_2055_, v___x_2056_, v___x_2057_);
lean_dec_ref(v_vs_2055_);
lean_dec_ref(v_ks_2054_);
return v___x_2058_;
}
else
{
return v_newNode_2048_;
}
}
else
{
return v_newNode_2048_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(size_t v_depth_2061_, lean_object* v_keys_2062_, lean_object* v_vals_2063_, lean_object* v_i_2064_, lean_object* v_entries_2065_){
_start:
{
lean_object* v___x_2066_; uint8_t v___x_2067_; 
v___x_2066_ = lean_array_get_size(v_keys_2062_);
v___x_2067_ = lean_nat_dec_lt(v_i_2064_, v___x_2066_);
if (v___x_2067_ == 0)
{
lean_dec(v_i_2064_);
return v_entries_2065_;
}
else
{
lean_object* v_k_2068_; lean_object* v_v_2069_; uint64_t v___x_2070_; size_t v_h_2071_; size_t v___x_2072_; lean_object* v___x_2073_; size_t v___x_2074_; size_t v___x_2075_; size_t v___x_2076_; size_t v_h_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v_k_2068_ = lean_array_fget_borrowed(v_keys_2062_, v_i_2064_);
v_v_2069_ = lean_array_fget_borrowed(v_vals_2063_, v_i_2064_);
v___x_2070_ = l_Lean_instHashableFVarId_hash(v_k_2068_);
v_h_2071_ = lean_uint64_to_usize(v___x_2070_);
v___x_2072_ = ((size_t)5ULL);
v___x_2073_ = lean_unsigned_to_nat(1u);
v___x_2074_ = ((size_t)1ULL);
v___x_2075_ = lean_usize_sub(v_depth_2061_, v___x_2074_);
v___x_2076_ = lean_usize_mul(v___x_2072_, v___x_2075_);
v_h_2077_ = lean_usize_shift_right(v_h_2071_, v___x_2076_);
v___x_2078_ = lean_nat_add(v_i_2064_, v___x_2073_);
lean_dec(v_i_2064_);
lean_inc(v_v_2069_);
lean_inc(v_k_2068_);
v___x_2079_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_entries_2065_, v_h_2077_, v_depth_2061_, v_k_2068_, v_v_2069_);
v_i_2064_ = v___x_2078_;
v_entries_2065_ = v___x_2079_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_depth_2081_, lean_object* v_keys_2082_, lean_object* v_vals_2083_, lean_object* v_i_2084_, lean_object* v_entries_2085_){
_start:
{
size_t v_depth_boxed_2086_; lean_object* v_res_2087_; 
v_depth_boxed_2086_ = lean_unbox_usize(v_depth_2081_);
lean_dec(v_depth_2081_);
v_res_2087_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_depth_boxed_2086_, v_keys_2082_, v_vals_2083_, v_i_2084_, v_entries_2085_);
lean_dec_ref(v_vals_2083_);
lean_dec_ref(v_keys_2082_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___boxed(lean_object* v_x_2088_, lean_object* v_x_2089_, lean_object* v_x_2090_, lean_object* v_x_2091_, lean_object* v_x_2092_){
_start:
{
size_t v_x_5747__boxed_2093_; size_t v_x_5748__boxed_2094_; lean_object* v_res_2095_; 
v_x_5747__boxed_2093_ = lean_unbox_usize(v_x_2089_);
lean_dec(v_x_2089_);
v_x_5748__boxed_2094_ = lean_unbox_usize(v_x_2090_);
lean_dec(v_x_2090_);
v_res_2095_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2088_, v_x_5747__boxed_2093_, v_x_5748__boxed_2094_, v_x_2091_, v_x_2092_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(lean_object* v_x_2096_, lean_object* v_x_2097_, lean_object* v_x_2098_){
_start:
{
uint64_t v___x_2099_; size_t v___x_2100_; size_t v___x_2101_; lean_object* v___x_2102_; 
v___x_2099_ = l_Lean_instHashableFVarId_hash(v_x_2097_);
v___x_2100_ = lean_uint64_to_usize(v___x_2099_);
v___x_2101_ = ((size_t)1ULL);
v___x_2102_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2096_, v___x_2100_, v___x_2101_, v_x_2097_, v_x_2098_);
return v___x_2102_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_2103_, lean_object* v_i_2104_, lean_object* v_k_2105_){
_start:
{
lean_object* v___x_2106_; uint8_t v___x_2107_; 
v___x_2106_ = lean_array_get_size(v_keys_2103_);
v___x_2107_ = lean_nat_dec_lt(v_i_2104_, v___x_2106_);
if (v___x_2107_ == 0)
{
lean_dec(v_i_2104_);
return v___x_2107_;
}
else
{
lean_object* v_k_x27_2108_; uint8_t v___x_2109_; 
v_k_x27_2108_ = lean_array_fget_borrowed(v_keys_2103_, v_i_2104_);
v___x_2109_ = l_Lean_instBEqFVarId_beq(v_k_2105_, v_k_x27_2108_);
if (v___x_2109_ == 0)
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2110_ = lean_unsigned_to_nat(1u);
v___x_2111_ = lean_nat_add(v_i_2104_, v___x_2110_);
lean_dec(v_i_2104_);
v_i_2104_ = v___x_2111_;
goto _start;
}
else
{
lean_dec(v_i_2104_);
return v___x_2107_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_2113_, lean_object* v_i_2114_, lean_object* v_k_2115_){
_start:
{
uint8_t v_res_2116_; lean_object* v_r_2117_; 
v_res_2116_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_keys_2113_, v_i_2114_, v_k_2115_);
lean_dec(v_k_2115_);
lean_dec_ref(v_keys_2113_);
v_r_2117_ = lean_box(v_res_2116_);
return v_r_2117_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(lean_object* v_x_2118_, size_t v_x_2119_, lean_object* v_x_2120_){
_start:
{
if (lean_obj_tag(v_x_2118_) == 0)
{
lean_object* v_es_2121_; lean_object* v___x_2122_; size_t v___x_2123_; size_t v___x_2124_; lean_object* v_j_2125_; lean_object* v___x_2126_; 
v_es_2121_ = lean_ctor_get(v_x_2118_, 0);
v___x_2122_ = lean_box(2);
v___x_2123_ = ((size_t)31ULL);
v___x_2124_ = lean_usize_land(v_x_2119_, v___x_2123_);
v_j_2125_ = lean_usize_to_nat(v___x_2124_);
v___x_2126_ = lean_array_get_borrowed(v___x_2122_, v_es_2121_, v_j_2125_);
lean_dec(v_j_2125_);
switch(lean_obj_tag(v___x_2126_))
{
case 0:
{
lean_object* v_key_2127_; uint8_t v___x_2128_; 
v_key_2127_ = lean_ctor_get(v___x_2126_, 0);
v___x_2128_ = l_Lean_instBEqFVarId_beq(v_x_2120_, v_key_2127_);
return v___x_2128_;
}
case 1:
{
lean_object* v_node_2129_; size_t v___x_2130_; size_t v___x_2131_; 
v_node_2129_ = lean_ctor_get(v___x_2126_, 0);
v___x_2130_ = ((size_t)5ULL);
v___x_2131_ = lean_usize_shift_right(v_x_2119_, v___x_2130_);
v_x_2118_ = v_node_2129_;
v_x_2119_ = v___x_2131_;
goto _start;
}
default: 
{
uint8_t v___x_2133_; 
v___x_2133_ = 0;
return v___x_2133_;
}
}
}
else
{
lean_object* v_ks_2134_; lean_object* v___x_2135_; uint8_t v___x_2136_; 
v_ks_2134_ = lean_ctor_get(v_x_2118_, 0);
v___x_2135_ = lean_unsigned_to_nat(0u);
v___x_2136_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_ks_2134_, v___x_2135_, v_x_2120_);
return v___x_2136_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg___boxed(lean_object* v_x_2137_, lean_object* v_x_2138_, lean_object* v_x_2139_){
_start:
{
size_t v_x_5925__boxed_2140_; uint8_t v_res_2141_; lean_object* v_r_2142_; 
v_x_5925__boxed_2140_ = lean_unbox_usize(v_x_2138_);
lean_dec(v_x_2138_);
v_res_2141_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2137_, v_x_5925__boxed_2140_, v_x_2139_);
lean_dec(v_x_2139_);
lean_dec_ref(v_x_2137_);
v_r_2142_ = lean_box(v_res_2141_);
return v_r_2142_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(lean_object* v_x_2143_, lean_object* v_x_2144_){
_start:
{
uint64_t v___x_2145_; size_t v___x_2146_; uint8_t v___x_2147_; 
v___x_2145_ = l_Lean_instHashableFVarId_hash(v_x_2144_);
v___x_2146_ = lean_uint64_to_usize(v___x_2145_);
v___x_2147_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2143_, v___x_2146_, v_x_2144_);
return v___x_2147_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg___boxed(lean_object* v_x_2148_, lean_object* v_x_2149_){
_start:
{
uint8_t v_res_2150_; lean_object* v_r_2151_; 
v_res_2150_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_x_2148_, v_x_2149_);
lean_dec(v_x_2149_);
lean_dec_ref(v_x_2148_);
v_r_2151_ = lean_box(v_res_2150_);
return v_r_2151_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1(void){
_start:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2153_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_2154_ = lean_unsigned_to_nat(59u);
v___x_2155_ = lean_unsigned_to_nat(281u);
v___x_2156_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0));
v___x_2157_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_2158_ = l_mkPanicMessageWithDecl(v___x_2157_, v___x_2156_, v___x_2155_, v___x_2154_, v___x_2153_);
return v___x_2158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(lean_object* v_c_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_){
_start:
{
switch(lean_obj_tag(v_c_2159_))
{
case 0:
{
lean_object* v_decl_2166_; lean_object* v_k_2167_; lean_object* v___x_2168_; 
v_decl_2166_ = lean_ctor_get(v_c_2159_, 0);
v_k_2167_ = lean_ctor_get(v_c_2159_, 1);
lean_inc_ref(v_k_2167_);
v___x_2168_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2167_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_);
if (lean_obj_tag(v___x_2168_) == 0)
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2191_; 
v_a_2169_ = lean_ctor_get(v___x_2168_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2168_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2171_ = v___x_2168_;
v_isShared_2172_ = v_isSharedCheck_2191_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v___x_2168_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2191_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
size_t v___x_2173_; size_t v___x_2174_; uint8_t v___x_2175_; 
v___x_2173_ = lean_ptr_addr(v_k_2167_);
v___x_2174_ = lean_ptr_addr(v_a_2169_);
v___x_2175_ = lean_usize_dec_eq(v___x_2173_, v___x_2174_);
if (v___x_2175_ == 0)
{
lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2185_; 
lean_inc_ref(v_decl_2166_);
v_isSharedCheck_2185_ = !lean_is_exclusive(v_c_2159_);
if (v_isSharedCheck_2185_ == 0)
{
lean_object* v_unused_2186_; lean_object* v_unused_2187_; 
v_unused_2186_ = lean_ctor_get(v_c_2159_, 1);
lean_dec(v_unused_2186_);
v_unused_2187_ = lean_ctor_get(v_c_2159_, 0);
lean_dec(v_unused_2187_);
v___x_2177_ = v_c_2159_;
v_isShared_2178_ = v_isSharedCheck_2185_;
goto v_resetjp_2176_;
}
else
{
lean_dec(v_c_2159_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2185_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2180_; 
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 1, v_a_2169_);
v___x_2180_ = v___x_2177_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v_decl_2166_);
lean_ctor_set(v_reuseFailAlloc_2184_, 1, v_a_2169_);
v___x_2180_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
lean_object* v___x_2182_; 
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 0, v___x_2180_);
v___x_2182_ = v___x_2171_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v___x_2180_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
}
}
else
{
lean_object* v___x_2189_; 
lean_dec(v_a_2169_);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 0, v_c_2159_);
v___x_2189_ = v___x_2171_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_c_2159_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2159_, 2);
return v___x_2168_;
}
}
case 2:
{
lean_object* v_decl_2192_; lean_object* v_k_2193_; lean_object* v_params_2194_; lean_object* v_type_2195_; lean_object* v_value_2196_; uint8_t v___x_2197_; lean_object* v___x_2198_; 
v_decl_2192_ = lean_ctor_get(v_c_2159_, 0);
v_k_2193_ = lean_ctor_get(v_c_2159_, 1);
v_params_2194_ = lean_ctor_get(v_decl_2192_, 2);
v_type_2195_ = lean_ctor_get(v_decl_2192_, 3);
v_value_2196_ = lean_ctor_get(v_decl_2192_, 4);
v___x_2197_ = 1;
lean_inc_ref(v_value_2196_);
v___x_2198_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_value_2196_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_);
if (lean_obj_tag(v___x_2198_) == 0)
{
lean_object* v_a_2199_; lean_object* v___x_2200_; 
v_a_2199_ = lean_ctor_get(v___x_2198_, 0);
lean_inc(v_a_2199_);
lean_dec_ref_known(v___x_2198_, 1);
lean_inc_ref(v_params_2194_);
lean_inc_ref(v_type_2195_);
lean_inc_ref(v_decl_2192_);
v___x_2200_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_2197_, v_decl_2192_, v_type_2195_, v_params_2194_, v_a_2199_, v_a_2162_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v_a_2201_; lean_object* v___x_2202_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_a_2201_);
lean_dec_ref_known(v___x_2200_, 1);
lean_inc_ref(v_k_2193_);
v___x_2202_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2193_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_);
if (lean_obj_tag(v___x_2202_) == 0)
{
lean_object* v_a_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2240_; 
v_a_2203_ = lean_ctor_get(v___x_2202_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___x_2202_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2205_ = v___x_2202_;
v_isShared_2206_ = v_isSharedCheck_2240_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_a_2203_);
lean_dec(v___x_2202_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2240_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
size_t v___x_2207_; size_t v___x_2208_; uint8_t v___x_2209_; 
v___x_2207_ = lean_ptr_addr(v_k_2193_);
v___x_2208_ = lean_ptr_addr(v_a_2203_);
v___x_2209_ = lean_usize_dec_eq(v___x_2207_, v___x_2208_);
if (v___x_2209_ == 0)
{
lean_object* v___x_2211_; uint8_t v_isShared_2212_; uint8_t v_isSharedCheck_2219_; 
v_isSharedCheck_2219_ = !lean_is_exclusive(v_c_2159_);
if (v_isSharedCheck_2219_ == 0)
{
lean_object* v_unused_2220_; lean_object* v_unused_2221_; 
v_unused_2220_ = lean_ctor_get(v_c_2159_, 1);
lean_dec(v_unused_2220_);
v_unused_2221_ = lean_ctor_get(v_c_2159_, 0);
lean_dec(v_unused_2221_);
v___x_2211_ = v_c_2159_;
v_isShared_2212_ = v_isSharedCheck_2219_;
goto v_resetjp_2210_;
}
else
{
lean_dec(v_c_2159_);
v___x_2211_ = lean_box(0);
v_isShared_2212_ = v_isSharedCheck_2219_;
goto v_resetjp_2210_;
}
v_resetjp_2210_:
{
lean_object* v___x_2214_; 
if (v_isShared_2212_ == 0)
{
lean_ctor_set(v___x_2211_, 1, v_a_2203_);
lean_ctor_set(v___x_2211_, 0, v_a_2201_);
v___x_2214_ = v___x_2211_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_a_2201_);
lean_ctor_set(v_reuseFailAlloc_2218_, 1, v_a_2203_);
v___x_2214_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
lean_object* v___x_2216_; 
if (v_isShared_2206_ == 0)
{
lean_ctor_set(v___x_2205_, 0, v___x_2214_);
v___x_2216_ = v___x_2205_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v___x_2214_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
}
else
{
size_t v___x_2222_; size_t v___x_2223_; uint8_t v___x_2224_; 
v___x_2222_ = lean_ptr_addr(v_decl_2192_);
v___x_2223_ = lean_ptr_addr(v_a_2201_);
v___x_2224_ = lean_usize_dec_eq(v___x_2222_, v___x_2223_);
if (v___x_2224_ == 0)
{
lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2234_; 
v_isSharedCheck_2234_ = !lean_is_exclusive(v_c_2159_);
if (v_isSharedCheck_2234_ == 0)
{
lean_object* v_unused_2235_; lean_object* v_unused_2236_; 
v_unused_2235_ = lean_ctor_get(v_c_2159_, 1);
lean_dec(v_unused_2235_);
v_unused_2236_ = lean_ctor_get(v_c_2159_, 0);
lean_dec(v_unused_2236_);
v___x_2226_ = v_c_2159_;
v_isShared_2227_ = v_isSharedCheck_2234_;
goto v_resetjp_2225_;
}
else
{
lean_dec(v_c_2159_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2234_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2229_; 
if (v_isShared_2227_ == 0)
{
lean_ctor_set(v___x_2226_, 1, v_a_2203_);
lean_ctor_set(v___x_2226_, 0, v_a_2201_);
v___x_2229_ = v___x_2226_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2201_);
lean_ctor_set(v_reuseFailAlloc_2233_, 1, v_a_2203_);
v___x_2229_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
lean_object* v___x_2231_; 
if (v_isShared_2206_ == 0)
{
lean_ctor_set(v___x_2205_, 0, v___x_2229_);
v___x_2231_ = v___x_2205_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v___x_2229_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
return v___x_2231_;
}
}
}
}
else
{
lean_object* v___x_2238_; 
lean_dec(v_a_2203_);
lean_dec(v_a_2201_);
if (v_isShared_2206_ == 0)
{
lean_ctor_set(v___x_2205_, 0, v_c_2159_);
v___x_2238_ = v___x_2205_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v_c_2159_);
v___x_2238_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
return v___x_2238_;
}
}
}
}
}
else
{
lean_dec(v_a_2201_);
lean_dec_ref_known(v_c_2159_, 2);
return v___x_2202_;
}
}
else
{
lean_object* v_a_2241_; lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2248_; 
lean_dec_ref_known(v_c_2159_, 2);
v_a_2241_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2248_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2248_ == 0)
{
v___x_2243_ = v___x_2200_;
v_isShared_2244_ = v_isSharedCheck_2248_;
goto v_resetjp_2242_;
}
else
{
lean_inc(v_a_2241_);
lean_dec(v___x_2200_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2248_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
lean_object* v___x_2246_; 
if (v_isShared_2244_ == 0)
{
v___x_2246_ = v___x_2243_;
goto v_reusejp_2245_;
}
else
{
lean_object* v_reuseFailAlloc_2247_; 
v_reuseFailAlloc_2247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2247_, 0, v_a_2241_);
v___x_2246_ = v_reuseFailAlloc_2247_;
goto v_reusejp_2245_;
}
v_reusejp_2245_:
{
return v___x_2246_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2159_, 2);
return v___x_2198_;
}
}
case 3:
{
lean_object* v___x_2249_; 
v___x_2249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2249_, 0, v_c_2159_);
return v___x_2249_;
}
case 4:
{
lean_object* v_cases_2250_; lean_object* v_typeName_2251_; lean_object* v_resultType_2252_; lean_object* v_discr_2253_; lean_object* v_alts_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2307_; 
v_cases_2250_ = lean_ctor_get(v_c_2159_, 0);
lean_inc_ref(v_cases_2250_);
v_typeName_2251_ = lean_ctor_get(v_cases_2250_, 0);
v_resultType_2252_ = lean_ctor_get(v_cases_2250_, 1);
v_discr_2253_ = lean_ctor_get(v_cases_2250_, 2);
v_alts_2254_ = lean_ctor_get(v_cases_2250_, 3);
v_isSharedCheck_2307_ = !lean_is_exclusive(v_cases_2250_);
if (v_isSharedCheck_2307_ == 0)
{
v___x_2256_ = v_cases_2250_;
v_isShared_2257_ = v_isSharedCheck_2307_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_alts_2254_);
lean_inc(v_discr_2253_);
lean_inc(v_resultType_2252_);
lean_inc(v_typeName_2251_);
lean_dec(v_cases_2250_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2307_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v_alreadyFound_2258_; uint8_t v_relaxedReuse_2259_; lean_object* v_ownedness_2260_; uint8_t v___x_2261_; uint8_t v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; uint8_t v___x_2265_; uint8_t v___x_2266_; uint8_t v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; size_t v_sz_2271_; size_t v___x_2272_; lean_object* v___x_2273_; 
v_alreadyFound_2258_ = lean_ctor_get(v_a_2160_, 0);
v_relaxedReuse_2259_ = lean_ctor_get_uint8(v_a_2160_, sizeof(void*)*2);
v_ownedness_2260_ = lean_ctor_get(v_a_2160_, 1);
v___x_2261_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_alreadyFound_2258_, v_discr_2253_);
v___x_2262_ = 0;
v___x_2263_ = lean_box(v___x_2262_);
v___x_2264_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_ownedness_2260_, v_discr_2253_, v___x_2263_);
lean_dec(v___x_2263_);
v___x_2265_ = 1;
v___x_2266_ = lean_unbox(v___x_2264_);
lean_dec(v___x_2264_);
v___x_2267_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_2266_, v___x_2265_);
v___x_2268_ = lean_box(0);
lean_inc_n(v_discr_2253_, 2);
lean_inc_ref(v_alreadyFound_2258_);
v___x_2269_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v_alreadyFound_2258_, v_discr_2253_, v___x_2268_);
lean_inc_ref(v_ownedness_2260_);
v___x_2270_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
lean_ctor_set(v___x_2270_, 1, v_ownedness_2260_);
lean_ctor_set_uint8(v___x_2270_, sizeof(void*)*2, v_relaxedReuse_2259_);
v_sz_2271_ = lean_array_size(v_alts_2254_);
v___x_2272_ = ((size_t)0ULL);
lean_inc_ref(v_alts_2254_);
v___x_2273_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(v___x_2261_, v___x_2267_, v_discr_2253_, v_sz_2271_, v___x_2272_, v_alts_2254_, v___x_2270_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_);
lean_dec_ref_known(v___x_2270_, 2);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v_a_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2298_; 
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2276_ = v___x_2273_;
v_isShared_2277_ = v_isSharedCheck_2298_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_a_2274_);
lean_dec(v___x_2273_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2298_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
size_t v___x_2278_; size_t v___x_2279_; uint8_t v___x_2280_; 
v___x_2278_ = lean_ptr_addr(v_alts_2254_);
lean_dec_ref(v_alts_2254_);
v___x_2279_ = lean_ptr_addr(v_a_2274_);
v___x_2280_ = lean_usize_dec_eq(v___x_2278_, v___x_2279_);
if (v___x_2280_ == 0)
{
lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2293_; 
v_isSharedCheck_2293_ = !lean_is_exclusive(v_c_2159_);
if (v_isSharedCheck_2293_ == 0)
{
lean_object* v_unused_2294_; 
v_unused_2294_ = lean_ctor_get(v_c_2159_, 0);
lean_dec(v_unused_2294_);
v___x_2282_ = v_c_2159_;
v_isShared_2283_ = v_isSharedCheck_2293_;
goto v_resetjp_2281_;
}
else
{
lean_dec(v_c_2159_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2293_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2285_; 
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 3, v_a_2274_);
v___x_2285_ = v___x_2256_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_typeName_2251_);
lean_ctor_set(v_reuseFailAlloc_2292_, 1, v_resultType_2252_);
lean_ctor_set(v_reuseFailAlloc_2292_, 2, v_discr_2253_);
lean_ctor_set(v_reuseFailAlloc_2292_, 3, v_a_2274_);
v___x_2285_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
lean_object* v___x_2287_; 
if (v_isShared_2283_ == 0)
{
lean_ctor_set(v___x_2282_, 0, v___x_2285_);
v___x_2287_ = v___x_2282_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v___x_2285_);
v___x_2287_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
lean_object* v___x_2289_; 
if (v_isShared_2277_ == 0)
{
lean_ctor_set(v___x_2276_, 0, v___x_2287_);
v___x_2289_ = v___x_2276_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v___x_2287_);
v___x_2289_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
return v___x_2289_;
}
}
}
}
}
else
{
lean_object* v___x_2296_; 
lean_dec(v_a_2274_);
lean_del_object(v___x_2256_);
lean_dec(v_discr_2253_);
lean_dec_ref(v_resultType_2252_);
lean_dec(v_typeName_2251_);
if (v_isShared_2277_ == 0)
{
lean_ctor_set(v___x_2276_, 0, v_c_2159_);
v___x_2296_ = v___x_2276_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_c_2159_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
}
}
else
{
lean_object* v_a_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2306_; 
lean_del_object(v___x_2256_);
lean_dec_ref(v_alts_2254_);
lean_dec(v_discr_2253_);
lean_dec_ref(v_resultType_2252_);
lean_dec(v_typeName_2251_);
lean_dec_ref_known(v_c_2159_, 1);
v_a_2299_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2306_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2301_ = v___x_2273_;
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_a_2299_);
lean_dec(v___x_2273_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2304_; 
if (v_isShared_2302_ == 0)
{
v___x_2304_ = v___x_2301_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v_a_2299_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
return v___x_2304_;
}
}
}
}
}
case 5:
{
lean_object* v___x_2308_; 
v___x_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2308_, 0, v_c_2159_);
return v___x_2308_;
}
case 6:
{
lean_object* v___x_2309_; 
v___x_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2309_, 0, v_c_2159_);
return v___x_2309_;
}
case 8:
{
lean_object* v_fvarId_2310_; lean_object* v_i_2311_; lean_object* v_y_2312_; lean_object* v_k_2313_; lean_object* v___x_2314_; 
v_fvarId_2310_ = lean_ctor_get(v_c_2159_, 0);
v_i_2311_ = lean_ctor_get(v_c_2159_, 1);
v_y_2312_ = lean_ctor_get(v_c_2159_, 2);
v_k_2313_ = lean_ctor_get(v_c_2159_, 3);
lean_inc_ref(v_k_2313_);
v___x_2314_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2313_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_);
if (lean_obj_tag(v___x_2314_) == 0)
{
lean_object* v_a_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2339_; 
v_a_2315_ = lean_ctor_get(v___x_2314_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2317_ = v___x_2314_;
v_isShared_2318_ = v_isSharedCheck_2339_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_a_2315_);
lean_dec(v___x_2314_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2339_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
size_t v___x_2319_; size_t v___x_2320_; uint8_t v___x_2321_; 
v___x_2319_ = lean_ptr_addr(v_k_2313_);
v___x_2320_ = lean_ptr_addr(v_a_2315_);
v___x_2321_ = lean_usize_dec_eq(v___x_2319_, v___x_2320_);
if (v___x_2321_ == 0)
{
lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2331_; 
lean_inc(v_y_2312_);
lean_inc(v_i_2311_);
lean_inc(v_fvarId_2310_);
v_isSharedCheck_2331_ = !lean_is_exclusive(v_c_2159_);
if (v_isSharedCheck_2331_ == 0)
{
lean_object* v_unused_2332_; lean_object* v_unused_2333_; lean_object* v_unused_2334_; lean_object* v_unused_2335_; 
v_unused_2332_ = lean_ctor_get(v_c_2159_, 3);
lean_dec(v_unused_2332_);
v_unused_2333_ = lean_ctor_get(v_c_2159_, 2);
lean_dec(v_unused_2333_);
v_unused_2334_ = lean_ctor_get(v_c_2159_, 1);
lean_dec(v_unused_2334_);
v_unused_2335_ = lean_ctor_get(v_c_2159_, 0);
lean_dec(v_unused_2335_);
v___x_2323_ = v_c_2159_;
v_isShared_2324_ = v_isSharedCheck_2331_;
goto v_resetjp_2322_;
}
else
{
lean_dec(v_c_2159_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2331_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v___x_2326_; 
if (v_isShared_2324_ == 0)
{
lean_ctor_set(v___x_2323_, 3, v_a_2315_);
v___x_2326_ = v___x_2323_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_fvarId_2310_);
lean_ctor_set(v_reuseFailAlloc_2330_, 1, v_i_2311_);
lean_ctor_set(v_reuseFailAlloc_2330_, 2, v_y_2312_);
lean_ctor_set(v_reuseFailAlloc_2330_, 3, v_a_2315_);
v___x_2326_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
lean_object* v___x_2328_; 
if (v_isShared_2318_ == 0)
{
lean_ctor_set(v___x_2317_, 0, v___x_2326_);
v___x_2328_ = v___x_2317_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v___x_2326_);
v___x_2328_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
return v___x_2328_;
}
}
}
}
else
{
lean_object* v___x_2337_; 
lean_dec(v_a_2315_);
if (v_isShared_2318_ == 0)
{
lean_ctor_set(v___x_2317_, 0, v_c_2159_);
v___x_2337_ = v___x_2317_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_c_2159_);
v___x_2337_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
return v___x_2337_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2159_, 4);
return v___x_2314_;
}
}
case 9:
{
lean_object* v_fvarId_2340_; lean_object* v_i_2341_; lean_object* v_offset_2342_; lean_object* v_y_2343_; lean_object* v_ty_2344_; lean_object* v_k_2345_; lean_object* v___x_2346_; 
v_fvarId_2340_ = lean_ctor_get(v_c_2159_, 0);
v_i_2341_ = lean_ctor_get(v_c_2159_, 1);
v_offset_2342_ = lean_ctor_get(v_c_2159_, 2);
v_y_2343_ = lean_ctor_get(v_c_2159_, 3);
v_ty_2344_ = lean_ctor_get(v_c_2159_, 4);
v_k_2345_ = lean_ctor_get(v_c_2159_, 5);
lean_inc_ref(v_k_2345_);
v___x_2346_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2345_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2373_; 
v_a_2347_ = lean_ctor_get(v___x_2346_, 0);
v_isSharedCheck_2373_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2349_ = v___x_2346_;
v_isShared_2350_ = v_isSharedCheck_2373_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v___x_2346_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2373_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
size_t v___x_2351_; size_t v___x_2352_; uint8_t v___x_2353_; 
v___x_2351_ = lean_ptr_addr(v_k_2345_);
v___x_2352_ = lean_ptr_addr(v_a_2347_);
v___x_2353_ = lean_usize_dec_eq(v___x_2351_, v___x_2352_);
if (v___x_2353_ == 0)
{
lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2363_; 
lean_inc_ref(v_ty_2344_);
lean_inc(v_y_2343_);
lean_inc(v_offset_2342_);
lean_inc(v_i_2341_);
lean_inc(v_fvarId_2340_);
v_isSharedCheck_2363_ = !lean_is_exclusive(v_c_2159_);
if (v_isSharedCheck_2363_ == 0)
{
lean_object* v_unused_2364_; lean_object* v_unused_2365_; lean_object* v_unused_2366_; lean_object* v_unused_2367_; lean_object* v_unused_2368_; lean_object* v_unused_2369_; 
v_unused_2364_ = lean_ctor_get(v_c_2159_, 5);
lean_dec(v_unused_2364_);
v_unused_2365_ = lean_ctor_get(v_c_2159_, 4);
lean_dec(v_unused_2365_);
v_unused_2366_ = lean_ctor_get(v_c_2159_, 3);
lean_dec(v_unused_2366_);
v_unused_2367_ = lean_ctor_get(v_c_2159_, 2);
lean_dec(v_unused_2367_);
v_unused_2368_ = lean_ctor_get(v_c_2159_, 1);
lean_dec(v_unused_2368_);
v_unused_2369_ = lean_ctor_get(v_c_2159_, 0);
lean_dec(v_unused_2369_);
v___x_2355_ = v_c_2159_;
v_isShared_2356_ = v_isSharedCheck_2363_;
goto v_resetjp_2354_;
}
else
{
lean_dec(v_c_2159_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2363_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
lean_object* v___x_2358_; 
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 5, v_a_2347_);
v___x_2358_ = v___x_2355_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v_fvarId_2340_);
lean_ctor_set(v_reuseFailAlloc_2362_, 1, v_i_2341_);
lean_ctor_set(v_reuseFailAlloc_2362_, 2, v_offset_2342_);
lean_ctor_set(v_reuseFailAlloc_2362_, 3, v_y_2343_);
lean_ctor_set(v_reuseFailAlloc_2362_, 4, v_ty_2344_);
lean_ctor_set(v_reuseFailAlloc_2362_, 5, v_a_2347_);
v___x_2358_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
lean_object* v___x_2360_; 
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 0, v___x_2358_);
v___x_2360_ = v___x_2349_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v___x_2358_);
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
lean_object* v___x_2371_; 
lean_dec(v_a_2347_);
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 0, v_c_2159_);
v___x_2371_ = v___x_2349_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v_c_2159_);
v___x_2371_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
return v___x_2371_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_2159_, 6);
return v___x_2346_;
}
}
default: 
{
lean_object* v___x_2374_; lean_object* v___x_2375_; 
lean_dec_ref(v_c_2159_);
v___x_2374_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1);
v___x_2375_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(v___x_2374_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_);
return v___x_2375_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___boxed(lean_object* v_c_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_){
_start:
{
lean_object* v_res_2383_; 
v_res_2383_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_c_2376_, v_a_2377_, v_a_2378_, v_a_2379_, v_a_2380_, v_a_2381_);
lean_dec(v_a_2381_);
lean_dec_ref(v_a_2380_);
lean_dec(v_a_2379_);
lean_dec_ref(v_a_2378_);
lean_dec_ref(v_a_2377_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(uint8_t v___x_2384_, uint8_t v___x_2385_, lean_object* v_discr_2386_, size_t v_sz_2387_, size_t v_i_2388_, lean_object* v_bs_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_){
_start:
{
uint8_t v___x_2396_; 
v___x_2396_ = lean_usize_dec_lt(v_i_2388_, v_sz_2387_);
if (v___x_2396_ == 0)
{
lean_object* v___x_2397_; 
lean_dec(v_discr_2386_);
v___x_2397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2397_, 0, v_bs_2389_);
return v___x_2397_;
}
else
{
lean_object* v___f_2398_; lean_object* v_v_2399_; lean_object* v___x_2400_; lean_object* v_bs_x27_2401_; lean_object* v_a_2403_; lean_object* v___x_2408_; 
v___f_2398_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___boxed), 7, 0);
v_v_2399_ = lean_array_uget(v_bs_2389_, v_i_2388_);
v___x_2400_ = lean_unsigned_to_nat(0u);
v_bs_x27_2401_ = lean_array_uset(v_bs_2389_, v_i_2388_, v___x_2400_);
v___x_2408_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_v_2399_, v___f_2398_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_);
if (lean_obj_tag(v___x_2408_) == 0)
{
lean_object* v_a_2409_; 
v_a_2409_ = lean_ctor_get(v___x_2408_, 0);
lean_inc(v_a_2409_);
lean_dec_ref_known(v___x_2408_, 1);
if (lean_obj_tag(v_a_2409_) == 1)
{
lean_object* v_info_2410_; lean_object* v_code_2411_; uint8_t v___x_2412_; 
v_info_2410_ = lean_ctor_get(v_a_2409_, 0);
v_code_2411_ = lean_ctor_get(v_a_2409_, 1);
v___x_2412_ = l_Lean_Compiler_LCNF_CtorInfo_isScalar(v_info_2410_);
if (v___x_2412_ == 0)
{
if (v___x_2384_ == 0)
{
if (v___x_2385_ == 0)
{
lean_object* v___x_2413_; 
lean_inc_ref(v_code_2411_);
lean_inc_ref(v_info_2410_);
lean_inc(v_discr_2386_);
v___x_2413_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(v_discr_2386_, v_info_2410_, v_code_2411_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2415_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
lean_inc(v_a_2414_);
lean_dec_ref_known(v___x_2413_, 1);
v___x_2415_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2409_, v_a_2414_);
v_a_2403_ = v___x_2415_;
goto v___jp_2402_;
}
else
{
lean_object* v_a_2416_; lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2423_; 
lean_dec_ref_known(v_a_2409_, 2);
lean_dec_ref(v_bs_x27_2401_);
lean_dec(v_discr_2386_);
v_a_2416_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2423_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2418_ = v___x_2413_;
v_isShared_2419_ = v_isSharedCheck_2423_;
goto v_resetjp_2417_;
}
else
{
lean_inc(v_a_2416_);
lean_dec(v___x_2413_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2423_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
lean_object* v___x_2421_; 
if (v_isShared_2419_ == 0)
{
v___x_2421_ = v___x_2418_;
goto v_reusejp_2420_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v_a_2416_);
v___x_2421_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2420_;
}
v_reusejp_2420_:
{
return v___x_2421_;
}
}
}
}
else
{
v_a_2403_ = v_a_2409_;
goto v___jp_2402_;
}
}
else
{
v_a_2403_ = v_a_2409_;
goto v___jp_2402_;
}
}
else
{
v_a_2403_ = v_a_2409_;
goto v___jp_2402_;
}
}
else
{
v_a_2403_ = v_a_2409_;
goto v___jp_2402_;
}
}
else
{
lean_object* v_a_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2431_; 
lean_dec_ref(v_bs_x27_2401_);
lean_dec(v_discr_2386_);
v_a_2424_ = lean_ctor_get(v___x_2408_, 0);
v_isSharedCheck_2431_ = !lean_is_exclusive(v___x_2408_);
if (v_isSharedCheck_2431_ == 0)
{
v___x_2426_ = v___x_2408_;
v_isShared_2427_ = v_isSharedCheck_2431_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_a_2424_);
lean_dec(v___x_2408_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2431_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2429_; 
if (v_isShared_2427_ == 0)
{
v___x_2429_ = v___x_2426_;
goto v_reusejp_2428_;
}
else
{
lean_object* v_reuseFailAlloc_2430_; 
v_reuseFailAlloc_2430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2430_, 0, v_a_2424_);
v___x_2429_ = v_reuseFailAlloc_2430_;
goto v_reusejp_2428_;
}
v_reusejp_2428_:
{
return v___x_2429_;
}
}
}
v___jp_2402_:
{
size_t v___x_2404_; size_t v___x_2405_; lean_object* v___x_2406_; 
v___x_2404_ = ((size_t)1ULL);
v___x_2405_ = lean_usize_add(v_i_2388_, v___x_2404_);
v___x_2406_ = lean_array_uset(v_bs_x27_2401_, v_i_2388_, v_a_2403_);
v_i_2388_ = v___x_2405_;
v_bs_2389_ = v___x_2406_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3___boxed(lean_object* v___x_2432_, lean_object* v___x_2433_, lean_object* v_discr_2434_, lean_object* v_sz_2435_, lean_object* v_i_2436_, lean_object* v_bs_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_){
_start:
{
uint8_t v___x_6022__boxed_2444_; uint8_t v___x_6023__boxed_2445_; size_t v_sz_boxed_2446_; size_t v_i_boxed_2447_; lean_object* v_res_2448_; 
v___x_6022__boxed_2444_ = lean_unbox(v___x_2432_);
v___x_6023__boxed_2445_ = lean_unbox(v___x_2433_);
v_sz_boxed_2446_ = lean_unbox_usize(v_sz_2435_);
lean_dec(v_sz_2435_);
v_i_boxed_2447_ = lean_unbox_usize(v_i_2436_);
lean_dec(v_i_2436_);
v_res_2448_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(v___x_6022__boxed_2444_, v___x_6023__boxed_2445_, v_discr_2434_, v_sz_boxed_2446_, v_i_boxed_2447_, v_bs_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_);
lean_dec(v___y_2442_);
lean_dec_ref(v___y_2441_);
lean_dec(v___y_2440_);
lean_dec_ref(v___y_2439_);
lean_dec_ref(v___y_2438_);
return v_res_2448_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0(lean_object* v_00_u03b2_2449_, lean_object* v_x_2450_, lean_object* v_x_2451_){
_start:
{
uint8_t v___x_2452_; 
v___x_2452_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_x_2450_, v_x_2451_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___boxed(lean_object* v_00_u03b2_2453_, lean_object* v_x_2454_, lean_object* v_x_2455_){
_start:
{
uint8_t v_res_2456_; lean_object* v_r_2457_; 
v_res_2456_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0(v_00_u03b2_2453_, v_x_2454_, v_x_2455_);
lean_dec(v_x_2455_);
lean_dec_ref(v_x_2454_);
v_r_2457_ = lean_box(v_res_2456_);
return v_r_2457_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1(lean_object* v_00_u03b2_2458_, lean_object* v_m_2459_, lean_object* v_a_2460_, lean_object* v_fallback_2461_){
_start:
{
lean_object* v___x_2462_; 
v___x_2462_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_m_2459_, v_a_2460_, v_fallback_2461_);
return v___x_2462_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___boxed(lean_object* v_00_u03b2_2463_, lean_object* v_m_2464_, lean_object* v_a_2465_, lean_object* v_fallback_2466_){
_start:
{
lean_object* v_res_2467_; 
v_res_2467_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1(v_00_u03b2_2463_, v_m_2464_, v_a_2465_, v_fallback_2466_);
lean_dec(v_fallback_2466_);
lean_dec(v_a_2465_);
lean_dec_ref(v_m_2464_);
return v_res_2467_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2(lean_object* v_00_u03b2_2468_, lean_object* v_x_2469_, lean_object* v_x_2470_, lean_object* v_x_2471_){
_start:
{
lean_object* v___x_2472_; 
v___x_2472_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v_x_2469_, v_x_2470_, v_x_2471_);
return v___x_2472_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0(lean_object* v_00_u03b2_2473_, lean_object* v_x_2474_, size_t v_x_2475_, lean_object* v_x_2476_){
_start:
{
uint8_t v___x_2477_; 
v___x_2477_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2474_, v_x_2475_, v_x_2476_);
return v___x_2477_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2478_, lean_object* v_x_2479_, lean_object* v_x_2480_, lean_object* v_x_2481_){
_start:
{
size_t v_x_6610__boxed_2482_; uint8_t v_res_2483_; lean_object* v_r_2484_; 
v_x_6610__boxed_2482_ = lean_unbox_usize(v_x_2480_);
lean_dec(v_x_2480_);
v_res_2483_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0(v_00_u03b2_2478_, v_x_2479_, v_x_6610__boxed_2482_, v_x_2481_);
lean_dec(v_x_2481_);
lean_dec_ref(v_x_2479_);
v_r_2484_ = lean_box(v_res_2483_);
return v_r_2484_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2(lean_object* v_00_u03b2_2485_, lean_object* v_a_2486_, lean_object* v_fallback_2487_, lean_object* v_x_2488_){
_start:
{
lean_object* v___x_2489_; 
v___x_2489_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_2486_, v_fallback_2487_, v_x_2488_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2490_, lean_object* v_a_2491_, lean_object* v_fallback_2492_, lean_object* v_x_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2(v_00_u03b2_2490_, v_a_2491_, v_fallback_2492_, v_x_2493_);
lean_dec(v_x_2493_);
lean_dec(v_fallback_2492_);
lean_dec(v_a_2491_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4(lean_object* v_00_u03b2_2495_, lean_object* v_x_2496_, size_t v_x_2497_, size_t v_x_2498_, lean_object* v_x_2499_, lean_object* v_x_2500_){
_start:
{
lean_object* v___x_2501_; 
v___x_2501_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2496_, v_x_2497_, v_x_2498_, v_x_2499_, v_x_2500_);
return v___x_2501_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___boxed(lean_object* v_00_u03b2_2502_, lean_object* v_x_2503_, lean_object* v_x_2504_, lean_object* v_x_2505_, lean_object* v_x_2506_, lean_object* v_x_2507_){
_start:
{
size_t v_x_6626__boxed_2508_; size_t v_x_6627__boxed_2509_; lean_object* v_res_2510_; 
v_x_6626__boxed_2508_ = lean_unbox_usize(v_x_2504_);
lean_dec(v_x_2504_);
v_x_6627__boxed_2509_ = lean_unbox_usize(v_x_2505_);
lean_dec(v_x_2505_);
v_res_2510_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4(v_00_u03b2_2502_, v_x_2503_, v_x_6626__boxed_2508_, v_x_6627__boxed_2509_, v_x_2506_, v_x_2507_);
return v_res_2510_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2511_, lean_object* v_keys_2512_, lean_object* v_vals_2513_, lean_object* v_heq_2514_, lean_object* v_i_2515_, lean_object* v_k_2516_){
_start:
{
uint8_t v___x_2517_; 
v___x_2517_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_keys_2512_, v_i_2515_, v_k_2516_);
return v___x_2517_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2518_, lean_object* v_keys_2519_, lean_object* v_vals_2520_, lean_object* v_heq_2521_, lean_object* v_i_2522_, lean_object* v_k_2523_){
_start:
{
uint8_t v_res_2524_; lean_object* v_r_2525_; 
v_res_2524_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2(v_00_u03b2_2518_, v_keys_2519_, v_vals_2520_, v_heq_2521_, v_i_2522_, v_k_2523_);
lean_dec(v_k_2523_);
lean_dec_ref(v_vals_2520_);
lean_dec_ref(v_keys_2519_);
v_r_2525_ = lean_box(v_res_2524_);
return v_r_2525_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_2526_, lean_object* v_n_2527_, lean_object* v_k_2528_, lean_object* v_v_2529_){
_start:
{
lean_object* v___x_2530_; 
v___x_2530_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(v_n_2527_, v_k_2528_, v_v_2529_);
return v___x_2530_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_2531_, size_t v_depth_2532_, lean_object* v_keys_2533_, lean_object* v_vals_2534_, lean_object* v_heq_2535_, lean_object* v_i_2536_, lean_object* v_entries_2537_){
_start:
{
lean_object* v___x_2538_; 
v___x_2538_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_depth_2532_, v_keys_2533_, v_vals_2534_, v_i_2536_, v_entries_2537_);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_2539_, lean_object* v_depth_2540_, lean_object* v_keys_2541_, lean_object* v_vals_2542_, lean_object* v_heq_2543_, lean_object* v_i_2544_, lean_object* v_entries_2545_){
_start:
{
size_t v_depth_boxed_2546_; lean_object* v_res_2547_; 
v_depth_boxed_2546_ = lean_unbox_usize(v_depth_2540_);
lean_dec(v_depth_2540_);
v_res_2547_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8(v_00_u03b2_2539_, v_depth_boxed_2546_, v_keys_2541_, v_vals_2542_, v_heq_2543_, v_i_2544_, v_entries_2545_);
lean_dec_ref(v_vals_2542_);
lean_dec_ref(v_keys_2541_);
return v_res_2547_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9(lean_object* v_00_u03b2_2548_, lean_object* v_x_2549_, lean_object* v_x_2550_, lean_object* v_x_2551_, lean_object* v_x_2552_){
_start:
{
lean_object* v___x_2553_; 
v___x_2553_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(v_x_2549_, v_x_2550_, v_x_2551_, v_x_2552_);
return v___x_2553_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(lean_object* v_msg_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_){
_start:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v_toApplicative_2565_; lean_object* v___x_2567_; uint8_t v_isShared_2568_; uint8_t v_isSharedCheck_2627_; 
v___x_2563_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0);
v___x_2564_ = l_StateRefT_x27_instMonad___redArg(v___x_2563_);
v_toApplicative_2565_ = lean_ctor_get(v___x_2564_, 0);
v_isSharedCheck_2627_ = !lean_is_exclusive(v___x_2564_);
if (v_isSharedCheck_2627_ == 0)
{
lean_object* v_unused_2628_; 
v_unused_2628_ = lean_ctor_get(v___x_2564_, 1);
lean_dec(v_unused_2628_);
v___x_2567_ = v___x_2564_;
v_isShared_2568_ = v_isSharedCheck_2627_;
goto v_resetjp_2566_;
}
else
{
lean_inc(v_toApplicative_2565_);
lean_dec(v___x_2564_);
v___x_2567_ = lean_box(0);
v_isShared_2568_ = v_isSharedCheck_2627_;
goto v_resetjp_2566_;
}
v_resetjp_2566_:
{
lean_object* v_toFunctor_2569_; lean_object* v_toSeq_2570_; lean_object* v_toSeqLeft_2571_; lean_object* v_toSeqRight_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2625_; 
v_toFunctor_2569_ = lean_ctor_get(v_toApplicative_2565_, 0);
v_toSeq_2570_ = lean_ctor_get(v_toApplicative_2565_, 2);
v_toSeqLeft_2571_ = lean_ctor_get(v_toApplicative_2565_, 3);
v_toSeqRight_2572_ = lean_ctor_get(v_toApplicative_2565_, 4);
v_isSharedCheck_2625_ = !lean_is_exclusive(v_toApplicative_2565_);
if (v_isSharedCheck_2625_ == 0)
{
lean_object* v_unused_2626_; 
v_unused_2626_ = lean_ctor_get(v_toApplicative_2565_, 1);
lean_dec(v_unused_2626_);
v___x_2574_ = v_toApplicative_2565_;
v_isShared_2575_ = v_isSharedCheck_2625_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_toSeqRight_2572_);
lean_inc(v_toSeqLeft_2571_);
lean_inc(v_toSeq_2570_);
lean_inc(v_toFunctor_2569_);
lean_dec(v_toApplicative_2565_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2625_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___f_2576_; lean_object* v___f_2577_; lean_object* v___f_2578_; lean_object* v___f_2579_; lean_object* v___x_2580_; lean_object* v___f_2581_; lean_object* v___f_2582_; lean_object* v___f_2583_; lean_object* v___x_2585_; 
v___f_2576_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_2577_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
lean_inc_ref(v_toFunctor_2569_);
v___f_2578_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2578_, 0, v_toFunctor_2569_);
v___f_2579_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2579_, 0, v_toFunctor_2569_);
v___x_2580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2580_, 0, v___f_2578_);
lean_ctor_set(v___x_2580_, 1, v___f_2579_);
v___f_2581_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2581_, 0, v_toSeqRight_2572_);
v___f_2582_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2582_, 0, v_toSeqLeft_2571_);
v___f_2583_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2583_, 0, v_toSeq_2570_);
if (v_isShared_2575_ == 0)
{
lean_ctor_set(v___x_2574_, 4, v___f_2581_);
lean_ctor_set(v___x_2574_, 3, v___f_2582_);
lean_ctor_set(v___x_2574_, 2, v___f_2583_);
lean_ctor_set(v___x_2574_, 1, v___f_2576_);
lean_ctor_set(v___x_2574_, 0, v___x_2580_);
v___x_2585_ = v___x_2574_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v___x_2580_);
lean_ctor_set(v_reuseFailAlloc_2624_, 1, v___f_2576_);
lean_ctor_set(v_reuseFailAlloc_2624_, 2, v___f_2583_);
lean_ctor_set(v_reuseFailAlloc_2624_, 3, v___f_2582_);
lean_ctor_set(v_reuseFailAlloc_2624_, 4, v___f_2581_);
v___x_2585_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
lean_object* v___x_2587_; 
if (v_isShared_2568_ == 0)
{
lean_ctor_set(v___x_2567_, 1, v___f_2577_);
lean_ctor_set(v___x_2567_, 0, v___x_2585_);
v___x_2587_ = v___x_2567_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v___x_2585_);
lean_ctor_set(v_reuseFailAlloc_2623_, 1, v___f_2577_);
v___x_2587_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
lean_object* v___x_2588_; lean_object* v_toApplicative_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2621_; 
v___x_2588_ = l_StateRefT_x27_instMonad___redArg(v___x_2587_);
v_toApplicative_2589_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2621_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2621_ == 0)
{
lean_object* v_unused_2622_; 
v_unused_2622_ = lean_ctor_get(v___x_2588_, 1);
lean_dec(v_unused_2622_);
v___x_2591_ = v___x_2588_;
v_isShared_2592_ = v_isSharedCheck_2621_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_toApplicative_2589_);
lean_dec(v___x_2588_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2621_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v_toFunctor_2593_; lean_object* v_toSeq_2594_; lean_object* v_toSeqLeft_2595_; lean_object* v_toSeqRight_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2619_; 
v_toFunctor_2593_ = lean_ctor_get(v_toApplicative_2589_, 0);
v_toSeq_2594_ = lean_ctor_get(v_toApplicative_2589_, 2);
v_toSeqLeft_2595_ = lean_ctor_get(v_toApplicative_2589_, 3);
v_toSeqRight_2596_ = lean_ctor_get(v_toApplicative_2589_, 4);
v_isSharedCheck_2619_ = !lean_is_exclusive(v_toApplicative_2589_);
if (v_isSharedCheck_2619_ == 0)
{
lean_object* v_unused_2620_; 
v_unused_2620_ = lean_ctor_get(v_toApplicative_2589_, 1);
lean_dec(v_unused_2620_);
v___x_2598_ = v_toApplicative_2589_;
v_isShared_2599_ = v_isSharedCheck_2619_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_toSeqRight_2596_);
lean_inc(v_toSeqLeft_2595_);
lean_inc(v_toSeq_2594_);
lean_inc(v_toFunctor_2593_);
lean_dec(v_toApplicative_2589_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2619_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___f_2600_; lean_object* v___f_2601_; lean_object* v___f_2602_; lean_object* v___f_2603_; lean_object* v___x_2604_; lean_object* v___f_2605_; lean_object* v___f_2606_; lean_object* v___f_2607_; lean_object* v___x_2609_; 
v___f_2600_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0));
v___f_2601_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1));
lean_inc_ref(v_toFunctor_2593_);
v___f_2602_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2602_, 0, v_toFunctor_2593_);
v___f_2603_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2603_, 0, v_toFunctor_2593_);
v___x_2604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___f_2602_);
lean_ctor_set(v___x_2604_, 1, v___f_2603_);
v___f_2605_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2605_, 0, v_toSeqRight_2596_);
v___f_2606_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2606_, 0, v_toSeqLeft_2595_);
v___f_2607_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2607_, 0, v_toSeq_2594_);
if (v_isShared_2599_ == 0)
{
lean_ctor_set(v___x_2598_, 4, v___f_2605_);
lean_ctor_set(v___x_2598_, 3, v___f_2606_);
lean_ctor_set(v___x_2598_, 2, v___f_2607_);
lean_ctor_set(v___x_2598_, 1, v___f_2600_);
lean_ctor_set(v___x_2598_, 0, v___x_2604_);
v___x_2609_ = v___x_2598_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v___x_2604_);
lean_ctor_set(v_reuseFailAlloc_2618_, 1, v___f_2600_);
lean_ctor_set(v_reuseFailAlloc_2618_, 2, v___f_2607_);
lean_ctor_set(v_reuseFailAlloc_2618_, 3, v___f_2606_);
lean_ctor_set(v_reuseFailAlloc_2618_, 4, v___f_2605_);
v___x_2609_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
lean_object* v___x_2611_; 
if (v_isShared_2592_ == 0)
{
lean_ctor_set(v___x_2591_, 1, v___f_2601_);
lean_ctor_set(v___x_2591_, 0, v___x_2609_);
v___x_2611_ = v___x_2591_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v___x_2609_);
lean_ctor_set(v_reuseFailAlloc_2617_, 1, v___f_2601_);
v___x_2611_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2038__overap_2615_; lean_object* v___x_2616_; 
v___x_2612_ = l_StateRefT_x27_instMonad___redArg(v___x_2611_);
v___x_2613_ = lean_box(0);
v___x_2614_ = l_instInhabitedOfMonad___redArg(v___x_2612_, v___x_2613_);
v___x_2038__overap_2615_ = lean_panic_fn_borrowed(v___x_2614_, v_msg_2556_);
lean_dec(v___x_2614_);
lean_inc(v___y_2561_);
lean_inc_ref(v___y_2560_);
lean_inc(v___y_2559_);
lean_inc_ref(v___y_2558_);
lean_inc(v___y_2557_);
v___x_2616_ = lean_apply_6(v___x_2038__overap_2615_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, lean_box(0));
return v___x_2616_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___boxed(lean_object* v_msg_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_){
_start:
{
lean_object* v_res_2636_; 
v_res_2636_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(v_msg_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_);
lean_dec(v___y_2634_);
lean_dec_ref(v___y_2633_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
lean_dec(v___y_2630_);
return v_res_2636_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1(void){
_start:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2638_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_2639_ = lean_unsigned_to_nat(61u);
v___x_2640_ = lean_unsigned_to_nat(304u);
v___x_2641_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0));
v___x_2642_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_2643_ = l_mkPanicMessageWithDecl(v___x_2642_, v___x_2641_, v___x_2640_, v___x_2639_, v___x_2638_);
return v___x_2643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(lean_object* v_c_2644_, lean_object* v_a_2645_, lean_object* v_a_2646_, lean_object* v_a_2647_, lean_object* v_a_2648_, lean_object* v_a_2649_){
_start:
{
switch(lean_obj_tag(v_c_2644_))
{
case 0:
{
lean_object* v_decl_2651_; lean_object* v_value_2652_; 
v_decl_2651_ = lean_ctor_get(v_c_2644_, 0);
v_value_2652_ = lean_ctor_get(v_decl_2651_, 3);
if (lean_obj_tag(v_value_2652_) == 11)
{
lean_object* v_k_2653_; lean_object* v_var_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; 
lean_inc_ref(v_value_2652_);
v_k_2653_ = lean_ctor_get(v_c_2644_, 1);
lean_inc_ref(v_k_2653_);
lean_dec_ref_known(v_c_2644_, 2);
v_var_2654_ = lean_ctor_get(v_value_2652_, 1);
lean_inc(v_var_2654_);
lean_dec_ref_known(v_value_2652_, 2);
v___x_2655_ = lean_st_ref_take(v_a_2645_);
v___x_2656_ = lean_box(0);
v___x_2657_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v___x_2655_, v_var_2654_, v___x_2656_);
v___x_2658_ = lean_st_ref_put(v_a_2645_, v___x_2657_);
v_c_2644_ = v_k_2653_;
goto _start;
}
else
{
lean_object* v_k_2660_; 
v_k_2660_ = lean_ctor_get(v_c_2644_, 1);
lean_inc_ref(v_k_2660_);
lean_dec_ref_known(v_c_2644_, 2);
v_c_2644_ = v_k_2660_;
goto _start;
}
}
case 2:
{
lean_object* v_decl_2662_; lean_object* v_k_2663_; lean_object* v_value_2664_; lean_object* v___x_2665_; 
v_decl_2662_ = lean_ctor_get(v_c_2644_, 0);
lean_inc_ref(v_decl_2662_);
v_k_2663_ = lean_ctor_get(v_c_2644_, 1);
lean_inc_ref(v_k_2663_);
lean_dec_ref_known(v_c_2644_, 2);
v_value_2664_ = lean_ctor_get(v_decl_2662_, 4);
lean_inc_ref(v_value_2664_);
lean_dec_ref(v_decl_2662_);
v___x_2665_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_value_2664_, v_a_2645_, v_a_2646_, v_a_2647_, v_a_2648_, v_a_2649_);
if (lean_obj_tag(v___x_2665_) == 0)
{
lean_dec_ref_known(v___x_2665_, 1);
v_c_2644_ = v_k_2663_;
goto _start;
}
else
{
lean_dec_ref(v_k_2663_);
return v___x_2665_;
}
}
case 3:
{
lean_object* v___x_2667_; lean_object* v___x_2668_; 
lean_dec_ref_known(v_c_2644_, 2);
v___x_2667_ = lean_box(0);
v___x_2668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2667_);
return v___x_2668_;
}
case 4:
{
lean_object* v_cases_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2684_; 
v_cases_2669_ = lean_ctor_get(v_c_2644_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v_c_2644_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2671_ = v_c_2644_;
v_isShared_2672_ = v_isSharedCheck_2684_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_cases_2669_);
lean_dec(v_c_2644_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2684_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v_alts_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; uint8_t v___x_2677_; 
v_alts_2673_ = lean_ctor_get(v_cases_2669_, 3);
lean_inc_ref(v_alts_2673_);
lean_dec_ref(v_cases_2669_);
v___x_2674_ = lean_unsigned_to_nat(0u);
v___x_2675_ = lean_array_get_size(v_alts_2673_);
v___x_2676_ = lean_box(0);
v___x_2677_ = lean_nat_dec_lt(v___x_2674_, v___x_2675_);
if (v___x_2677_ == 0)
{
lean_object* v___x_2679_; 
lean_dec_ref(v_alts_2673_);
if (v_isShared_2672_ == 0)
{
lean_ctor_set_tag(v___x_2671_, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2676_);
v___x_2679_ = v___x_2671_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v___x_2676_);
v___x_2679_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
return v___x_2679_;
}
}
else
{
size_t v___x_2681_; size_t v___x_2682_; lean_object* v___x_2683_; 
lean_del_object(v___x_2671_);
v___x_2681_ = ((size_t)0ULL);
v___x_2682_ = lean_usize_of_nat(v___x_2675_);
v___x_2683_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(v_alts_2673_, v___x_2681_, v___x_2682_, v___x_2676_, v_a_2645_, v_a_2646_, v_a_2647_, v_a_2648_, v_a_2649_);
lean_dec_ref(v_alts_2673_);
return v___x_2683_;
}
}
}
case 5:
{
lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2692_; 
v_isSharedCheck_2692_ = !lean_is_exclusive(v_c_2644_);
if (v_isSharedCheck_2692_ == 0)
{
lean_object* v_unused_2693_; 
v_unused_2693_ = lean_ctor_get(v_c_2644_, 0);
lean_dec(v_unused_2693_);
v___x_2686_ = v_c_2644_;
v_isShared_2687_ = v_isSharedCheck_2692_;
goto v_resetjp_2685_;
}
else
{
lean_dec(v_c_2644_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2692_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
lean_object* v___x_2688_; lean_object* v___x_2690_; 
v___x_2688_ = lean_box(0);
if (v_isShared_2687_ == 0)
{
lean_ctor_set_tag(v___x_2686_, 0);
lean_ctor_set(v___x_2686_, 0, v___x_2688_);
v___x_2690_ = v___x_2686_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2688_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
}
case 6:
{
lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2701_; 
v_isSharedCheck_2701_ = !lean_is_exclusive(v_c_2644_);
if (v_isSharedCheck_2701_ == 0)
{
lean_object* v_unused_2702_; 
v_unused_2702_ = lean_ctor_get(v_c_2644_, 0);
lean_dec(v_unused_2702_);
v___x_2695_ = v_c_2644_;
v_isShared_2696_ = v_isSharedCheck_2701_;
goto v_resetjp_2694_;
}
else
{
lean_dec(v_c_2644_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2701_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2697_; lean_object* v___x_2699_; 
v___x_2697_ = lean_box(0);
if (v_isShared_2696_ == 0)
{
lean_ctor_set_tag(v___x_2695_, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2697_);
v___x_2699_ = v___x_2695_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v___x_2697_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
}
case 8:
{
lean_object* v_k_2703_; 
v_k_2703_ = lean_ctor_get(v_c_2644_, 3);
lean_inc_ref(v_k_2703_);
lean_dec_ref_known(v_c_2644_, 4);
v_c_2644_ = v_k_2703_;
goto _start;
}
case 9:
{
lean_object* v_k_2705_; 
v_k_2705_ = lean_ctor_get(v_c_2644_, 5);
lean_inc_ref(v_k_2705_);
lean_dec_ref_known(v_c_2644_, 6);
v_c_2644_ = v_k_2705_;
goto _start;
}
default: 
{
lean_object* v___x_2707_; lean_object* v___x_2708_; 
lean_dec_ref(v_c_2644_);
v___x_2707_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1);
v___x_2708_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(v___x_2707_, v_a_2645_, v_a_2646_, v_a_2647_, v_a_2648_, v_a_2649_);
return v___x_2708_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(lean_object* v_as_2709_, size_t v_i_2710_, size_t v_stop_2711_, lean_object* v_b_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_){
_start:
{
lean_object* v___y_2720_; uint8_t v___x_2726_; 
v___x_2726_ = lean_usize_dec_eq(v_i_2710_, v_stop_2711_);
if (v___x_2726_ == 0)
{
lean_object* v___x_2727_; 
v___x_2727_ = lean_array_uget_borrowed(v_as_2709_, v_i_2710_);
switch(lean_obj_tag(v___x_2727_))
{
case 0:
{
lean_object* v_code_2728_; 
v_code_2728_ = lean_ctor_get(v___x_2727_, 2);
lean_inc_ref(v_code_2728_);
v___y_2720_ = v_code_2728_;
goto v___jp_2719_;
}
case 1:
{
lean_object* v_code_2729_; 
v_code_2729_ = lean_ctor_get(v___x_2727_, 1);
lean_inc_ref(v_code_2729_);
v___y_2720_ = v_code_2729_;
goto v___jp_2719_;
}
default: 
{
lean_object* v_code_2730_; 
v_code_2730_ = lean_ctor_get(v___x_2727_, 0);
lean_inc_ref(v_code_2730_);
v___y_2720_ = v_code_2730_;
goto v___jp_2719_;
}
}
}
else
{
lean_object* v___x_2731_; 
v___x_2731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2731_, 0, v_b_2712_);
return v___x_2731_;
}
v___jp_2719_:
{
lean_object* v___x_2721_; 
v___x_2721_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v___y_2720_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_);
if (lean_obj_tag(v___x_2721_) == 0)
{
lean_object* v_a_2722_; size_t v___x_2723_; size_t v___x_2724_; 
v_a_2722_ = lean_ctor_get(v___x_2721_, 0);
lean_inc(v_a_2722_);
lean_dec_ref_known(v___x_2721_, 1);
v___x_2723_ = ((size_t)1ULL);
v___x_2724_ = lean_usize_add(v_i_2710_, v___x_2723_);
v_i_2710_ = v___x_2724_;
v_b_2712_ = v_a_2722_;
goto _start;
}
else
{
return v___x_2721_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0___boxed(lean_object* v_as_2732_, lean_object* v_i_2733_, lean_object* v_stop_2734_, lean_object* v_b_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_){
_start:
{
size_t v_i_boxed_2742_; size_t v_stop_boxed_2743_; lean_object* v_res_2744_; 
v_i_boxed_2742_ = lean_unbox_usize(v_i_2733_);
lean_dec(v_i_2733_);
v_stop_boxed_2743_ = lean_unbox_usize(v_stop_2734_);
lean_dec(v_stop_2734_);
v_res_2744_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(v_as_2732_, v_i_boxed_2742_, v_stop_boxed_2743_, v_b_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_);
lean_dec(v___y_2740_);
lean_dec_ref(v___y_2739_);
lean_dec(v___y_2738_);
lean_dec_ref(v___y_2737_);
lean_dec(v___y_2736_);
lean_dec_ref(v_as_2732_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___boxed(lean_object* v_c_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_, lean_object* v_a_2751_){
_start:
{
lean_object* v_res_2752_; 
v_res_2752_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_c_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_);
lean_dec(v_a_2750_);
lean_dec_ref(v_a_2749_);
lean_dec(v_a_2748_);
lean_dec_ref(v_a_2747_);
lean_dec(v_a_2746_);
return v_res_2752_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2753_; 
v___x_2753_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2753_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; 
v___x_2754_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__0);
v___x_2755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2755_, 0, v___x_2754_);
return v___x_2755_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg(){
_start:
{
lean_object* v___x_2757_; 
v___x_2757_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___closed__1);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg___boxed(lean_object* v___dummy_2758_){
_start:
{
lean_object* v_res_2759_; 
v_res_2759_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg();
return v_res_2759_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2760_; 
v___x_2760_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___redArg();
return v___x_2760_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0(lean_object* v_00_u03b2_2761_){
_start:
{
lean_object* v___x_2762_; 
v___x_2762_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
return v___x_2762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(lean_object* v_f_2763_, lean_object* v_v_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_){
_start:
{
if (lean_obj_tag(v_v_2764_) == 0)
{
lean_object* v_code_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2795_; 
v_code_2771_ = lean_ctor_get(v_v_2764_, 0);
v_isSharedCheck_2795_ = !lean_is_exclusive(v_v_2764_);
if (v_isSharedCheck_2795_ == 0)
{
v___x_2773_ = v_v_2764_;
v_isShared_2774_ = v_isSharedCheck_2795_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_code_2771_);
lean_dec(v_v_2764_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2795_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2775_; 
lean_inc(v___y_2769_);
lean_inc_ref(v___y_2768_);
lean_inc(v___y_2767_);
lean_inc_ref(v___y_2766_);
lean_inc_ref(v___y_2765_);
v___x_2775_ = lean_apply_7(v_f_2763_, v_code_2771_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_, lean_box(0));
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_object* v_a_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2786_; 
v_a_2776_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2778_ = v___x_2775_;
v_isShared_2779_ = v_isSharedCheck_2786_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_a_2776_);
lean_dec(v___x_2775_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2786_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v___x_2781_; 
if (v_isShared_2774_ == 0)
{
lean_ctor_set(v___x_2773_, 0, v_a_2776_);
v___x_2781_ = v___x_2773_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v_a_2776_);
v___x_2781_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
lean_object* v___x_2783_; 
if (v_isShared_2779_ == 0)
{
lean_ctor_set(v___x_2778_, 0, v___x_2781_);
v___x_2783_ = v___x_2778_;
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
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2794_; 
lean_del_object(v___x_2773_);
v_a_2787_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2789_ = v___x_2775_;
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___x_2775_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2792_; 
if (v_isShared_2790_ == 0)
{
v___x_2792_ = v___x_2789_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v_a_2787_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
}
}
}
else
{
lean_object* v___x_2796_; 
lean_dec_ref(v_f_2763_);
v___x_2796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2796_, 0, v_v_2764_);
return v___x_2796_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg___boxed(lean_object* v_f_2797_, lean_object* v_v_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_){
_start:
{
lean_object* v_res_2805_; 
v_res_2805_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v_f_2797_, v_v_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec(v___y_2801_);
lean_dec_ref(v___y_2800_);
lean_dec_ref(v___y_2799_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1(uint8_t v_pu_2806_, lean_object* v_f_2807_, lean_object* v_v_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_){
_start:
{
lean_object* v___x_2815_; 
v___x_2815_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v_f_2807_, v_v_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_);
return v___x_2815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___boxed(lean_object* v_pu_2816_, lean_object* v_f_2817_, lean_object* v_v_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_){
_start:
{
uint8_t v_pu_boxed_2825_; lean_object* v_res_2826_; 
v_pu_boxed_2825_ = lean_unbox(v_pu_2816_);
v_res_2826_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1(v_pu_boxed_2825_, v_f_2817_, v_v_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_);
lean_dec(v___y_2823_);
lean_dec_ref(v___y_2822_);
lean_dec(v___y_2821_);
lean_dec_ref(v___y_2820_);
lean_dec_ref(v___y_2819_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0(lean_object* v_code_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_){
_start:
{
lean_object* v_alreadyFound_2835_; uint8_t v_relaxedReuse_2836_; lean_object* v_ownedness_2837_; lean_object* v___y_2838_; lean_object* v___y_2839_; lean_object* v___y_2840_; lean_object* v___y_2841_; uint8_t v_relaxedReuse_2844_; 
v_relaxedReuse_2844_ = lean_ctor_get_uint8(v___y_2828_, sizeof(void*)*2);
if (v_relaxedReuse_2844_ == 0)
{
lean_object* v_ownedness_2845_; lean_object* v___x_2846_; 
v_ownedness_2845_ = lean_ctor_get(v___y_2828_, 1);
v___x_2846_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
v_alreadyFound_2835_ = v___x_2846_;
v_relaxedReuse_2836_ = v_relaxedReuse_2844_;
v_ownedness_2837_ = v_ownedness_2845_;
v___y_2838_ = v___y_2829_;
v___y_2839_ = v___y_2830_;
v___y_2840_ = v___y_2831_;
v___y_2841_ = v___y_2832_;
goto v___jp_2834_;
}
else
{
lean_object* v_ownedness_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; 
v_ownedness_2847_ = lean_ctor_get(v___y_2828_, 1);
v___x_2848_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
v___x_2849_ = lean_st_mk_ref(v___x_2848_);
lean_inc_ref(v_code_2827_);
v___x_2850_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_code_2827_, v___x_2849_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
if (lean_obj_tag(v___x_2850_) == 0)
{
lean_object* v___x_2851_; 
lean_dec_ref_known(v___x_2850_, 1);
v___x_2851_ = lean_st_ref_get(v___x_2849_);
lean_dec(v___x_2849_);
v_alreadyFound_2835_ = v___x_2851_;
v_relaxedReuse_2836_ = v_relaxedReuse_2844_;
v_ownedness_2837_ = v_ownedness_2847_;
v___y_2838_ = v___y_2829_;
v___y_2839_ = v___y_2830_;
v___y_2840_ = v___y_2831_;
v___y_2841_ = v___y_2832_;
goto v___jp_2834_;
}
else
{
lean_object* v_a_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2859_; 
lean_dec(v___x_2849_);
lean_dec_ref(v_code_2827_);
v_a_2852_ = lean_ctor_get(v___x_2850_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2850_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2854_ = v___x_2850_;
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_a_2852_);
lean_dec(v___x_2850_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v___x_2857_; 
if (v_isShared_2855_ == 0)
{
v___x_2857_ = v___x_2854_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_a_2852_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
}
}
v___jp_2834_:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; 
lean_inc_ref(v_ownedness_2837_);
v___x_2842_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2842_, 0, v_alreadyFound_2835_);
lean_ctor_set(v___x_2842_, 1, v_ownedness_2837_);
lean_ctor_set_uint8(v___x_2842_, sizeof(void*)*2, v_relaxedReuse_2836_);
v___x_2843_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_code_2827_, v___x_2842_, v___y_2838_, v___y_2839_, v___y_2840_, v___y_2841_);
lean_dec_ref_known(v___x_2842_, 2);
return v___x_2843_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___boxed(lean_object* v_code_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0(v_code_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
lean_dec(v___y_2863_);
lean_dec_ref(v___y_2862_);
lean_dec_ref(v___y_2861_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(lean_object* v_decl_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_, lean_object* v_a_2873_, lean_object* v_a_2874_){
_start:
{
lean_object* v_toSignature_2876_; lean_object* v_value_2877_; uint8_t v_recursive_2878_; lean_object* v_inlineAttr_x3f_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2904_; 
v_toSignature_2876_ = lean_ctor_get(v_decl_2869_, 0);
v_value_2877_ = lean_ctor_get(v_decl_2869_, 1);
v_recursive_2878_ = lean_ctor_get_uint8(v_decl_2869_, sizeof(void*)*3);
v_inlineAttr_x3f_2879_ = lean_ctor_get(v_decl_2869_, 2);
v_isSharedCheck_2904_ = !lean_is_exclusive(v_decl_2869_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2881_ = v_decl_2869_;
v_isShared_2882_ = v_isSharedCheck_2904_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_inlineAttr_x3f_2879_);
lean_inc(v_value_2877_);
lean_inc(v_toSignature_2876_);
lean_dec(v_decl_2869_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2904_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___f_2883_; lean_object* v___x_2884_; 
v___f_2883_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0));
v___x_2884_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v___f_2883_, v_value_2877_, v_a_2870_, v_a_2871_, v_a_2872_, v_a_2873_, v_a_2874_);
if (lean_obj_tag(v___x_2884_) == 0)
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2895_; 
v_a_2885_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_2895_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2895_ == 0)
{
v___x_2887_ = v___x_2884_;
v_isShared_2888_ = v_isSharedCheck_2895_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v___x_2884_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2895_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v___x_2890_; 
if (v_isShared_2882_ == 0)
{
lean_ctor_set(v___x_2881_, 1, v_a_2885_);
v___x_2890_ = v___x_2881_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v_toSignature_2876_);
lean_ctor_set(v_reuseFailAlloc_2894_, 1, v_a_2885_);
lean_ctor_set(v_reuseFailAlloc_2894_, 2, v_inlineAttr_x3f_2879_);
lean_ctor_set_uint8(v_reuseFailAlloc_2894_, sizeof(void*)*3, v_recursive_2878_);
v___x_2890_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
lean_object* v___x_2892_; 
if (v_isShared_2888_ == 0)
{
lean_ctor_set(v___x_2887_, 0, v___x_2890_);
v___x_2892_ = v___x_2887_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v___x_2890_);
v___x_2892_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
return v___x_2892_;
}
}
}
}
else
{
lean_object* v_a_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2903_; 
lean_del_object(v___x_2881_);
lean_dec(v_inlineAttr_x3f_2879_);
lean_dec_ref(v_toSignature_2876_);
v_a_2896_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2898_ = v___x_2884_;
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_a_2896_);
lean_dec(v___x_2884_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2901_; 
if (v_isShared_2899_ == 0)
{
v___x_2901_ = v___x_2898_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v_a_2896_);
v___x_2901_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
return v___x_2901_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___boxed(lean_object* v_decl_2905_, lean_object* v_a_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_, lean_object* v_a_2910_, lean_object* v_a_2911_){
_start:
{
lean_object* v_res_2912_; 
v_res_2912_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_decl_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_);
lean_dec(v_a_2910_);
lean_dec_ref(v_a_2909_);
lean_dec(v_a_2908_);
lean_dec_ref(v_a_2907_);
lean_dec_ref(v_a_2906_);
return v_res_2912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse(lean_object* v_decl_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_){
_start:
{
lean_object* v___x_2919_; 
v___x_2919_ = l_Lean_Compiler_LCNF_getConfig___redArg(v_a_2914_);
if (lean_obj_tag(v___x_2919_) == 0)
{
lean_object* v_a_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2947_; 
v_a_2920_ = lean_ctor_get(v___x_2919_, 0);
v_isSharedCheck_2947_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2947_ == 0)
{
v___x_2922_ = v___x_2919_;
v_isShared_2923_ = v_isSharedCheck_2947_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_a_2920_);
lean_dec(v___x_2919_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2947_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
uint8_t v_resetReuse_2924_; 
v_resetReuse_2924_ = lean_ctor_get_uint8(v_a_2920_, sizeof(void*)*4 + 2);
lean_dec(v_a_2920_);
if (v_resetReuse_2924_ == 0)
{
lean_object* v___x_2926_; 
if (v_isShared_2923_ == 0)
{
lean_ctor_set(v___x_2922_, 0, v_decl_2913_);
v___x_2926_ = v___x_2922_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v_decl_2913_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
return v___x_2926_;
}
}
else
{
lean_object* v___x_2928_; 
lean_del_object(v___x_2922_);
lean_inc_ref(v_decl_2913_);
v___x_2928_ = l_Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows(v_decl_2913_, v_a_2914_, v_a_2915_, v_a_2916_, v_a_2917_);
if (lean_obj_tag(v___x_2928_) == 0)
{
lean_object* v_a_2929_; lean_object* v___x_2930_; 
v_a_2929_ = lean_ctor_get(v___x_2928_, 0);
lean_inc_n(v_a_2929_, 2);
lean_dec_ref_known(v___x_2928_, 1);
v___x_2930_ = l_Lean_Compiler_LCNF_Decl_applyOwnedness(v_decl_2913_, v_a_2929_, v_a_2914_, v_a_2915_, v_a_2916_, v_a_2917_);
if (lean_obj_tag(v___x_2930_) == 0)
{
lean_object* v_a_2931_; lean_object* v___x_2932_; uint8_t v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; 
v_a_2931_ = lean_ctor_get(v___x_2930_, 0);
lean_inc(v_a_2931_);
lean_dec_ref_known(v___x_2930_, 1);
v___x_2932_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
v___x_2933_ = 0;
lean_inc(v_a_2929_);
v___x_2934_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2934_, 0, v___x_2932_);
lean_ctor_set(v___x_2934_, 1, v_a_2929_);
lean_ctor_set_uint8(v___x_2934_, sizeof(void*)*2, v___x_2933_);
v___x_2935_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_a_2931_, v___x_2934_, v_a_2914_, v_a_2915_, v_a_2916_, v_a_2917_);
lean_dec_ref_known(v___x_2934_, 2);
if (lean_obj_tag(v___x_2935_) == 0)
{
lean_object* v_a_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; 
v_a_2936_ = lean_ctor_get(v___x_2935_, 0);
lean_inc(v_a_2936_);
lean_dec_ref_known(v___x_2935_, 1);
v___x_2937_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2937_, 0, v___x_2932_);
lean_ctor_set(v___x_2937_, 1, v_a_2929_);
lean_ctor_set_uint8(v___x_2937_, sizeof(void*)*2, v_resetReuse_2924_);
v___x_2938_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_a_2936_, v___x_2937_, v_a_2914_, v_a_2915_, v_a_2916_, v_a_2917_);
lean_dec_ref_known(v___x_2937_, 2);
return v___x_2938_;
}
else
{
lean_dec(v_a_2929_);
return v___x_2935_;
}
}
else
{
lean_dec(v_a_2929_);
return v___x_2930_;
}
}
else
{
lean_object* v_a_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2946_; 
lean_dec_ref(v_decl_2913_);
v_a_2939_ = lean_ctor_get(v___x_2928_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v___x_2928_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2941_ = v___x_2928_;
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_a_2939_);
lean_dec(v___x_2928_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2946_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___x_2944_; 
if (v_isShared_2942_ == 0)
{
v___x_2944_ = v___x_2941_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_a_2939_);
v___x_2944_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
return v___x_2944_;
}
}
}
}
}
}
else
{
lean_object* v_a_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2955_; 
lean_dec_ref(v_decl_2913_);
v_a_2948_ = lean_ctor_get(v___x_2919_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2950_ = v___x_2919_;
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_a_2948_);
lean_dec(v___x_2919_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v___x_2953_; 
if (v_isShared_2951_ == 0)
{
v___x_2953_ = v___x_2950_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v_a_2948_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse___boxed(lean_object* v_decl_2956_, lean_object* v_a_2957_, lean_object* v_a_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_, lean_object* v_a_2961_){
_start:
{
lean_object* v_res_2962_; 
v_res_2962_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse(v_decl_2956_, v_a_2957_, v_a_2958_, v_a_2959_, v_a_2960_);
lean_dec(v_a_2960_);
lean_dec_ref(v_a_2959_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
return v_res_2962_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_insertResetReuse___closed__3(void){
_start:
{
lean_object* v___x_2967_; lean_object* v___x_2968_; uint8_t v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2967_ = lean_unsigned_to_nat(0u);
v___x_2968_ = ((lean_object*)(l_Lean_Compiler_LCNF_insertResetReuse___closed__2));
v___x_2969_ = 2;
v___x_2970_ = ((lean_object*)(l_Lean_Compiler_LCNF_insertResetReuse___closed__1));
v___x_2971_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_2970_, v___x_2969_, v___x_2968_, v___x_2967_);
return v___x_2971_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_insertResetReuse(void){
_start:
{
lean_object* v___x_2972_; 
v___x_2972_ = lean_obj_once(&l_Lean_Compiler_LCNF_insertResetReuse___closed__3, &l_Lean_Compiler_LCNF_insertResetReuse___closed__3_once, _init_l_Lean_Compiler_LCNF_insertResetReuse___closed__3);
return v___x_2972_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3028_ = lean_unsigned_to_nat(2506150707u);
v___x_3029_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3030_ = l_Lean_Name_num___override(v___x_3029_, v___x_3028_);
return v___x_3030_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3032_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3033_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3034_ = l_Lean_Name_str___override(v___x_3033_, v___x_3032_);
return v___x_3034_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3036_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3037_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3038_ = l_Lean_Name_str___override(v___x_3037_, v___x_3036_);
return v___x_3038_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; 
v___x_3039_ = lean_unsigned_to_nat(2u);
v___x_3040_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3041_ = l_Lean_Name_num___override(v___x_3040_, v___x_3039_);
return v___x_3041_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3043_; uint8_t v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3043_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3044_ = 1;
v___x_3045_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3046_ = l_Lean_registerTraceClass(v___x_3043_, v___x_3044_, v___x_3045_);
return v___x_3046_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2____boxed(lean_object* v_a_3047_){
_start:
{
lean_object* v_res_3048_; 
v_res_3048_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_();
return v_res_3048_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_LiveVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PropagateBorrow(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ResetReuse(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_LiveVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PropagateBorrow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_insertResetReuse = _init_l_Lean_Compiler_LCNF_insertResetReuse();
lean_mark_persistent(l_Lean_Compiler_LCNF_insertResetReuse);
res = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ResetReuse(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_LiveVars(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PropagateBorrow(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ResetReuse(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_LiveVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PropagateBorrow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ResetReuse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ResetReuse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ResetReuse(builtin);
}
#ifdef __cplusplus
}
#endif
