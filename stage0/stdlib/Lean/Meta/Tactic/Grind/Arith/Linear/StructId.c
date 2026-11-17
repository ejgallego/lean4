// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Linear.StructId
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.Arith.Cutsat.Util import Lean.Meta.Tactic.Grind.Arith.CommRing.RingId import Lean.Meta.Tactic.Grind.Arith.Linear.Var import Lean.Meta.Sym.Arith.Insts import Init.Grind.Module.Envelope
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
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
extern lean_object* l_Lean_Nat_mkType;
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkType;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Meta_isDefEqD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_mkVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Linear_linearExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkNumeral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_getIsCharInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_Sym_registerInstance___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "`grind linarith` expected"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "\nto be definitionally equal to"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "CommRing"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toRing"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(205, 3, 54, 198, 92, 149, 38, 227)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(247, 129, 99, 43, 16, 237, 154, 169)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Ring"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "toIntModule"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 160, 55, 74, 32, 205, 206, 212)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "IntModule"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "toSemiring"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 231, 134, 53, 190, 181, 242, 194)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Semiring"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "One"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 85, 184, 168, 121, 55, 74, 19)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "one"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 85, 184, 168, 121, 55, 74, 19)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(31, 134, 200, 93, 163, 253, 252, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "OrderedRing"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 123, 155, 51, 122, 17, 247, 247)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "type has a `Preorder` and is a `Semiring`, but is not an ordered ring, failed to synthesize"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "NatModule"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(134, 252, 171, 186, 15, 174, 251, 179)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "NoNatZeroDivisors"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 29, 6, 12, 7, 77, 98, 78)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "HSMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(226, 107, 25, 48, 80, 144, 236, 217)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hSMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(226, 107, 25, 48, 80, 144, 236, 217)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(23, 127, 6, 115, 121, 139, 223, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___lam__1(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__9_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__11_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Zero"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__13_value),LEAN_SCALAR_PTR_LITERAL(192, 171, 244, 106, 217, 72, 118, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__13_value),LEAN_SCALAR_PTR_LITERAL(192, 171, 244, 106, 217, 72, 118, 253)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__15_value),LEAN_SCALAR_PTR_LITERAL(172, 37, 33, 120, 251, 36, 203, 36)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__17_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__18_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__19;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__20_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__17_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__21_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__20_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__21_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__22_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__23_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__24 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__24_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__22_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__25_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__24_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__25_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__26_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__26_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__27 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__27_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__28_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__26_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__29_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__28_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__29 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__29_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "AddCommMonoid"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__30 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__30_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toZero"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__31 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__31_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__32 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__32_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__33 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__33_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__33_value),LEAN_SCALAR_PTR_LITERAL(229, 81, 239, 34, 203, 244, 36, 133)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__34 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__34_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__35 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__35_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__36 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__36_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__36_value),LEAN_SCALAR_PTR_LITERAL(32, 225, 92, 14, 170, 61, 170, 140)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__37 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__37_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toNeg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__38 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__38_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "zsmul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__39 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__39_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instHSMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__40 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__40_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__40_value),LEAN_SCALAR_PTR_LITERAL(131, 168, 246, 170, 1, 89, 173, 16)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__41 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__41_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__42;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "nsmul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__43 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__43_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__44;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__45 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__45_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__46_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__45_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__46 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__46_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__47 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__47_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "IsPartialOrder"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__48 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__48_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toIsPreorder"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__49 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__49_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__47_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__50_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__50_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__48_value),LEAN_SCALAR_PTR_LITERAL(196, 84, 36, 174, 137, 182, 135, 55)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__50_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__49_value),LEAN_SCALAR_PTR_LITERAL(75, 224, 25, 76, 51, 82, 222, 202)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__50 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__50_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "IsLinearOrder"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__51 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__51_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "toIsPartialOrder"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__52 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__52_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__47_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__53_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__53_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__51_value),LEAN_SCALAR_PTR_LITERAL(111, 211, 224, 54, 22, 32, 255, 113)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__53_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__52_value),LEAN_SCALAR_PTR_LITERAL(83, 108, 214, 71, 226, 119, 72, 107)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__53 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__53_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "toAddCommGroup"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__54 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__54_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__55_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__55_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__55_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__55_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__55_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__54_value),LEAN_SCALAR_PTR_LITERAL(205, 72, 3, 192, 99, 106, 67, 167)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__55 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__55_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "AddCommGroup"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__56 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__56_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "toAddCommMonoid"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__57 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__57_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__58_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__58_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__56_value),LEAN_SCALAR_PTR_LITERAL(64, 158, 132, 153, 136, 140, 172, 182)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__58_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__57_value),LEAN_SCALAR_PTR_LITERAL(143, 195, 31, 215, 150, 195, 138, 195)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__58 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__58_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Field"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__59 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__59_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__60_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__60_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__59_value),LEAN_SCALAR_PTR_LITERAL(69, 164, 44, 189, 207, 226, 143, 119)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__60 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__60_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__61 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__61_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__61_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__62 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__62_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__63 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__63_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__61_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__64_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__63_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__64 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__64_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "OrderedAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__65 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__65_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__66_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__66_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__65_value),LEAN_SCALAR_PTR_LITERAL(93, 134, 71, 250, 19, 181, 172, 227)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__66 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__66_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "OfNatModule"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ofNatModule"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 53, 51, 211, 82, 161, 6, 157)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(59, 244, 42, 211, 144, 181, 88, 194)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__30_value),LEAN_SCALAR_PTR_LITERAL(28, 233, 202, 97, 203, 184, 134, 106)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__31_value),LEAN_SCALAR_PTR_LITERAL(124, 125, 226, 15, 218, 207, 24, 84)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toOfNat0"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__13_value),LEAN_SCALAR_PTR_LITERAL(192, 171, 244, 106, 217, 72, 118, 253)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(208, 59, 186, 84, 178, 224, 2, 186)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__30_value),LEAN_SCALAR_PTR_LITERAL(28, 233, 202, 97, 203, 184, 134, 106)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__32_value),LEAN_SCALAR_PTR_LITERAL(85, 115, 161, 225, 76, 32, 159, 151)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__56_value),LEAN_SCALAR_PTR_LITERAL(64, 158, 132, 153, 136, 140, 172, 182)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__35_value),LEAN_SCALAR_PTR_LITERAL(220, 51, 153, 189, 12, 154, 25, 167)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__56_value),LEAN_SCALAR_PTR_LITERAL(64, 158, 132, 153, 136, 140, 172, 182)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__38_value),LEAN_SCALAR_PTR_LITERAL(144, 111, 86, 72, 218, 93, 29, 215)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__39_value),LEAN_SCALAR_PTR_LITERAL(245, 167, 193, 225, 213, 13, 125, 56)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__10_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__43_value),LEAN_SCALAR_PTR_LITERAL(168, 238, 174, 79, 173, 177, 80, 34)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Add"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__11_value),LEAN_SCALAR_PTR_LITERAL(123, 91, 0, 102, 155, 93, 69, 240)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "AddRightCancel"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__14_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__13_value),LEAN_SCALAR_PTR_LITERAL(33, 101, 175, 31, 110, 234, 168, 33)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "instNoNatZeroDivisorsQOfAddRightCancel"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__16_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__16_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 53, 51, 211, 82, 161, 6, 157)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__16_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__15_value),LEAN_SCALAR_PTR_LITERAL(89, 64, 142, 19, 104, 31, 117, 205)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "instIsLinearOrderQ"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__18_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__18_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 53, 51, 211, 82, 161, 6, 157)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__18_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__17_value),LEAN_SCALAR_PTR_LITERAL(230, 87, 230, 220, 201, 183, 231, 166)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "instLEQOfOrderedAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__20_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__20_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__20_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__20_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 53, 51, 211, 82, 161, 6, 157)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__20_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__19_value),LEAN_SCALAR_PTR_LITERAL(161, 134, 150, 210, 182, 168, 122, 167)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__20_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "instLTQOfOrderedAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__21_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__22_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__22_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__22_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__22_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 53, 51, 211, 82, 161, 6, 157)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__22_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__21_value),LEAN_SCALAR_PTR_LITERAL(159, 207, 2, 71, 208, 154, 4, 243)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__22_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "instIsPreorderQ"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__23_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__24_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__24_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__24_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__24_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 53, 51, 211, 82, 161, 6, 157)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__24_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__23_value),LEAN_SCALAR_PTR_LITERAL(189, 25, 119, 3, 206, 38, 180, 214)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__24 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__24_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "instOrderedAddQ"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__26_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__26_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__26_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 53, 51, 211, 82, 161, 6, 157)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__26_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__25_value),LEAN_SCALAR_PTR_LITERAL(120, 114, 202, 218, 72, 0, 10, 14)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__26_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__27 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__27_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__28_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "instLawfulOrderLT"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__29 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__29_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__27_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__30_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__28_value),LEAN_SCALAR_PTR_LITERAL(161, 160, 205, 130, 233, 12, 158, 28)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__30_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__29_value),LEAN_SCALAR_PTR_LITERAL(64, 237, 13, 63, 87, 160, 117, 97)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__30 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__30_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Q"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 53, 51, 211, 82, 161, 6, 157)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(148, 228, 118, 74, 233, 69, 129, 118)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "toQ"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 53, 51, 211, 82, 161, 6, 157)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(100, 80, 29, 215, 2, 174, 123, 91)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "`grind` unexpected failure, failure to initialize auxiliary `IntModule`"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(lean_object* v_e_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lean_Meta_Sym_canon(v_e_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
if (lean_obj_tag(v___x_9_) == 0)
{
lean_object* v_a_10_; lean_object* v___x_11_; 
v_a_10_ = lean_ctor_get(v___x_9_, 0);
lean_inc(v_a_10_);
lean_dec_ref_known(v___x_9_, 1);
v___x_11_ = l_Lean_Meta_Sym_shareCommon(v_a_10_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_11_;
}
else
{
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg___boxed(lean_object* v_e_12_, lean_object* v_a_13_, lean_object* v_a_14_, lean_object* v_a_15_, lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v_e_12_, v_a_13_, v_a_14_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
lean_dec(v_a_18_);
lean_dec_ref(v_a_17_);
lean_dec(v_a_16_);
lean_dec_ref(v_a_15_);
lean_dec(v_a_14_);
lean_dec_ref(v_a_13_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(lean_object* v_e_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v_e_21_, v_a_26_, v_a_27_, v_a_28_, v_a_29_, v_a_30_, v_a_31_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___boxed(lean_object* v_e_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v_e_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_);
lean_dec(v_a_44_);
lean_dec_ref(v_a_43_);
lean_dec(v_a_42_);
lean_dec_ref(v_a_41_);
lean_dec(v_a_40_);
lean_dec_ref(v_a_39_);
lean_dec(v_a_38_);
lean_dec_ref(v_a_37_);
lean_dec(v_a_36_);
lean_dec(v_a_35_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___redArg(lean_object* v_fn_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v_fn_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___redArg___boxed(lean_object* v_fn_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___redArg(v_fn_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_);
lean_dec(v_a_62_);
lean_dec_ref(v_a_61_);
lean_dec(v_a_60_);
lean_dec_ref(v_a_59_);
lean_dec(v_a_58_);
lean_dec_ref(v_a_57_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn(lean_object* v_fn_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v_fn_65_, v_a_70_, v_a_71_, v_a_72_, v_a_73_, v_a_74_, v_a_75_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___boxed(lean_object* v_fn_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn(v_fn_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
lean_dec(v_a_88_);
lean_dec_ref(v_a_87_);
lean_dec(v_a_86_);
lean_dec_ref(v_a_85_);
lean_dec(v_a_84_);
lean_dec_ref(v_a_83_);
lean_dec(v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
lean_dec(v_a_79_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst(lean_object* v_c_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v_c_91_, v_a_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_103_) == 0)
{
lean_object* v_a_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v_a_104_ = lean_ctor_get(v___x_103_, 0);
lean_inc_n(v_a_104_, 2);
lean_dec_ref_known(v___x_103_, 1);
v___x_105_ = lean_unsigned_to_nat(0u);
v___x_106_ = lean_box(0);
lean_inc(v_a_101_);
lean_inc_ref(v_a_100_);
lean_inc(v_a_99_);
lean_inc_ref(v_a_98_);
lean_inc(v_a_97_);
lean_inc_ref(v_a_96_);
lean_inc(v_a_95_);
lean_inc_ref(v_a_94_);
lean_inc(v_a_93_);
lean_inc(v_a_92_);
v___x_107_ = lean_grind_internalize(v_a_104_, v___x_105_, v___x_106_, v_a_92_, v_a_93_, v_a_94_, v_a_95_, v_a_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_114_; 
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_114_ == 0)
{
lean_object* v_unused_115_; 
v_unused_115_ = lean_ctor_get(v___x_107_, 0);
lean_dec(v_unused_115_);
v___x_109_ = v___x_107_;
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
else
{
lean_dec(v___x_107_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_112_; 
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 0, v_a_104_);
v___x_112_ = v___x_109_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_104_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
else
{
lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_123_; 
lean_dec(v_a_104_);
v_a_116_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_123_ == 0)
{
v___x_118_ = v___x_107_;
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_107_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_121_; 
if (v_isShared_119_ == 0)
{
v___x_121_ = v___x_118_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_a_116_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
}
else
{
return v___x_103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst___boxed(lean_object* v_c_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst(v_c_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_);
lean_dec(v_a_134_);
lean_dec_ref(v_a_133_);
lean_dec(v_a_132_);
lean_dec_ref(v_a_131_);
lean_dec(v_a_130_);
lean_dec_ref(v_a_129_);
lean_dec(v_a_128_);
lean_dec_ref(v_a_127_);
lean_dec(v_a_126_);
lean_dec(v_a_125_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(lean_object* v_c_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l_Lean_Meta_Sym_canon(v_c_137_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_);
if (lean_obj_tag(v___x_149_) == 0)
{
lean_object* v_a_150_; lean_object* v___x_151_; 
v_a_150_ = lean_ctor_get(v___x_149_, 0);
lean_inc(v_a_150_);
lean_dec_ref_known(v___x_149_, 1);
v___x_151_ = l_Lean_Meta_Sym_shareCommon(v_a_150_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_);
if (lean_obj_tag(v___x_151_) == 0)
{
lean_object* v_a_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v_a_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc_n(v_a_152_, 2);
lean_dec_ref_known(v___x_151_, 1);
v___x_153_ = lean_unsigned_to_nat(0u);
v___x_154_ = lean_box(0);
lean_inc(v_a_147_);
lean_inc_ref(v_a_146_);
lean_inc(v_a_145_);
lean_inc_ref(v_a_144_);
lean_inc(v_a_143_);
lean_inc_ref(v_a_142_);
lean_inc(v_a_141_);
lean_inc_ref(v_a_140_);
lean_inc(v_a_139_);
lean_inc(v_a_138_);
v___x_155_ = lean_grind_internalize(v_a_152_, v___x_153_, v___x_154_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_);
if (lean_obj_tag(v___x_155_) == 0)
{
lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_162_; 
v_isSharedCheck_162_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_162_ == 0)
{
lean_object* v_unused_163_; 
v_unused_163_ = lean_ctor_get(v___x_155_, 0);
lean_dec(v_unused_163_);
v___x_157_ = v___x_155_;
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
else
{
lean_dec(v___x_155_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_160_; 
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v_a_152_);
v___x_160_ = v___x_157_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v_a_152_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_dec(v_a_152_);
v_a_164_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_155_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_155_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_a_164_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
else
{
return v___x_151_;
}
}
else
{
return v___x_149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst___boxed(lean_object* v_c_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(v_c_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_, v_a_178_, v_a_179_, v_a_180_, v_a_181_, v_a_182_);
lean_dec(v_a_182_);
lean_dec_ref(v_a_181_);
lean_dec(v_a_180_);
lean_dec_ref(v_a_179_);
lean_dec(v_a_178_);
lean_dec_ref(v_a_177_);
lean_dec(v_a_176_);
lean_dec_ref(v_a_175_);
lean_dec(v_a_174_);
lean_dec(v_a_173_);
return v_res_184_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__0));
v___x_187_ = l_Lean_stringToMessageData(v___x_186_);
return v___x_187_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__2));
v___x_190_ = l_Lean_stringToMessageData(v___x_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(lean_object* v_a_191_, lean_object* v_b_192_){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_194_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1);
v___x_195_ = l_Lean_indentExpr(v_a_191_);
v___x_196_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_194_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3);
v___x_198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_196_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = l_Lean_indentExpr(v_b_192_);
v___x_200_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_198_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___boxed(lean_object* v_a_202_, lean_object* v_b_203_, lean_object* v_a_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_a_202_, v_b_203_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg(lean_object* v_a_206_, lean_object* v_b_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_a_206_, v_b_207_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___boxed(lean_object* v_a_214_, lean_object* v_b_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg(v_a_214_, v_b_215_, v_a_216_, v_a_217_, v_a_218_, v_a_219_);
lean_dec(v_a_219_);
lean_dec_ref(v_a_218_);
lean_dec(v_a_217_);
lean_dec_ref(v_a_216_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(lean_object* v_msgData_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v___x_228_; lean_object* v_env_229_; uint8_t v___x_230_; lean_object* v_env_231_; lean_object* v___x_232_; lean_object* v_toCold_233_; lean_object* v_mctx_234_; lean_object* v_lctx_235_; lean_object* v_options_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_228_ = lean_st_ref_get(v___y_226_);
v_env_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc_ref(v_env_229_);
lean_dec(v___x_228_);
v___x_230_ = 0;
v_env_231_ = l_Lean_Environment_setRecordingDeps(v_env_229_, v___x_230_);
v___x_232_ = lean_st_ref_get(v___y_224_);
v_toCold_233_ = lean_ctor_get(v___y_225_, 0);
v_mctx_234_ = lean_ctor_get(v___x_232_, 0);
lean_inc_ref(v_mctx_234_);
lean_dec(v___x_232_);
v_lctx_235_ = lean_ctor_get(v___y_223_, 2);
v_options_236_ = lean_ctor_get(v_toCold_233_, 2);
lean_inc_ref(v_options_236_);
lean_inc_ref(v_lctx_235_);
v___x_237_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_237_, 0, v_env_231_);
lean_ctor_set(v___x_237_, 1, v_mctx_234_);
lean_ctor_set(v___x_237_, 2, v_lctx_235_);
lean_ctor_set(v___x_237_, 3, v_options_236_);
v___x_238_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
lean_ctor_set(v___x_238_, 1, v_msgData_222_);
v___x_239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0___boxed(lean_object* v_msgData_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(v_msgData_240_, v___y_241_, v___y_242_, v___y_243_, v___y_244_);
lean_dec(v___y_244_);
lean_dec_ref(v___y_243_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(lean_object* v_msg_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_ref_253_; lean_object* v___x_254_; lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_263_; 
v_ref_253_ = lean_ctor_get(v___y_250_, 2);
v___x_254_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(v_msg_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
v_a_255_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_263_ == 0)
{
v___x_257_ = v___x_254_;
v_isShared_258_ = v_isSharedCheck_263_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_254_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_263_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_259_; lean_object* v___x_261_; 
lean_inc(v_ref_253_);
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v_ref_253_);
lean_ctor_set(v___x_259_, 1, v_a_255_);
if (v_isShared_258_ == 0)
{
lean_ctor_set_tag(v___x_257_, 1);
lean_ctor_set(v___x_257_, 0, v___x_259_);
v___x_261_ = v___x_257_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_259_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg___boxed(lean_object* v_msg_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(v_msg_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(lean_object* v_a_271_, lean_object* v_b_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_){
_start:
{
lean_object* v___x_278_; 
lean_inc_ref(v_b_272_);
lean_inc_ref(v_a_271_);
v___x_278_ = l_Lean_Meta_isDefEqD(v_a_271_, v_b_272_, v_a_273_, v_a_274_, v_a_275_, v_a_276_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_291_; 
v_a_279_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_291_ == 0)
{
v___x_281_ = v___x_278_;
v_isShared_282_ = v_isSharedCheck_291_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_278_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_291_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
uint8_t v___x_283_; 
v___x_283_ = lean_unbox(v_a_279_);
lean_dec(v_a_279_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; lean_object* v_a_285_; lean_object* v___x_286_; 
lean_del_object(v___x_281_);
v___x_284_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_a_271_, v_b_272_);
v_a_285_ = lean_ctor_get(v___x_284_, 0);
lean_inc(v_a_285_);
lean_dec_ref(v___x_284_);
v___x_286_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(v_a_285_, v_a_273_, v_a_274_, v_a_275_, v_a_276_);
return v___x_286_;
}
else
{
lean_object* v___x_287_; lean_object* v___x_289_; 
lean_dec_ref(v_b_272_);
lean_dec_ref(v_a_271_);
v___x_287_ = lean_box(0);
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 0, v___x_287_);
v___x_289_ = v___x_281_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___x_287_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
}
else
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_299_; 
lean_dec_ref(v_b_272_);
lean_dec_ref(v_a_271_);
v_a_292_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_299_ == 0)
{
v___x_294_ = v___x_278_;
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___x_278_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_297_; 
if (v_isShared_295_ == 0)
{
v___x_297_ = v___x_294_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v_a_292_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq___boxed(lean_object* v_a_300_, lean_object* v_b_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_a_300_, v_b_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_);
lean_dec(v_a_305_);
lean_dec_ref(v_a_304_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0(lean_object* v_00_u03b1_308_, lean_object* v_msg_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(v_msg_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___boxed(lean_object* v_00_u03b1_316_, lean_object* v_msg_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0(v_00_u03b1_316_, v_msg_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
lean_dec(v___y_321_);
lean_dec_ref(v___y_320_);
lean_dec(v___y_319_);
lean_dec_ref(v___y_318_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(lean_object* v_p_324_, lean_object* v___x_325_, lean_object* v___x_326_, lean_object* v_x_327_, size_t v_x_328_, size_t v_x_329_){
_start:
{
if (lean_obj_tag(v_x_327_) == 0)
{
lean_object* v_cs_330_; size_t v_j_331_; lean_object* v___x_332_; lean_object* v___x_333_; uint8_t v___x_334_; 
v_cs_330_ = lean_ctor_get(v_x_327_, 0);
v_j_331_ = lean_usize_shift_right(v_x_328_, v_x_329_);
v___x_332_ = lean_usize_to_nat(v_j_331_);
v___x_333_ = lean_array_get_size(v_cs_330_);
v___x_334_ = lean_nat_dec_lt(v___x_332_, v___x_333_);
if (v___x_334_ == 0)
{
lean_dec(v___x_332_);
lean_dec(v_p_324_);
return v_x_327_;
}
else
{
lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_352_; 
lean_inc_ref(v_cs_330_);
v_isSharedCheck_352_ = !lean_is_exclusive(v_x_327_);
if (v_isSharedCheck_352_ == 0)
{
lean_object* v_unused_353_; 
v_unused_353_ = lean_ctor_get(v_x_327_, 0);
lean_dec(v_unused_353_);
v___x_336_ = v_x_327_;
v_isShared_337_ = v_isSharedCheck_352_;
goto v_resetjp_335_;
}
else
{
lean_dec(v_x_327_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_352_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
size_t v___x_338_; size_t v___x_339_; size_t v___x_340_; size_t v_i_341_; size_t v___x_342_; size_t v_shift_343_; lean_object* v_v_344_; lean_object* v___x_345_; lean_object* v_xs_x27_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_350_; 
v___x_338_ = ((size_t)1ULL);
v___x_339_ = lean_usize_shift_left(v___x_338_, v_x_329_);
v___x_340_ = lean_usize_sub(v___x_339_, v___x_338_);
v_i_341_ = lean_usize_land(v_x_328_, v___x_340_);
v___x_342_ = ((size_t)5ULL);
v_shift_343_ = lean_usize_sub(v_x_329_, v___x_342_);
v_v_344_ = lean_array_fget(v_cs_330_, v___x_332_);
v___x_345_ = lean_box(0);
v_xs_x27_346_ = lean_array_fset(v_cs_330_, v___x_332_, v___x_345_);
v___x_347_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(v_p_324_, v___x_325_, v___x_326_, v_v_344_, v_i_341_, v_shift_343_);
v___x_348_ = lean_array_fset(v_xs_x27_346_, v___x_332_, v___x_347_);
lean_dec(v___x_332_);
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v___x_348_);
v___x_350_ = v___x_336_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v___x_348_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
else
{
lean_object* v_vs_354_; lean_object* v___x_355_; lean_object* v___x_356_; uint8_t v___x_357_; 
v_vs_354_ = lean_ctor_get(v_x_327_, 0);
v___x_355_ = lean_usize_to_nat(v_x_328_);
v___x_356_ = lean_array_get_size(v_vs_354_);
v___x_357_ = lean_nat_dec_lt(v___x_355_, v___x_356_);
if (v___x_357_ == 0)
{
lean_dec(v___x_355_);
lean_dec(v_p_324_);
return v_x_327_;
}
else
{
lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_372_; 
lean_inc_ref(v_vs_354_);
v_isSharedCheck_372_ = !lean_is_exclusive(v_x_327_);
if (v_isSharedCheck_372_ == 0)
{
lean_object* v_unused_373_; 
v_unused_373_ = lean_ctor_get(v_x_327_, 0);
lean_dec(v_unused_373_);
v___x_359_ = v_x_327_;
v_isShared_360_ = v_isSharedCheck_372_;
goto v_resetjp_358_;
}
else
{
lean_dec(v_x_327_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_372_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
uint8_t v___x_361_; lean_object* v_v_362_; lean_object* v___x_363_; lean_object* v_xs_x27_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_370_; 
v___x_361_ = lean_nat_dec_lt(v___x_325_, v___x_326_);
v_v_362_ = lean_array_fget(v_vs_354_, v___x_355_);
v___x_363_ = lean_box(0);
v_xs_x27_364_ = lean_array_fset(v_vs_354_, v___x_355_, v___x_363_);
v___x_365_ = lean_box(9);
v___x_366_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_366_, 0, v_p_324_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*2, v___x_361_);
v___x_367_ = l_Lean_PersistentArray_push___redArg(v_v_362_, v___x_366_);
v___x_368_ = lean_array_fset(v_xs_x27_364_, v___x_355_, v___x_367_);
lean_dec(v___x_355_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_368_);
v___x_370_ = v___x_359_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v___x_368_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0___boxed(lean_object* v_p_374_, lean_object* v___x_375_, lean_object* v___x_376_, lean_object* v_x_377_, lean_object* v_x_378_, lean_object* v_x_379_){
_start:
{
size_t v_x_283__boxed_380_; size_t v_x_284__boxed_381_; lean_object* v_res_382_; 
v_x_283__boxed_380_ = lean_unbox_usize(v_x_378_);
lean_dec(v_x_378_);
v_x_284__boxed_381_ = lean_unbox_usize(v_x_379_);
lean_dec(v_x_379_);
v_res_382_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(v_p_374_, v___x_375_, v___x_376_, v_x_377_, v_x_283__boxed_380_, v_x_284__boxed_381_);
lean_dec(v___x_376_);
lean_dec(v___x_375_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0(lean_object* v_p_383_, lean_object* v___x_384_, lean_object* v___x_385_, lean_object* v_t_386_, lean_object* v_i_387_){
_start:
{
lean_object* v_root_388_; lean_object* v_tail_389_; lean_object* v_size_390_; size_t v_shift_391_; lean_object* v_tailOff_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_419_; 
v_root_388_ = lean_ctor_get(v_t_386_, 0);
v_tail_389_ = lean_ctor_get(v_t_386_, 1);
v_size_390_ = lean_ctor_get(v_t_386_, 2);
v_shift_391_ = lean_ctor_get_usize(v_t_386_, 4);
v_tailOff_392_ = lean_ctor_get(v_t_386_, 3);
v_isSharedCheck_419_ = !lean_is_exclusive(v_t_386_);
if (v_isSharedCheck_419_ == 0)
{
v___x_394_ = v_t_386_;
v_isShared_395_ = v_isSharedCheck_419_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_tailOff_392_);
lean_inc(v_size_390_);
lean_inc(v_tail_389_);
lean_inc(v_root_388_);
lean_dec(v_t_386_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_419_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
uint8_t v___x_396_; 
v___x_396_ = lean_nat_dec_le(v_tailOff_392_, v_i_387_);
if (v___x_396_ == 0)
{
size_t v___x_397_; lean_object* v___x_398_; lean_object* v___x_400_; 
v___x_397_ = lean_usize_of_nat(v_i_387_);
v___x_398_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(v_p_383_, v___x_384_, v___x_385_, v_root_388_, v___x_397_, v_shift_391_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v___x_398_);
v___x_400_ = v___x_394_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v___x_398_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v_tail_389_);
lean_ctor_set(v_reuseFailAlloc_401_, 2, v_size_390_);
lean_ctor_set(v_reuseFailAlloc_401_, 3, v_tailOff_392_);
lean_ctor_set_usize(v_reuseFailAlloc_401_, 4, v_shift_391_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
else
{
lean_object* v___x_402_; lean_object* v___x_403_; uint8_t v___x_404_; 
v___x_402_ = lean_nat_sub(v_i_387_, v_tailOff_392_);
v___x_403_ = lean_array_get_size(v_tail_389_);
v___x_404_ = lean_nat_dec_lt(v___x_402_, v___x_403_);
if (v___x_404_ == 0)
{
lean_object* v___x_406_; 
lean_dec(v___x_402_);
lean_dec(v_p_383_);
if (v_isShared_395_ == 0)
{
v___x_406_ = v___x_394_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_root_388_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_tail_389_);
lean_ctor_set(v_reuseFailAlloc_407_, 2, v_size_390_);
lean_ctor_set(v_reuseFailAlloc_407_, 3, v_tailOff_392_);
lean_ctor_set_usize(v_reuseFailAlloc_407_, 4, v_shift_391_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
else
{
uint8_t v___x_408_; lean_object* v_v_409_; lean_object* v___x_410_; lean_object* v_xs_x27_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_417_; 
v___x_408_ = lean_nat_dec_lt(v___x_384_, v___x_385_);
v_v_409_ = lean_array_fget(v_tail_389_, v___x_402_);
v___x_410_ = lean_box(0);
v_xs_x27_411_ = lean_array_fset(v_tail_389_, v___x_402_, v___x_410_);
v___x_412_ = lean_box(9);
v___x_413_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_413_, 0, v_p_383_);
lean_ctor_set(v___x_413_, 1, v___x_412_);
lean_ctor_set_uint8(v___x_413_, sizeof(void*)*2, v___x_408_);
v___x_414_ = l_Lean_PersistentArray_push___redArg(v_v_409_, v___x_413_);
v___x_415_ = lean_array_fset(v_xs_x27_411_, v___x_402_, v___x_414_);
lean_dec(v___x_402_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 1, v___x_415_);
v___x_417_ = v___x_394_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_root_388_);
lean_ctor_set(v_reuseFailAlloc_418_, 1, v___x_415_);
lean_ctor_set(v_reuseFailAlloc_418_, 2, v_size_390_);
lean_ctor_set(v_reuseFailAlloc_418_, 3, v_tailOff_392_);
lean_ctor_set_usize(v_reuseFailAlloc_418_, 4, v_shift_391_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0___boxed(lean_object* v_p_420_, lean_object* v___x_421_, lean_object* v___x_422_, lean_object* v_t_423_, lean_object* v_i_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0(v_p_420_, v___x_421_, v___x_422_, v_t_423_, v_i_424_);
lean_dec(v_i_424_);
lean_dec(v___x_422_);
lean_dec(v___x_421_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0(lean_object* v_a_426_, lean_object* v_p_427_, lean_object* v_one_428_, lean_object* v_s_429_){
_start:
{
lean_object* v_structs_430_; lean_object* v_typeIdOf_431_; lean_object* v_exprToStructId_432_; lean_object* v_exprToStructIdEntries_433_; lean_object* v_forbiddenNatModules_434_; lean_object* v_natStructs_435_; lean_object* v_natTypeIdOf_436_; lean_object* v_exprToNatStructId_437_; lean_object* v___x_438_; uint8_t v___x_439_; 
v_structs_430_ = lean_ctor_get(v_s_429_, 0);
v_typeIdOf_431_ = lean_ctor_get(v_s_429_, 1);
v_exprToStructId_432_ = lean_ctor_get(v_s_429_, 2);
v_exprToStructIdEntries_433_ = lean_ctor_get(v_s_429_, 3);
v_forbiddenNatModules_434_ = lean_ctor_get(v_s_429_, 4);
v_natStructs_435_ = lean_ctor_get(v_s_429_, 5);
v_natTypeIdOf_436_ = lean_ctor_get(v_s_429_, 6);
v_exprToNatStructId_437_ = lean_ctor_get(v_s_429_, 7);
v___x_438_ = lean_array_get_size(v_structs_430_);
v___x_439_ = lean_nat_dec_lt(v_a_426_, v___x_438_);
if (v___x_439_ == 0)
{
lean_dec(v_p_427_);
return v_s_429_;
}
else
{
lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_501_; 
lean_inc_ref(v_exprToNatStructId_437_);
lean_inc_ref(v_natTypeIdOf_436_);
lean_inc_ref(v_natStructs_435_);
lean_inc_ref(v_forbiddenNatModules_434_);
lean_inc_ref(v_exprToStructIdEntries_433_);
lean_inc_ref(v_exprToStructId_432_);
lean_inc_ref(v_typeIdOf_431_);
lean_inc_ref(v_structs_430_);
v_isSharedCheck_501_ = !lean_is_exclusive(v_s_429_);
if (v_isSharedCheck_501_ == 0)
{
lean_object* v_unused_502_; lean_object* v_unused_503_; lean_object* v_unused_504_; lean_object* v_unused_505_; lean_object* v_unused_506_; lean_object* v_unused_507_; lean_object* v_unused_508_; lean_object* v_unused_509_; 
v_unused_502_ = lean_ctor_get(v_s_429_, 7);
lean_dec(v_unused_502_);
v_unused_503_ = lean_ctor_get(v_s_429_, 6);
lean_dec(v_unused_503_);
v_unused_504_ = lean_ctor_get(v_s_429_, 5);
lean_dec(v_unused_504_);
v_unused_505_ = lean_ctor_get(v_s_429_, 4);
lean_dec(v_unused_505_);
v_unused_506_ = lean_ctor_get(v_s_429_, 3);
lean_dec(v_unused_506_);
v_unused_507_ = lean_ctor_get(v_s_429_, 2);
lean_dec(v_unused_507_);
v_unused_508_ = lean_ctor_get(v_s_429_, 1);
lean_dec(v_unused_508_);
v_unused_509_ = lean_ctor_get(v_s_429_, 0);
lean_dec(v_unused_509_);
v___x_441_ = v_s_429_;
v_isShared_442_ = v_isSharedCheck_501_;
goto v_resetjp_440_;
}
else
{
lean_dec(v_s_429_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_501_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v_v_443_; lean_object* v_id_444_; lean_object* v_ringId_x3f_445_; lean_object* v_type_446_; lean_object* v_u_447_; lean_object* v_intModuleInst_448_; lean_object* v_leInst_x3f_449_; lean_object* v_ltInst_x3f_450_; lean_object* v_lawfulOrderLTInst_x3f_451_; lean_object* v_isPreorderInst_x3f_452_; lean_object* v_orderedAddInst_x3f_453_; lean_object* v_isLinearInst_x3f_454_; lean_object* v_noNatDivInst_x3f_455_; lean_object* v_ringInst_x3f_456_; lean_object* v_commRingInst_x3f_457_; lean_object* v_orderedRingInst_x3f_458_; lean_object* v_fieldInst_x3f_459_; lean_object* v_charInst_x3f_460_; lean_object* v_zero_461_; lean_object* v_ofNatZero_462_; lean_object* v_one_x3f_463_; lean_object* v_leFn_x3f_464_; lean_object* v_ltFn_x3f_465_; lean_object* v_addFn_466_; lean_object* v_zsmulFn_467_; lean_object* v_nsmulFn_468_; lean_object* v_zsmulFn_x3f_469_; lean_object* v_nsmulFn_x3f_470_; lean_object* v_homomulFn_x3f_471_; lean_object* v_subFn_472_; lean_object* v_negFn_473_; lean_object* v_vars_474_; lean_object* v_varMap_475_; lean_object* v_lowers_476_; lean_object* v_uppers_477_; lean_object* v_diseqs_478_; lean_object* v_assignment_479_; uint8_t v_caseSplits_480_; lean_object* v_conflict_x3f_481_; lean_object* v_diseqSplits_482_; lean_object* v_elimEqs_483_; lean_object* v_elimStack_484_; lean_object* v_occurs_485_; lean_object* v_ignored_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_500_; 
v_v_443_ = lean_array_fget(v_structs_430_, v_a_426_);
v_id_444_ = lean_ctor_get(v_v_443_, 0);
v_ringId_x3f_445_ = lean_ctor_get(v_v_443_, 1);
v_type_446_ = lean_ctor_get(v_v_443_, 2);
v_u_447_ = lean_ctor_get(v_v_443_, 3);
v_intModuleInst_448_ = lean_ctor_get(v_v_443_, 4);
v_leInst_x3f_449_ = lean_ctor_get(v_v_443_, 5);
v_ltInst_x3f_450_ = lean_ctor_get(v_v_443_, 6);
v_lawfulOrderLTInst_x3f_451_ = lean_ctor_get(v_v_443_, 7);
v_isPreorderInst_x3f_452_ = lean_ctor_get(v_v_443_, 8);
v_orderedAddInst_x3f_453_ = lean_ctor_get(v_v_443_, 9);
v_isLinearInst_x3f_454_ = lean_ctor_get(v_v_443_, 10);
v_noNatDivInst_x3f_455_ = lean_ctor_get(v_v_443_, 11);
v_ringInst_x3f_456_ = lean_ctor_get(v_v_443_, 12);
v_commRingInst_x3f_457_ = lean_ctor_get(v_v_443_, 13);
v_orderedRingInst_x3f_458_ = lean_ctor_get(v_v_443_, 14);
v_fieldInst_x3f_459_ = lean_ctor_get(v_v_443_, 15);
v_charInst_x3f_460_ = lean_ctor_get(v_v_443_, 16);
v_zero_461_ = lean_ctor_get(v_v_443_, 17);
v_ofNatZero_462_ = lean_ctor_get(v_v_443_, 18);
v_one_x3f_463_ = lean_ctor_get(v_v_443_, 19);
v_leFn_x3f_464_ = lean_ctor_get(v_v_443_, 20);
v_ltFn_x3f_465_ = lean_ctor_get(v_v_443_, 21);
v_addFn_466_ = lean_ctor_get(v_v_443_, 22);
v_zsmulFn_467_ = lean_ctor_get(v_v_443_, 23);
v_nsmulFn_468_ = lean_ctor_get(v_v_443_, 24);
v_zsmulFn_x3f_469_ = lean_ctor_get(v_v_443_, 25);
v_nsmulFn_x3f_470_ = lean_ctor_get(v_v_443_, 26);
v_homomulFn_x3f_471_ = lean_ctor_get(v_v_443_, 27);
v_subFn_472_ = lean_ctor_get(v_v_443_, 28);
v_negFn_473_ = lean_ctor_get(v_v_443_, 29);
v_vars_474_ = lean_ctor_get(v_v_443_, 30);
v_varMap_475_ = lean_ctor_get(v_v_443_, 31);
v_lowers_476_ = lean_ctor_get(v_v_443_, 32);
v_uppers_477_ = lean_ctor_get(v_v_443_, 33);
v_diseqs_478_ = lean_ctor_get(v_v_443_, 34);
v_assignment_479_ = lean_ctor_get(v_v_443_, 35);
v_caseSplits_480_ = lean_ctor_get_uint8(v_v_443_, sizeof(void*)*42);
v_conflict_x3f_481_ = lean_ctor_get(v_v_443_, 36);
v_diseqSplits_482_ = lean_ctor_get(v_v_443_, 37);
v_elimEqs_483_ = lean_ctor_get(v_v_443_, 38);
v_elimStack_484_ = lean_ctor_get(v_v_443_, 39);
v_occurs_485_ = lean_ctor_get(v_v_443_, 40);
v_ignored_486_ = lean_ctor_get(v_v_443_, 41);
v_isSharedCheck_500_ = !lean_is_exclusive(v_v_443_);
if (v_isSharedCheck_500_ == 0)
{
v___x_488_ = v_v_443_;
v_isShared_489_ = v_isSharedCheck_500_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_ignored_486_);
lean_inc(v_occurs_485_);
lean_inc(v_elimStack_484_);
lean_inc(v_elimEqs_483_);
lean_inc(v_diseqSplits_482_);
lean_inc(v_conflict_x3f_481_);
lean_inc(v_assignment_479_);
lean_inc(v_diseqs_478_);
lean_inc(v_uppers_477_);
lean_inc(v_lowers_476_);
lean_inc(v_varMap_475_);
lean_inc(v_vars_474_);
lean_inc(v_negFn_473_);
lean_inc(v_subFn_472_);
lean_inc(v_homomulFn_x3f_471_);
lean_inc(v_nsmulFn_x3f_470_);
lean_inc(v_zsmulFn_x3f_469_);
lean_inc(v_nsmulFn_468_);
lean_inc(v_zsmulFn_467_);
lean_inc(v_addFn_466_);
lean_inc(v_ltFn_x3f_465_);
lean_inc(v_leFn_x3f_464_);
lean_inc(v_one_x3f_463_);
lean_inc(v_ofNatZero_462_);
lean_inc(v_zero_461_);
lean_inc(v_charInst_x3f_460_);
lean_inc(v_fieldInst_x3f_459_);
lean_inc(v_orderedRingInst_x3f_458_);
lean_inc(v_commRingInst_x3f_457_);
lean_inc(v_ringInst_x3f_456_);
lean_inc(v_noNatDivInst_x3f_455_);
lean_inc(v_isLinearInst_x3f_454_);
lean_inc(v_orderedAddInst_x3f_453_);
lean_inc(v_isPreorderInst_x3f_452_);
lean_inc(v_lawfulOrderLTInst_x3f_451_);
lean_inc(v_ltInst_x3f_450_);
lean_inc(v_leInst_x3f_449_);
lean_inc(v_intModuleInst_448_);
lean_inc(v_u_447_);
lean_inc(v_type_446_);
lean_inc(v_ringId_x3f_445_);
lean_inc(v_id_444_);
lean_dec(v_v_443_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_500_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_490_; lean_object* v_xs_x27_491_; lean_object* v___x_492_; lean_object* v___x_494_; 
v___x_490_ = lean_box(0);
v_xs_x27_491_ = lean_array_fset(v_structs_430_, v_a_426_, v___x_490_);
v___x_492_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0(v_p_427_, v_a_426_, v___x_438_, v_lowers_476_, v_one_428_);
if (v_isShared_489_ == 0)
{
lean_ctor_set(v___x_488_, 32, v___x_492_);
v___x_494_ = v___x_488_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_id_444_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_ringId_x3f_445_);
lean_ctor_set(v_reuseFailAlloc_499_, 2, v_type_446_);
lean_ctor_set(v_reuseFailAlloc_499_, 3, v_u_447_);
lean_ctor_set(v_reuseFailAlloc_499_, 4, v_intModuleInst_448_);
lean_ctor_set(v_reuseFailAlloc_499_, 5, v_leInst_x3f_449_);
lean_ctor_set(v_reuseFailAlloc_499_, 6, v_ltInst_x3f_450_);
lean_ctor_set(v_reuseFailAlloc_499_, 7, v_lawfulOrderLTInst_x3f_451_);
lean_ctor_set(v_reuseFailAlloc_499_, 8, v_isPreorderInst_x3f_452_);
lean_ctor_set(v_reuseFailAlloc_499_, 9, v_orderedAddInst_x3f_453_);
lean_ctor_set(v_reuseFailAlloc_499_, 10, v_isLinearInst_x3f_454_);
lean_ctor_set(v_reuseFailAlloc_499_, 11, v_noNatDivInst_x3f_455_);
lean_ctor_set(v_reuseFailAlloc_499_, 12, v_ringInst_x3f_456_);
lean_ctor_set(v_reuseFailAlloc_499_, 13, v_commRingInst_x3f_457_);
lean_ctor_set(v_reuseFailAlloc_499_, 14, v_orderedRingInst_x3f_458_);
lean_ctor_set(v_reuseFailAlloc_499_, 15, v_fieldInst_x3f_459_);
lean_ctor_set(v_reuseFailAlloc_499_, 16, v_charInst_x3f_460_);
lean_ctor_set(v_reuseFailAlloc_499_, 17, v_zero_461_);
lean_ctor_set(v_reuseFailAlloc_499_, 18, v_ofNatZero_462_);
lean_ctor_set(v_reuseFailAlloc_499_, 19, v_one_x3f_463_);
lean_ctor_set(v_reuseFailAlloc_499_, 20, v_leFn_x3f_464_);
lean_ctor_set(v_reuseFailAlloc_499_, 21, v_ltFn_x3f_465_);
lean_ctor_set(v_reuseFailAlloc_499_, 22, v_addFn_466_);
lean_ctor_set(v_reuseFailAlloc_499_, 23, v_zsmulFn_467_);
lean_ctor_set(v_reuseFailAlloc_499_, 24, v_nsmulFn_468_);
lean_ctor_set(v_reuseFailAlloc_499_, 25, v_zsmulFn_x3f_469_);
lean_ctor_set(v_reuseFailAlloc_499_, 26, v_nsmulFn_x3f_470_);
lean_ctor_set(v_reuseFailAlloc_499_, 27, v_homomulFn_x3f_471_);
lean_ctor_set(v_reuseFailAlloc_499_, 28, v_subFn_472_);
lean_ctor_set(v_reuseFailAlloc_499_, 29, v_negFn_473_);
lean_ctor_set(v_reuseFailAlloc_499_, 30, v_vars_474_);
lean_ctor_set(v_reuseFailAlloc_499_, 31, v_varMap_475_);
lean_ctor_set(v_reuseFailAlloc_499_, 32, v___x_492_);
lean_ctor_set(v_reuseFailAlloc_499_, 33, v_uppers_477_);
lean_ctor_set(v_reuseFailAlloc_499_, 34, v_diseqs_478_);
lean_ctor_set(v_reuseFailAlloc_499_, 35, v_assignment_479_);
lean_ctor_set(v_reuseFailAlloc_499_, 36, v_conflict_x3f_481_);
lean_ctor_set(v_reuseFailAlloc_499_, 37, v_diseqSplits_482_);
lean_ctor_set(v_reuseFailAlloc_499_, 38, v_elimEqs_483_);
lean_ctor_set(v_reuseFailAlloc_499_, 39, v_elimStack_484_);
lean_ctor_set(v_reuseFailAlloc_499_, 40, v_occurs_485_);
lean_ctor_set(v_reuseFailAlloc_499_, 41, v_ignored_486_);
lean_ctor_set_uint8(v_reuseFailAlloc_499_, sizeof(void*)*42, v_caseSplits_480_);
v___x_494_ = v_reuseFailAlloc_499_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
lean_object* v___x_495_; lean_object* v___x_497_; 
v___x_495_ = lean_array_fset(v_xs_x27_491_, v_a_426_, v___x_494_);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 0, v___x_495_);
v___x_497_ = v___x_441_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v___x_495_);
lean_ctor_set(v_reuseFailAlloc_498_, 1, v_typeIdOf_431_);
lean_ctor_set(v_reuseFailAlloc_498_, 2, v_exprToStructId_432_);
lean_ctor_set(v_reuseFailAlloc_498_, 3, v_exprToStructIdEntries_433_);
lean_ctor_set(v_reuseFailAlloc_498_, 4, v_forbiddenNatModules_434_);
lean_ctor_set(v_reuseFailAlloc_498_, 5, v_natStructs_435_);
lean_ctor_set(v_reuseFailAlloc_498_, 6, v_natTypeIdOf_436_);
lean_ctor_set(v_reuseFailAlloc_498_, 7, v_exprToNatStructId_437_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0___boxed(lean_object* v_a_510_, lean_object* v_p_511_, lean_object* v_one_512_, lean_object* v_s_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0(v_a_510_, v_p_511_, v_one_512_, v_s_513_);
lean_dec(v_one_512_);
lean_dec(v_a_510_);
return v_res_514_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = lean_unsigned_to_nat(1u);
v___x_516_ = lean_nat_to_int(v___x_515_);
return v___x_516_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1(void){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0);
v___x_518_ = lean_int_neg(v___x_517_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(lean_object* v_one_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v_p_525_; lean_object* v___f_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_523_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1);
v___x_524_ = lean_box(0);
lean_inc(v_one_519_);
v_p_525_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_p_525_, 0, v___x_523_);
lean_ctor_set(v_p_525_, 1, v_one_519_);
lean_ctor_set(v_p_525_, 2, v___x_524_);
lean_inc(v_a_520_);
v___f_526_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_526_, 0, v_a_520_);
lean_closure_set(v___f_526_, 1, v_p_525_);
lean_closure_set(v___f_526_, 2, v_one_519_);
v___x_527_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_528_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_527_, v___f_526_, v_a_521_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___boxed(lean_object* v_one_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(v_one_529_, v_a_530_, v_a_531_);
lean_dec(v_a_531_);
lean_dec(v_a_530_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne(lean_object* v_one_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(v_one_534_, v_a_535_, v_a_536_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___boxed(lean_object* v_one_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne(v_one_548_, v_a_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
lean_dec(v_a_559_);
lean_dec_ref(v_a_558_);
lean_dec(v_a_557_);
lean_dec_ref(v_a_556_);
lean_dec(v_a_555_);
lean_dec_ref(v_a_554_);
lean_dec(v_a_553_);
lean_dec_ref(v_a_552_);
lean_dec(v_a_551_);
lean_dec(v_a_550_);
lean_dec(v_a_549_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(lean_object* v_p_562_, lean_object* v_x_563_, size_t v_x_564_, size_t v_x_565_){
_start:
{
if (lean_obj_tag(v_x_563_) == 0)
{
lean_object* v_cs_566_; size_t v_j_567_; lean_object* v___x_568_; lean_object* v___x_569_; uint8_t v___x_570_; 
v_cs_566_ = lean_ctor_get(v_x_563_, 0);
v_j_567_ = lean_usize_shift_right(v_x_564_, v_x_565_);
v___x_568_ = lean_usize_to_nat(v_j_567_);
v___x_569_ = lean_array_get_size(v_cs_566_);
v___x_570_ = lean_nat_dec_lt(v___x_568_, v___x_569_);
if (v___x_570_ == 0)
{
lean_dec(v___x_568_);
lean_dec(v_p_562_);
return v_x_563_;
}
else
{
lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_588_; 
lean_inc_ref(v_cs_566_);
v_isSharedCheck_588_ = !lean_is_exclusive(v_x_563_);
if (v_isSharedCheck_588_ == 0)
{
lean_object* v_unused_589_; 
v_unused_589_ = lean_ctor_get(v_x_563_, 0);
lean_dec(v_unused_589_);
v___x_572_ = v_x_563_;
v_isShared_573_ = v_isSharedCheck_588_;
goto v_resetjp_571_;
}
else
{
lean_dec(v_x_563_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_588_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
size_t v___x_574_; size_t v___x_575_; size_t v___x_576_; size_t v_i_577_; size_t v___x_578_; size_t v_shift_579_; lean_object* v_v_580_; lean_object* v___x_581_; lean_object* v_xs_x27_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_586_; 
v___x_574_ = ((size_t)1ULL);
v___x_575_ = lean_usize_shift_left(v___x_574_, v_x_565_);
v___x_576_ = lean_usize_sub(v___x_575_, v___x_574_);
v_i_577_ = lean_usize_land(v_x_564_, v___x_576_);
v___x_578_ = ((size_t)5ULL);
v_shift_579_ = lean_usize_sub(v_x_565_, v___x_578_);
v_v_580_ = lean_array_fget(v_cs_566_, v___x_568_);
v___x_581_ = lean_box(0);
v_xs_x27_582_ = lean_array_fset(v_cs_566_, v___x_568_, v___x_581_);
v___x_583_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(v_p_562_, v_v_580_, v_i_577_, v_shift_579_);
v___x_584_ = lean_array_fset(v_xs_x27_582_, v___x_568_, v___x_583_);
lean_dec(v___x_568_);
if (v_isShared_573_ == 0)
{
lean_ctor_set(v___x_572_, 0, v___x_584_);
v___x_586_ = v___x_572_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_584_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
}
else
{
lean_object* v_vs_590_; lean_object* v___x_591_; lean_object* v___x_592_; uint8_t v___x_593_; 
v_vs_590_ = lean_ctor_get(v_x_563_, 0);
v___x_591_ = lean_usize_to_nat(v_x_564_);
v___x_592_ = lean_array_get_size(v_vs_590_);
v___x_593_ = lean_nat_dec_lt(v___x_591_, v___x_592_);
if (v___x_593_ == 0)
{
lean_dec(v___x_591_);
lean_dec(v_p_562_);
return v_x_563_;
}
else
{
lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_607_; 
lean_inc_ref(v_vs_590_);
v_isSharedCheck_607_ = !lean_is_exclusive(v_x_563_);
if (v_isSharedCheck_607_ == 0)
{
lean_object* v_unused_608_; 
v_unused_608_ = lean_ctor_get(v_x_563_, 0);
lean_dec(v_unused_608_);
v___x_595_ = v_x_563_;
v_isShared_596_ = v_isSharedCheck_607_;
goto v_resetjp_594_;
}
else
{
lean_dec(v_x_563_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_607_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v_v_597_; lean_object* v___x_598_; lean_object* v_xs_x27_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_605_; 
v_v_597_ = lean_array_fget(v_vs_590_, v___x_591_);
v___x_598_ = lean_box(0);
v_xs_x27_599_ = lean_array_fset(v_vs_590_, v___x_591_, v___x_598_);
v___x_600_ = lean_box(6);
v___x_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_601_, 0, v_p_562_);
lean_ctor_set(v___x_601_, 1, v___x_600_);
v___x_602_ = l_Lean_PersistentArray_push___redArg(v_v_597_, v___x_601_);
v___x_603_ = lean_array_fset(v_xs_x27_599_, v___x_591_, v___x_602_);
lean_dec(v___x_591_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_603_);
v___x_605_ = v___x_595_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_603_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0___boxed(lean_object* v_p_609_, lean_object* v_x_610_, lean_object* v_x_611_, lean_object* v_x_612_){
_start:
{
size_t v_x_266__boxed_613_; size_t v_x_267__boxed_614_; lean_object* v_res_615_; 
v_x_266__boxed_613_ = lean_unbox_usize(v_x_611_);
lean_dec(v_x_611_);
v_x_267__boxed_614_ = lean_unbox_usize(v_x_612_);
lean_dec(v_x_612_);
v_res_615_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(v_p_609_, v_x_610_, v_x_266__boxed_613_, v_x_267__boxed_614_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0(lean_object* v_p_616_, lean_object* v_t_617_, lean_object* v_i_618_){
_start:
{
lean_object* v_root_619_; lean_object* v_tail_620_; lean_object* v_size_621_; size_t v_shift_622_; lean_object* v_tailOff_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_649_; 
v_root_619_ = lean_ctor_get(v_t_617_, 0);
v_tail_620_ = lean_ctor_get(v_t_617_, 1);
v_size_621_ = lean_ctor_get(v_t_617_, 2);
v_shift_622_ = lean_ctor_get_usize(v_t_617_, 4);
v_tailOff_623_ = lean_ctor_get(v_t_617_, 3);
v_isSharedCheck_649_ = !lean_is_exclusive(v_t_617_);
if (v_isSharedCheck_649_ == 0)
{
v___x_625_ = v_t_617_;
v_isShared_626_ = v_isSharedCheck_649_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_tailOff_623_);
lean_inc(v_size_621_);
lean_inc(v_tail_620_);
lean_inc(v_root_619_);
lean_dec(v_t_617_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_649_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
uint8_t v___x_627_; 
v___x_627_ = lean_nat_dec_le(v_tailOff_623_, v_i_618_);
if (v___x_627_ == 0)
{
size_t v___x_628_; lean_object* v___x_629_; lean_object* v___x_631_; 
v___x_628_ = lean_usize_of_nat(v_i_618_);
v___x_629_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(v_p_616_, v_root_619_, v___x_628_, v_shift_622_);
if (v_isShared_626_ == 0)
{
lean_ctor_set(v___x_625_, 0, v___x_629_);
v___x_631_ = v___x_625_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_629_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_tail_620_);
lean_ctor_set(v_reuseFailAlloc_632_, 2, v_size_621_);
lean_ctor_set(v_reuseFailAlloc_632_, 3, v_tailOff_623_);
lean_ctor_set_usize(v_reuseFailAlloc_632_, 4, v_shift_622_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
else
{
lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
v___x_633_ = lean_nat_sub(v_i_618_, v_tailOff_623_);
v___x_634_ = lean_array_get_size(v_tail_620_);
v___x_635_ = lean_nat_dec_lt(v___x_633_, v___x_634_);
if (v___x_635_ == 0)
{
lean_object* v___x_637_; 
lean_dec(v___x_633_);
lean_dec(v_p_616_);
if (v_isShared_626_ == 0)
{
v___x_637_ = v___x_625_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_root_619_);
lean_ctor_set(v_reuseFailAlloc_638_, 1, v_tail_620_);
lean_ctor_set(v_reuseFailAlloc_638_, 2, v_size_621_);
lean_ctor_set(v_reuseFailAlloc_638_, 3, v_tailOff_623_);
lean_ctor_set_usize(v_reuseFailAlloc_638_, 4, v_shift_622_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
else
{
lean_object* v_v_639_; lean_object* v___x_640_; lean_object* v_xs_x27_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_647_; 
v_v_639_ = lean_array_fget(v_tail_620_, v___x_633_);
v___x_640_ = lean_box(0);
v_xs_x27_641_ = lean_array_fset(v_tail_620_, v___x_633_, v___x_640_);
v___x_642_ = lean_box(6);
v___x_643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_643_, 0, v_p_616_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
v___x_644_ = l_Lean_PersistentArray_push___redArg(v_v_639_, v___x_643_);
v___x_645_ = lean_array_fset(v_xs_x27_641_, v___x_633_, v___x_644_);
lean_dec(v___x_633_);
if (v_isShared_626_ == 0)
{
lean_ctor_set(v___x_625_, 1, v___x_645_);
v___x_647_ = v___x_625_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_root_619_);
lean_ctor_set(v_reuseFailAlloc_648_, 1, v___x_645_);
lean_ctor_set(v_reuseFailAlloc_648_, 2, v_size_621_);
lean_ctor_set(v_reuseFailAlloc_648_, 3, v_tailOff_623_);
lean_ctor_set_usize(v_reuseFailAlloc_648_, 4, v_shift_622_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0___boxed(lean_object* v_p_650_, lean_object* v_t_651_, lean_object* v_i_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0(v_p_650_, v_t_651_, v_i_652_);
lean_dec(v_i_652_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0(lean_object* v_a_654_, lean_object* v_p_655_, lean_object* v_one_656_, lean_object* v_s_657_){
_start:
{
lean_object* v_structs_658_; lean_object* v_typeIdOf_659_; lean_object* v_exprToStructId_660_; lean_object* v_exprToStructIdEntries_661_; lean_object* v_forbiddenNatModules_662_; lean_object* v_natStructs_663_; lean_object* v_natTypeIdOf_664_; lean_object* v_exprToNatStructId_665_; lean_object* v___x_666_; uint8_t v___x_667_; 
v_structs_658_ = lean_ctor_get(v_s_657_, 0);
v_typeIdOf_659_ = lean_ctor_get(v_s_657_, 1);
v_exprToStructId_660_ = lean_ctor_get(v_s_657_, 2);
v_exprToStructIdEntries_661_ = lean_ctor_get(v_s_657_, 3);
v_forbiddenNatModules_662_ = lean_ctor_get(v_s_657_, 4);
v_natStructs_663_ = lean_ctor_get(v_s_657_, 5);
v_natTypeIdOf_664_ = lean_ctor_get(v_s_657_, 6);
v_exprToNatStructId_665_ = lean_ctor_get(v_s_657_, 7);
v___x_666_ = lean_array_get_size(v_structs_658_);
v___x_667_ = lean_nat_dec_lt(v_a_654_, v___x_666_);
if (v___x_667_ == 0)
{
lean_dec(v_p_655_);
return v_s_657_;
}
else
{
lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_729_; 
lean_inc_ref(v_exprToNatStructId_665_);
lean_inc_ref(v_natTypeIdOf_664_);
lean_inc_ref(v_natStructs_663_);
lean_inc_ref(v_forbiddenNatModules_662_);
lean_inc_ref(v_exprToStructIdEntries_661_);
lean_inc_ref(v_exprToStructId_660_);
lean_inc_ref(v_typeIdOf_659_);
lean_inc_ref(v_structs_658_);
v_isSharedCheck_729_ = !lean_is_exclusive(v_s_657_);
if (v_isSharedCheck_729_ == 0)
{
lean_object* v_unused_730_; lean_object* v_unused_731_; lean_object* v_unused_732_; lean_object* v_unused_733_; lean_object* v_unused_734_; lean_object* v_unused_735_; lean_object* v_unused_736_; lean_object* v_unused_737_; 
v_unused_730_ = lean_ctor_get(v_s_657_, 7);
lean_dec(v_unused_730_);
v_unused_731_ = lean_ctor_get(v_s_657_, 6);
lean_dec(v_unused_731_);
v_unused_732_ = lean_ctor_get(v_s_657_, 5);
lean_dec(v_unused_732_);
v_unused_733_ = lean_ctor_get(v_s_657_, 4);
lean_dec(v_unused_733_);
v_unused_734_ = lean_ctor_get(v_s_657_, 3);
lean_dec(v_unused_734_);
v_unused_735_ = lean_ctor_get(v_s_657_, 2);
lean_dec(v_unused_735_);
v_unused_736_ = lean_ctor_get(v_s_657_, 1);
lean_dec(v_unused_736_);
v_unused_737_ = lean_ctor_get(v_s_657_, 0);
lean_dec(v_unused_737_);
v___x_669_ = v_s_657_;
v_isShared_670_ = v_isSharedCheck_729_;
goto v_resetjp_668_;
}
else
{
lean_dec(v_s_657_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_729_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v_v_671_; lean_object* v_id_672_; lean_object* v_ringId_x3f_673_; lean_object* v_type_674_; lean_object* v_u_675_; lean_object* v_intModuleInst_676_; lean_object* v_leInst_x3f_677_; lean_object* v_ltInst_x3f_678_; lean_object* v_lawfulOrderLTInst_x3f_679_; lean_object* v_isPreorderInst_x3f_680_; lean_object* v_orderedAddInst_x3f_681_; lean_object* v_isLinearInst_x3f_682_; lean_object* v_noNatDivInst_x3f_683_; lean_object* v_ringInst_x3f_684_; lean_object* v_commRingInst_x3f_685_; lean_object* v_orderedRingInst_x3f_686_; lean_object* v_fieldInst_x3f_687_; lean_object* v_charInst_x3f_688_; lean_object* v_zero_689_; lean_object* v_ofNatZero_690_; lean_object* v_one_x3f_691_; lean_object* v_leFn_x3f_692_; lean_object* v_ltFn_x3f_693_; lean_object* v_addFn_694_; lean_object* v_zsmulFn_695_; lean_object* v_nsmulFn_696_; lean_object* v_zsmulFn_x3f_697_; lean_object* v_nsmulFn_x3f_698_; lean_object* v_homomulFn_x3f_699_; lean_object* v_subFn_700_; lean_object* v_negFn_701_; lean_object* v_vars_702_; lean_object* v_varMap_703_; lean_object* v_lowers_704_; lean_object* v_uppers_705_; lean_object* v_diseqs_706_; lean_object* v_assignment_707_; uint8_t v_caseSplits_708_; lean_object* v_conflict_x3f_709_; lean_object* v_diseqSplits_710_; lean_object* v_elimEqs_711_; lean_object* v_elimStack_712_; lean_object* v_occurs_713_; lean_object* v_ignored_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_728_; 
v_v_671_ = lean_array_fget(v_structs_658_, v_a_654_);
v_id_672_ = lean_ctor_get(v_v_671_, 0);
v_ringId_x3f_673_ = lean_ctor_get(v_v_671_, 1);
v_type_674_ = lean_ctor_get(v_v_671_, 2);
v_u_675_ = lean_ctor_get(v_v_671_, 3);
v_intModuleInst_676_ = lean_ctor_get(v_v_671_, 4);
v_leInst_x3f_677_ = lean_ctor_get(v_v_671_, 5);
v_ltInst_x3f_678_ = lean_ctor_get(v_v_671_, 6);
v_lawfulOrderLTInst_x3f_679_ = lean_ctor_get(v_v_671_, 7);
v_isPreorderInst_x3f_680_ = lean_ctor_get(v_v_671_, 8);
v_orderedAddInst_x3f_681_ = lean_ctor_get(v_v_671_, 9);
v_isLinearInst_x3f_682_ = lean_ctor_get(v_v_671_, 10);
v_noNatDivInst_x3f_683_ = lean_ctor_get(v_v_671_, 11);
v_ringInst_x3f_684_ = lean_ctor_get(v_v_671_, 12);
v_commRingInst_x3f_685_ = lean_ctor_get(v_v_671_, 13);
v_orderedRingInst_x3f_686_ = lean_ctor_get(v_v_671_, 14);
v_fieldInst_x3f_687_ = lean_ctor_get(v_v_671_, 15);
v_charInst_x3f_688_ = lean_ctor_get(v_v_671_, 16);
v_zero_689_ = lean_ctor_get(v_v_671_, 17);
v_ofNatZero_690_ = lean_ctor_get(v_v_671_, 18);
v_one_x3f_691_ = lean_ctor_get(v_v_671_, 19);
v_leFn_x3f_692_ = lean_ctor_get(v_v_671_, 20);
v_ltFn_x3f_693_ = lean_ctor_get(v_v_671_, 21);
v_addFn_694_ = lean_ctor_get(v_v_671_, 22);
v_zsmulFn_695_ = lean_ctor_get(v_v_671_, 23);
v_nsmulFn_696_ = lean_ctor_get(v_v_671_, 24);
v_zsmulFn_x3f_697_ = lean_ctor_get(v_v_671_, 25);
v_nsmulFn_x3f_698_ = lean_ctor_get(v_v_671_, 26);
v_homomulFn_x3f_699_ = lean_ctor_get(v_v_671_, 27);
v_subFn_700_ = lean_ctor_get(v_v_671_, 28);
v_negFn_701_ = lean_ctor_get(v_v_671_, 29);
v_vars_702_ = lean_ctor_get(v_v_671_, 30);
v_varMap_703_ = lean_ctor_get(v_v_671_, 31);
v_lowers_704_ = lean_ctor_get(v_v_671_, 32);
v_uppers_705_ = lean_ctor_get(v_v_671_, 33);
v_diseqs_706_ = lean_ctor_get(v_v_671_, 34);
v_assignment_707_ = lean_ctor_get(v_v_671_, 35);
v_caseSplits_708_ = lean_ctor_get_uint8(v_v_671_, sizeof(void*)*42);
v_conflict_x3f_709_ = lean_ctor_get(v_v_671_, 36);
v_diseqSplits_710_ = lean_ctor_get(v_v_671_, 37);
v_elimEqs_711_ = lean_ctor_get(v_v_671_, 38);
v_elimStack_712_ = lean_ctor_get(v_v_671_, 39);
v_occurs_713_ = lean_ctor_get(v_v_671_, 40);
v_ignored_714_ = lean_ctor_get(v_v_671_, 41);
v_isSharedCheck_728_ = !lean_is_exclusive(v_v_671_);
if (v_isSharedCheck_728_ == 0)
{
v___x_716_ = v_v_671_;
v_isShared_717_ = v_isSharedCheck_728_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_ignored_714_);
lean_inc(v_occurs_713_);
lean_inc(v_elimStack_712_);
lean_inc(v_elimEqs_711_);
lean_inc(v_diseqSplits_710_);
lean_inc(v_conflict_x3f_709_);
lean_inc(v_assignment_707_);
lean_inc(v_diseqs_706_);
lean_inc(v_uppers_705_);
lean_inc(v_lowers_704_);
lean_inc(v_varMap_703_);
lean_inc(v_vars_702_);
lean_inc(v_negFn_701_);
lean_inc(v_subFn_700_);
lean_inc(v_homomulFn_x3f_699_);
lean_inc(v_nsmulFn_x3f_698_);
lean_inc(v_zsmulFn_x3f_697_);
lean_inc(v_nsmulFn_696_);
lean_inc(v_zsmulFn_695_);
lean_inc(v_addFn_694_);
lean_inc(v_ltFn_x3f_693_);
lean_inc(v_leFn_x3f_692_);
lean_inc(v_one_x3f_691_);
lean_inc(v_ofNatZero_690_);
lean_inc(v_zero_689_);
lean_inc(v_charInst_x3f_688_);
lean_inc(v_fieldInst_x3f_687_);
lean_inc(v_orderedRingInst_x3f_686_);
lean_inc(v_commRingInst_x3f_685_);
lean_inc(v_ringInst_x3f_684_);
lean_inc(v_noNatDivInst_x3f_683_);
lean_inc(v_isLinearInst_x3f_682_);
lean_inc(v_orderedAddInst_x3f_681_);
lean_inc(v_isPreorderInst_x3f_680_);
lean_inc(v_lawfulOrderLTInst_x3f_679_);
lean_inc(v_ltInst_x3f_678_);
lean_inc(v_leInst_x3f_677_);
lean_inc(v_intModuleInst_676_);
lean_inc(v_u_675_);
lean_inc(v_type_674_);
lean_inc(v_ringId_x3f_673_);
lean_inc(v_id_672_);
lean_dec(v_v_671_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_728_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_718_; lean_object* v_xs_x27_719_; lean_object* v___x_720_; lean_object* v___x_722_; 
v___x_718_ = lean_box(0);
v_xs_x27_719_ = lean_array_fset(v_structs_658_, v_a_654_, v___x_718_);
v___x_720_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0(v_p_655_, v_diseqs_706_, v_one_656_);
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 34, v___x_720_);
v___x_722_ = v___x_716_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_id_672_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_ringId_x3f_673_);
lean_ctor_set(v_reuseFailAlloc_727_, 2, v_type_674_);
lean_ctor_set(v_reuseFailAlloc_727_, 3, v_u_675_);
lean_ctor_set(v_reuseFailAlloc_727_, 4, v_intModuleInst_676_);
lean_ctor_set(v_reuseFailAlloc_727_, 5, v_leInst_x3f_677_);
lean_ctor_set(v_reuseFailAlloc_727_, 6, v_ltInst_x3f_678_);
lean_ctor_set(v_reuseFailAlloc_727_, 7, v_lawfulOrderLTInst_x3f_679_);
lean_ctor_set(v_reuseFailAlloc_727_, 8, v_isPreorderInst_x3f_680_);
lean_ctor_set(v_reuseFailAlloc_727_, 9, v_orderedAddInst_x3f_681_);
lean_ctor_set(v_reuseFailAlloc_727_, 10, v_isLinearInst_x3f_682_);
lean_ctor_set(v_reuseFailAlloc_727_, 11, v_noNatDivInst_x3f_683_);
lean_ctor_set(v_reuseFailAlloc_727_, 12, v_ringInst_x3f_684_);
lean_ctor_set(v_reuseFailAlloc_727_, 13, v_commRingInst_x3f_685_);
lean_ctor_set(v_reuseFailAlloc_727_, 14, v_orderedRingInst_x3f_686_);
lean_ctor_set(v_reuseFailAlloc_727_, 15, v_fieldInst_x3f_687_);
lean_ctor_set(v_reuseFailAlloc_727_, 16, v_charInst_x3f_688_);
lean_ctor_set(v_reuseFailAlloc_727_, 17, v_zero_689_);
lean_ctor_set(v_reuseFailAlloc_727_, 18, v_ofNatZero_690_);
lean_ctor_set(v_reuseFailAlloc_727_, 19, v_one_x3f_691_);
lean_ctor_set(v_reuseFailAlloc_727_, 20, v_leFn_x3f_692_);
lean_ctor_set(v_reuseFailAlloc_727_, 21, v_ltFn_x3f_693_);
lean_ctor_set(v_reuseFailAlloc_727_, 22, v_addFn_694_);
lean_ctor_set(v_reuseFailAlloc_727_, 23, v_zsmulFn_695_);
lean_ctor_set(v_reuseFailAlloc_727_, 24, v_nsmulFn_696_);
lean_ctor_set(v_reuseFailAlloc_727_, 25, v_zsmulFn_x3f_697_);
lean_ctor_set(v_reuseFailAlloc_727_, 26, v_nsmulFn_x3f_698_);
lean_ctor_set(v_reuseFailAlloc_727_, 27, v_homomulFn_x3f_699_);
lean_ctor_set(v_reuseFailAlloc_727_, 28, v_subFn_700_);
lean_ctor_set(v_reuseFailAlloc_727_, 29, v_negFn_701_);
lean_ctor_set(v_reuseFailAlloc_727_, 30, v_vars_702_);
lean_ctor_set(v_reuseFailAlloc_727_, 31, v_varMap_703_);
lean_ctor_set(v_reuseFailAlloc_727_, 32, v_lowers_704_);
lean_ctor_set(v_reuseFailAlloc_727_, 33, v_uppers_705_);
lean_ctor_set(v_reuseFailAlloc_727_, 34, v___x_720_);
lean_ctor_set(v_reuseFailAlloc_727_, 35, v_assignment_707_);
lean_ctor_set(v_reuseFailAlloc_727_, 36, v_conflict_x3f_709_);
lean_ctor_set(v_reuseFailAlloc_727_, 37, v_diseqSplits_710_);
lean_ctor_set(v_reuseFailAlloc_727_, 38, v_elimEqs_711_);
lean_ctor_set(v_reuseFailAlloc_727_, 39, v_elimStack_712_);
lean_ctor_set(v_reuseFailAlloc_727_, 40, v_occurs_713_);
lean_ctor_set(v_reuseFailAlloc_727_, 41, v_ignored_714_);
lean_ctor_set_uint8(v_reuseFailAlloc_727_, sizeof(void*)*42, v_caseSplits_708_);
v___x_722_ = v_reuseFailAlloc_727_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
lean_object* v___x_723_; lean_object* v___x_725_; 
v___x_723_ = lean_array_fset(v_xs_x27_719_, v_a_654_, v___x_722_);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 0, v___x_723_);
v___x_725_ = v___x_669_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_723_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v_typeIdOf_659_);
lean_ctor_set(v_reuseFailAlloc_726_, 2, v_exprToStructId_660_);
lean_ctor_set(v_reuseFailAlloc_726_, 3, v_exprToStructIdEntries_661_);
lean_ctor_set(v_reuseFailAlloc_726_, 4, v_forbiddenNatModules_662_);
lean_ctor_set(v_reuseFailAlloc_726_, 5, v_natStructs_663_);
lean_ctor_set(v_reuseFailAlloc_726_, 6, v_natTypeIdOf_664_);
lean_ctor_set(v_reuseFailAlloc_726_, 7, v_exprToNatStructId_665_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0___boxed(lean_object* v_a_738_, lean_object* v_p_739_, lean_object* v_one_740_, lean_object* v_s_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0(v_a_738_, v_p_739_, v_one_740_, v_s_741_);
lean_dec(v_one_740_);
lean_dec(v_a_738_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(lean_object* v_one_743_, lean_object* v_a_744_, lean_object* v_a_745_){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v_p_749_; lean_object* v___f_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_747_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0);
v___x_748_ = lean_box(0);
lean_inc(v_one_743_);
v_p_749_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_p_749_, 0, v___x_747_);
lean_ctor_set(v_p_749_, 1, v_one_743_);
lean_ctor_set(v_p_749_, 2, v___x_748_);
lean_inc(v_a_744_);
v___f_750_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_750_, 0, v_a_744_);
lean_closure_set(v___f_750_, 1, v_p_749_);
lean_closure_set(v___f_750_, 2, v_one_743_);
v___x_751_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_752_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_751_, v___f_750_, v_a_745_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___boxed(lean_object* v_one_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(v_one_753_, v_a_754_, v_a_755_);
lean_dec(v_a_755_);
lean_dec(v_a_754_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne(lean_object* v_one_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(v_one_758_, v_a_759_, v_a_760_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___boxed(lean_object* v_one_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne(v_one_772_, v_a_773_, v_a_774_, v_a_775_, v_a_776_, v_a_777_, v_a_778_, v_a_779_, v_a_780_, v_a_781_, v_a_782_, v_a_783_);
lean_dec(v_a_783_);
lean_dec_ref(v_a_782_);
lean_dec(v_a_781_);
lean_dec_ref(v_a_780_);
lean_dec(v_a_779_);
lean_dec_ref(v_a_778_);
lean_dec(v_a_777_);
lean_dec_ref(v_a_776_);
lean_dec(v_a_775_);
lean_dec(v_a_774_);
lean_dec(v_a_773_);
return v_res_785_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst(lean_object* v_isCharInst_x3f_786_){
_start:
{
if (lean_obj_tag(v_isCharInst_x3f_786_) == 0)
{
uint8_t v___x_787_; 
v___x_787_ = 0;
return v___x_787_;
}
else
{
lean_object* v_val_788_; lean_object* v_snd_789_; lean_object* v___x_790_; uint8_t v___x_791_; 
v_val_788_ = lean_ctor_get(v_isCharInst_x3f_786_, 0);
v_snd_789_ = lean_ctor_get(v_val_788_, 1);
v___x_790_ = lean_unsigned_to_nat(1u);
v___x_791_ = lean_nat_dec_eq(v_snd_789_, v___x_790_);
if (v___x_791_ == 0)
{
uint8_t v___x_792_; 
v___x_792_ = 1;
return v___x_792_;
}
else
{
uint8_t v___x_793_; 
v___x_793_ = 0;
return v___x_793_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst___boxed(lean_object* v_isCharInst_x3f_794_){
_start:
{
uint8_t v_res_795_; lean_object* v_r_796_; 
v_res_795_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst(v_isCharInst_x3f_794_);
lean_dec(v_isCharInst_x3f_794_);
v_r_796_ = lean_box(v_res_795_);
return v_r_796_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f(lean_object* v_ringId_x3f_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_){
_start:
{
if (lean_obj_tag(v_ringId_x3f_797_) == 1)
{
lean_object* v_val_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_836_; 
v_val_809_ = lean_ctor_get(v_ringId_x3f_797_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v_ringId_x3f_797_);
if (v_isSharedCheck_836_ == 0)
{
v___x_811_ = v_ringId_x3f_797_;
v_isShared_812_ = v_isSharedCheck_836_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_val_809_);
lean_dec(v_ringId_x3f_797_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_836_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
uint8_t v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_813_ = 0;
v___x_814_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_814_, 0, v_val_809_);
lean_ctor_set_uint8(v___x_814_, sizeof(void*)*1, v___x_813_);
v___x_815_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___x_814_, v_a_798_, v_a_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_, v_a_804_, v_a_805_, v_a_806_, v_a_807_);
lean_dec_ref_known(v___x_814_, 1);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_827_; 
v_a_816_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_827_ == 0)
{
v___x_818_ = v___x_815_;
v_isShared_819_ = v_isSharedCheck_827_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_815_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_827_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v_commRingInst_820_; lean_object* v___x_822_; 
v_commRingInst_820_ = lean_ctor_get(v_a_816_, 6);
lean_inc_ref(v_commRingInst_820_);
lean_dec(v_a_816_);
if (v_isShared_812_ == 0)
{
lean_ctor_set(v___x_811_, 0, v_commRingInst_820_);
v___x_822_ = v___x_811_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_commRingInst_820_);
v___x_822_ = v_reuseFailAlloc_826_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
lean_object* v___x_824_; 
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 0, v___x_822_);
v___x_824_ = v___x_818_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v___x_822_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
else
{
lean_object* v_a_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_835_; 
lean_del_object(v___x_811_);
v_a_828_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_835_ == 0)
{
v___x_830_ = v___x_815_;
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_a_828_);
lean_dec(v___x_815_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_833_; 
if (v_isShared_831_ == 0)
{
v___x_833_ = v___x_830_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_828_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
}
}
else
{
lean_object* v___x_837_; lean_object* v___x_838_; 
lean_dec(v_ringId_x3f_797_);
v___x_837_ = lean_box(0);
v___x_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_838_, 0, v___x_837_);
return v___x_838_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f___boxed(lean_object* v_ringId_x3f_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f(v_ringId_x3f_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_);
lean_dec(v_a_849_);
lean_dec_ref(v_a_848_);
lean_dec(v_a_847_);
lean_dec_ref(v_a_846_);
lean_dec(v_a_845_);
lean_dec_ref(v_a_844_);
lean_dec(v_a_843_);
lean_dec_ref(v_a_842_);
lean_dec(v_a_841_);
lean_dec(v_a_840_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(lean_object* v_u_866_, lean_object* v_type_867_, lean_object* v_commRingInst_x3f_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
if (lean_obj_tag(v_commRingInst_x3f_868_) == 1)
{
lean_object* v_val_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_888_; 
v_val_875_ = lean_ctor_get(v_commRingInst_x3f_868_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v_commRingInst_x3f_868_);
if (v_isSharedCheck_888_ == 0)
{
v___x_877_ = v_commRingInst_x3f_868_;
v_isShared_878_ = v_isSharedCheck_888_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_val_875_);
lean_dec(v_commRingInst_x3f_868_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_888_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_885_; 
v___x_879_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4));
v___x_880_ = lean_box(0);
v___x_881_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_881_, 0, v_u_866_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
v___x_882_ = l_Lean_mkConst(v___x_879_, v___x_881_);
v___x_883_ = l_Lean_mkAppB(v___x_882_, v_type_867_, v_val_875_);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 0, v___x_883_);
v___x_885_ = v___x_877_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_883_);
v___x_885_ = v_reuseFailAlloc_887_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
lean_object* v___x_886_; 
v___x_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_886_, 0, v___x_885_);
return v___x_886_;
}
}
}
else
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
lean_dec(v_commRingInst_x3f_868_);
v___x_889_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6));
v___x_890_ = lean_box(0);
v___x_891_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_891_, 0, v_u_866_);
lean_ctor_set(v___x_891_, 1, v___x_890_);
v___x_892_ = l_Lean_mkConst(v___x_889_, v___x_891_);
v___x_893_ = l_Lean_Expr_app___override(v___x_892_, v_type_867_);
v___x_894_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_893_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
return v___x_894_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___boxed(lean_object* v_u_895_, lean_object* v_type_896_, lean_object* v_commRingInst_x3f_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(v_u_895_, v_type_896_, v_commRingInst_x3f_897_, v_a_898_, v_a_899_, v_a_900_, v_a_901_, v_a_902_);
lean_dec(v_a_902_);
lean_dec_ref(v_a_901_);
lean_dec(v_a_900_);
lean_dec_ref(v_a_899_);
lean_dec(v_a_898_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f(lean_object* v_u_905_, lean_object* v_type_906_, lean_object* v_commRingInst_x3f_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_){
_start:
{
lean_object* v___x_919_; 
v___x_919_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(v_u_905_, v_type_906_, v_commRingInst_x3f_907_, v_a_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___boxed(lean_object* v_u_920_, lean_object* v_type_921_, lean_object* v_commRingInst_x3f_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f(v_u_920_, v_type_921_, v_commRingInst_x3f_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_, v_a_930_, v_a_931_, v_a_932_);
lean_dec(v_a_932_);
lean_dec_ref(v_a_931_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
lean_dec(v_a_926_);
lean_dec_ref(v_a_925_);
lean_dec(v_a_924_);
lean_dec(v_a_923_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(lean_object* v_u_946_, lean_object* v_type_947_, lean_object* v_ringInst_x3f_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_){
_start:
{
if (lean_obj_tag(v_ringInst_x3f_948_) == 1)
{
lean_object* v_val_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_968_; 
v_val_955_ = lean_ctor_get(v_ringInst_x3f_948_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v_ringInst_x3f_948_);
if (v_isSharedCheck_968_ == 0)
{
v___x_957_ = v_ringInst_x3f_948_;
v_isShared_958_ = v_isSharedCheck_968_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_val_955_);
lean_dec(v_ringInst_x3f_948_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_968_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_959_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1));
v___x_960_ = lean_box(0);
v___x_961_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_961_, 0, v_u_946_);
lean_ctor_set(v___x_961_, 1, v___x_960_);
v___x_962_ = l_Lean_mkConst(v___x_959_, v___x_961_);
v___x_963_ = l_Lean_mkAppB(v___x_962_, v_type_947_, v_val_955_);
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 0, v___x_963_);
v___x_965_ = v___x_957_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v___x_963_);
v___x_965_ = v_reuseFailAlloc_967_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
lean_object* v___x_966_; 
v___x_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
return v___x_966_;
}
}
}
else
{
lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
lean_dec(v_ringInst_x3f_948_);
v___x_969_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3));
v___x_970_ = lean_box(0);
v___x_971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_971_, 0, v_u_946_);
lean_ctor_set(v___x_971_, 1, v___x_970_);
v___x_972_ = l_Lean_mkConst(v___x_969_, v___x_971_);
v___x_973_ = l_Lean_Expr_app___override(v___x_972_, v_type_947_);
v___x_974_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_973_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_);
return v___x_974_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___boxed(lean_object* v_u_975_, lean_object* v_type_976_, lean_object* v_ringInst_x3f_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(v_u_975_, v_type_976_, v_ringInst_x3f_977_, v_a_978_, v_a_979_, v_a_980_, v_a_981_, v_a_982_);
lean_dec(v_a_982_);
lean_dec_ref(v_a_981_);
lean_dec(v_a_980_);
lean_dec_ref(v_a_979_);
lean_dec(v_a_978_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f(lean_object* v_u_985_, lean_object* v_type_986_, lean_object* v_ringInst_x3f_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_){
_start:
{
lean_object* v___x_999_; 
v___x_999_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(v_u_985_, v_type_986_, v_ringInst_x3f_987_, v_a_993_, v_a_994_, v_a_995_, v_a_996_, v_a_997_);
return v___x_999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___boxed(lean_object* v_u_1000_, lean_object* v_type_1001_, lean_object* v_ringInst_x3f_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f(v_u_1000_, v_type_1001_, v_ringInst_x3f_1002_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_);
lean_dec(v_a_1012_);
lean_dec_ref(v_a_1011_);
lean_dec(v_a_1010_);
lean_dec_ref(v_a_1009_);
lean_dec(v_a_1008_);
lean_dec_ref(v_a_1007_);
lean_dec(v_a_1006_);
lean_dec_ref(v_a_1005_);
lean_dec(v_a_1004_);
lean_dec(v_a_1003_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(lean_object* v_u_1026_, lean_object* v_type_1027_, lean_object* v_ringInst_x3f_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_){
_start:
{
if (lean_obj_tag(v_ringInst_x3f_1028_) == 1)
{
lean_object* v_val_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1048_; 
v_val_1035_ = lean_ctor_get(v_ringInst_x3f_1028_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v_ringInst_x3f_1028_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1037_ = v_ringInst_x3f_1028_;
v_isShared_1038_ = v_isSharedCheck_1048_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_val_1035_);
lean_dec(v_ringInst_x3f_1028_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1048_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1045_; 
v___x_1039_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1));
v___x_1040_ = lean_box(0);
v___x_1041_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1041_, 0, v_u_1026_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v___x_1042_ = l_Lean_mkConst(v___x_1039_, v___x_1041_);
v___x_1043_ = l_Lean_mkAppB(v___x_1042_, v_type_1027_, v_val_1035_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v___x_1043_);
v___x_1045_ = v___x_1037_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v___x_1043_);
v___x_1045_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
lean_object* v___x_1046_; 
v___x_1046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1045_);
return v___x_1046_;
}
}
}
else
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
lean_dec(v_ringInst_x3f_1028_);
v___x_1049_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3));
v___x_1050_ = lean_box(0);
v___x_1051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1051_, 0, v_u_1026_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
v___x_1052_ = l_Lean_mkConst(v___x_1049_, v___x_1051_);
v___x_1053_ = l_Lean_Expr_app___override(v___x_1052_, v_type_1027_);
v___x_1054_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_1053_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_, v_a_1033_);
return v___x_1054_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___boxed(lean_object* v_u_1055_, lean_object* v_type_1056_, lean_object* v_ringInst_x3f_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(v_u_1055_, v_type_1056_, v_ringInst_x3f_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_);
lean_dec(v_a_1062_);
lean_dec_ref(v_a_1061_);
lean_dec(v_a_1060_);
lean_dec_ref(v_a_1059_);
lean_dec(v_a_1058_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f(lean_object* v_u_1065_, lean_object* v_type_1066_, lean_object* v_ringInst_x3f_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v___x_1079_; 
v___x_1079_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(v_u_1065_, v_type_1066_, v_ringInst_x3f_1067_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___boxed(lean_object* v_u_1080_, lean_object* v_type_1081_, lean_object* v_ringInst_x3f_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f(v_u_1080_, v_type_1081_, v_ringInst_x3f_1082_, v_a_1083_, v_a_1084_, v_a_1085_, v_a_1086_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_);
lean_dec(v_a_1092_);
lean_dec_ref(v_a_1091_);
lean_dec(v_a_1090_);
lean_dec_ref(v_a_1089_);
lean_dec(v_a_1088_);
lean_dec_ref(v_a_1087_);
lean_dec(v_a_1086_);
lean_dec_ref(v_a_1085_);
lean_dec(v_a_1084_);
lean_dec(v_a_1083_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f(lean_object* v_u_1102_, lean_object* v_type_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1115_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__1));
v___x_1116_ = lean_box(0);
v___x_1117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1117_, 0, v_u_1102_);
lean_ctor_set(v___x_1117_, 1, v___x_1116_);
lean_inc_ref(v___x_1117_);
v___x_1118_ = l_Lean_mkConst(v___x_1115_, v___x_1117_);
lean_inc_ref(v_type_1103_);
v___x_1119_ = l_Lean_Expr_app___override(v___x_1118_, v_type_1103_);
v___x_1120_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_1119_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1202_; 
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1123_ = v___x_1120_;
v_isShared_1124_ = v_isSharedCheck_1202_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1120_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1202_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
if (lean_obj_tag(v_a_1121_) == 1)
{
lean_object* v_val_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1197_; 
lean_del_object(v___x_1123_);
v_val_1125_ = lean_ctor_get(v_a_1121_, 0);
v_isSharedCheck_1197_ = !lean_is_exclusive(v_a_1121_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1127_ = v_a_1121_;
v_isShared_1128_ = v_isSharedCheck_1197_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_val_1125_);
lean_dec(v_a_1121_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1197_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1129_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3));
v___x_1130_ = l_Lean_mkConst(v___x_1129_, v___x_1117_);
lean_inc_ref(v_type_1103_);
v___x_1131_ = l_Lean_mkAppB(v___x_1130_, v_type_1103_, v_val_1125_);
v___x_1132_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(v___x_1131_, v_a_1104_, v_a_1105_, v_a_1106_, v_a_1107_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_);
if (lean_obj_tag(v___x_1132_) == 0)
{
lean_object* v_a_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1188_; 
v_a_1133_ = lean_ctor_get(v___x_1132_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1135_ = v___x_1132_;
v_isShared_1136_ = v_isSharedCheck_1188_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_a_1133_);
lean_dec(v___x_1132_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1188_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = lean_unsigned_to_nat(1u);
v___x_1145_ = l_Lean_Meta_mkNumeral(v_type_1103_, v___x_1144_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v_a_1146_; lean_object* v___x_1147_; 
v_a_1146_ = lean_ctor_get(v___x_1145_, 0);
lean_inc_n(v_a_1146_, 2);
lean_dec_ref_known(v___x_1145_, 1);
lean_inc(v_a_1133_);
v___x_1147_ = l_Lean_Meta_isDefEqD(v_a_1133_, v_a_1146_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_object* v_a_1148_; uint8_t v___x_1149_; 
v_a_1148_ = lean_ctor_get(v___x_1147_, 0);
lean_inc(v_a_1148_);
lean_dec_ref_known(v___x_1147_, 1);
v___x_1149_ = lean_unbox(v_a_1148_);
lean_dec(v_a_1148_);
if (v___x_1149_ == 0)
{
lean_object* v___x_1150_; lean_object* v_a_1151_; lean_object* v___x_1152_; 
lean_inc(v_a_1133_);
v___x_1150_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_a_1133_, v_a_1146_);
v_a_1151_ = lean_ctor_get(v___x_1150_, 0);
lean_inc(v_a_1151_);
lean_dec_ref(v___x_1150_);
v___x_1152_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1108_);
if (lean_obj_tag(v___x_1152_) == 0)
{
lean_object* v_a_1153_; uint8_t v_verbose_1154_; 
v_a_1153_ = lean_ctor_get(v___x_1152_, 0);
lean_inc(v_a_1153_);
lean_dec_ref_known(v___x_1152_, 1);
v_verbose_1154_ = lean_ctor_get_uint8(v_a_1153_, 0);
lean_dec(v_a_1153_);
if (v_verbose_1154_ == 0)
{
lean_dec(v_a_1151_);
goto v___jp_1137_;
}
else
{
lean_object* v___x_1155_; 
v___x_1155_ = l_Lean_Meta_Sym_reportIssue(v_a_1151_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_dec_ref_known(v___x_1155_, 1);
goto v___jp_1137_;
}
else
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1163_; 
lean_del_object(v___x_1135_);
lean_dec(v_a_1133_);
lean_del_object(v___x_1127_);
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1158_ = v___x_1155_;
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1155_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1161_; 
if (v_isShared_1159_ == 0)
{
v___x_1161_ = v___x_1158_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_a_1156_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
}
}
else
{
lean_object* v_a_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1171_; 
lean_dec(v_a_1151_);
lean_del_object(v___x_1135_);
lean_dec(v_a_1133_);
lean_del_object(v___x_1127_);
v_a_1164_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1166_ = v___x_1152_;
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_a_1164_);
lean_dec(v___x_1152_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1169_; 
if (v_isShared_1167_ == 0)
{
v___x_1169_ = v___x_1166_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_a_1164_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
}
}
else
{
lean_dec(v_a_1146_);
goto v___jp_1137_;
}
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
lean_dec(v_a_1146_);
lean_del_object(v___x_1135_);
lean_dec(v_a_1133_);
lean_del_object(v___x_1127_);
v_a_1172_ = lean_ctor_get(v___x_1147_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_1147_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1147_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
}
else
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1187_; 
lean_del_object(v___x_1135_);
lean_dec(v_a_1133_);
lean_del_object(v___x_1127_);
v_a_1180_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1182_ = v___x_1145_;
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1145_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1185_; 
if (v_isShared_1183_ == 0)
{
v___x_1185_ = v___x_1182_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_a_1180_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
return v___x_1185_;
}
}
}
v___jp_1137_:
{
lean_object* v___x_1139_; 
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 0, v_a_1133_);
v___x_1139_ = v___x_1127_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_a_1133_);
v___x_1139_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
lean_object* v___x_1141_; 
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 0, v___x_1139_);
v___x_1141_ = v___x_1135_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v___x_1139_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
return v___x_1141_;
}
}
}
}
}
else
{
lean_object* v_a_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1196_; 
lean_del_object(v___x_1127_);
lean_dec_ref(v_type_1103_);
v_a_1189_ = lean_ctor_get(v___x_1132_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1191_ = v___x_1132_;
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_a_1189_);
lean_dec(v___x_1132_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1194_; 
if (v_isShared_1192_ == 0)
{
v___x_1194_ = v___x_1191_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_a_1189_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
}
}
else
{
lean_object* v___x_1198_; lean_object* v___x_1200_; 
lean_dec(v_a_1121_);
lean_dec_ref_known(v___x_1117_, 2);
lean_dec_ref(v_type_1103_);
v___x_1198_ = lean_box(0);
if (v_isShared_1124_ == 0)
{
lean_ctor_set(v___x_1123_, 0, v___x_1198_);
v___x_1200_ = v___x_1123_;
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
}
else
{
lean_dec_ref_known(v___x_1117_, 2);
lean_dec_ref(v_type_1103_);
return v___x_1120_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___boxed(lean_object* v_u_1203_, lean_object* v_type_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f(v_u_1203_, v_type_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
lean_dec(v_a_1214_);
lean_dec_ref(v_a_1213_);
lean_dec(v_a_1212_);
lean_dec_ref(v_a_1211_);
lean_dec(v_a_1210_);
lean_dec_ref(v_a_1209_);
lean_dec(v_a_1208_);
lean_dec_ref(v_a_1207_);
lean_dec(v_a_1206_);
lean_dec(v_a_1205_);
return v_res_1216_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3(void){
_start:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1223_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__2));
v___x_1224_ = l_Lean_stringToMessageData(v___x_1223_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(lean_object* v_u_1225_, lean_object* v_type_1226_, lean_object* v_semiringInst_x3f_1227_, lean_object* v_leInst_x3f_1228_, lean_object* v_ltInst_x3f_1229_, lean_object* v_preorderInst_x3f_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_){
_start:
{
if (lean_obj_tag(v_semiringInst_x3f_1227_) == 1)
{
if (lean_obj_tag(v_leInst_x3f_1228_) == 1)
{
if (lean_obj_tag(v_ltInst_x3f_1229_) == 1)
{
if (lean_obj_tag(v_preorderInst_x3f_1230_) == 1)
{
lean_object* v_val_1241_; lean_object* v_val_1242_; lean_object* v_val_1243_; lean_object* v_val_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v_isOrdType_1249_; lean_object* v___x_1250_; 
v_val_1241_ = lean_ctor_get(v_semiringInst_x3f_1227_, 0);
lean_inc(v_val_1241_);
lean_dec_ref_known(v_semiringInst_x3f_1227_, 1);
v_val_1242_ = lean_ctor_get(v_leInst_x3f_1228_, 0);
lean_inc(v_val_1242_);
lean_dec_ref_known(v_leInst_x3f_1228_, 1);
v_val_1243_ = lean_ctor_get(v_ltInst_x3f_1229_, 0);
lean_inc(v_val_1243_);
lean_dec_ref_known(v_ltInst_x3f_1229_, 1);
v_val_1244_ = lean_ctor_get(v_preorderInst_x3f_1230_, 0);
lean_inc(v_val_1244_);
lean_dec_ref_known(v_preorderInst_x3f_1230_, 1);
v___x_1245_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1));
v___x_1246_ = lean_box(0);
v___x_1247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1247_, 0, v_u_1225_);
lean_ctor_set(v___x_1247_, 1, v___x_1246_);
v___x_1248_ = l_Lean_mkConst(v___x_1245_, v___x_1247_);
v_isOrdType_1249_ = l_Lean_mkApp5(v___x_1248_, v_type_1226_, v_val_1241_, v_val_1242_, v_val_1243_, v_val_1244_);
lean_inc_ref(v_isOrdType_1249_);
v___x_1250_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_isOrdType_1249_, v_a_1232_, v_a_1233_, v_a_1234_, v_a_1235_, v_a_1236_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v_a_1251_; 
v_a_1251_ = lean_ctor_get(v___x_1250_, 0);
if (lean_obj_tag(v_a_1251_) == 1)
{
lean_dec_ref(v_isOrdType_1249_);
return v___x_1250_;
}
else
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
lean_dec_ref_known(v___x_1250_, 1);
v___x_1252_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3);
v___x_1253_ = l_Lean_indentExpr(v_isOrdType_1249_);
v___x_1254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1252_);
lean_ctor_set(v___x_1254_, 1, v___x_1253_);
v___x_1255_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1231_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_object* v_a_1256_; uint8_t v_verbose_1257_; 
v_a_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc(v_a_1256_);
lean_dec_ref_known(v___x_1255_, 1);
v_verbose_1257_ = lean_ctor_get_uint8(v_a_1256_, 0);
lean_dec(v_a_1256_);
if (v_verbose_1257_ == 0)
{
lean_dec_ref_known(v___x_1254_, 2);
goto v___jp_1238_;
}
else
{
lean_object* v___x_1258_; 
v___x_1258_ = l_Lean_Meta_Sym_reportIssue(v___x_1254_, v_a_1231_, v_a_1232_, v_a_1233_, v_a_1234_, v_a_1235_, v_a_1236_);
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_dec_ref_known(v___x_1258_, 1);
goto v___jp_1238_;
}
else
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1266_; 
v_a_1259_ = lean_ctor_get(v___x_1258_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1258_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1261_ = v___x_1258_;
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v___x_1258_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1264_; 
if (v_isShared_1262_ == 0)
{
v___x_1264_ = v___x_1261_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_a_1259_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
}
}
else
{
lean_object* v_a_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1274_; 
lean_dec_ref_known(v___x_1254_, 2);
v_a_1267_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1269_ = v___x_1255_;
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_a_1267_);
lean_dec(v___x_1255_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1272_; 
if (v_isShared_1270_ == 0)
{
v___x_1272_ = v___x_1269_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_a_1267_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
}
}
else
{
lean_dec_ref(v_isOrdType_1249_);
return v___x_1250_;
}
}
else
{
lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1282_; 
lean_dec_ref_known(v_leInst_x3f_1228_, 1);
lean_dec_ref_known(v_semiringInst_x3f_1227_, 1);
lean_dec(v_preorderInst_x3f_1230_);
lean_dec_ref(v_type_1226_);
lean_dec(v_u_1225_);
v_isSharedCheck_1282_ = !lean_is_exclusive(v_ltInst_x3f_1229_);
if (v_isSharedCheck_1282_ == 0)
{
lean_object* v_unused_1283_; 
v_unused_1283_ = lean_ctor_get(v_ltInst_x3f_1229_, 0);
lean_dec(v_unused_1283_);
v___x_1276_ = v_ltInst_x3f_1229_;
v_isShared_1277_ = v_isSharedCheck_1282_;
goto v_resetjp_1275_;
}
else
{
lean_dec(v_ltInst_x3f_1229_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1282_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1278_; lean_object* v___x_1280_; 
v___x_1278_ = lean_box(0);
if (v_isShared_1277_ == 0)
{
lean_ctor_set_tag(v___x_1276_, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1278_);
v___x_1280_ = v___x_1276_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
else
{
lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1291_; 
lean_dec_ref_known(v_semiringInst_x3f_1227_, 1);
lean_dec(v_preorderInst_x3f_1230_);
lean_dec(v_ltInst_x3f_1229_);
lean_dec_ref(v_type_1226_);
lean_dec(v_u_1225_);
v_isSharedCheck_1291_ = !lean_is_exclusive(v_leInst_x3f_1228_);
if (v_isSharedCheck_1291_ == 0)
{
lean_object* v_unused_1292_; 
v_unused_1292_ = lean_ctor_get(v_leInst_x3f_1228_, 0);
lean_dec(v_unused_1292_);
v___x_1285_ = v_leInst_x3f_1228_;
v_isShared_1286_ = v_isSharedCheck_1291_;
goto v_resetjp_1284_;
}
else
{
lean_dec(v_leInst_x3f_1228_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1291_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1287_; lean_object* v___x_1289_; 
v___x_1287_ = lean_box(0);
if (v_isShared_1286_ == 0)
{
lean_ctor_set_tag(v___x_1285_, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1287_);
v___x_1289_ = v___x_1285_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v___x_1287_);
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
else
{
lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1300_; 
lean_dec(v_preorderInst_x3f_1230_);
lean_dec(v_ltInst_x3f_1229_);
lean_dec(v_leInst_x3f_1228_);
lean_dec_ref(v_type_1226_);
lean_dec(v_u_1225_);
v_isSharedCheck_1300_ = !lean_is_exclusive(v_semiringInst_x3f_1227_);
if (v_isSharedCheck_1300_ == 0)
{
lean_object* v_unused_1301_; 
v_unused_1301_ = lean_ctor_get(v_semiringInst_x3f_1227_, 0);
lean_dec(v_unused_1301_);
v___x_1294_ = v_semiringInst_x3f_1227_;
v_isShared_1295_ = v_isSharedCheck_1300_;
goto v_resetjp_1293_;
}
else
{
lean_dec(v_semiringInst_x3f_1227_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1300_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1296_; lean_object* v___x_1298_; 
v___x_1296_ = lean_box(0);
if (v_isShared_1295_ == 0)
{
lean_ctor_set_tag(v___x_1294_, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1296_);
v___x_1298_ = v___x_1294_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v___x_1296_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
}
else
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
lean_dec(v_preorderInst_x3f_1230_);
lean_dec(v_ltInst_x3f_1229_);
lean_dec(v_leInst_x3f_1228_);
lean_dec(v_semiringInst_x3f_1227_);
lean_dec_ref(v_type_1226_);
lean_dec(v_u_1225_);
v___x_1302_ = lean_box(0);
v___x_1303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1302_);
return v___x_1303_;
}
v___jp_1238_:
{
lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1239_ = lean_box(0);
v___x_1240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1239_);
return v___x_1240_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___boxed(lean_object* v_u_1304_, lean_object* v_type_1305_, lean_object* v_semiringInst_x3f_1306_, lean_object* v_leInst_x3f_1307_, lean_object* v_ltInst_x3f_1308_, lean_object* v_preorderInst_x3f_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(v_u_1304_, v_type_1305_, v_semiringInst_x3f_1306_, v_leInst_x3f_1307_, v_ltInst_x3f_1308_, v_preorderInst_x3f_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_, v_a_1314_, v_a_1315_);
lean_dec(v_a_1315_);
lean_dec_ref(v_a_1314_);
lean_dec(v_a_1313_);
lean_dec_ref(v_a_1312_);
lean_dec(v_a_1311_);
lean_dec_ref(v_a_1310_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f(lean_object* v_u_1318_, lean_object* v_type_1319_, lean_object* v_semiringInst_x3f_1320_, lean_object* v_leInst_x3f_1321_, lean_object* v_ltInst_x3f_1322_, lean_object* v_preorderInst_x3f_1323_, lean_object* v_a_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_){
_start:
{
lean_object* v___x_1335_; 
v___x_1335_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(v_u_1318_, v_type_1319_, v_semiringInst_x3f_1320_, v_leInst_x3f_1321_, v_ltInst_x3f_1322_, v_preorderInst_x3f_1323_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___boxed(lean_object** _args){
lean_object* v_u_1336_ = _args[0];
lean_object* v_type_1337_ = _args[1];
lean_object* v_semiringInst_x3f_1338_ = _args[2];
lean_object* v_leInst_x3f_1339_ = _args[3];
lean_object* v_ltInst_x3f_1340_ = _args[4];
lean_object* v_preorderInst_x3f_1341_ = _args[5];
lean_object* v_a_1342_ = _args[6];
lean_object* v_a_1343_ = _args[7];
lean_object* v_a_1344_ = _args[8];
lean_object* v_a_1345_ = _args[9];
lean_object* v_a_1346_ = _args[10];
lean_object* v_a_1347_ = _args[11];
lean_object* v_a_1348_ = _args[12];
lean_object* v_a_1349_ = _args[13];
lean_object* v_a_1350_ = _args[14];
lean_object* v_a_1351_ = _args[15];
lean_object* v_a_1352_ = _args[16];
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f(v_u_1336_, v_type_1337_, v_semiringInst_x3f_1338_, v_leInst_x3f_1339_, v_ltInst_x3f_1340_, v_preorderInst_x3f_1341_, v_a_1342_, v_a_1343_, v_a_1344_, v_a_1345_, v_a_1346_, v_a_1347_, v_a_1348_, v_a_1349_, v_a_1350_, v_a_1351_);
lean_dec(v_a_1351_);
lean_dec_ref(v_a_1350_);
lean_dec(v_a_1349_);
lean_dec_ref(v_a_1348_);
lean_dec(v_a_1347_);
lean_dec_ref(v_a_1346_);
lean_dec(v_a_1345_);
lean_dec_ref(v_a_1344_);
lean_dec(v_a_1343_);
lean_dec(v_a_1342_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(lean_object* v_u_1364_, lean_object* v_type_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_){
_start:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v_natModuleType_1376_; lean_object* v___x_1377_; 
v___x_1372_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1));
v___x_1373_ = lean_box(0);
v___x_1374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1374_, 0, v_u_1364_);
lean_ctor_set(v___x_1374_, 1, v___x_1373_);
lean_inc_ref(v___x_1374_);
v___x_1375_ = l_Lean_mkConst(v___x_1372_, v___x_1374_);
lean_inc_ref(v_type_1365_);
v_natModuleType_1376_ = l_Lean_Expr_app___override(v___x_1375_, v_type_1365_);
v___x_1377_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_natModuleType_1376_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_);
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v_a_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1391_; 
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1380_ = v___x_1377_;
v_isShared_1381_ = v_isSharedCheck_1391_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_a_1378_);
lean_dec(v___x_1377_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1391_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
if (lean_obj_tag(v_a_1378_) == 1)
{
lean_object* v_val_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
lean_del_object(v___x_1380_);
v_val_1382_ = lean_ctor_get(v_a_1378_, 0);
lean_inc(v_val_1382_);
lean_dec_ref_known(v_a_1378_, 1);
v___x_1383_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3));
v___x_1384_ = l_Lean_mkConst(v___x_1383_, v___x_1374_);
v___x_1385_ = l_Lean_mkAppB(v___x_1384_, v_type_1365_, v_val_1382_);
v___x_1386_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_1385_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_);
return v___x_1386_;
}
else
{
lean_object* v___x_1387_; lean_object* v___x_1389_; 
lean_dec(v_a_1378_);
lean_dec_ref_known(v___x_1374_, 2);
lean_dec_ref(v_type_1365_);
v___x_1387_ = lean_box(0);
if (v_isShared_1381_ == 0)
{
lean_ctor_set(v___x_1380_, 0, v___x_1387_);
v___x_1389_ = v___x_1380_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v___x_1387_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1374_, 2);
lean_dec_ref(v_type_1365_);
return v___x_1377_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___boxed(lean_object* v_u_1392_, lean_object* v_type_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_, lean_object* v_a_1399_){
_start:
{
lean_object* v_res_1400_; 
v_res_1400_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(v_u_1392_, v_type_1393_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_);
lean_dec(v_a_1398_);
lean_dec_ref(v_a_1397_);
lean_dec(v_a_1396_);
lean_dec_ref(v_a_1395_);
lean_dec(v_a_1394_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f(lean_object* v_u_1401_, lean_object* v_type_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_){
_start:
{
lean_object* v___x_1414_; 
v___x_1414_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(v_u_1401_, v_type_1402_, v_a_1408_, v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_);
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___boxed(lean_object* v_u_1415_, lean_object* v_type_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f(v_u_1415_, v_type_1416_, v_a_1417_, v_a_1418_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_, v_a_1425_, v_a_1426_);
lean_dec(v_a_1426_);
lean_dec_ref(v_a_1425_);
lean_dec(v_a_1424_);
lean_dec_ref(v_a_1423_);
lean_dec(v_a_1422_);
lean_dec_ref(v_a_1421_);
lean_dec(v_a_1420_);
lean_dec_ref(v_a_1419_);
lean_dec(v_a_1418_);
lean_dec(v_a_1417_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(lean_object* v_declName_1429_, lean_object* v_u_1430_, lean_object* v_type_1431_, lean_object* v_a_1432_, lean_object* v_a_1433_, lean_object* v_a_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_){
_start:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1438_ = lean_box(0);
v___x_1439_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1439_, 0, v_u_1430_);
lean_ctor_set(v___x_1439_, 1, v___x_1438_);
v___x_1440_ = l_Lean_mkConst(v_declName_1429_, v___x_1439_);
v___x_1441_ = l_Lean_Expr_app___override(v___x_1440_, v_type_1431_);
v___x_1442_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_1441_, v_a_1432_, v_a_1433_, v_a_1434_, v_a_1435_, v_a_1436_);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg___boxed(lean_object* v_declName_1443_, lean_object* v_u_1444_, lean_object* v_type_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_){
_start:
{
lean_object* v_res_1452_; 
v_res_1452_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v_declName_1443_, v_u_1444_, v_type_1445_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_, v_a_1450_);
lean_dec(v_a_1450_);
lean_dec_ref(v_a_1449_);
lean_dec(v_a_1448_);
lean_dec_ref(v_a_1447_);
lean_dec(v_a_1446_);
return v_res_1452_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f(lean_object* v_declName_1453_, lean_object* v_u_1454_, lean_object* v_type_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_){
_start:
{
lean_object* v___x_1467_; 
v___x_1467_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v_declName_1453_, v_u_1454_, v_type_1455_, v_a_1461_, v_a_1462_, v_a_1463_, v_a_1464_, v_a_1465_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___boxed(lean_object* v_declName_1468_, lean_object* v_u_1469_, lean_object* v_type_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f(v_declName_1468_, v_u_1469_, v_type_1470_, v_a_1471_, v_a_1472_, v_a_1473_, v_a_1474_, v_a_1475_, v_a_1476_, v_a_1477_, v_a_1478_, v_a_1479_, v_a_1480_);
lean_dec(v_a_1480_);
lean_dec_ref(v_a_1479_);
lean_dec(v_a_1478_);
lean_dec_ref(v_a_1477_);
lean_dec(v_a_1476_);
lean_dec_ref(v_a_1475_);
lean_dec(v_a_1474_);
lean_dec_ref(v_a_1473_);
lean_dec(v_a_1472_);
lean_dec(v_a_1471_);
return v_res_1482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg(lean_object* v_declName_1483_, lean_object* v_u_1484_, lean_object* v_type_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_){
_start:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1493_ = lean_box(0);
v___x_1494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1494_, 0, v_u_1484_);
lean_ctor_set(v___x_1494_, 1, v___x_1493_);
v___x_1495_ = l_Lean_mkConst(v_declName_1483_, v___x_1494_);
v___x_1496_ = l_Lean_Expr_app___override(v___x_1495_, v_type_1485_);
v___x_1497_ = l_Lean_Meta_Sym_synthInstance(v___x_1496_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg___boxed(lean_object* v_declName_1498_, lean_object* v_u_1499_, lean_object* v_type_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg(v_declName_1498_, v_u_1499_, v_type_1500_, v_a_1501_, v_a_1502_, v_a_1503_, v_a_1504_, v_a_1505_, v_a_1506_);
lean_dec(v_a_1506_);
lean_dec_ref(v_a_1505_);
lean_dec(v_a_1504_);
lean_dec_ref(v_a_1503_);
lean_dec(v_a_1502_);
lean_dec_ref(v_a_1501_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst(lean_object* v_declName_1509_, lean_object* v_u_1510_, lean_object* v_type_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_){
_start:
{
lean_object* v___x_1523_; 
v___x_1523_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg(v_declName_1509_, v_u_1510_, v_type_1511_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___boxed(lean_object* v_declName_1524_, lean_object* v_u_1525_, lean_object* v_type_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_){
_start:
{
lean_object* v_res_1538_; 
v_res_1538_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst(v_declName_1524_, v_u_1525_, v_type_1526_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_, v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_);
lean_dec(v_a_1536_);
lean_dec_ref(v_a_1535_);
lean_dec(v_a_1534_);
lean_dec_ref(v_a_1533_);
lean_dec(v_a_1532_);
lean_dec_ref(v_a_1531_);
lean_dec(v_a_1530_);
lean_dec_ref(v_a_1529_);
lean_dec(v_a_1528_);
lean_dec(v_a_1527_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(lean_object* v_declName_1539_, lean_object* v_u_1540_, lean_object* v_type_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_){
_start:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1549_ = lean_box(0);
lean_inc_n(v_u_1540_, 2);
v___x_1550_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1550_, 0, v_u_1540_);
lean_ctor_set(v___x_1550_, 1, v___x_1549_);
v___x_1551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1551_, 0, v_u_1540_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
v___x_1552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1552_, 0, v_u_1540_);
lean_ctor_set(v___x_1552_, 1, v___x_1551_);
v___x_1553_ = l_Lean_mkConst(v_declName_1539_, v___x_1552_);
lean_inc_ref_n(v_type_1541_, 2);
v___x_1554_ = l_Lean_mkApp3(v___x_1553_, v_type_1541_, v_type_1541_, v_type_1541_);
v___x_1555_ = l_Lean_Meta_Sym_synthInstance(v___x_1554_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v_a_1547_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg___boxed(lean_object* v_declName_1556_, lean_object* v_u_1557_, lean_object* v_type_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(v_declName_1556_, v_u_1557_, v_type_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_, v_a_1563_, v_a_1564_);
lean_dec(v_a_1564_);
lean_dec_ref(v_a_1563_);
lean_dec(v_a_1562_);
lean_dec_ref(v_a_1561_);
lean_dec(v_a_1560_);
lean_dec_ref(v_a_1559_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst(lean_object* v_declName_1567_, lean_object* v_u_1568_, lean_object* v_type_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_){
_start:
{
lean_object* v___x_1581_; 
v___x_1581_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(v_declName_1567_, v_u_1568_, v_type_1569_, v_a_1574_, v_a_1575_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___boxed(lean_object* v_declName_1582_, lean_object* v_u_1583_, lean_object* v_type_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst(v_declName_1582_, v_u_1583_, v_type_1584_, v_a_1585_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_, v_a_1590_, v_a_1591_, v_a_1592_, v_a_1593_, v_a_1594_);
lean_dec(v_a_1594_);
lean_dec_ref(v_a_1593_);
lean_dec(v_a_1592_);
lean_dec_ref(v_a_1591_);
lean_dec(v_a_1590_);
lean_dec_ref(v_a_1589_);
lean_dec(v_a_1588_);
lean_dec_ref(v_a_1587_);
lean_dec(v_a_1586_);
lean_dec(v_a_1585_);
return v_res_1596_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2(void){
_start:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1600_ = lean_unsigned_to_nat(0u);
v___x_1601_ = l_Lean_Level_ofNat(v___x_1600_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg(lean_object* v_u_1602_, lean_object* v_type_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1611_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1));
v___x_1612_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_1613_ = lean_box(0);
lean_inc(v_u_1602_);
v___x_1614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1614_, 0, v_u_1602_);
lean_ctor_set(v___x_1614_, 1, v___x_1613_);
v___x_1615_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1615_, 0, v_u_1602_);
lean_ctor_set(v___x_1615_, 1, v___x_1614_);
v___x_1616_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1612_);
lean_ctor_set(v___x_1616_, 1, v___x_1615_);
v___x_1617_ = l_Lean_mkConst(v___x_1611_, v___x_1616_);
v___x_1618_ = l_Lean_Int_mkType;
lean_inc_ref(v_type_1603_);
v___x_1619_ = l_Lean_mkApp3(v___x_1617_, v___x_1618_, v_type_1603_, v_type_1603_);
v___x_1620_ = l_Lean_Meta_Sym_synthInstance(v___x_1619_, v_a_1604_, v_a_1605_, v_a_1606_, v_a_1607_, v_a_1608_, v_a_1609_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___boxed(lean_object* v_u_1621_, lean_object* v_type_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_){
_start:
{
lean_object* v_res_1630_; 
v_res_1630_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg(v_u_1621_, v_type_1622_, v_a_1623_, v_a_1624_, v_a_1625_, v_a_1626_, v_a_1627_, v_a_1628_);
lean_dec(v_a_1628_);
lean_dec_ref(v_a_1627_);
lean_dec(v_a_1626_);
lean_dec_ref(v_a_1625_);
lean_dec(v_a_1624_);
lean_dec_ref(v_a_1623_);
return v_res_1630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst(lean_object* v_u_1631_, lean_object* v_type_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_){
_start:
{
lean_object* v___x_1644_; 
v___x_1644_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg(v_u_1631_, v_type_1632_, v_a_1637_, v_a_1638_, v_a_1639_, v_a_1640_, v_a_1641_, v_a_1642_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___boxed(lean_object* v_u_1645_, lean_object* v_type_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_){
_start:
{
lean_object* v_res_1658_; 
v_res_1658_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst(v_u_1645_, v_type_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_, v_a_1653_, v_a_1654_, v_a_1655_, v_a_1656_);
lean_dec(v_a_1656_);
lean_dec_ref(v_a_1655_);
lean_dec(v_a_1654_);
lean_dec_ref(v_a_1653_);
lean_dec(v_a_1652_);
lean_dec_ref(v_a_1651_);
lean_dec(v_a_1650_);
lean_dec_ref(v_a_1649_);
lean_dec(v_a_1648_);
lean_dec(v_a_1647_);
return v_res_1658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg(lean_object* v_u_1659_, lean_object* v_type_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_){
_start:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1668_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1));
v___x_1669_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_1670_ = lean_box(0);
lean_inc(v_u_1659_);
v___x_1671_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1671_, 0, v_u_1659_);
lean_ctor_set(v___x_1671_, 1, v___x_1670_);
v___x_1672_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1672_, 0, v_u_1659_);
lean_ctor_set(v___x_1672_, 1, v___x_1671_);
v___x_1673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1669_);
lean_ctor_set(v___x_1673_, 1, v___x_1672_);
v___x_1674_ = l_Lean_mkConst(v___x_1668_, v___x_1673_);
v___x_1675_ = l_Lean_Nat_mkType;
lean_inc_ref(v_type_1660_);
v___x_1676_ = l_Lean_mkApp3(v___x_1674_, v___x_1675_, v_type_1660_, v_type_1660_);
v___x_1677_ = l_Lean_Meta_Sym_synthInstance(v___x_1676_, v_a_1661_, v_a_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg___boxed(lean_object* v_u_1678_, lean_object* v_type_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg(v_u_1678_, v_type_1679_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_, v_a_1685_);
lean_dec(v_a_1685_);
lean_dec_ref(v_a_1684_);
lean_dec(v_a_1683_);
lean_dec_ref(v_a_1682_);
lean_dec(v_a_1681_);
lean_dec_ref(v_a_1680_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst(lean_object* v_u_1688_, lean_object* v_type_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_, lean_object* v_a_1693_, lean_object* v_a_1694_, lean_object* v_a_1695_, lean_object* v_a_1696_, lean_object* v_a_1697_, lean_object* v_a_1698_, lean_object* v_a_1699_){
_start:
{
lean_object* v___x_1701_; 
v___x_1701_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg(v_u_1688_, v_type_1689_, v_a_1694_, v_a_1695_, v_a_1696_, v_a_1697_, v_a_1698_, v_a_1699_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___boxed(lean_object* v_u_1702_, lean_object* v_type_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_){
_start:
{
lean_object* v_res_1715_; 
v_res_1715_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst(v_u_1702_, v_type_1703_, v_a_1704_, v_a_1705_, v_a_1706_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_, v_a_1713_);
lean_dec(v_a_1713_);
lean_dec_ref(v_a_1712_);
lean_dec(v_a_1711_);
lean_dec_ref(v_a_1710_);
lean_dec(v_a_1709_);
lean_dec_ref(v_a_1708_);
lean_dec(v_a_1707_);
lean_dec_ref(v_a_1706_);
lean_dec(v_a_1705_);
lean_dec(v_a_1704_);
return v_res_1715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(lean_object* v_leInst_x3f_1716_, lean_object* v_parentInst_x3f_1717_, lean_object* v_childInst_x3f_1718_, lean_object* v_toFieldName_1719_, lean_object* v_u_1720_, lean_object* v_type_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_){
_start:
{
if (lean_obj_tag(v_leInst_x3f_1716_) == 1)
{
if (lean_obj_tag(v_parentInst_x3f_1717_) == 1)
{
if (lean_obj_tag(v_childInst_x3f_1718_) == 1)
{
lean_object* v_val_1732_; lean_object* v_val_1733_; lean_object* v_val_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v_toField_1738_; lean_object* v___x_1739_; 
v_val_1732_ = lean_ctor_get(v_leInst_x3f_1716_, 0);
lean_inc(v_val_1732_);
lean_dec_ref_known(v_leInst_x3f_1716_, 1);
v_val_1733_ = lean_ctor_get(v_parentInst_x3f_1717_, 0);
lean_inc_n(v_val_1733_, 2);
lean_dec_ref_known(v_parentInst_x3f_1717_, 1);
v_val_1734_ = lean_ctor_get(v_childInst_x3f_1718_, 0);
v___x_1735_ = lean_box(0);
v___x_1736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1736_, 0, v_u_1720_);
lean_ctor_set(v___x_1736_, 1, v___x_1735_);
v___x_1737_ = l_Lean_mkConst(v_toFieldName_1719_, v___x_1736_);
lean_inc(v_val_1734_);
v_toField_1738_ = l_Lean_mkApp3(v___x_1737_, v_type_1721_, v_val_1732_, v_val_1734_);
lean_inc_ref(v_toField_1738_);
v___x_1739_ = l_Lean_Meta_isDefEqD(v_val_1733_, v_toField_1738_, v_a_1724_, v_a_1725_, v_a_1726_, v_a_1727_);
if (lean_obj_tag(v___x_1739_) == 0)
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1770_; 
v_a_1740_ = lean_ctor_get(v___x_1739_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1742_ = v___x_1739_;
v_isShared_1743_ = v_isSharedCheck_1770_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1739_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1770_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
uint8_t v___x_1744_; 
v___x_1744_ = lean_unbox(v_a_1740_);
lean_dec(v_a_1740_);
if (v___x_1744_ == 0)
{
lean_object* v___x_1745_; lean_object* v_a_1746_; lean_object* v___x_1747_; 
lean_del_object(v___x_1742_);
lean_dec_ref_known(v_childInst_x3f_1718_, 1);
v___x_1745_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_val_1733_, v_toField_1738_);
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
lean_inc(v_a_1746_);
lean_dec_ref(v___x_1745_);
v___x_1747_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1722_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; uint8_t v_verbose_1749_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
lean_inc(v_a_1748_);
lean_dec_ref_known(v___x_1747_, 1);
v_verbose_1749_ = lean_ctor_get_uint8(v_a_1748_, 0);
lean_dec(v_a_1748_);
if (v_verbose_1749_ == 0)
{
lean_dec(v_a_1746_);
goto v___jp_1729_;
}
else
{
lean_object* v___x_1750_; 
v___x_1750_ = l_Lean_Meta_Sym_reportIssue(v_a_1746_, v_a_1722_, v_a_1723_, v_a_1724_, v_a_1725_, v_a_1726_, v_a_1727_);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_dec_ref_known(v___x_1750_, 1);
goto v___jp_1729_;
}
else
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1758_; 
v_a_1751_ = lean_ctor_get(v___x_1750_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1758_ == 0)
{
v___x_1753_ = v___x_1750_;
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1750_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1756_; 
if (v_isShared_1754_ == 0)
{
v___x_1756_ = v___x_1753_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v_a_1751_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
}
}
else
{
lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1766_; 
lean_dec(v_a_1746_);
v_a_1759_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1761_ = v___x_1747_;
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v___x_1747_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1764_; 
if (v_isShared_1762_ == 0)
{
v___x_1764_ = v___x_1761_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_a_1759_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
else
{
lean_object* v___x_1768_; 
lean_dec_ref(v_toField_1738_);
lean_dec(v_val_1733_);
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 0, v_childInst_x3f_1718_);
v___x_1768_ = v___x_1742_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_childInst_x3f_1718_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
else
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1778_; 
lean_dec_ref(v_toField_1738_);
lean_dec(v_val_1733_);
lean_dec_ref_known(v_childInst_x3f_1718_, 1);
v_a_1771_ = lean_ctor_get(v___x_1739_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1773_ = v___x_1739_;
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1739_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_a_1771_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
}
else
{
lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1786_; 
lean_dec_ref_known(v_leInst_x3f_1716_, 1);
lean_dec_ref(v_type_1721_);
lean_dec(v_u_1720_);
lean_dec(v_toFieldName_1719_);
lean_dec(v_childInst_x3f_1718_);
v_isSharedCheck_1786_ = !lean_is_exclusive(v_parentInst_x3f_1717_);
if (v_isSharedCheck_1786_ == 0)
{
lean_object* v_unused_1787_; 
v_unused_1787_ = lean_ctor_get(v_parentInst_x3f_1717_, 0);
lean_dec(v_unused_1787_);
v___x_1780_ = v_parentInst_x3f_1717_;
v_isShared_1781_ = v_isSharedCheck_1786_;
goto v_resetjp_1779_;
}
else
{
lean_dec(v_parentInst_x3f_1717_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1786_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1782_; lean_object* v___x_1784_; 
v___x_1782_ = lean_box(0);
if (v_isShared_1781_ == 0)
{
lean_ctor_set_tag(v___x_1780_, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1782_);
v___x_1784_ = v___x_1780_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v___x_1782_);
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
lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1795_; 
lean_dec_ref(v_type_1721_);
lean_dec(v_u_1720_);
lean_dec(v_toFieldName_1719_);
lean_dec(v_childInst_x3f_1718_);
lean_dec(v_parentInst_x3f_1717_);
v_isSharedCheck_1795_ = !lean_is_exclusive(v_leInst_x3f_1716_);
if (v_isSharedCheck_1795_ == 0)
{
lean_object* v_unused_1796_; 
v_unused_1796_ = lean_ctor_get(v_leInst_x3f_1716_, 0);
lean_dec(v_unused_1796_);
v___x_1789_ = v_leInst_x3f_1716_;
v_isShared_1790_ = v_isSharedCheck_1795_;
goto v_resetjp_1788_;
}
else
{
lean_dec(v_leInst_x3f_1716_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1795_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1791_; lean_object* v___x_1793_; 
v___x_1791_ = lean_box(0);
if (v_isShared_1790_ == 0)
{
lean_ctor_set_tag(v___x_1789_, 0);
lean_ctor_set(v___x_1789_, 0, v___x_1791_);
v___x_1793_ = v___x_1789_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1791_);
v___x_1793_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
return v___x_1793_;
}
}
}
}
else
{
lean_object* v___x_1797_; lean_object* v___x_1798_; 
lean_dec_ref(v_type_1721_);
lean_dec(v_u_1720_);
lean_dec(v_toFieldName_1719_);
lean_dec(v_childInst_x3f_1718_);
lean_dec(v_parentInst_x3f_1717_);
lean_dec(v_leInst_x3f_1716_);
v___x_1797_ = lean_box(0);
v___x_1798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1797_);
return v___x_1798_;
}
v___jp_1729_:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1730_ = lean_box(0);
v___x_1731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1731_, 0, v___x_1730_);
return v___x_1731_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg___boxed(lean_object* v_leInst_x3f_1799_, lean_object* v_parentInst_x3f_1800_, lean_object* v_childInst_x3f_1801_, lean_object* v_toFieldName_1802_, lean_object* v_u_1803_, lean_object* v_type_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_){
_start:
{
lean_object* v_res_1812_; 
v_res_1812_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(v_leInst_x3f_1799_, v_parentInst_x3f_1800_, v_childInst_x3f_1801_, v_toFieldName_1802_, v_u_1803_, v_type_1804_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_, v_a_1809_, v_a_1810_);
lean_dec(v_a_1810_);
lean_dec_ref(v_a_1809_);
lean_dec(v_a_1808_);
lean_dec_ref(v_a_1807_);
lean_dec(v_a_1806_);
lean_dec_ref(v_a_1805_);
return v_res_1812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f(lean_object* v_leInst_x3f_1813_, lean_object* v_parentInst_x3f_1814_, lean_object* v_childInst_x3f_1815_, lean_object* v_toFieldName_1816_, lean_object* v_u_1817_, lean_object* v_type_1818_, lean_object* v_a_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_){
_start:
{
lean_object* v___x_1830_; 
v___x_1830_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(v_leInst_x3f_1813_, v_parentInst_x3f_1814_, v_childInst_x3f_1815_, v_toFieldName_1816_, v_u_1817_, v_type_1818_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_);
return v___x_1830_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___boxed(lean_object** _args){
lean_object* v_leInst_x3f_1831_ = _args[0];
lean_object* v_parentInst_x3f_1832_ = _args[1];
lean_object* v_childInst_x3f_1833_ = _args[2];
lean_object* v_toFieldName_1834_ = _args[3];
lean_object* v_u_1835_ = _args[4];
lean_object* v_type_1836_ = _args[5];
lean_object* v_a_1837_ = _args[6];
lean_object* v_a_1838_ = _args[7];
lean_object* v_a_1839_ = _args[8];
lean_object* v_a_1840_ = _args[9];
lean_object* v_a_1841_ = _args[10];
lean_object* v_a_1842_ = _args[11];
lean_object* v_a_1843_ = _args[12];
lean_object* v_a_1844_ = _args[13];
lean_object* v_a_1845_ = _args[14];
lean_object* v_a_1846_ = _args[15];
lean_object* v_a_1847_ = _args[16];
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f(v_leInst_x3f_1831_, v_parentInst_x3f_1832_, v_childInst_x3f_1833_, v_toFieldName_1834_, v_u_1835_, v_type_1836_, v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_);
lean_dec(v_a_1846_);
lean_dec_ref(v_a_1845_);
lean_dec(v_a_1844_);
lean_dec_ref(v_a_1843_);
lean_dec(v_a_1842_);
lean_dec_ref(v_a_1841_);
lean_dec(v_a_1840_);
lean_dec_ref(v_a_1839_);
lean_dec(v_a_1838_);
lean_dec(v_a_1837_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(lean_object* v_parentInst_1849_, lean_object* v_inst_1850_, lean_object* v_toFieldName_1851_, lean_object* v_u_1852_, lean_object* v_type_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_){
_start:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v_toField_1862_; lean_object* v___x_1863_; 
v___x_1859_ = lean_box(0);
v___x_1860_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1860_, 0, v_u_1852_);
lean_ctor_set(v___x_1860_, 1, v___x_1859_);
v___x_1861_ = l_Lean_mkConst(v_toFieldName_1851_, v___x_1860_);
v_toField_1862_ = l_Lean_mkAppB(v___x_1861_, v_type_1853_, v_inst_1850_);
v___x_1863_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_parentInst_1849_, v_toField_1862_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg___boxed(lean_object* v_parentInst_1864_, lean_object* v_inst_1865_, lean_object* v_toFieldName_1866_, lean_object* v_u_1867_, lean_object* v_type_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(v_parentInst_1864_, v_inst_1865_, v_toFieldName_1866_, v_u_1867_, v_type_1868_, v_a_1869_, v_a_1870_, v_a_1871_, v_a_1872_);
lean_dec(v_a_1872_);
lean_dec_ref(v_a_1871_);
lean_dec(v_a_1870_);
lean_dec_ref(v_a_1869_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq(lean_object* v_parentInst_1875_, lean_object* v_inst_1876_, lean_object* v_toFieldName_1877_, lean_object* v_u_1878_, lean_object* v_type_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_, lean_object* v_a_1889_){
_start:
{
lean_object* v___x_1891_; 
v___x_1891_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(v_parentInst_1875_, v_inst_1876_, v_toFieldName_1877_, v_u_1878_, v_type_1879_, v_a_1886_, v_a_1887_, v_a_1888_, v_a_1889_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___boxed(lean_object* v_parentInst_1892_, lean_object* v_inst_1893_, lean_object* v_toFieldName_1894_, lean_object* v_u_1895_, lean_object* v_type_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_){
_start:
{
lean_object* v_res_1908_; 
v_res_1908_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq(v_parentInst_1892_, v_inst_1893_, v_toFieldName_1894_, v_u_1895_, v_type_1896_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_);
lean_dec(v_a_1906_);
lean_dec_ref(v_a_1905_);
lean_dec(v_a_1904_);
lean_dec_ref(v_a_1903_);
lean_dec(v_a_1902_);
lean_dec_ref(v_a_1901_);
lean_dec(v_a_1900_);
lean_dec_ref(v_a_1899_);
lean_dec(v_a_1898_);
lean_dec(v_a_1897_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(lean_object* v_parentInst_1909_, lean_object* v_inst_1910_, lean_object* v_toFieldName_1911_, lean_object* v_toHeteroName_1912_, lean_object* v_u_1913_, lean_object* v_type_1914_, lean_object* v_extraType_x3f_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_){
_start:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v_toField_1924_; 
v___x_1921_ = lean_box(0);
v___x_1922_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1922_, 0, v_u_1913_);
lean_ctor_set(v___x_1922_, 1, v___x_1921_);
lean_inc_ref(v___x_1922_);
v___x_1923_ = l_Lean_mkConst(v_toFieldName_1911_, v___x_1922_);
lean_inc_ref(v_type_1914_);
v_toField_1924_ = l_Lean_mkAppB(v___x_1923_, v_type_1914_, v_inst_1910_);
if (lean_obj_tag(v_extraType_x3f_1915_) == 0)
{
lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1925_ = l_Lean_mkConst(v_toHeteroName_1912_, v___x_1922_);
v___x_1926_ = l_Lean_mkAppB(v___x_1925_, v_type_1914_, v_toField_1924_);
v___x_1927_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_parentInst_1909_, v___x_1926_, v_a_1916_, v_a_1917_, v_a_1918_, v_a_1919_);
return v___x_1927_;
}
else
{
lean_object* v_val_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
v_val_1928_ = lean_ctor_get(v_extraType_x3f_1915_, 0);
lean_inc(v_val_1928_);
lean_dec_ref_known(v_extraType_x3f_1915_, 1);
v___x_1929_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_1930_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1929_);
lean_ctor_set(v___x_1930_, 1, v___x_1922_);
v___x_1931_ = l_Lean_mkConst(v_toHeteroName_1912_, v___x_1930_);
v___x_1932_ = l_Lean_mkApp3(v___x_1931_, v_val_1928_, v_type_1914_, v_toField_1924_);
v___x_1933_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_parentInst_1909_, v___x_1932_, v_a_1916_, v_a_1917_, v_a_1918_, v_a_1919_);
return v___x_1933_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg___boxed(lean_object* v_parentInst_1934_, lean_object* v_inst_1935_, lean_object* v_toFieldName_1936_, lean_object* v_toHeteroName_1937_, lean_object* v_u_1938_, lean_object* v_type_1939_, lean_object* v_extraType_x3f_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_parentInst_1934_, v_inst_1935_, v_toFieldName_1936_, v_toHeteroName_1937_, v_u_1938_, v_type_1939_, v_extraType_x3f_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_);
lean_dec(v_a_1944_);
lean_dec_ref(v_a_1943_);
lean_dec(v_a_1942_);
lean_dec_ref(v_a_1941_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq(lean_object* v_parentInst_1947_, lean_object* v_inst_1948_, lean_object* v_toFieldName_1949_, lean_object* v_toHeteroName_1950_, lean_object* v_u_1951_, lean_object* v_type_1952_, lean_object* v_extraType_x3f_1953_, lean_object* v_a_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_){
_start:
{
lean_object* v___x_1965_; 
v___x_1965_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_parentInst_1947_, v_inst_1948_, v_toFieldName_1949_, v_toHeteroName_1950_, v_u_1951_, v_type_1952_, v_extraType_x3f_1953_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_);
return v___x_1965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___boxed(lean_object** _args){
lean_object* v_parentInst_1966_ = _args[0];
lean_object* v_inst_1967_ = _args[1];
lean_object* v_toFieldName_1968_ = _args[2];
lean_object* v_toHeteroName_1969_ = _args[3];
lean_object* v_u_1970_ = _args[4];
lean_object* v_type_1971_ = _args[5];
lean_object* v_extraType_x3f_1972_ = _args[6];
lean_object* v_a_1973_ = _args[7];
lean_object* v_a_1974_ = _args[8];
lean_object* v_a_1975_ = _args[9];
lean_object* v_a_1976_ = _args[10];
lean_object* v_a_1977_ = _args[11];
lean_object* v_a_1978_ = _args[12];
lean_object* v_a_1979_ = _args[13];
lean_object* v_a_1980_ = _args[14];
lean_object* v_a_1981_ = _args[15];
lean_object* v_a_1982_ = _args[16];
lean_object* v_a_1983_ = _args[17];
_start:
{
lean_object* v_res_1984_; 
v_res_1984_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq(v_parentInst_1966_, v_inst_1967_, v_toFieldName_1968_, v_toHeteroName_1969_, v_u_1970_, v_type_1971_, v_extraType_x3f_1972_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_);
lean_dec(v_a_1982_);
lean_dec_ref(v_a_1981_);
lean_dec(v_a_1980_);
lean_dec_ref(v_a_1979_);
lean_dec(v_a_1978_);
lean_dec_ref(v_a_1977_);
lean_dec(v_a_1976_);
lean_dec_ref(v_a_1975_);
lean_dec(v_a_1974_);
lean_dec(v_a_1973_);
return v_res_1984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg(lean_object* v_u_1989_, lean_object* v_type_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v_smulType_2006_; lean_object* v___x_2007_; 
v___x_1998_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1));
v___x_1999_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_2000_ = lean_box(0);
lean_inc(v_u_1989_);
v___x_2001_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2001_, 0, v_u_1989_);
lean_ctor_set(v___x_2001_, 1, v___x_2000_);
v___x_2002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2002_, 0, v_u_1989_);
lean_ctor_set(v___x_2002_, 1, v___x_2001_);
v___x_2003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2003_, 0, v___x_1999_);
lean_ctor_set(v___x_2003_, 1, v___x_2002_);
lean_inc_ref(v___x_2003_);
v___x_2004_ = l_Lean_mkConst(v___x_1998_, v___x_2003_);
v___x_2005_ = l_Lean_Int_mkType;
lean_inc_ref_n(v_type_1990_, 2);
v_smulType_2006_ = l_Lean_mkApp3(v___x_2004_, v___x_2005_, v_type_1990_, v_type_1990_);
v___x_2007_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_smulType_2006_, v_a_1992_, v_a_1993_, v_a_1994_, v_a_1995_, v_a_1996_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v_a_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2044_; 
v_a_2008_ = lean_ctor_get(v___x_2007_, 0);
v_isSharedCheck_2044_ = !lean_is_exclusive(v___x_2007_);
if (v_isSharedCheck_2044_ == 0)
{
v___x_2010_ = v___x_2007_;
v_isShared_2011_ = v_isSharedCheck_2044_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_a_2008_);
lean_dec(v___x_2007_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2044_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
if (lean_obj_tag(v_a_2008_) == 1)
{
lean_object* v_val_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2039_; 
lean_del_object(v___x_2010_);
v_val_2012_ = lean_ctor_get(v_a_2008_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v_a_2008_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2014_ = v_a_2008_;
v_isShared_2015_ = v_isSharedCheck_2039_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_val_2012_);
lean_dec(v_a_2008_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2039_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; 
v___x_2016_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1));
v___x_2017_ = l_Lean_mkConst(v___x_2016_, v___x_2003_);
lean_inc_ref(v_type_1990_);
v___x_2018_ = l_Lean_mkApp4(v___x_2017_, v___x_2005_, v_type_1990_, v_type_1990_, v_val_2012_);
v___x_2019_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2018_, v_a_1991_, v_a_1992_, v_a_1993_, v_a_1994_, v_a_1995_, v_a_1996_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2030_; 
v_a_2020_ = lean_ctor_get(v___x_2019_, 0);
v_isSharedCheck_2030_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2030_ == 0)
{
v___x_2022_ = v___x_2019_;
v_isShared_2023_ = v_isSharedCheck_2030_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_2019_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2030_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2015_ == 0)
{
lean_ctor_set(v___x_2014_, 0, v_a_2020_);
v___x_2025_ = v___x_2014_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v_a_2020_);
v___x_2025_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2027_; 
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 0, v___x_2025_);
v___x_2027_ = v___x_2022_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v___x_2025_);
v___x_2027_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
return v___x_2027_;
}
}
}
}
else
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2038_; 
lean_del_object(v___x_2014_);
v_a_2031_ = lean_ctor_get(v___x_2019_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2033_ = v___x_2019_;
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2019_);
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
}
else
{
lean_object* v___x_2040_; lean_object* v___x_2042_; 
lean_dec(v_a_2008_);
lean_dec_ref_known(v___x_2003_, 2);
lean_dec_ref(v_type_1990_);
v___x_2040_ = lean_box(0);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 0, v___x_2040_);
v___x_2042_ = v___x_2010_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v___x_2040_);
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
else
{
lean_dec_ref_known(v___x_2003_, 2);
lean_dec_ref(v_type_1990_);
return v___x_2007_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___boxed(lean_object* v_u_2045_, lean_object* v_type_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_, lean_object* v_a_2050_, lean_object* v_a_2051_, lean_object* v_a_2052_, lean_object* v_a_2053_){
_start:
{
lean_object* v_res_2054_; 
v_res_2054_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg(v_u_2045_, v_type_2046_, v_a_2047_, v_a_2048_, v_a_2049_, v_a_2050_, v_a_2051_, v_a_2052_);
lean_dec(v_a_2052_);
lean_dec_ref(v_a_2051_);
lean_dec(v_a_2050_);
lean_dec_ref(v_a_2049_);
lean_dec(v_a_2048_);
lean_dec_ref(v_a_2047_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f(lean_object* v_u_2055_, lean_object* v_type_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_, lean_object* v_a_2061_, lean_object* v_a_2062_, lean_object* v_a_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_){
_start:
{
lean_object* v___x_2068_; 
v___x_2068_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg(v_u_2055_, v_type_2056_, v_a_2061_, v_a_2062_, v_a_2063_, v_a_2064_, v_a_2065_, v_a_2066_);
return v___x_2068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___boxed(lean_object* v_u_2069_, lean_object* v_type_2070_, lean_object* v_a_2071_, lean_object* v_a_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_, lean_object* v_a_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_){
_start:
{
lean_object* v_res_2082_; 
v_res_2082_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f(v_u_2069_, v_type_2070_, v_a_2071_, v_a_2072_, v_a_2073_, v_a_2074_, v_a_2075_, v_a_2076_, v_a_2077_, v_a_2078_, v_a_2079_, v_a_2080_);
lean_dec(v_a_2080_);
lean_dec_ref(v_a_2079_);
lean_dec(v_a_2078_);
lean_dec_ref(v_a_2077_);
lean_dec(v_a_2076_);
lean_dec_ref(v_a_2075_);
lean_dec(v_a_2074_);
lean_dec_ref(v_a_2073_);
lean_dec(v_a_2072_);
lean_dec(v_a_2071_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___redArg(lean_object* v_u_2083_, lean_object* v_type_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_){
_start:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v_smulType_2100_; lean_object* v___x_2101_; 
v___x_2092_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1));
v___x_2093_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_2094_ = lean_box(0);
lean_inc(v_u_2083_);
v___x_2095_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2095_, 0, v_u_2083_);
lean_ctor_set(v___x_2095_, 1, v___x_2094_);
v___x_2096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2096_, 0, v_u_2083_);
lean_ctor_set(v___x_2096_, 1, v___x_2095_);
v___x_2097_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2093_);
lean_ctor_set(v___x_2097_, 1, v___x_2096_);
lean_inc_ref(v___x_2097_);
v___x_2098_ = l_Lean_mkConst(v___x_2092_, v___x_2097_);
v___x_2099_ = l_Lean_Nat_mkType;
lean_inc_ref_n(v_type_2084_, 2);
v_smulType_2100_ = l_Lean_mkApp3(v___x_2098_, v___x_2099_, v_type_2084_, v_type_2084_);
v___x_2101_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_smulType_2100_, v_a_2086_, v_a_2087_, v_a_2088_, v_a_2089_, v_a_2090_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2138_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2104_ = v___x_2101_;
v_isShared_2105_ = v_isSharedCheck_2138_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v___x_2101_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2138_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
if (lean_obj_tag(v_a_2102_) == 1)
{
lean_object* v_val_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2133_; 
lean_del_object(v___x_2104_);
v_val_2106_ = lean_ctor_get(v_a_2102_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v_a_2102_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2108_ = v_a_2102_;
v_isShared_2109_ = v_isSharedCheck_2133_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_val_2106_);
lean_dec(v_a_2102_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2133_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2110_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1));
v___x_2111_ = l_Lean_mkConst(v___x_2110_, v___x_2097_);
lean_inc_ref(v_type_2084_);
v___x_2112_ = l_Lean_mkApp4(v___x_2111_, v___x_2099_, v_type_2084_, v_type_2084_, v_val_2106_);
v___x_2113_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2112_, v_a_2085_, v_a_2086_, v_a_2087_, v_a_2088_, v_a_2089_, v_a_2090_);
if (lean_obj_tag(v___x_2113_) == 0)
{
lean_object* v_a_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2124_; 
v_a_2114_ = lean_ctor_get(v___x_2113_, 0);
v_isSharedCheck_2124_ = !lean_is_exclusive(v___x_2113_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2116_ = v___x_2113_;
v_isShared_2117_ = v_isSharedCheck_2124_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_a_2114_);
lean_dec(v___x_2113_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2124_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2119_; 
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 0, v_a_2114_);
v___x_2119_ = v___x_2108_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_a_2114_);
v___x_2119_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
lean_object* v___x_2121_; 
if (v_isShared_2117_ == 0)
{
lean_ctor_set(v___x_2116_, 0, v___x_2119_);
v___x_2121_ = v___x_2116_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v___x_2119_);
v___x_2121_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
return v___x_2121_;
}
}
}
}
else
{
lean_object* v_a_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2132_; 
lean_del_object(v___x_2108_);
v_a_2125_ = lean_ctor_get(v___x_2113_, 0);
v_isSharedCheck_2132_ = !lean_is_exclusive(v___x_2113_);
if (v_isSharedCheck_2132_ == 0)
{
v___x_2127_ = v___x_2113_;
v_isShared_2128_ = v_isSharedCheck_2132_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_a_2125_);
lean_dec(v___x_2113_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2132_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v___x_2130_; 
if (v_isShared_2128_ == 0)
{
v___x_2130_ = v___x_2127_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v_a_2125_);
v___x_2130_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
return v___x_2130_;
}
}
}
}
}
else
{
lean_object* v___x_2134_; lean_object* v___x_2136_; 
lean_dec(v_a_2102_);
lean_dec_ref_known(v___x_2097_, 2);
lean_dec_ref(v_type_2084_);
v___x_2134_ = lean_box(0);
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 0, v___x_2134_);
v___x_2136_ = v___x_2104_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v___x_2134_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_2097_, 2);
lean_dec_ref(v_type_2084_);
return v___x_2101_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___redArg___boxed(lean_object* v_u_2139_, lean_object* v_type_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_){
_start:
{
lean_object* v_res_2148_; 
v_res_2148_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___redArg(v_u_2139_, v_type_2140_, v_a_2141_, v_a_2142_, v_a_2143_, v_a_2144_, v_a_2145_, v_a_2146_);
lean_dec(v_a_2146_);
lean_dec_ref(v_a_2145_);
lean_dec(v_a_2144_);
lean_dec_ref(v_a_2143_);
lean_dec(v_a_2142_);
lean_dec_ref(v_a_2141_);
return v_res_2148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f(lean_object* v_u_2149_, lean_object* v_type_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_){
_start:
{
lean_object* v___x_2162_; 
v___x_2162_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___redArg(v_u_2149_, v_type_2150_, v_a_2155_, v_a_2156_, v_a_2157_, v_a_2158_, v_a_2159_, v_a_2160_);
return v___x_2162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___boxed(lean_object* v_u_2163_, lean_object* v_type_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_, lean_object* v_a_2168_, lean_object* v_a_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_){
_start:
{
lean_object* v_res_2176_; 
v_res_2176_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f(v_u_2163_, v_type_2164_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_);
lean_dec(v_a_2174_);
lean_dec_ref(v_a_2173_);
lean_dec(v_a_2172_);
lean_dec_ref(v_a_2171_);
lean_dec(v_a_2170_);
lean_dec_ref(v_a_2169_);
lean_dec(v_a_2168_);
lean_dec_ref(v_a_2167_);
lean_dec(v_a_2166_);
lean_dec(v_a_2165_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_2177_, lean_object* v_x_2178_, lean_object* v_x_2179_, lean_object* v_x_2180_){
_start:
{
lean_object* v_ks_2181_; lean_object* v_vs_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2208_; 
v_ks_2181_ = lean_ctor_get(v_x_2177_, 0);
v_vs_2182_ = lean_ctor_get(v_x_2177_, 1);
v_isSharedCheck_2208_ = !lean_is_exclusive(v_x_2177_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2184_ = v_x_2177_;
v_isShared_2185_ = v_isSharedCheck_2208_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_vs_2182_);
lean_inc(v_ks_2181_);
lean_dec(v_x_2177_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2208_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2186_; uint8_t v___x_2187_; 
v___x_2186_ = lean_array_get_size(v_ks_2181_);
v___x_2187_ = lean_nat_dec_lt(v_x_2178_, v___x_2186_);
if (v___x_2187_ == 0)
{
lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2191_; 
lean_dec(v_x_2178_);
v___x_2188_ = lean_array_push(v_ks_2181_, v_x_2179_);
v___x_2189_ = lean_array_push(v_vs_2182_, v_x_2180_);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 1, v___x_2189_);
lean_ctor_set(v___x_2184_, 0, v___x_2188_);
v___x_2191_ = v___x_2184_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v___x_2188_);
lean_ctor_set(v_reuseFailAlloc_2192_, 1, v___x_2189_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
else
{
lean_object* v_k_x27_2193_; size_t v___x_2194_; size_t v___x_2195_; uint8_t v___x_2196_; 
v_k_x27_2193_ = lean_array_fget_borrowed(v_ks_2181_, v_x_2178_);
v___x_2194_ = lean_ptr_addr(v_x_2179_);
v___x_2195_ = lean_ptr_addr(v_k_x27_2193_);
v___x_2196_ = lean_usize_dec_eq(v___x_2194_, v___x_2195_);
if (v___x_2196_ == 0)
{
lean_object* v___x_2198_; 
if (v_isShared_2185_ == 0)
{
v___x_2198_ = v___x_2184_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v_ks_2181_);
lean_ctor_set(v_reuseFailAlloc_2202_, 1, v_vs_2182_);
v___x_2198_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___x_2199_ = lean_unsigned_to_nat(1u);
v___x_2200_ = lean_nat_add(v_x_2178_, v___x_2199_);
lean_dec(v_x_2178_);
v_x_2177_ = v___x_2198_;
v_x_2178_ = v___x_2200_;
goto _start;
}
}
else
{
lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2206_; 
v___x_2203_ = lean_array_fset(v_ks_2181_, v_x_2178_, v_x_2179_);
v___x_2204_ = lean_array_fset(v_vs_2182_, v_x_2178_, v_x_2180_);
lean_dec(v_x_2178_);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 1, v___x_2204_);
lean_ctor_set(v___x_2184_, 0, v___x_2203_);
v___x_2206_ = v___x_2184_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v___x_2203_);
lean_ctor_set(v_reuseFailAlloc_2207_, 1, v___x_2204_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_n_2209_, lean_object* v_k_2210_, lean_object* v_v_2211_){
_start:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2212_ = lean_unsigned_to_nat(0u);
v___x_2213_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__1_spec__2___redArg(v_n_2209_, v___x_2212_, v_k_2210_, v_v_2211_);
return v___x_2213_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2214_; 
v___x_2214_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg(lean_object* v_x_2215_, size_t v_x_2216_, size_t v_x_2217_, lean_object* v_x_2218_, lean_object* v_x_2219_){
_start:
{
if (lean_obj_tag(v_x_2215_) == 0)
{
lean_object* v_es_2220_; size_t v___x_2221_; size_t v___x_2222_; lean_object* v_j_2223_; lean_object* v___x_2224_; uint8_t v___x_2225_; 
v_es_2220_ = lean_ctor_get(v_x_2215_, 0);
v___x_2221_ = ((size_t)31ULL);
v___x_2222_ = lean_usize_land(v_x_2216_, v___x_2221_);
v_j_2223_ = lean_usize_to_nat(v___x_2222_);
v___x_2224_ = lean_array_get_size(v_es_2220_);
v___x_2225_ = lean_nat_dec_lt(v_j_2223_, v___x_2224_);
if (v___x_2225_ == 0)
{
lean_dec(v_j_2223_);
lean_dec(v_x_2219_);
lean_dec_ref(v_x_2218_);
return v_x_2215_;
}
else
{
lean_object* v___x_2227_; uint8_t v_isShared_2228_; uint8_t v_isSharedCheck_2266_; 
lean_inc_ref(v_es_2220_);
v_isSharedCheck_2266_ = !lean_is_exclusive(v_x_2215_);
if (v_isSharedCheck_2266_ == 0)
{
lean_object* v_unused_2267_; 
v_unused_2267_ = lean_ctor_get(v_x_2215_, 0);
lean_dec(v_unused_2267_);
v___x_2227_ = v_x_2215_;
v_isShared_2228_ = v_isSharedCheck_2266_;
goto v_resetjp_2226_;
}
else
{
lean_dec(v_x_2215_);
v___x_2227_ = lean_box(0);
v_isShared_2228_ = v_isSharedCheck_2266_;
goto v_resetjp_2226_;
}
v_resetjp_2226_:
{
lean_object* v_v_2229_; lean_object* v___x_2230_; lean_object* v_xs_x27_2231_; lean_object* v___y_2233_; 
v_v_2229_ = lean_array_fget(v_es_2220_, v_j_2223_);
v___x_2230_ = lean_box(0);
v_xs_x27_2231_ = lean_array_fset(v_es_2220_, v_j_2223_, v___x_2230_);
switch(lean_obj_tag(v_v_2229_))
{
case 0:
{
lean_object* v_key_2238_; lean_object* v_val_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2251_; 
v_key_2238_ = lean_ctor_get(v_v_2229_, 0);
v_val_2239_ = lean_ctor_get(v_v_2229_, 1);
v_isSharedCheck_2251_ = !lean_is_exclusive(v_v_2229_);
if (v_isSharedCheck_2251_ == 0)
{
v___x_2241_ = v_v_2229_;
v_isShared_2242_ = v_isSharedCheck_2251_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_val_2239_);
lean_inc(v_key_2238_);
lean_dec(v_v_2229_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2251_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
size_t v___x_2243_; size_t v___x_2244_; uint8_t v___x_2245_; 
v___x_2243_ = lean_ptr_addr(v_x_2218_);
v___x_2244_ = lean_ptr_addr(v_key_2238_);
v___x_2245_ = lean_usize_dec_eq(v___x_2243_, v___x_2244_);
if (v___x_2245_ == 0)
{
lean_object* v___x_2246_; lean_object* v___x_2247_; 
lean_del_object(v___x_2241_);
v___x_2246_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2238_, v_val_2239_, v_x_2218_, v_x_2219_);
v___x_2247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2246_);
v___y_2233_ = v___x_2247_;
goto v___jp_2232_;
}
else
{
lean_object* v___x_2249_; 
lean_dec(v_val_2239_);
lean_dec(v_key_2238_);
if (v_isShared_2242_ == 0)
{
lean_ctor_set(v___x_2241_, 1, v_x_2219_);
lean_ctor_set(v___x_2241_, 0, v_x_2218_);
v___x_2249_ = v___x_2241_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2250_, 0, v_x_2218_);
lean_ctor_set(v_reuseFailAlloc_2250_, 1, v_x_2219_);
v___x_2249_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
v___y_2233_ = v___x_2249_;
goto v___jp_2232_;
}
}
}
}
case 1:
{
lean_object* v_node_2252_; lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2264_; 
v_node_2252_ = lean_ctor_get(v_v_2229_, 0);
v_isSharedCheck_2264_ = !lean_is_exclusive(v_v_2229_);
if (v_isSharedCheck_2264_ == 0)
{
v___x_2254_ = v_v_2229_;
v_isShared_2255_ = v_isSharedCheck_2264_;
goto v_resetjp_2253_;
}
else
{
lean_inc(v_node_2252_);
lean_dec(v_v_2229_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2264_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
size_t v___x_2256_; size_t v___x_2257_; size_t v___x_2258_; size_t v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2262_; 
v___x_2256_ = ((size_t)5ULL);
v___x_2257_ = lean_usize_shift_right(v_x_2216_, v___x_2256_);
v___x_2258_ = ((size_t)1ULL);
v___x_2259_ = lean_usize_add(v_x_2217_, v___x_2258_);
v___x_2260_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg(v_node_2252_, v___x_2257_, v___x_2259_, v_x_2218_, v_x_2219_);
if (v_isShared_2255_ == 0)
{
lean_ctor_set(v___x_2254_, 0, v___x_2260_);
v___x_2262_ = v___x_2254_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v___x_2260_);
v___x_2262_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
v___y_2233_ = v___x_2262_;
goto v___jp_2232_;
}
}
}
default: 
{
lean_object* v___x_2265_; 
v___x_2265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2265_, 0, v_x_2218_);
lean_ctor_set(v___x_2265_, 1, v_x_2219_);
v___y_2233_ = v___x_2265_;
goto v___jp_2232_;
}
}
v___jp_2232_:
{
lean_object* v___x_2234_; lean_object* v___x_2236_; 
v___x_2234_ = lean_array_fset(v_xs_x27_2231_, v_j_2223_, v___y_2233_);
lean_dec(v_j_2223_);
if (v_isShared_2228_ == 0)
{
lean_ctor_set(v___x_2227_, 0, v___x_2234_);
v___x_2236_ = v___x_2227_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2234_);
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
}
else
{
lean_object* v_ks_2268_; lean_object* v_vs_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2287_; 
v_ks_2268_ = lean_ctor_get(v_x_2215_, 0);
v_vs_2269_ = lean_ctor_get(v_x_2215_, 1);
v_isSharedCheck_2287_ = !lean_is_exclusive(v_x_2215_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2271_ = v_x_2215_;
v_isShared_2272_ = v_isSharedCheck_2287_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_vs_2269_);
lean_inc(v_ks_2268_);
lean_dec(v_x_2215_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2287_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2274_; 
if (v_isShared_2272_ == 0)
{
v___x_2274_ = v___x_2271_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_ks_2268_);
lean_ctor_set(v_reuseFailAlloc_2286_, 1, v_vs_2269_);
v___x_2274_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
lean_object* v_newNode_2275_; size_t v___x_2276_; uint8_t v___x_2277_; 
v_newNode_2275_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__1___redArg(v___x_2274_, v_x_2218_, v_x_2219_);
v___x_2276_ = ((size_t)7ULL);
v___x_2277_ = lean_usize_dec_le(v___x_2276_, v_x_2217_);
if (v___x_2277_ == 0)
{
lean_object* v___x_2278_; lean_object* v___x_2279_; uint8_t v___x_2280_; 
v___x_2278_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2275_);
v___x_2279_ = lean_unsigned_to_nat(4u);
v___x_2280_ = lean_nat_dec_lt(v___x_2278_, v___x_2279_);
lean_dec(v___x_2278_);
if (v___x_2280_ == 0)
{
lean_object* v_ks_2281_; lean_object* v_vs_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v_ks_2281_ = lean_ctor_get(v_newNode_2275_, 0);
lean_inc_ref(v_ks_2281_);
v_vs_2282_ = lean_ctor_get(v_newNode_2275_, 1);
lean_inc_ref(v_vs_2282_);
lean_dec_ref(v_newNode_2275_);
v___x_2283_ = lean_unsigned_to_nat(0u);
v___x_2284_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg___closed__0);
v___x_2285_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__2___redArg(v_x_2217_, v_ks_2281_, v_vs_2282_, v___x_2283_, v___x_2284_);
lean_dec_ref(v_vs_2282_);
lean_dec_ref(v_ks_2281_);
return v___x_2285_;
}
else
{
return v_newNode_2275_;
}
}
else
{
return v_newNode_2275_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__2___redArg(size_t v_depth_2288_, lean_object* v_keys_2289_, lean_object* v_vals_2290_, lean_object* v_i_2291_, lean_object* v_entries_2292_){
_start:
{
lean_object* v___x_2293_; uint8_t v___x_2294_; 
v___x_2293_ = lean_array_get_size(v_keys_2289_);
v___x_2294_ = lean_nat_dec_lt(v_i_2291_, v___x_2293_);
if (v___x_2294_ == 0)
{
lean_dec(v_i_2291_);
return v_entries_2292_;
}
else
{
lean_object* v_k_2295_; lean_object* v_v_2296_; size_t v___x_2297_; size_t v___x_2298_; size_t v___x_2299_; uint64_t v___x_2300_; size_t v_h_2301_; size_t v___x_2302_; lean_object* v___x_2303_; size_t v___x_2304_; size_t v___x_2305_; size_t v___x_2306_; size_t v_h_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v_k_2295_ = lean_array_fget_borrowed(v_keys_2289_, v_i_2291_);
v_v_2296_ = lean_array_fget_borrowed(v_vals_2290_, v_i_2291_);
v___x_2297_ = lean_ptr_addr(v_k_2295_);
v___x_2298_ = ((size_t)3ULL);
v___x_2299_ = lean_usize_shift_right(v___x_2297_, v___x_2298_);
v___x_2300_ = lean_usize_to_uint64(v___x_2299_);
v_h_2301_ = lean_uint64_to_usize(v___x_2300_);
v___x_2302_ = ((size_t)5ULL);
v___x_2303_ = lean_unsigned_to_nat(1u);
v___x_2304_ = ((size_t)1ULL);
v___x_2305_ = lean_usize_sub(v_depth_2288_, v___x_2304_);
v___x_2306_ = lean_usize_mul(v___x_2302_, v___x_2305_);
v_h_2307_ = lean_usize_shift_right(v_h_2301_, v___x_2306_);
v___x_2308_ = lean_nat_add(v_i_2291_, v___x_2303_);
lean_dec(v_i_2291_);
lean_inc(v_v_2296_);
lean_inc(v_k_2295_);
v___x_2309_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg(v_entries_2292_, v_h_2307_, v_depth_2288_, v_k_2295_, v_v_2296_);
v_i_2291_ = v___x_2308_;
v_entries_2292_ = v___x_2309_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_2311_, lean_object* v_keys_2312_, lean_object* v_vals_2313_, lean_object* v_i_2314_, lean_object* v_entries_2315_){
_start:
{
size_t v_depth_boxed_2316_; lean_object* v_res_2317_; 
v_depth_boxed_2316_ = lean_unbox_usize(v_depth_2311_);
lean_dec(v_depth_2311_);
v_res_2317_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__2___redArg(v_depth_boxed_2316_, v_keys_2312_, v_vals_2313_, v_i_2314_, v_entries_2315_);
lean_dec_ref(v_vals_2313_);
lean_dec_ref(v_keys_2312_);
return v_res_2317_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_2318_, lean_object* v_x_2319_, lean_object* v_x_2320_, lean_object* v_x_2321_, lean_object* v_x_2322_){
_start:
{
size_t v_x_536311__boxed_2323_; size_t v_x_536312__boxed_2324_; lean_object* v_res_2325_; 
v_x_536311__boxed_2323_ = lean_unbox_usize(v_x_2319_);
lean_dec(v_x_2319_);
v_x_536312__boxed_2324_ = lean_unbox_usize(v_x_2320_);
lean_dec(v_x_2320_);
v_res_2325_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg(v_x_2318_, v_x_536311__boxed_2323_, v_x_536312__boxed_2324_, v_x_2321_, v_x_2322_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0___redArg(lean_object* v_x_2326_, lean_object* v_x_2327_, lean_object* v_x_2328_){
_start:
{
size_t v___x_2329_; size_t v___x_2330_; size_t v___x_2331_; uint64_t v___x_2332_; size_t v___x_2333_; size_t v___x_2334_; lean_object* v___x_2335_; 
v___x_2329_ = lean_ptr_addr(v_x_2327_);
v___x_2330_ = ((size_t)3ULL);
v___x_2331_ = lean_usize_shift_right(v___x_2329_, v___x_2330_);
v___x_2332_ = lean_usize_to_uint64(v___x_2331_);
v___x_2333_ = lean_uint64_to_usize(v___x_2332_);
v___x_2334_ = ((size_t)1ULL);
v___x_2335_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg(v_x_2326_, v___x_2333_, v___x_2334_, v_x_2327_, v_x_2328_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___lam__0(lean_object* v_type_2336_, lean_object* v_s_2337_){
_start:
{
lean_object* v_structs_2338_; lean_object* v_typeIdOf_2339_; lean_object* v_exprToStructId_2340_; lean_object* v_exprToStructIdEntries_2341_; lean_object* v_forbiddenNatModules_2342_; lean_object* v_natStructs_2343_; lean_object* v_natTypeIdOf_2344_; lean_object* v_exprToNatStructId_2345_; lean_object* v___x_2347_; uint8_t v_isShared_2348_; uint8_t v_isSharedCheck_2354_; 
v_structs_2338_ = lean_ctor_get(v_s_2337_, 0);
v_typeIdOf_2339_ = lean_ctor_get(v_s_2337_, 1);
v_exprToStructId_2340_ = lean_ctor_get(v_s_2337_, 2);
v_exprToStructIdEntries_2341_ = lean_ctor_get(v_s_2337_, 3);
v_forbiddenNatModules_2342_ = lean_ctor_get(v_s_2337_, 4);
v_natStructs_2343_ = lean_ctor_get(v_s_2337_, 5);
v_natTypeIdOf_2344_ = lean_ctor_get(v_s_2337_, 6);
v_exprToNatStructId_2345_ = lean_ctor_get(v_s_2337_, 7);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_s_2337_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2347_ = v_s_2337_;
v_isShared_2348_ = v_isSharedCheck_2354_;
goto v_resetjp_2346_;
}
else
{
lean_inc(v_exprToNatStructId_2345_);
lean_inc(v_natTypeIdOf_2344_);
lean_inc(v_natStructs_2343_);
lean_inc(v_forbiddenNatModules_2342_);
lean_inc(v_exprToStructIdEntries_2341_);
lean_inc(v_exprToStructId_2340_);
lean_inc(v_typeIdOf_2339_);
lean_inc(v_structs_2338_);
lean_dec(v_s_2337_);
v___x_2347_ = lean_box(0);
v_isShared_2348_ = v_isSharedCheck_2354_;
goto v_resetjp_2346_;
}
v_resetjp_2346_:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2352_; 
v___x_2349_ = lean_box(0);
v___x_2350_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0___redArg(v_forbiddenNatModules_2342_, v_type_2336_, v___x_2349_);
if (v_isShared_2348_ == 0)
{
lean_ctor_set(v___x_2347_, 4, v___x_2350_);
v___x_2352_ = v___x_2347_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_structs_2338_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v_typeIdOf_2339_);
lean_ctor_set(v_reuseFailAlloc_2353_, 2, v_exprToStructId_2340_);
lean_ctor_set(v_reuseFailAlloc_2353_, 3, v_exprToStructIdEntries_2341_);
lean_ctor_set(v_reuseFailAlloc_2353_, 4, v___x_2350_);
lean_ctor_set(v_reuseFailAlloc_2353_, 5, v_natStructs_2343_);
lean_ctor_set(v_reuseFailAlloc_2353_, 6, v_natTypeIdOf_2344_);
lean_ctor_set(v_reuseFailAlloc_2353_, 7, v_exprToNatStructId_2345_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___lam__1(lean_object* v___x_2355_, lean_object* v_s_2356_){
_start:
{
lean_object* v_structs_2357_; lean_object* v_typeIdOf_2358_; lean_object* v_exprToStructId_2359_; lean_object* v_exprToStructIdEntries_2360_; lean_object* v_forbiddenNatModules_2361_; lean_object* v_natStructs_2362_; lean_object* v_natTypeIdOf_2363_; lean_object* v_exprToNatStructId_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2372_; 
v_structs_2357_ = lean_ctor_get(v_s_2356_, 0);
v_typeIdOf_2358_ = lean_ctor_get(v_s_2356_, 1);
v_exprToStructId_2359_ = lean_ctor_get(v_s_2356_, 2);
v_exprToStructIdEntries_2360_ = lean_ctor_get(v_s_2356_, 3);
v_forbiddenNatModules_2361_ = lean_ctor_get(v_s_2356_, 4);
v_natStructs_2362_ = lean_ctor_get(v_s_2356_, 5);
v_natTypeIdOf_2363_ = lean_ctor_get(v_s_2356_, 6);
v_exprToNatStructId_2364_ = lean_ctor_get(v_s_2356_, 7);
v_isSharedCheck_2372_ = !lean_is_exclusive(v_s_2356_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2366_ = v_s_2356_;
v_isShared_2367_ = v_isSharedCheck_2372_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_exprToNatStructId_2364_);
lean_inc(v_natTypeIdOf_2363_);
lean_inc(v_natStructs_2362_);
lean_inc(v_forbiddenNatModules_2361_);
lean_inc(v_exprToStructIdEntries_2360_);
lean_inc(v_exprToStructId_2359_);
lean_inc(v_typeIdOf_2358_);
lean_inc(v_structs_2357_);
lean_dec(v_s_2356_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2372_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2368_; lean_object* v___x_2370_; 
v___x_2368_ = lean_array_push(v_structs_2357_, v___x_2355_);
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 0, v___x_2368_);
v___x_2370_ = v___x_2366_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v___x_2368_);
lean_ctor_set(v_reuseFailAlloc_2371_, 1, v_typeIdOf_2358_);
lean_ctor_set(v_reuseFailAlloc_2371_, 2, v_exprToStructId_2359_);
lean_ctor_set(v_reuseFailAlloc_2371_, 3, v_exprToStructIdEntries_2360_);
lean_ctor_set(v_reuseFailAlloc_2371_, 4, v_forbiddenNatModules_2361_);
lean_ctor_set(v_reuseFailAlloc_2371_, 5, v_natStructs_2362_);
lean_ctor_set(v_reuseFailAlloc_2371_, 6, v_natTypeIdOf_2363_);
lean_ctor_set(v_reuseFailAlloc_2371_, 7, v_exprToNatStructId_2364_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__4(void){
_start:
{
lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v___x_2379_ = lean_unsigned_to_nat(32u);
v___x_2380_ = lean_mk_empty_array_with_capacity(v___x_2379_);
v___x_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2380_);
return v___x_2381_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__5(void){
_start:
{
lean_object* v___x_2382_; 
v___x_2382_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2382_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__6(void){
_start:
{
lean_object* v___x_2383_; lean_object* v___x_2384_; 
v___x_2383_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__5, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__5);
v___x_2384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2383_);
return v___x_2384_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__19(void){
_start:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2406_ = lean_unsigned_to_nat(0u);
v___x_2407_ = l_Lean_mkRawNatLit(v___x_2406_);
return v___x_2407_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__42(void){
_start:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; 
v___x_2441_ = l_Lean_Int_mkType;
v___x_2442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2442_, 0, v___x_2441_);
return v___x_2442_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__44(void){
_start:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2444_ = l_Lean_Nat_mkType;
v___x_2445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2444_);
return v___x_2445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f(lean_object* v_type_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_){
_start:
{
lean_object* v___y_2506_; lean_object* v___y_2510_; lean_object* v___y_2511_; uint8_t v___y_2521_; lean_object* v___y_2522_; lean_object* v___y_2523_; lean_object* v___y_2524_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v___y_2529_; lean_object* v___y_2530_; lean_object* v___y_2531_; lean_object* v___y_2532_; lean_object* v___y_2533_; lean_object* v___y_2546_; uint8_t v___y_2547_; lean_object* v___y_2548_; lean_object* v___y_2549_; lean_object* v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2563_; uint8_t v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2569_; lean_object* v___y_2570_; lean_object* v___y_2571_; lean_object* v___y_2572_; lean_object* v___y_2573_; lean_object* v___y_2574_; lean_object* v___y_2575_; lean_object* v___y_2576_; lean_object* v___y_2577_; uint8_t v___y_2578_; lean_object* v___f_2599_; lean_object* v___y_2601_; lean_object* v___x_2621_; 
lean_inc_ref_n(v_type_2493_, 2);
v___f_2599_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___lam__0), 2, 1);
lean_closure_set(v___f_2599_, 0, v_type_2493_);
v___x_2621_ = l_Lean_Meta_getDecLevel_x3f(v_type_2493_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_2621_) == 0)
{
lean_object* v_a_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_3535_; 
v_a_2622_ = lean_ctor_get(v___x_2621_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v___x_2621_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_2624_ = v___x_2621_;
v_isShared_2625_ = v_isSharedCheck_3535_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_a_2622_);
lean_dec(v___x_2621_);
v___x_2624_ = lean_box(0);
v_isShared_2625_ = v_isSharedCheck_3535_;
goto v_resetjp_2623_;
}
v_resetjp_2623_:
{
if (lean_obj_tag(v_a_2622_) == 1)
{
lean_object* v_val_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_3530_; 
lean_del_object(v___x_2624_);
v_val_2626_ = lean_ctor_get(v_a_2622_, 0);
v_isSharedCheck_3530_ = !lean_is_exclusive(v_a_2622_);
if (v_isSharedCheck_3530_ == 0)
{
v___x_2628_ = v_a_2622_;
v_isShared_2629_ = v_isSharedCheck_3530_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_val_2626_);
lean_dec(v_a_2622_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_3530_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2630_; 
lean_inc_ref(v_type_2493_);
v___x_2630_ = l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f___redArg(v_type_2493_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_2630_) == 0)
{
lean_object* v_a_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_3529_; 
v_a_2631_ = lean_ctor_get(v___x_2630_, 0);
v_isSharedCheck_3529_ = !lean_is_exclusive(v___x_2630_);
if (v_isSharedCheck_3529_ == 0)
{
v___x_2633_ = v___x_2630_;
v_isShared_2634_ = v_isSharedCheck_3529_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_a_2631_);
lean_dec(v___x_2630_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_3529_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___x_2635_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__1));
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_2636_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_2635_, v_val_2626_, v_type_2493_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_2636_) == 0)
{
lean_object* v_a_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v_a_2637_ = lean_ctor_get(v___x_2636_, 0);
lean_inc(v_a_2637_);
lean_dec_ref_known(v___x_2636_, 1);
v___x_2638_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__3));
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_2639_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_2638_, v_val_2626_, v_type_2493_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_2639_) == 0)
{
lean_object* v_a_2640_; lean_object* v___x_2641_; 
v_a_2640_ = lean_ctor_get(v___x_2639_, 0);
lean_inc_n(v_a_2640_, 2);
lean_dec_ref_known(v___x_2639_, 1);
lean_inc(v_a_2637_);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_2641_ = l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f(v_val_2626_, v_type_2493_, v_a_2640_, v_a_2637_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_object* v_a_2642_; lean_object* v___y_2644_; uint8_t v___y_2645_; lean_object* v___y_2646_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v___y_2652_; lean_object* v___y_2653_; lean_object* v___y_2654_; lean_object* v___y_2655_; lean_object* v___y_2656_; lean_object* v___y_2657_; lean_object* v___y_2658_; uint8_t v___y_2659_; lean_object* v___y_2661_; uint8_t v___y_2662_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v___y_2665_; lean_object* v___y_2666_; lean_object* v___y_2667_; lean_object* v___y_2668_; lean_object* v___y_2669_; lean_object* v___y_2670_; lean_object* v___y_2671_; lean_object* v___y_2672_; lean_object* v___y_2673_; lean_object* v___y_2674_; lean_object* v___y_2675_; lean_object* v___y_2676_; lean_object* v___y_2677_; lean_object* v___y_2678_; lean_object* v___y_2679_; lean_object* v___y_2680_; lean_object* v___y_2681_; lean_object* v___y_2682_; lean_object* v___y_2683_; lean_object* v___y_2684_; lean_object* v_homomulFn_x3f_2685_; lean_object* v___y_2686_; lean_object* v___y_2687_; lean_object* v___y_2688_; lean_object* v___y_2689_; lean_object* v___y_2690_; lean_object* v___y_2691_; lean_object* v___y_2692_; lean_object* v___y_2693_; lean_object* v___y_2694_; lean_object* v___y_2695_; lean_object* v___y_2733_; uint8_t v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2739_; lean_object* v___y_2740_; lean_object* v___y_2741_; lean_object* v___y_2742_; lean_object* v___y_2743_; lean_object* v___y_2744_; lean_object* v___y_2745_; lean_object* v___y_2746_; lean_object* v___y_2747_; lean_object* v___y_2748_; lean_object* v___y_2749_; lean_object* v___y_2750_; lean_object* v___y_2751_; lean_object* v___y_2752_; lean_object* v___y_2753_; lean_object* v___y_2754_; lean_object* v___y_2755_; lean_object* v_ltFn_x3f_2756_; lean_object* v___y_2757_; lean_object* v___y_2758_; lean_object* v___y_2759_; lean_object* v___y_2760_; lean_object* v___y_2761_; lean_object* v___y_2762_; lean_object* v___y_2763_; lean_object* v___y_2764_; lean_object* v___y_2765_; lean_object* v___y_2766_; lean_object* v___y_2816_; uint8_t v___y_2817_; lean_object* v___y_2818_; lean_object* v___y_2819_; lean_object* v___y_2820_; lean_object* v___y_2821_; lean_object* v___y_2822_; lean_object* v___y_2823_; lean_object* v___y_2824_; lean_object* v___y_2825_; lean_object* v___y_2826_; lean_object* v___y_2827_; lean_object* v___y_2828_; lean_object* v___y_2829_; lean_object* v___y_2830_; lean_object* v___y_2831_; lean_object* v___y_2832_; lean_object* v___y_2833_; lean_object* v___y_2834_; lean_object* v___y_2835_; lean_object* v___y_2836_; lean_object* v___y_2837_; lean_object* v___y_2838_; lean_object* v_leFn_x3f_2839_; lean_object* v___y_2840_; lean_object* v___y_2841_; lean_object* v___y_2842_; lean_object* v___y_2843_; lean_object* v___y_2844_; lean_object* v___y_2845_; lean_object* v___y_2846_; lean_object* v___y_2847_; lean_object* v___y_2848_; lean_object* v___y_2849_; lean_object* v___y_2868_; uint8_t v___y_2869_; lean_object* v___y_2870_; lean_object* v___y_2871_; lean_object* v___y_2872_; lean_object* v___y_2873_; lean_object* v___y_2874_; lean_object* v___y_2875_; lean_object* v___y_2876_; lean_object* v___y_2877_; lean_object* v___y_2878_; lean_object* v___y_2879_; lean_object* v___y_2880_; lean_object* v___y_2881_; lean_object* v___y_2882_; lean_object* v___y_2883_; lean_object* v___y_2884_; lean_object* v___y_2885_; lean_object* v___y_2886_; lean_object* v___y_2887_; lean_object* v___y_2888_; lean_object* v_charInst_x3f_2889_; lean_object* v___y_2890_; lean_object* v___y_2891_; lean_object* v___y_2892_; lean_object* v___y_2893_; lean_object* v___y_2894_; lean_object* v___y_2895_; lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2898_; lean_object* v___y_2899_; lean_object* v___x_3170_; 
v_a_2642_ = lean_ctor_get(v___x_2641_, 0);
lean_inc(v_a_2642_);
lean_dec_ref_known(v___x_2641_, 1);
lean_inc(v_a_2637_);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_3170_ = l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f(v_val_2626_, v_type_2493_, v_a_2637_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_3170_) == 0)
{
lean_object* v_a_3171_; lean_object* v___x_3172_; 
v_a_3171_ = lean_ctor_get(v___x_3170_, 0);
lean_inc(v_a_3171_);
lean_dec_ref_known(v___x_3170_, 1);
lean_inc(v_a_2637_);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_3172_ = l_Lean_Meta_Sym_Arith_mkIsPartialOrderInst_x3f(v_val_2626_, v_type_2493_, v_a_2637_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_3172_) == 0)
{
lean_object* v_a_3173_; lean_object* v___x_3174_; 
v_a_3173_ = lean_ctor_get(v___x_3172_, 0);
lean_inc(v_a_3173_);
lean_dec_ref_known(v___x_3172_, 1);
lean_inc(v_a_2637_);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_3174_ = l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f(v_val_2626_, v_type_2493_, v_a_2637_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_3174_) == 0)
{
lean_object* v_a_3175_; lean_object* v___y_3177_; lean_object* v___y_3178_; lean_object* v___y_3179_; lean_object* v___y_3180_; lean_object* v___y_3181_; lean_object* v___y_3182_; lean_object* v___y_3183_; lean_object* v___y_3184_; lean_object* v___y_3185_; lean_object* v___y_3186_; lean_object* v___y_3187_; lean_object* v___y_3188_; lean_object* v___y_3189_; lean_object* v___y_3190_; lean_object* v___y_3191_; lean_object* v___y_3192_; lean_object* v___y_3193_; lean_object* v___y_3194_; lean_object* v___y_3195_; lean_object* v___y_3196_; uint8_t v___y_3197_; lean_object* v___y_3285_; lean_object* v___y_3286_; lean_object* v___y_3287_; lean_object* v___y_3288_; lean_object* v___y_3289_; lean_object* v___y_3290_; lean_object* v___y_3291_; lean_object* v___y_3292_; lean_object* v___y_3293_; lean_object* v___y_3294_; lean_object* v___y_3295_; lean_object* v___y_3296_; lean_object* v___y_3297_; lean_object* v___y_3298_; lean_object* v___y_3299_; lean_object* v___y_3300_; lean_object* v___y_3301_; lean_object* v___y_3302_; lean_object* v___y_3303_; uint8_t v___y_3304_; lean_object* v___y_3305_; lean_object* v___y_3307_; lean_object* v___y_3308_; lean_object* v___y_3309_; lean_object* v___y_3310_; lean_object* v___y_3311_; lean_object* v___y_3312_; lean_object* v___y_3313_; lean_object* v___y_3314_; lean_object* v___y_3315_; lean_object* v___y_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3322_; lean_object* v___y_3323_; lean_object* v___y_3324_; uint8_t v___y_3325_; lean_object* v___y_3326_; lean_object* v___y_3327_; lean_object* v___y_3340_; lean_object* v___y_3341_; lean_object* v___y_3342_; lean_object* v___y_3343_; lean_object* v___y_3344_; lean_object* v___y_3345_; lean_object* v___y_3346_; lean_object* v___y_3347_; lean_object* v___y_3348_; lean_object* v___y_3349_; lean_object* v___y_3350_; lean_object* v___y_3351_; lean_object* v___y_3352_; lean_object* v___y_3353_; lean_object* v___y_3354_; lean_object* v___y_3355_; lean_object* v___y_3356_; lean_object* v___y_3357_; uint8_t v___y_3358_; lean_object* v___y_3359_; lean_object* v___y_3362_; lean_object* v___y_3363_; lean_object* v___y_3364_; lean_object* v___y_3365_; lean_object* v___y_3366_; lean_object* v___y_3367_; lean_object* v___y_3368_; lean_object* v___y_3369_; uint8_t v___y_3370_; lean_object* v___y_3371_; lean_object* v___y_3372_; lean_object* v___y_3373_; lean_object* v___y_3374_; lean_object* v___y_3375_; lean_object* v___y_3376_; lean_object* v___y_3377_; lean_object* v___y_3378_; lean_object* v___y_3379_; lean_object* v___y_3380_; lean_object* v___x_3382_; 
v_a_3175_ = lean_ctor_get(v___x_3174_, 0);
lean_inc(v_a_3175_);
lean_dec_ref_known(v___x_3174_, 1);
v___x_3382_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_2496_);
if (lean_obj_tag(v___x_3382_) == 0)
{
lean_object* v_a_3383_; uint8_t v___y_3385_; uint8_t v_ring_3470_; 
v_a_3383_ = lean_ctor_get(v___x_3382_, 0);
lean_inc(v_a_3383_);
lean_dec_ref_known(v___x_3382_, 1);
v_ring_3470_ = lean_ctor_get_uint8(v_a_3383_, sizeof(void*)*18 + 22);
lean_dec(v_a_3383_);
if (v_ring_3470_ == 0)
{
v___y_3385_ = v_ring_3470_;
goto v___jp_3384_;
}
else
{
if (lean_obj_tag(v_a_2631_) == 0)
{
uint8_t v___x_3471_; 
v___x_3471_ = 0;
v___y_3385_ = v___x_3471_;
goto v___jp_3384_;
}
else
{
if (lean_obj_tag(v_a_3171_) == 0)
{
lean_dec_ref_known(v_a_2631_, 1);
lean_dec(v_a_3175_);
lean_dec(v_a_3173_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v___y_2601_ = v_a_2494_;
goto v___jp_2600_;
}
else
{
uint8_t v___x_3472_; 
v___x_3472_ = 0;
v___y_3385_ = v___x_3472_;
goto v___jp_3384_;
}
}
}
v___jp_3384_:
{
lean_object* v___x_3386_; 
lean_inc(v_a_2631_);
v___x_3386_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f(v_a_2631_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_object* v_a_3387_; lean_object* v___x_3388_; 
v_a_3387_ = lean_ctor_get(v___x_3386_, 0);
lean_inc_n(v_a_3387_, 2);
lean_dec_ref_known(v___x_3386_, 1);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_3388_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(v_val_2626_, v_type_2493_, v_a_3387_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_3388_) == 0)
{
lean_object* v_a_3389_; lean_object* v___x_3390_; 
v_a_3389_ = lean_ctor_get(v___x_3388_, 0);
lean_inc_n(v_a_3389_, 2);
lean_dec_ref_known(v___x_3388_, 1);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_3390_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(v_val_2626_, v_type_2493_, v_a_3389_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_3390_) == 0)
{
lean_object* v_a_3391_; lean_object* v___x_3393_; uint8_t v_isShared_3394_; uint8_t v_isSharedCheck_3445_; 
v_a_3391_ = lean_ctor_get(v___x_3390_, 0);
v_isSharedCheck_3445_ = !lean_is_exclusive(v___x_3390_);
if (v_isSharedCheck_3445_ == 0)
{
v___x_3393_ = v___x_3390_;
v_isShared_3394_ = v_isSharedCheck_3445_;
goto v_resetjp_3392_;
}
else
{
lean_inc(v_a_3391_);
lean_dec(v___x_3390_);
v___x_3393_ = lean_box(0);
v_isShared_3394_ = v_isSharedCheck_3445_;
goto v_resetjp_3392_;
}
v_resetjp_3392_:
{
if (lean_obj_tag(v_a_3391_) == 1)
{
lean_object* v_val_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; 
lean_del_object(v___x_3393_);
v_val_3395_ = lean_ctor_get(v_a_3391_, 0);
lean_inc(v_val_3395_);
lean_dec_ref_known(v_a_3391_, 1);
v___x_3396_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__62));
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_3397_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(v___x_3396_, v_val_2626_, v_type_2493_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_object* v_a_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; 
v_a_3398_ = lean_ctor_get(v___x_3397_, 0);
lean_inc_n(v_a_3398_, 2);
lean_dec_ref_known(v___x_3397_, 1);
v___x_3399_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__64));
v___x_3400_ = lean_box(0);
lean_inc_n(v_val_2626_, 3);
v___x_3401_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3401_, 0, v_val_2626_);
lean_ctor_set(v___x_3401_, 1, v___x_3400_);
lean_inc_ref(v___x_3401_);
v___x_3402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3402_, 0, v_val_2626_);
lean_ctor_set(v___x_3402_, 1, v___x_3401_);
lean_inc_ref(v___x_3402_);
v___x_3403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3403_, 0, v_val_2626_);
lean_ctor_set(v___x_3403_, 1, v___x_3402_);
lean_inc_ref(v___x_3403_);
v___x_3404_ = l_Lean_mkConst(v___x_3399_, v___x_3403_);
lean_inc_ref_n(v_type_2493_, 3);
v___x_3405_ = l_Lean_mkApp4(v___x_3404_, v_type_2493_, v_type_2493_, v_type_2493_, v_a_3398_);
v___x_3406_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_3405_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_3406_) == 0)
{
if (lean_obj_tag(v_a_2637_) == 1)
{
if (lean_obj_tag(v_a_3171_) == 1)
{
lean_object* v_a_3407_; lean_object* v_val_3408_; lean_object* v_val_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; 
v_a_3407_ = lean_ctor_get(v___x_3406_, 0);
lean_inc(v_a_3407_);
lean_dec_ref_known(v___x_3406_, 1);
v_val_3408_ = lean_ctor_get(v_a_2637_, 0);
v_val_3409_ = lean_ctor_get(v_a_3171_, 0);
v___x_3410_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__66));
lean_inc_ref(v___x_3401_);
v___x_3411_ = l_Lean_mkConst(v___x_3410_, v___x_3401_);
lean_inc(v_val_3409_);
lean_inc(v_val_3408_);
lean_inc(v_a_3398_);
lean_inc_ref(v_type_2493_);
v___x_3412_ = l_Lean_mkApp4(v___x_3411_, v_type_2493_, v_a_3398_, v_val_3408_, v_val_3409_);
v___x_3413_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_3412_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
if (lean_obj_tag(v___x_3413_) == 0)
{
lean_object* v_a_3414_; 
v_a_3414_ = lean_ctor_get(v___x_3413_, 0);
lean_inc(v_a_3414_);
lean_dec_ref_known(v___x_3413_, 1);
if (lean_obj_tag(v_a_3414_) == 0)
{
lean_dec_ref_known(v_a_3171_, 1);
v___y_3340_ = v_a_2498_;
v___y_3341_ = v___x_3403_;
v___y_3342_ = v_a_3414_;
v___y_3343_ = v_a_2496_;
v___y_3344_ = v_val_3395_;
v___y_3345_ = v_a_3398_;
v___y_3346_ = v_a_2503_;
v___y_3347_ = v___x_3402_;
v___y_3348_ = v_a_2495_;
v___y_3349_ = v___x_3401_;
v___y_3350_ = v_a_2494_;
v___y_3351_ = v_a_2499_;
v___y_3352_ = v_a_3407_;
v___y_3353_ = v_a_2501_;
v___y_3354_ = v_a_3387_;
v___y_3355_ = v_a_3389_;
v___y_3356_ = v_a_2497_;
v___y_3357_ = v_a_2502_;
v___y_3358_ = v___y_3385_;
v___y_3359_ = v_a_2500_;
goto v___jp_3339_;
}
else
{
if (v___y_3385_ == 0)
{
v___y_3307_ = v_a_2498_;
v___y_3308_ = v___x_3403_;
v___y_3309_ = v_a_3414_;
v___y_3310_ = v_a_2496_;
v___y_3311_ = v_val_3395_;
v___y_3312_ = v_a_3398_;
v___y_3313_ = v_a_2503_;
v___y_3314_ = v___x_3402_;
v___y_3315_ = v_a_2495_;
v___y_3316_ = v___x_3401_;
v___y_3317_ = v_a_2494_;
v___y_3318_ = v_a_2499_;
v___y_3319_ = v_a_3407_;
v___y_3320_ = v_a_2501_;
v___y_3321_ = v_a_3387_;
v___y_3322_ = v_a_3389_;
v___y_3323_ = v_a_2502_;
v___y_3324_ = v_a_2497_;
v___y_3325_ = v___y_3385_;
v___y_3326_ = v_a_2500_;
v___y_3327_ = v_a_3171_;
goto v___jp_3306_;
}
else
{
lean_dec_ref_known(v_a_3171_, 1);
v___y_3340_ = v_a_2498_;
v___y_3341_ = v___x_3403_;
v___y_3342_ = v_a_3414_;
v___y_3343_ = v_a_2496_;
v___y_3344_ = v_val_3395_;
v___y_3345_ = v_a_3398_;
v___y_3346_ = v_a_2503_;
v___y_3347_ = v___x_3402_;
v___y_3348_ = v_a_2495_;
v___y_3349_ = v___x_3401_;
v___y_3350_ = v_a_2494_;
v___y_3351_ = v_a_2499_;
v___y_3352_ = v_a_3407_;
v___y_3353_ = v_a_2501_;
v___y_3354_ = v_a_3387_;
v___y_3355_ = v_a_3389_;
v___y_3356_ = v_a_2497_;
v___y_3357_ = v_a_2502_;
v___y_3358_ = v___y_3385_;
v___y_3359_ = v_a_2500_;
goto v___jp_3339_;
}
}
}
else
{
lean_object* v_a_3415_; lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3422_; 
lean_dec(v_a_3407_);
lean_dec_ref_known(v_a_3171_, 1);
lean_dec_ref_known(v_a_2637_, 1);
lean_dec_ref_known(v___x_3403_, 2);
lean_dec_ref_known(v___x_3402_, 2);
lean_dec_ref_known(v___x_3401_, 2);
lean_dec(v_a_3398_);
lean_dec(v_val_3395_);
lean_dec(v_a_3389_);
lean_dec(v_a_3387_);
lean_dec(v_a_3175_);
lean_dec(v_a_3173_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3415_ = lean_ctor_get(v___x_3413_, 0);
v_isSharedCheck_3422_ = !lean_is_exclusive(v___x_3413_);
if (v_isSharedCheck_3422_ == 0)
{
v___x_3417_ = v___x_3413_;
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
else
{
lean_inc(v_a_3415_);
lean_dec(v___x_3413_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
lean_object* v___x_3420_; 
if (v_isShared_3418_ == 0)
{
v___x_3420_ = v___x_3417_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v_a_3415_);
v___x_3420_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
return v___x_3420_;
}
}
}
}
else
{
lean_object* v_a_3423_; 
lean_dec(v_a_3171_);
v_a_3423_ = lean_ctor_get(v___x_3406_, 0);
lean_inc(v_a_3423_);
lean_dec_ref_known(v___x_3406_, 1);
v___y_3362_ = v___x_3402_;
v___y_3363_ = v___x_3401_;
v___y_3364_ = v___x_3403_;
v___y_3365_ = v_a_3423_;
v___y_3366_ = v_val_3395_;
v___y_3367_ = v_a_3387_;
v___y_3368_ = v_a_3389_;
v___y_3369_ = v_a_3398_;
v___y_3370_ = v___y_3385_;
v___y_3371_ = v_a_2494_;
v___y_3372_ = v_a_2495_;
v___y_3373_ = v_a_2496_;
v___y_3374_ = v_a_2497_;
v___y_3375_ = v_a_2498_;
v___y_3376_ = v_a_2499_;
v___y_3377_ = v_a_2500_;
v___y_3378_ = v_a_2501_;
v___y_3379_ = v_a_2502_;
v___y_3380_ = v_a_2503_;
goto v___jp_3361_;
}
}
else
{
lean_object* v_a_3424_; 
lean_dec(v_a_3171_);
v_a_3424_ = lean_ctor_get(v___x_3406_, 0);
lean_inc(v_a_3424_);
lean_dec_ref_known(v___x_3406_, 1);
v___y_3362_ = v___x_3402_;
v___y_3363_ = v___x_3401_;
v___y_3364_ = v___x_3403_;
v___y_3365_ = v_a_3424_;
v___y_3366_ = v_val_3395_;
v___y_3367_ = v_a_3387_;
v___y_3368_ = v_a_3389_;
v___y_3369_ = v_a_3398_;
v___y_3370_ = v___y_3385_;
v___y_3371_ = v_a_2494_;
v___y_3372_ = v_a_2495_;
v___y_3373_ = v_a_2496_;
v___y_3374_ = v_a_2497_;
v___y_3375_ = v_a_2498_;
v___y_3376_ = v_a_2499_;
v___y_3377_ = v_a_2500_;
v___y_3378_ = v_a_2501_;
v___y_3379_ = v_a_2502_;
v___y_3380_ = v_a_2503_;
goto v___jp_3361_;
}
}
else
{
lean_object* v_a_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3432_; 
lean_dec_ref_known(v___x_3403_, 2);
lean_dec_ref_known(v___x_3402_, 2);
lean_dec_ref_known(v___x_3401_, 2);
lean_dec(v_a_3398_);
lean_dec(v_val_3395_);
lean_dec(v_a_3389_);
lean_dec(v_a_3387_);
lean_dec(v_a_3175_);
lean_dec(v_a_3173_);
lean_dec(v_a_3171_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3425_ = lean_ctor_get(v___x_3406_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___x_3406_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3427_ = v___x_3406_;
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_a_3425_);
lean_dec(v___x_3406_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___x_3430_; 
if (v_isShared_3428_ == 0)
{
v___x_3430_ = v___x_3427_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v_a_3425_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
}
}
else
{
lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3440_; 
lean_dec(v_val_3395_);
lean_dec(v_a_3389_);
lean_dec(v_a_3387_);
lean_dec(v_a_3175_);
lean_dec(v_a_3173_);
lean_dec(v_a_3171_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3433_ = lean_ctor_get(v___x_3397_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3397_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3435_ = v___x_3397_;
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_dec(v___x_3397_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___x_3438_; 
if (v_isShared_3436_ == 0)
{
v___x_3438_ = v___x_3435_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v_a_3433_);
v___x_3438_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
return v___x_3438_;
}
}
}
}
else
{
lean_object* v___x_3441_; lean_object* v___x_3443_; 
lean_dec(v_a_3391_);
lean_dec(v_a_3389_);
lean_dec(v_a_3387_);
lean_dec(v_a_3175_);
lean_dec(v_a_3173_);
lean_dec(v_a_3171_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v___x_3441_ = lean_box(0);
if (v_isShared_3394_ == 0)
{
lean_ctor_set(v___x_3393_, 0, v___x_3441_);
v___x_3443_ = v___x_3393_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3444_; 
v_reuseFailAlloc_3444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3444_, 0, v___x_3441_);
v___x_3443_ = v_reuseFailAlloc_3444_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
return v___x_3443_;
}
}
}
}
else
{
lean_object* v_a_3446_; lean_object* v___x_3448_; uint8_t v_isShared_3449_; uint8_t v_isSharedCheck_3453_; 
lean_dec(v_a_3389_);
lean_dec(v_a_3387_);
lean_dec(v_a_3175_);
lean_dec(v_a_3173_);
lean_dec(v_a_3171_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3446_ = lean_ctor_get(v___x_3390_, 0);
v_isSharedCheck_3453_ = !lean_is_exclusive(v___x_3390_);
if (v_isSharedCheck_3453_ == 0)
{
v___x_3448_ = v___x_3390_;
v_isShared_3449_ = v_isSharedCheck_3453_;
goto v_resetjp_3447_;
}
else
{
lean_inc(v_a_3446_);
lean_dec(v___x_3390_);
v___x_3448_ = lean_box(0);
v_isShared_3449_ = v_isSharedCheck_3453_;
goto v_resetjp_3447_;
}
v_resetjp_3447_:
{
lean_object* v___x_3451_; 
if (v_isShared_3449_ == 0)
{
v___x_3451_ = v___x_3448_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v_a_3446_);
v___x_3451_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
return v___x_3451_;
}
}
}
}
else
{
lean_object* v_a_3454_; lean_object* v___x_3456_; uint8_t v_isShared_3457_; uint8_t v_isSharedCheck_3461_; 
lean_dec(v_a_3387_);
lean_dec(v_a_3175_);
lean_dec(v_a_3173_);
lean_dec(v_a_3171_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3454_ = lean_ctor_get(v___x_3388_, 0);
v_isSharedCheck_3461_ = !lean_is_exclusive(v___x_3388_);
if (v_isSharedCheck_3461_ == 0)
{
v___x_3456_ = v___x_3388_;
v_isShared_3457_ = v_isSharedCheck_3461_;
goto v_resetjp_3455_;
}
else
{
lean_inc(v_a_3454_);
lean_dec(v___x_3388_);
v___x_3456_ = lean_box(0);
v_isShared_3457_ = v_isSharedCheck_3461_;
goto v_resetjp_3455_;
}
v_resetjp_3455_:
{
lean_object* v___x_3459_; 
if (v_isShared_3457_ == 0)
{
v___x_3459_ = v___x_3456_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v_a_3454_);
v___x_3459_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
return v___x_3459_;
}
}
}
}
else
{
lean_object* v_a_3462_; lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3469_; 
lean_dec(v_a_3175_);
lean_dec(v_a_3173_);
lean_dec(v_a_3171_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3462_ = lean_ctor_get(v___x_3386_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3464_ = v___x_3386_;
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
else
{
lean_inc(v_a_3462_);
lean_dec(v___x_3386_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
lean_object* v___x_3467_; 
if (v_isShared_3465_ == 0)
{
v___x_3467_ = v___x_3464_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v_a_3462_);
v___x_3467_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
return v___x_3467_;
}
}
}
}
}
else
{
lean_object* v_a_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3480_; 
lean_dec(v_a_3175_);
lean_dec(v_a_3173_);
lean_dec(v_a_3171_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3473_ = lean_ctor_get(v___x_3382_, 0);
v_isSharedCheck_3480_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3480_ == 0)
{
v___x_3475_ = v___x_3382_;
v_isShared_3476_ = v_isSharedCheck_3480_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_a_3473_);
lean_dec(v___x_3382_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3480_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
lean_object* v___x_3478_; 
if (v_isShared_3476_ == 0)
{
v___x_3478_ = v___x_3475_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3479_; 
v_reuseFailAlloc_3479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3479_, 0, v_a_3473_);
v___x_3478_ = v_reuseFailAlloc_3479_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
return v___x_3478_;
}
}
}
v___jp_3176_:
{
lean_object* v___x_3198_; lean_object* v___x_3199_; 
v___x_3198_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__50));
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
lean_inc(v___y_3188_);
lean_inc(v_a_2637_);
v___x_3199_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(v_a_2637_, v___y_3188_, v_a_3173_, v___x_3198_, v_val_2626_, v_type_2493_, v___y_3177_, v___y_3189_, v___y_3196_, v___y_3191_, v___y_3195_, v___y_3183_);
if (lean_obj_tag(v___x_3199_) == 0)
{
lean_object* v_a_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v_a_3200_ = lean_ctor_get(v___x_3199_, 0);
lean_inc(v_a_3200_);
lean_dec_ref_known(v___x_3199_, 1);
v___x_3201_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__53));
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
lean_inc(v_a_2637_);
v___x_3202_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(v_a_2637_, v_a_3200_, v_a_3175_, v___x_3201_, v_val_2626_, v_type_2493_, v___y_3177_, v___y_3189_, v___y_3196_, v___y_3191_, v___y_3195_, v___y_3183_);
if (lean_obj_tag(v___x_3202_) == 0)
{
lean_object* v_a_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; 
v_a_3203_ = lean_ctor_get(v___x_3202_, 0);
lean_inc(v_a_3203_);
lean_dec_ref_known(v___x_3202_, 1);
v___x_3204_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0));
v___x_3205_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1));
v___x_3206_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2));
v___x_3207_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__55));
lean_inc_n(v___y_3186_, 2);
v___x_3208_ = l_Lean_mkConst(v___x_3207_, v___y_3186_);
lean_inc_ref(v___y_3181_);
lean_inc_ref_n(v_type_2493_, 3);
v___x_3209_ = l_Lean_mkAppB(v___x_3208_, v_type_2493_, v___y_3181_);
v___x_3210_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__56));
v___x_3211_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__58));
v___x_3212_ = l_Lean_mkConst(v___x_3211_, v___y_3186_);
lean_inc_ref(v___x_3209_);
v___x_3213_ = l_Lean_mkAppB(v___x_3212_, v_type_2493_, v___x_3209_);
lean_inc(v___y_3193_);
lean_inc(v_val_2626_);
v___x_3214_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(v_val_2626_, v_type_2493_, v___y_3193_, v___y_3189_, v___y_3196_, v___y_3191_, v___y_3195_, v___y_3183_);
if (lean_obj_tag(v___x_3214_) == 0)
{
lean_object* v_a_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; 
v_a_3215_ = lean_ctor_get(v___x_3214_, 0);
lean_inc(v_a_3215_);
lean_dec_ref_known(v___x_3214_, 1);
v___x_3216_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__60));
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_3217_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_3216_, v_val_2626_, v_type_2493_, v___y_3189_, v___y_3196_, v___y_3191_, v___y_3195_, v___y_3183_);
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_a_3218_; lean_object* v___x_3219_; 
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_a_3218_);
lean_dec_ref_known(v___x_3217_, 1);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_3219_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f(v_val_2626_, v_type_2493_, v___y_3187_, v___y_3185_, v___y_3180_, v___y_3194_, v___y_3177_, v___y_3189_, v___y_3196_, v___y_3191_, v___y_3195_, v___y_3183_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_object* v_a_3220_; lean_object* v___x_3221_; 
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
lean_inc(v_a_3220_);
lean_dec_ref_known(v___x_3219_, 1);
lean_inc(v___y_3188_);
lean_inc(v_a_2640_);
lean_inc(v_a_2637_);
lean_inc(v_a_3215_);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_3221_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(v_val_2626_, v_type_2493_, v_a_3215_, v_a_2637_, v_a_2640_, v___y_3188_, v___y_3177_, v___y_3189_, v___y_3196_, v___y_3191_, v___y_3195_, v___y_3183_);
if (lean_obj_tag(v___x_3221_) == 0)
{
if (lean_obj_tag(v_a_3215_) == 1)
{
lean_object* v_a_3222_; lean_object* v_val_3223_; lean_object* v___x_3224_; 
v_a_3222_ = lean_ctor_get(v___x_3221_, 0);
lean_inc(v_a_3222_);
lean_dec_ref_known(v___x_3221_, 1);
v_val_3223_ = lean_ctor_get(v_a_3215_, 0);
lean_inc(v_val_3223_);
lean_dec_ref_known(v_a_3215_, 1);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_3224_ = l_Lean_Meta_Sym_Arith_getIsCharInst_x3f(v_val_2626_, v_type_2493_, v_val_3223_, v___y_3177_, v___y_3189_, v___y_3196_, v___y_3191_, v___y_3195_, v___y_3183_);
if (lean_obj_tag(v___x_3224_) == 0)
{
lean_object* v_a_3225_; 
v_a_3225_ = lean_ctor_get(v___x_3224_, 0);
lean_inc(v_a_3225_);
lean_dec_ref_known(v___x_3224_, 1);
v___y_2868_ = v___x_3204_;
v___y_2869_ = v___y_3197_;
v___y_2870_ = v___y_3178_;
v___y_2871_ = v___y_3179_;
v___y_2872_ = v___y_3181_;
v___y_2873_ = v_a_3203_;
v___y_2874_ = v___y_3182_;
v___y_2875_ = v___y_3184_;
v___y_2876_ = v_a_3218_;
v___y_2877_ = v___x_3209_;
v___y_2878_ = v___y_3186_;
v___y_2879_ = v___y_3188_;
v___y_2880_ = v___y_3190_;
v___y_2881_ = v___y_3192_;
v___y_2882_ = v___x_3206_;
v___y_2883_ = v_a_3222_;
v___y_2884_ = v___y_3193_;
v___y_2885_ = v___x_3205_;
v___y_2886_ = v___x_3210_;
v___y_2887_ = v_a_3220_;
v___y_2888_ = v___x_3213_;
v_charInst_x3f_2889_ = v_a_3225_;
v___y_2890_ = v___y_3187_;
v___y_2891_ = v___y_3185_;
v___y_2892_ = v___y_3180_;
v___y_2893_ = v___y_3194_;
v___y_2894_ = v___y_3177_;
v___y_2895_ = v___y_3189_;
v___y_2896_ = v___y_3196_;
v___y_2897_ = v___y_3191_;
v___y_2898_ = v___y_3195_;
v___y_2899_ = v___y_3183_;
goto v___jp_2867_;
}
else
{
lean_object* v_a_3226_; lean_object* v___x_3228_; uint8_t v_isShared_3229_; uint8_t v_isSharedCheck_3233_; 
lean_dec(v_a_3222_);
lean_dec(v_a_3220_);
lean_dec(v_a_3218_);
lean_dec_ref(v___x_3213_);
lean_dec_ref(v___x_3209_);
lean_dec(v_a_3203_);
lean_dec(v___y_3193_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3188_);
lean_dec(v___y_3186_);
lean_dec(v___y_3184_);
lean_dec_ref(v___y_3182_);
lean_dec_ref(v___y_3181_);
lean_dec(v___y_3179_);
lean_dec(v___y_3178_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3226_ = lean_ctor_get(v___x_3224_, 0);
v_isSharedCheck_3233_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3233_ == 0)
{
v___x_3228_ = v___x_3224_;
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
else
{
lean_inc(v_a_3226_);
lean_dec(v___x_3224_);
v___x_3228_ = lean_box(0);
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
v_resetjp_3227_:
{
lean_object* v___x_3231_; 
if (v_isShared_3229_ == 0)
{
v___x_3231_ = v___x_3228_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3232_; 
v_reuseFailAlloc_3232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3232_, 0, v_a_3226_);
v___x_3231_ = v_reuseFailAlloc_3232_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
return v___x_3231_;
}
}
}
}
else
{
lean_object* v_a_3234_; lean_object* v___x_3235_; 
lean_dec(v_a_3215_);
v_a_3234_ = lean_ctor_get(v___x_3221_, 0);
lean_inc(v_a_3234_);
lean_dec_ref_known(v___x_3221_, 1);
v___x_3235_ = lean_box(0);
v___y_2868_ = v___x_3204_;
v___y_2869_ = v___y_3197_;
v___y_2870_ = v___y_3178_;
v___y_2871_ = v___y_3179_;
v___y_2872_ = v___y_3181_;
v___y_2873_ = v_a_3203_;
v___y_2874_ = v___y_3182_;
v___y_2875_ = v___y_3184_;
v___y_2876_ = v_a_3218_;
v___y_2877_ = v___x_3209_;
v___y_2878_ = v___y_3186_;
v___y_2879_ = v___y_3188_;
v___y_2880_ = v___y_3190_;
v___y_2881_ = v___y_3192_;
v___y_2882_ = v___x_3206_;
v___y_2883_ = v_a_3234_;
v___y_2884_ = v___y_3193_;
v___y_2885_ = v___x_3205_;
v___y_2886_ = v___x_3210_;
v___y_2887_ = v_a_3220_;
v___y_2888_ = v___x_3213_;
v_charInst_x3f_2889_ = v___x_3235_;
v___y_2890_ = v___y_3187_;
v___y_2891_ = v___y_3185_;
v___y_2892_ = v___y_3180_;
v___y_2893_ = v___y_3194_;
v___y_2894_ = v___y_3177_;
v___y_2895_ = v___y_3189_;
v___y_2896_ = v___y_3196_;
v___y_2897_ = v___y_3191_;
v___y_2898_ = v___y_3195_;
v___y_2899_ = v___y_3183_;
goto v___jp_2867_;
}
}
else
{
lean_object* v_a_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3243_; 
lean_dec(v_a_3220_);
lean_dec(v_a_3218_);
lean_dec(v_a_3215_);
lean_dec_ref(v___x_3213_);
lean_dec_ref(v___x_3209_);
lean_dec(v_a_3203_);
lean_dec(v___y_3193_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3188_);
lean_dec(v___y_3186_);
lean_dec(v___y_3184_);
lean_dec_ref(v___y_3182_);
lean_dec_ref(v___y_3181_);
lean_dec(v___y_3179_);
lean_dec(v___y_3178_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3236_ = lean_ctor_get(v___x_3221_, 0);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3221_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3238_ = v___x_3221_;
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_a_3236_);
lean_dec(v___x_3221_);
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
lean_object* v_a_3244_; lean_object* v___x_3246_; uint8_t v_isShared_3247_; uint8_t v_isSharedCheck_3251_; 
lean_dec(v_a_3218_);
lean_dec(v_a_3215_);
lean_dec_ref(v___x_3213_);
lean_dec_ref(v___x_3209_);
lean_dec(v_a_3203_);
lean_dec(v___y_3193_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3188_);
lean_dec(v___y_3186_);
lean_dec(v___y_3184_);
lean_dec_ref(v___y_3182_);
lean_dec_ref(v___y_3181_);
lean_dec(v___y_3179_);
lean_dec(v___y_3178_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3244_ = lean_ctor_get(v___x_3219_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3246_ = v___x_3219_;
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
else
{
lean_inc(v_a_3244_);
lean_dec(v___x_3219_);
v___x_3246_ = lean_box(0);
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
v_resetjp_3245_:
{
lean_object* v___x_3249_; 
if (v_isShared_3247_ == 0)
{
v___x_3249_ = v___x_3246_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v_a_3244_);
v___x_3249_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
return v___x_3249_;
}
}
}
}
else
{
lean_object* v_a_3252_; lean_object* v___x_3254_; uint8_t v_isShared_3255_; uint8_t v_isSharedCheck_3259_; 
lean_dec(v_a_3215_);
lean_dec_ref(v___x_3213_);
lean_dec_ref(v___x_3209_);
lean_dec(v_a_3203_);
lean_dec(v___y_3193_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3188_);
lean_dec(v___y_3186_);
lean_dec(v___y_3184_);
lean_dec_ref(v___y_3182_);
lean_dec_ref(v___y_3181_);
lean_dec(v___y_3179_);
lean_dec(v___y_3178_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3252_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3259_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3259_ == 0)
{
v___x_3254_ = v___x_3217_;
v_isShared_3255_ = v_isSharedCheck_3259_;
goto v_resetjp_3253_;
}
else
{
lean_inc(v_a_3252_);
lean_dec(v___x_3217_);
v___x_3254_ = lean_box(0);
v_isShared_3255_ = v_isSharedCheck_3259_;
goto v_resetjp_3253_;
}
v_resetjp_3253_:
{
lean_object* v___x_3257_; 
if (v_isShared_3255_ == 0)
{
v___x_3257_ = v___x_3254_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v_a_3252_);
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
lean_object* v_a_3260_; lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3267_; 
lean_dec_ref(v___x_3213_);
lean_dec_ref(v___x_3209_);
lean_dec(v_a_3203_);
lean_dec(v___y_3193_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3188_);
lean_dec(v___y_3186_);
lean_dec(v___y_3184_);
lean_dec_ref(v___y_3182_);
lean_dec_ref(v___y_3181_);
lean_dec(v___y_3179_);
lean_dec(v___y_3178_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3260_ = lean_ctor_get(v___x_3214_, 0);
v_isSharedCheck_3267_ = !lean_is_exclusive(v___x_3214_);
if (v_isSharedCheck_3267_ == 0)
{
v___x_3262_ = v___x_3214_;
v_isShared_3263_ = v_isSharedCheck_3267_;
goto v_resetjp_3261_;
}
else
{
lean_inc(v_a_3260_);
lean_dec(v___x_3214_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3267_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v___x_3265_; 
if (v_isShared_3263_ == 0)
{
v___x_3265_ = v___x_3262_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v_a_3260_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
return v___x_3265_;
}
}
}
}
else
{
lean_object* v_a_3268_; lean_object* v___x_3270_; uint8_t v_isShared_3271_; uint8_t v_isSharedCheck_3275_; 
lean_dec(v___y_3193_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3188_);
lean_dec(v___y_3186_);
lean_dec(v___y_3184_);
lean_dec_ref(v___y_3182_);
lean_dec_ref(v___y_3181_);
lean_dec(v___y_3179_);
lean_dec(v___y_3178_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3268_ = lean_ctor_get(v___x_3202_, 0);
v_isSharedCheck_3275_ = !lean_is_exclusive(v___x_3202_);
if (v_isSharedCheck_3275_ == 0)
{
v___x_3270_ = v___x_3202_;
v_isShared_3271_ = v_isSharedCheck_3275_;
goto v_resetjp_3269_;
}
else
{
lean_inc(v_a_3268_);
lean_dec(v___x_3202_);
v___x_3270_ = lean_box(0);
v_isShared_3271_ = v_isSharedCheck_3275_;
goto v_resetjp_3269_;
}
v_resetjp_3269_:
{
lean_object* v___x_3273_; 
if (v_isShared_3271_ == 0)
{
v___x_3273_ = v___x_3270_;
goto v_reusejp_3272_;
}
else
{
lean_object* v_reuseFailAlloc_3274_; 
v_reuseFailAlloc_3274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3274_, 0, v_a_3268_);
v___x_3273_ = v_reuseFailAlloc_3274_;
goto v_reusejp_3272_;
}
v_reusejp_3272_:
{
return v___x_3273_;
}
}
}
}
else
{
lean_object* v_a_3276_; lean_object* v___x_3278_; uint8_t v_isShared_3279_; uint8_t v_isSharedCheck_3283_; 
lean_dec(v___y_3193_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3188_);
lean_dec(v___y_3186_);
lean_dec(v___y_3184_);
lean_dec_ref(v___y_3182_);
lean_dec_ref(v___y_3181_);
lean_dec(v___y_3179_);
lean_dec(v___y_3178_);
lean_dec(v_a_3175_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3276_ = lean_ctor_get(v___x_3199_, 0);
v_isSharedCheck_3283_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3283_ == 0)
{
v___x_3278_ = v___x_3199_;
v_isShared_3279_ = v_isSharedCheck_3283_;
goto v_resetjp_3277_;
}
else
{
lean_inc(v_a_3276_);
lean_dec(v___x_3199_);
v___x_3278_ = lean_box(0);
v_isShared_3279_ = v_isSharedCheck_3283_;
goto v_resetjp_3277_;
}
v_resetjp_3277_:
{
lean_object* v___x_3281_; 
if (v_isShared_3279_ == 0)
{
v___x_3281_ = v___x_3278_;
goto v_reusejp_3280_;
}
else
{
lean_object* v_reuseFailAlloc_3282_; 
v_reuseFailAlloc_3282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3282_, 0, v_a_3276_);
v___x_3281_ = v_reuseFailAlloc_3282_;
goto v_reusejp_3280_;
}
v_reusejp_3280_:
{
return v___x_3281_;
}
}
}
}
v___jp_3284_:
{
if (lean_obj_tag(v___y_3297_) == 0)
{
lean_dec(v___y_3301_);
lean_dec(v___y_3300_);
lean_dec_ref(v___y_3298_);
lean_dec(v___y_3294_);
lean_dec(v___y_3292_);
lean_dec_ref(v___y_3290_);
lean_dec_ref(v___y_3289_);
lean_dec(v___y_3287_);
lean_dec(v___y_3286_);
lean_dec(v_a_3175_);
lean_dec(v_a_3173_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v___y_2601_ = v___y_3295_;
goto v___jp_2600_;
}
else
{
lean_dec_ref(v___f_2599_);
v___y_3177_ = v___y_3285_;
v___y_3178_ = v___y_3286_;
v___y_3179_ = v___y_3287_;
v___y_3180_ = v___y_3288_;
v___y_3181_ = v___y_3289_;
v___y_3182_ = v___y_3290_;
v___y_3183_ = v___y_3291_;
v___y_3184_ = v___y_3292_;
v___y_3185_ = v___y_3293_;
v___y_3186_ = v___y_3294_;
v___y_3187_ = v___y_3295_;
v___y_3188_ = v___y_3297_;
v___y_3189_ = v___y_3296_;
v___y_3190_ = v___y_3298_;
v___y_3191_ = v___y_3299_;
v___y_3192_ = v___y_3300_;
v___y_3193_ = v___y_3301_;
v___y_3194_ = v___y_3303_;
v___y_3195_ = v___y_3302_;
v___y_3196_ = v___y_3305_;
v___y_3197_ = v___y_3304_;
goto v___jp_3176_;
}
}
v___jp_3306_:
{
lean_object* v___x_3328_; 
v___x_3328_ = l_Lean_Meta_Grind_getConfig___redArg(v___y_3310_);
if (lean_obj_tag(v___x_3328_) == 0)
{
lean_object* v_a_3329_; uint8_t v_ring_3330_; 
v_a_3329_ = lean_ctor_get(v___x_3328_, 0);
lean_inc(v_a_3329_);
lean_dec_ref_known(v___x_3328_, 1);
v_ring_3330_ = lean_ctor_get_uint8(v_a_3329_, sizeof(void*)*18 + 22);
lean_dec(v_a_3329_);
if (v_ring_3330_ == 0)
{
lean_dec_ref(v___f_2599_);
v___y_3177_ = v___y_3307_;
v___y_3178_ = v___y_3308_;
v___y_3179_ = v___y_3309_;
v___y_3180_ = v___y_3310_;
v___y_3181_ = v___y_3311_;
v___y_3182_ = v___y_3312_;
v___y_3183_ = v___y_3313_;
v___y_3184_ = v___y_3314_;
v___y_3185_ = v___y_3315_;
v___y_3186_ = v___y_3316_;
v___y_3187_ = v___y_3317_;
v___y_3188_ = v___y_3327_;
v___y_3189_ = v___y_3318_;
v___y_3190_ = v___y_3319_;
v___y_3191_ = v___y_3320_;
v___y_3192_ = v___y_3321_;
v___y_3193_ = v___y_3322_;
v___y_3194_ = v___y_3324_;
v___y_3195_ = v___y_3323_;
v___y_3196_ = v___y_3326_;
v___y_3197_ = v_ring_3330_;
goto v___jp_3176_;
}
else
{
if (lean_obj_tag(v_a_2631_) == 0)
{
if (v___y_3325_ == 0)
{
lean_dec_ref(v___f_2599_);
v___y_3177_ = v___y_3307_;
v___y_3178_ = v___y_3308_;
v___y_3179_ = v___y_3309_;
v___y_3180_ = v___y_3310_;
v___y_3181_ = v___y_3311_;
v___y_3182_ = v___y_3312_;
v___y_3183_ = v___y_3313_;
v___y_3184_ = v___y_3314_;
v___y_3185_ = v___y_3315_;
v___y_3186_ = v___y_3316_;
v___y_3187_ = v___y_3317_;
v___y_3188_ = v___y_3327_;
v___y_3189_ = v___y_3318_;
v___y_3190_ = v___y_3319_;
v___y_3191_ = v___y_3320_;
v___y_3192_ = v___y_3321_;
v___y_3193_ = v___y_3322_;
v___y_3194_ = v___y_3324_;
v___y_3195_ = v___y_3323_;
v___y_3196_ = v___y_3326_;
v___y_3197_ = v___y_3325_;
goto v___jp_3176_;
}
else
{
v___y_3285_ = v___y_3307_;
v___y_3286_ = v___y_3308_;
v___y_3287_ = v___y_3309_;
v___y_3288_ = v___y_3310_;
v___y_3289_ = v___y_3311_;
v___y_3290_ = v___y_3312_;
v___y_3291_ = v___y_3313_;
v___y_3292_ = v___y_3314_;
v___y_3293_ = v___y_3315_;
v___y_3294_ = v___y_3316_;
v___y_3295_ = v___y_3317_;
v___y_3296_ = v___y_3318_;
v___y_3297_ = v___y_3327_;
v___y_3298_ = v___y_3319_;
v___y_3299_ = v___y_3320_;
v___y_3300_ = v___y_3321_;
v___y_3301_ = v___y_3322_;
v___y_3302_ = v___y_3323_;
v___y_3303_ = v___y_3324_;
v___y_3304_ = v___y_3325_;
v___y_3305_ = v___y_3326_;
goto v___jp_3284_;
}
}
else
{
v___y_3285_ = v___y_3307_;
v___y_3286_ = v___y_3308_;
v___y_3287_ = v___y_3309_;
v___y_3288_ = v___y_3310_;
v___y_3289_ = v___y_3311_;
v___y_3290_ = v___y_3312_;
v___y_3291_ = v___y_3313_;
v___y_3292_ = v___y_3314_;
v___y_3293_ = v___y_3315_;
v___y_3294_ = v___y_3316_;
v___y_3295_ = v___y_3317_;
v___y_3296_ = v___y_3318_;
v___y_3297_ = v___y_3327_;
v___y_3298_ = v___y_3319_;
v___y_3299_ = v___y_3320_;
v___y_3300_ = v___y_3321_;
v___y_3301_ = v___y_3322_;
v___y_3302_ = v___y_3323_;
v___y_3303_ = v___y_3324_;
v___y_3304_ = v___y_3325_;
v___y_3305_ = v___y_3326_;
goto v___jp_3284_;
}
}
}
else
{
lean_object* v_a_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3338_; 
lean_dec(v___y_3327_);
lean_dec(v___y_3322_);
lean_dec(v___y_3321_);
lean_dec_ref(v___y_3319_);
lean_dec(v___y_3316_);
lean_dec(v___y_3314_);
lean_dec_ref(v___y_3312_);
lean_dec_ref(v___y_3311_);
lean_dec(v___y_3309_);
lean_dec(v___y_3308_);
lean_dec(v_a_3175_);
lean_dec(v_a_3173_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3331_ = lean_ctor_get(v___x_3328_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v___x_3328_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3333_ = v___x_3328_;
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_a_3331_);
lean_dec(v___x_3328_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3336_; 
if (v_isShared_3334_ == 0)
{
v___x_3336_ = v___x_3333_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v_a_3331_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
return v___x_3336_;
}
}
}
}
v___jp_3339_:
{
lean_object* v___x_3360_; 
v___x_3360_ = lean_box(0);
v___y_3307_ = v___y_3340_;
v___y_3308_ = v___y_3341_;
v___y_3309_ = v___y_3342_;
v___y_3310_ = v___y_3343_;
v___y_3311_ = v___y_3344_;
v___y_3312_ = v___y_3345_;
v___y_3313_ = v___y_3346_;
v___y_3314_ = v___y_3347_;
v___y_3315_ = v___y_3348_;
v___y_3316_ = v___y_3349_;
v___y_3317_ = v___y_3350_;
v___y_3318_ = v___y_3351_;
v___y_3319_ = v___y_3352_;
v___y_3320_ = v___y_3353_;
v___y_3321_ = v___y_3354_;
v___y_3322_ = v___y_3355_;
v___y_3323_ = v___y_3357_;
v___y_3324_ = v___y_3356_;
v___y_3325_ = v___y_3358_;
v___y_3326_ = v___y_3359_;
v___y_3327_ = v___x_3360_;
goto v___jp_3306_;
}
v___jp_3361_:
{
lean_object* v___x_3381_; 
v___x_3381_ = lean_box(0);
v___y_3340_ = v___y_3375_;
v___y_3341_ = v___y_3364_;
v___y_3342_ = v___x_3381_;
v___y_3343_ = v___y_3373_;
v___y_3344_ = v___y_3366_;
v___y_3345_ = v___y_3369_;
v___y_3346_ = v___y_3380_;
v___y_3347_ = v___y_3362_;
v___y_3348_ = v___y_3372_;
v___y_3349_ = v___y_3363_;
v___y_3350_ = v___y_3371_;
v___y_3351_ = v___y_3376_;
v___y_3352_ = v___y_3365_;
v___y_3353_ = v___y_3378_;
v___y_3354_ = v___y_3367_;
v___y_3355_ = v___y_3368_;
v___y_3356_ = v___y_3374_;
v___y_3357_ = v___y_3379_;
v___y_3358_ = v___y_3370_;
v___y_3359_ = v___y_3377_;
goto v___jp_3339_;
}
}
else
{
lean_object* v_a_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3488_; 
lean_dec(v_a_3173_);
lean_dec(v_a_3171_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3481_ = lean_ctor_get(v___x_3174_, 0);
v_isSharedCheck_3488_ = !lean_is_exclusive(v___x_3174_);
if (v_isSharedCheck_3488_ == 0)
{
v___x_3483_ = v___x_3174_;
v_isShared_3484_ = v_isSharedCheck_3488_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_a_3481_);
lean_dec(v___x_3174_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3488_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3486_; 
if (v_isShared_3484_ == 0)
{
v___x_3486_ = v___x_3483_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3487_; 
v_reuseFailAlloc_3487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3487_, 0, v_a_3481_);
v___x_3486_ = v_reuseFailAlloc_3487_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
return v___x_3486_;
}
}
}
}
else
{
lean_object* v_a_3489_; lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3496_; 
lean_dec(v_a_3171_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3489_ = lean_ctor_get(v___x_3172_, 0);
v_isSharedCheck_3496_ = !lean_is_exclusive(v___x_3172_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3491_ = v___x_3172_;
v_isShared_3492_ = v_isSharedCheck_3496_;
goto v_resetjp_3490_;
}
else
{
lean_inc(v_a_3489_);
lean_dec(v___x_3172_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3496_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
lean_object* v___x_3494_; 
if (v_isShared_3492_ == 0)
{
v___x_3494_ = v___x_3491_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v_a_3489_);
v___x_3494_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
return v___x_3494_;
}
}
}
}
else
{
lean_object* v_a_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3504_; 
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3497_ = lean_ctor_get(v___x_3170_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v___x_3170_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3499_ = v___x_3170_;
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_a_3497_);
lean_dec(v___x_3170_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
lean_object* v___x_3502_; 
if (v_isShared_3500_ == 0)
{
v___x_3502_ = v___x_3499_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v_a_3497_);
v___x_3502_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
return v___x_3502_;
}
}
}
v___jp_2643_:
{
if (lean_obj_tag(v_a_2642_) == 0)
{
v___y_2563_ = v___y_2644_;
v___y_2564_ = v___y_2645_;
v___y_2565_ = v___y_2646_;
v___y_2566_ = v___y_2647_;
v___y_2567_ = v___y_2648_;
v___y_2568_ = v___y_2649_;
v___y_2569_ = v___y_2650_;
v___y_2570_ = v___y_2651_;
v___y_2571_ = v___y_2652_;
v___y_2572_ = v___y_2653_;
v___y_2573_ = v___y_2654_;
v___y_2574_ = v___y_2655_;
v___y_2575_ = v___y_2656_;
v___y_2576_ = v___y_2657_;
v___y_2577_ = v___y_2658_;
v___y_2578_ = v___y_2645_;
goto v___jp_2562_;
}
else
{
lean_dec_ref_known(v_a_2642_, 1);
v___y_2563_ = v___y_2644_;
v___y_2564_ = v___y_2645_;
v___y_2565_ = v___y_2646_;
v___y_2566_ = v___y_2647_;
v___y_2567_ = v___y_2648_;
v___y_2568_ = v___y_2649_;
v___y_2569_ = v___y_2650_;
v___y_2570_ = v___y_2651_;
v___y_2571_ = v___y_2652_;
v___y_2572_ = v___y_2653_;
v___y_2573_ = v___y_2654_;
v___y_2574_ = v___y_2655_;
v___y_2575_ = v___y_2656_;
v___y_2576_ = v___y_2657_;
v___y_2577_ = v___y_2658_;
v___y_2578_ = v___y_2659_;
goto v___jp_2562_;
}
}
v___jp_2660_:
{
lean_object* v___x_2696_; 
v___x_2696_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v___y_2686_, v___y_2694_);
if (lean_obj_tag(v___x_2696_) == 0)
{
lean_object* v_a_2697_; lean_object* v_structs_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; size_t v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___f_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; 
v_a_2697_ = lean_ctor_get(v___x_2696_, 0);
lean_inc(v_a_2697_);
lean_dec_ref_known(v___x_2696_, 1);
v_structs_2698_ = lean_ctor_get(v_a_2697_, 0);
lean_inc_ref(v_structs_2698_);
lean_dec(v_a_2697_);
v___x_2699_ = lean_array_get_size(v_structs_2698_);
lean_dec_ref(v_structs_2698_);
v___x_2700_ = lean_unsigned_to_nat(32u);
v___x_2701_ = lean_mk_empty_array_with_capacity(v___x_2700_);
v___x_2702_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__4, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__4);
v___x_2703_ = ((size_t)5ULL);
lean_inc(v___y_2663_);
v___x_2704_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2704_, 0, v___x_2702_);
lean_ctor_set(v___x_2704_, 1, v___x_2701_);
lean_ctor_set(v___x_2704_, 2, v___y_2663_);
lean_ctor_set(v___x_2704_, 3, v___y_2663_);
lean_ctor_set_usize(v___x_2704_, 4, v___x_2703_);
v___x_2705_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__6, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__6);
v___x_2706_ = lean_box(0);
v___x_2707_ = lean_box(0);
lean_inc_ref_n(v___x_2704_, 7);
lean_inc(v___y_2681_);
lean_inc(v___y_2661_);
lean_inc(v___y_2673_);
lean_inc(v___y_2680_);
lean_inc(v___y_2679_);
lean_inc(v_a_2642_);
v___x_2708_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v___x_2708_, 0, v___x_2699_);
lean_ctor_set(v___x_2708_, 1, v_a_2631_);
lean_ctor_set(v___x_2708_, 2, v_type_2493_);
lean_ctor_set(v___x_2708_, 3, v_val_2626_);
lean_ctor_set(v___x_2708_, 4, v___y_2669_);
lean_ctor_set(v___x_2708_, 5, v_a_2637_);
lean_ctor_set(v___x_2708_, 6, v_a_2640_);
lean_ctor_set(v___x_2708_, 7, v_a_2642_);
lean_ctor_set(v___x_2708_, 8, v___y_2675_);
lean_ctor_set(v___x_2708_, 9, v___y_2666_);
lean_ctor_set(v___x_2708_, 10, v___y_2670_);
lean_ctor_set(v___x_2708_, 11, v___y_2671_);
lean_ctor_set(v___x_2708_, 12, v___y_2679_);
lean_ctor_set(v___x_2708_, 13, v___y_2678_);
lean_ctor_set(v___x_2708_, 14, v___y_2680_);
lean_ctor_set(v___x_2708_, 15, v___y_2673_);
lean_ctor_set(v___x_2708_, 16, v___y_2661_);
lean_ctor_set(v___x_2708_, 17, v___y_2682_);
lean_ctor_set(v___x_2708_, 18, v___y_2667_);
lean_ctor_set(v___x_2708_, 19, v___y_2681_);
lean_ctor_set(v___x_2708_, 20, v___y_2677_);
lean_ctor_set(v___x_2708_, 21, v___y_2684_);
lean_ctor_set(v___x_2708_, 22, v___y_2676_);
lean_ctor_set(v___x_2708_, 23, v___y_2683_);
lean_ctor_set(v___x_2708_, 24, v___y_2665_);
lean_ctor_set(v___x_2708_, 25, v___y_2668_);
lean_ctor_set(v___x_2708_, 26, v___y_2672_);
lean_ctor_set(v___x_2708_, 27, v_homomulFn_x3f_2685_);
lean_ctor_set(v___x_2708_, 28, v___y_2664_);
lean_ctor_set(v___x_2708_, 29, v___y_2674_);
lean_ctor_set(v___x_2708_, 30, v___x_2704_);
lean_ctor_set(v___x_2708_, 31, v___x_2705_);
lean_ctor_set(v___x_2708_, 32, v___x_2704_);
lean_ctor_set(v___x_2708_, 33, v___x_2704_);
lean_ctor_set(v___x_2708_, 34, v___x_2704_);
lean_ctor_set(v___x_2708_, 35, v___x_2704_);
lean_ctor_set(v___x_2708_, 36, v___x_2706_);
lean_ctor_set(v___x_2708_, 37, v___x_2705_);
lean_ctor_set(v___x_2708_, 38, v___x_2704_);
lean_ctor_set(v___x_2708_, 39, v___x_2707_);
lean_ctor_set(v___x_2708_, 40, v___x_2704_);
lean_ctor_set(v___x_2708_, 41, v___x_2704_);
lean_ctor_set_uint8(v___x_2708_, sizeof(void*)*42, v___y_2662_);
v___f_2709_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___lam__1), 2, 1);
lean_closure_set(v___f_2709_, 0, v___x_2708_);
v___x_2710_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_2711_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2710_, v___f_2709_, v___y_2686_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_dec_ref_known(v___x_2711_, 1);
if (lean_obj_tag(v___y_2681_) == 1)
{
if (lean_obj_tag(v___y_2679_) == 0)
{
lean_dec_ref_known(v___y_2681_, 1);
lean_dec(v___y_2680_);
lean_dec(v___y_2673_);
lean_dec(v___y_2661_);
lean_dec(v_a_2642_);
v___y_2506_ = v___x_2699_;
goto v___jp_2505_;
}
else
{
lean_dec_ref_known(v___y_2679_, 1);
if (lean_obj_tag(v___y_2680_) == 0)
{
if (v___y_2662_ == 0)
{
lean_object* v_val_2712_; 
lean_dec(v_a_2642_);
v_val_2712_ = lean_ctor_get(v___y_2681_, 0);
lean_inc(v_val_2712_);
lean_dec_ref_known(v___y_2681_, 1);
v___y_2546_ = v___y_2661_;
v___y_2547_ = v___y_2662_;
v___y_2548_ = v___y_2692_;
v___y_2549_ = v_val_2712_;
v___y_2550_ = v___y_2690_;
v___y_2551_ = v___y_2689_;
v___y_2552_ = v___y_2687_;
v___y_2553_ = v___y_2686_;
v___y_2554_ = v___y_2694_;
v___y_2555_ = v___y_2691_;
v___y_2556_ = v___y_2673_;
v___y_2557_ = v___y_2688_;
v___y_2558_ = v___y_2693_;
v___y_2559_ = v___x_2699_;
v___y_2560_ = v___y_2695_;
goto v___jp_2545_;
}
else
{
lean_object* v_val_2713_; 
v_val_2713_ = lean_ctor_get(v___y_2681_, 0);
lean_inc(v_val_2713_);
lean_dec_ref_known(v___y_2681_, 1);
v___y_2644_ = v___y_2661_;
v___y_2645_ = v___y_2662_;
v___y_2646_ = v___y_2692_;
v___y_2647_ = v_val_2713_;
v___y_2648_ = v___y_2690_;
v___y_2649_ = v___y_2689_;
v___y_2650_ = v___y_2687_;
v___y_2651_ = v___y_2686_;
v___y_2652_ = v___y_2694_;
v___y_2653_ = v___y_2691_;
v___y_2654_ = v___y_2673_;
v___y_2655_ = v___y_2688_;
v___y_2656_ = v___y_2693_;
v___y_2657_ = v___x_2699_;
v___y_2658_ = v___y_2695_;
v___y_2659_ = v___y_2662_;
goto v___jp_2643_;
}
}
else
{
lean_object* v_val_2714_; uint8_t v___x_2715_; 
lean_dec_ref_known(v___y_2680_, 1);
v_val_2714_ = lean_ctor_get(v___y_2681_, 0);
lean_inc(v_val_2714_);
lean_dec_ref_known(v___y_2681_, 1);
v___x_2715_ = 1;
v___y_2644_ = v___y_2661_;
v___y_2645_ = v___y_2662_;
v___y_2646_ = v___y_2692_;
v___y_2647_ = v_val_2714_;
v___y_2648_ = v___y_2690_;
v___y_2649_ = v___y_2689_;
v___y_2650_ = v___y_2687_;
v___y_2651_ = v___y_2686_;
v___y_2652_ = v___y_2694_;
v___y_2653_ = v___y_2691_;
v___y_2654_ = v___y_2673_;
v___y_2655_ = v___y_2688_;
v___y_2656_ = v___y_2693_;
v___y_2657_ = v___x_2699_;
v___y_2658_ = v___y_2695_;
v___y_2659_ = v___x_2715_;
goto v___jp_2643_;
}
}
}
else
{
lean_dec(v___y_2681_);
lean_dec(v___y_2680_);
lean_dec(v___y_2679_);
lean_dec(v___y_2673_);
lean_dec(v___y_2661_);
lean_dec(v_a_2642_);
v___y_2506_ = v___x_2699_;
goto v___jp_2505_;
}
}
else
{
lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2723_; 
lean_dec(v___y_2681_);
lean_dec(v___y_2680_);
lean_dec(v___y_2679_);
lean_dec(v___y_2673_);
lean_dec(v___y_2661_);
lean_dec(v_a_2642_);
v_a_2716_ = lean_ctor_get(v___x_2711_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2718_ = v___x_2711_;
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_dec(v___x_2711_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2721_; 
if (v_isShared_2719_ == 0)
{
v___x_2721_ = v___x_2718_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2716_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
}
else
{
lean_object* v_a_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2731_; 
lean_dec(v_homomulFn_x3f_2685_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec(v___y_2680_);
lean_dec(v___y_2679_);
lean_dec(v___y_2678_);
lean_dec(v___y_2677_);
lean_dec_ref(v___y_2676_);
lean_dec(v___y_2675_);
lean_dec_ref(v___y_2674_);
lean_dec(v___y_2673_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec_ref(v___y_2669_);
lean_dec(v___y_2668_);
lean_dec_ref(v___y_2667_);
lean_dec(v___y_2666_);
lean_dec_ref(v___y_2665_);
lean_dec_ref(v___y_2664_);
lean_dec(v___y_2663_);
lean_dec(v___y_2661_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_dec(v_a_2631_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_2724_ = lean_ctor_get(v___x_2696_, 0);
v_isSharedCheck_2731_ = !lean_is_exclusive(v___x_2696_);
if (v_isSharedCheck_2731_ == 0)
{
v___x_2726_ = v___x_2696_;
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_a_2724_);
lean_dec(v___x_2696_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2729_; 
if (v_isShared_2727_ == 0)
{
v___x_2729_ = v___x_2726_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_a_2724_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
}
}
v___jp_2732_:
{
lean_object* v___x_2767_; 
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_2767_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg(v_val_2626_, v_type_2493_, v___y_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
if (lean_obj_tag(v___x_2767_) == 0)
{
lean_object* v_a_2768_; lean_object* v___x_2769_; 
v_a_2768_ = lean_ctor_get(v___x_2767_, 0);
lean_inc(v_a_2768_);
lean_dec_ref_known(v___x_2767_, 1);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_2769_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___redArg(v_val_2626_, v_type_2493_, v___y_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
if (lean_obj_tag(v___x_2769_) == 0)
{
if (lean_obj_tag(v___y_2749_) == 0)
{
lean_object* v_a_2770_; 
lean_dec(v___y_2738_);
lean_del_object(v___x_2628_);
v_a_2770_ = lean_ctor_get(v___x_2769_, 0);
lean_inc(v_a_2770_);
lean_dec_ref_known(v___x_2769_, 1);
v___y_2661_ = v___y_2733_;
v___y_2662_ = v___y_2734_;
v___y_2663_ = v___y_2735_;
v___y_2664_ = v___y_2736_;
v___y_2665_ = v___y_2739_;
v___y_2666_ = v___y_2740_;
v___y_2667_ = v___y_2741_;
v___y_2668_ = v_a_2768_;
v___y_2669_ = v___y_2742_;
v___y_2670_ = v___y_2743_;
v___y_2671_ = v___y_2744_;
v___y_2672_ = v_a_2770_;
v___y_2673_ = v___y_2745_;
v___y_2674_ = v___y_2746_;
v___y_2675_ = v___y_2747_;
v___y_2676_ = v___y_2748_;
v___y_2677_ = v___y_2750_;
v___y_2678_ = v___y_2749_;
v___y_2679_ = v___y_2752_;
v___y_2680_ = v___y_2751_;
v___y_2681_ = v___y_2754_;
v___y_2682_ = v___y_2753_;
v___y_2683_ = v___y_2755_;
v___y_2684_ = v_ltFn_x3f_2756_;
v_homomulFn_x3f_2685_ = v___y_2737_;
v___y_2686_ = v___y_2757_;
v___y_2687_ = v___y_2758_;
v___y_2688_ = v___y_2759_;
v___y_2689_ = v___y_2760_;
v___y_2690_ = v___y_2761_;
v___y_2691_ = v___y_2762_;
v___y_2692_ = v___y_2763_;
v___y_2693_ = v___y_2764_;
v___y_2694_ = v___y_2765_;
v___y_2695_ = v___y_2766_;
goto v___jp_2660_;
}
else
{
lean_object* v_a_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
lean_dec(v___y_2737_);
v_a_2771_ = lean_ctor_get(v___x_2769_, 0);
lean_inc(v_a_2771_);
lean_dec_ref_known(v___x_2769_, 1);
v___x_2772_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__8));
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_2773_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(v___x_2772_, v_val_2626_, v_type_2493_, v___y_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
if (lean_obj_tag(v___x_2773_) == 0)
{
lean_object* v_a_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; 
v_a_2774_ = lean_ctor_get(v___x_2773_, 0);
lean_inc(v_a_2774_);
lean_dec_ref_known(v___x_2773_, 1);
v___x_2775_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__10));
v___x_2776_ = l_Lean_mkConst(v___x_2775_, v___y_2738_);
lean_inc_ref_n(v_type_2493_, 3);
v___x_2777_ = l_Lean_mkApp4(v___x_2776_, v_type_2493_, v_type_2493_, v_type_2493_, v_a_2774_);
v___x_2778_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2777_, v___y_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
if (lean_obj_tag(v___x_2778_) == 0)
{
lean_object* v_a_2779_; lean_object* v___x_2781_; 
v_a_2779_ = lean_ctor_get(v___x_2778_, 0);
lean_inc(v_a_2779_);
lean_dec_ref_known(v___x_2778_, 1);
if (v_isShared_2629_ == 0)
{
lean_ctor_set(v___x_2628_, 0, v_a_2779_);
v___x_2781_ = v___x_2628_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_a_2779_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
v___y_2661_ = v___y_2733_;
v___y_2662_ = v___y_2734_;
v___y_2663_ = v___y_2735_;
v___y_2664_ = v___y_2736_;
v___y_2665_ = v___y_2739_;
v___y_2666_ = v___y_2740_;
v___y_2667_ = v___y_2741_;
v___y_2668_ = v_a_2768_;
v___y_2669_ = v___y_2742_;
v___y_2670_ = v___y_2743_;
v___y_2671_ = v___y_2744_;
v___y_2672_ = v_a_2771_;
v___y_2673_ = v___y_2745_;
v___y_2674_ = v___y_2746_;
v___y_2675_ = v___y_2747_;
v___y_2676_ = v___y_2748_;
v___y_2677_ = v___y_2750_;
v___y_2678_ = v___y_2749_;
v___y_2679_ = v___y_2752_;
v___y_2680_ = v___y_2751_;
v___y_2681_ = v___y_2754_;
v___y_2682_ = v___y_2753_;
v___y_2683_ = v___y_2755_;
v___y_2684_ = v_ltFn_x3f_2756_;
v_homomulFn_x3f_2685_ = v___x_2781_;
v___y_2686_ = v___y_2757_;
v___y_2687_ = v___y_2758_;
v___y_2688_ = v___y_2759_;
v___y_2689_ = v___y_2760_;
v___y_2690_ = v___y_2761_;
v___y_2691_ = v___y_2762_;
v___y_2692_ = v___y_2763_;
v___y_2693_ = v___y_2764_;
v___y_2694_ = v___y_2765_;
v___y_2695_ = v___y_2766_;
goto v___jp_2660_;
}
}
else
{
lean_object* v_a_2783_; lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2790_; 
lean_dec_ref_known(v___y_2749_, 1);
lean_dec(v_a_2771_);
lean_dec(v_a_2768_);
lean_dec(v_ltFn_x3f_2756_);
lean_dec_ref(v___y_2755_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v___y_2752_);
lean_dec(v___y_2751_);
lean_dec(v___y_2750_);
lean_dec_ref(v___y_2748_);
lean_dec(v___y_2747_);
lean_dec_ref(v___y_2746_);
lean_dec(v___y_2745_);
lean_dec(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec_ref(v___y_2741_);
lean_dec(v___y_2740_);
lean_dec_ref(v___y_2739_);
lean_dec_ref(v___y_2736_);
lean_dec(v___y_2735_);
lean_dec(v___y_2733_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_2783_ = lean_ctor_get(v___x_2778_, 0);
v_isSharedCheck_2790_ = !lean_is_exclusive(v___x_2778_);
if (v_isSharedCheck_2790_ == 0)
{
v___x_2785_ = v___x_2778_;
v_isShared_2786_ = v_isSharedCheck_2790_;
goto v_resetjp_2784_;
}
else
{
lean_inc(v_a_2783_);
lean_dec(v___x_2778_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2790_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
lean_object* v___x_2788_; 
if (v_isShared_2786_ == 0)
{
v___x_2788_ = v___x_2785_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v_a_2783_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
return v___x_2788_;
}
}
}
}
else
{
lean_object* v_a_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2798_; 
lean_dec_ref_known(v___y_2749_, 1);
lean_dec(v_a_2771_);
lean_dec(v_a_2768_);
lean_dec(v_ltFn_x3f_2756_);
lean_dec_ref(v___y_2755_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v___y_2752_);
lean_dec(v___y_2751_);
lean_dec(v___y_2750_);
lean_dec_ref(v___y_2748_);
lean_dec(v___y_2747_);
lean_dec_ref(v___y_2746_);
lean_dec(v___y_2745_);
lean_dec(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec_ref(v___y_2741_);
lean_dec(v___y_2740_);
lean_dec_ref(v___y_2739_);
lean_dec(v___y_2738_);
lean_dec_ref(v___y_2736_);
lean_dec(v___y_2735_);
lean_dec(v___y_2733_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_2791_ = lean_ctor_get(v___x_2773_, 0);
v_isSharedCheck_2798_ = !lean_is_exclusive(v___x_2773_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2793_ = v___x_2773_;
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_a_2791_);
lean_dec(v___x_2773_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v___x_2796_; 
if (v_isShared_2794_ == 0)
{
v___x_2796_ = v___x_2793_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v_a_2791_);
v___x_2796_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
return v___x_2796_;
}
}
}
}
}
else
{
lean_object* v_a_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2806_; 
lean_dec(v_a_2768_);
lean_dec(v_ltFn_x3f_2756_);
lean_dec_ref(v___y_2755_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v___y_2752_);
lean_dec(v___y_2751_);
lean_dec(v___y_2750_);
lean_dec(v___y_2749_);
lean_dec_ref(v___y_2748_);
lean_dec(v___y_2747_);
lean_dec_ref(v___y_2746_);
lean_dec(v___y_2745_);
lean_dec(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec_ref(v___y_2741_);
lean_dec(v___y_2740_);
lean_dec_ref(v___y_2739_);
lean_dec(v___y_2738_);
lean_dec(v___y_2737_);
lean_dec_ref(v___y_2736_);
lean_dec(v___y_2735_);
lean_dec(v___y_2733_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_2799_ = lean_ctor_get(v___x_2769_, 0);
v_isSharedCheck_2806_ = !lean_is_exclusive(v___x_2769_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2801_ = v___x_2769_;
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_a_2799_);
lean_dec(v___x_2769_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2804_; 
if (v_isShared_2802_ == 0)
{
v___x_2804_ = v___x_2801_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v_a_2799_);
v___x_2804_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
return v___x_2804_;
}
}
}
}
else
{
lean_object* v_a_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2814_; 
lean_dec(v_ltFn_x3f_2756_);
lean_dec_ref(v___y_2755_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v___y_2752_);
lean_dec(v___y_2751_);
lean_dec(v___y_2750_);
lean_dec(v___y_2749_);
lean_dec_ref(v___y_2748_);
lean_dec(v___y_2747_);
lean_dec_ref(v___y_2746_);
lean_dec(v___y_2745_);
lean_dec(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec_ref(v___y_2741_);
lean_dec(v___y_2740_);
lean_dec_ref(v___y_2739_);
lean_dec(v___y_2738_);
lean_dec(v___y_2737_);
lean_dec_ref(v___y_2736_);
lean_dec(v___y_2735_);
lean_dec(v___y_2733_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_2807_ = lean_ctor_get(v___x_2767_, 0);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2767_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2809_ = v___x_2767_;
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_a_2807_);
lean_dec(v___x_2767_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2812_; 
if (v_isShared_2810_ == 0)
{
v___x_2812_ = v___x_2809_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_a_2807_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
}
v___jp_2815_:
{
if (lean_obj_tag(v_a_2640_) == 1)
{
lean_object* v_val_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; 
v_val_2850_ = lean_ctor_get(v_a_2640_, 0);
v___x_2851_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__12));
v___x_2852_ = l_Lean_mkConst(v___x_2851_, v___y_2829_);
lean_inc(v_val_2850_);
lean_inc_ref(v_type_2493_);
v___x_2853_ = l_Lean_mkAppB(v___x_2852_, v_type_2493_, v_val_2850_);
v___x_2854_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2853_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_);
if (lean_obj_tag(v___x_2854_) == 0)
{
lean_object* v_a_2855_; lean_object* v___x_2857_; 
v_a_2855_ = lean_ctor_get(v___x_2854_, 0);
lean_inc(v_a_2855_);
lean_dec_ref_known(v___x_2854_, 1);
if (v_isShared_2634_ == 0)
{
lean_ctor_set_tag(v___x_2633_, 1);
lean_ctor_set(v___x_2633_, 0, v_a_2855_);
v___x_2857_ = v___x_2633_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_a_2855_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
v___y_2733_ = v___y_2816_;
v___y_2734_ = v___y_2817_;
v___y_2735_ = v___y_2818_;
v___y_2736_ = v___y_2819_;
v___y_2737_ = v___y_2820_;
v___y_2738_ = v___y_2821_;
v___y_2739_ = v___y_2822_;
v___y_2740_ = v___y_2823_;
v___y_2741_ = v___y_2824_;
v___y_2742_ = v___y_2825_;
v___y_2743_ = v___y_2826_;
v___y_2744_ = v___y_2827_;
v___y_2745_ = v___y_2828_;
v___y_2746_ = v___y_2830_;
v___y_2747_ = v___y_2831_;
v___y_2748_ = v___y_2832_;
v___y_2749_ = v___y_2833_;
v___y_2750_ = v_leFn_x3f_2839_;
v___y_2751_ = v___y_2835_;
v___y_2752_ = v___y_2834_;
v___y_2753_ = v___y_2837_;
v___y_2754_ = v___y_2836_;
v___y_2755_ = v___y_2838_;
v_ltFn_x3f_2756_ = v___x_2857_;
v___y_2757_ = v___y_2840_;
v___y_2758_ = v___y_2841_;
v___y_2759_ = v___y_2842_;
v___y_2760_ = v___y_2843_;
v___y_2761_ = v___y_2844_;
v___y_2762_ = v___y_2845_;
v___y_2763_ = v___y_2846_;
v___y_2764_ = v___y_2847_;
v___y_2765_ = v___y_2848_;
v___y_2766_ = v___y_2849_;
goto v___jp_2732_;
}
}
else
{
lean_object* v_a_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2866_; 
lean_dec_ref_known(v_a_2640_, 1);
lean_dec(v_leFn_x3f_2839_);
lean_dec_ref(v___y_2838_);
lean_dec_ref(v___y_2837_);
lean_dec(v___y_2836_);
lean_dec(v___y_2835_);
lean_dec(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec_ref(v___y_2832_);
lean_dec(v___y_2831_);
lean_dec_ref(v___y_2830_);
lean_dec(v___y_2828_);
lean_dec(v___y_2827_);
lean_dec(v___y_2826_);
lean_dec_ref(v___y_2825_);
lean_dec_ref(v___y_2824_);
lean_dec(v___y_2823_);
lean_dec_ref(v___y_2822_);
lean_dec(v___y_2821_);
lean_dec(v___y_2820_);
lean_dec_ref(v___y_2819_);
lean_dec(v___y_2818_);
lean_dec(v___y_2816_);
lean_dec(v_a_2642_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_2859_ = lean_ctor_get(v___x_2854_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2854_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v___x_2854_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v___x_2854_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2864_; 
if (v_isShared_2862_ == 0)
{
v___x_2864_ = v___x_2861_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_a_2859_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
}
}
else
{
lean_dec(v___y_2829_);
lean_del_object(v___x_2633_);
lean_inc(v___y_2820_);
v___y_2733_ = v___y_2816_;
v___y_2734_ = v___y_2817_;
v___y_2735_ = v___y_2818_;
v___y_2736_ = v___y_2819_;
v___y_2737_ = v___y_2820_;
v___y_2738_ = v___y_2821_;
v___y_2739_ = v___y_2822_;
v___y_2740_ = v___y_2823_;
v___y_2741_ = v___y_2824_;
v___y_2742_ = v___y_2825_;
v___y_2743_ = v___y_2826_;
v___y_2744_ = v___y_2827_;
v___y_2745_ = v___y_2828_;
v___y_2746_ = v___y_2830_;
v___y_2747_ = v___y_2831_;
v___y_2748_ = v___y_2832_;
v___y_2749_ = v___y_2833_;
v___y_2750_ = v_leFn_x3f_2839_;
v___y_2751_ = v___y_2835_;
v___y_2752_ = v___y_2834_;
v___y_2753_ = v___y_2837_;
v___y_2754_ = v___y_2836_;
v___y_2755_ = v___y_2838_;
v_ltFn_x3f_2756_ = v___y_2820_;
v___y_2757_ = v___y_2840_;
v___y_2758_ = v___y_2841_;
v___y_2759_ = v___y_2842_;
v___y_2760_ = v___y_2843_;
v___y_2761_ = v___y_2844_;
v___y_2762_ = v___y_2845_;
v___y_2763_ = v___y_2846_;
v___y_2764_ = v___y_2847_;
v___y_2765_ = v___y_2848_;
v___y_2766_ = v___y_2849_;
goto v___jp_2732_;
}
}
v___jp_2867_:
{
lean_object* v___x_2900_; 
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_2900_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(v_val_2626_, v_type_2493_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_a_2901_);
lean_dec_ref_known(v___x_2900_, 1);
v___x_2902_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__14));
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_2903_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg(v___x_2902_, v_val_2626_, v_type_2493_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2903_) == 0)
{
lean_object* v_a_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; 
v_a_2904_ = lean_ctor_get(v___x_2903_, 0);
lean_inc_n(v_a_2904_, 2);
lean_dec_ref_known(v___x_2903_, 1);
v___x_2905_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__16));
lean_inc(v___y_2878_);
v___x_2906_ = l_Lean_mkConst(v___x_2905_, v___y_2878_);
lean_inc_ref(v_type_2493_);
v___x_2907_ = l_Lean_mkAppB(v___x_2906_, v_type_2493_, v_a_2904_);
v___x_2908_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(v___x_2907_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2908_) == 0)
{
lean_object* v_a_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v_a_2909_ = lean_ctor_get(v___x_2908_, 0);
lean_inc(v_a_2909_);
lean_dec_ref_known(v___x_2908_, 1);
v___x_2910_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__18));
lean_inc(v___y_2878_);
v___x_2911_ = l_Lean_mkConst(v___x_2910_, v___y_2878_);
v___x_2912_ = lean_unsigned_to_nat(0u);
v___x_2913_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__19, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__19_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__19);
lean_inc_ref(v_type_2493_);
v___x_2914_ = l_Lean_mkAppB(v___x_2911_, v_type_2493_, v___x_2913_);
v___x_2915_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_2914_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2915_) == 0)
{
lean_object* v_a_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_3137_; 
v_a_2916_ = lean_ctor_get(v___x_2915_, 0);
v_isSharedCheck_3137_ = !lean_is_exclusive(v___x_2915_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_2918_ = v___x_2915_;
v_isShared_2919_ = v_isSharedCheck_3137_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_a_2916_);
lean_dec(v___x_2915_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_3137_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
if (lean_obj_tag(v_a_2916_) == 1)
{
lean_object* v_val_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_3132_; 
lean_del_object(v___x_2918_);
v_val_2920_ = lean_ctor_get(v_a_2916_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v_a_2916_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_2922_ = v_a_2916_;
v_isShared_2923_ = v_isSharedCheck_3132_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_val_2920_);
lean_dec(v_a_2916_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_3132_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; 
v___x_2924_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__21));
lean_inc(v___y_2878_);
v___x_2925_ = l_Lean_mkConst(v___x_2924_, v___y_2878_);
lean_inc_ref(v_type_2493_);
v___x_2926_ = l_Lean_mkApp3(v___x_2925_, v_type_2493_, v___x_2913_, v_val_2920_);
v___x_2927_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2926_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2927_) == 0)
{
lean_object* v_a_2928_; lean_object* v___x_2929_; 
v_a_2928_ = lean_ctor_get(v___x_2927_, 0);
lean_inc_n(v_a_2928_, 2);
lean_dec_ref_known(v___x_2927_, 1);
lean_inc(v_a_2909_);
v___x_2929_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_a_2909_, v_a_2928_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2929_) == 0)
{
lean_object* v___x_2930_; lean_object* v___x_2931_; 
lean_dec_ref_known(v___x_2929_, 1);
v___x_2930_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__23));
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_2931_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(v___x_2930_, v_val_2626_, v_type_2493_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2931_) == 0)
{
lean_object* v_a_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; 
v_a_2932_ = lean_ctor_get(v___x_2931_, 0);
lean_inc_n(v_a_2932_, 2);
lean_dec_ref_known(v___x_2931_, 1);
v___x_2933_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__25));
lean_inc(v___y_2870_);
v___x_2934_ = l_Lean_mkConst(v___x_2933_, v___y_2870_);
lean_inc_ref_n(v_type_2493_, 3);
v___x_2935_ = l_Lean_mkApp4(v___x_2934_, v_type_2493_, v_type_2493_, v_type_2493_, v_a_2932_);
v___x_2936_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2935_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2936_) == 0)
{
lean_object* v_a_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
v_a_2937_ = lean_ctor_get(v___x_2936_, 0);
lean_inc(v_a_2937_);
lean_dec_ref_known(v___x_2936_, 1);
v___x_2938_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__27));
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_2939_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg(v___x_2938_, v_val_2626_, v_type_2493_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v_a_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; 
v_a_2940_ = lean_ctor_get(v___x_2939_, 0);
lean_inc_n(v_a_2940_, 2);
lean_dec_ref_known(v___x_2939_, 1);
v___x_2941_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__29));
lean_inc(v___y_2878_);
v___x_2942_ = l_Lean_mkConst(v___x_2941_, v___y_2878_);
lean_inc_ref(v_type_2493_);
v___x_2943_ = l_Lean_mkAppB(v___x_2942_, v_type_2493_, v_a_2940_);
v___x_2944_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2943_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2944_) == 0)
{
lean_object* v_a_2945_; lean_object* v___x_2946_; 
v_a_2945_ = lean_ctor_get(v___x_2944_, 0);
lean_inc(v_a_2945_);
lean_dec_ref_known(v___x_2944_, 1);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_2946_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg(v_val_2626_, v_type_2493_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2946_) == 0)
{
lean_object* v_a_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v_a_2947_ = lean_ctor_get(v___x_2946_, 0);
lean_inc_n(v_a_2947_, 2);
lean_dec_ref_known(v___x_2946_, 1);
v___x_2948_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1));
v___x_2949_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_2950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2949_);
lean_ctor_set(v___x_2950_, 1, v___y_2875_);
v___x_2951_ = l_Lean_mkConst(v___x_2948_, v___x_2950_);
v___x_2952_ = l_Lean_Int_mkType;
lean_inc_ref_n(v_type_2493_, 2);
lean_inc_ref(v___x_2951_);
v___x_2953_ = l_Lean_mkApp4(v___x_2951_, v___x_2952_, v_type_2493_, v_type_2493_, v_a_2947_);
v___x_2954_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2953_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_a_2955_; lean_object* v___x_2956_; 
v_a_2955_ = lean_ctor_get(v___x_2954_, 0);
lean_inc(v_a_2955_);
lean_dec_ref_known(v___x_2954_, 1);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_2956_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg(v_val_2626_, v_type_2493_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2956_) == 0)
{
lean_object* v_a_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; 
v_a_2957_ = lean_ctor_get(v___x_2956_, 0);
lean_inc_n(v_a_2957_, 2);
lean_dec_ref_known(v___x_2956_, 1);
v___x_2958_ = l_Lean_Nat_mkType;
lean_inc_ref_n(v_type_2493_, 2);
v___x_2959_ = l_Lean_mkApp4(v___x_2951_, v___x_2958_, v_type_2493_, v_type_2493_, v_a_2957_);
v___x_2960_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2959_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2960_) == 0)
{
lean_object* v_a_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v_a_2961_ = lean_ctor_get(v___x_2960_, 0);
lean_inc(v_a_2961_);
lean_dec_ref_known(v___x_2960_, 1);
v___x_2962_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__30));
v___x_2963_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__31));
lean_inc_ref(v___y_2885_);
lean_inc_ref(v___y_2868_);
v___x_2964_ = l_Lean_Name_mkStr4(v___y_2868_, v___y_2885_, v___x_2962_, v___x_2963_);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
lean_inc_ref(v___y_2888_);
v___x_2965_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(v_a_2904_, v___y_2888_, v___x_2964_, v_val_2626_, v_type_2493_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; 
lean_dec_ref_known(v___x_2965_, 1);
v___x_2966_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__32));
lean_inc_ref(v___y_2885_);
lean_inc_ref(v___y_2868_);
v___x_2967_ = l_Lean_Name_mkStr4(v___y_2868_, v___y_2885_, v___x_2962_, v___x_2966_);
v___x_2968_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__34));
v___x_2969_ = lean_box(0);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_2970_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v___y_2874_, v___y_2888_, v___x_2967_, v___x_2968_, v_val_2626_, v_type_2493_, v___x_2969_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
lean_dec_ref_known(v___x_2970_, 1);
v___x_2971_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__35));
lean_inc_ref(v___y_2886_);
lean_inc_ref(v___y_2885_);
lean_inc_ref(v___y_2868_);
v___x_2972_ = l_Lean_Name_mkStr4(v___y_2868_, v___y_2885_, v___y_2886_, v___x_2971_);
v___x_2973_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__37));
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
lean_inc_ref(v___y_2877_);
v___x_2974_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_a_2932_, v___y_2877_, v___x_2972_, v___x_2973_, v_val_2626_, v_type_2493_, v___x_2969_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2974_) == 0)
{
lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; 
lean_dec_ref_known(v___x_2974_, 1);
v___x_2975_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__38));
lean_inc_ref(v___y_2886_);
lean_inc_ref(v___y_2885_);
lean_inc_ref(v___y_2868_);
v___x_2976_ = l_Lean_Name_mkStr4(v___y_2868_, v___y_2885_, v___y_2886_, v___x_2975_);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
v___x_2977_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(v_a_2940_, v___y_2877_, v___x_2976_, v_val_2626_, v_type_2493_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2977_) == 0)
{
lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
lean_dec_ref_known(v___x_2977_, 1);
v___x_2978_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__39));
lean_inc_ref(v___y_2882_);
lean_inc_ref(v___y_2885_);
lean_inc_ref(v___y_2868_);
v___x_2979_ = l_Lean_Name_mkStr4(v___y_2868_, v___y_2885_, v___y_2882_, v___x_2978_);
v___x_2980_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__41));
v___x_2981_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__42, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__42_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__42);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
lean_inc_ref(v___y_2872_);
v___x_2982_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_a_2947_, v___y_2872_, v___x_2979_, v___x_2980_, v_val_2626_, v_type_2493_, v___x_2981_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
lean_dec_ref_known(v___x_2982_, 1);
v___x_2983_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__43));
lean_inc_ref(v___y_2882_);
lean_inc_ref(v___y_2885_);
lean_inc_ref(v___y_2868_);
v___x_2984_ = l_Lean_Name_mkStr4(v___y_2868_, v___y_2885_, v___y_2882_, v___x_2983_);
v___x_2985_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__44, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__44_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__44);
lean_inc_ref(v_type_2493_);
lean_inc(v_val_2626_);
lean_inc_ref(v___y_2872_);
v___x_2986_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_a_2957_, v___y_2872_, v___x_2984_, v___x_2980_, v_val_2626_, v_type_2493_, v___x_2985_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2986_) == 0)
{
lean_dec_ref_known(v___x_2986_, 1);
if (lean_obj_tag(v_a_2637_) == 1)
{
lean_object* v_val_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v_val_2987_ = lean_ctor_get(v_a_2637_, 0);
v___x_2988_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__46));
lean_inc(v___y_2878_);
v___x_2989_ = l_Lean_mkConst(v___x_2988_, v___y_2878_);
lean_inc(v_val_2987_);
lean_inc_ref(v_type_2493_);
v___x_2990_ = l_Lean_mkAppB(v___x_2989_, v_type_2493_, v_val_2987_);
v___x_2991_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_2990_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; lean_object* v___x_2994_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
lean_dec_ref_known(v___x_2991_, 1);
if (v_isShared_2923_ == 0)
{
lean_ctor_set(v___x_2922_, 0, v_a_2992_);
v___x_2994_ = v___x_2922_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_a_2992_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
v___y_2816_ = v_charInst_x3f_2889_;
v___y_2817_ = v___y_2869_;
v___y_2818_ = v___x_2912_;
v___y_2819_ = v_a_2937_;
v___y_2820_ = v___x_2969_;
v___y_2821_ = v___y_2870_;
v___y_2822_ = v_a_2961_;
v___y_2823_ = v___y_2871_;
v___y_2824_ = v_a_2928_;
v___y_2825_ = v___y_2872_;
v___y_2826_ = v___y_2873_;
v___y_2827_ = v_a_2901_;
v___y_2828_ = v___y_2876_;
v___y_2829_ = v___y_2878_;
v___y_2830_ = v_a_2945_;
v___y_2831_ = v___y_2879_;
v___y_2832_ = v___y_2880_;
v___y_2833_ = v___y_2881_;
v___y_2834_ = v___y_2884_;
v___y_2835_ = v___y_2883_;
v___y_2836_ = v___y_2887_;
v___y_2837_ = v_a_2909_;
v___y_2838_ = v_a_2955_;
v_leFn_x3f_2839_ = v___x_2994_;
v___y_2840_ = v___y_2890_;
v___y_2841_ = v___y_2891_;
v___y_2842_ = v___y_2892_;
v___y_2843_ = v___y_2893_;
v___y_2844_ = v___y_2894_;
v___y_2845_ = v___y_2895_;
v___y_2846_ = v___y_2896_;
v___y_2847_ = v___y_2897_;
v___y_2848_ = v___y_2898_;
v___y_2849_ = v___y_2899_;
goto v___jp_2815_;
}
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
lean_dec_ref_known(v_a_2637_, 1);
lean_dec(v_a_2961_);
lean_dec(v_a_2955_);
lean_dec(v_a_2945_);
lean_dec(v_a_2937_);
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec(v___y_2876_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_2996_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2998_ = v___x_2991_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2991_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2996_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
}
}
else
{
lean_del_object(v___x_2922_);
v___y_2816_ = v_charInst_x3f_2889_;
v___y_2817_ = v___y_2869_;
v___y_2818_ = v___x_2912_;
v___y_2819_ = v_a_2937_;
v___y_2820_ = v___x_2969_;
v___y_2821_ = v___y_2870_;
v___y_2822_ = v_a_2961_;
v___y_2823_ = v___y_2871_;
v___y_2824_ = v_a_2928_;
v___y_2825_ = v___y_2872_;
v___y_2826_ = v___y_2873_;
v___y_2827_ = v_a_2901_;
v___y_2828_ = v___y_2876_;
v___y_2829_ = v___y_2878_;
v___y_2830_ = v_a_2945_;
v___y_2831_ = v___y_2879_;
v___y_2832_ = v___y_2880_;
v___y_2833_ = v___y_2881_;
v___y_2834_ = v___y_2884_;
v___y_2835_ = v___y_2883_;
v___y_2836_ = v___y_2887_;
v___y_2837_ = v_a_2909_;
v___y_2838_ = v_a_2955_;
v_leFn_x3f_2839_ = v___x_2969_;
v___y_2840_ = v___y_2890_;
v___y_2841_ = v___y_2891_;
v___y_2842_ = v___y_2892_;
v___y_2843_ = v___y_2893_;
v___y_2844_ = v___y_2894_;
v___y_2845_ = v___y_2895_;
v___y_2846_ = v___y_2896_;
v___y_2847_ = v___y_2897_;
v___y_2848_ = v___y_2898_;
v___y_2849_ = v___y_2899_;
goto v___jp_2815_;
}
}
else
{
lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3011_; 
lean_dec(v_a_2961_);
lean_dec(v_a_2955_);
lean_dec(v_a_2945_);
lean_dec(v_a_2937_);
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec(v___y_2876_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3004_ = lean_ctor_get(v___x_2986_, 0);
v_isSharedCheck_3011_ = !lean_is_exclusive(v___x_2986_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_3006_ = v___x_2986_;
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_dec(v___x_2986_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3009_; 
if (v_isShared_3007_ == 0)
{
v___x_3009_ = v___x_3006_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_a_3004_);
v___x_3009_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
return v___x_3009_;
}
}
}
}
else
{
lean_object* v_a_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3019_; 
lean_dec(v_a_2961_);
lean_dec(v_a_2957_);
lean_dec(v_a_2955_);
lean_dec(v_a_2945_);
lean_dec(v_a_2937_);
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec(v___y_2876_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3012_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3014_ = v___x_2982_;
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_a_3012_);
lean_dec(v___x_2982_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3017_; 
if (v_isShared_3015_ == 0)
{
v___x_3017_ = v___x_3014_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_a_3012_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
}
else
{
lean_object* v_a_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3027_; 
lean_dec(v_a_2961_);
lean_dec(v_a_2957_);
lean_dec(v_a_2955_);
lean_dec(v_a_2947_);
lean_dec(v_a_2945_);
lean_dec(v_a_2937_);
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec(v___y_2876_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3020_ = lean_ctor_get(v___x_2977_, 0);
v_isSharedCheck_3027_ = !lean_is_exclusive(v___x_2977_);
if (v_isSharedCheck_3027_ == 0)
{
v___x_3022_ = v___x_2977_;
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_a_3020_);
lean_dec(v___x_2977_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___x_3025_; 
if (v_isShared_3023_ == 0)
{
v___x_3025_ = v___x_3022_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v_a_3020_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
return v___x_3025_;
}
}
}
}
else
{
lean_object* v_a_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3035_; 
lean_dec(v_a_2961_);
lean_dec(v_a_2957_);
lean_dec(v_a_2955_);
lean_dec(v_a_2947_);
lean_dec(v_a_2945_);
lean_dec(v_a_2940_);
lean_dec(v_a_2937_);
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3028_ = lean_ctor_get(v___x_2974_, 0);
v_isSharedCheck_3035_ = !lean_is_exclusive(v___x_2974_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_3030_ = v___x_2974_;
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_a_3028_);
lean_dec(v___x_2974_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v___x_3033_; 
if (v_isShared_3031_ == 0)
{
v___x_3033_ = v___x_3030_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_a_3028_);
v___x_3033_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
return v___x_3033_;
}
}
}
}
else
{
lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3043_; 
lean_dec(v_a_2961_);
lean_dec(v_a_2957_);
lean_dec(v_a_2955_);
lean_dec(v_a_2947_);
lean_dec(v_a_2945_);
lean_dec(v_a_2940_);
lean_dec(v_a_2937_);
lean_dec(v_a_2932_);
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3036_ = lean_ctor_get(v___x_2970_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3038_ = v___x_2970_;
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v___x_2970_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3041_; 
if (v_isShared_3039_ == 0)
{
v___x_3041_ = v___x_3038_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_a_3036_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
return v___x_3041_;
}
}
}
}
else
{
lean_object* v_a_3044_; lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3051_; 
lean_dec(v_a_2961_);
lean_dec(v_a_2957_);
lean_dec(v_a_2955_);
lean_dec(v_a_2947_);
lean_dec(v_a_2945_);
lean_dec(v_a_2940_);
lean_dec(v_a_2937_);
lean_dec(v_a_2932_);
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3044_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_3051_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_3051_ == 0)
{
v___x_3046_ = v___x_2965_;
v_isShared_3047_ = v_isSharedCheck_3051_;
goto v_resetjp_3045_;
}
else
{
lean_inc(v_a_3044_);
lean_dec(v___x_2965_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3051_;
goto v_resetjp_3045_;
}
v_resetjp_3045_:
{
lean_object* v___x_3049_; 
if (v_isShared_3047_ == 0)
{
v___x_3049_ = v___x_3046_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v_a_3044_);
v___x_3049_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
return v___x_3049_;
}
}
}
}
else
{
lean_object* v_a_3052_; lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3059_; 
lean_dec(v_a_2957_);
lean_dec(v_a_2955_);
lean_dec(v_a_2947_);
lean_dec(v_a_2945_);
lean_dec(v_a_2940_);
lean_dec(v_a_2937_);
lean_dec(v_a_2932_);
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2904_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3052_ = lean_ctor_get(v___x_2960_, 0);
v_isSharedCheck_3059_ = !lean_is_exclusive(v___x_2960_);
if (v_isSharedCheck_3059_ == 0)
{
v___x_3054_ = v___x_2960_;
v_isShared_3055_ = v_isSharedCheck_3059_;
goto v_resetjp_3053_;
}
else
{
lean_inc(v_a_3052_);
lean_dec(v___x_2960_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3059_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
lean_object* v___x_3057_; 
if (v_isShared_3055_ == 0)
{
v___x_3057_ = v___x_3054_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v_a_3052_);
v___x_3057_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
return v___x_3057_;
}
}
}
}
else
{
lean_object* v_a_3060_; lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3067_; 
lean_dec(v_a_2955_);
lean_dec_ref(v___x_2951_);
lean_dec(v_a_2947_);
lean_dec(v_a_2945_);
lean_dec(v_a_2940_);
lean_dec(v_a_2937_);
lean_dec(v_a_2932_);
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2904_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3060_ = lean_ctor_get(v___x_2956_, 0);
v_isSharedCheck_3067_ = !lean_is_exclusive(v___x_2956_);
if (v_isSharedCheck_3067_ == 0)
{
v___x_3062_ = v___x_2956_;
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
else
{
lean_inc(v_a_3060_);
lean_dec(v___x_2956_);
v___x_3062_ = lean_box(0);
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
v_resetjp_3061_:
{
lean_object* v___x_3065_; 
if (v_isShared_3063_ == 0)
{
v___x_3065_ = v___x_3062_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v_a_3060_);
v___x_3065_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
return v___x_3065_;
}
}
}
}
else
{
lean_object* v_a_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3075_; 
lean_dec_ref(v___x_2951_);
lean_dec(v_a_2947_);
lean_dec(v_a_2945_);
lean_dec(v_a_2940_);
lean_dec(v_a_2937_);
lean_dec(v_a_2932_);
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2904_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3068_ = lean_ctor_get(v___x_2954_, 0);
v_isSharedCheck_3075_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_3070_ = v___x_2954_;
v_isShared_3071_ = v_isSharedCheck_3075_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_a_3068_);
lean_dec(v___x_2954_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3075_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___x_3073_; 
if (v_isShared_3071_ == 0)
{
v___x_3073_ = v___x_3070_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_a_3068_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
return v___x_3073_;
}
}
}
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3083_; 
lean_dec(v_a_2945_);
lean_dec(v_a_2940_);
lean_dec(v_a_2937_);
lean_dec(v_a_2932_);
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2904_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3076_ = lean_ctor_get(v___x_2946_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_2946_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3078_ = v___x_2946_;
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_2946_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3091_; 
lean_dec(v_a_2940_);
lean_dec(v_a_2937_);
lean_dec(v_a_2932_);
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2904_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3084_ = lean_ctor_get(v___x_2944_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_2944_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3086_ = v___x_2944_;
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_2944_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3087_ == 0)
{
v___x_3089_ = v___x_3086_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3084_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
}
else
{
lean_object* v_a_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3099_; 
lean_dec(v_a_2937_);
lean_dec(v_a_2932_);
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2904_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3092_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3094_ = v___x_2939_;
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_a_3092_);
lean_dec(v___x_2939_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
if (v_isShared_3095_ == 0)
{
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_3092_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
}
else
{
lean_object* v_a_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3107_; 
lean_dec(v_a_2932_);
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2904_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3100_ = lean_ctor_get(v___x_2936_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_2936_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3102_ = v___x_2936_;
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_a_3100_);
lean_dec(v___x_2936_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v___x_3105_; 
if (v_isShared_3103_ == 0)
{
v___x_3105_ = v___x_3102_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_a_3100_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
}
else
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3115_; 
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2904_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3108_ = lean_ctor_get(v___x_2931_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3110_ = v___x_2931_;
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_2931_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___x_3113_; 
if (v_isShared_3111_ == 0)
{
v___x_3113_ = v___x_3110_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_a_3108_);
v___x_3113_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
return v___x_3113_;
}
}
}
}
else
{
lean_object* v_a_3116_; lean_object* v___x_3118_; uint8_t v_isShared_3119_; uint8_t v_isSharedCheck_3123_; 
lean_dec(v_a_2928_);
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2904_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3116_ = lean_ctor_get(v___x_2929_, 0);
v_isSharedCheck_3123_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_3123_ == 0)
{
v___x_3118_ = v___x_2929_;
v_isShared_3119_ = v_isSharedCheck_3123_;
goto v_resetjp_3117_;
}
else
{
lean_inc(v_a_3116_);
lean_dec(v___x_2929_);
v___x_3118_ = lean_box(0);
v_isShared_3119_ = v_isSharedCheck_3123_;
goto v_resetjp_3117_;
}
v_resetjp_3117_:
{
lean_object* v___x_3121_; 
if (v_isShared_3119_ == 0)
{
v___x_3121_ = v___x_3118_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3122_; 
v_reuseFailAlloc_3122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3122_, 0, v_a_3116_);
v___x_3121_ = v_reuseFailAlloc_3122_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
return v___x_3121_;
}
}
}
}
else
{
lean_object* v_a_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3131_; 
lean_del_object(v___x_2922_);
lean_dec(v_a_2909_);
lean_dec(v_a_2904_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3124_ = lean_ctor_get(v___x_2927_, 0);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___x_2927_);
if (v_isSharedCheck_3131_ == 0)
{
v___x_3126_ = v___x_2927_;
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
else
{
lean_inc(v_a_3124_);
lean_dec(v___x_2927_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
lean_object* v___x_3129_; 
if (v_isShared_3127_ == 0)
{
v___x_3129_ = v___x_3126_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_a_3124_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
}
}
}
else
{
lean_object* v___x_3133_; lean_object* v___x_3135_; 
lean_dec(v_a_2916_);
lean_dec(v_a_2909_);
lean_dec(v_a_2904_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v___x_3133_ = lean_box(0);
if (v_isShared_2919_ == 0)
{
lean_ctor_set(v___x_2918_, 0, v___x_3133_);
v___x_3135_ = v___x_2918_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v___x_3133_);
v___x_3135_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
return v___x_3135_;
}
}
}
}
else
{
lean_object* v_a_3138_; lean_object* v___x_3140_; uint8_t v_isShared_3141_; uint8_t v_isSharedCheck_3145_; 
lean_dec(v_a_2909_);
lean_dec(v_a_2904_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3138_ = lean_ctor_get(v___x_2915_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v___x_2915_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3140_ = v___x_2915_;
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
else
{
lean_inc(v_a_3138_);
lean_dec(v___x_2915_);
v___x_3140_ = lean_box(0);
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
v_resetjp_3139_:
{
lean_object* v___x_3143_; 
if (v_isShared_3141_ == 0)
{
v___x_3143_ = v___x_3140_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v_a_3138_);
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
else
{
lean_object* v_a_3146_; lean_object* v___x_3148_; uint8_t v_isShared_3149_; uint8_t v_isSharedCheck_3153_; 
lean_dec(v_a_2904_);
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3146_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3148_ = v___x_2908_;
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
else
{
lean_inc(v_a_3146_);
lean_dec(v___x_2908_);
v___x_3148_ = lean_box(0);
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
v_resetjp_3147_:
{
lean_object* v___x_3151_; 
if (v_isShared_3149_ == 0)
{
v___x_3151_ = v___x_3148_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v_a_3146_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
}
}
}
}
else
{
lean_object* v_a_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3161_; 
lean_dec(v_a_2901_);
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3154_ = lean_ctor_get(v___x_2903_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_2903_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3156_ = v___x_2903_;
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_a_3154_);
lean_dec(v___x_2903_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___x_3159_; 
if (v_isShared_3157_ == 0)
{
v___x_3159_ = v___x_3156_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v_a_3154_);
v___x_3159_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
return v___x_3159_;
}
}
}
}
else
{
lean_object* v_a_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3169_; 
lean_dec(v_charInst_x3f_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec(v_a_2642_);
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v_type_2493_);
v_a_3162_ = lean_ctor_get(v___x_2900_, 0);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_2900_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3164_ = v___x_2900_;
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_a_3162_);
lean_dec(v___x_2900_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
lean_object* v___x_3167_; 
if (v_isShared_3165_ == 0)
{
v___x_3167_ = v___x_3164_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_a_3162_);
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
else
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3512_; 
lean_dec(v_a_2640_);
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3505_ = lean_ctor_get(v___x_2641_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3507_ = v___x_2641_;
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v___x_2641_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3510_; 
if (v_isShared_3508_ == 0)
{
v___x_3510_ = v___x_3507_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_a_3505_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
return v___x_3510_;
}
}
}
}
else
{
lean_object* v_a_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3520_; 
lean_dec(v_a_2637_);
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3513_ = lean_ctor_get(v___x_2639_, 0);
v_isSharedCheck_3520_ = !lean_is_exclusive(v___x_2639_);
if (v_isSharedCheck_3520_ == 0)
{
v___x_3515_ = v___x_2639_;
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_a_3513_);
lean_dec(v___x_2639_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3518_; 
if (v_isShared_3516_ == 0)
{
v___x_3518_ = v___x_3515_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_a_3513_);
v___x_3518_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
return v___x_3518_;
}
}
}
}
else
{
lean_object* v_a_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3528_; 
lean_del_object(v___x_2633_);
lean_dec(v_a_2631_);
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3521_ = lean_ctor_get(v___x_2636_, 0);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3523_ = v___x_2636_;
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_a_3521_);
lean_dec(v___x_2636_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v___x_3526_; 
if (v_isShared_3524_ == 0)
{
v___x_3526_ = v___x_3523_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_a_3521_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
}
}
}
else
{
lean_del_object(v___x_2628_);
lean_dec(v_val_2626_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
return v___x_2630_;
}
}
}
else
{
lean_object* v___x_3531_; lean_object* v___x_3533_; 
lean_dec(v_a_2622_);
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v___x_3531_ = lean_box(0);
if (v_isShared_2625_ == 0)
{
lean_ctor_set(v___x_2624_, 0, v___x_3531_);
v___x_3533_ = v___x_2624_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v___x_3531_);
v___x_3533_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
return v___x_3533_;
}
}
}
}
else
{
lean_object* v_a_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3543_; 
lean_dec_ref(v___f_2599_);
lean_dec_ref(v_type_2493_);
v_a_3536_ = lean_ctor_get(v___x_2621_, 0);
v_isSharedCheck_3543_ = !lean_is_exclusive(v___x_2621_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3538_ = v___x_2621_;
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_a_3536_);
lean_dec(v___x_2621_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v___x_3541_; 
if (v_isShared_3539_ == 0)
{
v___x_3541_ = v___x_3538_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v_a_3536_);
v___x_3541_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
return v___x_3541_;
}
}
}
v___jp_2505_:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; 
v___x_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2507_, 0, v___y_2506_);
v___x_2508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2508_, 0, v___x_2507_);
return v___x_2508_;
}
v___jp_2509_:
{
if (lean_obj_tag(v___y_2511_) == 0)
{
lean_dec_ref_known(v___y_2511_, 1);
v___y_2506_ = v___y_2510_;
goto v___jp_2505_;
}
else
{
lean_object* v_a_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2519_; 
lean_dec(v___y_2510_);
v_a_2512_ = lean_ctor_get(v___y_2511_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v___y_2511_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2514_ = v___y_2511_;
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_a_2512_);
lean_dec(v___y_2511_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v___x_2517_; 
if (v_isShared_2515_ == 0)
{
v___x_2517_ = v___x_2514_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v_a_2512_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
}
}
v___jp_2520_:
{
lean_object* v___x_2534_; 
v___x_2534_ = l_Lean_Meta_Grind_Arith_Linear_mkVar(v___y_2523_, v___y_2521_, v___y_2532_, v___y_2527_, v___y_2526_, v___y_2530_, v___y_2525_, v___y_2524_, v___y_2529_, v___y_2522_, v___y_2531_, v___y_2528_, v___y_2533_);
if (lean_obj_tag(v___x_2534_) == 0)
{
lean_object* v_a_2535_; lean_object* v___x_2536_; 
v_a_2535_ = lean_ctor_get(v___x_2534_, 0);
lean_inc(v_a_2535_);
lean_dec_ref_known(v___x_2534_, 1);
v___x_2536_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(v_a_2535_, v___y_2532_, v___y_2527_);
v___y_2510_ = v___y_2532_;
v___y_2511_ = v___x_2536_;
goto v___jp_2509_;
}
else
{
lean_object* v_a_2537_; lean_object* v___x_2539_; uint8_t v_isShared_2540_; uint8_t v_isSharedCheck_2544_; 
lean_dec(v___y_2532_);
v_a_2537_ = lean_ctor_get(v___x_2534_, 0);
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2534_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2539_ = v___x_2534_;
v_isShared_2540_ = v_isSharedCheck_2544_;
goto v_resetjp_2538_;
}
else
{
lean_inc(v_a_2537_);
lean_dec(v___x_2534_);
v___x_2539_ = lean_box(0);
v_isShared_2540_ = v_isSharedCheck_2544_;
goto v_resetjp_2538_;
}
v_resetjp_2538_:
{
lean_object* v___x_2542_; 
if (v_isShared_2540_ == 0)
{
v___x_2542_ = v___x_2539_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v_a_2537_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
}
}
v___jp_2545_:
{
if (lean_obj_tag(v___y_2556_) == 0)
{
uint8_t v___x_2561_; 
v___x_2561_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst(v___y_2546_);
lean_dec(v___y_2546_);
if (v___x_2561_ == 0)
{
lean_dec_ref(v___y_2549_);
v___y_2506_ = v___y_2559_;
goto v___jp_2505_;
}
else
{
v___y_2521_ = v___y_2547_;
v___y_2522_ = v___y_2548_;
v___y_2523_ = v___y_2549_;
v___y_2524_ = v___y_2550_;
v___y_2525_ = v___y_2551_;
v___y_2526_ = v___y_2552_;
v___y_2527_ = v___y_2553_;
v___y_2528_ = v___y_2554_;
v___y_2529_ = v___y_2555_;
v___y_2530_ = v___y_2557_;
v___y_2531_ = v___y_2558_;
v___y_2532_ = v___y_2559_;
v___y_2533_ = v___y_2560_;
goto v___jp_2520_;
}
}
else
{
lean_dec_ref_known(v___y_2556_, 1);
lean_dec(v___y_2546_);
v___y_2521_ = v___y_2547_;
v___y_2522_ = v___y_2548_;
v___y_2523_ = v___y_2549_;
v___y_2524_ = v___y_2550_;
v___y_2525_ = v___y_2551_;
v___y_2526_ = v___y_2552_;
v___y_2527_ = v___y_2553_;
v___y_2528_ = v___y_2554_;
v___y_2529_ = v___y_2555_;
v___y_2530_ = v___y_2557_;
v___y_2531_ = v___y_2558_;
v___y_2532_ = v___y_2559_;
v___y_2533_ = v___y_2560_;
goto v___jp_2520_;
}
}
v___jp_2562_:
{
if (v___y_2578_ == 0)
{
v___y_2546_ = v___y_2563_;
v___y_2547_ = v___y_2564_;
v___y_2548_ = v___y_2565_;
v___y_2549_ = v___y_2566_;
v___y_2550_ = v___y_2567_;
v___y_2551_ = v___y_2568_;
v___y_2552_ = v___y_2569_;
v___y_2553_ = v___y_2570_;
v___y_2554_ = v___y_2571_;
v___y_2555_ = v___y_2572_;
v___y_2556_ = v___y_2573_;
v___y_2557_ = v___y_2574_;
v___y_2558_ = v___y_2575_;
v___y_2559_ = v___y_2576_;
v___y_2560_ = v___y_2577_;
goto v___jp_2545_;
}
else
{
lean_object* v___x_2579_; 
lean_dec(v___y_2573_);
lean_dec(v___y_2563_);
v___x_2579_ = l_Lean_Meta_Grind_Arith_Linear_mkVar(v___y_2566_, v___y_2564_, v___y_2576_, v___y_2570_, v___y_2569_, v___y_2574_, v___y_2568_, v___y_2567_, v___y_2572_, v___y_2565_, v___y_2575_, v___y_2571_, v___y_2577_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v_a_2580_; lean_object* v___x_2581_; 
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
lean_inc_n(v_a_2580_, 2);
lean_dec_ref_known(v___x_2579_, 1);
v___x_2581_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(v_a_2580_, v___y_2576_, v___y_2570_);
if (lean_obj_tag(v___x_2581_) == 0)
{
lean_object* v___x_2582_; 
lean_dec_ref_known(v___x_2581_, 1);
v___x_2582_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(v_a_2580_, v___y_2576_, v___y_2570_);
v___y_2510_ = v___y_2576_;
v___y_2511_ = v___x_2582_;
goto v___jp_2509_;
}
else
{
lean_object* v_a_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2590_; 
lean_dec(v_a_2580_);
lean_dec(v___y_2576_);
v_a_2583_ = lean_ctor_get(v___x_2581_, 0);
v_isSharedCheck_2590_ = !lean_is_exclusive(v___x_2581_);
if (v_isSharedCheck_2590_ == 0)
{
v___x_2585_ = v___x_2581_;
v_isShared_2586_ = v_isSharedCheck_2590_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_a_2583_);
lean_dec(v___x_2581_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2590_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v___x_2588_; 
if (v_isShared_2586_ == 0)
{
v___x_2588_ = v___x_2585_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v_a_2583_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
return v___x_2588_;
}
}
}
}
else
{
lean_object* v_a_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2598_; 
lean_dec(v___y_2576_);
v_a_2591_ = lean_ctor_get(v___x_2579_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2593_ = v___x_2579_;
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_a_2591_);
lean_dec(v___x_2579_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2596_; 
if (v_isShared_2594_ == 0)
{
v___x_2596_ = v___x_2593_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v_a_2591_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
}
}
v___jp_2600_:
{
lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2602_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_2603_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2602_, v___f_2599_, v___y_2601_);
if (lean_obj_tag(v___x_2603_) == 0)
{
lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2611_; 
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2603_);
if (v_isSharedCheck_2611_ == 0)
{
lean_object* v_unused_2612_; 
v_unused_2612_ = lean_ctor_get(v___x_2603_, 0);
lean_dec(v_unused_2612_);
v___x_2605_ = v___x_2603_;
v_isShared_2606_ = v_isSharedCheck_2611_;
goto v_resetjp_2604_;
}
else
{
lean_dec(v___x_2603_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2611_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2607_; lean_object* v___x_2609_; 
v___x_2607_ = lean_box(0);
if (v_isShared_2606_ == 0)
{
lean_ctor_set(v___x_2605_, 0, v___x_2607_);
v___x_2609_ = v___x_2605_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v___x_2607_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
else
{
lean_object* v_a_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2620_; 
v_a_2613_ = lean_ctor_get(v___x_2603_, 0);
v_isSharedCheck_2620_ = !lean_is_exclusive(v___x_2603_);
if (v_isSharedCheck_2620_ == 0)
{
v___x_2615_ = v___x_2603_;
v_isShared_2616_ = v_isSharedCheck_2620_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_a_2613_);
lean_dec(v___x_2603_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2620_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v___x_2618_; 
if (v_isShared_2616_ == 0)
{
v___x_2618_ = v___x_2615_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v_a_2613_);
v___x_2618_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
return v___x_2618_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___boxed(lean_object* v_type_3544_, lean_object* v_a_3545_, lean_object* v_a_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_, lean_object* v_a_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_, lean_object* v_a_3554_, lean_object* v_a_3555_){
_start:
{
lean_object* v_res_3556_; 
v_res_3556_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f(v_type_3544_, v_a_3545_, v_a_3546_, v_a_3547_, v_a_3548_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
lean_dec(v_a_3554_);
lean_dec_ref(v_a_3553_);
lean_dec(v_a_3552_);
lean_dec_ref(v_a_3551_);
lean_dec(v_a_3550_);
lean_dec_ref(v_a_3549_);
lean_dec(v_a_3548_);
lean_dec_ref(v_a_3547_);
lean_dec(v_a_3546_);
lean_dec(v_a_3545_);
return v_res_3556_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0(lean_object* v_00_u03b2_3557_, lean_object* v_x_3558_, lean_object* v_x_3559_, lean_object* v_x_3560_){
_start:
{
lean_object* v___x_3561_; 
v___x_3561_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0___redArg(v_x_3558_, v_x_3559_, v_x_3560_);
return v___x_3561_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0(lean_object* v_00_u03b2_3562_, lean_object* v_x_3563_, size_t v_x_3564_, size_t v_x_3565_, lean_object* v_x_3566_, lean_object* v_x_3567_){
_start:
{
lean_object* v___x_3568_; 
v___x_3568_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___redArg(v_x_3563_, v_x_3564_, v_x_3565_, v_x_3566_, v_x_3567_);
return v___x_3568_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3569_, lean_object* v_x_3570_, lean_object* v_x_3571_, lean_object* v_x_3572_, lean_object* v_x_3573_, lean_object* v_x_3574_){
_start:
{
size_t v_x_538990__boxed_3575_; size_t v_x_538991__boxed_3576_; lean_object* v_res_3577_; 
v_x_538990__boxed_3575_ = lean_unbox_usize(v_x_3571_);
lean_dec(v_x_3571_);
v_x_538991__boxed_3576_ = lean_unbox_usize(v_x_3572_);
lean_dec(v_x_3572_);
v_res_3577_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0(v_00_u03b2_3569_, v_x_3570_, v_x_538990__boxed_3575_, v_x_538991__boxed_3576_, v_x_3573_, v_x_3574_);
return v_res_3577_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3578_, lean_object* v_n_3579_, lean_object* v_k_3580_, lean_object* v_v_3581_){
_start:
{
lean_object* v___x_3582_; 
v___x_3582_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__1___redArg(v_n_3579_, v_k_3580_, v_v_3581_);
return v___x_3582_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_3583_, size_t v_depth_3584_, lean_object* v_keys_3585_, lean_object* v_vals_3586_, lean_object* v_heq_3587_, lean_object* v_i_3588_, lean_object* v_entries_3589_){
_start:
{
lean_object* v___x_3590_; 
v___x_3590_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__2___redArg(v_depth_3584_, v_keys_3585_, v_vals_3586_, v_i_3588_, v_entries_3589_);
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_3591_, lean_object* v_depth_3592_, lean_object* v_keys_3593_, lean_object* v_vals_3594_, lean_object* v_heq_3595_, lean_object* v_i_3596_, lean_object* v_entries_3597_){
_start:
{
size_t v_depth_boxed_3598_; lean_object* v_res_3599_; 
v_depth_boxed_3598_ = lean_unbox_usize(v_depth_3592_);
lean_dec(v_depth_3592_);
v_res_3599_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__2(v_00_u03b2_3591_, v_depth_boxed_3598_, v_keys_3593_, v_vals_3594_, v_heq_3595_, v_i_3596_, v_entries_3597_);
lean_dec_ref(v_vals_3594_);
lean_dec_ref(v_keys_3593_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_3600_, lean_object* v_x_3601_, lean_object* v_x_3602_, lean_object* v_x_3603_, lean_object* v_x_3604_){
_start:
{
lean_object* v___x_3605_; 
v___x_3605_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0_spec__0_spec__1_spec__2___redArg(v_x_3601_, v_x_3602_, v_x_3603_, v_x_3604_);
return v___x_3605_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___lam__1(lean_object* v_val_3606_, lean_object* v_base_3607_, lean_object* v_natModuleInst_3608_, lean_object* v_declName_3609_, lean_object* v_le_3610_, lean_object* v_mid_3611_, lean_object* v_ord_3612_){
_start:
{
lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; 
v___x_3613_ = lean_box(0);
v___x_3614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3614_, 0, v_val_3606_);
lean_ctor_set(v___x_3614_, 1, v___x_3613_);
v___x_3615_ = l_Lean_mkConst(v_declName_3609_, v___x_3614_);
v___x_3616_ = l_Lean_mkApp5(v___x_3615_, v_base_3607_, v_natModuleInst_3608_, v_le_3610_, v_mid_3611_, v_ord_3612_);
return v___x_3616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f(lean_object* v_type_3716_, lean_object* v_base_3717_, lean_object* v_natModuleInst_3718_, lean_object* v_a_3719_, lean_object* v_a_3720_, lean_object* v_a_3721_, lean_object* v_a_3722_, lean_object* v_a_3723_, lean_object* v_a_3724_, lean_object* v_a_3725_, lean_object* v_a_3726_, lean_object* v_a_3727_, lean_object* v_a_3728_){
_start:
{
lean_object* v___x_3730_; 
lean_inc_ref(v_base_3717_);
v___x_3730_ = l_Lean_Meta_getDecLevel_x3f(v_base_3717_, v_a_3725_, v_a_3726_, v_a_3727_, v_a_3728_);
if (lean_obj_tag(v___x_3730_) == 0)
{
lean_object* v_a_3731_; lean_object* v___x_3733_; uint8_t v_isShared_3734_; uint8_t v_isSharedCheck_4468_; 
v_a_3731_ = lean_ctor_get(v___x_3730_, 0);
v_isSharedCheck_4468_ = !lean_is_exclusive(v___x_3730_);
if (v_isSharedCheck_4468_ == 0)
{
v___x_3733_ = v___x_3730_;
v_isShared_3734_ = v_isSharedCheck_4468_;
goto v_resetjp_3732_;
}
else
{
lean_inc(v_a_3731_);
lean_dec(v___x_3730_);
v___x_3733_ = lean_box(0);
v_isShared_3734_ = v_isSharedCheck_4468_;
goto v_resetjp_3732_;
}
v_resetjp_3732_:
{
if (lean_obj_tag(v_a_3731_) == 1)
{
lean_object* v_val_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_4463_; 
lean_del_object(v___x_3733_);
v_val_3735_ = lean_ctor_get(v_a_3731_, 0);
v_isSharedCheck_4463_ = !lean_is_exclusive(v_a_3731_);
if (v_isSharedCheck_4463_ == 0)
{
v___x_3737_ = v_a_3731_;
v_isShared_3738_ = v_isSharedCheck_4463_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_val_3735_);
lean_dec(v_a_3731_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_4463_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v___y_3740_; lean_object* v___y_3741_; lean_object* v___y_3742_; lean_object* v___y_3743_; lean_object* v___y_3744_; lean_object* v___y_3745_; lean_object* v___y_3746_; lean_object* v___y_3747_; lean_object* v___y_3748_; lean_object* v___y_3749_; lean_object* v___y_3750_; lean_object* v___y_3751_; lean_object* v___y_3752_; lean_object* v___y_3753_; lean_object* v___y_3754_; lean_object* v___y_3755_; lean_object* v___y_3756_; lean_object* v___y_3757_; lean_object* v___y_3758_; lean_object* v_a_3759_; lean_object* v___y_3807_; lean_object* v___y_3808_; lean_object* v___y_3809_; lean_object* v___y_3810_; lean_object* v___y_3811_; lean_object* v___y_3812_; lean_object* v___y_3813_; lean_object* v___y_3814_; lean_object* v___y_3815_; lean_object* v___y_3816_; lean_object* v___y_3817_; lean_object* v___y_3818_; lean_object* v___y_3819_; lean_object* v___y_3820_; lean_object* v___y_3821_; lean_object* v___y_3822_; lean_object* v___y_3823_; lean_object* v___y_3824_; lean_object* v___y_3825_; lean_object* v___y_3826_; lean_object* v___y_3827_; lean_object* v___y_3828_; lean_object* v___y_3829_; lean_object* v___y_3830_; lean_object* v_a_3831_; lean_object* v___y_3848_; lean_object* v___y_3849_; lean_object* v___y_3850_; lean_object* v___y_3851_; lean_object* v___y_3852_; lean_object* v___y_3853_; lean_object* v___y_3854_; lean_object* v___y_3855_; lean_object* v___y_3856_; lean_object* v___y_3857_; lean_object* v___y_3858_; lean_object* v___y_3859_; lean_object* v___y_3860_; lean_object* v___y_3861_; lean_object* v___y_3862_; lean_object* v___y_3863_; lean_object* v___y_3864_; lean_object* v___y_3865_; lean_object* v___y_3866_; lean_object* v___y_3867_; lean_object* v___y_3868_; lean_object* v___y_3869_; lean_object* v___y_3870_; lean_object* v___y_3871_; lean_object* v___y_3872_; lean_object* v___y_3873_; lean_object* v___y_3874_; lean_object* v___y_3875_; lean_object* v___y_3876_; lean_object* v___y_3877_; lean_object* v___y_3878_; lean_object* v___y_3879_; lean_object* v___y_3880_; lean_object* v___y_3881_; lean_object* v___y_3882_; lean_object* v___y_3883_; lean_object* v___y_3884_; lean_object* v___y_3885_; lean_object* v___y_3998_; lean_object* v___y_3999_; lean_object* v___y_4000_; lean_object* v___y_4001_; lean_object* v___y_4002_; lean_object* v___y_4003_; lean_object* v___y_4004_; lean_object* v___y_4005_; lean_object* v___y_4006_; lean_object* v___y_4007_; lean_object* v___y_4008_; lean_object* v___y_4009_; lean_object* v___y_4010_; lean_object* v___y_4011_; lean_object* v___y_4012_; lean_object* v___y_4013_; lean_object* v___y_4014_; lean_object* v___y_4015_; lean_object* v___y_4016_; lean_object* v___y_4017_; lean_object* v___y_4018_; lean_object* v___y_4019_; lean_object* v___y_4020_; lean_object* v___y_4021_; lean_object* v___y_4022_; lean_object* v___y_4023_; lean_object* v___y_4024_; lean_object* v___y_4025_; lean_object* v___y_4026_; lean_object* v___y_4027_; lean_object* v___y_4028_; lean_object* v___y_4029_; lean_object* v___y_4030_; lean_object* v___y_4031_; lean_object* v___y_4032_; lean_object* v___y_4033_; lean_object* v___y_4034_; lean_object* v___y_4035_; lean_object* v___x_4049_; lean_object* v___y_4051_; lean_object* v___y_4052_; lean_object* v___y_4053_; lean_object* v___y_4054_; lean_object* v___y_4055_; lean_object* v___y_4056_; lean_object* v___y_4057_; lean_object* v_noNatDivInstQ_x3f_4058_; lean_object* v___y_4059_; lean_object* v___y_4060_; lean_object* v___y_4061_; lean_object* v___y_4062_; lean_object* v___y_4063_; lean_object* v___y_4064_; lean_object* v___y_4065_; lean_object* v___y_4066_; lean_object* v___y_4067_; lean_object* v___y_4068_; lean_object* v___y_4231_; lean_object* v___y_4232_; lean_object* v___y_4233_; lean_object* v___y_4234_; lean_object* v___y_4235_; lean_object* v_isLinearInstQ_x3f_4236_; lean_object* v___y_4237_; lean_object* v___y_4238_; lean_object* v___y_4239_; lean_object* v___y_4240_; lean_object* v___y_4241_; lean_object* v___y_4242_; lean_object* v___y_4243_; lean_object* v___y_4244_; lean_object* v___y_4245_; lean_object* v___y_4246_; lean_object* v___x_4304_; 
v___x_4049_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__1));
lean_inc_ref(v_base_3717_);
lean_inc(v_val_3735_);
v___x_4304_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_4049_, v_val_3735_, v_base_3717_, v_a_3724_, v_a_3725_, v_a_3726_, v_a_3727_, v_a_3728_);
if (lean_obj_tag(v___x_4304_) == 0)
{
lean_object* v_a_4305_; lean_object* v___y_4307_; lean_object* v___y_4308_; lean_object* v___y_4309_; lean_object* v___y_4310_; lean_object* v___y_4311_; lean_object* v___y_4312_; lean_object* v___y_4313_; lean_object* v___y_4314_; lean_object* v___y_4315_; lean_object* v___y_4316_; lean_object* v_fst_4317_; lean_object* v_snd_4318_; lean_object* v___y_4319_; lean_object* v___y_4320_; lean_object* v___y_4321_; lean_object* v___y_4322_; lean_object* v___y_4323_; lean_object* v___y_4345_; lean_object* v___y_4346_; lean_object* v___y_4347_; lean_object* v___y_4348_; lean_object* v___y_4349_; lean_object* v___y_4350_; lean_object* v___y_4351_; lean_object* v___y_4352_; lean_object* v___y_4353_; lean_object* v___y_4354_; lean_object* v___y_4355_; lean_object* v___x_4357_; 
v_a_4305_ = lean_ctor_get(v___x_4304_, 0);
lean_inc_n(v_a_4305_, 2);
lean_dec_ref_known(v___x_4304_, 1);
lean_inc_ref(v_base_3717_);
lean_inc(v_val_3735_);
v___x_4357_ = l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f(v_val_3735_, v_base_3717_, v_a_4305_, v_a_3723_, v_a_3724_, v_a_3725_, v_a_3726_, v_a_3727_, v_a_3728_);
if (lean_obj_tag(v___x_4357_) == 0)
{
lean_object* v_a_4358_; lean_object* v_orderedAddInst_x3f_4360_; lean_object* v___y_4361_; lean_object* v___y_4362_; lean_object* v___y_4363_; lean_object* v___y_4364_; lean_object* v___y_4365_; lean_object* v___y_4366_; lean_object* v___y_4367_; lean_object* v___y_4368_; lean_object* v___y_4369_; lean_object* v___y_4370_; lean_object* v___y_4408_; lean_object* v___y_4409_; lean_object* v___y_4410_; lean_object* v___y_4411_; lean_object* v___y_4412_; lean_object* v___y_4413_; lean_object* v___y_4414_; lean_object* v___y_4415_; lean_object* v___y_4416_; lean_object* v___y_4417_; 
v_a_4358_ = lean_ctor_get(v___x_4357_, 0);
lean_inc(v_a_4358_);
lean_dec_ref_known(v___x_4357_, 1);
if (lean_obj_tag(v_a_4305_) == 1)
{
if (lean_obj_tag(v_a_4358_) == 1)
{
lean_object* v_val_4419_; lean_object* v_val_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; 
v_val_4419_ = lean_ctor_get(v_a_4305_, 0);
v_val_4420_ = lean_ctor_get(v_a_4358_, 0);
v___x_4421_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__62));
lean_inc_ref(v_base_3717_);
lean_inc(v_val_3735_);
v___x_4422_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(v___x_4421_, v_val_3735_, v_base_3717_, v_a_3723_, v_a_3724_, v_a_3725_, v_a_3726_, v_a_3727_, v_a_3728_);
if (lean_obj_tag(v___x_4422_) == 0)
{
lean_object* v_a_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; 
v_a_4423_ = lean_ctor_get(v___x_4422_, 0);
lean_inc(v_a_4423_);
lean_dec_ref_known(v___x_4422_, 1);
v___x_4424_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__66));
v___x_4425_ = lean_box(0);
lean_inc(v_val_3735_);
v___x_4426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4426_, 0, v_val_3735_);
lean_ctor_set(v___x_4426_, 1, v___x_4425_);
v___x_4427_ = l_Lean_mkConst(v___x_4424_, v___x_4426_);
lean_inc(v_val_4420_);
lean_inc(v_val_4419_);
lean_inc_ref(v_base_3717_);
v___x_4428_ = l_Lean_mkApp4(v___x_4427_, v_base_3717_, v_a_4423_, v_val_4419_, v_val_4420_);
v___x_4429_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_4428_, v_a_3724_, v_a_3725_, v_a_3726_, v_a_3727_, v_a_3728_);
if (lean_obj_tag(v___x_4429_) == 0)
{
lean_object* v_a_4430_; 
v_a_4430_ = lean_ctor_get(v___x_4429_, 0);
lean_inc(v_a_4430_);
lean_dec_ref_known(v___x_4429_, 1);
v_orderedAddInst_x3f_4360_ = v_a_4430_;
v___y_4361_ = v_a_3719_;
v___y_4362_ = v_a_3720_;
v___y_4363_ = v_a_3721_;
v___y_4364_ = v_a_3722_;
v___y_4365_ = v_a_3723_;
v___y_4366_ = v_a_3724_;
v___y_4367_ = v_a_3725_;
v___y_4368_ = v_a_3726_;
v___y_4369_ = v_a_3727_;
v___y_4370_ = v_a_3728_;
goto v___jp_4359_;
}
else
{
lean_object* v_a_4431_; lean_object* v___x_4433_; uint8_t v_isShared_4434_; uint8_t v_isSharedCheck_4438_; 
lean_dec_ref_known(v_a_4358_, 1);
lean_dec_ref_known(v_a_4305_, 1);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_natModuleInst_3718_);
lean_dec_ref(v_base_3717_);
lean_dec_ref(v_type_3716_);
v_a_4431_ = lean_ctor_get(v___x_4429_, 0);
v_isSharedCheck_4438_ = !lean_is_exclusive(v___x_4429_);
if (v_isSharedCheck_4438_ == 0)
{
v___x_4433_ = v___x_4429_;
v_isShared_4434_ = v_isSharedCheck_4438_;
goto v_resetjp_4432_;
}
else
{
lean_inc(v_a_4431_);
lean_dec(v___x_4429_);
v___x_4433_ = lean_box(0);
v_isShared_4434_ = v_isSharedCheck_4438_;
goto v_resetjp_4432_;
}
v_resetjp_4432_:
{
lean_object* v___x_4436_; 
if (v_isShared_4434_ == 0)
{
v___x_4436_ = v___x_4433_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4437_; 
v_reuseFailAlloc_4437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4437_, 0, v_a_4431_);
v___x_4436_ = v_reuseFailAlloc_4437_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
return v___x_4436_;
}
}
}
}
else
{
lean_object* v_a_4439_; lean_object* v___x_4441_; uint8_t v_isShared_4442_; uint8_t v_isSharedCheck_4446_; 
lean_dec_ref_known(v_a_4358_, 1);
lean_dec_ref_known(v_a_4305_, 1);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_natModuleInst_3718_);
lean_dec_ref(v_base_3717_);
lean_dec_ref(v_type_3716_);
v_a_4439_ = lean_ctor_get(v___x_4422_, 0);
v_isSharedCheck_4446_ = !lean_is_exclusive(v___x_4422_);
if (v_isSharedCheck_4446_ == 0)
{
v___x_4441_ = v___x_4422_;
v_isShared_4442_ = v_isSharedCheck_4446_;
goto v_resetjp_4440_;
}
else
{
lean_inc(v_a_4439_);
lean_dec(v___x_4422_);
v___x_4441_ = lean_box(0);
v_isShared_4442_ = v_isSharedCheck_4446_;
goto v_resetjp_4440_;
}
v_resetjp_4440_:
{
lean_object* v___x_4444_; 
if (v_isShared_4442_ == 0)
{
v___x_4444_ = v___x_4441_;
goto v_reusejp_4443_;
}
else
{
lean_object* v_reuseFailAlloc_4445_; 
v_reuseFailAlloc_4445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4445_, 0, v_a_4439_);
v___x_4444_ = v_reuseFailAlloc_4445_;
goto v_reusejp_4443_;
}
v_reusejp_4443_:
{
return v___x_4444_;
}
}
}
}
else
{
v___y_4408_ = v_a_3719_;
v___y_4409_ = v_a_3720_;
v___y_4410_ = v_a_3721_;
v___y_4411_ = v_a_3722_;
v___y_4412_ = v_a_3723_;
v___y_4413_ = v_a_3724_;
v___y_4414_ = v_a_3725_;
v___y_4415_ = v_a_3726_;
v___y_4416_ = v_a_3727_;
v___y_4417_ = v_a_3728_;
goto v___jp_4407_;
}
}
else
{
v___y_4408_ = v_a_3719_;
v___y_4409_ = v_a_3720_;
v___y_4410_ = v_a_3721_;
v___y_4411_ = v_a_3722_;
v___y_4412_ = v_a_3723_;
v___y_4413_ = v_a_3724_;
v___y_4414_ = v_a_3725_;
v___y_4415_ = v_a_3726_;
v___y_4416_ = v_a_3727_;
v___y_4417_ = v_a_3728_;
goto v___jp_4407_;
}
v___jp_4359_:
{
if (lean_obj_tag(v_a_4305_) == 0)
{
lean_object* v___x_4371_; 
lean_dec(v_orderedAddInst_x3f_4360_);
lean_dec(v_a_4358_);
v___x_4371_ = lean_box(0);
v___y_4345_ = v___y_4369_;
v___y_4346_ = v___y_4365_;
v___y_4347_ = v___y_4362_;
v___y_4348_ = v___y_4361_;
v___y_4349_ = v___y_4364_;
v___y_4350_ = v___y_4370_;
v___y_4351_ = v___y_4368_;
v___y_4352_ = v___y_4363_;
v___y_4353_ = v___y_4367_;
v___y_4354_ = v___y_4366_;
v___y_4355_ = v___x_4371_;
goto v___jp_4344_;
}
else
{
if (lean_obj_tag(v_a_4358_) == 0)
{
lean_object* v___x_4372_; 
lean_dec_ref_known(v_a_4305_, 1);
lean_dec(v_orderedAddInst_x3f_4360_);
v___x_4372_ = lean_box(0);
v___y_4345_ = v___y_4369_;
v___y_4346_ = v___y_4365_;
v___y_4347_ = v___y_4362_;
v___y_4348_ = v___y_4361_;
v___y_4349_ = v___y_4364_;
v___y_4350_ = v___y_4370_;
v___y_4351_ = v___y_4368_;
v___y_4352_ = v___y_4363_;
v___y_4353_ = v___y_4367_;
v___y_4354_ = v___y_4366_;
v___y_4355_ = v___x_4372_;
goto v___jp_4344_;
}
else
{
if (lean_obj_tag(v_orderedAddInst_x3f_4360_) == 0)
{
lean_object* v___x_4373_; 
lean_dec_ref_known(v_a_4358_, 1);
lean_dec_ref_known(v_a_4305_, 1);
v___x_4373_ = lean_box(0);
v___y_4345_ = v___y_4369_;
v___y_4346_ = v___y_4365_;
v___y_4347_ = v___y_4362_;
v___y_4348_ = v___y_4361_;
v___y_4349_ = v___y_4364_;
v___y_4350_ = v___y_4370_;
v___y_4351_ = v___y_4368_;
v___y_4352_ = v___y_4363_;
v___y_4353_ = v___y_4367_;
v___y_4354_ = v___y_4366_;
v___y_4355_ = v___x_4373_;
goto v___jp_4344_;
}
else
{
lean_object* v_val_4374_; lean_object* v_val_4375_; lean_object* v___x_4377_; uint8_t v_isShared_4378_; uint8_t v_isSharedCheck_4406_; 
v_val_4374_ = lean_ctor_get(v_a_4305_, 0);
v_val_4375_ = lean_ctor_get(v_a_4358_, 0);
v_isSharedCheck_4406_ = !lean_is_exclusive(v_a_4358_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4377_ = v_a_4358_;
v_isShared_4378_ = v_isSharedCheck_4406_;
goto v_resetjp_4376_;
}
else
{
lean_inc(v_val_4375_);
lean_dec(v_a_4358_);
v___x_4377_ = lean_box(0);
v_isShared_4378_ = v_isSharedCheck_4406_;
goto v_resetjp_4376_;
}
v_resetjp_4376_:
{
lean_object* v_val_4379_; lean_object* v___x_4381_; uint8_t v_isShared_4382_; uint8_t v_isSharedCheck_4405_; 
v_val_4379_ = lean_ctor_get(v_orderedAddInst_x3f_4360_, 0);
v_isSharedCheck_4405_ = !lean_is_exclusive(v_orderedAddInst_x3f_4360_);
if (v_isSharedCheck_4405_ == 0)
{
v___x_4381_ = v_orderedAddInst_x3f_4360_;
v_isShared_4382_ = v_isSharedCheck_4405_;
goto v_resetjp_4380_;
}
else
{
lean_inc(v_val_4379_);
lean_dec(v_orderedAddInst_x3f_4360_);
v___x_4381_ = lean_box(0);
v_isShared_4382_ = v_isSharedCheck_4405_;
goto v_resetjp_4380_;
}
v_resetjp_4380_:
{
lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4386_; 
v___x_4383_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__20));
lean_inc(v_val_4379_);
lean_inc(v_val_4375_);
lean_inc(v_val_4374_);
lean_inc_ref(v_natModuleInst_3718_);
lean_inc_ref(v_base_3717_);
lean_inc(v_val_3735_);
v___x_4384_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___lam__1(v_val_3735_, v_base_3717_, v_natModuleInst_3718_, v___x_4383_, v_val_4374_, v_val_4375_, v_val_4379_);
lean_inc_ref(v___x_4384_);
if (v_isShared_4382_ == 0)
{
lean_ctor_set(v___x_4381_, 0, v___x_4384_);
v___x_4386_ = v___x_4381_;
goto v_reusejp_4385_;
}
else
{
lean_object* v_reuseFailAlloc_4404_; 
v_reuseFailAlloc_4404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4404_, 0, v___x_4384_);
v___x_4386_ = v_reuseFailAlloc_4404_;
goto v_reusejp_4385_;
}
v_reusejp_4385_:
{
lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4390_; 
v___x_4387_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__22));
lean_inc(v_val_4379_);
lean_inc(v_val_4375_);
lean_inc(v_val_4374_);
lean_inc_ref(v_natModuleInst_3718_);
lean_inc_ref(v_base_3717_);
lean_inc(v_val_3735_);
v___x_4388_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___lam__1(v_val_3735_, v_base_3717_, v_natModuleInst_3718_, v___x_4387_, v_val_4374_, v_val_4375_, v_val_4379_);
if (v_isShared_4378_ == 0)
{
lean_ctor_set(v___x_4377_, 0, v___x_4388_);
v___x_4390_ = v___x_4377_;
goto v_reusejp_4389_;
}
else
{
lean_object* v_reuseFailAlloc_4403_; 
v_reuseFailAlloc_4403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4403_, 0, v___x_4388_);
v___x_4390_ = v_reuseFailAlloc_4403_;
goto v_reusejp_4389_;
}
v_reusejp_4389_:
{
lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; 
v___x_4391_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__24));
lean_inc_n(v_val_4379_, 2);
lean_inc(v_val_4375_);
lean_inc_n(v_val_4374_, 3);
lean_inc_ref_n(v_natModuleInst_3718_, 2);
lean_inc_ref_n(v_base_3717_, 2);
lean_inc_n(v_val_3735_, 3);
v___x_4392_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___lam__1(v_val_3735_, v_base_3717_, v_natModuleInst_3718_, v___x_4391_, v_val_4374_, v_val_4375_, v_val_4379_);
v___x_4393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4393_, 0, v___x_4392_);
v___x_4394_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__26));
v___x_4395_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___lam__1(v_val_3735_, v_base_3717_, v_natModuleInst_3718_, v___x_4394_, v_val_4374_, v_val_4375_, v_val_4379_);
v___x_4396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4396_, 0, v___x_4395_);
v___x_4397_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__30));
v___x_4398_ = lean_box(0);
v___x_4399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4399_, 0, v_val_3735_);
lean_ctor_set(v___x_4399_, 1, v___x_4398_);
v___x_4400_ = l_Lean_mkConst(v___x_4397_, v___x_4399_);
lean_inc_ref(v_type_3716_);
v___x_4401_ = l_Lean_mkAppB(v___x_4400_, v_type_3716_, v___x_4384_);
v___x_4402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4402_, 0, v___x_4401_);
v___y_4307_ = v___y_4369_;
v___y_4308_ = v___y_4365_;
v___y_4309_ = v___y_4361_;
v___y_4310_ = v___y_4364_;
v___y_4311_ = v___y_4370_;
v___y_4312_ = v___x_4393_;
v___y_4313_ = v___y_4362_;
v___y_4314_ = v___y_4368_;
v___y_4315_ = v___x_4386_;
v___y_4316_ = v___x_4396_;
v_fst_4317_ = v_val_4374_;
v_snd_4318_ = v_val_4379_;
v___y_4319_ = v___y_4363_;
v___y_4320_ = v___y_4367_;
v___y_4321_ = v___x_4390_;
v___y_4322_ = v___y_4366_;
v___y_4323_ = v___x_4402_;
goto v___jp_4306_;
}
}
}
}
}
}
}
}
v___jp_4407_:
{
lean_object* v___x_4418_; 
v___x_4418_ = lean_box(0);
v_orderedAddInst_x3f_4360_ = v___x_4418_;
v___y_4361_ = v___y_4408_;
v___y_4362_ = v___y_4409_;
v___y_4363_ = v___y_4410_;
v___y_4364_ = v___y_4411_;
v___y_4365_ = v___y_4412_;
v___y_4366_ = v___y_4413_;
v___y_4367_ = v___y_4414_;
v___y_4368_ = v___y_4415_;
v___y_4369_ = v___y_4416_;
v___y_4370_ = v___y_4417_;
goto v___jp_4359_;
}
}
else
{
lean_object* v_a_4447_; lean_object* v___x_4449_; uint8_t v_isShared_4450_; uint8_t v_isSharedCheck_4454_; 
lean_dec(v_a_4305_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_natModuleInst_3718_);
lean_dec_ref(v_base_3717_);
lean_dec_ref(v_type_3716_);
v_a_4447_ = lean_ctor_get(v___x_4357_, 0);
v_isSharedCheck_4454_ = !lean_is_exclusive(v___x_4357_);
if (v_isSharedCheck_4454_ == 0)
{
v___x_4449_ = v___x_4357_;
v_isShared_4450_ = v_isSharedCheck_4454_;
goto v_resetjp_4448_;
}
else
{
lean_inc(v_a_4447_);
lean_dec(v___x_4357_);
v___x_4449_ = lean_box(0);
v_isShared_4450_ = v_isSharedCheck_4454_;
goto v_resetjp_4448_;
}
v_resetjp_4448_:
{
lean_object* v___x_4452_; 
if (v_isShared_4450_ == 0)
{
v___x_4452_ = v___x_4449_;
goto v_reusejp_4451_;
}
else
{
lean_object* v_reuseFailAlloc_4453_; 
v_reuseFailAlloc_4453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4453_, 0, v_a_4447_);
v___x_4452_ = v_reuseFailAlloc_4453_;
goto v_reusejp_4451_;
}
v_reusejp_4451_:
{
return v___x_4452_;
}
}
}
v___jp_4306_:
{
lean_object* v___x_4324_; 
lean_inc_ref(v_base_3717_);
lean_inc(v_val_3735_);
v___x_4324_ = l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f(v_val_3735_, v_base_3717_, v_a_4305_, v___y_4308_, v___y_4322_, v___y_4320_, v___y_4314_, v___y_4307_, v___y_4311_);
if (lean_obj_tag(v___x_4324_) == 0)
{
lean_object* v_a_4325_; 
v_a_4325_ = lean_ctor_get(v___x_4324_, 0);
lean_inc(v_a_4325_);
lean_dec_ref_known(v___x_4324_, 1);
if (lean_obj_tag(v_a_4325_) == 0)
{
lean_dec_ref(v_snd_4318_);
lean_dec_ref(v_fst_4317_);
v___y_4231_ = v___y_4323_;
v___y_4232_ = v___y_4315_;
v___y_4233_ = v___y_4316_;
v___y_4234_ = v___y_4312_;
v___y_4235_ = v___y_4321_;
v_isLinearInstQ_x3f_4236_ = v_a_4325_;
v___y_4237_ = v___y_4309_;
v___y_4238_ = v___y_4313_;
v___y_4239_ = v___y_4319_;
v___y_4240_ = v___y_4310_;
v___y_4241_ = v___y_4308_;
v___y_4242_ = v___y_4322_;
v___y_4243_ = v___y_4320_;
v___y_4244_ = v___y_4314_;
v___y_4245_ = v___y_4307_;
v___y_4246_ = v___y_4311_;
goto v___jp_4230_;
}
else
{
lean_object* v_val_4326_; lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4335_; 
v_val_4326_ = lean_ctor_get(v_a_4325_, 0);
v_isSharedCheck_4335_ = !lean_is_exclusive(v_a_4325_);
if (v_isSharedCheck_4335_ == 0)
{
v___x_4328_ = v_a_4325_;
v_isShared_4329_ = v_isSharedCheck_4335_;
goto v_resetjp_4327_;
}
else
{
lean_inc(v_val_4326_);
lean_dec(v_a_4325_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4335_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4333_; 
v___x_4330_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__18));
lean_inc_ref(v_natModuleInst_3718_);
lean_inc_ref(v_base_3717_);
lean_inc(v_val_3735_);
v___x_4331_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___lam__1(v_val_3735_, v_base_3717_, v_natModuleInst_3718_, v___x_4330_, v_fst_4317_, v_val_4326_, v_snd_4318_);
if (v_isShared_4329_ == 0)
{
lean_ctor_set(v___x_4328_, 0, v___x_4331_);
v___x_4333_ = v___x_4328_;
goto v_reusejp_4332_;
}
else
{
lean_object* v_reuseFailAlloc_4334_; 
v_reuseFailAlloc_4334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4334_, 0, v___x_4331_);
v___x_4333_ = v_reuseFailAlloc_4334_;
goto v_reusejp_4332_;
}
v_reusejp_4332_:
{
v___y_4231_ = v___y_4323_;
v___y_4232_ = v___y_4315_;
v___y_4233_ = v___y_4316_;
v___y_4234_ = v___y_4312_;
v___y_4235_ = v___y_4321_;
v_isLinearInstQ_x3f_4236_ = v___x_4333_;
v___y_4237_ = v___y_4309_;
v___y_4238_ = v___y_4313_;
v___y_4239_ = v___y_4319_;
v___y_4240_ = v___y_4310_;
v___y_4241_ = v___y_4308_;
v___y_4242_ = v___y_4322_;
v___y_4243_ = v___y_4320_;
v___y_4244_ = v___y_4314_;
v___y_4245_ = v___y_4307_;
v___y_4246_ = v___y_4311_;
goto v___jp_4230_;
}
}
}
}
else
{
lean_object* v_a_4336_; lean_object* v___x_4338_; uint8_t v_isShared_4339_; uint8_t v_isSharedCheck_4343_; 
lean_dec(v___y_4323_);
lean_dec(v___y_4321_);
lean_dec_ref(v_snd_4318_);
lean_dec_ref(v_fst_4317_);
lean_dec(v___y_4316_);
lean_dec(v___y_4315_);
lean_dec(v___y_4312_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_natModuleInst_3718_);
lean_dec_ref(v_base_3717_);
lean_dec_ref(v_type_3716_);
v_a_4336_ = lean_ctor_get(v___x_4324_, 0);
v_isSharedCheck_4343_ = !lean_is_exclusive(v___x_4324_);
if (v_isSharedCheck_4343_ == 0)
{
v___x_4338_ = v___x_4324_;
v_isShared_4339_ = v_isSharedCheck_4343_;
goto v_resetjp_4337_;
}
else
{
lean_inc(v_a_4336_);
lean_dec(v___x_4324_);
v___x_4338_ = lean_box(0);
v_isShared_4339_ = v_isSharedCheck_4343_;
goto v_resetjp_4337_;
}
v_resetjp_4337_:
{
lean_object* v___x_4341_; 
if (v_isShared_4339_ == 0)
{
v___x_4341_ = v___x_4338_;
goto v_reusejp_4340_;
}
else
{
lean_object* v_reuseFailAlloc_4342_; 
v_reuseFailAlloc_4342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4342_, 0, v_a_4336_);
v___x_4341_ = v_reuseFailAlloc_4342_;
goto v_reusejp_4340_;
}
v_reusejp_4340_:
{
return v___x_4341_;
}
}
}
}
v___jp_4344_:
{
lean_object* v___x_4356_; 
v___x_4356_ = lean_box(0);
v___y_4231_ = v___x_4356_;
v___y_4232_ = v___x_4356_;
v___y_4233_ = v___x_4356_;
v___y_4234_ = v___x_4356_;
v___y_4235_ = v___x_4356_;
v_isLinearInstQ_x3f_4236_ = v___x_4356_;
v___y_4237_ = v___y_4348_;
v___y_4238_ = v___y_4347_;
v___y_4239_ = v___y_4352_;
v___y_4240_ = v___y_4349_;
v___y_4241_ = v___y_4346_;
v___y_4242_ = v___y_4354_;
v___y_4243_ = v___y_4353_;
v___y_4244_ = v___y_4351_;
v___y_4245_ = v___y_4345_;
v___y_4246_ = v___y_4350_;
goto v___jp_4230_;
}
}
else
{
lean_object* v_a_4455_; lean_object* v___x_4457_; uint8_t v_isShared_4458_; uint8_t v_isSharedCheck_4462_; 
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_natModuleInst_3718_);
lean_dec_ref(v_base_3717_);
lean_dec_ref(v_type_3716_);
v_a_4455_ = lean_ctor_get(v___x_4304_, 0);
v_isSharedCheck_4462_ = !lean_is_exclusive(v___x_4304_);
if (v_isSharedCheck_4462_ == 0)
{
v___x_4457_ = v___x_4304_;
v_isShared_4458_ = v_isSharedCheck_4462_;
goto v_resetjp_4456_;
}
else
{
lean_inc(v_a_4455_);
lean_dec(v___x_4304_);
v___x_4457_ = lean_box(0);
v_isShared_4458_ = v_isSharedCheck_4462_;
goto v_resetjp_4456_;
}
v_resetjp_4456_:
{
lean_object* v___x_4460_; 
if (v_isShared_4458_ == 0)
{
v___x_4460_ = v___x_4457_;
goto v_reusejp_4459_;
}
else
{
lean_object* v_reuseFailAlloc_4461_; 
v_reuseFailAlloc_4461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4461_, 0, v_a_4455_);
v___x_4460_ = v_reuseFailAlloc_4461_;
goto v_reusejp_4459_;
}
v_reusejp_4459_:
{
return v___x_4460_;
}
}
}
v___jp_3739_:
{
lean_object* v___x_3760_; 
v___x_3760_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v___y_3742_, v___y_3745_);
if (lean_obj_tag(v___x_3760_) == 0)
{
lean_object* v_a_3761_; lean_object* v_structs_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3766_; 
v_a_3761_ = lean_ctor_get(v___x_3760_, 0);
lean_inc(v_a_3761_);
lean_dec_ref_known(v___x_3760_, 1);
v_structs_3762_ = lean_ctor_get(v_a_3761_, 0);
lean_inc_ref(v_structs_3762_);
lean_dec(v_a_3761_);
v___x_3763_ = lean_array_get_size(v_structs_3762_);
lean_dec_ref(v_structs_3762_);
v___x_3764_ = lean_box(0);
lean_inc_ref(v___y_3743_);
if (v_isShared_3738_ == 0)
{
lean_ctor_set(v___x_3737_, 0, v___y_3743_);
v___x_3766_ = v___x_3737_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v___y_3743_);
v___x_3766_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; size_t v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; uint8_t v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___f_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; 
lean_inc_ref(v___y_3748_);
v___x_3767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3767_, 0, v___y_3748_);
v___x_3768_ = lean_unsigned_to_nat(32u);
v___x_3769_ = lean_mk_empty_array_with_capacity(v___x_3768_);
v___x_3770_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__4, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__4);
v___x_3771_ = ((size_t)5ULL);
lean_inc(v___y_3740_);
v___x_3772_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3772_, 0, v___x_3770_);
lean_ctor_set(v___x_3772_, 1, v___x_3769_);
lean_ctor_set(v___x_3772_, 2, v___y_3740_);
lean_ctor_set(v___x_3772_, 3, v___y_3740_);
lean_ctor_set_usize(v___x_3772_, 4, v___x_3771_);
v___x_3773_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__6, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__6);
v___x_3774_ = 0;
v___x_3775_ = lean_box(0);
lean_inc_ref_n(v___x_3772_, 7);
v___x_3776_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v___x_3776_, 0, v___x_3763_);
lean_ctor_set(v___x_3776_, 1, v___x_3764_);
lean_ctor_set(v___x_3776_, 2, v_type_3716_);
lean_ctor_set(v___x_3776_, 3, v_val_3735_);
lean_ctor_set(v___x_3776_, 4, v___y_3751_);
lean_ctor_set(v___x_3776_, 5, v___y_3754_);
lean_ctor_set(v___x_3776_, 6, v___y_3758_);
lean_ctor_set(v___x_3776_, 7, v___y_3752_);
lean_ctor_set(v___x_3776_, 8, v___y_3747_);
lean_ctor_set(v___x_3776_, 9, v___y_3756_);
lean_ctor_set(v___x_3776_, 10, v___y_3750_);
lean_ctor_set(v___x_3776_, 11, v___y_3749_);
lean_ctor_set(v___x_3776_, 12, v___x_3764_);
lean_ctor_set(v___x_3776_, 13, v___x_3764_);
lean_ctor_set(v___x_3776_, 14, v___x_3764_);
lean_ctor_set(v___x_3776_, 15, v___x_3764_);
lean_ctor_set(v___x_3776_, 16, v___x_3764_);
lean_ctor_set(v___x_3776_, 17, v___y_3753_);
lean_ctor_set(v___x_3776_, 18, v___y_3755_);
lean_ctor_set(v___x_3776_, 19, v___x_3764_);
lean_ctor_set(v___x_3776_, 20, v___y_3746_);
lean_ctor_set(v___x_3776_, 21, v_a_3759_);
lean_ctor_set(v___x_3776_, 22, v___y_3757_);
lean_ctor_set(v___x_3776_, 23, v___y_3743_);
lean_ctor_set(v___x_3776_, 24, v___y_3748_);
lean_ctor_set(v___x_3776_, 25, v___x_3766_);
lean_ctor_set(v___x_3776_, 26, v___x_3767_);
lean_ctor_set(v___x_3776_, 27, v___x_3764_);
lean_ctor_set(v___x_3776_, 28, v___y_3744_);
lean_ctor_set(v___x_3776_, 29, v___y_3741_);
lean_ctor_set(v___x_3776_, 30, v___x_3772_);
lean_ctor_set(v___x_3776_, 31, v___x_3773_);
lean_ctor_set(v___x_3776_, 32, v___x_3772_);
lean_ctor_set(v___x_3776_, 33, v___x_3772_);
lean_ctor_set(v___x_3776_, 34, v___x_3772_);
lean_ctor_set(v___x_3776_, 35, v___x_3772_);
lean_ctor_set(v___x_3776_, 36, v___x_3764_);
lean_ctor_set(v___x_3776_, 37, v___x_3773_);
lean_ctor_set(v___x_3776_, 38, v___x_3772_);
lean_ctor_set(v___x_3776_, 39, v___x_3775_);
lean_ctor_set(v___x_3776_, 40, v___x_3772_);
lean_ctor_set(v___x_3776_, 41, v___x_3772_);
lean_ctor_set_uint8(v___x_3776_, sizeof(void*)*42, v___x_3774_);
v___f_3777_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___lam__1), 2, 1);
lean_closure_set(v___f_3777_, 0, v___x_3776_);
v___x_3778_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_3779_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3778_, v___f_3777_, v___y_3742_);
if (lean_obj_tag(v___x_3779_) == 0)
{
lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3787_; 
v_isSharedCheck_3787_ = !lean_is_exclusive(v___x_3779_);
if (v_isSharedCheck_3787_ == 0)
{
lean_object* v_unused_3788_; 
v_unused_3788_ = lean_ctor_get(v___x_3779_, 0);
lean_dec(v_unused_3788_);
v___x_3781_ = v___x_3779_;
v_isShared_3782_ = v_isSharedCheck_3787_;
goto v_resetjp_3780_;
}
else
{
lean_dec(v___x_3779_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3787_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v___x_3783_; lean_object* v___x_3785_; 
v___x_3783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3783_, 0, v___x_3763_);
if (v_isShared_3782_ == 0)
{
lean_ctor_set(v___x_3781_, 0, v___x_3783_);
v___x_3785_ = v___x_3781_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v___x_3783_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
return v___x_3785_;
}
}
}
else
{
lean_object* v_a_3789_; lean_object* v___x_3791_; uint8_t v_isShared_3792_; uint8_t v_isSharedCheck_3796_; 
v_a_3789_ = lean_ctor_get(v___x_3779_, 0);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___x_3779_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3791_ = v___x_3779_;
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
else
{
lean_inc(v_a_3789_);
lean_dec(v___x_3779_);
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
lean_object* v_a_3798_; lean_object* v___x_3800_; uint8_t v_isShared_3801_; uint8_t v_isSharedCheck_3805_; 
lean_dec(v_a_3759_);
lean_dec(v___y_3758_);
lean_dec_ref(v___y_3757_);
lean_dec(v___y_3756_);
lean_dec_ref(v___y_3755_);
lean_dec(v___y_3754_);
lean_dec_ref(v___y_3753_);
lean_dec(v___y_3752_);
lean_dec_ref(v___y_3751_);
lean_dec(v___y_3750_);
lean_dec(v___y_3749_);
lean_dec_ref(v___y_3748_);
lean_dec(v___y_3747_);
lean_dec(v___y_3746_);
lean_dec_ref(v___y_3744_);
lean_dec_ref(v___y_3743_);
lean_dec_ref(v___y_3741_);
lean_dec(v___y_3740_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_3798_ = lean_ctor_get(v___x_3760_, 0);
v_isSharedCheck_3805_ = !lean_is_exclusive(v___x_3760_);
if (v_isSharedCheck_3805_ == 0)
{
v___x_3800_ = v___x_3760_;
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
else
{
lean_inc(v_a_3798_);
lean_dec(v___x_3760_);
v___x_3800_ = lean_box(0);
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
v_resetjp_3799_:
{
lean_object* v___x_3803_; 
if (v_isShared_3801_ == 0)
{
v___x_3803_ = v___x_3800_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v_a_3798_);
v___x_3803_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
return v___x_3803_;
}
}
}
}
v___jp_3806_:
{
if (lean_obj_tag(v___y_3830_) == 0)
{
lean_dec(v___y_3815_);
v___y_3740_ = v___y_3807_;
v___y_3741_ = v___y_3808_;
v___y_3742_ = v___y_3809_;
v___y_3743_ = v___y_3811_;
v___y_3744_ = v___y_3812_;
v___y_3745_ = v___y_3813_;
v___y_3746_ = v_a_3831_;
v___y_3747_ = v___y_3814_;
v___y_3748_ = v___y_3816_;
v___y_3749_ = v___y_3819_;
v___y_3750_ = v___y_3820_;
v___y_3751_ = v___y_3821_;
v___y_3752_ = v___y_3822_;
v___y_3753_ = v___y_3823_;
v___y_3754_ = v___y_3824_;
v___y_3755_ = v___y_3826_;
v___y_3756_ = v___y_3825_;
v___y_3757_ = v___y_3828_;
v___y_3758_ = v___y_3830_;
v_a_3759_ = v___y_3830_;
goto v___jp_3739_;
}
else
{
lean_object* v_val_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; 
v_val_3832_ = lean_ctor_get(v___y_3830_, 0);
v___x_3833_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__12));
v___x_3834_ = l_Lean_mkConst(v___x_3833_, v___y_3815_);
lean_inc(v_val_3832_);
lean_inc_ref(v_type_3716_);
v___x_3835_ = l_Lean_mkAppB(v___x_3834_, v_type_3716_, v_val_3832_);
v___x_3836_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_3835_, v___y_3827_, v___y_3829_, v___y_3810_, v___y_3817_, v___y_3813_, v___y_3818_);
if (lean_obj_tag(v___x_3836_) == 0)
{
lean_object* v_a_3837_; lean_object* v___x_3838_; 
v_a_3837_ = lean_ctor_get(v___x_3836_, 0);
lean_inc(v_a_3837_);
lean_dec_ref_known(v___x_3836_, 1);
v___x_3838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3838_, 0, v_a_3837_);
v___y_3740_ = v___y_3807_;
v___y_3741_ = v___y_3808_;
v___y_3742_ = v___y_3809_;
v___y_3743_ = v___y_3811_;
v___y_3744_ = v___y_3812_;
v___y_3745_ = v___y_3813_;
v___y_3746_ = v_a_3831_;
v___y_3747_ = v___y_3814_;
v___y_3748_ = v___y_3816_;
v___y_3749_ = v___y_3819_;
v___y_3750_ = v___y_3820_;
v___y_3751_ = v___y_3821_;
v___y_3752_ = v___y_3822_;
v___y_3753_ = v___y_3823_;
v___y_3754_ = v___y_3824_;
v___y_3755_ = v___y_3826_;
v___y_3756_ = v___y_3825_;
v___y_3757_ = v___y_3828_;
v___y_3758_ = v___y_3830_;
v_a_3759_ = v___x_3838_;
goto v___jp_3739_;
}
else
{
lean_object* v_a_3839_; lean_object* v___x_3841_; uint8_t v_isShared_3842_; uint8_t v_isSharedCheck_3846_; 
lean_dec_ref_known(v___y_3830_, 1);
lean_dec(v_a_3831_);
lean_dec_ref(v___y_3828_);
lean_dec_ref(v___y_3826_);
lean_dec(v___y_3825_);
lean_dec(v___y_3824_);
lean_dec_ref(v___y_3823_);
lean_dec(v___y_3822_);
lean_dec_ref(v___y_3821_);
lean_dec(v___y_3820_);
lean_dec(v___y_3819_);
lean_dec_ref(v___y_3816_);
lean_dec(v___y_3814_);
lean_dec_ref(v___y_3812_);
lean_dec_ref(v___y_3811_);
lean_dec_ref(v___y_3808_);
lean_dec(v___y_3807_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_3839_ = lean_ctor_get(v___x_3836_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v___x_3836_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3841_ = v___x_3836_;
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
else
{
lean_inc(v_a_3839_);
lean_dec(v___x_3836_);
v___x_3841_ = lean_box(0);
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
v_resetjp_3840_:
{
lean_object* v___x_3844_; 
if (v_isShared_3842_ == 0)
{
v___x_3844_ = v___x_3841_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3845_; 
v_reuseFailAlloc_3845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3845_, 0, v_a_3839_);
v___x_3844_ = v_reuseFailAlloc_3845_;
goto v_reusejp_3843_;
}
v_reusejp_3843_:
{
return v___x_3844_;
}
}
}
}
}
v___jp_3847_:
{
lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; 
v___x_3886_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__15));
lean_inc_ref(v___y_3870_);
v___x_3887_ = l_Lean_Name_mkStr2(v___y_3870_, v___x_3886_);
lean_inc(v___y_3852_);
v___x_3888_ = l_Lean_mkConst(v___x_3887_, v___y_3852_);
lean_inc_ref(v_type_3716_);
v___x_3889_ = l_Lean_mkAppB(v___x_3888_, v_type_3716_, v___y_3858_);
v___x_3890_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(v___x_3889_, v___y_3876_, v___y_3877_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
if (lean_obj_tag(v___x_3890_) == 0)
{
lean_object* v_a_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; 
v_a_3891_ = lean_ctor_get(v___x_3890_, 0);
lean_inc(v_a_3891_);
lean_dec_ref_known(v___x_3890_, 1);
v___x_3892_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__20));
lean_inc_ref(v___y_3853_);
v___x_3893_ = l_Lean_Name_mkStr2(v___y_3853_, v___x_3892_);
lean_inc(v___y_3852_);
v___x_3894_ = l_Lean_mkConst(v___x_3893_, v___y_3852_);
lean_inc_ref(v_type_3716_);
v___x_3895_ = l_Lean_mkApp3(v___x_3894_, v_type_3716_, v___y_3857_, v___y_3850_);
v___x_3896_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_3895_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
if (lean_obj_tag(v___x_3896_) == 0)
{
lean_object* v_a_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; 
v_a_3897_ = lean_ctor_get(v___x_3896_, 0);
lean_inc(v_a_3897_);
lean_dec_ref_known(v___x_3896_, 1);
v___x_3898_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__63));
lean_inc_ref(v___y_3872_);
v___x_3899_ = l_Lean_Name_mkStr2(v___y_3872_, v___x_3898_);
lean_inc(v___y_3866_);
v___x_3900_ = l_Lean_mkConst(v___x_3899_, v___y_3866_);
lean_inc_ref_n(v_type_3716_, 3);
v___x_3901_ = l_Lean_mkApp4(v___x_3900_, v_type_3716_, v_type_3716_, v_type_3716_, v___y_3851_);
v___x_3902_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_3901_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
if (lean_obj_tag(v___x_3902_) == 0)
{
lean_object* v_a_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; 
v_a_3903_ = lean_ctor_get(v___x_3902_, 0);
lean_inc(v_a_3903_);
lean_dec_ref_known(v___x_3902_, 1);
v___x_3904_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__24));
lean_inc_ref(v___y_3854_);
v___x_3905_ = l_Lean_Name_mkStr2(v___y_3854_, v___x_3904_);
v___x_3906_ = l_Lean_mkConst(v___x_3905_, v___y_3866_);
lean_inc_ref_n(v_type_3716_, 3);
v___x_3907_ = l_Lean_mkApp4(v___x_3906_, v_type_3716_, v_type_3716_, v_type_3716_, v___y_3869_);
v___x_3908_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_3907_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
if (lean_obj_tag(v___x_3908_) == 0)
{
lean_object* v_a_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; 
v_a_3909_ = lean_ctor_get(v___x_3908_, 0);
lean_inc(v_a_3909_);
lean_dec_ref_known(v___x_3908_, 1);
v___x_3910_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__28));
lean_inc_ref(v___y_3856_);
v___x_3911_ = l_Lean_Name_mkStr2(v___y_3856_, v___x_3910_);
lean_inc(v___y_3852_);
v___x_3912_ = l_Lean_mkConst(v___x_3911_, v___y_3852_);
lean_inc_ref(v_type_3716_);
v___x_3913_ = l_Lean_mkAppB(v___x_3912_, v_type_3716_, v___y_3875_);
v___x_3914_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_3913_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
if (lean_obj_tag(v___x_3914_) == 0)
{
lean_object* v_a_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; 
v_a_3915_ = lean_ctor_get(v___x_3914_, 0);
lean_inc(v_a_3915_);
lean_dec_ref_known(v___x_3914_, 1);
v___x_3916_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__0));
lean_inc_ref(v___y_3864_);
v___x_3917_ = l_Lean_Name_mkStr2(v___y_3864_, v___x_3916_);
v___x_3918_ = l_Lean_mkConst(v___x_3917_, v___y_3863_);
lean_inc_ref_n(v_type_3716_, 2);
lean_inc_ref(v___x_3918_);
v___x_3919_ = l_Lean_mkApp4(v___x_3918_, v___y_3848_, v_type_3716_, v_type_3716_, v___y_3867_);
v___x_3920_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_3919_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
if (lean_obj_tag(v___x_3920_) == 0)
{
lean_object* v_a_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; 
v_a_3921_ = lean_ctor_get(v___x_3920_, 0);
lean_inc(v_a_3921_);
lean_dec_ref_known(v___x_3920_, 1);
lean_inc_ref_n(v_type_3716_, 2);
v___x_3922_ = l_Lean_mkApp4(v___x_3918_, v___y_3859_, v_type_3716_, v_type_3716_, v___y_3862_);
v___x_3923_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_3922_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
if (lean_obj_tag(v___x_3923_) == 0)
{
if (lean_obj_tag(v___y_3873_) == 0)
{
lean_object* v_a_3924_; 
v_a_3924_ = lean_ctor_get(v___x_3923_, 0);
lean_inc(v_a_3924_);
lean_dec_ref_known(v___x_3923_, 1);
v___y_3807_ = v___y_3849_;
v___y_3808_ = v_a_3915_;
v___y_3809_ = v___y_3876_;
v___y_3810_ = v___y_3882_;
v___y_3811_ = v_a_3921_;
v___y_3812_ = v_a_3909_;
v___y_3813_ = v___y_3884_;
v___y_3814_ = v___y_3868_;
v___y_3815_ = v___y_3852_;
v___y_3816_ = v_a_3924_;
v___y_3817_ = v___y_3883_;
v___y_3818_ = v___y_3885_;
v___y_3819_ = v___y_3871_;
v___y_3820_ = v___y_3855_;
v___y_3821_ = v___y_3860_;
v___y_3822_ = v___y_3861_;
v___y_3823_ = v_a_3891_;
v___y_3824_ = v___y_3873_;
v___y_3825_ = v___y_3874_;
v___y_3826_ = v_a_3897_;
v___y_3827_ = v___y_3880_;
v___y_3828_ = v_a_3903_;
v___y_3829_ = v___y_3881_;
v___y_3830_ = v___y_3865_;
v_a_3831_ = v___y_3873_;
goto v___jp_3806_;
}
else
{
lean_object* v_a_3925_; lean_object* v_val_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; 
v_a_3925_ = lean_ctor_get(v___x_3923_, 0);
lean_inc(v_a_3925_);
lean_dec_ref_known(v___x_3923_, 1);
v_val_3926_ = lean_ctor_get(v___y_3873_, 0);
v___x_3927_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__46));
lean_inc(v___y_3852_);
v___x_3928_ = l_Lean_mkConst(v___x_3927_, v___y_3852_);
lean_inc(v_val_3926_);
lean_inc_ref(v_type_3716_);
v___x_3929_ = l_Lean_mkAppB(v___x_3928_, v_type_3716_, v_val_3926_);
v___x_3930_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_3929_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
if (lean_obj_tag(v___x_3930_) == 0)
{
lean_object* v_a_3931_; lean_object* v___x_3932_; 
v_a_3931_ = lean_ctor_get(v___x_3930_, 0);
lean_inc(v_a_3931_);
lean_dec_ref_known(v___x_3930_, 1);
v___x_3932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3932_, 0, v_a_3931_);
v___y_3807_ = v___y_3849_;
v___y_3808_ = v_a_3915_;
v___y_3809_ = v___y_3876_;
v___y_3810_ = v___y_3882_;
v___y_3811_ = v_a_3921_;
v___y_3812_ = v_a_3909_;
v___y_3813_ = v___y_3884_;
v___y_3814_ = v___y_3868_;
v___y_3815_ = v___y_3852_;
v___y_3816_ = v_a_3925_;
v___y_3817_ = v___y_3883_;
v___y_3818_ = v___y_3885_;
v___y_3819_ = v___y_3871_;
v___y_3820_ = v___y_3855_;
v___y_3821_ = v___y_3860_;
v___y_3822_ = v___y_3861_;
v___y_3823_ = v_a_3891_;
v___y_3824_ = v___y_3873_;
v___y_3825_ = v___y_3874_;
v___y_3826_ = v_a_3897_;
v___y_3827_ = v___y_3880_;
v___y_3828_ = v_a_3903_;
v___y_3829_ = v___y_3881_;
v___y_3830_ = v___y_3865_;
v_a_3831_ = v___x_3932_;
goto v___jp_3806_;
}
else
{
lean_object* v_a_3933_; lean_object* v___x_3935_; uint8_t v_isShared_3936_; uint8_t v_isSharedCheck_3940_; 
lean_dec(v_a_3925_);
lean_dec_ref_known(v___y_3873_, 1);
lean_dec(v_a_3921_);
lean_dec(v_a_3915_);
lean_dec(v_a_3909_);
lean_dec(v_a_3903_);
lean_dec(v_a_3897_);
lean_dec(v_a_3891_);
lean_dec(v___y_3874_);
lean_dec(v___y_3871_);
lean_dec(v___y_3868_);
lean_dec(v___y_3865_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
lean_dec(v___y_3855_);
lean_dec(v___y_3852_);
lean_dec(v___y_3849_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_3933_ = lean_ctor_get(v___x_3930_, 0);
v_isSharedCheck_3940_ = !lean_is_exclusive(v___x_3930_);
if (v_isSharedCheck_3940_ == 0)
{
v___x_3935_ = v___x_3930_;
v_isShared_3936_ = v_isSharedCheck_3940_;
goto v_resetjp_3934_;
}
else
{
lean_inc(v_a_3933_);
lean_dec(v___x_3930_);
v___x_3935_ = lean_box(0);
v_isShared_3936_ = v_isSharedCheck_3940_;
goto v_resetjp_3934_;
}
v_resetjp_3934_:
{
lean_object* v___x_3938_; 
if (v_isShared_3936_ == 0)
{
v___x_3938_ = v___x_3935_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v_a_3933_);
v___x_3938_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
return v___x_3938_;
}
}
}
}
}
else
{
lean_object* v_a_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3948_; 
lean_dec(v_a_3921_);
lean_dec(v_a_3915_);
lean_dec(v_a_3909_);
lean_dec(v_a_3903_);
lean_dec(v_a_3897_);
lean_dec(v_a_3891_);
lean_dec(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec(v___y_3871_);
lean_dec(v___y_3868_);
lean_dec(v___y_3865_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
lean_dec(v___y_3855_);
lean_dec(v___y_3852_);
lean_dec(v___y_3849_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_3941_ = lean_ctor_get(v___x_3923_, 0);
v_isSharedCheck_3948_ = !lean_is_exclusive(v___x_3923_);
if (v_isSharedCheck_3948_ == 0)
{
v___x_3943_ = v___x_3923_;
v_isShared_3944_ = v_isSharedCheck_3948_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_a_3941_);
lean_dec(v___x_3923_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3948_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
lean_object* v___x_3946_; 
if (v_isShared_3944_ == 0)
{
v___x_3946_ = v___x_3943_;
goto v_reusejp_3945_;
}
else
{
lean_object* v_reuseFailAlloc_3947_; 
v_reuseFailAlloc_3947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3947_, 0, v_a_3941_);
v___x_3946_ = v_reuseFailAlloc_3947_;
goto v_reusejp_3945_;
}
v_reusejp_3945_:
{
return v___x_3946_;
}
}
}
}
else
{
lean_object* v_a_3949_; lean_object* v___x_3951_; uint8_t v_isShared_3952_; uint8_t v_isSharedCheck_3956_; 
lean_dec_ref(v___x_3918_);
lean_dec(v_a_3915_);
lean_dec(v_a_3909_);
lean_dec(v_a_3903_);
lean_dec(v_a_3897_);
lean_dec(v_a_3891_);
lean_dec(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec(v___y_3871_);
lean_dec(v___y_3868_);
lean_dec(v___y_3865_);
lean_dec_ref(v___y_3862_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
lean_dec_ref(v___y_3859_);
lean_dec(v___y_3855_);
lean_dec(v___y_3852_);
lean_dec(v___y_3849_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_3949_ = lean_ctor_get(v___x_3920_, 0);
v_isSharedCheck_3956_ = !lean_is_exclusive(v___x_3920_);
if (v_isSharedCheck_3956_ == 0)
{
v___x_3951_ = v___x_3920_;
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
else
{
lean_inc(v_a_3949_);
lean_dec(v___x_3920_);
v___x_3951_ = lean_box(0);
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
v_resetjp_3950_:
{
lean_object* v___x_3954_; 
if (v_isShared_3952_ == 0)
{
v___x_3954_ = v___x_3951_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v_a_3949_);
v___x_3954_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
return v___x_3954_;
}
}
}
}
else
{
lean_object* v_a_3957_; lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_3964_; 
lean_dec(v_a_3909_);
lean_dec(v_a_3903_);
lean_dec(v_a_3897_);
lean_dec(v_a_3891_);
lean_dec(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec(v___y_3871_);
lean_dec(v___y_3868_);
lean_dec_ref(v___y_3867_);
lean_dec(v___y_3865_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
lean_dec_ref(v___y_3859_);
lean_dec(v___y_3855_);
lean_dec(v___y_3852_);
lean_dec(v___y_3849_);
lean_dec_ref(v___y_3848_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_3957_ = lean_ctor_get(v___x_3914_, 0);
v_isSharedCheck_3964_ = !lean_is_exclusive(v___x_3914_);
if (v_isSharedCheck_3964_ == 0)
{
v___x_3959_ = v___x_3914_;
v_isShared_3960_ = v_isSharedCheck_3964_;
goto v_resetjp_3958_;
}
else
{
lean_inc(v_a_3957_);
lean_dec(v___x_3914_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_3964_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
lean_object* v___x_3962_; 
if (v_isShared_3960_ == 0)
{
v___x_3962_ = v___x_3959_;
goto v_reusejp_3961_;
}
else
{
lean_object* v_reuseFailAlloc_3963_; 
v_reuseFailAlloc_3963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3963_, 0, v_a_3957_);
v___x_3962_ = v_reuseFailAlloc_3963_;
goto v_reusejp_3961_;
}
v_reusejp_3961_:
{
return v___x_3962_;
}
}
}
}
else
{
lean_object* v_a_3965_; lean_object* v___x_3967_; uint8_t v_isShared_3968_; uint8_t v_isSharedCheck_3972_; 
lean_dec(v_a_3903_);
lean_dec(v_a_3897_);
lean_dec(v_a_3891_);
lean_dec_ref(v___y_3875_);
lean_dec(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec(v___y_3871_);
lean_dec(v___y_3868_);
lean_dec_ref(v___y_3867_);
lean_dec(v___y_3865_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
lean_dec_ref(v___y_3859_);
lean_dec(v___y_3855_);
lean_dec(v___y_3852_);
lean_dec(v___y_3849_);
lean_dec_ref(v___y_3848_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_3965_ = lean_ctor_get(v___x_3908_, 0);
v_isSharedCheck_3972_ = !lean_is_exclusive(v___x_3908_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3967_ = v___x_3908_;
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
else
{
lean_inc(v_a_3965_);
lean_dec(v___x_3908_);
v___x_3967_ = lean_box(0);
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
v_resetjp_3966_:
{
lean_object* v___x_3970_; 
if (v_isShared_3968_ == 0)
{
v___x_3970_ = v___x_3967_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v_a_3965_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
return v___x_3970_;
}
}
}
}
else
{
lean_object* v_a_3973_; lean_object* v___x_3975_; uint8_t v_isShared_3976_; uint8_t v_isSharedCheck_3980_; 
lean_dec(v_a_3897_);
lean_dec(v_a_3891_);
lean_dec_ref(v___y_3875_);
lean_dec(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec(v___y_3871_);
lean_dec_ref(v___y_3869_);
lean_dec(v___y_3868_);
lean_dec_ref(v___y_3867_);
lean_dec(v___y_3866_);
lean_dec(v___y_3865_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
lean_dec_ref(v___y_3859_);
lean_dec(v___y_3855_);
lean_dec(v___y_3852_);
lean_dec(v___y_3849_);
lean_dec_ref(v___y_3848_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_3973_ = lean_ctor_get(v___x_3902_, 0);
v_isSharedCheck_3980_ = !lean_is_exclusive(v___x_3902_);
if (v_isSharedCheck_3980_ == 0)
{
v___x_3975_ = v___x_3902_;
v_isShared_3976_ = v_isSharedCheck_3980_;
goto v_resetjp_3974_;
}
else
{
lean_inc(v_a_3973_);
lean_dec(v___x_3902_);
v___x_3975_ = lean_box(0);
v_isShared_3976_ = v_isSharedCheck_3980_;
goto v_resetjp_3974_;
}
v_resetjp_3974_:
{
lean_object* v___x_3978_; 
if (v_isShared_3976_ == 0)
{
v___x_3978_ = v___x_3975_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v_a_3973_);
v___x_3978_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
return v___x_3978_;
}
}
}
}
else
{
lean_object* v_a_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3988_; 
lean_dec(v_a_3891_);
lean_dec_ref(v___y_3875_);
lean_dec(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec(v___y_3871_);
lean_dec_ref(v___y_3869_);
lean_dec(v___y_3868_);
lean_dec_ref(v___y_3867_);
lean_dec(v___y_3866_);
lean_dec(v___y_3865_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
lean_dec_ref(v___y_3859_);
lean_dec(v___y_3855_);
lean_dec(v___y_3852_);
lean_dec_ref(v___y_3851_);
lean_dec(v___y_3849_);
lean_dec_ref(v___y_3848_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_3981_ = lean_ctor_get(v___x_3896_, 0);
v_isSharedCheck_3988_ = !lean_is_exclusive(v___x_3896_);
if (v_isSharedCheck_3988_ == 0)
{
v___x_3983_ = v___x_3896_;
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_a_3981_);
lean_dec(v___x_3896_);
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
lean_object* v_a_3989_; lean_object* v___x_3991_; uint8_t v_isShared_3992_; uint8_t v_isSharedCheck_3996_; 
lean_dec_ref(v___y_3875_);
lean_dec(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec(v___y_3871_);
lean_dec_ref(v___y_3869_);
lean_dec(v___y_3868_);
lean_dec_ref(v___y_3867_);
lean_dec(v___y_3866_);
lean_dec(v___y_3865_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
lean_dec_ref(v___y_3859_);
lean_dec_ref(v___y_3857_);
lean_dec(v___y_3855_);
lean_dec(v___y_3852_);
lean_dec_ref(v___y_3851_);
lean_dec_ref(v___y_3850_);
lean_dec(v___y_3849_);
lean_dec_ref(v___y_3848_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_3989_ = lean_ctor_get(v___x_3890_, 0);
v_isSharedCheck_3996_ = !lean_is_exclusive(v___x_3890_);
if (v_isSharedCheck_3996_ == 0)
{
v___x_3991_ = v___x_3890_;
v_isShared_3992_ = v_isSharedCheck_3996_;
goto v_resetjp_3990_;
}
else
{
lean_inc(v_a_3989_);
lean_dec(v___x_3890_);
v___x_3991_ = lean_box(0);
v_isShared_3992_ = v_isSharedCheck_3996_;
goto v_resetjp_3990_;
}
v_resetjp_3990_:
{
lean_object* v___x_3994_; 
if (v_isShared_3992_ == 0)
{
v___x_3994_ = v___x_3991_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3995_; 
v_reuseFailAlloc_3995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3995_, 0, v_a_3989_);
v___x_3994_ = v_reuseFailAlloc_3995_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
return v___x_3994_;
}
}
}
}
v___jp_3997_:
{
if (lean_obj_tag(v___y_4015_) == 1)
{
lean_object* v_val_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; 
v_val_4036_ = lean_ctor_get(v___y_4015_, 0);
v___x_4037_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__3));
lean_inc(v___y_4002_);
v___x_4038_ = l_Lean_mkConst(v___x_4037_, v___y_4002_);
lean_inc_ref(v_type_3716_);
v___x_4039_ = l_Lean_Expr_app___override(v___x_4038_, v_type_3716_);
lean_inc(v_val_4036_);
v___x_4040_ = l_Lean_Meta_Sym_registerInstance___redArg(v___x_4039_, v_val_4036_, v___y_4031_);
if (lean_obj_tag(v___x_4040_) == 0)
{
lean_dec_ref_known(v___x_4040_, 1);
v___y_3848_ = v___y_3999_;
v___y_3849_ = v___y_3998_;
v___y_3850_ = v___y_4000_;
v___y_3851_ = v___y_4001_;
v___y_3852_ = v___y_4002_;
v___y_3853_ = v___y_4003_;
v___y_3854_ = v___y_4005_;
v___y_3855_ = v___y_4004_;
v___y_3856_ = v___y_4009_;
v___y_3857_ = v___y_4008_;
v___y_3858_ = v___y_4007_;
v___y_3859_ = v___y_4006_;
v___y_3860_ = v___y_4010_;
v___y_3861_ = v___y_4011_;
v___y_3862_ = v___y_4012_;
v___y_3863_ = v___y_4013_;
v___y_3864_ = v___y_4014_;
v___y_3865_ = v___y_4015_;
v___y_3866_ = v___y_4016_;
v___y_3867_ = v___y_4017_;
v___y_3868_ = v___y_4018_;
v___y_3869_ = v___y_4019_;
v___y_3870_ = v___y_4020_;
v___y_3871_ = v___y_4021_;
v___y_3872_ = v___y_4022_;
v___y_3873_ = v___y_4023_;
v___y_3874_ = v___y_4024_;
v___y_3875_ = v___y_4025_;
v___y_3876_ = v___y_4026_;
v___y_3877_ = v___y_4027_;
v___y_3878_ = v___y_4028_;
v___y_3879_ = v___y_4029_;
v___y_3880_ = v___y_4030_;
v___y_3881_ = v___y_4031_;
v___y_3882_ = v___y_4032_;
v___y_3883_ = v___y_4033_;
v___y_3884_ = v___y_4034_;
v___y_3885_ = v___y_4035_;
goto v___jp_3847_;
}
else
{
lean_object* v_a_4041_; lean_object* v___x_4043_; uint8_t v_isShared_4044_; uint8_t v_isSharedCheck_4048_; 
lean_dec_ref_known(v___y_4015_, 1);
lean_dec_ref(v___y_4025_);
lean_dec(v___y_4024_);
lean_dec(v___y_4023_);
lean_dec(v___y_4021_);
lean_dec_ref(v___y_4019_);
lean_dec(v___y_4018_);
lean_dec_ref(v___y_4017_);
lean_dec(v___y_4016_);
lean_dec(v___y_4013_);
lean_dec_ref(v___y_4012_);
lean_dec(v___y_4011_);
lean_dec_ref(v___y_4010_);
lean_dec_ref(v___y_4008_);
lean_dec_ref(v___y_4007_);
lean_dec_ref(v___y_4006_);
lean_dec(v___y_4004_);
lean_dec(v___y_4002_);
lean_dec_ref(v___y_4001_);
lean_dec_ref(v___y_4000_);
lean_dec_ref(v___y_3999_);
lean_dec(v___y_3998_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_4041_ = lean_ctor_get(v___x_4040_, 0);
v_isSharedCheck_4048_ = !lean_is_exclusive(v___x_4040_);
if (v_isSharedCheck_4048_ == 0)
{
v___x_4043_ = v___x_4040_;
v_isShared_4044_ = v_isSharedCheck_4048_;
goto v_resetjp_4042_;
}
else
{
lean_inc(v_a_4041_);
lean_dec(v___x_4040_);
v___x_4043_ = lean_box(0);
v_isShared_4044_ = v_isSharedCheck_4048_;
goto v_resetjp_4042_;
}
v_resetjp_4042_:
{
lean_object* v___x_4046_; 
if (v_isShared_4044_ == 0)
{
v___x_4046_ = v___x_4043_;
goto v_reusejp_4045_;
}
else
{
lean_object* v_reuseFailAlloc_4047_; 
v_reuseFailAlloc_4047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4047_, 0, v_a_4041_);
v___x_4046_ = v_reuseFailAlloc_4047_;
goto v_reusejp_4045_;
}
v_reusejp_4045_:
{
return v___x_4046_;
}
}
}
}
else
{
v___y_3848_ = v___y_3999_;
v___y_3849_ = v___y_3998_;
v___y_3850_ = v___y_4000_;
v___y_3851_ = v___y_4001_;
v___y_3852_ = v___y_4002_;
v___y_3853_ = v___y_4003_;
v___y_3854_ = v___y_4005_;
v___y_3855_ = v___y_4004_;
v___y_3856_ = v___y_4009_;
v___y_3857_ = v___y_4008_;
v___y_3858_ = v___y_4007_;
v___y_3859_ = v___y_4006_;
v___y_3860_ = v___y_4010_;
v___y_3861_ = v___y_4011_;
v___y_3862_ = v___y_4012_;
v___y_3863_ = v___y_4013_;
v___y_3864_ = v___y_4014_;
v___y_3865_ = v___y_4015_;
v___y_3866_ = v___y_4016_;
v___y_3867_ = v___y_4017_;
v___y_3868_ = v___y_4018_;
v___y_3869_ = v___y_4019_;
v___y_3870_ = v___y_4020_;
v___y_3871_ = v___y_4021_;
v___y_3872_ = v___y_4022_;
v___y_3873_ = v___y_4023_;
v___y_3874_ = v___y_4024_;
v___y_3875_ = v___y_4025_;
v___y_3876_ = v___y_4026_;
v___y_3877_ = v___y_4027_;
v___y_3878_ = v___y_4028_;
v___y_3879_ = v___y_4029_;
v___y_3880_ = v___y_4030_;
v___y_3881_ = v___y_4031_;
v___y_3882_ = v___y_4032_;
v___y_3883_ = v___y_4033_;
v___y_3884_ = v___y_4034_;
v___y_3885_ = v___y_4035_;
goto v___jp_3847_;
}
}
v___jp_4050_:
{
lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; 
v___x_4069_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__2));
lean_inc_n(v___y_4057_, 14);
v___x_4070_ = l_Lean_mkConst(v___x_4069_, v___y_4057_);
v___x_4071_ = l_Lean_mkAppB(v___x_4070_, v_base_3717_, v_natModuleInst_3718_);
v___x_4072_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__55));
v___x_4073_ = l_Lean_mkConst(v___x_4072_, v___y_4057_);
lean_inc_ref_n(v___x_4071_, 4);
lean_inc_ref_n(v_type_3716_, 14);
v___x_4074_ = l_Lean_mkAppB(v___x_4073_, v_type_3716_, v___x_4071_);
v___x_4075_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__58));
v___x_4076_ = l_Lean_mkConst(v___x_4075_, v___y_4057_);
lean_inc_ref_n(v___x_4074_, 2);
v___x_4077_ = l_Lean_mkAppB(v___x_4076_, v_type_3716_, v___x_4074_);
v___x_4078_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__3));
v___x_4079_ = l_Lean_mkConst(v___x_4078_, v___y_4057_);
lean_inc_ref(v___x_4077_);
v___x_4080_ = l_Lean_mkAppB(v___x_4079_, v_type_3716_, v___x_4077_);
v___x_4081_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__13));
v___x_4082_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__5));
v___x_4083_ = l_Lean_mkConst(v___x_4082_, v___y_4057_);
lean_inc_ref(v___x_4080_);
v___x_4084_ = l_Lean_mkAppB(v___x_4083_, v_type_3716_, v___x_4080_);
v___x_4085_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__34));
v___x_4086_ = l_Lean_mkConst(v___x_4085_, v___y_4057_);
v___x_4087_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__6));
v___x_4088_ = l_Lean_mkConst(v___x_4087_, v___y_4057_);
v___x_4089_ = l_Lean_mkAppB(v___x_4088_, v_type_3716_, v___x_4077_);
v___x_4090_ = l_Lean_mkAppB(v___x_4086_, v_type_3716_, v___x_4089_);
v___x_4091_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__37));
v___x_4092_ = l_Lean_mkConst(v___x_4091_, v___y_4057_);
v___x_4093_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__7));
v___x_4094_ = l_Lean_mkConst(v___x_4093_, v___y_4057_);
v___x_4095_ = l_Lean_mkAppB(v___x_4094_, v_type_3716_, v___x_4074_);
v___x_4096_ = l_Lean_mkAppB(v___x_4092_, v_type_3716_, v___x_4095_);
v___x_4097_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__8));
v___x_4098_ = l_Lean_mkConst(v___x_4097_, v___y_4057_);
v___x_4099_ = l_Lean_mkAppB(v___x_4098_, v_type_3716_, v___x_4074_);
v___x_4100_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__41));
v___x_4101_ = lean_unsigned_to_nat(0u);
v___x_4102_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_4103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4103_, 0, v___x_4102_);
lean_ctor_set(v___x_4103_, 1, v___y_4057_);
v___x_4104_ = l_Lean_mkConst(v___x_4100_, v___x_4103_);
v___x_4105_ = l_Lean_Int_mkType;
v___x_4106_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__9));
v___x_4107_ = l_Lean_mkConst(v___x_4106_, v___y_4057_);
v___x_4108_ = l_Lean_mkAppB(v___x_4107_, v_type_3716_, v___x_4071_);
lean_inc_ref(v___x_4104_);
v___x_4109_ = l_Lean_mkApp3(v___x_4104_, v___x_4105_, v_type_3716_, v___x_4108_);
v___x_4110_ = l_Lean_Nat_mkType;
v___x_4111_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__10));
v___x_4112_ = l_Lean_mkConst(v___x_4111_, v___y_4057_);
v___x_4113_ = l_Lean_mkAppB(v___x_4112_, v_type_3716_, v___x_4071_);
v___x_4114_ = l_Lean_mkApp3(v___x_4104_, v___x_4110_, v_type_3716_, v___x_4113_);
v___x_4115_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3));
v___x_4116_ = l_Lean_mkConst(v___x_4115_, v___y_4057_);
v___x_4117_ = l_Lean_Expr_app___override(v___x_4116_, v_type_3716_);
v___x_4118_ = l_Lean_Meta_Sym_registerInstance___redArg(v___x_4117_, v___x_4071_, v___y_4064_);
if (lean_obj_tag(v___x_4118_) == 0)
{
lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; 
lean_dec_ref_known(v___x_4118_, 1);
v___x_4119_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__14));
lean_inc(v___y_4057_);
v___x_4120_ = l_Lean_mkConst(v___x_4119_, v___y_4057_);
lean_inc_ref(v_type_3716_);
v___x_4121_ = l_Lean_Expr_app___override(v___x_4120_, v_type_3716_);
lean_inc_ref(v___x_4080_);
v___x_4122_ = l_Lean_Meta_Sym_registerInstance___redArg(v___x_4121_, v___x_4080_, v___y_4064_);
if (lean_obj_tag(v___x_4122_) == 0)
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; 
lean_dec_ref_known(v___x_4122_, 1);
v___x_4123_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__17));
v___x_4124_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__18));
lean_inc(v___y_4057_);
v___x_4125_ = l_Lean_mkConst(v___x_4124_, v___y_4057_);
v___x_4126_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__19, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__19_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__19);
lean_inc_ref(v_type_3716_);
v___x_4127_ = l_Lean_mkAppB(v___x_4125_, v_type_3716_, v___x_4126_);
lean_inc_ref(v___x_4084_);
v___x_4128_ = l_Lean_Meta_Sym_registerInstance___redArg(v___x_4127_, v___x_4084_, v___y_4064_);
if (lean_obj_tag(v___x_4128_) == 0)
{
lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; 
lean_dec_ref_known(v___x_4128_, 1);
v___x_4129_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__61));
v___x_4130_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__62));
lean_inc(v___y_4057_);
lean_inc_n(v_val_3735_, 2);
v___x_4131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4131_, 0, v_val_3735_);
lean_ctor_set(v___x_4131_, 1, v___y_4057_);
lean_inc_ref(v___x_4131_);
v___x_4132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4132_, 0, v_val_3735_);
lean_ctor_set(v___x_4132_, 1, v___x_4131_);
lean_inc_ref(v___x_4132_);
v___x_4133_ = l_Lean_mkConst(v___x_4130_, v___x_4132_);
lean_inc_ref_n(v_type_3716_, 3);
v___x_4134_ = l_Lean_mkApp3(v___x_4133_, v_type_3716_, v_type_3716_, v_type_3716_);
lean_inc_ref(v___x_4090_);
v___x_4135_ = l_Lean_Meta_Sym_registerInstance___redArg(v___x_4134_, v___x_4090_, v___y_4064_);
if (lean_obj_tag(v___x_4135_) == 0)
{
lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; 
lean_dec_ref_known(v___x_4135_, 1);
v___x_4136_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__22));
v___x_4137_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__23));
lean_inc_ref(v___x_4132_);
v___x_4138_ = l_Lean_mkConst(v___x_4137_, v___x_4132_);
lean_inc_ref_n(v_type_3716_, 3);
v___x_4139_ = l_Lean_mkApp3(v___x_4138_, v_type_3716_, v_type_3716_, v_type_3716_);
lean_inc_ref(v___x_4096_);
v___x_4140_ = l_Lean_Meta_Sym_registerInstance___redArg(v___x_4139_, v___x_4096_, v___y_4064_);
if (lean_obj_tag(v___x_4140_) == 0)
{
lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; 
lean_dec_ref_known(v___x_4140_, 1);
v___x_4141_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__26));
v___x_4142_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__27));
lean_inc(v___y_4057_);
v___x_4143_ = l_Lean_mkConst(v___x_4142_, v___y_4057_);
lean_inc_ref(v_type_3716_);
v___x_4144_ = l_Lean_Expr_app___override(v___x_4143_, v_type_3716_);
lean_inc_ref(v___x_4099_);
v___x_4145_ = l_Lean_Meta_Sym_registerInstance___redArg(v___x_4144_, v___x_4099_, v___y_4064_);
if (lean_obj_tag(v___x_4145_) == 0)
{
lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; 
lean_dec_ref_known(v___x_4145_, 1);
v___x_4146_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__0));
v___x_4147_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__1));
v___x_4148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4148_, 0, v___x_4102_);
lean_ctor_set(v___x_4148_, 1, v___x_4131_);
lean_inc_ref(v___x_4148_);
v___x_4149_ = l_Lean_mkConst(v___x_4147_, v___x_4148_);
lean_inc_ref_n(v_type_3716_, 2);
lean_inc_ref(v___x_4149_);
v___x_4150_ = l_Lean_mkApp3(v___x_4149_, v___x_4105_, v_type_3716_, v_type_3716_);
lean_inc_ref(v___x_4109_);
v___x_4151_ = l_Lean_Meta_Sym_registerInstance___redArg(v___x_4150_, v___x_4109_, v___y_4064_);
if (lean_obj_tag(v___x_4151_) == 0)
{
lean_object* v___x_4152_; lean_object* v___x_4153_; 
lean_dec_ref_known(v___x_4151_, 1);
lean_inc_ref_n(v_type_3716_, 2);
v___x_4152_ = l_Lean_mkApp3(v___x_4149_, v___x_4110_, v_type_3716_, v_type_3716_);
lean_inc_ref(v___x_4114_);
v___x_4153_ = l_Lean_Meta_Sym_registerInstance___redArg(v___x_4152_, v___x_4114_, v___y_4064_);
if (lean_obj_tag(v___x_4153_) == 0)
{
lean_dec_ref_known(v___x_4153_, 1);
if (lean_obj_tag(v___y_4053_) == 1)
{
lean_object* v_val_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; 
v_val_4154_ = lean_ctor_get(v___y_4053_, 0);
lean_inc(v___y_4057_);
v___x_4155_ = l_Lean_mkConst(v___x_4049_, v___y_4057_);
lean_inc_ref(v_type_3716_);
v___x_4156_ = l_Lean_Expr_app___override(v___x_4155_, v_type_3716_);
lean_inc(v_val_4154_);
v___x_4157_ = l_Lean_Meta_Sym_registerInstance___redArg(v___x_4156_, v_val_4154_, v___y_4064_);
if (lean_obj_tag(v___x_4157_) == 0)
{
lean_dec_ref_known(v___x_4157_, 1);
v___y_3998_ = v___x_4101_;
v___y_3999_ = v___x_4105_;
v___y_4000_ = v___x_4084_;
v___y_4001_ = v___x_4090_;
v___y_4002_ = v___y_4057_;
v___y_4003_ = v___x_4123_;
v___y_4004_ = v___y_4051_;
v___y_4005_ = v___x_4136_;
v___y_4006_ = v___x_4110_;
v___y_4007_ = v___x_4080_;
v___y_4008_ = v___x_4126_;
v___y_4009_ = v___x_4141_;
v___y_4010_ = v___x_4071_;
v___y_4011_ = v___y_4052_;
v___y_4012_ = v___x_4114_;
v___y_4013_ = v___x_4148_;
v___y_4014_ = v___x_4146_;
v___y_4015_ = v___y_4056_;
v___y_4016_ = v___x_4132_;
v___y_4017_ = v___x_4109_;
v___y_4018_ = v___y_4055_;
v___y_4019_ = v___x_4096_;
v___y_4020_ = v___x_4081_;
v___y_4021_ = v_noNatDivInstQ_x3f_4058_;
v___y_4022_ = v___x_4129_;
v___y_4023_ = v___y_4053_;
v___y_4024_ = v___y_4054_;
v___y_4025_ = v___x_4099_;
v___y_4026_ = v___y_4059_;
v___y_4027_ = v___y_4060_;
v___y_4028_ = v___y_4061_;
v___y_4029_ = v___y_4062_;
v___y_4030_ = v___y_4063_;
v___y_4031_ = v___y_4064_;
v___y_4032_ = v___y_4065_;
v___y_4033_ = v___y_4066_;
v___y_4034_ = v___y_4067_;
v___y_4035_ = v___y_4068_;
goto v___jp_3997_;
}
else
{
lean_object* v_a_4158_; lean_object* v___x_4160_; uint8_t v_isShared_4161_; uint8_t v_isSharedCheck_4165_; 
lean_dec_ref_known(v___y_4053_, 1);
lean_dec_ref_known(v___x_4148_, 2);
lean_dec_ref_known(v___x_4132_, 2);
lean_dec_ref(v___x_4114_);
lean_dec_ref(v___x_4109_);
lean_dec_ref(v___x_4099_);
lean_dec_ref(v___x_4096_);
lean_dec_ref(v___x_4090_);
lean_dec_ref(v___x_4084_);
lean_dec_ref(v___x_4080_);
lean_dec_ref(v___x_4071_);
lean_dec(v_noNatDivInstQ_x3f_4058_);
lean_dec(v___y_4057_);
lean_dec(v___y_4056_);
lean_dec(v___y_4055_);
lean_dec(v___y_4054_);
lean_dec(v___y_4052_);
lean_dec(v___y_4051_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_4158_ = lean_ctor_get(v___x_4157_, 0);
v_isSharedCheck_4165_ = !lean_is_exclusive(v___x_4157_);
if (v_isSharedCheck_4165_ == 0)
{
v___x_4160_ = v___x_4157_;
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
else
{
lean_inc(v_a_4158_);
lean_dec(v___x_4157_);
v___x_4160_ = lean_box(0);
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
v_resetjp_4159_:
{
lean_object* v___x_4163_; 
if (v_isShared_4161_ == 0)
{
v___x_4163_ = v___x_4160_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v_a_4158_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
return v___x_4163_;
}
}
}
}
else
{
v___y_3998_ = v___x_4101_;
v___y_3999_ = v___x_4105_;
v___y_4000_ = v___x_4084_;
v___y_4001_ = v___x_4090_;
v___y_4002_ = v___y_4057_;
v___y_4003_ = v___x_4123_;
v___y_4004_ = v___y_4051_;
v___y_4005_ = v___x_4136_;
v___y_4006_ = v___x_4110_;
v___y_4007_ = v___x_4080_;
v___y_4008_ = v___x_4126_;
v___y_4009_ = v___x_4141_;
v___y_4010_ = v___x_4071_;
v___y_4011_ = v___y_4052_;
v___y_4012_ = v___x_4114_;
v___y_4013_ = v___x_4148_;
v___y_4014_ = v___x_4146_;
v___y_4015_ = v___y_4056_;
v___y_4016_ = v___x_4132_;
v___y_4017_ = v___x_4109_;
v___y_4018_ = v___y_4055_;
v___y_4019_ = v___x_4096_;
v___y_4020_ = v___x_4081_;
v___y_4021_ = v_noNatDivInstQ_x3f_4058_;
v___y_4022_ = v___x_4129_;
v___y_4023_ = v___y_4053_;
v___y_4024_ = v___y_4054_;
v___y_4025_ = v___x_4099_;
v___y_4026_ = v___y_4059_;
v___y_4027_ = v___y_4060_;
v___y_4028_ = v___y_4061_;
v___y_4029_ = v___y_4062_;
v___y_4030_ = v___y_4063_;
v___y_4031_ = v___y_4064_;
v___y_4032_ = v___y_4065_;
v___y_4033_ = v___y_4066_;
v___y_4034_ = v___y_4067_;
v___y_4035_ = v___y_4068_;
goto v___jp_3997_;
}
}
else
{
lean_object* v_a_4166_; lean_object* v___x_4168_; uint8_t v_isShared_4169_; uint8_t v_isSharedCheck_4173_; 
lean_dec_ref_known(v___x_4148_, 2);
lean_dec_ref_known(v___x_4132_, 2);
lean_dec_ref(v___x_4114_);
lean_dec_ref(v___x_4109_);
lean_dec_ref(v___x_4099_);
lean_dec_ref(v___x_4096_);
lean_dec_ref(v___x_4090_);
lean_dec_ref(v___x_4084_);
lean_dec_ref(v___x_4080_);
lean_dec_ref(v___x_4071_);
lean_dec(v_noNatDivInstQ_x3f_4058_);
lean_dec(v___y_4057_);
lean_dec(v___y_4056_);
lean_dec(v___y_4055_);
lean_dec(v___y_4054_);
lean_dec(v___y_4053_);
lean_dec(v___y_4052_);
lean_dec(v___y_4051_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_4166_ = lean_ctor_get(v___x_4153_, 0);
v_isSharedCheck_4173_ = !lean_is_exclusive(v___x_4153_);
if (v_isSharedCheck_4173_ == 0)
{
v___x_4168_ = v___x_4153_;
v_isShared_4169_ = v_isSharedCheck_4173_;
goto v_resetjp_4167_;
}
else
{
lean_inc(v_a_4166_);
lean_dec(v___x_4153_);
v___x_4168_ = lean_box(0);
v_isShared_4169_ = v_isSharedCheck_4173_;
goto v_resetjp_4167_;
}
v_resetjp_4167_:
{
lean_object* v___x_4171_; 
if (v_isShared_4169_ == 0)
{
v___x_4171_ = v___x_4168_;
goto v_reusejp_4170_;
}
else
{
lean_object* v_reuseFailAlloc_4172_; 
v_reuseFailAlloc_4172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4172_, 0, v_a_4166_);
v___x_4171_ = v_reuseFailAlloc_4172_;
goto v_reusejp_4170_;
}
v_reusejp_4170_:
{
return v___x_4171_;
}
}
}
}
else
{
lean_object* v_a_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4181_; 
lean_dec_ref(v___x_4149_);
lean_dec_ref_known(v___x_4148_, 2);
lean_dec_ref_known(v___x_4132_, 2);
lean_dec_ref(v___x_4114_);
lean_dec_ref(v___x_4109_);
lean_dec_ref(v___x_4099_);
lean_dec_ref(v___x_4096_);
lean_dec_ref(v___x_4090_);
lean_dec_ref(v___x_4084_);
lean_dec_ref(v___x_4080_);
lean_dec_ref(v___x_4071_);
lean_dec(v_noNatDivInstQ_x3f_4058_);
lean_dec(v___y_4057_);
lean_dec(v___y_4056_);
lean_dec(v___y_4055_);
lean_dec(v___y_4054_);
lean_dec(v___y_4053_);
lean_dec(v___y_4052_);
lean_dec(v___y_4051_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_4174_ = lean_ctor_get(v___x_4151_, 0);
v_isSharedCheck_4181_ = !lean_is_exclusive(v___x_4151_);
if (v_isSharedCheck_4181_ == 0)
{
v___x_4176_ = v___x_4151_;
v_isShared_4177_ = v_isSharedCheck_4181_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_a_4174_);
lean_dec(v___x_4151_);
v___x_4176_ = lean_box(0);
v_isShared_4177_ = v_isSharedCheck_4181_;
goto v_resetjp_4175_;
}
v_resetjp_4175_:
{
lean_object* v___x_4179_; 
if (v_isShared_4177_ == 0)
{
v___x_4179_ = v___x_4176_;
goto v_reusejp_4178_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v_a_4174_);
v___x_4179_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4178_;
}
v_reusejp_4178_:
{
return v___x_4179_;
}
}
}
}
else
{
lean_object* v_a_4182_; lean_object* v___x_4184_; uint8_t v_isShared_4185_; uint8_t v_isSharedCheck_4189_; 
lean_dec_ref_known(v___x_4132_, 2);
lean_dec_ref_known(v___x_4131_, 2);
lean_dec_ref(v___x_4114_);
lean_dec_ref(v___x_4109_);
lean_dec_ref(v___x_4099_);
lean_dec_ref(v___x_4096_);
lean_dec_ref(v___x_4090_);
lean_dec_ref(v___x_4084_);
lean_dec_ref(v___x_4080_);
lean_dec_ref(v___x_4071_);
lean_dec(v_noNatDivInstQ_x3f_4058_);
lean_dec(v___y_4057_);
lean_dec(v___y_4056_);
lean_dec(v___y_4055_);
lean_dec(v___y_4054_);
lean_dec(v___y_4053_);
lean_dec(v___y_4052_);
lean_dec(v___y_4051_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_4182_ = lean_ctor_get(v___x_4145_, 0);
v_isSharedCheck_4189_ = !lean_is_exclusive(v___x_4145_);
if (v_isSharedCheck_4189_ == 0)
{
v___x_4184_ = v___x_4145_;
v_isShared_4185_ = v_isSharedCheck_4189_;
goto v_resetjp_4183_;
}
else
{
lean_inc(v_a_4182_);
lean_dec(v___x_4145_);
v___x_4184_ = lean_box(0);
v_isShared_4185_ = v_isSharedCheck_4189_;
goto v_resetjp_4183_;
}
v_resetjp_4183_:
{
lean_object* v___x_4187_; 
if (v_isShared_4185_ == 0)
{
v___x_4187_ = v___x_4184_;
goto v_reusejp_4186_;
}
else
{
lean_object* v_reuseFailAlloc_4188_; 
v_reuseFailAlloc_4188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4188_, 0, v_a_4182_);
v___x_4187_ = v_reuseFailAlloc_4188_;
goto v_reusejp_4186_;
}
v_reusejp_4186_:
{
return v___x_4187_;
}
}
}
}
else
{
lean_object* v_a_4190_; lean_object* v___x_4192_; uint8_t v_isShared_4193_; uint8_t v_isSharedCheck_4197_; 
lean_dec_ref_known(v___x_4132_, 2);
lean_dec_ref_known(v___x_4131_, 2);
lean_dec_ref(v___x_4114_);
lean_dec_ref(v___x_4109_);
lean_dec_ref(v___x_4099_);
lean_dec_ref(v___x_4096_);
lean_dec_ref(v___x_4090_);
lean_dec_ref(v___x_4084_);
lean_dec_ref(v___x_4080_);
lean_dec_ref(v___x_4071_);
lean_dec(v_noNatDivInstQ_x3f_4058_);
lean_dec(v___y_4057_);
lean_dec(v___y_4056_);
lean_dec(v___y_4055_);
lean_dec(v___y_4054_);
lean_dec(v___y_4053_);
lean_dec(v___y_4052_);
lean_dec(v___y_4051_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_4190_ = lean_ctor_get(v___x_4140_, 0);
v_isSharedCheck_4197_ = !lean_is_exclusive(v___x_4140_);
if (v_isSharedCheck_4197_ == 0)
{
v___x_4192_ = v___x_4140_;
v_isShared_4193_ = v_isSharedCheck_4197_;
goto v_resetjp_4191_;
}
else
{
lean_inc(v_a_4190_);
lean_dec(v___x_4140_);
v___x_4192_ = lean_box(0);
v_isShared_4193_ = v_isSharedCheck_4197_;
goto v_resetjp_4191_;
}
v_resetjp_4191_:
{
lean_object* v___x_4195_; 
if (v_isShared_4193_ == 0)
{
v___x_4195_ = v___x_4192_;
goto v_reusejp_4194_;
}
else
{
lean_object* v_reuseFailAlloc_4196_; 
v_reuseFailAlloc_4196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4196_, 0, v_a_4190_);
v___x_4195_ = v_reuseFailAlloc_4196_;
goto v_reusejp_4194_;
}
v_reusejp_4194_:
{
return v___x_4195_;
}
}
}
}
else
{
lean_object* v_a_4198_; lean_object* v___x_4200_; uint8_t v_isShared_4201_; uint8_t v_isSharedCheck_4205_; 
lean_dec_ref_known(v___x_4132_, 2);
lean_dec_ref_known(v___x_4131_, 2);
lean_dec_ref(v___x_4114_);
lean_dec_ref(v___x_4109_);
lean_dec_ref(v___x_4099_);
lean_dec_ref(v___x_4096_);
lean_dec_ref(v___x_4090_);
lean_dec_ref(v___x_4084_);
lean_dec_ref(v___x_4080_);
lean_dec_ref(v___x_4071_);
lean_dec(v_noNatDivInstQ_x3f_4058_);
lean_dec(v___y_4057_);
lean_dec(v___y_4056_);
lean_dec(v___y_4055_);
lean_dec(v___y_4054_);
lean_dec(v___y_4053_);
lean_dec(v___y_4052_);
lean_dec(v___y_4051_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_4198_ = lean_ctor_get(v___x_4135_, 0);
v_isSharedCheck_4205_ = !lean_is_exclusive(v___x_4135_);
if (v_isSharedCheck_4205_ == 0)
{
v___x_4200_ = v___x_4135_;
v_isShared_4201_ = v_isSharedCheck_4205_;
goto v_resetjp_4199_;
}
else
{
lean_inc(v_a_4198_);
lean_dec(v___x_4135_);
v___x_4200_ = lean_box(0);
v_isShared_4201_ = v_isSharedCheck_4205_;
goto v_resetjp_4199_;
}
v_resetjp_4199_:
{
lean_object* v___x_4203_; 
if (v_isShared_4201_ == 0)
{
v___x_4203_ = v___x_4200_;
goto v_reusejp_4202_;
}
else
{
lean_object* v_reuseFailAlloc_4204_; 
v_reuseFailAlloc_4204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4204_, 0, v_a_4198_);
v___x_4203_ = v_reuseFailAlloc_4204_;
goto v_reusejp_4202_;
}
v_reusejp_4202_:
{
return v___x_4203_;
}
}
}
}
else
{
lean_object* v_a_4206_; lean_object* v___x_4208_; uint8_t v_isShared_4209_; uint8_t v_isSharedCheck_4213_; 
lean_dec_ref(v___x_4114_);
lean_dec_ref(v___x_4109_);
lean_dec_ref(v___x_4099_);
lean_dec_ref(v___x_4096_);
lean_dec_ref(v___x_4090_);
lean_dec_ref(v___x_4084_);
lean_dec_ref(v___x_4080_);
lean_dec_ref(v___x_4071_);
lean_dec(v_noNatDivInstQ_x3f_4058_);
lean_dec(v___y_4057_);
lean_dec(v___y_4056_);
lean_dec(v___y_4055_);
lean_dec(v___y_4054_);
lean_dec(v___y_4053_);
lean_dec(v___y_4052_);
lean_dec(v___y_4051_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_4206_ = lean_ctor_get(v___x_4128_, 0);
v_isSharedCheck_4213_ = !lean_is_exclusive(v___x_4128_);
if (v_isSharedCheck_4213_ == 0)
{
v___x_4208_ = v___x_4128_;
v_isShared_4209_ = v_isSharedCheck_4213_;
goto v_resetjp_4207_;
}
else
{
lean_inc(v_a_4206_);
lean_dec(v___x_4128_);
v___x_4208_ = lean_box(0);
v_isShared_4209_ = v_isSharedCheck_4213_;
goto v_resetjp_4207_;
}
v_resetjp_4207_:
{
lean_object* v___x_4211_; 
if (v_isShared_4209_ == 0)
{
v___x_4211_ = v___x_4208_;
goto v_reusejp_4210_;
}
else
{
lean_object* v_reuseFailAlloc_4212_; 
v_reuseFailAlloc_4212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4212_, 0, v_a_4206_);
v___x_4211_ = v_reuseFailAlloc_4212_;
goto v_reusejp_4210_;
}
v_reusejp_4210_:
{
return v___x_4211_;
}
}
}
}
else
{
lean_object* v_a_4214_; lean_object* v___x_4216_; uint8_t v_isShared_4217_; uint8_t v_isSharedCheck_4221_; 
lean_dec_ref(v___x_4114_);
lean_dec_ref(v___x_4109_);
lean_dec_ref(v___x_4099_);
lean_dec_ref(v___x_4096_);
lean_dec_ref(v___x_4090_);
lean_dec_ref(v___x_4084_);
lean_dec_ref(v___x_4080_);
lean_dec_ref(v___x_4071_);
lean_dec(v_noNatDivInstQ_x3f_4058_);
lean_dec(v___y_4057_);
lean_dec(v___y_4056_);
lean_dec(v___y_4055_);
lean_dec(v___y_4054_);
lean_dec(v___y_4053_);
lean_dec(v___y_4052_);
lean_dec(v___y_4051_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_4214_ = lean_ctor_get(v___x_4122_, 0);
v_isSharedCheck_4221_ = !lean_is_exclusive(v___x_4122_);
if (v_isSharedCheck_4221_ == 0)
{
v___x_4216_ = v___x_4122_;
v_isShared_4217_ = v_isSharedCheck_4221_;
goto v_resetjp_4215_;
}
else
{
lean_inc(v_a_4214_);
lean_dec(v___x_4122_);
v___x_4216_ = lean_box(0);
v_isShared_4217_ = v_isSharedCheck_4221_;
goto v_resetjp_4215_;
}
v_resetjp_4215_:
{
lean_object* v___x_4219_; 
if (v_isShared_4217_ == 0)
{
v___x_4219_ = v___x_4216_;
goto v_reusejp_4218_;
}
else
{
lean_object* v_reuseFailAlloc_4220_; 
v_reuseFailAlloc_4220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4220_, 0, v_a_4214_);
v___x_4219_ = v_reuseFailAlloc_4220_;
goto v_reusejp_4218_;
}
v_reusejp_4218_:
{
return v___x_4219_;
}
}
}
}
else
{
lean_object* v_a_4222_; lean_object* v___x_4224_; uint8_t v_isShared_4225_; uint8_t v_isSharedCheck_4229_; 
lean_dec_ref(v___x_4114_);
lean_dec_ref(v___x_4109_);
lean_dec_ref(v___x_4099_);
lean_dec_ref(v___x_4096_);
lean_dec_ref(v___x_4090_);
lean_dec_ref(v___x_4084_);
lean_dec_ref(v___x_4080_);
lean_dec_ref(v___x_4071_);
lean_dec(v_noNatDivInstQ_x3f_4058_);
lean_dec(v___y_4057_);
lean_dec(v___y_4056_);
lean_dec(v___y_4055_);
lean_dec(v___y_4054_);
lean_dec(v___y_4053_);
lean_dec(v___y_4052_);
lean_dec(v___y_4051_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_type_3716_);
v_a_4222_ = lean_ctor_get(v___x_4118_, 0);
v_isSharedCheck_4229_ = !lean_is_exclusive(v___x_4118_);
if (v_isSharedCheck_4229_ == 0)
{
v___x_4224_ = v___x_4118_;
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
else
{
lean_inc(v_a_4222_);
lean_dec(v___x_4118_);
v___x_4224_ = lean_box(0);
v_isShared_4225_ = v_isSharedCheck_4229_;
goto v_resetjp_4223_;
}
v_resetjp_4223_:
{
lean_object* v___x_4227_; 
if (v_isShared_4225_ == 0)
{
v___x_4227_ = v___x_4224_;
goto v_reusejp_4226_;
}
else
{
lean_object* v_reuseFailAlloc_4228_; 
v_reuseFailAlloc_4228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4228_, 0, v_a_4222_);
v___x_4227_ = v_reuseFailAlloc_4228_;
goto v_reusejp_4226_;
}
v_reusejp_4226_:
{
return v___x_4227_;
}
}
}
}
v___jp_4230_:
{
lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; 
v___x_4247_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__12));
v___x_4248_ = lean_box(0);
lean_inc(v_val_3735_);
v___x_4249_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4249_, 0, v_val_3735_);
lean_ctor_set(v___x_4249_, 1, v___x_4248_);
lean_inc_ref(v___x_4249_);
v___x_4250_ = l_Lean_mkConst(v___x_4247_, v___x_4249_);
lean_inc_ref(v_base_3717_);
v___x_4251_ = l_Lean_Expr_app___override(v___x_4250_, v_base_3717_);
v___x_4252_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_4251_, v___y_4242_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_);
if (lean_obj_tag(v___x_4252_) == 0)
{
lean_object* v_a_4253_; 
v_a_4253_ = lean_ctor_get(v___x_4252_, 0);
lean_inc(v_a_4253_);
lean_dec_ref_known(v___x_4252_, 1);
if (lean_obj_tag(v_a_4253_) == 1)
{
lean_object* v_val_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; 
v_val_4254_ = lean_ctor_get(v_a_4253_, 0);
lean_inc(v_val_4254_);
lean_dec_ref_known(v_a_4253_, 1);
v___x_4255_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__14));
lean_inc_ref(v___x_4249_);
v___x_4256_ = l_Lean_mkConst(v___x_4255_, v___x_4249_);
lean_inc_ref(v_base_3717_);
v___x_4257_ = l_Lean_mkAppB(v___x_4256_, v_base_3717_, v_val_4254_);
v___x_4258_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_4257_, v___y_4242_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_);
if (lean_obj_tag(v___x_4258_) == 0)
{
lean_object* v_a_4259_; 
v_a_4259_ = lean_ctor_get(v___x_4258_, 0);
lean_inc(v_a_4259_);
lean_dec_ref_known(v___x_4258_, 1);
if (lean_obj_tag(v_a_4259_) == 1)
{
lean_object* v_val_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; 
v_val_4260_ = lean_ctor_get(v_a_4259_, 0);
lean_inc(v_val_4260_);
lean_dec_ref_known(v_a_4259_, 1);
v___x_4261_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3));
lean_inc_ref(v___x_4249_);
v___x_4262_ = l_Lean_mkConst(v___x_4261_, v___x_4249_);
lean_inc_ref(v_natModuleInst_3718_);
lean_inc_ref(v_base_3717_);
v___x_4263_ = l_Lean_mkAppB(v___x_4262_, v_base_3717_, v_natModuleInst_3718_);
v___x_4264_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_4263_, v___y_4242_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_);
if (lean_obj_tag(v___x_4264_) == 0)
{
lean_object* v_a_4265_; 
v_a_4265_ = lean_ctor_get(v___x_4264_, 0);
lean_inc(v_a_4265_);
lean_dec_ref_known(v___x_4264_, 1);
if (lean_obj_tag(v_a_4265_) == 1)
{
lean_object* v_val_4266_; lean_object* v___x_4268_; uint8_t v_isShared_4269_; uint8_t v_isSharedCheck_4276_; 
v_val_4266_ = lean_ctor_get(v_a_4265_, 0);
v_isSharedCheck_4276_ = !lean_is_exclusive(v_a_4265_);
if (v_isSharedCheck_4276_ == 0)
{
v___x_4268_ = v_a_4265_;
v_isShared_4269_ = v_isSharedCheck_4276_;
goto v_resetjp_4267_;
}
else
{
lean_inc(v_val_4266_);
lean_dec(v_a_4265_);
v___x_4268_ = lean_box(0);
v_isShared_4269_ = v_isSharedCheck_4276_;
goto v_resetjp_4267_;
}
v_resetjp_4267_:
{
lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4274_; 
v___x_4270_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__16));
lean_inc_ref(v___x_4249_);
v___x_4271_ = l_Lean_mkConst(v___x_4270_, v___x_4249_);
lean_inc_ref(v_natModuleInst_3718_);
lean_inc_ref(v_base_3717_);
v___x_4272_ = l_Lean_mkApp4(v___x_4271_, v_base_3717_, v_natModuleInst_3718_, v_val_4260_, v_val_4266_);
if (v_isShared_4269_ == 0)
{
lean_ctor_set(v___x_4268_, 0, v___x_4272_);
v___x_4274_ = v___x_4268_;
goto v_reusejp_4273_;
}
else
{
lean_object* v_reuseFailAlloc_4275_; 
v_reuseFailAlloc_4275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4275_, 0, v___x_4272_);
v___x_4274_ = v_reuseFailAlloc_4275_;
goto v_reusejp_4273_;
}
v_reusejp_4273_:
{
v___y_4051_ = v_isLinearInstQ_x3f_4236_;
v___y_4052_ = v___y_4231_;
v___y_4053_ = v___y_4232_;
v___y_4054_ = v___y_4233_;
v___y_4055_ = v___y_4234_;
v___y_4056_ = v___y_4235_;
v___y_4057_ = v___x_4249_;
v_noNatDivInstQ_x3f_4058_ = v___x_4274_;
v___y_4059_ = v___y_4237_;
v___y_4060_ = v___y_4238_;
v___y_4061_ = v___y_4239_;
v___y_4062_ = v___y_4240_;
v___y_4063_ = v___y_4241_;
v___y_4064_ = v___y_4242_;
v___y_4065_ = v___y_4243_;
v___y_4066_ = v___y_4244_;
v___y_4067_ = v___y_4245_;
v___y_4068_ = v___y_4246_;
goto v___jp_4050_;
}
}
}
else
{
lean_object* v___x_4277_; 
lean_dec(v_a_4265_);
lean_dec(v_val_4260_);
v___x_4277_ = lean_box(0);
v___y_4051_ = v_isLinearInstQ_x3f_4236_;
v___y_4052_ = v___y_4231_;
v___y_4053_ = v___y_4232_;
v___y_4054_ = v___y_4233_;
v___y_4055_ = v___y_4234_;
v___y_4056_ = v___y_4235_;
v___y_4057_ = v___x_4249_;
v_noNatDivInstQ_x3f_4058_ = v___x_4277_;
v___y_4059_ = v___y_4237_;
v___y_4060_ = v___y_4238_;
v___y_4061_ = v___y_4239_;
v___y_4062_ = v___y_4240_;
v___y_4063_ = v___y_4241_;
v___y_4064_ = v___y_4242_;
v___y_4065_ = v___y_4243_;
v___y_4066_ = v___y_4244_;
v___y_4067_ = v___y_4245_;
v___y_4068_ = v___y_4246_;
goto v___jp_4050_;
}
}
else
{
lean_object* v_a_4278_; lean_object* v___x_4280_; uint8_t v_isShared_4281_; uint8_t v_isSharedCheck_4285_; 
lean_dec(v_val_4260_);
lean_dec_ref_known(v___x_4249_, 2);
lean_dec(v_isLinearInstQ_x3f_4236_);
lean_dec(v___y_4235_);
lean_dec(v___y_4234_);
lean_dec(v___y_4233_);
lean_dec(v___y_4232_);
lean_dec(v___y_4231_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_natModuleInst_3718_);
lean_dec_ref(v_base_3717_);
lean_dec_ref(v_type_3716_);
v_a_4278_ = lean_ctor_get(v___x_4264_, 0);
v_isSharedCheck_4285_ = !lean_is_exclusive(v___x_4264_);
if (v_isSharedCheck_4285_ == 0)
{
v___x_4280_ = v___x_4264_;
v_isShared_4281_ = v_isSharedCheck_4285_;
goto v_resetjp_4279_;
}
else
{
lean_inc(v_a_4278_);
lean_dec(v___x_4264_);
v___x_4280_ = lean_box(0);
v_isShared_4281_ = v_isSharedCheck_4285_;
goto v_resetjp_4279_;
}
v_resetjp_4279_:
{
lean_object* v___x_4283_; 
if (v_isShared_4281_ == 0)
{
v___x_4283_ = v___x_4280_;
goto v_reusejp_4282_;
}
else
{
lean_object* v_reuseFailAlloc_4284_; 
v_reuseFailAlloc_4284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4284_, 0, v_a_4278_);
v___x_4283_ = v_reuseFailAlloc_4284_;
goto v_reusejp_4282_;
}
v_reusejp_4282_:
{
return v___x_4283_;
}
}
}
}
else
{
lean_object* v___x_4286_; 
lean_dec(v_a_4259_);
v___x_4286_ = lean_box(0);
v___y_4051_ = v_isLinearInstQ_x3f_4236_;
v___y_4052_ = v___y_4231_;
v___y_4053_ = v___y_4232_;
v___y_4054_ = v___y_4233_;
v___y_4055_ = v___y_4234_;
v___y_4056_ = v___y_4235_;
v___y_4057_ = v___x_4249_;
v_noNatDivInstQ_x3f_4058_ = v___x_4286_;
v___y_4059_ = v___y_4237_;
v___y_4060_ = v___y_4238_;
v___y_4061_ = v___y_4239_;
v___y_4062_ = v___y_4240_;
v___y_4063_ = v___y_4241_;
v___y_4064_ = v___y_4242_;
v___y_4065_ = v___y_4243_;
v___y_4066_ = v___y_4244_;
v___y_4067_ = v___y_4245_;
v___y_4068_ = v___y_4246_;
goto v___jp_4050_;
}
}
else
{
lean_object* v_a_4287_; lean_object* v___x_4289_; uint8_t v_isShared_4290_; uint8_t v_isSharedCheck_4294_; 
lean_dec_ref_known(v___x_4249_, 2);
lean_dec(v_isLinearInstQ_x3f_4236_);
lean_dec(v___y_4235_);
lean_dec(v___y_4234_);
lean_dec(v___y_4233_);
lean_dec(v___y_4232_);
lean_dec(v___y_4231_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_natModuleInst_3718_);
lean_dec_ref(v_base_3717_);
lean_dec_ref(v_type_3716_);
v_a_4287_ = lean_ctor_get(v___x_4258_, 0);
v_isSharedCheck_4294_ = !lean_is_exclusive(v___x_4258_);
if (v_isSharedCheck_4294_ == 0)
{
v___x_4289_ = v___x_4258_;
v_isShared_4290_ = v_isSharedCheck_4294_;
goto v_resetjp_4288_;
}
else
{
lean_inc(v_a_4287_);
lean_dec(v___x_4258_);
v___x_4289_ = lean_box(0);
v_isShared_4290_ = v_isSharedCheck_4294_;
goto v_resetjp_4288_;
}
v_resetjp_4288_:
{
lean_object* v___x_4292_; 
if (v_isShared_4290_ == 0)
{
v___x_4292_ = v___x_4289_;
goto v_reusejp_4291_;
}
else
{
lean_object* v_reuseFailAlloc_4293_; 
v_reuseFailAlloc_4293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4293_, 0, v_a_4287_);
v___x_4292_ = v_reuseFailAlloc_4293_;
goto v_reusejp_4291_;
}
v_reusejp_4291_:
{
return v___x_4292_;
}
}
}
}
else
{
lean_object* v___x_4295_; 
lean_dec(v_a_4253_);
v___x_4295_ = lean_box(0);
v___y_4051_ = v_isLinearInstQ_x3f_4236_;
v___y_4052_ = v___y_4231_;
v___y_4053_ = v___y_4232_;
v___y_4054_ = v___y_4233_;
v___y_4055_ = v___y_4234_;
v___y_4056_ = v___y_4235_;
v___y_4057_ = v___x_4249_;
v_noNatDivInstQ_x3f_4058_ = v___x_4295_;
v___y_4059_ = v___y_4237_;
v___y_4060_ = v___y_4238_;
v___y_4061_ = v___y_4239_;
v___y_4062_ = v___y_4240_;
v___y_4063_ = v___y_4241_;
v___y_4064_ = v___y_4242_;
v___y_4065_ = v___y_4243_;
v___y_4066_ = v___y_4244_;
v___y_4067_ = v___y_4245_;
v___y_4068_ = v___y_4246_;
goto v___jp_4050_;
}
}
else
{
lean_object* v_a_4296_; lean_object* v___x_4298_; uint8_t v_isShared_4299_; uint8_t v_isSharedCheck_4303_; 
lean_dec_ref_known(v___x_4249_, 2);
lean_dec(v_isLinearInstQ_x3f_4236_);
lean_dec(v___y_4235_);
lean_dec(v___y_4234_);
lean_dec(v___y_4233_);
lean_dec(v___y_4232_);
lean_dec(v___y_4231_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_natModuleInst_3718_);
lean_dec_ref(v_base_3717_);
lean_dec_ref(v_type_3716_);
v_a_4296_ = lean_ctor_get(v___x_4252_, 0);
v_isSharedCheck_4303_ = !lean_is_exclusive(v___x_4252_);
if (v_isSharedCheck_4303_ == 0)
{
v___x_4298_ = v___x_4252_;
v_isShared_4299_ = v_isSharedCheck_4303_;
goto v_resetjp_4297_;
}
else
{
lean_inc(v_a_4296_);
lean_dec(v___x_4252_);
v___x_4298_ = lean_box(0);
v_isShared_4299_ = v_isSharedCheck_4303_;
goto v_resetjp_4297_;
}
v_resetjp_4297_:
{
lean_object* v___x_4301_; 
if (v_isShared_4299_ == 0)
{
v___x_4301_ = v___x_4298_;
goto v_reusejp_4300_;
}
else
{
lean_object* v_reuseFailAlloc_4302_; 
v_reuseFailAlloc_4302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4302_, 0, v_a_4296_);
v___x_4301_ = v_reuseFailAlloc_4302_;
goto v_reusejp_4300_;
}
v_reusejp_4300_:
{
return v___x_4301_;
}
}
}
}
}
}
else
{
lean_object* v___x_4464_; lean_object* v___x_4466_; 
lean_dec(v_a_3731_);
lean_dec_ref(v_natModuleInst_3718_);
lean_dec_ref(v_base_3717_);
lean_dec_ref(v_type_3716_);
v___x_4464_ = lean_box(0);
if (v_isShared_3734_ == 0)
{
lean_ctor_set(v___x_3733_, 0, v___x_4464_);
v___x_4466_ = v___x_3733_;
goto v_reusejp_4465_;
}
else
{
lean_object* v_reuseFailAlloc_4467_; 
v_reuseFailAlloc_4467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4467_, 0, v___x_4464_);
v___x_4466_ = v_reuseFailAlloc_4467_;
goto v_reusejp_4465_;
}
v_reusejp_4465_:
{
return v___x_4466_;
}
}
}
}
else
{
lean_object* v_a_4469_; lean_object* v___x_4471_; uint8_t v_isShared_4472_; uint8_t v_isSharedCheck_4476_; 
lean_dec_ref(v_natModuleInst_3718_);
lean_dec_ref(v_base_3717_);
lean_dec_ref(v_type_3716_);
v_a_4469_ = lean_ctor_get(v___x_3730_, 0);
v_isSharedCheck_4476_ = !lean_is_exclusive(v___x_3730_);
if (v_isSharedCheck_4476_ == 0)
{
v___x_4471_ = v___x_3730_;
v_isShared_4472_ = v_isSharedCheck_4476_;
goto v_resetjp_4470_;
}
else
{
lean_inc(v_a_4469_);
lean_dec(v___x_3730_);
v___x_4471_ = lean_box(0);
v_isShared_4472_ = v_isSharedCheck_4476_;
goto v_resetjp_4470_;
}
v_resetjp_4470_:
{
lean_object* v___x_4474_; 
if (v_isShared_4472_ == 0)
{
v___x_4474_ = v___x_4471_;
goto v_reusejp_4473_;
}
else
{
lean_object* v_reuseFailAlloc_4475_; 
v_reuseFailAlloc_4475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4475_, 0, v_a_4469_);
v___x_4474_ = v_reuseFailAlloc_4475_;
goto v_reusejp_4473_;
}
v_reusejp_4473_:
{
return v___x_4474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___boxed(lean_object* v_type_4477_, lean_object* v_base_4478_, lean_object* v_natModuleInst_4479_, lean_object* v_a_4480_, lean_object* v_a_4481_, lean_object* v_a_4482_, lean_object* v_a_4483_, lean_object* v_a_4484_, lean_object* v_a_4485_, lean_object* v_a_4486_, lean_object* v_a_4487_, lean_object* v_a_4488_, lean_object* v_a_4489_, lean_object* v_a_4490_){
_start:
{
lean_object* v_res_4491_; 
v_res_4491_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f(v_type_4477_, v_base_4478_, v_natModuleInst_4479_, v_a_4480_, v_a_4481_, v_a_4482_, v_a_4483_, v_a_4484_, v_a_4485_, v_a_4486_, v_a_4487_, v_a_4488_, v_a_4489_);
lean_dec(v_a_4489_);
lean_dec_ref(v_a_4488_);
lean_dec(v_a_4487_);
lean_dec_ref(v_a_4486_);
lean_dec(v_a_4485_);
lean_dec_ref(v_a_4484_);
lean_dec(v_a_4483_);
lean_dec_ref(v_a_4482_);
lean_dec(v_a_4481_);
lean_dec(v_a_4480_);
return v_res_4491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f(lean_object* v_type_4499_, lean_object* v_a_4500_, lean_object* v_a_4501_, lean_object* v_a_4502_, lean_object* v_a_4503_, lean_object* v_a_4504_, lean_object* v_a_4505_, lean_object* v_a_4506_, lean_object* v_a_4507_, lean_object* v_a_4508_, lean_object* v_a_4509_){
_start:
{
lean_object* v___x_4511_; lean_object* v___x_4512_; uint8_t v___x_4513_; 
v___x_4511_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1));
v___x_4512_ = lean_unsigned_to_nat(2u);
v___x_4513_ = l_Lean_Expr_isAppOfArity(v_type_4499_, v___x_4511_, v___x_4512_);
if (v___x_4513_ == 0)
{
lean_object* v___x_4514_; 
v___x_4514_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f(v_type_4499_, v_a_4500_, v_a_4501_, v_a_4502_, v_a_4503_, v_a_4504_, v_a_4505_, v_a_4506_, v_a_4507_, v_a_4508_, v_a_4509_);
return v___x_4514_;
}
else
{
lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; 
v___x_4515_ = l_Lean_Expr_appFn_x21(v_type_4499_);
v___x_4516_ = l_Lean_Expr_appArg_x21(v___x_4515_);
lean_dec_ref(v___x_4515_);
v___x_4517_ = l_Lean_Expr_appArg_x21(v_type_4499_);
v___x_4518_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f(v_type_4499_, v___x_4516_, v___x_4517_, v_a_4500_, v_a_4501_, v_a_4502_, v_a_4503_, v_a_4504_, v_a_4505_, v_a_4506_, v_a_4507_, v_a_4508_, v_a_4509_);
return v___x_4518_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___boxed(lean_object* v_type_4519_, lean_object* v_a_4520_, lean_object* v_a_4521_, lean_object* v_a_4522_, lean_object* v_a_4523_, lean_object* v_a_4524_, lean_object* v_a_4525_, lean_object* v_a_4526_, lean_object* v_a_4527_, lean_object* v_a_4528_, lean_object* v_a_4529_, lean_object* v_a_4530_){
_start:
{
lean_object* v_res_4531_; 
v_res_4531_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f(v_type_4519_, v_a_4520_, v_a_4521_, v_a_4522_, v_a_4523_, v_a_4524_, v_a_4525_, v_a_4526_, v_a_4527_, v_a_4528_, v_a_4529_);
lean_dec(v_a_4529_);
lean_dec_ref(v_a_4528_);
lean_dec(v_a_4527_);
lean_dec_ref(v_a_4526_);
lean_dec(v_a_4525_);
lean_dec_ref(v_a_4524_);
lean_dec(v_a_4523_);
lean_dec_ref(v_a_4522_);
lean_dec(v_a_4521_);
lean_dec(v_a_4520_);
return v_res_4531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___lam__0(lean_object* v_type_4532_, lean_object* v_a_4533_, lean_object* v_s_4534_){
_start:
{
lean_object* v_structs_4535_; lean_object* v_typeIdOf_4536_; lean_object* v_exprToStructId_4537_; lean_object* v_exprToStructIdEntries_4538_; lean_object* v_forbiddenNatModules_4539_; lean_object* v_natStructs_4540_; lean_object* v_natTypeIdOf_4541_; lean_object* v_exprToNatStructId_4542_; lean_object* v___x_4544_; uint8_t v_isShared_4545_; uint8_t v_isSharedCheck_4550_; 
v_structs_4535_ = lean_ctor_get(v_s_4534_, 0);
v_typeIdOf_4536_ = lean_ctor_get(v_s_4534_, 1);
v_exprToStructId_4537_ = lean_ctor_get(v_s_4534_, 2);
v_exprToStructIdEntries_4538_ = lean_ctor_get(v_s_4534_, 3);
v_forbiddenNatModules_4539_ = lean_ctor_get(v_s_4534_, 4);
v_natStructs_4540_ = lean_ctor_get(v_s_4534_, 5);
v_natTypeIdOf_4541_ = lean_ctor_get(v_s_4534_, 6);
v_exprToNatStructId_4542_ = lean_ctor_get(v_s_4534_, 7);
v_isSharedCheck_4550_ = !lean_is_exclusive(v_s_4534_);
if (v_isSharedCheck_4550_ == 0)
{
v___x_4544_ = v_s_4534_;
v_isShared_4545_ = v_isSharedCheck_4550_;
goto v_resetjp_4543_;
}
else
{
lean_inc(v_exprToNatStructId_4542_);
lean_inc(v_natTypeIdOf_4541_);
lean_inc(v_natStructs_4540_);
lean_inc(v_forbiddenNatModules_4539_);
lean_inc(v_exprToStructIdEntries_4538_);
lean_inc(v_exprToStructId_4537_);
lean_inc(v_typeIdOf_4536_);
lean_inc(v_structs_4535_);
lean_dec(v_s_4534_);
v___x_4544_ = lean_box(0);
v_isShared_4545_ = v_isSharedCheck_4550_;
goto v_resetjp_4543_;
}
v_resetjp_4543_:
{
lean_object* v___x_4546_; lean_object* v___x_4548_; 
v___x_4546_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0___redArg(v_typeIdOf_4536_, v_type_4532_, v_a_4533_);
if (v_isShared_4545_ == 0)
{
lean_ctor_set(v___x_4544_, 1, v___x_4546_);
v___x_4548_ = v___x_4544_;
goto v_reusejp_4547_;
}
else
{
lean_object* v_reuseFailAlloc_4549_; 
v_reuseFailAlloc_4549_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4549_, 0, v_structs_4535_);
lean_ctor_set(v_reuseFailAlloc_4549_, 1, v___x_4546_);
lean_ctor_set(v_reuseFailAlloc_4549_, 2, v_exprToStructId_4537_);
lean_ctor_set(v_reuseFailAlloc_4549_, 3, v_exprToStructIdEntries_4538_);
lean_ctor_set(v_reuseFailAlloc_4549_, 4, v_forbiddenNatModules_4539_);
lean_ctor_set(v_reuseFailAlloc_4549_, 5, v_natStructs_4540_);
lean_ctor_set(v_reuseFailAlloc_4549_, 6, v_natTypeIdOf_4541_);
lean_ctor_set(v_reuseFailAlloc_4549_, 7, v_exprToNatStructId_4542_);
v___x_4548_ = v_reuseFailAlloc_4549_;
goto v_reusejp_4547_;
}
v_reusejp_4547_:
{
return v___x_4548_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_4551_, lean_object* v_vals_4552_, lean_object* v_i_4553_, lean_object* v_k_4554_){
_start:
{
lean_object* v___x_4555_; uint8_t v___x_4556_; 
v___x_4555_ = lean_array_get_size(v_keys_4551_);
v___x_4556_ = lean_nat_dec_lt(v_i_4553_, v___x_4555_);
if (v___x_4556_ == 0)
{
lean_object* v___x_4557_; 
lean_dec(v_i_4553_);
v___x_4557_ = lean_box(0);
return v___x_4557_;
}
else
{
lean_object* v_k_x27_4558_; size_t v___x_4559_; size_t v___x_4560_; uint8_t v___x_4561_; 
v_k_x27_4558_ = lean_array_fget_borrowed(v_keys_4551_, v_i_4553_);
v___x_4559_ = lean_ptr_addr(v_k_4554_);
v___x_4560_ = lean_ptr_addr(v_k_x27_4558_);
v___x_4561_ = lean_usize_dec_eq(v___x_4559_, v___x_4560_);
if (v___x_4561_ == 0)
{
lean_object* v___x_4562_; lean_object* v___x_4563_; 
v___x_4562_ = lean_unsigned_to_nat(1u);
v___x_4563_ = lean_nat_add(v_i_4553_, v___x_4562_);
lean_dec(v_i_4553_);
v_i_4553_ = v___x_4563_;
goto _start;
}
else
{
lean_object* v___x_4565_; lean_object* v___x_4566_; 
v___x_4565_ = lean_array_fget_borrowed(v_vals_4552_, v_i_4553_);
lean_dec(v_i_4553_);
lean_inc(v___x_4565_);
v___x_4566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4566_, 0, v___x_4565_);
return v___x_4566_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_4567_, lean_object* v_vals_4568_, lean_object* v_i_4569_, lean_object* v_k_4570_){
_start:
{
lean_object* v_res_4571_; 
v_res_4571_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_4567_, v_vals_4568_, v_i_4569_, v_k_4570_);
lean_dec_ref(v_k_4570_);
lean_dec_ref(v_vals_4568_);
lean_dec_ref(v_keys_4567_);
return v_res_4571_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(lean_object* v_x_4572_, size_t v_x_4573_, lean_object* v_x_4574_){
_start:
{
if (lean_obj_tag(v_x_4572_) == 0)
{
lean_object* v_es_4575_; lean_object* v___x_4576_; size_t v___x_4577_; size_t v___x_4578_; lean_object* v_j_4579_; lean_object* v___x_4580_; 
v_es_4575_ = lean_ctor_get(v_x_4572_, 0);
v___x_4576_ = lean_box(2);
v___x_4577_ = ((size_t)31ULL);
v___x_4578_ = lean_usize_land(v_x_4573_, v___x_4577_);
v_j_4579_ = lean_usize_to_nat(v___x_4578_);
v___x_4580_ = lean_array_get_borrowed(v___x_4576_, v_es_4575_, v_j_4579_);
lean_dec(v_j_4579_);
switch(lean_obj_tag(v___x_4580_))
{
case 0:
{
lean_object* v_key_4581_; lean_object* v_val_4582_; size_t v___x_4583_; size_t v___x_4584_; uint8_t v___x_4585_; 
v_key_4581_ = lean_ctor_get(v___x_4580_, 0);
v_val_4582_ = lean_ctor_get(v___x_4580_, 1);
v___x_4583_ = lean_ptr_addr(v_x_4574_);
v___x_4584_ = lean_ptr_addr(v_key_4581_);
v___x_4585_ = lean_usize_dec_eq(v___x_4583_, v___x_4584_);
if (v___x_4585_ == 0)
{
lean_object* v___x_4586_; 
v___x_4586_ = lean_box(0);
return v___x_4586_;
}
else
{
lean_object* v___x_4587_; 
lean_inc(v_val_4582_);
v___x_4587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4587_, 0, v_val_4582_);
return v___x_4587_;
}
}
case 1:
{
lean_object* v_node_4588_; size_t v___x_4589_; size_t v___x_4590_; 
v_node_4588_ = lean_ctor_get(v___x_4580_, 0);
v___x_4589_ = ((size_t)5ULL);
v___x_4590_ = lean_usize_shift_right(v_x_4573_, v___x_4589_);
v_x_4572_ = v_node_4588_;
v_x_4573_ = v___x_4590_;
goto _start;
}
default: 
{
lean_object* v___x_4592_; 
v___x_4592_ = lean_box(0);
return v___x_4592_;
}
}
}
else
{
lean_object* v_ks_4593_; lean_object* v_vs_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; 
v_ks_4593_ = lean_ctor_get(v_x_4572_, 0);
v_vs_4594_ = lean_ctor_get(v_x_4572_, 1);
v___x_4595_ = lean_unsigned_to_nat(0u);
v___x_4596_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(v_ks_4593_, v_vs_4594_, v___x_4595_, v_x_4574_);
return v___x_4596_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_4597_, lean_object* v_x_4598_, lean_object* v_x_4599_){
_start:
{
size_t v_x_7538__boxed_4600_; lean_object* v_res_4601_; 
v_x_7538__boxed_4600_ = lean_unbox_usize(v_x_4598_);
lean_dec(v_x_4598_);
v_res_4601_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(v_x_4597_, v_x_7538__boxed_4600_, v_x_4599_);
lean_dec_ref(v_x_4599_);
lean_dec_ref(v_x_4597_);
return v_res_4601_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(lean_object* v_x_4602_, lean_object* v_x_4603_){
_start:
{
size_t v___x_4604_; size_t v___x_4605_; size_t v___x_4606_; uint64_t v___x_4607_; size_t v___x_4608_; lean_object* v___x_4609_; 
v___x_4604_ = lean_ptr_addr(v_x_4603_);
v___x_4605_ = ((size_t)3ULL);
v___x_4606_ = lean_usize_shift_right(v___x_4604_, v___x_4605_);
v___x_4607_ = lean_usize_to_uint64(v___x_4606_);
v___x_4608_ = lean_uint64_to_usize(v___x_4607_);
v___x_4609_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(v_x_4602_, v___x_4608_, v_x_4603_);
return v___x_4609_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg___boxed(lean_object* v_x_4610_, lean_object* v_x_4611_){
_start:
{
lean_object* v_res_4612_; 
v_res_4612_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(v_x_4610_, v_x_4611_);
lean_dec_ref(v_x_4611_);
lean_dec_ref(v_x_4610_);
return v_res_4612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(lean_object* v_type_4613_, lean_object* v_a_4614_, lean_object* v_a_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_, lean_object* v_a_4618_, lean_object* v_a_4619_, lean_object* v_a_4620_, lean_object* v_a_4621_, lean_object* v_a_4622_, lean_object* v_a_4623_){
_start:
{
lean_object* v___x_4625_; 
v___x_4625_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_4616_);
if (lean_obj_tag(v___x_4625_) == 0)
{
lean_object* v_a_4626_; lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4695_; 
v_a_4626_ = lean_ctor_get(v___x_4625_, 0);
v_isSharedCheck_4695_ = !lean_is_exclusive(v___x_4625_);
if (v_isSharedCheck_4695_ == 0)
{
v___x_4628_ = v___x_4625_;
v_isShared_4629_ = v_isSharedCheck_4695_;
goto v_resetjp_4627_;
}
else
{
lean_inc(v_a_4626_);
lean_dec(v___x_4625_);
v___x_4628_ = lean_box(0);
v_isShared_4629_ = v_isSharedCheck_4695_;
goto v_resetjp_4627_;
}
v_resetjp_4627_:
{
uint8_t v_linarith_4630_; 
v_linarith_4630_ = lean_ctor_get_uint8(v_a_4626_, sizeof(void*)*18 + 23);
lean_dec(v_a_4626_);
if (v_linarith_4630_ == 0)
{
lean_object* v___x_4631_; lean_object* v___x_4633_; 
lean_dec_ref(v_type_4613_);
v___x_4631_ = lean_box(0);
if (v_isShared_4629_ == 0)
{
lean_ctor_set(v___x_4628_, 0, v___x_4631_);
v___x_4633_ = v___x_4628_;
goto v_reusejp_4632_;
}
else
{
lean_object* v_reuseFailAlloc_4634_; 
v_reuseFailAlloc_4634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4634_, 0, v___x_4631_);
v___x_4633_ = v_reuseFailAlloc_4634_;
goto v_reusejp_4632_;
}
v_reusejp_4632_:
{
return v___x_4633_;
}
}
else
{
lean_object* v___x_4635_; 
lean_del_object(v___x_4628_);
lean_inc_ref(v_type_4613_);
v___x_4635_ = l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType___redArg(v_type_4613_, v_a_4616_, v_a_4621_);
if (lean_obj_tag(v___x_4635_) == 0)
{
lean_object* v_a_4636_; lean_object* v___x_4638_; uint8_t v_isShared_4639_; uint8_t v_isSharedCheck_4686_; 
v_a_4636_ = lean_ctor_get(v___x_4635_, 0);
v_isSharedCheck_4686_ = !lean_is_exclusive(v___x_4635_);
if (v_isSharedCheck_4686_ == 0)
{
v___x_4638_ = v___x_4635_;
v_isShared_4639_ = v_isSharedCheck_4686_;
goto v_resetjp_4637_;
}
else
{
lean_inc(v_a_4636_);
lean_dec(v___x_4635_);
v___x_4638_ = lean_box(0);
v_isShared_4639_ = v_isSharedCheck_4686_;
goto v_resetjp_4637_;
}
v_resetjp_4637_:
{
uint8_t v___x_4640_; 
v___x_4640_ = lean_unbox(v_a_4636_);
lean_dec(v_a_4636_);
if (v___x_4640_ == 0)
{
lean_object* v___x_4641_; 
lean_del_object(v___x_4638_);
v___x_4641_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v_a_4614_, v_a_4622_);
if (lean_obj_tag(v___x_4641_) == 0)
{
lean_object* v_a_4642_; lean_object* v___x_4644_; uint8_t v_isShared_4645_; uint8_t v_isSharedCheck_4673_; 
v_a_4642_ = lean_ctor_get(v___x_4641_, 0);
v_isSharedCheck_4673_ = !lean_is_exclusive(v___x_4641_);
if (v_isSharedCheck_4673_ == 0)
{
v___x_4644_ = v___x_4641_;
v_isShared_4645_ = v_isSharedCheck_4673_;
goto v_resetjp_4643_;
}
else
{
lean_inc(v_a_4642_);
lean_dec(v___x_4641_);
v___x_4644_ = lean_box(0);
v_isShared_4645_ = v_isSharedCheck_4673_;
goto v_resetjp_4643_;
}
v_resetjp_4643_:
{
lean_object* v_typeIdOf_4646_; lean_object* v___x_4647_; 
v_typeIdOf_4646_ = lean_ctor_get(v_a_4642_, 1);
lean_inc_ref(v_typeIdOf_4646_);
lean_dec(v_a_4642_);
v___x_4647_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(v_typeIdOf_4646_, v_type_4613_);
lean_dec_ref(v_typeIdOf_4646_);
if (lean_obj_tag(v___x_4647_) == 1)
{
lean_object* v_val_4648_; lean_object* v___x_4650_; 
lean_dec_ref(v_type_4613_);
v_val_4648_ = lean_ctor_get(v___x_4647_, 0);
lean_inc(v_val_4648_);
lean_dec_ref_known(v___x_4647_, 1);
if (v_isShared_4645_ == 0)
{
lean_ctor_set(v___x_4644_, 0, v_val_4648_);
v___x_4650_ = v___x_4644_;
goto v_reusejp_4649_;
}
else
{
lean_object* v_reuseFailAlloc_4651_; 
v_reuseFailAlloc_4651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4651_, 0, v_val_4648_);
v___x_4650_ = v_reuseFailAlloc_4651_;
goto v_reusejp_4649_;
}
v_reusejp_4649_:
{
return v___x_4650_;
}
}
else
{
lean_object* v___x_4652_; 
lean_dec(v___x_4647_);
lean_del_object(v___x_4644_);
lean_inc_ref(v_type_4613_);
v___x_4652_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f(v_type_4613_, v_a_4614_, v_a_4615_, v_a_4616_, v_a_4617_, v_a_4618_, v_a_4619_, v_a_4620_, v_a_4621_, v_a_4622_, v_a_4623_);
if (lean_obj_tag(v___x_4652_) == 0)
{
lean_object* v_a_4653_; lean_object* v___f_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; 
v_a_4653_ = lean_ctor_get(v___x_4652_, 0);
lean_inc_n(v_a_4653_, 2);
lean_dec_ref_known(v___x_4652_, 1);
v___f_4654_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___lam__0), 3, 2);
lean_closure_set(v___f_4654_, 0, v_type_4613_);
lean_closure_set(v___f_4654_, 1, v_a_4653_);
v___x_4655_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_4656_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_4655_, v___f_4654_, v_a_4614_);
if (lean_obj_tag(v___x_4656_) == 0)
{
lean_object* v___x_4658_; uint8_t v_isShared_4659_; uint8_t v_isSharedCheck_4663_; 
v_isSharedCheck_4663_ = !lean_is_exclusive(v___x_4656_);
if (v_isSharedCheck_4663_ == 0)
{
lean_object* v_unused_4664_; 
v_unused_4664_ = lean_ctor_get(v___x_4656_, 0);
lean_dec(v_unused_4664_);
v___x_4658_ = v___x_4656_;
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
else
{
lean_dec(v___x_4656_);
v___x_4658_ = lean_box(0);
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
v_resetjp_4657_:
{
lean_object* v___x_4661_; 
if (v_isShared_4659_ == 0)
{
lean_ctor_set(v___x_4658_, 0, v_a_4653_);
v___x_4661_ = v___x_4658_;
goto v_reusejp_4660_;
}
else
{
lean_object* v_reuseFailAlloc_4662_; 
v_reuseFailAlloc_4662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4662_, 0, v_a_4653_);
v___x_4661_ = v_reuseFailAlloc_4662_;
goto v_reusejp_4660_;
}
v_reusejp_4660_:
{
return v___x_4661_;
}
}
}
else
{
lean_object* v_a_4665_; lean_object* v___x_4667_; uint8_t v_isShared_4668_; uint8_t v_isSharedCheck_4672_; 
lean_dec(v_a_4653_);
v_a_4665_ = lean_ctor_get(v___x_4656_, 0);
v_isSharedCheck_4672_ = !lean_is_exclusive(v___x_4656_);
if (v_isSharedCheck_4672_ == 0)
{
v___x_4667_ = v___x_4656_;
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
else
{
lean_inc(v_a_4665_);
lean_dec(v___x_4656_);
v___x_4667_ = lean_box(0);
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
v_resetjp_4666_:
{
lean_object* v___x_4670_; 
if (v_isShared_4668_ == 0)
{
v___x_4670_ = v___x_4667_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v_a_4665_);
v___x_4670_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
return v___x_4670_;
}
}
}
}
else
{
lean_dec_ref(v_type_4613_);
return v___x_4652_;
}
}
}
}
else
{
lean_object* v_a_4674_; lean_object* v___x_4676_; uint8_t v_isShared_4677_; uint8_t v_isSharedCheck_4681_; 
lean_dec_ref(v_type_4613_);
v_a_4674_ = lean_ctor_get(v___x_4641_, 0);
v_isSharedCheck_4681_ = !lean_is_exclusive(v___x_4641_);
if (v_isSharedCheck_4681_ == 0)
{
v___x_4676_ = v___x_4641_;
v_isShared_4677_ = v_isSharedCheck_4681_;
goto v_resetjp_4675_;
}
else
{
lean_inc(v_a_4674_);
lean_dec(v___x_4641_);
v___x_4676_ = lean_box(0);
v_isShared_4677_ = v_isSharedCheck_4681_;
goto v_resetjp_4675_;
}
v_resetjp_4675_:
{
lean_object* v___x_4679_; 
if (v_isShared_4677_ == 0)
{
v___x_4679_ = v___x_4676_;
goto v_reusejp_4678_;
}
else
{
lean_object* v_reuseFailAlloc_4680_; 
v_reuseFailAlloc_4680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4680_, 0, v_a_4674_);
v___x_4679_ = v_reuseFailAlloc_4680_;
goto v_reusejp_4678_;
}
v_reusejp_4678_:
{
return v___x_4679_;
}
}
}
}
else
{
lean_object* v___x_4682_; lean_object* v___x_4684_; 
lean_dec_ref(v_type_4613_);
v___x_4682_ = lean_box(0);
if (v_isShared_4639_ == 0)
{
lean_ctor_set(v___x_4638_, 0, v___x_4682_);
v___x_4684_ = v___x_4638_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4685_; 
v_reuseFailAlloc_4685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4685_, 0, v___x_4682_);
v___x_4684_ = v_reuseFailAlloc_4685_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
return v___x_4684_;
}
}
}
}
else
{
lean_object* v_a_4687_; lean_object* v___x_4689_; uint8_t v_isShared_4690_; uint8_t v_isSharedCheck_4694_; 
lean_dec_ref(v_type_4613_);
v_a_4687_ = lean_ctor_get(v___x_4635_, 0);
v_isSharedCheck_4694_ = !lean_is_exclusive(v___x_4635_);
if (v_isSharedCheck_4694_ == 0)
{
v___x_4689_ = v___x_4635_;
v_isShared_4690_ = v_isSharedCheck_4694_;
goto v_resetjp_4688_;
}
else
{
lean_inc(v_a_4687_);
lean_dec(v___x_4635_);
v___x_4689_ = lean_box(0);
v_isShared_4690_ = v_isSharedCheck_4694_;
goto v_resetjp_4688_;
}
v_resetjp_4688_:
{
lean_object* v___x_4692_; 
if (v_isShared_4690_ == 0)
{
v___x_4692_ = v___x_4689_;
goto v_reusejp_4691_;
}
else
{
lean_object* v_reuseFailAlloc_4693_; 
v_reuseFailAlloc_4693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4693_, 0, v_a_4687_);
v___x_4692_ = v_reuseFailAlloc_4693_;
goto v_reusejp_4691_;
}
v_reusejp_4691_:
{
return v___x_4692_;
}
}
}
}
}
}
else
{
lean_object* v_a_4696_; lean_object* v___x_4698_; uint8_t v_isShared_4699_; uint8_t v_isSharedCheck_4703_; 
lean_dec_ref(v_type_4613_);
v_a_4696_ = lean_ctor_get(v___x_4625_, 0);
v_isSharedCheck_4703_ = !lean_is_exclusive(v___x_4625_);
if (v_isSharedCheck_4703_ == 0)
{
v___x_4698_ = v___x_4625_;
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
else
{
lean_inc(v_a_4696_);
lean_dec(v___x_4625_);
v___x_4698_ = lean_box(0);
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
v_resetjp_4697_:
{
lean_object* v___x_4701_; 
if (v_isShared_4699_ == 0)
{
v___x_4701_ = v___x_4698_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v_a_4696_);
v___x_4701_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
return v___x_4701_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___boxed(lean_object* v_type_4704_, lean_object* v_a_4705_, lean_object* v_a_4706_, lean_object* v_a_4707_, lean_object* v_a_4708_, lean_object* v_a_4709_, lean_object* v_a_4710_, lean_object* v_a_4711_, lean_object* v_a_4712_, lean_object* v_a_4713_, lean_object* v_a_4714_, lean_object* v_a_4715_){
_start:
{
lean_object* v_res_4716_; 
v_res_4716_ = l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(v_type_4704_, v_a_4705_, v_a_4706_, v_a_4707_, v_a_4708_, v_a_4709_, v_a_4710_, v_a_4711_, v_a_4712_, v_a_4713_, v_a_4714_);
lean_dec(v_a_4714_);
lean_dec_ref(v_a_4713_);
lean_dec(v_a_4712_);
lean_dec_ref(v_a_4711_);
lean_dec(v_a_4710_);
lean_dec_ref(v_a_4709_);
lean_dec(v_a_4708_);
lean_dec_ref(v_a_4707_);
lean_dec(v_a_4706_);
lean_dec(v_a_4705_);
return v_res_4716_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0(lean_object* v_00_u03b2_4717_, lean_object* v_x_4718_, lean_object* v_x_4719_){
_start:
{
lean_object* v___x_4720_; 
v___x_4720_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(v_x_4718_, v_x_4719_);
return v___x_4720_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___boxed(lean_object* v_00_u03b2_4721_, lean_object* v_x_4722_, lean_object* v_x_4723_){
_start:
{
lean_object* v_res_4724_; 
v_res_4724_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0(v_00_u03b2_4721_, v_x_4722_, v_x_4723_);
lean_dec_ref(v_x_4723_);
lean_dec_ref(v_x_4722_);
return v_res_4724_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0(lean_object* v_00_u03b2_4725_, lean_object* v_x_4726_, size_t v_x_4727_, lean_object* v_x_4728_){
_start:
{
lean_object* v___x_4729_; 
v___x_4729_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(v_x_4726_, v_x_4727_, v_x_4728_);
return v___x_4729_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4730_, lean_object* v_x_4731_, lean_object* v_x_4732_, lean_object* v_x_4733_){
_start:
{
size_t v_x_7774__boxed_4734_; lean_object* v_res_4735_; 
v_x_7774__boxed_4734_ = lean_unbox_usize(v_x_4732_);
lean_dec(v_x_4732_);
v_res_4735_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0(v_00_u03b2_4730_, v_x_4731_, v_x_7774__boxed_4734_, v_x_4733_);
lean_dec_ref(v_x_4733_);
lean_dec_ref(v_x_4731_);
return v_res_4735_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_4736_, lean_object* v_keys_4737_, lean_object* v_vals_4738_, lean_object* v_heq_4739_, lean_object* v_i_4740_, lean_object* v_k_4741_){
_start:
{
lean_object* v___x_4742_; 
v___x_4742_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_4737_, v_vals_4738_, v_i_4740_, v_k_4741_);
return v___x_4742_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_4743_, lean_object* v_keys_4744_, lean_object* v_vals_4745_, lean_object* v_heq_4746_, lean_object* v_i_4747_, lean_object* v_k_4748_){
_start:
{
lean_object* v_res_4749_; 
v_res_4749_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1(v_00_u03b2_4743_, v_keys_4744_, v_vals_4745_, v_heq_4746_, v_i_4747_, v_k_4748_);
lean_dec_ref(v_k_4748_);
lean_dec_ref(v_vals_4745_);
lean_dec_ref(v_keys_4744_);
return v_res_4749_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(lean_object* v_u_4750_, lean_object* v_type_4751_, lean_object* v_a_4752_, lean_object* v_a_4753_, lean_object* v_a_4754_, lean_object* v_a_4755_, lean_object* v_a_4756_){
_start:
{
lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; 
v___x_4758_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1));
v___x_4759_ = lean_box(0);
v___x_4760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4760_, 0, v_u_4750_);
lean_ctor_set(v___x_4760_, 1, v___x_4759_);
v___x_4761_ = l_Lean_mkConst(v___x_4758_, v___x_4760_);
v___x_4762_ = l_Lean_Expr_app___override(v___x_4761_, v_type_4751_);
v___x_4763_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_4762_, v_a_4752_, v_a_4753_, v_a_4754_, v_a_4755_, v_a_4756_);
return v___x_4763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg___boxed(lean_object* v_u_4764_, lean_object* v_type_4765_, lean_object* v_a_4766_, lean_object* v_a_4767_, lean_object* v_a_4768_, lean_object* v_a_4769_, lean_object* v_a_4770_, lean_object* v_a_4771_){
_start:
{
lean_object* v_res_4772_; 
v_res_4772_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(v_u_4764_, v_type_4765_, v_a_4766_, v_a_4767_, v_a_4768_, v_a_4769_, v_a_4770_);
lean_dec(v_a_4770_);
lean_dec_ref(v_a_4769_);
lean_dec(v_a_4768_);
lean_dec_ref(v_a_4767_);
lean_dec(v_a_4766_);
return v_res_4772_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f(lean_object* v_u_4773_, lean_object* v_type_4774_, lean_object* v_a_4775_, lean_object* v_a_4776_, lean_object* v_a_4777_, lean_object* v_a_4778_, lean_object* v_a_4779_, lean_object* v_a_4780_, lean_object* v_a_4781_, lean_object* v_a_4782_, lean_object* v_a_4783_, lean_object* v_a_4784_){
_start:
{
lean_object* v___x_4786_; 
v___x_4786_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(v_u_4773_, v_type_4774_, v_a_4780_, v_a_4781_, v_a_4782_, v_a_4783_, v_a_4784_);
return v___x_4786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___boxed(lean_object* v_u_4787_, lean_object* v_type_4788_, lean_object* v_a_4789_, lean_object* v_a_4790_, lean_object* v_a_4791_, lean_object* v_a_4792_, lean_object* v_a_4793_, lean_object* v_a_4794_, lean_object* v_a_4795_, lean_object* v_a_4796_, lean_object* v_a_4797_, lean_object* v_a_4798_, lean_object* v_a_4799_){
_start:
{
lean_object* v_res_4800_; 
v_res_4800_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f(v_u_4787_, v_type_4788_, v_a_4789_, v_a_4790_, v_a_4791_, v_a_4792_, v_a_4793_, v_a_4794_, v_a_4795_, v_a_4796_, v_a_4797_, v_a_4798_);
lean_dec(v_a_4798_);
lean_dec_ref(v_a_4797_);
lean_dec(v_a_4796_);
lean_dec_ref(v_a_4795_);
lean_dec(v_a_4794_);
lean_dec_ref(v_a_4793_);
lean_dec(v_a_4792_);
lean_dec_ref(v_a_4791_);
lean_dec(v_a_4790_);
lean_dec(v_a_4789_);
return v_res_4800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___lam__0(lean_object* v___x_4801_, lean_object* v_s_4802_){
_start:
{
lean_object* v_structs_4803_; lean_object* v_typeIdOf_4804_; lean_object* v_exprToStructId_4805_; lean_object* v_exprToStructIdEntries_4806_; lean_object* v_forbiddenNatModules_4807_; lean_object* v_natStructs_4808_; lean_object* v_natTypeIdOf_4809_; lean_object* v_exprToNatStructId_4810_; lean_object* v___x_4812_; uint8_t v_isShared_4813_; uint8_t v_isSharedCheck_4818_; 
v_structs_4803_ = lean_ctor_get(v_s_4802_, 0);
v_typeIdOf_4804_ = lean_ctor_get(v_s_4802_, 1);
v_exprToStructId_4805_ = lean_ctor_get(v_s_4802_, 2);
v_exprToStructIdEntries_4806_ = lean_ctor_get(v_s_4802_, 3);
v_forbiddenNatModules_4807_ = lean_ctor_get(v_s_4802_, 4);
v_natStructs_4808_ = lean_ctor_get(v_s_4802_, 5);
v_natTypeIdOf_4809_ = lean_ctor_get(v_s_4802_, 6);
v_exprToNatStructId_4810_ = lean_ctor_get(v_s_4802_, 7);
v_isSharedCheck_4818_ = !lean_is_exclusive(v_s_4802_);
if (v_isSharedCheck_4818_ == 0)
{
v___x_4812_ = v_s_4802_;
v_isShared_4813_ = v_isSharedCheck_4818_;
goto v_resetjp_4811_;
}
else
{
lean_inc(v_exprToNatStructId_4810_);
lean_inc(v_natTypeIdOf_4809_);
lean_inc(v_natStructs_4808_);
lean_inc(v_forbiddenNatModules_4807_);
lean_inc(v_exprToStructIdEntries_4806_);
lean_inc(v_exprToStructId_4805_);
lean_inc(v_typeIdOf_4804_);
lean_inc(v_structs_4803_);
lean_dec(v_s_4802_);
v___x_4812_ = lean_box(0);
v_isShared_4813_ = v_isSharedCheck_4818_;
goto v_resetjp_4811_;
}
v_resetjp_4811_:
{
lean_object* v___x_4814_; lean_object* v___x_4816_; 
v___x_4814_ = lean_array_push(v_natStructs_4808_, v___x_4801_);
if (v_isShared_4813_ == 0)
{
lean_ctor_set(v___x_4812_, 5, v___x_4814_);
v___x_4816_ = v___x_4812_;
goto v_reusejp_4815_;
}
else
{
lean_object* v_reuseFailAlloc_4817_; 
v_reuseFailAlloc_4817_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4817_, 0, v_structs_4803_);
lean_ctor_set(v_reuseFailAlloc_4817_, 1, v_typeIdOf_4804_);
lean_ctor_set(v_reuseFailAlloc_4817_, 2, v_exprToStructId_4805_);
lean_ctor_set(v_reuseFailAlloc_4817_, 3, v_exprToStructIdEntries_4806_);
lean_ctor_set(v_reuseFailAlloc_4817_, 4, v_forbiddenNatModules_4807_);
lean_ctor_set(v_reuseFailAlloc_4817_, 5, v___x_4814_);
lean_ctor_set(v_reuseFailAlloc_4817_, 6, v_natTypeIdOf_4809_);
lean_ctor_set(v_reuseFailAlloc_4817_, 7, v_exprToNatStructId_4810_);
v___x_4816_ = v_reuseFailAlloc_4817_;
goto v_reusejp_4815_;
}
v_reusejp_4815_:
{
return v___x_4816_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(lean_object* v_msg_4819_, lean_object* v___y_4820_, lean_object* v___y_4821_, lean_object* v___y_4822_, lean_object* v___y_4823_){
_start:
{
lean_object* v_ref_4825_; lean_object* v___x_4826_; lean_object* v_a_4827_; lean_object* v___x_4829_; uint8_t v_isShared_4830_; uint8_t v_isSharedCheck_4835_; 
v_ref_4825_ = lean_ctor_get(v___y_4822_, 2);
v___x_4826_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(v_msg_4819_, v___y_4820_, v___y_4821_, v___y_4822_, v___y_4823_);
v_a_4827_ = lean_ctor_get(v___x_4826_, 0);
v_isSharedCheck_4835_ = !lean_is_exclusive(v___x_4826_);
if (v_isSharedCheck_4835_ == 0)
{
v___x_4829_ = v___x_4826_;
v_isShared_4830_ = v_isSharedCheck_4835_;
goto v_resetjp_4828_;
}
else
{
lean_inc(v_a_4827_);
lean_dec(v___x_4826_);
v___x_4829_ = lean_box(0);
v_isShared_4830_ = v_isSharedCheck_4835_;
goto v_resetjp_4828_;
}
v_resetjp_4828_:
{
lean_object* v___x_4831_; lean_object* v___x_4833_; 
lean_inc(v_ref_4825_);
v___x_4831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4831_, 0, v_ref_4825_);
lean_ctor_set(v___x_4831_, 1, v_a_4827_);
if (v_isShared_4830_ == 0)
{
lean_ctor_set_tag(v___x_4829_, 1);
lean_ctor_set(v___x_4829_, 0, v___x_4831_);
v___x_4833_ = v___x_4829_;
goto v_reusejp_4832_;
}
else
{
lean_object* v_reuseFailAlloc_4834_; 
v_reuseFailAlloc_4834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4834_, 0, v___x_4831_);
v___x_4833_ = v_reuseFailAlloc_4834_;
goto v_reusejp_4832_;
}
v_reusejp_4832_:
{
return v___x_4833_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg___boxed(lean_object* v_msg_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_, lean_object* v___y_4841_){
_start:
{
lean_object* v_res_4842_; 
v_res_4842_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(v_msg_4836_, v___y_4837_, v___y_4838_, v___y_4839_, v___y_4840_);
lean_dec(v___y_4840_);
lean_dec_ref(v___y_4839_);
lean_dec(v___y_4838_);
lean_dec_ref(v___y_4837_);
return v_res_4842_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5(void){
_start:
{
lean_object* v___x_4855_; lean_object* v___x_4856_; 
v___x_4855_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__5, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__5);
v___x_4856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4856_, 0, v___x_4855_);
return v___x_4856_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7(void){
_start:
{
lean_object* v___x_4858_; lean_object* v___x_4859_; 
v___x_4858_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6));
v___x_4859_ = l_Lean_stringToMessageData(v___x_4858_);
return v___x_4859_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f(lean_object* v_type_4860_, lean_object* v_a_4861_, lean_object* v_a_4862_, lean_object* v_a_4863_, lean_object* v_a_4864_, lean_object* v_a_4865_, lean_object* v_a_4866_, lean_object* v_a_4867_, lean_object* v_a_4868_, lean_object* v_a_4869_, lean_object* v_a_4870_){
_start:
{
lean_object* v___x_4872_; 
lean_inc_ref(v_type_4860_);
v___x_4872_ = l_Lean_Meta_getDecLevel(v_type_4860_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_);
if (lean_obj_tag(v___x_4872_) == 0)
{
lean_object* v_a_4873_; lean_object* v___x_4874_; 
v_a_4873_ = lean_ctor_get(v___x_4872_, 0);
lean_inc_n(v_a_4873_, 2);
lean_dec_ref_known(v___x_4872_, 1);
lean_inc_ref(v_type_4860_);
v___x_4874_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(v_a_4873_, v_type_4860_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_);
if (lean_obj_tag(v___x_4874_) == 0)
{
lean_object* v_a_4875_; lean_object* v___x_4877_; uint8_t v_isShared_4878_; uint8_t v_isSharedCheck_5167_; 
v_a_4875_ = lean_ctor_get(v___x_4874_, 0);
v_isSharedCheck_5167_ = !lean_is_exclusive(v___x_4874_);
if (v_isSharedCheck_5167_ == 0)
{
v___x_4877_ = v___x_4874_;
v_isShared_4878_ = v_isSharedCheck_5167_;
goto v_resetjp_4876_;
}
else
{
lean_inc(v_a_4875_);
lean_dec(v___x_4874_);
v___x_4877_ = lean_box(0);
v_isShared_4878_ = v_isSharedCheck_5167_;
goto v_resetjp_4876_;
}
v_resetjp_4876_:
{
if (lean_obj_tag(v_a_4875_) == 1)
{
lean_object* v_val_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; 
lean_del_object(v___x_4877_);
v_val_4879_ = lean_ctor_get(v_a_4875_, 0);
lean_inc_n(v_val_4879_, 2);
lean_dec_ref_known(v_a_4875_, 1);
v___x_4880_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1));
v___x_4881_ = lean_box(0);
lean_inc(v_a_4873_);
v___x_4882_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4882_, 0, v_a_4873_);
lean_ctor_set(v___x_4882_, 1, v___x_4881_);
lean_inc_ref(v___x_4882_);
v___x_4883_ = l_Lean_mkConst(v___x_4880_, v___x_4882_);
lean_inc_ref(v_type_4860_);
v___x_4884_ = l_Lean_mkAppB(v___x_4883_, v_type_4860_, v_val_4879_);
v___x_4885_ = l_Lean_Meta_Sym_canon(v___x_4884_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_);
if (lean_obj_tag(v___x_4885_) == 0)
{
lean_object* v_a_4886_; lean_object* v___x_4887_; 
v_a_4886_ = lean_ctor_get(v___x_4885_, 0);
lean_inc(v_a_4886_);
lean_dec_ref_known(v___x_4885_, 1);
v___x_4887_ = l_Lean_Meta_Sym_shareCommon(v_a_4886_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_);
if (lean_obj_tag(v___x_4887_) == 0)
{
lean_object* v_a_4888_; lean_object* v___x_4889_; 
v_a_4888_ = lean_ctor_get(v___x_4887_, 0);
lean_inc_n(v_a_4888_, 2);
lean_dec_ref_known(v___x_4887_, 1);
v___x_4889_ = l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(v_a_4888_, v_a_4861_, v_a_4862_, v_a_4863_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_);
if (lean_obj_tag(v___x_4889_) == 0)
{
lean_object* v_a_4890_; 
v_a_4890_ = lean_ctor_get(v___x_4889_, 0);
lean_inc(v_a_4890_);
lean_dec_ref_known(v___x_4889_, 1);
if (lean_obj_tag(v_a_4890_) == 1)
{
lean_object* v_val_4891_; lean_object* v___x_4893_; uint8_t v_isShared_4894_; uint8_t v_isSharedCheck_5142_; 
v_val_4891_ = lean_ctor_get(v_a_4890_, 0);
v_isSharedCheck_5142_ = !lean_is_exclusive(v_a_4890_);
if (v_isSharedCheck_5142_ == 0)
{
v___x_4893_ = v_a_4890_;
v_isShared_4894_ = v_isSharedCheck_5142_;
goto v_resetjp_4892_;
}
else
{
lean_inc(v_val_4891_);
lean_dec(v_a_4890_);
v___x_4893_ = lean_box(0);
v_isShared_4894_ = v_isSharedCheck_5142_;
goto v_resetjp_4892_;
}
v_resetjp_4892_:
{
lean_object* v___x_4895_; lean_object* v___x_4896_; 
v___x_4895_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__1));
lean_inc_ref(v_type_4860_);
lean_inc(v_a_4873_);
v___x_4896_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_4895_, v_a_4873_, v_type_4860_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_);
if (lean_obj_tag(v___x_4896_) == 0)
{
lean_object* v_a_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; 
v_a_4897_ = lean_ctor_get(v___x_4896_, 0);
lean_inc(v_a_4897_);
lean_dec_ref_known(v___x_4896_, 1);
v___x_4898_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__3));
lean_inc_ref(v_type_4860_);
lean_inc(v_a_4873_);
v___x_4899_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_4898_, v_a_4873_, v_type_4860_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_);
if (lean_obj_tag(v___x_4899_) == 0)
{
lean_object* v_a_4900_; lean_object* v___x_4901_; 
v_a_4900_ = lean_ctor_get(v___x_4899_, 0);
lean_inc(v_a_4900_);
lean_dec_ref_known(v___x_4899_, 1);
lean_inc(v_a_4897_);
lean_inc_ref(v_type_4860_);
lean_inc(v_a_4873_);
v___x_4901_ = l_Lean_Meta_Sym_Arith_mkIsPreorderInst_x3f(v_a_4873_, v_type_4860_, v_a_4897_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_);
if (lean_obj_tag(v___x_4901_) == 0)
{
lean_object* v_a_4902_; lean_object* v___x_4903_; 
v_a_4902_ = lean_ctor_get(v___x_4901_, 0);
lean_inc(v_a_4902_);
lean_dec_ref_known(v___x_4901_, 1);
lean_inc(v_a_4897_);
lean_inc(v_a_4900_);
lean_inc_ref(v_type_4860_);
lean_inc(v_a_4873_);
v___x_4903_ = l_Lean_Meta_Sym_Arith_mkLawfulOrderLTInst_x3f(v_a_4873_, v_type_4860_, v_a_4900_, v_a_4897_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_);
if (lean_obj_tag(v___x_4903_) == 0)
{
lean_object* v_a_4904_; lean_object* v___x_4905_; 
v_a_4904_ = lean_ctor_get(v___x_4903_, 0);
lean_inc(v_a_4904_);
lean_dec_ref_known(v___x_4903_, 1);
lean_inc(v_a_4897_);
lean_inc_ref(v_type_4860_);
lean_inc(v_a_4873_);
v___x_4905_ = l_Lean_Meta_Sym_Arith_mkIsLinearOrderInst_x3f(v_a_4873_, v_type_4860_, v_a_4897_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_);
if (lean_obj_tag(v___x_4905_) == 0)
{
lean_object* v_a_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; 
v_a_4906_ = lean_ctor_get(v___x_4905_, 0);
lean_inc(v_a_4906_);
lean_dec_ref_known(v___x_4905_, 1);
v___x_4907_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__62));
lean_inc_ref(v_type_4860_);
lean_inc(v_a_4873_);
v___x_4908_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___redArg(v___x_4907_, v_a_4873_, v_type_4860_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_);
if (lean_obj_tag(v___x_4908_) == 0)
{
lean_object* v_a_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; 
v_a_4909_ = lean_ctor_get(v___x_4908_, 0);
lean_inc_n(v_a_4909_, 2);
lean_dec_ref_known(v___x_4908_, 1);
v___x_4910_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__64));
lean_inc_ref(v___x_4882_);
lean_inc_n(v_a_4873_, 2);
v___x_4911_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4911_, 0, v_a_4873_);
lean_ctor_set(v___x_4911_, 1, v___x_4882_);
lean_inc_ref(v___x_4911_);
v___x_4912_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4912_, 0, v_a_4873_);
lean_ctor_set(v___x_4912_, 1, v___x_4911_);
v___x_4913_ = l_Lean_mkConst(v___x_4910_, v___x_4912_);
lean_inc_ref_n(v_type_4860_, 3);
v___x_4914_ = l_Lean_mkApp4(v___x_4913_, v_type_4860_, v_type_4860_, v_type_4860_, v_a_4909_);
v___x_4915_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_4914_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_);
if (lean_obj_tag(v___x_4915_) == 0)
{
lean_object* v_a_4916_; lean_object* v_orderedAddInst_x3f_4918_; lean_object* v___y_4919_; lean_object* v___y_4920_; lean_object* v___y_4921_; lean_object* v___y_4922_; lean_object* v___y_4923_; lean_object* v___y_4924_; lean_object* v___y_4925_; lean_object* v___y_4926_; lean_object* v___y_4927_; lean_object* v___y_4928_; lean_object* v___y_5060_; lean_object* v___y_5061_; lean_object* v___y_5062_; lean_object* v___y_5063_; lean_object* v___y_5064_; lean_object* v___y_5065_; lean_object* v___y_5066_; lean_object* v___y_5067_; lean_object* v___y_5068_; lean_object* v___y_5069_; 
v_a_4916_ = lean_ctor_get(v___x_4915_, 0);
lean_inc(v_a_4916_);
lean_dec_ref_known(v___x_4915_, 1);
if (lean_obj_tag(v_a_4897_) == 1)
{
if (lean_obj_tag(v_a_4902_) == 1)
{
lean_object* v_val_5071_; lean_object* v_val_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; 
v_val_5071_ = lean_ctor_get(v_a_4897_, 0);
v_val_5072_ = lean_ctor_get(v_a_4902_, 0);
v___x_5073_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__66));
lean_inc_ref(v___x_4882_);
v___x_5074_ = l_Lean_mkConst(v___x_5073_, v___x_4882_);
lean_inc(v_val_5072_);
lean_inc(v_val_5071_);
lean_inc_ref(v_type_4860_);
v___x_5075_ = l_Lean_mkApp4(v___x_5074_, v_type_4860_, v_a_4909_, v_val_5071_, v_val_5072_);
v___x_5076_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_5075_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_);
if (lean_obj_tag(v___x_5076_) == 0)
{
lean_object* v_a_5077_; 
v_a_5077_ = lean_ctor_get(v___x_5076_, 0);
lean_inc(v_a_5077_);
lean_dec_ref_known(v___x_5076_, 1);
v_orderedAddInst_x3f_4918_ = v_a_5077_;
v___y_4919_ = v_a_4861_;
v___y_4920_ = v_a_4862_;
v___y_4921_ = v_a_4863_;
v___y_4922_ = v_a_4864_;
v___y_4923_ = v_a_4865_;
v___y_4924_ = v_a_4866_;
v___y_4925_ = v_a_4867_;
v___y_4926_ = v_a_4868_;
v___y_4927_ = v_a_4869_;
v___y_4928_ = v_a_4870_;
goto v___jp_4917_;
}
else
{
lean_object* v_a_5078_; lean_object* v___x_5080_; uint8_t v_isShared_5081_; uint8_t v_isSharedCheck_5085_; 
lean_dec_ref_known(v_a_4902_, 1);
lean_dec_ref_known(v_a_4897_, 1);
lean_dec(v_a_4916_);
lean_dec_ref_known(v___x_4911_, 2);
lean_dec(v_a_4906_);
lean_dec(v_a_4904_);
lean_dec(v_a_4900_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5078_ = lean_ctor_get(v___x_5076_, 0);
v_isSharedCheck_5085_ = !lean_is_exclusive(v___x_5076_);
if (v_isSharedCheck_5085_ == 0)
{
v___x_5080_ = v___x_5076_;
v_isShared_5081_ = v_isSharedCheck_5085_;
goto v_resetjp_5079_;
}
else
{
lean_inc(v_a_5078_);
lean_dec(v___x_5076_);
v___x_5080_ = lean_box(0);
v_isShared_5081_ = v_isSharedCheck_5085_;
goto v_resetjp_5079_;
}
v_resetjp_5079_:
{
lean_object* v___x_5083_; 
if (v_isShared_5081_ == 0)
{
v___x_5083_ = v___x_5080_;
goto v_reusejp_5082_;
}
else
{
lean_object* v_reuseFailAlloc_5084_; 
v_reuseFailAlloc_5084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5084_, 0, v_a_5078_);
v___x_5083_ = v_reuseFailAlloc_5084_;
goto v_reusejp_5082_;
}
v_reusejp_5082_:
{
return v___x_5083_;
}
}
}
}
else
{
lean_dec(v_a_4909_);
v___y_5060_ = v_a_4861_;
v___y_5061_ = v_a_4862_;
v___y_5062_ = v_a_4863_;
v___y_5063_ = v_a_4864_;
v___y_5064_ = v_a_4865_;
v___y_5065_ = v_a_4866_;
v___y_5066_ = v_a_4867_;
v___y_5067_ = v_a_4868_;
v___y_5068_ = v_a_4869_;
v___y_5069_ = v_a_4870_;
goto v___jp_5059_;
}
}
else
{
lean_dec(v_a_4909_);
v___y_5060_ = v_a_4861_;
v___y_5061_ = v_a_4862_;
v___y_5062_ = v_a_4863_;
v___y_5063_ = v_a_4864_;
v___y_5064_ = v_a_4865_;
v___y_5065_ = v_a_4866_;
v___y_5066_ = v_a_4867_;
v___y_5067_ = v_a_4868_;
v___y_5068_ = v_a_4869_;
v___y_5069_ = v_a_4870_;
goto v___jp_5059_;
}
v___jp_4917_:
{
lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; 
v___x_4929_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__12));
lean_inc_ref(v___x_4882_);
v___x_4930_ = l_Lean_mkConst(v___x_4929_, v___x_4882_);
lean_inc_ref(v_type_4860_);
v___x_4931_ = l_Lean_Expr_app___override(v___x_4930_, v_type_4860_);
v___x_4932_ = l_Lean_Meta_Sym_synthInstance(v___x_4931_, v___y_4923_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_, v___y_4928_);
if (lean_obj_tag(v___x_4932_) == 0)
{
lean_object* v_a_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; 
v_a_4933_ = lean_ctor_get(v___x_4932_, 0);
lean_inc(v_a_4933_);
lean_dec_ref_known(v___x_4932_, 1);
v___x_4934_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goQ_x3f___closed__14));
lean_inc_ref(v___x_4882_);
v___x_4935_ = l_Lean_mkConst(v___x_4934_, v___x_4882_);
lean_inc_ref(v_type_4860_);
v___x_4936_ = l_Lean_mkAppB(v___x_4935_, v_type_4860_, v_a_4933_);
v___x_4937_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_4936_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_, v___y_4928_);
if (lean_obj_tag(v___x_4937_) == 0)
{
lean_object* v_a_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; 
v_a_4938_ = lean_ctor_get(v___x_4937_, 0);
lean_inc(v_a_4938_);
lean_dec_ref_known(v___x_4937_, 1);
v___x_4939_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1));
lean_inc_ref(v___x_4882_);
v___x_4940_ = l_Lean_mkConst(v___x_4939_, v___x_4882_);
lean_inc(v_val_4879_);
lean_inc_ref(v_type_4860_);
v___x_4941_ = l_Lean_mkAppB(v___x_4940_, v_type_4860_, v_val_4879_);
v___x_4942_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_4941_, v___y_4923_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_, v___y_4928_);
if (lean_obj_tag(v___x_4942_) == 0)
{
lean_object* v_a_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; 
v_a_4943_ = lean_ctor_get(v___x_4942_, 0);
lean_inc(v_a_4943_);
lean_dec_ref_known(v___x_4942_, 1);
v___x_4944_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__14));
lean_inc_ref(v_type_4860_);
lean_inc(v_a_4873_);
v___x_4945_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___redArg(v___x_4944_, v_a_4873_, v_type_4860_, v___y_4923_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_, v___y_4928_);
if (lean_obj_tag(v___x_4945_) == 0)
{
lean_object* v_a_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; 
v_a_4946_ = lean_ctor_get(v___x_4945_, 0);
lean_inc(v_a_4946_);
lean_dec_ref_known(v___x_4945_, 1);
v___x_4947_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f___closed__16));
v___x_4948_ = l_Lean_mkConst(v___x_4947_, v___x_4882_);
lean_inc_ref(v_type_4860_);
v___x_4949_ = l_Lean_mkAppB(v___x_4948_, v_type_4860_, v_a_4946_);
v___x_4950_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(v___x_4949_, v___y_4919_, v___y_4920_, v___y_4921_, v___y_4922_, v___y_4923_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_, v___y_4928_);
if (lean_obj_tag(v___x_4950_) == 0)
{
lean_object* v_a_4951_; lean_object* v___x_4952_; 
v_a_4951_ = lean_ctor_get(v___x_4950_, 0);
lean_inc(v_a_4951_);
lean_dec_ref_known(v___x_4950_, 1);
lean_inc_ref(v_type_4860_);
lean_inc(v_a_4873_);
v___x_4952_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___redArg(v_a_4873_, v_type_4860_, v___y_4923_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_, v___y_4928_);
if (lean_obj_tag(v___x_4952_) == 0)
{
lean_object* v_a_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; 
v_a_4953_ = lean_ctor_get(v___x_4952_, 0);
lean_inc(v_a_4953_);
lean_dec_ref_known(v___x_4952_, 1);
v___x_4954_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___redArg___closed__1));
v___x_4955_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___redArg___closed__2);
v___x_4956_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4956_, 0, v___x_4955_);
lean_ctor_set(v___x_4956_, 1, v___x_4911_);
v___x_4957_ = l_Lean_mkConst(v___x_4954_, v___x_4956_);
v___x_4958_ = l_Lean_Nat_mkType;
lean_inc_ref_n(v_type_4860_, 2);
v___x_4959_ = l_Lean_mkApp4(v___x_4957_, v___x_4958_, v_type_4860_, v_type_4860_, v_a_4953_);
v___x_4960_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___redArg(v___x_4959_, v___y_4923_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_, v___y_4928_);
if (lean_obj_tag(v___x_4960_) == 0)
{
lean_object* v_a_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; lean_object* v___x_4964_; lean_object* v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; 
v_a_4961_ = lean_ctor_get(v___x_4960_, 0);
lean_inc(v_a_4961_);
lean_dec_ref_known(v___x_4960_, 1);
v___x_4962_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4));
lean_inc(v_a_4873_);
v___x_4963_ = l_Lean_Level_succ___override(v_a_4873_);
v___x_4964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4964_, 0, v___x_4963_);
lean_ctor_set(v___x_4964_, 1, v___x_4881_);
v___x_4965_ = l_Lean_mkConst(v___x_4962_, v___x_4964_);
v___x_4966_ = l_Lean_Expr_app___override(v___x_4965_, v_a_4888_);
v___x_4967_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v___y_4919_, v___y_4927_);
if (lean_obj_tag(v___x_4967_) == 0)
{
lean_object* v_a_4968_; lean_object* v_natStructs_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___f_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; 
v_a_4968_ = lean_ctor_get(v___x_4967_, 0);
lean_inc(v_a_4968_);
lean_dec_ref_known(v___x_4967_, 1);
v_natStructs_4969_ = lean_ctor_get(v_a_4968_, 5);
lean_inc_ref(v_natStructs_4969_);
lean_dec(v_a_4968_);
v___x_4970_ = lean_array_get_size(v_natStructs_4969_);
lean_dec_ref(v_natStructs_4969_);
v___x_4971_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5);
v___x_4972_ = lean_alloc_ctor(0, 18, 0);
lean_ctor_set(v___x_4972_, 0, v___x_4970_);
lean_ctor_set(v___x_4972_, 1, v_val_4891_);
lean_ctor_set(v___x_4972_, 2, v_type_4860_);
lean_ctor_set(v___x_4972_, 3, v_a_4873_);
lean_ctor_set(v___x_4972_, 4, v_val_4879_);
lean_ctor_set(v___x_4972_, 5, v_a_4897_);
lean_ctor_set(v___x_4972_, 6, v_a_4900_);
lean_ctor_set(v___x_4972_, 7, v_a_4904_);
lean_ctor_set(v___x_4972_, 8, v_a_4902_);
lean_ctor_set(v___x_4972_, 9, v_orderedAddInst_x3f_4918_);
lean_ctor_set(v___x_4972_, 10, v_a_4906_);
lean_ctor_set(v___x_4972_, 11, v_a_4938_);
lean_ctor_set(v___x_4972_, 12, v___x_4966_);
lean_ctor_set(v___x_4972_, 13, v_a_4951_);
lean_ctor_set(v___x_4972_, 14, v_a_4943_);
lean_ctor_set(v___x_4972_, 15, v_a_4916_);
lean_ctor_set(v___x_4972_, 16, v_a_4961_);
lean_ctor_set(v___x_4972_, 17, v___x_4971_);
v___f_4973_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___lam__0), 2, 1);
lean_closure_set(v___f_4973_, 0, v___x_4972_);
v___x_4974_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_4975_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_4974_, v___f_4973_, v___y_4919_);
if (lean_obj_tag(v___x_4975_) == 0)
{
lean_object* v___x_4977_; uint8_t v_isShared_4978_; uint8_t v_isSharedCheck_4985_; 
v_isSharedCheck_4985_ = !lean_is_exclusive(v___x_4975_);
if (v_isSharedCheck_4985_ == 0)
{
lean_object* v_unused_4986_; 
v_unused_4986_ = lean_ctor_get(v___x_4975_, 0);
lean_dec(v_unused_4986_);
v___x_4977_ = v___x_4975_;
v_isShared_4978_ = v_isSharedCheck_4985_;
goto v_resetjp_4976_;
}
else
{
lean_dec(v___x_4975_);
v___x_4977_ = lean_box(0);
v_isShared_4978_ = v_isSharedCheck_4985_;
goto v_resetjp_4976_;
}
v_resetjp_4976_:
{
lean_object* v___x_4980_; 
if (v_isShared_4894_ == 0)
{
lean_ctor_set(v___x_4893_, 0, v___x_4970_);
v___x_4980_ = v___x_4893_;
goto v_reusejp_4979_;
}
else
{
lean_object* v_reuseFailAlloc_4984_; 
v_reuseFailAlloc_4984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4984_, 0, v___x_4970_);
v___x_4980_ = v_reuseFailAlloc_4984_;
goto v_reusejp_4979_;
}
v_reusejp_4979_:
{
lean_object* v___x_4982_; 
if (v_isShared_4978_ == 0)
{
lean_ctor_set(v___x_4977_, 0, v___x_4980_);
v___x_4982_ = v___x_4977_;
goto v_reusejp_4981_;
}
else
{
lean_object* v_reuseFailAlloc_4983_; 
v_reuseFailAlloc_4983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4983_, 0, v___x_4980_);
v___x_4982_ = v_reuseFailAlloc_4983_;
goto v_reusejp_4981_;
}
v_reusejp_4981_:
{
return v___x_4982_;
}
}
}
}
else
{
lean_object* v_a_4987_; lean_object* v___x_4989_; uint8_t v_isShared_4990_; uint8_t v_isSharedCheck_4994_; 
lean_del_object(v___x_4893_);
v_a_4987_ = lean_ctor_get(v___x_4975_, 0);
v_isSharedCheck_4994_ = !lean_is_exclusive(v___x_4975_);
if (v_isSharedCheck_4994_ == 0)
{
v___x_4989_ = v___x_4975_;
v_isShared_4990_ = v_isSharedCheck_4994_;
goto v_resetjp_4988_;
}
else
{
lean_inc(v_a_4987_);
lean_dec(v___x_4975_);
v___x_4989_ = lean_box(0);
v_isShared_4990_ = v_isSharedCheck_4994_;
goto v_resetjp_4988_;
}
v_resetjp_4988_:
{
lean_object* v___x_4992_; 
if (v_isShared_4990_ == 0)
{
v___x_4992_ = v___x_4989_;
goto v_reusejp_4991_;
}
else
{
lean_object* v_reuseFailAlloc_4993_; 
v_reuseFailAlloc_4993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4993_, 0, v_a_4987_);
v___x_4992_ = v_reuseFailAlloc_4993_;
goto v_reusejp_4991_;
}
v_reusejp_4991_:
{
return v___x_4992_;
}
}
}
}
else
{
lean_object* v_a_4995_; lean_object* v___x_4997_; uint8_t v_isShared_4998_; uint8_t v_isSharedCheck_5002_; 
lean_dec_ref(v___x_4966_);
lean_dec(v_a_4961_);
lean_dec(v_a_4951_);
lean_dec(v_a_4943_);
lean_dec(v_a_4938_);
lean_dec(v_orderedAddInst_x3f_4918_);
lean_dec(v_a_4916_);
lean_dec(v_a_4906_);
lean_dec(v_a_4904_);
lean_dec(v_a_4902_);
lean_dec(v_a_4900_);
lean_dec(v_a_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_4995_ = lean_ctor_get(v___x_4967_, 0);
v_isSharedCheck_5002_ = !lean_is_exclusive(v___x_4967_);
if (v_isSharedCheck_5002_ == 0)
{
v___x_4997_ = v___x_4967_;
v_isShared_4998_ = v_isSharedCheck_5002_;
goto v_resetjp_4996_;
}
else
{
lean_inc(v_a_4995_);
lean_dec(v___x_4967_);
v___x_4997_ = lean_box(0);
v_isShared_4998_ = v_isSharedCheck_5002_;
goto v_resetjp_4996_;
}
v_resetjp_4996_:
{
lean_object* v___x_5000_; 
if (v_isShared_4998_ == 0)
{
v___x_5000_ = v___x_4997_;
goto v_reusejp_4999_;
}
else
{
lean_object* v_reuseFailAlloc_5001_; 
v_reuseFailAlloc_5001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5001_, 0, v_a_4995_);
v___x_5000_ = v_reuseFailAlloc_5001_;
goto v_reusejp_4999_;
}
v_reusejp_4999_:
{
return v___x_5000_;
}
}
}
}
else
{
lean_object* v_a_5003_; lean_object* v___x_5005_; uint8_t v_isShared_5006_; uint8_t v_isSharedCheck_5010_; 
lean_dec(v_a_4951_);
lean_dec(v_a_4943_);
lean_dec(v_a_4938_);
lean_dec(v_orderedAddInst_x3f_4918_);
lean_dec(v_a_4916_);
lean_dec(v_a_4906_);
lean_dec(v_a_4904_);
lean_dec(v_a_4902_);
lean_dec(v_a_4900_);
lean_dec(v_a_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5003_ = lean_ctor_get(v___x_4960_, 0);
v_isSharedCheck_5010_ = !lean_is_exclusive(v___x_4960_);
if (v_isSharedCheck_5010_ == 0)
{
v___x_5005_ = v___x_4960_;
v_isShared_5006_ = v_isSharedCheck_5010_;
goto v_resetjp_5004_;
}
else
{
lean_inc(v_a_5003_);
lean_dec(v___x_4960_);
v___x_5005_ = lean_box(0);
v_isShared_5006_ = v_isSharedCheck_5010_;
goto v_resetjp_5004_;
}
v_resetjp_5004_:
{
lean_object* v___x_5008_; 
if (v_isShared_5006_ == 0)
{
v___x_5008_ = v___x_5005_;
goto v_reusejp_5007_;
}
else
{
lean_object* v_reuseFailAlloc_5009_; 
v_reuseFailAlloc_5009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5009_, 0, v_a_5003_);
v___x_5008_ = v_reuseFailAlloc_5009_;
goto v_reusejp_5007_;
}
v_reusejp_5007_:
{
return v___x_5008_;
}
}
}
}
else
{
lean_object* v_a_5011_; lean_object* v___x_5013_; uint8_t v_isShared_5014_; uint8_t v_isSharedCheck_5018_; 
lean_dec(v_a_4951_);
lean_dec(v_a_4943_);
lean_dec(v_a_4938_);
lean_dec(v_orderedAddInst_x3f_4918_);
lean_dec(v_a_4916_);
lean_dec_ref_known(v___x_4911_, 2);
lean_dec(v_a_4906_);
lean_dec(v_a_4904_);
lean_dec(v_a_4902_);
lean_dec(v_a_4900_);
lean_dec(v_a_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5011_ = lean_ctor_get(v___x_4952_, 0);
v_isSharedCheck_5018_ = !lean_is_exclusive(v___x_4952_);
if (v_isSharedCheck_5018_ == 0)
{
v___x_5013_ = v___x_4952_;
v_isShared_5014_ = v_isSharedCheck_5018_;
goto v_resetjp_5012_;
}
else
{
lean_inc(v_a_5011_);
lean_dec(v___x_4952_);
v___x_5013_ = lean_box(0);
v_isShared_5014_ = v_isSharedCheck_5018_;
goto v_resetjp_5012_;
}
v_resetjp_5012_:
{
lean_object* v___x_5016_; 
if (v_isShared_5014_ == 0)
{
v___x_5016_ = v___x_5013_;
goto v_reusejp_5015_;
}
else
{
lean_object* v_reuseFailAlloc_5017_; 
v_reuseFailAlloc_5017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5017_, 0, v_a_5011_);
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
lean_object* v_a_5019_; lean_object* v___x_5021_; uint8_t v_isShared_5022_; uint8_t v_isSharedCheck_5026_; 
lean_dec(v_a_4943_);
lean_dec(v_a_4938_);
lean_dec(v_orderedAddInst_x3f_4918_);
lean_dec(v_a_4916_);
lean_dec_ref_known(v___x_4911_, 2);
lean_dec(v_a_4906_);
lean_dec(v_a_4904_);
lean_dec(v_a_4902_);
lean_dec(v_a_4900_);
lean_dec(v_a_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5019_ = lean_ctor_get(v___x_4950_, 0);
v_isSharedCheck_5026_ = !lean_is_exclusive(v___x_4950_);
if (v_isSharedCheck_5026_ == 0)
{
v___x_5021_ = v___x_4950_;
v_isShared_5022_ = v_isSharedCheck_5026_;
goto v_resetjp_5020_;
}
else
{
lean_inc(v_a_5019_);
lean_dec(v___x_4950_);
v___x_5021_ = lean_box(0);
v_isShared_5022_ = v_isSharedCheck_5026_;
goto v_resetjp_5020_;
}
v_resetjp_5020_:
{
lean_object* v___x_5024_; 
if (v_isShared_5022_ == 0)
{
v___x_5024_ = v___x_5021_;
goto v_reusejp_5023_;
}
else
{
lean_object* v_reuseFailAlloc_5025_; 
v_reuseFailAlloc_5025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5025_, 0, v_a_5019_);
v___x_5024_ = v_reuseFailAlloc_5025_;
goto v_reusejp_5023_;
}
v_reusejp_5023_:
{
return v___x_5024_;
}
}
}
}
else
{
lean_object* v_a_5027_; lean_object* v___x_5029_; uint8_t v_isShared_5030_; uint8_t v_isSharedCheck_5034_; 
lean_dec(v_a_4943_);
lean_dec(v_a_4938_);
lean_dec(v_orderedAddInst_x3f_4918_);
lean_dec(v_a_4916_);
lean_dec_ref_known(v___x_4911_, 2);
lean_dec(v_a_4906_);
lean_dec(v_a_4904_);
lean_dec(v_a_4902_);
lean_dec(v_a_4900_);
lean_dec(v_a_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5027_ = lean_ctor_get(v___x_4945_, 0);
v_isSharedCheck_5034_ = !lean_is_exclusive(v___x_4945_);
if (v_isSharedCheck_5034_ == 0)
{
v___x_5029_ = v___x_4945_;
v_isShared_5030_ = v_isSharedCheck_5034_;
goto v_resetjp_5028_;
}
else
{
lean_inc(v_a_5027_);
lean_dec(v___x_4945_);
v___x_5029_ = lean_box(0);
v_isShared_5030_ = v_isSharedCheck_5034_;
goto v_resetjp_5028_;
}
v_resetjp_5028_:
{
lean_object* v___x_5032_; 
if (v_isShared_5030_ == 0)
{
v___x_5032_ = v___x_5029_;
goto v_reusejp_5031_;
}
else
{
lean_object* v_reuseFailAlloc_5033_; 
v_reuseFailAlloc_5033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5033_, 0, v_a_5027_);
v___x_5032_ = v_reuseFailAlloc_5033_;
goto v_reusejp_5031_;
}
v_reusejp_5031_:
{
return v___x_5032_;
}
}
}
}
else
{
lean_object* v_a_5035_; lean_object* v___x_5037_; uint8_t v_isShared_5038_; uint8_t v_isSharedCheck_5042_; 
lean_dec(v_a_4938_);
lean_dec(v_orderedAddInst_x3f_4918_);
lean_dec(v_a_4916_);
lean_dec_ref_known(v___x_4911_, 2);
lean_dec(v_a_4906_);
lean_dec(v_a_4904_);
lean_dec(v_a_4902_);
lean_dec(v_a_4900_);
lean_dec(v_a_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5035_ = lean_ctor_get(v___x_4942_, 0);
v_isSharedCheck_5042_ = !lean_is_exclusive(v___x_4942_);
if (v_isSharedCheck_5042_ == 0)
{
v___x_5037_ = v___x_4942_;
v_isShared_5038_ = v_isSharedCheck_5042_;
goto v_resetjp_5036_;
}
else
{
lean_inc(v_a_5035_);
lean_dec(v___x_4942_);
v___x_5037_ = lean_box(0);
v_isShared_5038_ = v_isSharedCheck_5042_;
goto v_resetjp_5036_;
}
v_resetjp_5036_:
{
lean_object* v___x_5040_; 
if (v_isShared_5038_ == 0)
{
v___x_5040_ = v___x_5037_;
goto v_reusejp_5039_;
}
else
{
lean_object* v_reuseFailAlloc_5041_; 
v_reuseFailAlloc_5041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5041_, 0, v_a_5035_);
v___x_5040_ = v_reuseFailAlloc_5041_;
goto v_reusejp_5039_;
}
v_reusejp_5039_:
{
return v___x_5040_;
}
}
}
}
else
{
lean_object* v_a_5043_; lean_object* v___x_5045_; uint8_t v_isShared_5046_; uint8_t v_isSharedCheck_5050_; 
lean_dec(v_orderedAddInst_x3f_4918_);
lean_dec(v_a_4916_);
lean_dec_ref_known(v___x_4911_, 2);
lean_dec(v_a_4906_);
lean_dec(v_a_4904_);
lean_dec(v_a_4902_);
lean_dec(v_a_4900_);
lean_dec(v_a_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5043_ = lean_ctor_get(v___x_4937_, 0);
v_isSharedCheck_5050_ = !lean_is_exclusive(v___x_4937_);
if (v_isSharedCheck_5050_ == 0)
{
v___x_5045_ = v___x_4937_;
v_isShared_5046_ = v_isSharedCheck_5050_;
goto v_resetjp_5044_;
}
else
{
lean_inc(v_a_5043_);
lean_dec(v___x_4937_);
v___x_5045_ = lean_box(0);
v_isShared_5046_ = v_isSharedCheck_5050_;
goto v_resetjp_5044_;
}
v_resetjp_5044_:
{
lean_object* v___x_5048_; 
if (v_isShared_5046_ == 0)
{
v___x_5048_ = v___x_5045_;
goto v_reusejp_5047_;
}
else
{
lean_object* v_reuseFailAlloc_5049_; 
v_reuseFailAlloc_5049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5049_, 0, v_a_5043_);
v___x_5048_ = v_reuseFailAlloc_5049_;
goto v_reusejp_5047_;
}
v_reusejp_5047_:
{
return v___x_5048_;
}
}
}
}
else
{
lean_object* v_a_5051_; lean_object* v___x_5053_; uint8_t v_isShared_5054_; uint8_t v_isSharedCheck_5058_; 
lean_dec(v_orderedAddInst_x3f_4918_);
lean_dec(v_a_4916_);
lean_dec_ref_known(v___x_4911_, 2);
lean_dec(v_a_4906_);
lean_dec(v_a_4904_);
lean_dec(v_a_4902_);
lean_dec(v_a_4900_);
lean_dec(v_a_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5051_ = lean_ctor_get(v___x_4932_, 0);
v_isSharedCheck_5058_ = !lean_is_exclusive(v___x_4932_);
if (v_isSharedCheck_5058_ == 0)
{
v___x_5053_ = v___x_4932_;
v_isShared_5054_ = v_isSharedCheck_5058_;
goto v_resetjp_5052_;
}
else
{
lean_inc(v_a_5051_);
lean_dec(v___x_4932_);
v___x_5053_ = lean_box(0);
v_isShared_5054_ = v_isSharedCheck_5058_;
goto v_resetjp_5052_;
}
v_resetjp_5052_:
{
lean_object* v___x_5056_; 
if (v_isShared_5054_ == 0)
{
v___x_5056_ = v___x_5053_;
goto v_reusejp_5055_;
}
else
{
lean_object* v_reuseFailAlloc_5057_; 
v_reuseFailAlloc_5057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5057_, 0, v_a_5051_);
v___x_5056_ = v_reuseFailAlloc_5057_;
goto v_reusejp_5055_;
}
v_reusejp_5055_:
{
return v___x_5056_;
}
}
}
}
v___jp_5059_:
{
lean_object* v___x_5070_; 
v___x_5070_ = lean_box(0);
v_orderedAddInst_x3f_4918_ = v___x_5070_;
v___y_4919_ = v___y_5060_;
v___y_4920_ = v___y_5061_;
v___y_4921_ = v___y_5062_;
v___y_4922_ = v___y_5063_;
v___y_4923_ = v___y_5064_;
v___y_4924_ = v___y_5065_;
v___y_4925_ = v___y_5066_;
v___y_4926_ = v___y_5067_;
v___y_4927_ = v___y_5068_;
v___y_4928_ = v___y_5069_;
goto v___jp_4917_;
}
}
else
{
lean_object* v_a_5086_; lean_object* v___x_5088_; uint8_t v_isShared_5089_; uint8_t v_isSharedCheck_5093_; 
lean_dec_ref_known(v___x_4911_, 2);
lean_dec(v_a_4909_);
lean_dec(v_a_4906_);
lean_dec(v_a_4904_);
lean_dec(v_a_4902_);
lean_dec(v_a_4900_);
lean_dec(v_a_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5086_ = lean_ctor_get(v___x_4915_, 0);
v_isSharedCheck_5093_ = !lean_is_exclusive(v___x_4915_);
if (v_isSharedCheck_5093_ == 0)
{
v___x_5088_ = v___x_4915_;
v_isShared_5089_ = v_isSharedCheck_5093_;
goto v_resetjp_5087_;
}
else
{
lean_inc(v_a_5086_);
lean_dec(v___x_4915_);
v___x_5088_ = lean_box(0);
v_isShared_5089_ = v_isSharedCheck_5093_;
goto v_resetjp_5087_;
}
v_resetjp_5087_:
{
lean_object* v___x_5091_; 
if (v_isShared_5089_ == 0)
{
v___x_5091_ = v___x_5088_;
goto v_reusejp_5090_;
}
else
{
lean_object* v_reuseFailAlloc_5092_; 
v_reuseFailAlloc_5092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5092_, 0, v_a_5086_);
v___x_5091_ = v_reuseFailAlloc_5092_;
goto v_reusejp_5090_;
}
v_reusejp_5090_:
{
return v___x_5091_;
}
}
}
}
else
{
lean_object* v_a_5094_; lean_object* v___x_5096_; uint8_t v_isShared_5097_; uint8_t v_isSharedCheck_5101_; 
lean_dec(v_a_4906_);
lean_dec(v_a_4904_);
lean_dec(v_a_4902_);
lean_dec(v_a_4900_);
lean_dec(v_a_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5094_ = lean_ctor_get(v___x_4908_, 0);
v_isSharedCheck_5101_ = !lean_is_exclusive(v___x_4908_);
if (v_isSharedCheck_5101_ == 0)
{
v___x_5096_ = v___x_4908_;
v_isShared_5097_ = v_isSharedCheck_5101_;
goto v_resetjp_5095_;
}
else
{
lean_inc(v_a_5094_);
lean_dec(v___x_4908_);
v___x_5096_ = lean_box(0);
v_isShared_5097_ = v_isSharedCheck_5101_;
goto v_resetjp_5095_;
}
v_resetjp_5095_:
{
lean_object* v___x_5099_; 
if (v_isShared_5097_ == 0)
{
v___x_5099_ = v___x_5096_;
goto v_reusejp_5098_;
}
else
{
lean_object* v_reuseFailAlloc_5100_; 
v_reuseFailAlloc_5100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5100_, 0, v_a_5094_);
v___x_5099_ = v_reuseFailAlloc_5100_;
goto v_reusejp_5098_;
}
v_reusejp_5098_:
{
return v___x_5099_;
}
}
}
}
else
{
lean_object* v_a_5102_; lean_object* v___x_5104_; uint8_t v_isShared_5105_; uint8_t v_isSharedCheck_5109_; 
lean_dec(v_a_4904_);
lean_dec(v_a_4902_);
lean_dec(v_a_4900_);
lean_dec(v_a_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5102_ = lean_ctor_get(v___x_4905_, 0);
v_isSharedCheck_5109_ = !lean_is_exclusive(v___x_4905_);
if (v_isSharedCheck_5109_ == 0)
{
v___x_5104_ = v___x_4905_;
v_isShared_5105_ = v_isSharedCheck_5109_;
goto v_resetjp_5103_;
}
else
{
lean_inc(v_a_5102_);
lean_dec(v___x_4905_);
v___x_5104_ = lean_box(0);
v_isShared_5105_ = v_isSharedCheck_5109_;
goto v_resetjp_5103_;
}
v_resetjp_5103_:
{
lean_object* v___x_5107_; 
if (v_isShared_5105_ == 0)
{
v___x_5107_ = v___x_5104_;
goto v_reusejp_5106_;
}
else
{
lean_object* v_reuseFailAlloc_5108_; 
v_reuseFailAlloc_5108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5108_, 0, v_a_5102_);
v___x_5107_ = v_reuseFailAlloc_5108_;
goto v_reusejp_5106_;
}
v_reusejp_5106_:
{
return v___x_5107_;
}
}
}
}
else
{
lean_object* v_a_5110_; lean_object* v___x_5112_; uint8_t v_isShared_5113_; uint8_t v_isSharedCheck_5117_; 
lean_dec(v_a_4902_);
lean_dec(v_a_4900_);
lean_dec(v_a_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5110_ = lean_ctor_get(v___x_4903_, 0);
v_isSharedCheck_5117_ = !lean_is_exclusive(v___x_4903_);
if (v_isSharedCheck_5117_ == 0)
{
v___x_5112_ = v___x_4903_;
v_isShared_5113_ = v_isSharedCheck_5117_;
goto v_resetjp_5111_;
}
else
{
lean_inc(v_a_5110_);
lean_dec(v___x_4903_);
v___x_5112_ = lean_box(0);
v_isShared_5113_ = v_isSharedCheck_5117_;
goto v_resetjp_5111_;
}
v_resetjp_5111_:
{
lean_object* v___x_5115_; 
if (v_isShared_5113_ == 0)
{
v___x_5115_ = v___x_5112_;
goto v_reusejp_5114_;
}
else
{
lean_object* v_reuseFailAlloc_5116_; 
v_reuseFailAlloc_5116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5116_, 0, v_a_5110_);
v___x_5115_ = v_reuseFailAlloc_5116_;
goto v_reusejp_5114_;
}
v_reusejp_5114_:
{
return v___x_5115_;
}
}
}
}
else
{
lean_object* v_a_5118_; lean_object* v___x_5120_; uint8_t v_isShared_5121_; uint8_t v_isSharedCheck_5125_; 
lean_dec(v_a_4900_);
lean_dec(v_a_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5118_ = lean_ctor_get(v___x_4901_, 0);
v_isSharedCheck_5125_ = !lean_is_exclusive(v___x_4901_);
if (v_isSharedCheck_5125_ == 0)
{
v___x_5120_ = v___x_4901_;
v_isShared_5121_ = v_isSharedCheck_5125_;
goto v_resetjp_5119_;
}
else
{
lean_inc(v_a_5118_);
lean_dec(v___x_4901_);
v___x_5120_ = lean_box(0);
v_isShared_5121_ = v_isSharedCheck_5125_;
goto v_resetjp_5119_;
}
v_resetjp_5119_:
{
lean_object* v___x_5123_; 
if (v_isShared_5121_ == 0)
{
v___x_5123_ = v___x_5120_;
goto v_reusejp_5122_;
}
else
{
lean_object* v_reuseFailAlloc_5124_; 
v_reuseFailAlloc_5124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5124_, 0, v_a_5118_);
v___x_5123_ = v_reuseFailAlloc_5124_;
goto v_reusejp_5122_;
}
v_reusejp_5122_:
{
return v___x_5123_;
}
}
}
}
else
{
lean_object* v_a_5126_; lean_object* v___x_5128_; uint8_t v_isShared_5129_; uint8_t v_isSharedCheck_5133_; 
lean_dec(v_a_4897_);
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5126_ = lean_ctor_get(v___x_4899_, 0);
v_isSharedCheck_5133_ = !lean_is_exclusive(v___x_4899_);
if (v_isSharedCheck_5133_ == 0)
{
v___x_5128_ = v___x_4899_;
v_isShared_5129_ = v_isSharedCheck_5133_;
goto v_resetjp_5127_;
}
else
{
lean_inc(v_a_5126_);
lean_dec(v___x_4899_);
v___x_5128_ = lean_box(0);
v_isShared_5129_ = v_isSharedCheck_5133_;
goto v_resetjp_5127_;
}
v_resetjp_5127_:
{
lean_object* v___x_5131_; 
if (v_isShared_5129_ == 0)
{
v___x_5131_ = v___x_5128_;
goto v_reusejp_5130_;
}
else
{
lean_object* v_reuseFailAlloc_5132_; 
v_reuseFailAlloc_5132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5132_, 0, v_a_5126_);
v___x_5131_ = v_reuseFailAlloc_5132_;
goto v_reusejp_5130_;
}
v_reusejp_5130_:
{
return v___x_5131_;
}
}
}
}
else
{
lean_object* v_a_5134_; lean_object* v___x_5136_; uint8_t v_isShared_5137_; uint8_t v_isSharedCheck_5141_; 
lean_del_object(v___x_4893_);
lean_dec(v_val_4891_);
lean_dec(v_a_4888_);
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5134_ = lean_ctor_get(v___x_4896_, 0);
v_isSharedCheck_5141_ = !lean_is_exclusive(v___x_4896_);
if (v_isSharedCheck_5141_ == 0)
{
v___x_5136_ = v___x_4896_;
v_isShared_5137_ = v_isSharedCheck_5141_;
goto v_resetjp_5135_;
}
else
{
lean_inc(v_a_5134_);
lean_dec(v___x_4896_);
v___x_5136_ = lean_box(0);
v_isShared_5137_ = v_isSharedCheck_5141_;
goto v_resetjp_5135_;
}
v_resetjp_5135_:
{
lean_object* v___x_5139_; 
if (v_isShared_5137_ == 0)
{
v___x_5139_ = v___x_5136_;
goto v_reusejp_5138_;
}
else
{
lean_object* v_reuseFailAlloc_5140_; 
v_reuseFailAlloc_5140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5140_, 0, v_a_5134_);
v___x_5139_ = v_reuseFailAlloc_5140_;
goto v_reusejp_5138_;
}
v_reusejp_5138_:
{
return v___x_5139_;
}
}
}
}
}
else
{
lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; 
lean_dec(v_a_4890_);
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v___x_5143_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7);
v___x_5144_ = l_Lean_indentExpr(v_a_4888_);
v___x_5145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5145_, 0, v___x_5143_);
lean_ctor_set(v___x_5145_, 1, v___x_5144_);
v___x_5146_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(v___x_5145_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_);
return v___x_5146_;
}
}
else
{
lean_dec(v_a_4888_);
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
return v___x_4889_;
}
}
else
{
lean_object* v_a_5147_; lean_object* v___x_5149_; uint8_t v_isShared_5150_; uint8_t v_isSharedCheck_5154_; 
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5147_ = lean_ctor_get(v___x_4887_, 0);
v_isSharedCheck_5154_ = !lean_is_exclusive(v___x_4887_);
if (v_isSharedCheck_5154_ == 0)
{
v___x_5149_ = v___x_4887_;
v_isShared_5150_ = v_isSharedCheck_5154_;
goto v_resetjp_5148_;
}
else
{
lean_inc(v_a_5147_);
lean_dec(v___x_4887_);
v___x_5149_ = lean_box(0);
v_isShared_5150_ = v_isSharedCheck_5154_;
goto v_resetjp_5148_;
}
v_resetjp_5148_:
{
lean_object* v___x_5152_; 
if (v_isShared_5150_ == 0)
{
v___x_5152_ = v___x_5149_;
goto v_reusejp_5151_;
}
else
{
lean_object* v_reuseFailAlloc_5153_; 
v_reuseFailAlloc_5153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5153_, 0, v_a_5147_);
v___x_5152_ = v_reuseFailAlloc_5153_;
goto v_reusejp_5151_;
}
v_reusejp_5151_:
{
return v___x_5152_;
}
}
}
}
else
{
lean_object* v_a_5155_; lean_object* v___x_5157_; uint8_t v_isShared_5158_; uint8_t v_isSharedCheck_5162_; 
lean_dec_ref_known(v___x_4882_, 2);
lean_dec(v_val_4879_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5155_ = lean_ctor_get(v___x_4885_, 0);
v_isSharedCheck_5162_ = !lean_is_exclusive(v___x_4885_);
if (v_isSharedCheck_5162_ == 0)
{
v___x_5157_ = v___x_4885_;
v_isShared_5158_ = v_isSharedCheck_5162_;
goto v_resetjp_5156_;
}
else
{
lean_inc(v_a_5155_);
lean_dec(v___x_4885_);
v___x_5157_ = lean_box(0);
v_isShared_5158_ = v_isSharedCheck_5162_;
goto v_resetjp_5156_;
}
v_resetjp_5156_:
{
lean_object* v___x_5160_; 
if (v_isShared_5158_ == 0)
{
v___x_5160_ = v___x_5157_;
goto v_reusejp_5159_;
}
else
{
lean_object* v_reuseFailAlloc_5161_; 
v_reuseFailAlloc_5161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5161_, 0, v_a_5155_);
v___x_5160_ = v_reuseFailAlloc_5161_;
goto v_reusejp_5159_;
}
v_reusejp_5159_:
{
return v___x_5160_;
}
}
}
}
else
{
lean_object* v___x_5163_; lean_object* v___x_5165_; 
lean_dec(v_a_4875_);
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v___x_5163_ = lean_box(0);
if (v_isShared_4878_ == 0)
{
lean_ctor_set(v___x_4877_, 0, v___x_5163_);
v___x_5165_ = v___x_4877_;
goto v_reusejp_5164_;
}
else
{
lean_object* v_reuseFailAlloc_5166_; 
v_reuseFailAlloc_5166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5166_, 0, v___x_5163_);
v___x_5165_ = v_reuseFailAlloc_5166_;
goto v_reusejp_5164_;
}
v_reusejp_5164_:
{
return v___x_5165_;
}
}
}
}
else
{
lean_object* v_a_5168_; lean_object* v___x_5170_; uint8_t v_isShared_5171_; uint8_t v_isSharedCheck_5175_; 
lean_dec(v_a_4873_);
lean_dec_ref(v_type_4860_);
v_a_5168_ = lean_ctor_get(v___x_4874_, 0);
v_isSharedCheck_5175_ = !lean_is_exclusive(v___x_4874_);
if (v_isSharedCheck_5175_ == 0)
{
v___x_5170_ = v___x_4874_;
v_isShared_5171_ = v_isSharedCheck_5175_;
goto v_resetjp_5169_;
}
else
{
lean_inc(v_a_5168_);
lean_dec(v___x_4874_);
v___x_5170_ = lean_box(0);
v_isShared_5171_ = v_isSharedCheck_5175_;
goto v_resetjp_5169_;
}
v_resetjp_5169_:
{
lean_object* v___x_5173_; 
if (v_isShared_5171_ == 0)
{
v___x_5173_ = v___x_5170_;
goto v_reusejp_5172_;
}
else
{
lean_object* v_reuseFailAlloc_5174_; 
v_reuseFailAlloc_5174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5174_, 0, v_a_5168_);
v___x_5173_ = v_reuseFailAlloc_5174_;
goto v_reusejp_5172_;
}
v_reusejp_5172_:
{
return v___x_5173_;
}
}
}
}
else
{
lean_object* v_a_5176_; lean_object* v___x_5178_; uint8_t v_isShared_5179_; uint8_t v_isSharedCheck_5183_; 
lean_dec_ref(v_type_4860_);
v_a_5176_ = lean_ctor_get(v___x_4872_, 0);
v_isSharedCheck_5183_ = !lean_is_exclusive(v___x_4872_);
if (v_isSharedCheck_5183_ == 0)
{
v___x_5178_ = v___x_4872_;
v_isShared_5179_ = v_isSharedCheck_5183_;
goto v_resetjp_5177_;
}
else
{
lean_inc(v_a_5176_);
lean_dec(v___x_4872_);
v___x_5178_ = lean_box(0);
v_isShared_5179_ = v_isSharedCheck_5183_;
goto v_resetjp_5177_;
}
v_resetjp_5177_:
{
lean_object* v___x_5181_; 
if (v_isShared_5179_ == 0)
{
v___x_5181_ = v___x_5178_;
goto v_reusejp_5180_;
}
else
{
lean_object* v_reuseFailAlloc_5182_; 
v_reuseFailAlloc_5182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5182_, 0, v_a_5176_);
v___x_5181_ = v_reuseFailAlloc_5182_;
goto v_reusejp_5180_;
}
v_reusejp_5180_:
{
return v___x_5181_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___boxed(lean_object* v_type_5184_, lean_object* v_a_5185_, lean_object* v_a_5186_, lean_object* v_a_5187_, lean_object* v_a_5188_, lean_object* v_a_5189_, lean_object* v_a_5190_, lean_object* v_a_5191_, lean_object* v_a_5192_, lean_object* v_a_5193_, lean_object* v_a_5194_, lean_object* v_a_5195_){
_start:
{
lean_object* v_res_5196_; 
v_res_5196_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f(v_type_5184_, v_a_5185_, v_a_5186_, v_a_5187_, v_a_5188_, v_a_5189_, v_a_5190_, v_a_5191_, v_a_5192_, v_a_5193_, v_a_5194_);
lean_dec(v_a_5194_);
lean_dec_ref(v_a_5193_);
lean_dec(v_a_5192_);
lean_dec_ref(v_a_5191_);
lean_dec(v_a_5190_);
lean_dec_ref(v_a_5189_);
lean_dec(v_a_5188_);
lean_dec_ref(v_a_5187_);
lean_dec(v_a_5186_);
lean_dec(v_a_5185_);
return v_res_5196_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0(lean_object* v_00_u03b1_5197_, lean_object* v_msg_5198_, lean_object* v___y_5199_, lean_object* v___y_5200_, lean_object* v___y_5201_, lean_object* v___y_5202_, lean_object* v___y_5203_, lean_object* v___y_5204_, lean_object* v___y_5205_, lean_object* v___y_5206_, lean_object* v___y_5207_, lean_object* v___y_5208_){
_start:
{
lean_object* v___x_5210_; 
v___x_5210_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(v_msg_5198_, v___y_5205_, v___y_5206_, v___y_5207_, v___y_5208_);
return v___x_5210_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___boxed(lean_object* v_00_u03b1_5211_, lean_object* v_msg_5212_, lean_object* v___y_5213_, lean_object* v___y_5214_, lean_object* v___y_5215_, lean_object* v___y_5216_, lean_object* v___y_5217_, lean_object* v___y_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_, lean_object* v___y_5223_){
_start:
{
lean_object* v_res_5224_; 
v_res_5224_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0(v_00_u03b1_5211_, v_msg_5212_, v___y_5213_, v___y_5214_, v___y_5215_, v___y_5216_, v___y_5217_, v___y_5218_, v___y_5219_, v___y_5220_, v___y_5221_, v___y_5222_);
lean_dec(v___y_5222_);
lean_dec_ref(v___y_5221_);
lean_dec(v___y_5220_);
lean_dec_ref(v___y_5219_);
lean_dec(v___y_5218_);
lean_dec_ref(v___y_5217_);
lean_dec(v___y_5216_);
lean_dec_ref(v___y_5215_);
lean_dec(v___y_5214_);
lean_dec(v___y_5213_);
return v_res_5224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___lam__0(lean_object* v_type_5225_, lean_object* v_a_5226_, lean_object* v_s_5227_){
_start:
{
lean_object* v_structs_5228_; lean_object* v_typeIdOf_5229_; lean_object* v_exprToStructId_5230_; lean_object* v_exprToStructIdEntries_5231_; lean_object* v_forbiddenNatModules_5232_; lean_object* v_natStructs_5233_; lean_object* v_natTypeIdOf_5234_; lean_object* v_exprToNatStructId_5235_; lean_object* v___x_5237_; uint8_t v_isShared_5238_; uint8_t v_isSharedCheck_5243_; 
v_structs_5228_ = lean_ctor_get(v_s_5227_, 0);
v_typeIdOf_5229_ = lean_ctor_get(v_s_5227_, 1);
v_exprToStructId_5230_ = lean_ctor_get(v_s_5227_, 2);
v_exprToStructIdEntries_5231_ = lean_ctor_get(v_s_5227_, 3);
v_forbiddenNatModules_5232_ = lean_ctor_get(v_s_5227_, 4);
v_natStructs_5233_ = lean_ctor_get(v_s_5227_, 5);
v_natTypeIdOf_5234_ = lean_ctor_get(v_s_5227_, 6);
v_exprToNatStructId_5235_ = lean_ctor_get(v_s_5227_, 7);
v_isSharedCheck_5243_ = !lean_is_exclusive(v_s_5227_);
if (v_isSharedCheck_5243_ == 0)
{
v___x_5237_ = v_s_5227_;
v_isShared_5238_ = v_isSharedCheck_5243_;
goto v_resetjp_5236_;
}
else
{
lean_inc(v_exprToNatStructId_5235_);
lean_inc(v_natTypeIdOf_5234_);
lean_inc(v_natStructs_5233_);
lean_inc(v_forbiddenNatModules_5232_);
lean_inc(v_exprToStructIdEntries_5231_);
lean_inc(v_exprToStructId_5230_);
lean_inc(v_typeIdOf_5229_);
lean_inc(v_structs_5228_);
lean_dec(v_s_5227_);
v___x_5237_ = lean_box(0);
v_isShared_5238_ = v_isSharedCheck_5243_;
goto v_resetjp_5236_;
}
v_resetjp_5236_:
{
lean_object* v___x_5239_; lean_object* v___x_5241_; 
v___x_5239_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_goCore_x3f_spec__0___redArg(v_natTypeIdOf_5234_, v_type_5225_, v_a_5226_);
if (v_isShared_5238_ == 0)
{
lean_ctor_set(v___x_5237_, 6, v___x_5239_);
v___x_5241_ = v___x_5237_;
goto v_reusejp_5240_;
}
else
{
lean_object* v_reuseFailAlloc_5242_; 
v_reuseFailAlloc_5242_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_5242_, 0, v_structs_5228_);
lean_ctor_set(v_reuseFailAlloc_5242_, 1, v_typeIdOf_5229_);
lean_ctor_set(v_reuseFailAlloc_5242_, 2, v_exprToStructId_5230_);
lean_ctor_set(v_reuseFailAlloc_5242_, 3, v_exprToStructIdEntries_5231_);
lean_ctor_set(v_reuseFailAlloc_5242_, 4, v_forbiddenNatModules_5232_);
lean_ctor_set(v_reuseFailAlloc_5242_, 5, v_natStructs_5233_);
lean_ctor_set(v_reuseFailAlloc_5242_, 6, v___x_5239_);
lean_ctor_set(v_reuseFailAlloc_5242_, 7, v_exprToNatStructId_5235_);
v___x_5241_ = v_reuseFailAlloc_5242_;
goto v_reusejp_5240_;
}
v_reusejp_5240_:
{
return v___x_5241_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_5244_, lean_object* v_i_5245_, lean_object* v_k_5246_){
_start:
{
lean_object* v___x_5247_; uint8_t v___x_5248_; 
v___x_5247_ = lean_array_get_size(v_keys_5244_);
v___x_5248_ = lean_nat_dec_lt(v_i_5245_, v___x_5247_);
if (v___x_5248_ == 0)
{
lean_dec(v_i_5245_);
return v___x_5248_;
}
else
{
lean_object* v_k_x27_5249_; size_t v___x_5250_; size_t v___x_5251_; uint8_t v___x_5252_; 
v_k_x27_5249_ = lean_array_fget_borrowed(v_keys_5244_, v_i_5245_);
v___x_5250_ = lean_ptr_addr(v_k_5246_);
v___x_5251_ = lean_ptr_addr(v_k_x27_5249_);
v___x_5252_ = lean_usize_dec_eq(v___x_5250_, v___x_5251_);
if (v___x_5252_ == 0)
{
lean_object* v___x_5253_; lean_object* v___x_5254_; 
v___x_5253_ = lean_unsigned_to_nat(1u);
v___x_5254_ = lean_nat_add(v_i_5245_, v___x_5253_);
lean_dec(v_i_5245_);
v_i_5245_ = v___x_5254_;
goto _start;
}
else
{
lean_dec(v_i_5245_);
return v___x_5248_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_5256_, lean_object* v_i_5257_, lean_object* v_k_5258_){
_start:
{
uint8_t v_res_5259_; lean_object* v_r_5260_; 
v_res_5259_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5256_, v_i_5257_, v_k_5258_);
lean_dec_ref(v_k_5258_);
lean_dec_ref(v_keys_5256_);
v_r_5260_ = lean_box(v_res_5259_);
return v_r_5260_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(lean_object* v_x_5261_, size_t v_x_5262_, lean_object* v_x_5263_){
_start:
{
if (lean_obj_tag(v_x_5261_) == 0)
{
lean_object* v_es_5264_; lean_object* v___x_5265_; size_t v___x_5266_; size_t v___x_5267_; lean_object* v_j_5268_; lean_object* v___x_5269_; 
v_es_5264_ = lean_ctor_get(v_x_5261_, 0);
v___x_5265_ = lean_box(2);
v___x_5266_ = ((size_t)31ULL);
v___x_5267_ = lean_usize_land(v_x_5262_, v___x_5266_);
v_j_5268_ = lean_usize_to_nat(v___x_5267_);
v___x_5269_ = lean_array_get_borrowed(v___x_5265_, v_es_5264_, v_j_5268_);
lean_dec(v_j_5268_);
switch(lean_obj_tag(v___x_5269_))
{
case 0:
{
lean_object* v_key_5270_; size_t v___x_5271_; size_t v___x_5272_; uint8_t v___x_5273_; 
v_key_5270_ = lean_ctor_get(v___x_5269_, 0);
v___x_5271_ = lean_ptr_addr(v_x_5263_);
v___x_5272_ = lean_ptr_addr(v_key_5270_);
v___x_5273_ = lean_usize_dec_eq(v___x_5271_, v___x_5272_);
return v___x_5273_;
}
case 1:
{
lean_object* v_node_5274_; size_t v___x_5275_; size_t v___x_5276_; 
v_node_5274_ = lean_ctor_get(v___x_5269_, 0);
v___x_5275_ = ((size_t)5ULL);
v___x_5276_ = lean_usize_shift_right(v_x_5262_, v___x_5275_);
v_x_5261_ = v_node_5274_;
v_x_5262_ = v___x_5276_;
goto _start;
}
default: 
{
uint8_t v___x_5278_; 
v___x_5278_ = 0;
return v___x_5278_;
}
}
}
else
{
lean_object* v_ks_5279_; lean_object* v___x_5280_; uint8_t v___x_5281_; 
v_ks_5279_ = lean_ctor_get(v_x_5261_, 0);
v___x_5280_ = lean_unsigned_to_nat(0u);
v___x_5281_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(v_ks_5279_, v___x_5280_, v_x_5263_);
return v___x_5281_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_5282_, lean_object* v_x_5283_, lean_object* v_x_5284_){
_start:
{
size_t v_x_10507__boxed_5285_; uint8_t v_res_5286_; lean_object* v_r_5287_; 
v_x_10507__boxed_5285_ = lean_unbox_usize(v_x_5283_);
lean_dec(v_x_5283_);
v_res_5286_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(v_x_5282_, v_x_10507__boxed_5285_, v_x_5284_);
lean_dec_ref(v_x_5284_);
lean_dec_ref(v_x_5282_);
v_r_5287_ = lean_box(v_res_5286_);
return v_r_5287_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(lean_object* v_x_5288_, lean_object* v_x_5289_){
_start:
{
size_t v___x_5290_; size_t v___x_5291_; size_t v___x_5292_; uint64_t v___x_5293_; size_t v___x_5294_; uint8_t v___x_5295_; 
v___x_5290_ = lean_ptr_addr(v_x_5289_);
v___x_5291_ = ((size_t)3ULL);
v___x_5292_ = lean_usize_shift_right(v___x_5290_, v___x_5291_);
v___x_5293_ = lean_usize_to_uint64(v___x_5292_);
v___x_5294_ = lean_uint64_to_usize(v___x_5293_);
v___x_5295_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(v_x_5288_, v___x_5294_, v_x_5289_);
return v___x_5295_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg___boxed(lean_object* v_x_5296_, lean_object* v_x_5297_){
_start:
{
uint8_t v_res_5298_; lean_object* v_r_5299_; 
v_res_5298_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(v_x_5296_, v_x_5297_);
lean_dec_ref(v_x_5297_);
lean_dec_ref(v_x_5296_);
v_r_5299_ = lean_box(v_res_5298_);
return v_r_5299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f(lean_object* v_type_5300_, lean_object* v_a_5301_, lean_object* v_a_5302_, lean_object* v_a_5303_, lean_object* v_a_5304_, lean_object* v_a_5305_, lean_object* v_a_5306_, lean_object* v_a_5307_, lean_object* v_a_5308_, lean_object* v_a_5309_, lean_object* v_a_5310_){
_start:
{
lean_object* v___x_5315_; 
v___x_5315_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_5303_);
if (lean_obj_tag(v___x_5315_) == 0)
{
lean_object* v_a_5316_; lean_object* v___x_5318_; uint8_t v_isShared_5319_; uint8_t v_isSharedCheck_5389_; 
v_a_5316_ = lean_ctor_get(v___x_5315_, 0);
v_isSharedCheck_5389_ = !lean_is_exclusive(v___x_5315_);
if (v_isSharedCheck_5389_ == 0)
{
v___x_5318_ = v___x_5315_;
v_isShared_5319_ = v_isSharedCheck_5389_;
goto v_resetjp_5317_;
}
else
{
lean_inc(v_a_5316_);
lean_dec(v___x_5315_);
v___x_5318_ = lean_box(0);
v_isShared_5319_ = v_isSharedCheck_5389_;
goto v_resetjp_5317_;
}
v_resetjp_5317_:
{
uint8_t v_linarith_5320_; 
v_linarith_5320_ = lean_ctor_get_uint8(v_a_5316_, sizeof(void*)*18 + 23);
lean_dec(v_a_5316_);
if (v_linarith_5320_ == 0)
{
lean_object* v___x_5321_; lean_object* v___x_5323_; 
lean_dec_ref(v_type_5300_);
v___x_5321_ = lean_box(0);
if (v_isShared_5319_ == 0)
{
lean_ctor_set(v___x_5318_, 0, v___x_5321_);
v___x_5323_ = v___x_5318_;
goto v_reusejp_5322_;
}
else
{
lean_object* v_reuseFailAlloc_5324_; 
v_reuseFailAlloc_5324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5324_, 0, v___x_5321_);
v___x_5323_ = v_reuseFailAlloc_5324_;
goto v_reusejp_5322_;
}
v_reusejp_5322_:
{
return v___x_5323_;
}
}
else
{
lean_object* v___x_5325_; 
lean_del_object(v___x_5318_);
v___x_5325_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v_a_5301_, v_a_5309_);
if (lean_obj_tag(v___x_5325_) == 0)
{
lean_object* v_a_5326_; lean_object* v_forbiddenNatModules_5327_; uint8_t v___x_5328_; 
v_a_5326_ = lean_ctor_get(v___x_5325_, 0);
lean_inc(v_a_5326_);
lean_dec_ref_known(v___x_5325_, 1);
v_forbiddenNatModules_5327_ = lean_ctor_get(v_a_5326_, 4);
lean_inc_ref(v_forbiddenNatModules_5327_);
lean_dec(v_a_5326_);
v___x_5328_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(v_forbiddenNatModules_5327_, v_type_5300_);
lean_dec_ref(v_forbiddenNatModules_5327_);
if (v___x_5328_ == 0)
{
lean_object* v___x_5329_; 
lean_inc_ref(v_type_5300_);
v___x_5329_ = l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType___redArg(v_type_5300_, v_a_5303_, v_a_5308_);
if (lean_obj_tag(v___x_5329_) == 0)
{
lean_object* v_a_5330_; uint8_t v___x_5331_; 
v_a_5330_ = lean_ctor_get(v___x_5329_, 0);
lean_inc(v_a_5330_);
lean_dec_ref_known(v___x_5329_, 1);
v___x_5331_ = lean_unbox(v_a_5330_);
lean_dec(v_a_5330_);
if (v___x_5331_ == 0)
{
lean_object* v___x_5332_; 
v___x_5332_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v_a_5301_, v_a_5309_);
if (lean_obj_tag(v___x_5332_) == 0)
{
lean_object* v_a_5333_; lean_object* v___x_5335_; uint8_t v_isShared_5336_; uint8_t v_isSharedCheck_5364_; 
v_a_5333_ = lean_ctor_get(v___x_5332_, 0);
v_isSharedCheck_5364_ = !lean_is_exclusive(v___x_5332_);
if (v_isSharedCheck_5364_ == 0)
{
v___x_5335_ = v___x_5332_;
v_isShared_5336_ = v_isSharedCheck_5364_;
goto v_resetjp_5334_;
}
else
{
lean_inc(v_a_5333_);
lean_dec(v___x_5332_);
v___x_5335_ = lean_box(0);
v_isShared_5336_ = v_isSharedCheck_5364_;
goto v_resetjp_5334_;
}
v_resetjp_5334_:
{
lean_object* v_natTypeIdOf_5337_; lean_object* v___x_5338_; 
v_natTypeIdOf_5337_ = lean_ctor_get(v_a_5333_, 6);
lean_inc_ref(v_natTypeIdOf_5337_);
lean_dec(v_a_5333_);
v___x_5338_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(v_natTypeIdOf_5337_, v_type_5300_);
lean_dec_ref(v_natTypeIdOf_5337_);
if (lean_obj_tag(v___x_5338_) == 1)
{
lean_object* v_val_5339_; lean_object* v___x_5341_; 
lean_dec_ref(v_type_5300_);
v_val_5339_ = lean_ctor_get(v___x_5338_, 0);
lean_inc(v_val_5339_);
lean_dec_ref_known(v___x_5338_, 1);
if (v_isShared_5336_ == 0)
{
lean_ctor_set(v___x_5335_, 0, v_val_5339_);
v___x_5341_ = v___x_5335_;
goto v_reusejp_5340_;
}
else
{
lean_object* v_reuseFailAlloc_5342_; 
v_reuseFailAlloc_5342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5342_, 0, v_val_5339_);
v___x_5341_ = v_reuseFailAlloc_5342_;
goto v_reusejp_5340_;
}
v_reusejp_5340_:
{
return v___x_5341_;
}
}
else
{
lean_object* v___x_5343_; 
lean_dec(v___x_5338_);
lean_del_object(v___x_5335_);
lean_inc_ref(v_type_5300_);
v___x_5343_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f(v_type_5300_, v_a_5301_, v_a_5302_, v_a_5303_, v_a_5304_, v_a_5305_, v_a_5306_, v_a_5307_, v_a_5308_, v_a_5309_, v_a_5310_);
if (lean_obj_tag(v___x_5343_) == 0)
{
lean_object* v_a_5344_; lean_object* v___f_5345_; lean_object* v___x_5346_; lean_object* v___x_5347_; 
v_a_5344_ = lean_ctor_get(v___x_5343_, 0);
lean_inc_n(v_a_5344_, 2);
lean_dec_ref_known(v___x_5343_, 1);
v___f_5345_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___lam__0), 3, 2);
lean_closure_set(v___f_5345_, 0, v_type_5300_);
lean_closure_set(v___f_5345_, 1, v_a_5344_);
v___x_5346_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_5347_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_5346_, v___f_5345_, v_a_5301_);
if (lean_obj_tag(v___x_5347_) == 0)
{
lean_object* v___x_5349_; uint8_t v_isShared_5350_; uint8_t v_isSharedCheck_5354_; 
v_isSharedCheck_5354_ = !lean_is_exclusive(v___x_5347_);
if (v_isSharedCheck_5354_ == 0)
{
lean_object* v_unused_5355_; 
v_unused_5355_ = lean_ctor_get(v___x_5347_, 0);
lean_dec(v_unused_5355_);
v___x_5349_ = v___x_5347_;
v_isShared_5350_ = v_isSharedCheck_5354_;
goto v_resetjp_5348_;
}
else
{
lean_dec(v___x_5347_);
v___x_5349_ = lean_box(0);
v_isShared_5350_ = v_isSharedCheck_5354_;
goto v_resetjp_5348_;
}
v_resetjp_5348_:
{
lean_object* v___x_5352_; 
if (v_isShared_5350_ == 0)
{
lean_ctor_set(v___x_5349_, 0, v_a_5344_);
v___x_5352_ = v___x_5349_;
goto v_reusejp_5351_;
}
else
{
lean_object* v_reuseFailAlloc_5353_; 
v_reuseFailAlloc_5353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5353_, 0, v_a_5344_);
v___x_5352_ = v_reuseFailAlloc_5353_;
goto v_reusejp_5351_;
}
v_reusejp_5351_:
{
return v___x_5352_;
}
}
}
else
{
lean_object* v_a_5356_; lean_object* v___x_5358_; uint8_t v_isShared_5359_; uint8_t v_isSharedCheck_5363_; 
lean_dec(v_a_5344_);
v_a_5356_ = lean_ctor_get(v___x_5347_, 0);
v_isSharedCheck_5363_ = !lean_is_exclusive(v___x_5347_);
if (v_isSharedCheck_5363_ == 0)
{
v___x_5358_ = v___x_5347_;
v_isShared_5359_ = v_isSharedCheck_5363_;
goto v_resetjp_5357_;
}
else
{
lean_inc(v_a_5356_);
lean_dec(v___x_5347_);
v___x_5358_ = lean_box(0);
v_isShared_5359_ = v_isSharedCheck_5363_;
goto v_resetjp_5357_;
}
v_resetjp_5357_:
{
lean_object* v___x_5361_; 
if (v_isShared_5359_ == 0)
{
v___x_5361_ = v___x_5358_;
goto v_reusejp_5360_;
}
else
{
lean_object* v_reuseFailAlloc_5362_; 
v_reuseFailAlloc_5362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5362_, 0, v_a_5356_);
v___x_5361_ = v_reuseFailAlloc_5362_;
goto v_reusejp_5360_;
}
v_reusejp_5360_:
{
return v___x_5361_;
}
}
}
}
else
{
lean_dec_ref(v_type_5300_);
return v___x_5343_;
}
}
}
}
else
{
lean_object* v_a_5365_; lean_object* v___x_5367_; uint8_t v_isShared_5368_; uint8_t v_isSharedCheck_5372_; 
lean_dec_ref(v_type_5300_);
v_a_5365_ = lean_ctor_get(v___x_5332_, 0);
v_isSharedCheck_5372_ = !lean_is_exclusive(v___x_5332_);
if (v_isSharedCheck_5372_ == 0)
{
v___x_5367_ = v___x_5332_;
v_isShared_5368_ = v_isSharedCheck_5372_;
goto v_resetjp_5366_;
}
else
{
lean_inc(v_a_5365_);
lean_dec(v___x_5332_);
v___x_5367_ = lean_box(0);
v_isShared_5368_ = v_isSharedCheck_5372_;
goto v_resetjp_5366_;
}
v_resetjp_5366_:
{
lean_object* v___x_5370_; 
if (v_isShared_5368_ == 0)
{
v___x_5370_ = v___x_5367_;
goto v_reusejp_5369_;
}
else
{
lean_object* v_reuseFailAlloc_5371_; 
v_reuseFailAlloc_5371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5371_, 0, v_a_5365_);
v___x_5370_ = v_reuseFailAlloc_5371_;
goto v_reusejp_5369_;
}
v_reusejp_5369_:
{
return v___x_5370_;
}
}
}
}
else
{
lean_dec_ref(v_type_5300_);
goto v___jp_5312_;
}
}
else
{
lean_object* v_a_5373_; lean_object* v___x_5375_; uint8_t v_isShared_5376_; uint8_t v_isSharedCheck_5380_; 
lean_dec_ref(v_type_5300_);
v_a_5373_ = lean_ctor_get(v___x_5329_, 0);
v_isSharedCheck_5380_ = !lean_is_exclusive(v___x_5329_);
if (v_isSharedCheck_5380_ == 0)
{
v___x_5375_ = v___x_5329_;
v_isShared_5376_ = v_isSharedCheck_5380_;
goto v_resetjp_5374_;
}
else
{
lean_inc(v_a_5373_);
lean_dec(v___x_5329_);
v___x_5375_ = lean_box(0);
v_isShared_5376_ = v_isSharedCheck_5380_;
goto v_resetjp_5374_;
}
v_resetjp_5374_:
{
lean_object* v___x_5378_; 
if (v_isShared_5376_ == 0)
{
v___x_5378_ = v___x_5375_;
goto v_reusejp_5377_;
}
else
{
lean_object* v_reuseFailAlloc_5379_; 
v_reuseFailAlloc_5379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5379_, 0, v_a_5373_);
v___x_5378_ = v_reuseFailAlloc_5379_;
goto v_reusejp_5377_;
}
v_reusejp_5377_:
{
return v___x_5378_;
}
}
}
}
else
{
lean_dec_ref(v_type_5300_);
goto v___jp_5312_;
}
}
else
{
lean_object* v_a_5381_; lean_object* v___x_5383_; uint8_t v_isShared_5384_; uint8_t v_isSharedCheck_5388_; 
lean_dec_ref(v_type_5300_);
v_a_5381_ = lean_ctor_get(v___x_5325_, 0);
v_isSharedCheck_5388_ = !lean_is_exclusive(v___x_5325_);
if (v_isSharedCheck_5388_ == 0)
{
v___x_5383_ = v___x_5325_;
v_isShared_5384_ = v_isSharedCheck_5388_;
goto v_resetjp_5382_;
}
else
{
lean_inc(v_a_5381_);
lean_dec(v___x_5325_);
v___x_5383_ = lean_box(0);
v_isShared_5384_ = v_isSharedCheck_5388_;
goto v_resetjp_5382_;
}
v_resetjp_5382_:
{
lean_object* v___x_5386_; 
if (v_isShared_5384_ == 0)
{
v___x_5386_ = v___x_5383_;
goto v_reusejp_5385_;
}
else
{
lean_object* v_reuseFailAlloc_5387_; 
v_reuseFailAlloc_5387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5387_, 0, v_a_5381_);
v___x_5386_ = v_reuseFailAlloc_5387_;
goto v_reusejp_5385_;
}
v_reusejp_5385_:
{
return v___x_5386_;
}
}
}
}
}
}
else
{
lean_object* v_a_5390_; lean_object* v___x_5392_; uint8_t v_isShared_5393_; uint8_t v_isSharedCheck_5397_; 
lean_dec_ref(v_type_5300_);
v_a_5390_ = lean_ctor_get(v___x_5315_, 0);
v_isSharedCheck_5397_ = !lean_is_exclusive(v___x_5315_);
if (v_isSharedCheck_5397_ == 0)
{
v___x_5392_ = v___x_5315_;
v_isShared_5393_ = v_isSharedCheck_5397_;
goto v_resetjp_5391_;
}
else
{
lean_inc(v_a_5390_);
lean_dec(v___x_5315_);
v___x_5392_ = lean_box(0);
v_isShared_5393_ = v_isSharedCheck_5397_;
goto v_resetjp_5391_;
}
v_resetjp_5391_:
{
lean_object* v___x_5395_; 
if (v_isShared_5393_ == 0)
{
v___x_5395_ = v___x_5392_;
goto v_reusejp_5394_;
}
else
{
lean_object* v_reuseFailAlloc_5396_; 
v_reuseFailAlloc_5396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5396_, 0, v_a_5390_);
v___x_5395_ = v_reuseFailAlloc_5396_;
goto v_reusejp_5394_;
}
v_reusejp_5394_:
{
return v___x_5395_;
}
}
}
v___jp_5312_:
{
lean_object* v___x_5313_; lean_object* v___x_5314_; 
v___x_5313_ = lean_box(0);
v___x_5314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5314_, 0, v___x_5313_);
return v___x_5314_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___boxed(lean_object* v_type_5398_, lean_object* v_a_5399_, lean_object* v_a_5400_, lean_object* v_a_5401_, lean_object* v_a_5402_, lean_object* v_a_5403_, lean_object* v_a_5404_, lean_object* v_a_5405_, lean_object* v_a_5406_, lean_object* v_a_5407_, lean_object* v_a_5408_, lean_object* v_a_5409_){
_start:
{
lean_object* v_res_5410_; 
v_res_5410_ = l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f(v_type_5398_, v_a_5399_, v_a_5400_, v_a_5401_, v_a_5402_, v_a_5403_, v_a_5404_, v_a_5405_, v_a_5406_, v_a_5407_, v_a_5408_);
lean_dec(v_a_5408_);
lean_dec_ref(v_a_5407_);
lean_dec(v_a_5406_);
lean_dec_ref(v_a_5405_);
lean_dec(v_a_5404_);
lean_dec_ref(v_a_5403_);
lean_dec(v_a_5402_);
lean_dec_ref(v_a_5401_);
lean_dec(v_a_5400_);
lean_dec(v_a_5399_);
return v_res_5410_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0(lean_object* v_00_u03b2_5411_, lean_object* v_x_5412_, lean_object* v_x_5413_){
_start:
{
uint8_t v___x_5414_; 
v___x_5414_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(v_x_5412_, v_x_5413_);
return v___x_5414_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___boxed(lean_object* v_00_u03b2_5415_, lean_object* v_x_5416_, lean_object* v_x_5417_){
_start:
{
uint8_t v_res_5418_; lean_object* v_r_5419_; 
v_res_5418_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0(v_00_u03b2_5415_, v_x_5416_, v_x_5417_);
lean_dec_ref(v_x_5417_);
lean_dec_ref(v_x_5416_);
v_r_5419_ = lean_box(v_res_5418_);
return v_r_5419_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0(lean_object* v_00_u03b2_5420_, lean_object* v_x_5421_, size_t v_x_5422_, lean_object* v_x_5423_){
_start:
{
uint8_t v___x_5424_; 
v___x_5424_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(v_x_5421_, v_x_5422_, v_x_5423_);
return v___x_5424_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5425_, lean_object* v_x_5426_, lean_object* v_x_5427_, lean_object* v_x_5428_){
_start:
{
size_t v_x_10749__boxed_5429_; uint8_t v_res_5430_; lean_object* v_r_5431_; 
v_x_10749__boxed_5429_ = lean_unbox_usize(v_x_5427_);
lean_dec(v_x_5427_);
v_res_5430_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0(v_00_u03b2_5425_, v_x_5426_, v_x_10749__boxed_5429_, v_x_5428_);
lean_dec_ref(v_x_5428_);
lean_dec_ref(v_x_5426_);
v_r_5431_ = lean_box(v_res_5430_);
return v_r_5431_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5432_, lean_object* v_keys_5433_, lean_object* v_vals_5434_, lean_object* v_heq_5435_, lean_object* v_i_5436_, lean_object* v_k_5437_){
_start:
{
uint8_t v___x_5438_; 
v___x_5438_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5433_, v_i_5436_, v_k_5437_);
return v___x_5438_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5439_, lean_object* v_keys_5440_, lean_object* v_vals_5441_, lean_object* v_heq_5442_, lean_object* v_i_5443_, lean_object* v_k_5444_){
_start:
{
uint8_t v_res_5445_; lean_object* v_r_5446_; 
v_res_5445_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1(v_00_u03b2_5439_, v_keys_5440_, v_vals_5441_, v_heq_5442_, v_i_5443_, v_k_5444_);
lean_dec_ref(v_k_5444_);
lean_dec_ref(v_vals_5441_);
lean_dec_ref(v_keys_5440_);
v_r_5446_ = lean_box(v_res_5445_);
return v_r_5446_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Var(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Arith_Insts(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Module_Envelope(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Arith_Insts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Module_Envelope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Var(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Arith_Insts(uint8_t builtin);
lean_object* initialize_Init_Grind_Module_Envelope(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Arith_Insts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Module_Envelope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
}
#ifdef __cplusplus
}
#endif
