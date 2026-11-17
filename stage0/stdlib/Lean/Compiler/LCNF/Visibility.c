// Lean compiler output
// Module: Lean.Compiler.LCNF.Visibility
// Imports: public import Lean.Compiler.ImplementedByAttr import Lean.ExtraModUses import Lean.Compiler.Options import Lean.Compiler.LCNF.PhaseExt public import Lean.Compiler.LCNF.PassManager
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
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(lean_object*, uint8_t, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Phase_toPurity(uint8_t);
lean_object* l_Lean_Compiler_LCNF_Decl_castPurity_x21(uint8_t, lean_object*, uint8_t);
uint8_t l_Lean_instBEqIRPhases_beq(uint8_t, uint8_t);
uint8_t l_Lean_isPrivateName(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
uint8_t l_Lean_getIRPhases(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_compiler_relaxedMetaCheck;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Environment_isImportedConst(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_isTemplateLike___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
extern lean_object* l_Lean_Compiler_LCNF_baseExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
extern lean_object* l_Lean_Compiler_compiler_inLeanIR;
lean_object* l_Lean_Compiler_LCNF_setDeclTransparent(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_setDeclPublic(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqConstantKind_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_Compiler_LCNF_compiler_small;
uint8_t l_Lean_Compiler_LCNF_Code_sizeLe(uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_isDeclTransparent(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_isDeclPublic(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
extern lean_object* l_Lean_Compiler_compiler_checkMeta;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_collectLetValue___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_collectLetValue(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_collectLetValue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__2;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__3;
static const lean_string_object l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__4 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__4_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__5 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_markDeclPublicRec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_markDeclPublicRec___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_markDeclPublicRec___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "inferVisibility"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__0_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__2_value_aux_0),((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(109, 148, 126, 193, 57, 193, 124, 170)}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__2_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__3 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__3_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__4 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__4_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__5;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Marking "};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__6_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__7;
static const lean_string_object l_Lean_Compiler_LCNF_markDeclPublicRec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = " as transparent because it is opaque and its body looks relevant"};
static const lean_object* l_Lean_Compiler_LCNF_markDeclPublicRec___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_markDeclPublicRec___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_markDeclPublicRec___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_markDeclPublicRec___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_markDeclPublicRec(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = " as opaque because it is used by transparent "};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__8 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__8_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__9;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_markDeclPublicRec___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_markDeclPublicRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Invalid definition `"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__0_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__1;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "`, may not access declaration `"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__3;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` marked as `meta`"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__4 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__4_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__5;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "` imported as `meta`; consider adding `import "};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__6_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__7;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__8 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__8_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Invalid `meta` definition `"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__10 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__10_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__11;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "`, `"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__12 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__12_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "` is not accessible here; consider adding `public meta import "};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__14 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__14_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__15;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "` not marked `meta`"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__16 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__16_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__17;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Invalid public `meta` definition `"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__18 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__18_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__19;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "` is not accessible here; consider adding `public import "};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__20 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__20_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__21;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2(uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go___lam__0(uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go(uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_Compiler_LCNF_checkMeta_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_Compiler_LCNF_checkMeta_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_checkMeta(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_checkMeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_Compiler_LCNF_checkMeta_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_Compiler_LCNF_checkMeta_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__7;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__8;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__13_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__14_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__16_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__0;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Cannot compile inline/specializing declaration `"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__1_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__2;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "` as it uses `"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__3 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__3_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__4;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "` of module `"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__5 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__5_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__6;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "` which must be imported publicly. This limitation may be lifted in the future."};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__7 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__7_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_checkTemplateVisibility_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_checkTemplateVisibility_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_checkTemplateVisibility___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_checkTemplateVisibility___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_checkTemplateVisibility___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "checkTemplateVisibility"};
static const lean_object* l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__1_value),LEAN_SCALAR_PTR_LITERAL(13, 236, 106, 96, 57, 116, 191, 210)}};
static const lean_object* l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_checkTemplateVisibility = (const lean_object*)&l_Lean_Compiler_LCNF_checkTemplateVisibility___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = " as opaque because it is a public def"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferVisibility___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferVisibility___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_inferVisibility___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(171, 35, 224, 65, 124, 253, 116, 42)}};
static const lean_object* l_Lean_Compiler_LCNF_inferVisibility___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_inferVisibility___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferVisibility(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferVisibility___boxed(lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Visibility"};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(43, 82, 52, 247, 236, 142, 37, 109)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(150, 51, 180, 137, 17, 237, 191, 3)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(63, 182, 156, 72, 139, 133, 172, 161)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(209, 131, 155, 180, 213, 83, 222, 140)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(212, 122, 119, 36, 117, 84, 171, 219)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(17, 95, 243, 72, 154, 154, 183, 203)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(252, 192, 172, 53, 210, 115, 169, 135)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(157, 216, 73, 76, 97, 190, 226, 218)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(27, 118, 131, 155, 215, 242, 32, 126)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(102, 14, 228, 207, 30, 8, 113, 61)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(152, 63, 184, 183, 39, 110, 108, 217)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_collectLetValue___redArg(lean_object* v_e_1_, lean_object* v_s_2_){
_start:
{
switch(lean_obj_tag(v_e_1_))
{
case 3:
{
lean_object* v_declName_3_; lean_object* v___x_4_; 
v_declName_3_ = lean_ctor_get(v_e_1_, 0);
lean_inc(v_declName_3_);
lean_dec_ref_known(v_e_1_, 3);
v___x_4_ = l_Lean_NameSet_insert(v_s_2_, v_declName_3_);
return v___x_4_;
}
case 9:
{
lean_object* v_fn_5_; lean_object* v___x_6_; 
v_fn_5_ = lean_ctor_get(v_e_1_, 0);
lean_inc(v_fn_5_);
lean_dec_ref_known(v_e_1_, 2);
v___x_6_ = l_Lean_NameSet_insert(v_s_2_, v_fn_5_);
return v___x_6_;
}
case 10:
{
lean_object* v_fn_7_; lean_object* v___x_8_; 
v_fn_7_ = lean_ctor_get(v_e_1_, 0);
lean_inc(v_fn_7_);
lean_dec_ref_known(v_e_1_, 2);
v___x_8_ = l_Lean_NameSet_insert(v_s_2_, v_fn_7_);
return v___x_8_;
}
default: 
{
lean_dec(v_e_1_);
return v_s_2_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_collectLetValue(uint8_t v_pu_9_, lean_object* v_e_10_, lean_object* v_s_11_){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_collectLetValue___redArg(v_e_10_, v_s_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_collectLetValue___boxed(lean_object* v_pu_13_, lean_object* v_e_14_, lean_object* v_s_15_){
_start:
{
uint8_t v_pu_boxed_16_; lean_object* v_res_17_; 
v_pu_boxed_16_ = lean_unbox(v_pu_13_);
v_res_17_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_collectLetValue(v_pu_boxed_16_, v_e_14_, v_s_15_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls(uint8_t v_pu_18_, lean_object* v_code_19_, lean_object* v_s_20_){
_start:
{
switch(lean_obj_tag(v_code_19_))
{
case 0:
{
lean_object* v_decl_21_; lean_object* v_k_22_; lean_object* v_value_23_; lean_object* v___x_24_; 
v_decl_21_ = lean_ctor_get(v_code_19_, 0);
lean_inc_ref(v_decl_21_);
v_k_22_ = lean_ctor_get(v_code_19_, 1);
lean_inc_ref(v_k_22_);
lean_dec_ref_known(v_code_19_, 2);
v_value_23_ = lean_ctor_get(v_decl_21_, 3);
lean_inc(v_value_23_);
lean_dec_ref(v_decl_21_);
v___x_24_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_collectLetValue___redArg(v_value_23_, v_s_20_);
v_code_19_ = v_k_22_;
v_s_20_ = v___x_24_;
goto _start;
}
case 2:
{
lean_object* v_decl_26_; lean_object* v_k_27_; lean_object* v_value_28_; lean_object* v___x_29_; 
v_decl_26_ = lean_ctor_get(v_code_19_, 0);
lean_inc_ref(v_decl_26_);
v_k_27_ = lean_ctor_get(v_code_19_, 1);
lean_inc_ref(v_k_27_);
lean_dec_ref_known(v_code_19_, 2);
v_value_28_ = lean_ctor_get(v_decl_26_, 4);
lean_inc_ref(v_value_28_);
lean_dec_ref(v_decl_26_);
v___x_29_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls(v_pu_18_, v_k_27_, v_s_20_);
v_code_19_ = v_value_28_;
v_s_20_ = v___x_29_;
goto _start;
}
case 1:
{
lean_object* v_decl_31_; lean_object* v_k_32_; lean_object* v_value_33_; lean_object* v___x_34_; 
v_decl_31_ = lean_ctor_get(v_code_19_, 0);
lean_inc_ref(v_decl_31_);
v_k_32_ = lean_ctor_get(v_code_19_, 1);
lean_inc_ref(v_k_32_);
lean_dec_ref_known(v_code_19_, 2);
v_value_33_ = lean_ctor_get(v_decl_31_, 4);
lean_inc_ref(v_value_33_);
lean_dec_ref(v_decl_31_);
v___x_34_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls(v_pu_18_, v_k_32_, v_s_20_);
v_code_19_ = v_value_33_;
v_s_20_ = v___x_34_;
goto _start;
}
case 4:
{
lean_object* v_cases_36_; lean_object* v_alts_37_; lean_object* v___x_38_; lean_object* v___x_39_; uint8_t v___x_40_; 
v_cases_36_ = lean_ctor_get(v_code_19_, 0);
lean_inc_ref(v_cases_36_);
lean_dec_ref_known(v_code_19_, 1);
v_alts_37_ = lean_ctor_get(v_cases_36_, 3);
lean_inc_ref(v_alts_37_);
lean_dec_ref(v_cases_36_);
v___x_38_ = lean_unsigned_to_nat(0u);
v___x_39_ = lean_array_get_size(v_alts_37_);
v___x_40_ = lean_nat_dec_lt(v___x_38_, v___x_39_);
if (v___x_40_ == 0)
{
lean_dec_ref(v_alts_37_);
return v_s_20_;
}
else
{
size_t v___x_41_; size_t v___x_42_; lean_object* v___x_43_; 
v___x_41_ = ((size_t)0ULL);
v___x_42_ = lean_usize_of_nat(v___x_39_);
v___x_43_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_spec__0(v_pu_18_, v_alts_37_, v___x_41_, v___x_42_, v_s_20_);
lean_dec_ref(v_alts_37_);
return v___x_43_;
}
}
default: 
{
lean_dec_ref(v_code_19_);
return v_s_20_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_spec__0(uint8_t v_pu_44_, lean_object* v_as_45_, size_t v_i_46_, size_t v_stop_47_, lean_object* v_b_48_){
_start:
{
lean_object* v___y_50_; uint8_t v___x_54_; 
v___x_54_ = lean_usize_dec_eq(v_i_46_, v_stop_47_);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; 
v___x_55_ = lean_array_uget_borrowed(v_as_45_, v_i_46_);
switch(lean_obj_tag(v___x_55_))
{
case 0:
{
lean_object* v_code_56_; lean_object* v___x_57_; 
v_code_56_ = lean_ctor_get(v___x_55_, 2);
lean_inc_ref(v_code_56_);
v___x_57_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls(v_pu_44_, v_code_56_, v_b_48_);
v___y_50_ = v___x_57_;
goto v___jp_49_;
}
case 1:
{
lean_object* v_code_58_; lean_object* v___x_59_; 
v_code_58_ = lean_ctor_get(v___x_55_, 1);
lean_inc_ref(v_code_58_);
v___x_59_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls(v_pu_44_, v_code_58_, v_b_48_);
v___y_50_ = v___x_59_;
goto v___jp_49_;
}
default: 
{
lean_object* v_code_60_; lean_object* v___x_61_; 
v_code_60_ = lean_ctor_get(v___x_55_, 0);
lean_inc_ref(v_code_60_);
v___x_61_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls(v_pu_44_, v_code_60_, v_b_48_);
v___y_50_ = v___x_61_;
goto v___jp_49_;
}
}
}
else
{
return v_b_48_;
}
v___jp_49_:
{
size_t v___x_51_; size_t v___x_52_; 
v___x_51_ = ((size_t)1ULL);
v___x_52_ = lean_usize_add(v_i_46_, v___x_51_);
v_i_46_ = v___x_52_;
v_b_48_ = v___y_50_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_spec__0___boxed(lean_object* v_pu_62_, lean_object* v_as_63_, lean_object* v_i_64_, lean_object* v_stop_65_, lean_object* v_b_66_){
_start:
{
uint8_t v_pu_boxed_67_; size_t v_i_boxed_68_; size_t v_stop_boxed_69_; lean_object* v_res_70_; 
v_pu_boxed_67_ = lean_unbox(v_pu_62_);
v_i_boxed_68_ = lean_unbox_usize(v_i_64_);
lean_dec(v_i_64_);
v_stop_boxed_69_ = lean_unbox_usize(v_stop_65_);
lean_dec(v_stop_65_);
v_res_70_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls_spec__0(v_pu_boxed_67_, v_as_63_, v_i_boxed_68_, v_stop_boxed_69_, v_b_66_);
lean_dec_ref(v_as_63_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls___boxed(lean_object* v_pu_71_, lean_object* v_code_72_, lean_object* v_s_73_){
_start:
{
uint8_t v_pu_boxed_74_; lean_object* v_res_75_; 
v_pu_boxed_74_ = lean_unbox(v_pu_71_);
v_res_75_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls(v_pu_boxed_74_, v_code_72_, v_s_73_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__0(lean_object* v_opts_76_, lean_object* v_opt_77_){
_start:
{
lean_object* v_name_78_; lean_object* v_defValue_79_; lean_object* v_map_80_; lean_object* v___x_81_; 
v_name_78_ = lean_ctor_get(v_opt_77_, 0);
v_defValue_79_ = lean_ctor_get(v_opt_77_, 1);
v_map_80_ = lean_ctor_get(v_opts_76_, 0);
v___x_81_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_80_, v_name_78_);
if (lean_obj_tag(v___x_81_) == 0)
{
lean_inc(v_defValue_79_);
return v_defValue_79_;
}
else
{
lean_object* v_val_82_; 
v_val_82_ = lean_ctor_get(v___x_81_, 0);
lean_inc(v_val_82_);
lean_dec_ref_known(v___x_81_, 1);
if (lean_obj_tag(v_val_82_) == 3)
{
lean_object* v_v_83_; 
v_v_83_ = lean_ctor_get(v_val_82_, 0);
lean_inc(v_v_83_);
lean_dec_ref_known(v_val_82_, 1);
return v_v_83_;
}
else
{
lean_dec(v_val_82_);
lean_inc(v_defValue_79_);
return v_defValue_79_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__0___boxed(lean_object* v_opts_84_, lean_object* v_opt_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Lean_Option_get___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__0(v_opts_84_, v_opt_85_);
lean_dec_ref(v_opt_85_);
lean_dec_ref(v_opts_84_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__1___redArg(lean_object* v_v_87_, lean_object* v_f_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
if (lean_obj_tag(v_v_87_) == 0)
{
lean_object* v_code_94_; lean_object* v___x_95_; 
v_code_94_ = lean_ctor_get(v_v_87_, 0);
lean_inc_ref(v_code_94_);
lean_dec_ref_known(v_v_87_, 1);
lean_inc(v___y_92_);
lean_inc_ref(v___y_91_);
lean_inc(v___y_90_);
lean_inc_ref(v___y_89_);
v___x_95_ = lean_apply_6(v_f_88_, v_code_94_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, lean_box(0));
return v___x_95_;
}
else
{
lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_104_; 
lean_dec_ref(v_f_88_);
v_isSharedCheck_104_ = !lean_is_exclusive(v_v_87_);
if (v_isSharedCheck_104_ == 0)
{
lean_object* v_unused_105_; 
v_unused_105_ = lean_ctor_get(v_v_87_, 0);
lean_dec(v_unused_105_);
v___x_97_ = v_v_87_;
v_isShared_98_ = v_isSharedCheck_104_;
goto v_resetjp_96_;
}
else
{
lean_dec(v_v_87_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_104_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_102_; 
v___x_99_ = 0;
v___x_100_ = lean_box(v___x_99_);
if (v_isShared_98_ == 0)
{
lean_ctor_set_tag(v___x_97_, 0);
lean_ctor_set(v___x_97_, 0, v___x_100_);
v___x_102_ = v___x_97_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_100_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__1___redArg___boxed(lean_object* v_v_106_, lean_object* v_f_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__1___redArg(v_v_106_, v_f_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
lean_dec(v___y_109_);
lean_dec_ref(v___y_108_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__1(uint8_t v_pu_114_, lean_object* v_v_115_, lean_object* v_f_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__1___redArg(v_v_115_, v_f_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__1___boxed(lean_object* v_pu_123_, lean_object* v_v_124_, lean_object* v_f_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
uint8_t v_pu_boxed_131_; lean_object* v_res_132_; 
v_pu_boxed_131_ = lean_unbox(v_pu_123_);
v_res_132_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__1(v_pu_boxed_131_, v_v_124_, v_f_125_, v___y_126_, v___y_127_, v___y_128_, v___y_129_);
lean_dec(v___y_129_);
lean_dec_ref(v___y_128_);
lean_dec(v___y_127_);
lean_dec_ref(v___y_126_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody___lam__0(lean_object* v_toSignature_133_, uint8_t v_a_134_, uint8_t v_pu_135_, lean_object* v_code_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v___x_142_; lean_object* v_env_143_; lean_object* v_name_144_; uint8_t v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_142_ = lean_st_ref_get(v___y_140_);
v_env_143_ = lean_ctor_get(v___x_142_, 0);
lean_inc_ref(v_env_143_);
lean_dec(v___x_142_);
v_name_144_ = lean_ctor_get(v_toSignature_133_, 0);
lean_inc(v_name_144_);
lean_dec_ref(v_toSignature_133_);
v___x_145_ = 1;
v___x_146_ = l_Lean_Environment_setExporting(v_env_143_, v___x_145_);
v___x_147_ = l_Lean_Environment_findAsync_x3f(v___x_146_, v_name_144_, v_a_134_);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = lean_box(v_a_134_);
v___x_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
return v___x_149_;
}
else
{
lean_object* v_val_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_169_; 
v_val_150_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_169_ == 0)
{
v___x_152_ = v___x_147_;
v_isShared_153_ = v_isSharedCheck_169_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_val_150_);
lean_dec(v___x_147_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_169_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
uint8_t v_kind_154_; uint8_t v___x_155_; uint8_t v___x_156_; 
v_kind_154_ = lean_ctor_get_uint8(v_val_150_, sizeof(void*)*3);
lean_dec(v_val_150_);
v___x_155_ = 0;
v___x_156_ = l_Lean_instBEqConstantKind_beq(v_kind_154_, v___x_155_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; lean_object* v___x_159_; 
v___x_157_ = lean_box(v___x_156_);
if (v_isShared_153_ == 0)
{
lean_ctor_set_tag(v___x_152_, 0);
lean_ctor_set(v___x_152_, 0, v___x_157_);
v___x_159_ = v___x_152_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v___x_157_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
else
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; uint8_t v___x_164_; lean_object* v___x_165_; lean_object* v___x_167_; 
v___x_161_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_139_);
v___x_162_ = l_Lean_Compiler_LCNF_compiler_small;
v___x_163_ = l_Lean_Option_get___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__0(v___x_161_, v___x_162_);
lean_dec_ref(v___x_161_);
v___x_164_ = l_Lean_Compiler_LCNF_Code_sizeLe(v_pu_135_, v_code_136_, v___x_163_);
lean_dec(v___x_163_);
v___x_165_ = lean_box(v___x_164_);
if (v_isShared_153_ == 0)
{
lean_ctor_set_tag(v___x_152_, 0);
lean_ctor_set(v___x_152_, 0, v___x_165_);
v___x_167_ = v___x_152_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_165_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody___lam__0___boxed(lean_object* v_toSignature_170_, lean_object* v_a_171_, lean_object* v_pu_172_, lean_object* v_code_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
uint8_t v_a_965__boxed_179_; uint8_t v_pu_boxed_180_; lean_object* v_res_181_; 
v_a_965__boxed_179_ = lean_unbox(v_a_171_);
v_pu_boxed_180_ = lean_unbox(v_pu_172_);
v_res_181_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody___lam__0(v_toSignature_170_, v_a_965__boxed_179_, v_pu_boxed_180_, v_code_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec_ref(v_code_173_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody(uint8_t v_pu_182_, lean_object* v_decl_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_){
_start:
{
lean_object* v___x_189_; 
lean_inc_ref(v_decl_183_);
v___x_189_ = l_Lean_Compiler_LCNF_Decl_isTemplateLike___redArg(v_decl_183_, v_a_186_, v_a_187_);
if (lean_obj_tag(v___x_189_) == 0)
{
lean_object* v_a_190_; uint8_t v___x_191_; 
v_a_190_ = lean_ctor_get(v___x_189_, 0);
v___x_191_ = lean_unbox(v_a_190_);
if (v___x_191_ == 0)
{
lean_object* v_toSignature_192_; lean_object* v_value_193_; lean_object* v___x_194_; lean_object* v___f_195_; lean_object* v___x_196_; 
lean_inc(v_a_190_);
lean_dec_ref_known(v___x_189_, 1);
v_toSignature_192_ = lean_ctor_get(v_decl_183_, 0);
lean_inc_ref(v_toSignature_192_);
v_value_193_ = lean_ctor_get(v_decl_183_, 1);
lean_inc_ref(v_value_193_);
lean_dec_ref(v_decl_183_);
v___x_194_ = lean_box(v_pu_182_);
v___f_195_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody___lam__0___boxed), 9, 3);
lean_closure_set(v___f_195_, 0, v_toSignature_192_);
lean_closure_set(v___f_195_, 1, v_a_190_);
lean_closure_set(v___f_195_, 2, v___x_194_);
v___x_196_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody_spec__1___redArg(v_value_193_, v___f_195_, v_a_184_, v_a_185_, v_a_186_, v_a_187_);
return v___x_196_;
}
else
{
lean_dec_ref(v_decl_183_);
return v___x_189_;
}
}
else
{
lean_dec_ref(v_decl_183_);
return v___x_189_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody___boxed(lean_object* v_pu_197_, lean_object* v_decl_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_){
_start:
{
uint8_t v_pu_boxed_204_; lean_object* v_res_205_; 
v_pu_boxed_204_ = lean_unbox(v_pu_197_);
v_res_205_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody(v_pu_boxed_204_, v_decl_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_);
lean_dec(v_a_202_);
lean_dec_ref(v_a_201_);
lean_dec(v_a_200_);
lean_dec_ref(v_a_199_);
return v_res_205_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__0(void){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_206_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__1(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__0);
v___x_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__2(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_209_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__1, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__1);
v___x_210_ = lean_unsigned_to_nat(0u);
v___x_211_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
lean_ctor_set(v___x_211_, 2, v___x_210_);
lean_ctor_set(v___x_211_, 3, v___x_210_);
lean_ctor_set(v___x_211_, 4, v___x_209_);
lean_ctor_set(v___x_211_, 5, v___x_209_);
lean_ctor_set(v___x_211_, 6, v___x_209_);
lean_ctor_set(v___x_211_, 7, v___x_209_);
lean_ctor_set(v___x_211_, 8, v___x_209_);
lean_ctor_set(v___x_211_, 9, v___x_209_);
lean_ctor_set(v___x_211_, 10, v___x_209_);
return v___x_211_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__3(void){
_start:
{
lean_object* v___x_212_; double v___x_213_; 
v___x_212_ = lean_unsigned_to_nat(0u);
v___x_213_ = lean_float_of_nat(v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0(lean_object* v_cls_217_, lean_object* v_msg_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v_ref_224_; lean_object* v___x_225_; lean_object* v_env_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v_ref_224_ = lean_ctor_get(v___y_221_, 2);
v___x_225_ = lean_st_ref_get(v___y_222_);
v_env_226_ = lean_ctor_get(v___x_225_, 0);
lean_inc_ref(v_env_226_);
lean_dec(v___x_225_);
v___x_227_ = lean_st_ref_get(v___y_220_);
v___x_228_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_219_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_288_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_288_ == 0)
{
v___x_231_ = v___x_228_;
v_isShared_232_ = v_isSharedCheck_288_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_228_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_288_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v_lctx_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_286_; 
v_lctx_233_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_286_ == 0)
{
lean_object* v_unused_287_; 
v_unused_287_ = lean_ctor_get(v___x_227_, 1);
lean_dec(v_unused_287_);
v___x_235_ = v___x_227_;
v_isShared_236_ = v_isSharedCheck_286_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_lctx_233_);
lean_dec(v___x_227_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_286_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
uint8_t v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_237_ = lean_unbox(v_a_229_);
lean_dec(v_a_229_);
v___x_238_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_233_, v___x_237_);
lean_dec_ref(v_lctx_233_);
v___x_239_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_221_);
v___x_240_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__2, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__2);
v___x_241_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_241_, 0, v_env_226_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
lean_ctor_set(v___x_241_, 2, v___x_238_);
lean_ctor_set(v___x_241_, 3, v___x_239_);
if (v_isShared_236_ == 0)
{
lean_ctor_set_tag(v___x_235_, 3);
lean_ctor_set(v___x_235_, 1, v_msg_218_);
lean_ctor_set(v___x_235_, 0, v___x_241_);
v___x_243_ = v___x_235_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_241_);
lean_ctor_set(v_reuseFailAlloc_285_, 1, v_msg_218_);
v___x_243_ = v_reuseFailAlloc_285_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
lean_object* v___x_244_; lean_object* v_traceState_245_; lean_object* v_env_246_; lean_object* v_nextMacroScope_247_; lean_object* v_ngen_248_; lean_object* v_auxDeclNGen_249_; lean_object* v_cache_250_; lean_object* v_recordedDeps_251_; lean_object* v_messages_252_; lean_object* v_infoState_253_; lean_object* v_snapshotTasks_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_284_; 
v___x_244_ = lean_st_ref_take(v___y_222_);
v_traceState_245_ = lean_ctor_get(v___x_244_, 4);
v_env_246_ = lean_ctor_get(v___x_244_, 0);
v_nextMacroScope_247_ = lean_ctor_get(v___x_244_, 1);
v_ngen_248_ = lean_ctor_get(v___x_244_, 2);
v_auxDeclNGen_249_ = lean_ctor_get(v___x_244_, 3);
v_cache_250_ = lean_ctor_get(v___x_244_, 5);
v_recordedDeps_251_ = lean_ctor_get(v___x_244_, 6);
v_messages_252_ = lean_ctor_get(v___x_244_, 7);
v_infoState_253_ = lean_ctor_get(v___x_244_, 8);
v_snapshotTasks_254_ = lean_ctor_get(v___x_244_, 9);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_284_ == 0)
{
v___x_256_ = v___x_244_;
v_isShared_257_ = v_isSharedCheck_284_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_snapshotTasks_254_);
lean_inc(v_infoState_253_);
lean_inc(v_messages_252_);
lean_inc(v_recordedDeps_251_);
lean_inc(v_cache_250_);
lean_inc(v_traceState_245_);
lean_inc(v_auxDeclNGen_249_);
lean_inc(v_ngen_248_);
lean_inc(v_nextMacroScope_247_);
lean_inc(v_env_246_);
lean_dec(v___x_244_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_284_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
uint64_t v_tid_258_; lean_object* v_traces_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_283_; 
v_tid_258_ = lean_ctor_get_uint64(v_traceState_245_, sizeof(void*)*1);
v_traces_259_ = lean_ctor_get(v_traceState_245_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v_traceState_245_);
if (v_isSharedCheck_283_ == 0)
{
v___x_261_ = v_traceState_245_;
v_isShared_262_ = v_isSharedCheck_283_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_traces_259_);
lean_dec(v_traceState_245_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_283_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_263_; lean_object* v___x_264_; double v___x_265_; uint8_t v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
v___x_263_ = lean_box(0);
v___x_264_ = lean_box(0);
v___x_265_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__3, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__3_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__3);
v___x_266_ = 0;
v___x_267_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__4));
v___x_268_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_268_, 0, v_cls_217_);
lean_ctor_set(v___x_268_, 1, v___x_264_);
lean_ctor_set(v___x_268_, 2, v___x_267_);
lean_ctor_set_float(v___x_268_, sizeof(void*)*3, v___x_265_);
lean_ctor_set_float(v___x_268_, sizeof(void*)*3 + 8, v___x_265_);
lean_ctor_set_uint8(v___x_268_, sizeof(void*)*3 + 16, v___x_266_);
v___x_269_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__5));
v___x_270_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_270_, 0, v___x_268_);
lean_ctor_set(v___x_270_, 1, v___x_243_);
lean_ctor_set(v___x_270_, 2, v___x_269_);
lean_inc(v_ref_224_);
v___x_271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_271_, 0, v_ref_224_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
v___x_272_ = l_Lean_PersistentArray_push___redArg(v_traces_259_, v___x_271_);
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 0, v___x_272_);
v___x_274_ = v___x_261_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_272_);
lean_ctor_set_uint64(v_reuseFailAlloc_282_, sizeof(void*)*1, v_tid_258_);
v___x_274_ = v_reuseFailAlloc_282_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
lean_object* v___x_276_; 
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 4, v___x_274_);
v___x_276_ = v___x_256_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_env_246_);
lean_ctor_set(v_reuseFailAlloc_281_, 1, v_nextMacroScope_247_);
lean_ctor_set(v_reuseFailAlloc_281_, 2, v_ngen_248_);
lean_ctor_set(v_reuseFailAlloc_281_, 3, v_auxDeclNGen_249_);
lean_ctor_set(v_reuseFailAlloc_281_, 4, v___x_274_);
lean_ctor_set(v_reuseFailAlloc_281_, 5, v_cache_250_);
lean_ctor_set(v_reuseFailAlloc_281_, 6, v_recordedDeps_251_);
lean_ctor_set(v_reuseFailAlloc_281_, 7, v_messages_252_);
lean_ctor_set(v_reuseFailAlloc_281_, 8, v_infoState_253_);
lean_ctor_set(v_reuseFailAlloc_281_, 9, v_snapshotTasks_254_);
v___x_276_ = v_reuseFailAlloc_281_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
lean_object* v___x_277_; lean_object* v___x_279_; 
v___x_277_ = lean_st_ref_put(v___y_222_, v___x_276_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 0, v___x_263_);
v___x_279_ = v___x_231_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_263_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
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
else
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec(v___x_227_);
lean_dec_ref(v_env_226_);
lean_dec_ref(v_msg_218_);
lean_dec(v_cls_217_);
v_a_289_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_228_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_228_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___boxed(lean_object* v_cls_297_, lean_object* v_msg_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0(v_cls_297_, v_msg_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
lean_dec(v___y_300_);
lean_dec_ref(v___y_299_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__2___redArg(lean_object* v_f_305_, lean_object* v_v_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_){
_start:
{
if (lean_obj_tag(v_v_306_) == 0)
{
lean_object* v_code_312_; lean_object* v___x_313_; 
v_code_312_ = lean_ctor_get(v_v_306_, 0);
lean_inc_ref(v_code_312_);
lean_dec_ref_known(v_v_306_, 1);
lean_inc(v___y_310_);
lean_inc_ref(v___y_309_);
lean_inc(v___y_308_);
lean_inc_ref(v___y_307_);
v___x_313_ = lean_apply_6(v_f_305_, v_code_312_, v___y_307_, v___y_308_, v___y_309_, v___y_310_, lean_box(0));
return v___x_313_;
}
else
{
lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_321_; 
lean_dec_ref(v_f_305_);
v_isSharedCheck_321_ = !lean_is_exclusive(v_v_306_);
if (v_isSharedCheck_321_ == 0)
{
lean_object* v_unused_322_; 
v_unused_322_ = lean_ctor_get(v_v_306_, 0);
lean_dec(v_unused_322_);
v___x_315_ = v_v_306_;
v_isShared_316_ = v_isSharedCheck_321_;
goto v_resetjp_314_;
}
else
{
lean_dec(v_v_306_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_321_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_317_; lean_object* v___x_319_; 
v___x_317_ = lean_box(0);
if (v_isShared_316_ == 0)
{
lean_ctor_set_tag(v___x_315_, 0);
lean_ctor_set(v___x_315_, 0, v___x_317_);
v___x_319_ = v___x_315_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__2___redArg___boxed(lean_object* v_f_323_, lean_object* v_v_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__2___redArg(v_f_323_, v_v_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
lean_dec(v___y_328_);
lean_dec_ref(v___y_327_);
lean_dec(v___y_326_);
lean_dec_ref(v___y_325_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__2(uint8_t v_pu_331_, lean_object* v_f_332_, lean_object* v_v_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__2___redArg(v_f_332_, v_v_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__2___boxed(lean_object* v_pu_340_, lean_object* v_f_341_, lean_object* v_v_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
uint8_t v_pu_boxed_348_; lean_object* v_res_349_; 
v_pu_boxed_348_ = lean_unbox(v_pu_340_);
v_res_349_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__2(v_pu_boxed_348_, v_f_341_, v_v_342_, v___y_343_, v___y_344_, v___y_345_, v___y_346_);
lean_dec(v___y_346_);
lean_dec_ref(v___y_345_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_markDeclPublicRec___lam__0___boxed(lean_object* v_pu_350_, lean_object* v_phase_351_, lean_object* v_decl_352_, lean_object* v_code_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
uint8_t v_pu_boxed_359_; uint8_t v_phase_boxed_360_; lean_object* v_res_361_; 
v_pu_boxed_359_ = lean_unbox(v_pu_350_);
v_phase_boxed_360_ = lean_unbox(v_phase_351_);
v_res_361_ = l_Lean_Compiler_LCNF_markDeclPublicRec___lam__0(v_pu_boxed_359_, v_phase_boxed_360_, v_decl_352_, v_code_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
return v_res_361_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_markDeclPublicRec___closed__0(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__0);
v___x_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
return v___x_363_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1(void){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_364_ = lean_obj_once(&l_Lean_Compiler_LCNF_markDeclPublicRec___closed__0, &l_Lean_Compiler_LCNF_markDeclPublicRec___closed__0_once, _init_l_Lean_Compiler_LCNF_markDeclPublicRec___closed__0);
v___x_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
return v___x_365_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__5(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_374_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__2));
v___x_375_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__4));
v___x_376_ = l_Lean_Name_append(v___x_375_, v___x_374_);
return v___x_376_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__7(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__6));
v___x_379_ = l_Lean_stringToMessageData(v___x_378_);
return v___x_379_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_markDeclPublicRec___closed__3(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = ((lean_object*)(l_Lean_Compiler_LCNF_markDeclPublicRec___closed__2));
v___x_382_ = l_Lean_stringToMessageData(v___x_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_markDeclPublicRec(uint8_t v_pu_383_, uint8_t v_phase_384_, lean_object* v_decl_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___f_393_; lean_object* v___y_395_; lean_object* v___y_396_; lean_object* v___y_397_; lean_object* v___y_398_; lean_object* v___y_402_; lean_object* v___y_403_; lean_object* v___y_404_; lean_object* v___y_405_; lean_object* v___x_429_; lean_object* v_toSignature_430_; lean_object* v_env_431_; lean_object* v_nextMacroScope_432_; lean_object* v_ngen_433_; lean_object* v_auxDeclNGen_434_; lean_object* v_traceState_435_; lean_object* v_recordedDeps_436_; lean_object* v_messages_437_; lean_object* v_infoState_438_; lean_object* v_snapshotTasks_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_485_; 
v___x_391_ = lean_box(v_pu_383_);
v___x_392_ = lean_box(v_phase_384_);
lean_inc_ref(v_decl_385_);
v___f_393_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_markDeclPublicRec___lam__0___boxed), 9, 3);
lean_closure_set(v___f_393_, 0, v___x_391_);
lean_closure_set(v___f_393_, 1, v___x_392_);
lean_closure_set(v___f_393_, 2, v_decl_385_);
v___x_429_ = lean_st_ref_take(v_a_389_);
v_toSignature_430_ = lean_ctor_get(v_decl_385_, 0);
v_env_431_ = lean_ctor_get(v___x_429_, 0);
v_nextMacroScope_432_ = lean_ctor_get(v___x_429_, 1);
v_ngen_433_ = lean_ctor_get(v___x_429_, 2);
v_auxDeclNGen_434_ = lean_ctor_get(v___x_429_, 3);
v_traceState_435_ = lean_ctor_get(v___x_429_, 4);
v_recordedDeps_436_ = lean_ctor_get(v___x_429_, 6);
v_messages_437_ = lean_ctor_get(v___x_429_, 7);
v_infoState_438_ = lean_ctor_get(v___x_429_, 8);
v_snapshotTasks_439_ = lean_ctor_get(v___x_429_, 9);
v_isSharedCheck_485_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_485_ == 0)
{
lean_object* v_unused_486_; 
v_unused_486_ = lean_ctor_get(v___x_429_, 5);
lean_dec(v_unused_486_);
v___x_441_ = v___x_429_;
v_isShared_442_ = v_isSharedCheck_485_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_snapshotTasks_439_);
lean_inc(v_infoState_438_);
lean_inc(v_messages_437_);
lean_inc(v_recordedDeps_436_);
lean_inc(v_traceState_435_);
lean_inc(v_auxDeclNGen_434_);
lean_inc(v_ngen_433_);
lean_inc(v_nextMacroScope_432_);
lean_inc(v_env_431_);
lean_dec(v___x_429_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_485_;
goto v_resetjp_440_;
}
v___jp_394_:
{
lean_object* v_value_399_; lean_object* v___x_400_; 
v_value_399_ = lean_ctor_get(v_decl_385_, 1);
lean_inc_ref(v_value_399_);
lean_dec_ref(v_decl_385_);
v___x_400_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__2___redArg(v___f_393_, v_value_399_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
return v___x_400_;
}
v___jp_401_:
{
lean_object* v___x_406_; lean_object* v_toSignature_407_; lean_object* v_env_408_; lean_object* v_nextMacroScope_409_; lean_object* v_ngen_410_; lean_object* v_auxDeclNGen_411_; lean_object* v_traceState_412_; lean_object* v_recordedDeps_413_; lean_object* v_messages_414_; lean_object* v_infoState_415_; lean_object* v_snapshotTasks_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_427_; 
v___x_406_ = lean_st_ref_take(v___y_405_);
v_toSignature_407_ = lean_ctor_get(v_decl_385_, 0);
v_env_408_ = lean_ctor_get(v___x_406_, 0);
v_nextMacroScope_409_ = lean_ctor_get(v___x_406_, 1);
v_ngen_410_ = lean_ctor_get(v___x_406_, 2);
v_auxDeclNGen_411_ = lean_ctor_get(v___x_406_, 3);
v_traceState_412_ = lean_ctor_get(v___x_406_, 4);
v_recordedDeps_413_ = lean_ctor_get(v___x_406_, 6);
v_messages_414_ = lean_ctor_get(v___x_406_, 7);
v_infoState_415_ = lean_ctor_get(v___x_406_, 8);
v_snapshotTasks_416_ = lean_ctor_get(v___x_406_, 9);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_427_ == 0)
{
lean_object* v_unused_428_; 
v_unused_428_ = lean_ctor_get(v___x_406_, 5);
lean_dec(v_unused_428_);
v___x_418_ = v___x_406_;
v_isShared_419_ = v_isSharedCheck_427_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_snapshotTasks_416_);
lean_inc(v_infoState_415_);
lean_inc(v_messages_414_);
lean_inc(v_recordedDeps_413_);
lean_inc(v_traceState_412_);
lean_inc(v_auxDeclNGen_411_);
lean_inc(v_ngen_410_);
lean_inc(v_nextMacroScope_409_);
lean_inc(v_env_408_);
lean_dec(v___x_406_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_427_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v_name_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_424_; 
v_name_420_ = lean_ctor_get(v_toSignature_407_, 0);
lean_inc(v_name_420_);
v___x_421_ = l_Lean_Compiler_LCNF_setDeclTransparent(v_env_408_, v_phase_384_, v_name_420_);
v___x_422_ = lean_obj_once(&l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1, &l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1_once, _init_l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 5, v___x_422_);
lean_ctor_set(v___x_418_, 0, v___x_421_);
v___x_424_ = v___x_418_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_421_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v_nextMacroScope_409_);
lean_ctor_set(v_reuseFailAlloc_426_, 2, v_ngen_410_);
lean_ctor_set(v_reuseFailAlloc_426_, 3, v_auxDeclNGen_411_);
lean_ctor_set(v_reuseFailAlloc_426_, 4, v_traceState_412_);
lean_ctor_set(v_reuseFailAlloc_426_, 5, v___x_422_);
lean_ctor_set(v_reuseFailAlloc_426_, 6, v_recordedDeps_413_);
lean_ctor_set(v_reuseFailAlloc_426_, 7, v_messages_414_);
lean_ctor_set(v_reuseFailAlloc_426_, 8, v_infoState_415_);
lean_ctor_set(v_reuseFailAlloc_426_, 9, v_snapshotTasks_416_);
v___x_424_ = v_reuseFailAlloc_426_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
lean_object* v___x_425_; 
v___x_425_ = lean_st_ref_put(v___y_405_, v___x_424_);
v___y_395_ = v___y_402_;
v___y_396_ = v___y_403_;
v___y_397_ = v___y_404_;
v___y_398_ = v___y_405_;
goto v___jp_394_;
}
}
}
v_resetjp_440_:
{
lean_object* v_name_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
v_name_443_ = lean_ctor_get(v_toSignature_430_, 0);
lean_inc(v_name_443_);
v___x_444_ = l_Lean_Compiler_LCNF_setDeclPublic(v_env_431_, v_name_443_);
v___x_445_ = lean_obj_once(&l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1, &l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1_once, _init_l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 5, v___x_445_);
lean_ctor_set(v___x_441_, 0, v___x_444_);
v___x_447_ = v___x_441_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v___x_444_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v_nextMacroScope_432_);
lean_ctor_set(v_reuseFailAlloc_484_, 2, v_ngen_433_);
lean_ctor_set(v_reuseFailAlloc_484_, 3, v_auxDeclNGen_434_);
lean_ctor_set(v_reuseFailAlloc_484_, 4, v_traceState_435_);
lean_ctor_set(v_reuseFailAlloc_484_, 5, v___x_445_);
lean_ctor_set(v_reuseFailAlloc_484_, 6, v_recordedDeps_436_);
lean_ctor_set(v_reuseFailAlloc_484_, 7, v_messages_437_);
lean_ctor_set(v_reuseFailAlloc_484_, 8, v_infoState_438_);
lean_ctor_set(v_reuseFailAlloc_484_, 9, v_snapshotTasks_439_);
v___x_447_ = v_reuseFailAlloc_484_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = lean_st_ref_put(v_a_389_, v___x_447_);
lean_inc_ref(v_decl_385_);
v___x_449_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_shouldExportBody(v_pu_383_, v_decl_385_, v_a_386_, v_a_387_, v_a_388_, v_a_389_);
if (lean_obj_tag(v___x_449_) == 0)
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_475_; 
v_a_450_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_475_ == 0)
{
v___x_452_ = v___x_449_;
v_isShared_453_ = v_isSharedCheck_475_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_449_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_475_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
uint8_t v___x_454_; 
v___x_454_ = lean_unbox(v_a_450_);
lean_dec(v_a_450_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; lean_object* v___x_457_; 
lean_dec_ref(v___f_393_);
lean_dec_ref(v_decl_385_);
v___x_455_ = lean_box(0);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 0, v___x_455_);
v___x_457_ = v___x_452_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v___x_455_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
else
{
lean_object* v___x_459_; lean_object* v_env_460_; uint8_t v___x_461_; 
lean_del_object(v___x_452_);
v___x_459_ = lean_st_ref_get(v_a_389_);
v_env_460_ = lean_ctor_get(v___x_459_, 0);
lean_inc_ref(v_env_460_);
lean_dec(v___x_459_);
v___x_461_ = l_Lean_Compiler_LCNF_isDeclTransparent(v_env_460_, v_phase_384_, v_name_443_);
if (v___x_461_ == 0)
{
lean_object* v_toCold_462_; lean_object* v_options_463_; uint8_t v_hasTrace_464_; 
v_toCold_462_ = lean_ctor_get(v_a_388_, 0);
v_options_463_ = lean_ctor_get(v_toCold_462_, 2);
v_hasTrace_464_ = lean_ctor_get_uint8(v_options_463_, sizeof(void*)*1);
if (v_hasTrace_464_ == 0)
{
v___y_402_ = v_a_386_;
v___y_403_ = v_a_387_;
v___y_404_ = v_a_388_;
v___y_405_ = v_a_389_;
goto v___jp_401_;
}
else
{
lean_object* v_inheritedTraceOptions_465_; lean_object* v___x_466_; lean_object* v___x_467_; uint8_t v___x_468_; 
v_inheritedTraceOptions_465_ = lean_ctor_get(v_toCold_462_, 11);
v___x_466_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__2));
v___x_467_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__5, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__5_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__5);
v___x_468_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_465_, v_options_463_, v___x_467_);
if (v___x_468_ == 0)
{
v___y_402_ = v_a_386_;
v___y_403_ = v_a_387_;
v___y_404_ = v_a_388_;
v___y_405_ = v_a_389_;
goto v___jp_401_;
}
else
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_469_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__7, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__7);
lean_inc(v_name_443_);
v___x_470_ = l_Lean_MessageData_ofName(v_name_443_);
v___x_471_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_469_);
lean_ctor_set(v___x_471_, 1, v___x_470_);
v___x_472_ = lean_obj_once(&l_Lean_Compiler_LCNF_markDeclPublicRec___closed__3, &l_Lean_Compiler_LCNF_markDeclPublicRec___closed__3_once, _init_l_Lean_Compiler_LCNF_markDeclPublicRec___closed__3);
v___x_473_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_471_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0(v___x_466_, v___x_473_, v_a_386_, v_a_387_, v_a_388_, v_a_389_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_dec_ref_known(v___x_474_, 1);
v___y_402_ = v_a_386_;
v___y_403_ = v_a_387_;
v___y_404_ = v_a_388_;
v___y_405_ = v_a_389_;
goto v___jp_401_;
}
else
{
lean_dec_ref(v___f_393_);
lean_dec_ref(v_decl_385_);
return v___x_474_;
}
}
}
}
else
{
v___y_395_ = v_a_386_;
v___y_396_ = v_a_387_;
v___y_397_ = v_a_388_;
v___y_398_ = v_a_389_;
goto v___jp_394_;
}
}
}
}
else
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_483_; 
lean_dec_ref(v___f_393_);
lean_dec_ref(v_decl_385_);
v_a_476_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_483_ == 0)
{
v___x_478_ = v___x_449_;
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_449_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_481_; 
if (v_isShared_479_ == 0)
{
v___x_481_ = v___x_478_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_a_476_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
}
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__9(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__8));
v___x_489_ = l_Lean_stringToMessageData(v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1(uint8_t v_phase_490_, lean_object* v_decl_491_, lean_object* v_init_492_, lean_object* v_x_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
if (lean_obj_tag(v_x_493_) == 0)
{
lean_object* v_k_499_; lean_object* v_l_500_; lean_object* v_r_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v_k_499_ = lean_ctor_get(v_x_493_, 1);
lean_inc(v_k_499_);
v_l_500_ = lean_ctor_get(v_x_493_, 3);
lean_inc(v_l_500_);
v_r_501_ = lean_ctor_get(v_x_493_, 4);
lean_inc(v_r_501_);
lean_dec_ref_known(v_x_493_, 5);
v___x_502_ = lean_box(0);
lean_inc_ref(v_decl_491_);
v___x_503_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1(v_phase_490_, v_decl_491_, v_init_492_, v_l_500_, v___y_494_, v___y_495_, v___y_496_, v___y_497_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v___x_504_; 
lean_dec_ref_known(v___x_503_, 1);
v___x_504_ = l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(v_k_499_, v_phase_490_, v___y_497_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v_a_505_; 
v_a_505_ = lean_ctor_get(v___x_504_, 0);
lean_inc(v_a_505_);
lean_dec_ref_known(v___x_504_, 1);
if (lean_obj_tag(v_a_505_) == 1)
{
lean_object* v_val_506_; lean_object* v___y_508_; lean_object* v___y_509_; lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v___x_523_; lean_object* v_env_524_; uint8_t v___x_525_; 
v_val_506_ = lean_ctor_get(v_a_505_, 0);
lean_inc(v_val_506_);
lean_dec_ref_known(v_a_505_, 1);
v___x_523_ = lean_st_ref_get(v___y_497_);
v_env_524_ = lean_ctor_get(v___x_523_, 0);
lean_inc_ref(v_env_524_);
lean_dec(v___x_523_);
v___x_525_ = l_Lean_Compiler_LCNF_isDeclPublic(v_env_524_, v_k_499_);
if (v___x_525_ == 0)
{
lean_object* v_toCold_526_; lean_object* v_options_527_; uint8_t v_hasTrace_528_; 
v_toCold_526_ = lean_ctor_get(v___y_496_, 0);
v_options_527_ = lean_ctor_get(v_toCold_526_, 2);
v_hasTrace_528_ = lean_ctor_get_uint8(v_options_527_, sizeof(void*)*1);
if (v_hasTrace_528_ == 0)
{
lean_dec(v_k_499_);
v___y_508_ = v___y_494_;
v___y_509_ = v___y_495_;
v___y_510_ = v___y_496_;
v___y_511_ = v___y_497_;
goto v___jp_507_;
}
else
{
lean_object* v_inheritedTraceOptions_529_; lean_object* v___x_530_; lean_object* v___x_531_; uint8_t v___x_532_; 
v_inheritedTraceOptions_529_ = lean_ctor_get(v_toCold_526_, 11);
v___x_530_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__2));
v___x_531_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__5, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__5_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__5);
v___x_532_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_529_, v_options_527_, v___x_531_);
if (v___x_532_ == 0)
{
lean_dec(v_k_499_);
v___y_508_ = v___y_494_;
v___y_509_ = v___y_495_;
v___y_510_ = v___y_496_;
v___y_511_ = v___y_497_;
goto v___jp_507_;
}
else
{
lean_object* v_toSignature_533_; lean_object* v_name_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v_toSignature_533_ = lean_ctor_get(v_decl_491_, 0);
v_name_534_ = lean_ctor_get(v_toSignature_533_, 0);
v___x_535_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__7, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__7);
v___x_536_ = l_Lean_MessageData_ofName(v_k_499_);
v___x_537_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_537_, 0, v___x_535_);
lean_ctor_set(v___x_537_, 1, v___x_536_);
v___x_538_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__9, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__9_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__9);
v___x_539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_539_, 0, v___x_537_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
lean_inc(v_name_534_);
v___x_540_ = l_Lean_MessageData_ofName(v_name_534_);
v___x_541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_539_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
v___x_542_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0(v___x_530_, v___x_541_, v___y_494_, v___y_495_, v___y_496_, v___y_497_);
if (lean_obj_tag(v___x_542_) == 0)
{
lean_dec_ref_known(v___x_542_, 1);
v___y_508_ = v___y_494_;
v___y_509_ = v___y_495_;
v___y_510_ = v___y_496_;
v___y_511_ = v___y_497_;
goto v___jp_507_;
}
else
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_550_; 
lean_dec(v_val_506_);
lean_dec(v_r_501_);
lean_dec_ref(v_decl_491_);
v_a_543_ = lean_ctor_get(v___x_542_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_550_ == 0)
{
v___x_545_ = v___x_542_;
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_542_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_a_543_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
}
}
else
{
lean_dec(v_val_506_);
lean_dec(v_k_499_);
v_init_492_ = v___x_502_;
v_x_493_ = v_r_501_;
goto _start;
}
v___jp_507_:
{
uint8_t v___x_512_; lean_object* v___x_513_; 
v___x_512_ = l_Lean_Compiler_LCNF_Phase_toPurity(v_phase_490_);
v___x_513_ = l_Lean_Compiler_LCNF_markDeclPublicRec(v___x_512_, v_phase_490_, v_val_506_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_dec_ref_known(v___x_513_, 1);
v_init_492_ = v___x_502_;
v_x_493_ = v_r_501_;
goto _start;
}
else
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_522_; 
lean_dec(v_r_501_);
lean_dec_ref(v_decl_491_);
v_a_515_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_522_ == 0)
{
v___x_517_ = v___x_513_;
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v___x_513_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_a_515_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
}
else
{
lean_dec(v_a_505_);
lean_dec(v_k_499_);
v_init_492_ = v___x_502_;
v_x_493_ = v_r_501_;
goto _start;
}
}
else
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_560_; 
lean_dec(v_r_501_);
lean_dec(v_k_499_);
lean_dec_ref(v_decl_491_);
v_a_553_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_560_ == 0)
{
v___x_555_ = v___x_504_;
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_504_);
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
else
{
lean_dec(v_r_501_);
lean_dec(v_k_499_);
lean_dec_ref(v_decl_491_);
return v___x_503_;
}
}
else
{
lean_object* v___x_561_; lean_object* v___x_562_; 
lean_dec_ref(v_decl_491_);
v___x_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_561_, 0, v_init_492_);
v___x_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
return v___x_562_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_markDeclPublicRec___lam__0(uint8_t v_pu_563_, uint8_t v_phase_564_, lean_object* v_decl_565_, lean_object* v_code_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_572_ = l_Lean_NameSet_empty;
v___x_573_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls(v_pu_563_, v_code_566_, v___x_572_);
v___x_574_ = lean_box(0);
v___x_575_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1(v_phase_564_, v_decl_565_, v___x_574_, v___x_573_, v___y_567_, v___y_568_, v___y_569_, v___y_570_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_582_; 
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_582_ == 0)
{
lean_object* v_unused_583_; 
v_unused_583_ = lean_ctor_get(v___x_575_, 0);
lean_dec(v_unused_583_);
v___x_577_ = v___x_575_;
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
else
{
lean_dec(v___x_575_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_574_);
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_574_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
else
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
v_a_584_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v___x_575_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_575_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_584_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___boxed(lean_object* v_phase_592_, lean_object* v_decl_593_, lean_object* v_init_594_, lean_object* v_x_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
uint8_t v_phase_boxed_601_; lean_object* v_res_602_; 
v_phase_boxed_601_ = lean_unbox(v_phase_592_);
v_res_602_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1(v_phase_boxed_601_, v_decl_593_, v_init_594_, v_x_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec(v___y_597_);
lean_dec_ref(v___y_596_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_markDeclPublicRec___boxed(lean_object* v_pu_603_, lean_object* v_phase_604_, lean_object* v_decl_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_){
_start:
{
uint8_t v_pu_boxed_611_; uint8_t v_phase_boxed_612_; lean_object* v_res_613_; 
v_pu_boxed_611_ = lean_unbox(v_pu_603_);
v_phase_boxed_612_ = lean_unbox(v_phase_604_);
v_res_613_ = l_Lean_Compiler_LCNF_markDeclPublicRec(v_pu_boxed_611_, v_phase_boxed_612_, v_decl_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_);
lean_dec(v_a_609_);
lean_dec_ref(v_a_608_);
lean_dec(v_a_607_);
lean_dec_ref(v_a_606_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___redArg(lean_object* v_msg_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_){
_start:
{
lean_object* v_ref_620_; lean_object* v___x_621_; lean_object* v_env_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v_ref_620_ = lean_ctor_get(v___y_617_, 2);
v___x_621_ = lean_st_ref_get(v___y_618_);
v_env_622_ = lean_ctor_get(v___x_621_, 0);
lean_inc_ref(v_env_622_);
lean_dec(v___x_621_);
v___x_623_ = lean_st_ref_get(v___y_616_);
v___x_624_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_615_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_647_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_647_ == 0)
{
v___x_627_ = v___x_624_;
v_isShared_628_ = v_isSharedCheck_647_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_624_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_647_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v_lctx_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_645_; 
v_lctx_629_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_645_ == 0)
{
lean_object* v_unused_646_; 
v_unused_646_ = lean_ctor_get(v___x_623_, 1);
lean_dec(v_unused_646_);
v___x_631_ = v___x_623_;
v_isShared_632_ = v_isSharedCheck_645_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_lctx_629_);
lean_dec(v___x_623_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_645_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
uint8_t v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_633_ = lean_unbox(v_a_625_);
lean_dec(v_a_625_);
v___x_634_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_629_, v___x_633_);
lean_dec_ref(v_lctx_629_);
v___x_635_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_617_);
v___x_636_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__2, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__2);
v___x_637_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_637_, 0, v_env_622_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
lean_ctor_set(v___x_637_, 2, v___x_634_);
lean_ctor_set(v___x_637_, 3, v___x_635_);
if (v_isShared_632_ == 0)
{
lean_ctor_set_tag(v___x_631_, 3);
lean_ctor_set(v___x_631_, 1, v_msg_614_);
lean_ctor_set(v___x_631_, 0, v___x_637_);
v___x_639_ = v___x_631_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_637_);
lean_ctor_set(v_reuseFailAlloc_644_, 1, v_msg_614_);
v___x_639_ = v_reuseFailAlloc_644_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
lean_object* v___x_640_; lean_object* v___x_642_; 
lean_inc(v_ref_620_);
v___x_640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_640_, 0, v_ref_620_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
if (v_isShared_628_ == 0)
{
lean_ctor_set_tag(v___x_627_, 1);
lean_ctor_set(v___x_627_, 0, v___x_640_);
v___x_642_ = v___x_627_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_640_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
}
else
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_655_; 
lean_dec(v___x_623_);
lean_dec_ref(v_env_622_);
lean_dec_ref(v_msg_614_);
v_a_648_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_655_ == 0)
{
v___x_650_ = v___x_624_;
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_624_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_651_ == 0)
{
v___x_653_ = v___x_650_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_a_648_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___redArg___boxed(lean_object* v_msg_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___redArg(v_msg_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0(lean_object* v_00_u03b1_663_, lean_object* v_msg_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___redArg(v_msg_664_, v___y_666_, v___y_667_, v___y_668_, v___y_669_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___boxed(lean_object* v_00_u03b1_672_, lean_object* v_msg_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0(v_00_u03b1_672_, v_msg_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec(v___y_676_);
lean_dec_ref(v___y_675_);
lean_dec(v___y_674_);
return v_res_680_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__1(lean_object* v_opts_681_, lean_object* v_opt_682_){
_start:
{
lean_object* v_name_683_; lean_object* v_defValue_684_; lean_object* v_map_685_; lean_object* v___x_686_; 
v_name_683_ = lean_ctor_get(v_opt_682_, 0);
v_defValue_684_ = lean_ctor_get(v_opt_682_, 1);
v_map_685_ = lean_ctor_get(v_opts_681_, 0);
v___x_686_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_685_, v_name_683_);
if (lean_obj_tag(v___x_686_) == 0)
{
uint8_t v___x_687_; 
v___x_687_ = lean_unbox(v_defValue_684_);
return v___x_687_;
}
else
{
lean_object* v_val_688_; 
v_val_688_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_val_688_);
lean_dec_ref_known(v___x_686_, 1);
if (lean_obj_tag(v_val_688_) == 1)
{
uint8_t v_v_689_; 
v_v_689_ = lean_ctor_get_uint8(v_val_688_, 0);
lean_dec_ref_known(v_val_688_, 0);
return v_v_689_;
}
else
{
uint8_t v___x_690_; 
lean_dec(v_val_688_);
v___x_690_ = lean_unbox(v_defValue_684_);
return v___x_690_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__1___boxed(lean_object* v_opts_691_, lean_object* v_opt_692_){
_start:
{
uint8_t v_res_693_; lean_object* v_r_694_; 
v_res_693_ = l_Lean_Option_get___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__1(v_opts_691_, v_opt_692_);
lean_dec_ref(v_opt_692_);
lean_dec_ref(v_opts_691_);
v_r_694_ = lean_box(v_res_693_);
return v_r_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__3___redArg(lean_object* v_f_695_, lean_object* v_v_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
if (lean_obj_tag(v_v_696_) == 0)
{
lean_object* v_code_703_; lean_object* v___x_704_; 
v_code_703_ = lean_ctor_get(v_v_696_, 0);
lean_inc_ref(v_code_703_);
lean_dec_ref_known(v_v_696_, 1);
lean_inc(v___y_701_);
lean_inc_ref(v___y_700_);
lean_inc(v___y_699_);
lean_inc_ref(v___y_698_);
v___x_704_ = lean_apply_7(v_f_695_, v_code_703_, v___y_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, lean_box(0));
return v___x_704_;
}
else
{
lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_713_; 
lean_dec_ref(v_f_695_);
v_isSharedCheck_713_ = !lean_is_exclusive(v_v_696_);
if (v_isSharedCheck_713_ == 0)
{
lean_object* v_unused_714_; 
v_unused_714_ = lean_ctor_get(v_v_696_, 0);
lean_dec(v_unused_714_);
v___x_706_ = v_v_696_;
v_isShared_707_ = v_isSharedCheck_713_;
goto v_resetjp_705_;
}
else
{
lean_dec(v_v_696_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_713_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_711_; 
v___x_708_ = lean_box(0);
v___x_709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_709_, 0, v___x_708_);
lean_ctor_set(v___x_709_, 1, v___y_697_);
if (v_isShared_707_ == 0)
{
lean_ctor_set_tag(v___x_706_, 0);
lean_ctor_set(v___x_706_, 0, v___x_709_);
v___x_711_ = v___x_706_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_709_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
return v___x_711_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__3___redArg___boxed(lean_object* v_f_715_, lean_object* v_v_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__3___redArg(v_f_715_, v_v_716_, v___y_717_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
lean_dec(v___y_721_);
lean_dec_ref(v___y_720_);
lean_dec(v___y_719_);
lean_dec_ref(v___y_718_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__3(uint8_t v_pu_724_, lean_object* v_f_725_, lean_object* v_v_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_){
_start:
{
lean_object* v___x_733_; 
v___x_733_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__3___redArg(v_f_725_, v_v_726_, v___y_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__3___boxed(lean_object* v_pu_734_, lean_object* v_f_735_, lean_object* v_v_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
uint8_t v_pu_boxed_743_; lean_object* v_res_744_; 
v_pu_boxed_743_ = lean_unbox(v_pu_734_);
v_res_744_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__3(v_pu_boxed_743_, v_f_735_, v_v_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_);
lean_dec(v___y_741_);
lean_dec_ref(v___y_740_);
lean_dec(v___y_739_);
lean_dec_ref(v___y_738_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___lam__0(lean_object* v___x_745_, lean_object* v_00___746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_753_, 0, v___x_745_);
v___x_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
lean_ctor_set(v___x_754_, 1, v___y_747_);
v___x_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_755_, 0, v___x_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___lam__0___boxed(lean_object* v___x_756_, lean_object* v_00___757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___lam__0(v___x_756_, v_00___757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
lean_dec(v___y_760_);
lean_dec_ref(v___y_759_);
return v_res_764_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__1(void){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_766_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__0));
v___x_767_ = l_Lean_stringToMessageData(v___x_766_);
return v___x_767_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__3(void){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__2));
v___x_770_ = l_Lean_stringToMessageData(v___x_769_);
return v___x_770_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__5(void){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__4));
v___x_773_ = l_Lean_stringToMessageData(v___x_772_);
return v___x_773_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__7(void){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_775_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__6));
v___x_776_ = l_Lean_stringToMessageData(v___x_775_);
return v___x_776_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9(void){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__8));
v___x_779_ = l_Lean_stringToMessageData(v___x_778_);
return v___x_779_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__11(void){
_start:
{
lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_781_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__10));
v___x_782_ = l_Lean_stringToMessageData(v___x_781_);
return v___x_782_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13(void){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_784_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__12));
v___x_785_ = l_Lean_stringToMessageData(v___x_784_);
return v___x_785_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__15(void){
_start:
{
lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_787_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__14));
v___x_788_ = l_Lean_stringToMessageData(v___x_787_);
return v___x_788_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__17(void){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_790_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__16));
v___x_791_ = l_Lean_stringToMessageData(v___x_790_);
return v___x_791_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__19(void){
_start:
{
lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_793_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__18));
v___x_794_ = l_Lean_stringToMessageData(v___x_793_);
return v___x_794_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__21(void){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__20));
v___x_797_ = l_Lean_stringToMessageData(v___x_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2(uint8_t v_pu_798_, lean_object* v_origDecl_799_, uint8_t v_isMeta_800_, uint8_t v_isPublic_801_, lean_object* v_init_802_, lean_object* v_x_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_){
_start:
{
lean_object* v_d_811_; lean_object* v___y_812_; 
if (lean_obj_tag(v_x_803_) == 0)
{
lean_object* v_k_816_; lean_object* v_l_817_; lean_object* v_r_818_; lean_object* v___y_820_; lean_object* v___x_828_; lean_object* v___y_830_; lean_object* v___y_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_874_; lean_object* v___y_875_; lean_object* v___y_876_; lean_object* v___y_877_; lean_object* v___y_878_; uint8_t v___y_881_; lean_object* v___y_882_; lean_object* v___y_883_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v___y_886_; lean_object* v___x_890_; lean_object* v___x_891_; 
v_k_816_ = lean_ctor_get(v_x_803_, 1);
lean_inc(v_k_816_);
v_l_817_ = lean_ctor_get(v_x_803_, 3);
lean_inc(v_l_817_);
v_r_818_ = lean_ctor_get(v_x_803_, 4);
lean_inc(v_r_818_);
lean_dec_ref_known(v_x_803_, 5);
v___x_828_ = lean_box(0);
v___x_890_ = lean_box(0);
lean_inc_ref(v_origDecl_799_);
v___x_891_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2(v_pu_798_, v_origDecl_799_, v_isMeta_800_, v_isPublic_801_, v_init_802_, v_l_817_, v___y_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v_a_892_; lean_object* v_fst_893_; 
v_a_892_ = lean_ctor_get(v___x_891_, 0);
lean_inc(v_a_892_);
lean_dec_ref_known(v___x_891_, 1);
v_fst_893_ = lean_ctor_get(v_a_892_, 0);
if (lean_obj_tag(v_fst_893_) == 0)
{
lean_object* v_snd_894_; lean_object* v_a_895_; 
lean_inc_ref(v_fst_893_);
lean_dec(v_r_818_);
lean_dec(v_k_816_);
lean_dec_ref(v_origDecl_799_);
v_snd_894_ = lean_ctor_get(v_a_892_, 1);
lean_inc(v_snd_894_);
lean_dec(v_a_892_);
v_a_895_ = lean_ctor_get(v_fst_893_, 0);
lean_inc(v_a_895_);
lean_dec_ref_known(v_fst_893_, 1);
v_d_811_ = v_a_895_;
v___y_812_ = v_snd_894_;
goto v___jp_810_;
}
else
{
lean_object* v_snd_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_1110_; 
v_snd_896_ = lean_ctor_get(v_a_892_, 1);
v_isSharedCheck_1110_ = !lean_is_exclusive(v_a_892_);
if (v_isSharedCheck_1110_ == 0)
{
lean_object* v_unused_1111_; 
v_unused_1111_ = lean_ctor_get(v_a_892_, 0);
lean_dec(v_unused_1111_);
v___x_898_ = v_a_892_;
v_isShared_899_ = v_isSharedCheck_1110_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_snd_896_);
lean_dec(v_a_892_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_1110_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
uint8_t v___x_900_; uint8_t v___y_902_; lean_object* v___y_903_; lean_object* v___y_904_; lean_object* v___y_905_; lean_object* v___y_906_; 
v___x_900_ = l_Lean_NameSet_contains(v_snd_896_, v_k_816_);
if (v___x_900_ == 0)
{
lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v_env_931_; uint8_t v___y_933_; lean_object* v___y_934_; lean_object* v___y_935_; lean_object* v___y_936_; lean_object* v___y_937_; lean_object* v___y_938_; lean_object* v___y_972_; lean_object* v___y_973_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v___y_976_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; 
lean_inc(v_k_816_);
v___x_929_ = l_Lean_NameSet_insert(v_snd_896_, v_k_816_);
v___x_930_ = lean_st_ref_get(v___y_808_);
v_env_931_ = lean_ctor_get(v___x_930_, 0);
lean_inc_ref(v_env_931_);
lean_dec(v___x_930_);
if (v_isMeta_800_ == 0)
{
v___y_1030_ = v___x_929_;
v___y_1031_ = v___y_805_;
v___y_1032_ = v___y_806_;
v___y_1033_ = v___y_807_;
v___y_1034_ = v___y_808_;
goto v___jp_1029_;
}
else
{
if (v_isPublic_801_ == 0)
{
v___y_1030_ = v___x_929_;
v___y_1031_ = v___y_805_;
v___y_1032_ = v___y_806_;
v___y_1033_ = v___y_807_;
v___y_1034_ = v___y_808_;
goto v___jp_1029_;
}
else
{
lean_object* v___x_1040_; 
v___x_1040_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_931_, v_k_816_);
if (lean_obj_tag(v___x_1040_) == 1)
{
lean_object* v_val_1041_; uint8_t v___x_1042_; 
v_val_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc(v_val_1041_);
lean_dec_ref_known(v___x_1040_, 1);
lean_inc(v_k_816_);
lean_inc_ref(v_env_931_);
v___x_1042_ = l_Lean_isMarkedMeta(v_env_931_, v_k_816_);
if (v___x_1042_ == 0)
{
lean_object* v___x_1043_; lean_object* v_modules_1044_; lean_object* v_moduleNames_1045_; lean_object* v___x_1046_; uint8_t v___x_1047_; 
v___x_1043_ = l_Lean_Environment_header(v_env_931_);
v_modules_1044_ = lean_ctor_get(v___x_1043_, 3);
lean_inc_ref(v_modules_1044_);
v_moduleNames_1045_ = lean_ctor_get(v___x_1043_, 4);
lean_inc_ref(v_moduleNames_1045_);
lean_dec_ref(v___x_1043_);
v___x_1046_ = lean_array_get_size(v_modules_1044_);
v___x_1047_ = lean_nat_dec_lt(v_val_1041_, v___x_1046_);
if (v___x_1047_ == 0)
{
lean_dec_ref(v_moduleNames_1045_);
lean_dec_ref(v_modules_1044_);
lean_dec(v_val_1041_);
v___y_1030_ = v___x_929_;
v___y_1031_ = v___y_805_;
v___y_1032_ = v___y_806_;
v___y_1033_ = v___y_807_;
v___y_1034_ = v___y_808_;
goto v___jp_1029_;
}
else
{
lean_object* v___x_1048_; lean_object* v_toImport_1049_; uint8_t v_isExported_1050_; 
v___x_1048_ = lean_array_fget(v_modules_1044_, v_val_1041_);
lean_dec_ref(v_modules_1044_);
v_toImport_1049_ = lean_ctor_get(v___x_1048_, 0);
lean_inc_ref(v_toImport_1049_);
lean_dec(v___x_1048_);
v_isExported_1050_ = lean_ctor_get_uint8(v_toImport_1049_, sizeof(void*)*1 + 1);
lean_dec_ref(v_toImport_1049_);
if (v_isExported_1050_ == 0)
{
lean_object* v_toSignature_1051_; lean_object* v_name_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
lean_dec_ref(v_env_931_);
lean_dec(v___x_929_);
lean_del_object(v___x_898_);
lean_dec(v_r_818_);
v_toSignature_1051_ = lean_ctor_get(v_origDecl_799_, 0);
lean_inc_ref(v_toSignature_1051_);
lean_dec_ref(v_origDecl_799_);
v_name_1052_ = lean_ctor_get(v_toSignature_1051_, 0);
lean_inc(v_name_1052_);
lean_dec_ref(v_toSignature_1051_);
v___x_1053_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__19, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__19_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__19);
v___x_1054_ = l_Lean_MessageData_ofConstName(v_name_1052_, v___x_1042_);
v___x_1055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1053_);
lean_ctor_set(v___x_1055_, 1, v___x_1054_);
v___x_1056_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13);
v___x_1057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1055_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
v___x_1058_ = l_Lean_MessageData_ofConstName(v_k_816_, v___x_1042_);
v___x_1059_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1057_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
v___x_1060_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__15, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__15_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__15);
v___x_1061_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1059_);
lean_ctor_set(v___x_1061_, 1, v___x_1060_);
v___x_1062_ = lean_array_get(v___x_890_, v_moduleNames_1045_, v_val_1041_);
lean_dec(v_val_1041_);
lean_dec_ref(v_moduleNames_1045_);
v___x_1063_ = l_Lean_MessageData_ofName(v___x_1062_);
v___x_1064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1061_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
v___x_1065_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9);
v___x_1066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1064_);
lean_ctor_set(v___x_1066_, 1, v___x_1065_);
v___x_1067_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___redArg(v___x_1066_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1067_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1067_);
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
else
{
lean_dec_ref(v_moduleNames_1045_);
lean_dec(v_val_1041_);
v___y_1030_ = v___x_929_;
v___y_1031_ = v___y_805_;
v___y_1032_ = v___y_806_;
v___y_1033_ = v___y_807_;
v___y_1034_ = v___y_808_;
goto v___jp_1029_;
}
}
}
else
{
lean_object* v___x_1076_; lean_object* v_modules_1077_; lean_object* v_moduleNames_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1076_ = l_Lean_Environment_header(v_env_931_);
v_modules_1077_ = lean_ctor_get(v___x_1076_, 3);
lean_inc_ref(v_modules_1077_);
v_moduleNames_1078_ = lean_ctor_get(v___x_1076_, 4);
lean_inc_ref(v_moduleNames_1078_);
lean_dec_ref(v___x_1076_);
v___x_1079_ = lean_array_get_size(v_modules_1077_);
v___x_1080_ = lean_nat_dec_lt(v_val_1041_, v___x_1079_);
if (v___x_1080_ == 0)
{
lean_dec_ref(v_moduleNames_1078_);
lean_dec_ref(v_modules_1077_);
lean_dec(v_val_1041_);
v___y_1030_ = v___x_929_;
v___y_1031_ = v___y_805_;
v___y_1032_ = v___y_806_;
v___y_1033_ = v___y_807_;
v___y_1034_ = v___y_808_;
goto v___jp_1029_;
}
else
{
lean_object* v___x_1081_; lean_object* v_toImport_1082_; uint8_t v_isExported_1083_; 
v___x_1081_ = lean_array_fget(v_modules_1077_, v_val_1041_);
lean_dec_ref(v_modules_1077_);
v_toImport_1082_ = lean_ctor_get(v___x_1081_, 0);
lean_inc_ref(v_toImport_1082_);
lean_dec(v___x_1081_);
v_isExported_1083_ = lean_ctor_get_uint8(v_toImport_1082_, sizeof(void*)*1 + 1);
lean_dec_ref(v_toImport_1082_);
if (v_isExported_1083_ == 0)
{
lean_object* v_toSignature_1084_; lean_object* v_name_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v_a_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1108_; 
lean_dec_ref(v_env_931_);
lean_dec(v___x_929_);
lean_del_object(v___x_898_);
lean_dec(v_r_818_);
v_toSignature_1084_ = lean_ctor_get(v_origDecl_799_, 0);
lean_inc_ref(v_toSignature_1084_);
lean_dec_ref(v_origDecl_799_);
v_name_1085_ = lean_ctor_get(v_toSignature_1084_, 0);
lean_inc(v_name_1085_);
lean_dec_ref(v_toSignature_1084_);
v___x_1086_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__19, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__19_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__19);
v___x_1087_ = l_Lean_MessageData_ofConstName(v_name_1085_, v___x_900_);
v___x_1088_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1086_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13);
v___x_1090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1088_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = l_Lean_MessageData_ofConstName(v_k_816_, v___x_900_);
v___x_1092_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1090_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__21, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__21_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__21);
v___x_1094_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1092_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v___x_1095_ = lean_array_get(v___x_890_, v_moduleNames_1078_, v_val_1041_);
lean_dec(v_val_1041_);
lean_dec_ref(v_moduleNames_1078_);
v___x_1096_ = l_Lean_MessageData_ofName(v___x_1095_);
v___x_1097_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1094_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9);
v___x_1099_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1097_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
v___x_1100_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___redArg(v___x_1099_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
v_a_1101_ = lean_ctor_get(v___x_1100_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1103_ = v___x_1100_;
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_a_1101_);
lean_dec(v___x_1100_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1106_; 
if (v_isShared_1104_ == 0)
{
v___x_1106_ = v___x_1103_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_a_1101_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
else
{
lean_dec_ref(v_moduleNames_1078_);
lean_dec(v_val_1041_);
v___y_1030_ = v___x_929_;
v___y_1031_ = v___y_805_;
v___y_1032_ = v___y_806_;
v___y_1033_ = v___y_807_;
v___y_1034_ = v___y_808_;
goto v___jp_1029_;
}
}
}
}
else
{
lean_dec(v___x_1040_);
v___y_1030_ = v___x_929_;
v___y_1031_ = v___y_805_;
v___y_1032_ = v___y_806_;
v___y_1033_ = v___y_807_;
v___y_1034_ = v___y_808_;
goto v___jp_1029_;
}
}
}
v___jp_932_:
{
uint8_t v___x_939_; uint8_t v___x_940_; 
v___x_939_ = 1;
v___x_940_ = l_Lean_instBEqIRPhases_beq(v___y_933_, v___x_939_);
if (v___x_940_ == 0)
{
lean_dec_ref(v_env_931_);
lean_del_object(v___x_898_);
v___y_881_ = v___y_933_;
v___y_882_ = v___y_934_;
v___y_883_ = v___y_935_;
v___y_884_ = v___y_936_;
v___y_885_ = v___y_937_;
v___y_886_ = v___y_938_;
goto v___jp_880_;
}
else
{
if (v_isMeta_800_ == 0)
{
lean_object* v___x_941_; 
lean_dec(v___y_934_);
lean_dec(v_r_818_);
v___x_941_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_931_, v_k_816_);
if (lean_obj_tag(v___x_941_) == 1)
{
lean_object* v_val_942_; uint8_t v___x_943_; 
v_val_942_ = lean_ctor_get(v___x_941_, 0);
lean_inc(v_val_942_);
lean_dec_ref_known(v___x_941_, 1);
lean_inc(v_k_816_);
lean_inc_ref(v_env_931_);
v___x_943_ = l_Lean_isMarkedMeta(v_env_931_, v_k_816_);
if (v___x_943_ == 0)
{
lean_object* v_toSignature_944_; lean_object* v_name_945_; lean_object* v___x_946_; lean_object* v_moduleNames_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v_a_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_970_; 
lean_del_object(v___x_898_);
v_toSignature_944_ = lean_ctor_get(v_origDecl_799_, 0);
lean_inc_ref(v_toSignature_944_);
lean_dec_ref(v_origDecl_799_);
v_name_945_ = lean_ctor_get(v_toSignature_944_, 0);
lean_inc(v_name_945_);
lean_dec_ref(v_toSignature_944_);
v___x_946_ = l_Lean_Environment_header(v_env_931_);
lean_dec_ref(v_env_931_);
v_moduleNames_947_ = lean_ctor_get(v___x_946_, 4);
lean_inc_ref(v_moduleNames_947_);
lean_dec_ref(v___x_946_);
v___x_948_ = l_Lean_MessageData_ofConstName(v_name_945_, v___x_900_);
v___x_949_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__1, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__1_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__1);
v___x_950_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
lean_ctor_set(v___x_950_, 1, v___x_948_);
v___x_951_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__3, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__3);
v___x_952_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_950_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = l_Lean_MessageData_ofConstName(v_k_816_, v___x_900_);
v___x_954_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_954_, 0, v___x_952_);
lean_ctor_set(v___x_954_, 1, v___x_953_);
v___x_955_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__7, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__7);
v___x_956_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_954_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
v___x_957_ = lean_array_get(v___x_890_, v_moduleNames_947_, v_val_942_);
lean_dec(v_val_942_);
lean_dec_ref(v_moduleNames_947_);
v___x_958_ = l_Lean_MessageData_ofName(v___x_957_);
v___x_959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_956_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9);
v___x_961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_959_);
lean_ctor_set(v___x_961_, 1, v___x_960_);
v___x_962_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___redArg(v___x_961_, v___y_935_, v___y_936_, v___y_937_, v___y_938_);
v_a_963_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_970_ == 0)
{
v___x_965_ = v___x_962_;
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_a_963_);
lean_dec(v___x_962_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_968_; 
if (v_isShared_966_ == 0)
{
v___x_968_ = v___x_965_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_a_963_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
else
{
lean_dec(v_val_942_);
lean_dec_ref(v_env_931_);
v___y_902_ = v___y_933_;
v___y_903_ = v___y_935_;
v___y_904_ = v___y_936_;
v___y_905_ = v___y_937_;
v___y_906_ = v___y_938_;
goto v___jp_901_;
}
}
else
{
lean_dec(v___x_941_);
lean_dec_ref(v_env_931_);
v___y_902_ = v___y_933_;
v___y_903_ = v___y_935_;
v___y_904_ = v___y_936_;
v___y_905_ = v___y_937_;
v___y_906_ = v___y_938_;
goto v___jp_901_;
}
}
else
{
lean_dec_ref(v_env_931_);
lean_del_object(v___x_898_);
v___y_881_ = v___y_933_;
v___y_882_ = v___y_934_;
v___y_883_ = v___y_935_;
v___y_884_ = v___y_936_;
v___y_885_ = v___y_937_;
v___y_886_ = v___y_938_;
goto v___jp_880_;
}
}
}
v___jp_971_:
{
uint8_t v___x_977_; uint8_t v___x_978_; uint8_t v___x_979_; 
lean_inc(v_k_816_);
lean_inc_ref(v_env_931_);
v___x_977_ = l_Lean_getIRPhases(v_env_931_, v_k_816_);
v___x_978_ = 0;
v___x_979_ = l_Lean_instBEqIRPhases_beq(v___x_977_, v___x_978_);
if (v___x_979_ == 0)
{
v___y_933_ = v___x_977_;
v___y_934_ = v___y_972_;
v___y_935_ = v___y_976_;
v___y_936_ = v___y_974_;
v___y_937_ = v___y_975_;
v___y_938_ = v___y_973_;
goto v___jp_932_;
}
else
{
if (v_isMeta_800_ == 0)
{
v___y_933_ = v___x_977_;
v___y_934_ = v___y_972_;
v___y_935_ = v___y_976_;
v___y_936_ = v___y_974_;
v___y_937_ = v___y_975_;
v___y_938_ = v___y_973_;
goto v___jp_932_;
}
else
{
lean_object* v___x_980_; 
lean_dec(v___y_972_);
lean_del_object(v___x_898_);
lean_dec(v_r_818_);
v___x_980_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_931_, v_k_816_);
if (lean_obj_tag(v___x_980_) == 1)
{
lean_object* v_toSignature_981_; lean_object* v_val_982_; lean_object* v_name_983_; lean_object* v___x_984_; lean_object* v_moduleNames_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
v_toSignature_981_ = lean_ctor_get(v_origDecl_799_, 0);
lean_inc_ref(v_toSignature_981_);
lean_dec_ref(v_origDecl_799_);
v_val_982_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_val_982_);
lean_dec_ref_known(v___x_980_, 1);
v_name_983_ = lean_ctor_get(v_toSignature_981_, 0);
lean_inc(v_name_983_);
lean_dec_ref(v_toSignature_981_);
v___x_984_ = l_Lean_Environment_header(v_env_931_);
lean_dec_ref(v_env_931_);
v_moduleNames_985_ = lean_ctor_get(v___x_984_, 4);
lean_inc_ref(v_moduleNames_985_);
lean_dec_ref(v___x_984_);
v___x_986_ = l_Lean_MessageData_ofConstName(v_name_983_, v___x_900_);
v___x_987_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__11, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__11_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__11);
v___x_988_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_987_);
lean_ctor_set(v___x_988_, 1, v___x_986_);
v___x_989_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13);
v___x_990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_988_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = l_Lean_MessageData_ofConstName(v_k_816_, v___x_900_);
v___x_992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_990_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
v___x_993_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__15, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__15_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__15);
v___x_994_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_992_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = lean_array_get(v___x_890_, v_moduleNames_985_, v_val_982_);
lean_dec(v_val_982_);
lean_dec_ref(v_moduleNames_985_);
v___x_996_ = l_Lean_MessageData_ofName(v___x_995_);
v___x_997_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_994_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__9);
v___x_999_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_997_);
lean_ctor_set(v___x_999_, 1, v___x_998_);
v___x_1000_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___redArg(v___x_999_, v___y_976_, v___y_974_, v___y_975_, v___y_973_);
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1003_ = v___x_1000_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_1000_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1006_; 
if (v_isShared_1004_ == 0)
{
v___x_1006_ = v___x_1003_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_1001_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
else
{
lean_object* v_toSignature_1009_; lean_object* v_name_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1028_; 
lean_dec(v___x_980_);
lean_dec_ref(v_env_931_);
v_toSignature_1009_ = lean_ctor_get(v_origDecl_799_, 0);
lean_inc_ref(v_toSignature_1009_);
lean_dec_ref(v_origDecl_799_);
v_name_1010_ = lean_ctor_get(v_toSignature_1009_, 0);
lean_inc(v_name_1010_);
lean_dec_ref(v_toSignature_1009_);
v___x_1011_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__11, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__11_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__11);
v___x_1012_ = l_Lean_MessageData_ofConstName(v_name_1010_, v___x_900_);
v___x_1013_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1011_);
lean_ctor_set(v___x_1013_, 1, v___x_1012_);
v___x_1014_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__13);
v___x_1015_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1013_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = l_Lean_MessageData_ofConstName(v_k_816_, v___x_900_);
v___x_1017_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1015_);
lean_ctor_set(v___x_1017_, 1, v___x_1016_);
v___x_1018_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__17, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__17_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__17);
v___x_1019_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1017_);
lean_ctor_set(v___x_1019_, 1, v___x_1018_);
v___x_1020_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___redArg(v___x_1019_, v___y_976_, v___y_974_, v___y_975_, v___y_973_);
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1023_ = v___x_1020_;
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_1020_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1026_; 
if (v_isShared_1024_ == 0)
{
v___x_1026_ = v___x_1023_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_a_1021_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
}
}
}
v___jp_1029_:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; uint8_t v___x_1037_; 
v___x_1035_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1033_);
v___x_1036_ = l_Lean_Compiler_compiler_relaxedMetaCheck;
v___x_1037_ = l_Lean_Option_get___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__1(v___x_1035_, v___x_1036_);
lean_dec_ref(v___x_1035_);
if (v___x_1037_ == 0)
{
v___y_972_ = v___y_1030_;
v___y_973_ = v___y_1034_;
v___y_974_ = v___y_1032_;
v___y_975_ = v___y_1033_;
v___y_976_ = v___y_1031_;
goto v___jp_971_;
}
else
{
uint8_t v___x_1038_; 
v___x_1038_ = l_Lean_Environment_isImportedConst(v_env_931_, v_k_816_);
if (v___x_1038_ == 0)
{
uint8_t v___x_1039_; 
lean_del_object(v___x_898_);
lean_inc(v_k_816_);
v___x_1039_ = l_Lean_getIRPhases(v_env_931_, v_k_816_);
v___y_881_ = v___x_1039_;
v___y_882_ = v___y_1030_;
v___y_883_ = v___y_1031_;
v___y_884_ = v___y_1032_;
v___y_885_ = v___y_1033_;
v___y_886_ = v___y_1034_;
goto v___jp_880_;
}
else
{
v___y_972_ = v___y_1030_;
v___y_973_ = v___y_1034_;
v___y_974_ = v___y_1032_;
v___y_975_ = v___y_1033_;
v___y_976_ = v___y_1031_;
goto v___jp_971_;
}
}
}
}
else
{
lean_object* v___x_1109_; 
lean_del_object(v___x_898_);
lean_dec(v_k_816_);
v___x_1109_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___lam__0(v___x_828_, v___x_828_, v_snd_896_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
v___y_820_ = v___x_1109_;
goto v___jp_819_;
}
v___jp_901_:
{
lean_object* v_toSignature_907_; lean_object* v_name_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_912_; 
v_toSignature_907_ = lean_ctor_get(v_origDecl_799_, 0);
lean_inc_ref(v_toSignature_907_);
lean_dec_ref(v_origDecl_799_);
v_name_908_ = lean_ctor_get(v_toSignature_907_, 0);
lean_inc(v_name_908_);
lean_dec_ref(v_toSignature_907_);
v___x_909_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__1, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__1_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__1);
v___x_910_ = l_Lean_MessageData_ofConstName(v_name_908_, v___x_900_);
if (v_isShared_899_ == 0)
{
lean_ctor_set_tag(v___x_898_, 7);
lean_ctor_set(v___x_898_, 1, v___x_910_);
lean_ctor_set(v___x_898_, 0, v___x_909_);
v___x_912_ = v___x_898_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_909_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v___x_910_);
v___x_912_ = v_reuseFailAlloc_928_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_927_; 
v___x_913_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__3, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__3);
v___x_914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_912_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = l_Lean_MessageData_ofConstName(v_k_816_, v___x_900_);
v___x_916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_914_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
v___x_917_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__5, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__5_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___closed__5);
v___x_918_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_916_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___redArg(v___x_918_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
v_a_920_ = lean_ctor_get(v___x_919_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_919_);
if (v_isSharedCheck_927_ == 0)
{
v___x_922_ = v___x_919_;
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___x_919_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_923_ == 0)
{
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_920_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
}
}
}
else
{
lean_dec(v_r_818_);
lean_dec(v_k_816_);
lean_dec_ref(v_origDecl_799_);
return v___x_891_;
}
v___jp_819_:
{
lean_object* v_a_821_; lean_object* v_fst_822_; 
v_a_821_ = lean_ctor_get(v___y_820_, 0);
lean_inc(v_a_821_);
lean_dec_ref(v___y_820_);
v_fst_822_ = lean_ctor_get(v_a_821_, 0);
lean_inc(v_fst_822_);
if (lean_obj_tag(v_fst_822_) == 0)
{
lean_object* v_snd_823_; lean_object* v_a_824_; 
lean_dec(v_r_818_);
lean_dec_ref(v_origDecl_799_);
v_snd_823_ = lean_ctor_get(v_a_821_, 1);
lean_inc(v_snd_823_);
lean_dec(v_a_821_);
v_a_824_ = lean_ctor_get(v_fst_822_, 0);
lean_inc(v_a_824_);
lean_dec_ref_known(v_fst_822_, 1);
v_d_811_ = v_a_824_;
v___y_812_ = v_snd_823_;
goto v___jp_810_;
}
else
{
lean_object* v_snd_825_; lean_object* v_a_826_; 
v_snd_825_ = lean_ctor_get(v_a_821_, 1);
lean_inc(v_snd_825_);
lean_dec(v_a_821_);
v_a_826_ = lean_ctor_get(v_fst_822_, 0);
lean_inc(v_a_826_);
lean_dec_ref_known(v_fst_822_, 1);
v_init_802_ = v_a_826_;
v_x_803_ = v_r_818_;
v___y_804_ = v_snd_825_;
goto _start;
}
}
v___jp_829_:
{
lean_object* v___x_835_; 
v___x_835_ = l_Lean_Compiler_LCNF_getPhase___redArg(v___y_831_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v_a_836_; uint8_t v___x_837_; lean_object* v___x_838_; 
v_a_836_ = lean_ctor_get(v___x_835_, 0);
lean_inc(v_a_836_);
lean_dec_ref_known(v___x_835_, 1);
v___x_837_ = lean_unbox(v_a_836_);
v___x_838_ = l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(v_k_816_, v___x_837_, v___y_834_);
lean_dec(v_k_816_);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_object* v_a_839_; 
v_a_839_ = lean_ctor_get(v___x_838_, 0);
lean_inc(v_a_839_);
lean_dec_ref_known(v___x_838_, 1);
if (lean_obj_tag(v_a_839_) == 1)
{
lean_object* v_val_840_; uint8_t v___x_841_; uint8_t v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v_val_840_ = lean_ctor_get(v_a_839_, 0);
lean_inc(v_val_840_);
lean_dec_ref_known(v_a_839_, 1);
v___x_841_ = lean_unbox(v_a_836_);
lean_dec(v_a_836_);
v___x_842_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_841_);
v___x_843_ = l_Lean_Compiler_LCNF_Decl_castPurity_x21(v___x_842_, v_val_840_, v_pu_798_);
lean_dec(v_val_840_);
lean_inc_ref(v_origDecl_799_);
v___x_844_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go(v_pu_798_, v_origDecl_799_, v_isMeta_800_, v_isPublic_801_, v___x_843_, v___y_833_, v___y_831_, v___y_830_, v___y_832_, v___y_834_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v_a_845_; lean_object* v_snd_846_; 
v_a_845_ = lean_ctor_get(v___x_844_, 0);
lean_inc(v_a_845_);
lean_dec_ref_known(v___x_844_, 1);
v_snd_846_ = lean_ctor_get(v_a_845_, 1);
lean_inc(v_snd_846_);
lean_dec(v_a_845_);
v_init_802_ = v___x_828_;
v_x_803_ = v_r_818_;
v___y_804_ = v_snd_846_;
goto _start;
}
else
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
lean_dec(v_r_818_);
lean_dec_ref(v_origDecl_799_);
v_a_848_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v___x_844_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_844_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
else
{
lean_dec(v_a_839_);
lean_dec(v_a_836_);
v_init_802_ = v___x_828_;
v_x_803_ = v_r_818_;
v___y_804_ = v___y_833_;
goto _start;
}
}
else
{
lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_864_; 
lean_dec(v_a_836_);
lean_dec(v___y_833_);
lean_dec(v_r_818_);
lean_dec_ref(v_origDecl_799_);
v_a_857_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_864_ == 0)
{
v___x_859_ = v___x_838_;
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_a_857_);
lean_dec(v___x_838_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_862_; 
if (v_isShared_860_ == 0)
{
v___x_862_ = v___x_859_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_857_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
}
else
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_872_; 
lean_dec(v___y_833_);
lean_dec(v_r_818_);
lean_dec(v_k_816_);
lean_dec_ref(v_origDecl_799_);
v_a_865_ = lean_ctor_get(v___x_835_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_872_ == 0)
{
v___x_867_ = v___x_835_;
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_835_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_870_; 
if (v_isShared_868_ == 0)
{
v___x_870_ = v___x_867_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_a_865_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
}
v___jp_873_:
{
lean_object* v___x_879_; 
v___x_879_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___lam__0(v___x_828_, v___x_828_, v___y_877_, v___y_875_, v___y_874_, v___y_876_, v___y_878_);
v___y_820_ = v___x_879_;
goto v___jp_819_;
}
v___jp_880_:
{
uint8_t v___x_887_; uint8_t v___x_888_; 
v___x_887_ = 2;
v___x_888_ = l_Lean_instBEqIRPhases_beq(v___y_881_, v___x_887_);
if (v___x_888_ == 0)
{
if (v_isPublic_801_ == 0)
{
lean_dec(v_k_816_);
v___y_874_ = v___y_884_;
v___y_875_ = v___y_883_;
v___y_876_ = v___y_885_;
v___y_877_ = v___y_882_;
v___y_878_ = v___y_886_;
goto v___jp_873_;
}
else
{
uint8_t v___x_889_; 
v___x_889_ = l_Lean_isPrivateName(v_k_816_);
if (v___x_889_ == 0)
{
lean_dec(v_k_816_);
v___y_874_ = v___y_884_;
v___y_875_ = v___y_883_;
v___y_876_ = v___y_885_;
v___y_877_ = v___y_882_;
v___y_878_ = v___y_886_;
goto v___jp_873_;
}
else
{
v___y_830_ = v___y_884_;
v___y_831_ = v___y_883_;
v___y_832_ = v___y_885_;
v___y_833_ = v___y_882_;
v___y_834_ = v___y_886_;
goto v___jp_829_;
}
}
}
else
{
v___y_830_ = v___y_884_;
v___y_831_ = v___y_883_;
v___y_832_ = v___y_885_;
v___y_833_ = v___y_882_;
v___y_834_ = v___y_886_;
goto v___jp_829_;
}
}
}
else
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
lean_dec_ref(v_origDecl_799_);
v___x_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1112_, 0, v_init_802_);
v___x_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
lean_ctor_set(v___x_1113_, 1, v___y_804_);
v___x_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
return v___x_1114_;
}
v___jp_810_:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_813_, 0, v_d_811_);
v___x_814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
lean_ctor_set(v___x_814_, 1, v___y_812_);
v___x_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
return v___x_815_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go___lam__0(uint8_t v_pu_1115_, lean_object* v_origDecl_1116_, uint8_t v_isMeta_1117_, uint8_t v_isPublic_1118_, lean_object* v_code_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1126_ = l_Lean_NameSet_empty;
v___x_1127_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls(v_pu_1115_, v_code_1119_, v___x_1126_);
v___x_1128_ = lean_box(0);
v___x_1129_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2(v_pu_1115_, v_origDecl_1116_, v_isMeta_1117_, v_isPublic_1118_, v___x_1128_, v___x_1127_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_);
if (lean_obj_tag(v___x_1129_) == 0)
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1146_; 
v_a_1130_ = lean_ctor_get(v___x_1129_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1132_ = v___x_1129_;
v_isShared_1133_ = v_isSharedCheck_1146_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___x_1129_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1146_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v_snd_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1144_; 
v_snd_1134_ = lean_ctor_get(v_a_1130_, 1);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_a_1130_);
if (v_isSharedCheck_1144_ == 0)
{
lean_object* v_unused_1145_; 
v_unused_1145_ = lean_ctor_get(v_a_1130_, 0);
lean_dec(v_unused_1145_);
v___x_1136_ = v_a_1130_;
v_isShared_1137_ = v_isSharedCheck_1144_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_snd_1134_);
lean_dec(v_a_1130_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1144_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1139_; 
if (v_isShared_1137_ == 0)
{
lean_ctor_set(v___x_1136_, 0, v___x_1128_);
v___x_1139_ = v___x_1136_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1128_);
lean_ctor_set(v_reuseFailAlloc_1143_, 1, v_snd_1134_);
v___x_1139_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
lean_object* v___x_1141_; 
if (v_isShared_1133_ == 0)
{
lean_ctor_set(v___x_1132_, 0, v___x_1139_);
v___x_1141_ = v___x_1132_;
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
lean_object* v_a_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1154_; 
v_a_1147_ = lean_ctor_get(v___x_1129_, 0);
v_isSharedCheck_1154_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1149_ = v___x_1129_;
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_a_1147_);
lean_dec(v___x_1129_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1152_; 
if (v_isShared_1150_ == 0)
{
v___x_1152_ = v___x_1149_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_a_1147_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go___lam__0___boxed(lean_object* v_pu_1155_, lean_object* v_origDecl_1156_, lean_object* v_isMeta_1157_, lean_object* v_isPublic_1158_, lean_object* v_code_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_){
_start:
{
uint8_t v_pu_boxed_1166_; uint8_t v_isMeta_boxed_1167_; uint8_t v_isPublic_boxed_1168_; lean_object* v_res_1169_; 
v_pu_boxed_1166_ = lean_unbox(v_pu_1155_);
v_isMeta_boxed_1167_ = lean_unbox(v_isMeta_1157_);
v_isPublic_boxed_1168_ = lean_unbox(v_isPublic_1158_);
v_res_1169_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go___lam__0(v_pu_boxed_1166_, v_origDecl_1156_, v_isMeta_boxed_1167_, v_isPublic_boxed_1168_, v_code_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_);
lean_dec(v___y_1164_);
lean_dec_ref(v___y_1163_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go(uint8_t v_pu_1170_, lean_object* v_origDecl_1171_, uint8_t v_isMeta_1172_, uint8_t v_isPublic_1173_, lean_object* v_decl_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_){
_start:
{
lean_object* v_value_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___f_1185_; lean_object* v___x_1186_; 
v_value_1181_ = lean_ctor_get(v_decl_1174_, 1);
lean_inc_ref(v_value_1181_);
lean_dec_ref(v_decl_1174_);
v___x_1182_ = lean_box(v_pu_1170_);
v___x_1183_ = lean_box(v_isMeta_1172_);
v___x_1184_ = lean_box(v_isPublic_1173_);
v___f_1185_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1185_, 0, v___x_1182_);
lean_closure_set(v___f_1185_, 1, v_origDecl_1171_);
lean_closure_set(v___f_1185_, 2, v___x_1183_);
lean_closure_set(v___f_1185_, 3, v___x_1184_);
v___x_1186_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__3___redArg(v___f_1185_, v_value_1181_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go___boxed(lean_object* v_pu_1187_, lean_object* v_origDecl_1188_, lean_object* v_isMeta_1189_, lean_object* v_isPublic_1190_, lean_object* v_decl_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_){
_start:
{
uint8_t v_pu_boxed_1198_; uint8_t v_isMeta_boxed_1199_; uint8_t v_isPublic_boxed_1200_; lean_object* v_res_1201_; 
v_pu_boxed_1198_ = lean_unbox(v_pu_1187_);
v_isMeta_boxed_1199_ = lean_unbox(v_isMeta_1189_);
v_isPublic_boxed_1200_ = lean_unbox(v_isPublic_1190_);
v_res_1201_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go(v_pu_boxed_1198_, v_origDecl_1188_, v_isMeta_boxed_1199_, v_isPublic_boxed_1200_, v_decl_1191_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_);
lean_dec(v_a_1196_);
lean_dec_ref(v_a_1195_);
lean_dec(v_a_1194_);
lean_dec_ref(v_a_1193_);
return v_res_1201_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2___boxed(lean_object* v_pu_1202_, lean_object* v_origDecl_1203_, lean_object* v_isMeta_1204_, lean_object* v_isPublic_1205_, lean_object* v_init_1206_, lean_object* v_x_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
uint8_t v_pu_boxed_1214_; uint8_t v_isMeta_boxed_1215_; uint8_t v_isPublic_boxed_1216_; lean_object* v_res_1217_; 
v_pu_boxed_1214_ = lean_unbox(v_pu_1202_);
v_isMeta_boxed_1215_ = lean_unbox(v_isMeta_1204_);
v_isPublic_boxed_1216_ = lean_unbox(v_isPublic_1205_);
v_res_1217_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__2(v_pu_boxed_1214_, v_origDecl_1203_, v_isMeta_boxed_1215_, v_isPublic_boxed_1216_, v_init_1206_, v_x_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_, v___y_1212_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
lean_dec(v___y_1210_);
lean_dec_ref(v___y_1209_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_Compiler_LCNF_checkMeta_spec__0___redArg(lean_object* v_opt_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v___x_1221_; uint8_t v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1221_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1219_);
v___x_1222_ = l_Lean_Option_get___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__1(v___x_1221_, v_opt_1218_);
lean_dec_ref(v___x_1221_);
v___x_1223_ = lean_box(v___x_1222_);
v___x_1224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1223_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_Compiler_LCNF_checkMeta_spec__0___redArg___boxed(lean_object* v_opt_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l_Lean_Option_getM___at___00Lean_Compiler_LCNF_checkMeta_spec__0___redArg(v_opt_1225_, v___y_1226_);
lean_dec_ref(v___y_1226_);
lean_dec_ref(v_opt_1225_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_checkMeta(uint8_t v_pu_1229_, lean_object* v_origDecl_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_){
_start:
{
lean_object* v___x_1239_; lean_object* v_env_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v_a_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v_a_1246_; lean_object* v___x_1247_; uint8_t v_isModule_1248_; 
v___x_1239_ = lean_st_ref_get(v_a_1234_);
v_env_1240_ = lean_ctor_get(v___x_1239_, 0);
lean_inc_ref(v_env_1240_);
lean_dec(v___x_1239_);
v___x_1241_ = l_Lean_Compiler_compiler_inLeanIR;
v___x_1242_ = l_Lean_Option_getM___at___00Lean_Compiler_LCNF_checkMeta_spec__0___redArg(v___x_1241_, v_a_1233_);
v_a_1243_ = lean_ctor_get(v___x_1242_, 0);
lean_inc(v_a_1243_);
lean_dec_ref(v___x_1242_);
v___x_1244_ = l_Lean_Compiler_compiler_checkMeta;
v___x_1245_ = l_Lean_Option_getM___at___00Lean_Compiler_LCNF_checkMeta_spec__0___redArg(v___x_1244_, v_a_1233_);
v_a_1246_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_a_1246_);
lean_dec_ref(v___x_1245_);
v___x_1247_ = l_Lean_Environment_header(v_env_1240_);
lean_dec_ref(v_env_1240_);
v_isModule_1248_ = lean_ctor_get_uint8(v___x_1247_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_1247_);
if (v_isModule_1248_ == 0)
{
lean_dec(v_a_1246_);
lean_dec(v_a_1243_);
lean_dec_ref(v_origDecl_1230_);
goto v___jp_1236_;
}
else
{
uint8_t v___x_1249_; 
v___x_1249_ = lean_unbox(v_a_1243_);
lean_dec(v_a_1243_);
if (v___x_1249_ == 0)
{
uint8_t v___x_1250_; 
v___x_1250_ = lean_unbox(v_a_1246_);
if (v___x_1250_ == 0)
{
lean_dec(v_a_1246_);
lean_dec_ref(v_origDecl_1230_);
goto v___jp_1236_;
}
else
{
lean_object* v___x_1251_; lean_object* v_toSignature_1252_; lean_object* v_env_1253_; lean_object* v_name_1254_; uint8_t v___x_1255_; uint8_t v___y_1257_; uint8_t v___x_1279_; uint8_t v___x_1280_; 
v___x_1251_ = lean_st_ref_get(v_a_1234_);
v_toSignature_1252_ = lean_ctor_get(v_origDecl_1230_, 0);
v_env_1253_ = lean_ctor_get(v___x_1251_, 0);
lean_inc_ref(v_env_1253_);
lean_dec(v___x_1251_);
v_name_1254_ = lean_ctor_get(v_toSignature_1252_, 0);
lean_inc(v_name_1254_);
v___x_1255_ = l_Lean_getIRPhases(v_env_1253_, v_name_1254_);
v___x_1279_ = 2;
v___x_1280_ = l_Lean_instBEqIRPhases_beq(v___x_1255_, v___x_1279_);
if (v___x_1280_ == 0)
{
uint8_t v___x_1281_; 
v___x_1281_ = l_Lean_isPrivateName(v_name_1254_);
if (v___x_1281_ == 0)
{
uint8_t v___x_1282_; 
v___x_1282_ = lean_unbox(v_a_1246_);
lean_dec(v_a_1246_);
v___y_1257_ = v___x_1282_;
goto v___jp_1256_;
}
else
{
lean_dec(v_a_1246_);
v___y_1257_ = v___x_1280_;
goto v___jp_1256_;
}
}
else
{
lean_dec(v_a_1246_);
lean_dec_ref(v_origDecl_1230_);
goto v___jp_1236_;
}
v___jp_1256_:
{
uint8_t v___x_1258_; uint8_t v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1258_ = 1;
v___x_1259_ = l_Lean_instBEqIRPhases_beq(v___x_1255_, v___x_1258_);
v___x_1260_ = l_Lean_NameSet_empty;
lean_inc_ref(v_origDecl_1230_);
v___x_1261_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go(v_pu_1229_, v_origDecl_1230_, v___x_1259_, v___y_1257_, v_origDecl_1230_, v___x_1260_, v_a_1231_, v_a_1232_, v_a_1233_, v_a_1234_);
if (lean_obj_tag(v___x_1261_) == 0)
{
lean_object* v_a_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1270_; 
v_a_1262_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1270_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1264_ = v___x_1261_;
v_isShared_1265_ = v_isSharedCheck_1270_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_a_1262_);
lean_dec(v___x_1261_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1270_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v_fst_1266_; lean_object* v___x_1268_; 
v_fst_1266_ = lean_ctor_get(v_a_1262_, 0);
lean_inc(v_fst_1266_);
lean_dec(v_a_1262_);
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 0, v_fst_1266_);
v___x_1268_ = v___x_1264_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_fst_1266_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
}
else
{
lean_object* v_a_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1278_; 
v_a_1271_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1273_ = v___x_1261_;
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_a_1271_);
lean_dec(v___x_1261_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_a_1271_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1246_);
lean_dec_ref(v_origDecl_1230_);
goto v___jp_1236_;
}
}
v___jp_1236_:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = lean_box(0);
v___x_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
return v___x_1238_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_checkMeta___boxed(lean_object* v_pu_1283_, lean_object* v_origDecl_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_){
_start:
{
uint8_t v_pu_boxed_1290_; lean_object* v_res_1291_; 
v_pu_boxed_1290_ = lean_unbox(v_pu_1283_);
v_res_1291_ = l_Lean_Compiler_LCNF_checkMeta(v_pu_boxed_1290_, v_origDecl_1284_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_);
lean_dec(v_a_1288_);
lean_dec_ref(v_a_1287_);
lean_dec(v_a_1286_);
lean_dec_ref(v_a_1285_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_Compiler_LCNF_checkMeta_spec__0(lean_object* v_opt_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l_Lean_Option_getM___at___00Lean_Compiler_LCNF_checkMeta_spec__0___redArg(v_opt_1292_, v___y_1295_);
return v___x_1298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_Compiler_LCNF_checkMeta_spec__0___boxed(lean_object* v_opt_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v_res_1305_; 
v_res_1305_ = l_Lean_Option_getM___at___00Lean_Compiler_LCNF_checkMeta_spec__0(v_opt_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
lean_dec_ref(v_opt_1299_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___lam__0(uint8_t v_isExporting_1306_, lean_object* v___x_1307_, lean_object* v_x_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_){
_start:
{
lean_object* v___x_1315_; lean_object* v_env_1316_; lean_object* v_nextMacroScope_1317_; lean_object* v_ngen_1318_; lean_object* v_auxDeclNGen_1319_; lean_object* v_traceState_1320_; lean_object* v_recordedDeps_1321_; lean_object* v_messages_1322_; lean_object* v_infoState_1323_; lean_object* v_snapshotTasks_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1336_; 
v___x_1315_ = lean_st_ref_take(v___y_1313_);
v_env_1316_ = lean_ctor_get(v___x_1315_, 0);
v_nextMacroScope_1317_ = lean_ctor_get(v___x_1315_, 1);
v_ngen_1318_ = lean_ctor_get(v___x_1315_, 2);
v_auxDeclNGen_1319_ = lean_ctor_get(v___x_1315_, 3);
v_traceState_1320_ = lean_ctor_get(v___x_1315_, 4);
v_recordedDeps_1321_ = lean_ctor_get(v___x_1315_, 6);
v_messages_1322_ = lean_ctor_get(v___x_1315_, 7);
v_infoState_1323_ = lean_ctor_get(v___x_1315_, 8);
v_snapshotTasks_1324_ = lean_ctor_get(v___x_1315_, 9);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1336_ == 0)
{
lean_object* v_unused_1337_; 
v_unused_1337_ = lean_ctor_get(v___x_1315_, 5);
lean_dec(v_unused_1337_);
v___x_1326_ = v___x_1315_;
v_isShared_1327_ = v_isSharedCheck_1336_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_snapshotTasks_1324_);
lean_inc(v_infoState_1323_);
lean_inc(v_messages_1322_);
lean_inc(v_recordedDeps_1321_);
lean_inc(v_traceState_1320_);
lean_inc(v_auxDeclNGen_1319_);
lean_inc(v_ngen_1318_);
lean_inc(v_nextMacroScope_1317_);
lean_inc(v_env_1316_);
lean_dec(v___x_1315_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1336_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1331_; 
v___x_1328_ = lean_box(0);
v___x_1329_ = l_Lean_Environment_setExporting(v_env_1316_, v_isExporting_1306_);
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 5, v___x_1307_);
lean_ctor_set(v___x_1326_, 0, v___x_1329_);
v___x_1331_ = v___x_1326_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v___x_1329_);
lean_ctor_set(v_reuseFailAlloc_1335_, 1, v_nextMacroScope_1317_);
lean_ctor_set(v_reuseFailAlloc_1335_, 2, v_ngen_1318_);
lean_ctor_set(v_reuseFailAlloc_1335_, 3, v_auxDeclNGen_1319_);
lean_ctor_set(v_reuseFailAlloc_1335_, 4, v_traceState_1320_);
lean_ctor_set(v_reuseFailAlloc_1335_, 5, v___x_1307_);
lean_ctor_set(v_reuseFailAlloc_1335_, 6, v_recordedDeps_1321_);
lean_ctor_set(v_reuseFailAlloc_1335_, 7, v_messages_1322_);
lean_ctor_set(v_reuseFailAlloc_1335_, 8, v_infoState_1323_);
lean_ctor_set(v_reuseFailAlloc_1335_, 9, v_snapshotTasks_1324_);
v___x_1331_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1332_ = lean_st_ref_put(v___y_1313_, v___x_1331_);
v___x_1333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1328_);
lean_ctor_set(v___x_1333_, 1, v___y_1309_);
v___x_1334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1333_);
return v___x_1334_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___lam__0___boxed(lean_object* v_isExporting_1338_, lean_object* v___x_1339_, lean_object* v_x_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_){
_start:
{
uint8_t v_isExporting_boxed_1347_; lean_object* v_res_1348_; 
v_isExporting_boxed_1347_ = lean_unbox(v_isExporting_1338_);
v_res_1348_ = l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___lam__0(v_isExporting_boxed_1347_, v___x_1339_, v_x_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
lean_dec(v___y_1345_);
lean_dec_ref(v___y_1344_);
lean_dec(v___y_1343_);
lean_dec_ref(v___y_1342_);
lean_dec(v_x_1340_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___lam__1(lean_object* v___f_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v_a_x3f_1355_){
_start:
{
if (lean_obj_tag(v_a_x3f_1355_) == 0)
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = lean_box(0);
lean_inc(v___y_1354_);
lean_inc_ref(v___y_1353_);
lean_inc(v___y_1352_);
lean_inc_ref(v___y_1351_);
v___x_1358_ = lean_apply_7(v___f_1349_, v___x_1357_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, lean_box(0));
return v___x_1358_;
}
else
{
lean_object* v_val_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1369_; 
lean_dec(v___y_1350_);
v_val_1359_ = lean_ctor_get(v_a_x3f_1355_, 0);
v_isSharedCheck_1369_ = !lean_is_exclusive(v_a_x3f_1355_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1361_ = v_a_x3f_1355_;
v_isShared_1362_ = v_isSharedCheck_1369_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_val_1359_);
lean_dec(v_a_x3f_1355_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1369_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v_fst_1363_; lean_object* v_snd_1364_; lean_object* v___x_1366_; 
v_fst_1363_ = lean_ctor_get(v_val_1359_, 0);
lean_inc(v_fst_1363_);
v_snd_1364_ = lean_ctor_get(v_val_1359_, 1);
lean_inc(v_snd_1364_);
lean_dec(v_val_1359_);
if (v_isShared_1362_ == 0)
{
lean_ctor_set(v___x_1361_, 0, v_fst_1363_);
v___x_1366_ = v___x_1361_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v_fst_1363_);
v___x_1366_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
lean_object* v___x_1367_; 
lean_inc(v___y_1354_);
lean_inc_ref(v___y_1353_);
lean_inc(v___y_1352_);
lean_inc_ref(v___y_1351_);
v___x_1367_ = lean_apply_7(v___f_1349_, v___x_1366_, v_snd_1364_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, lean_box(0));
return v___x_1367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___lam__1___boxed(lean_object* v___f_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v_a_x3f_1376_, lean_object* v___y_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___lam__1(v___f_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v_a_x3f_1376_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg(lean_object* v_x_1379_, uint8_t v_isExporting_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
lean_object* v___x_1387_; lean_object* v_env_1388_; lean_object* v___x_1389_; uint8_t v_isModule_1390_; 
v___x_1387_ = lean_st_ref_get(v___y_1385_);
v_env_1388_ = lean_ctor_get(v___x_1387_, 0);
lean_inc_ref(v_env_1388_);
lean_dec(v___x_1387_);
v___x_1389_ = l_Lean_Environment_header(v_env_1388_);
v_isModule_1390_ = lean_ctor_get_uint8(v___x_1389_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_1389_);
if (v_isModule_1390_ == 0)
{
lean_object* v___x_1391_; 
lean_dec_ref(v_env_1388_);
lean_inc(v___y_1385_);
lean_inc_ref(v___y_1384_);
lean_inc(v___y_1383_);
lean_inc_ref(v___y_1382_);
v___x_1391_ = lean_apply_6(v_x_1379_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, lean_box(0));
return v___x_1391_;
}
else
{
uint8_t v_isExporting_1392_; 
v_isExporting_1392_ = lean_ctor_get_uint8(v_env_1388_, sizeof(void*)*13);
lean_dec_ref(v_env_1388_);
if (v_isExporting_1380_ == 0)
{
if (v_isExporting_1392_ == 0)
{
lean_object* v___x_1472_; 
lean_inc(v___y_1385_);
lean_inc_ref(v___y_1384_);
lean_inc(v___y_1383_);
lean_inc_ref(v___y_1382_);
v___x_1472_ = lean_apply_6(v_x_1379_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, lean_box(0));
return v___x_1472_;
}
else
{
goto v___jp_1393_;
}
}
else
{
if (v_isExporting_1392_ == 0)
{
goto v___jp_1393_;
}
else
{
lean_object* v___x_1473_; 
lean_inc(v___y_1385_);
lean_inc_ref(v___y_1384_);
lean_inc(v___y_1383_);
lean_inc_ref(v___y_1382_);
v___x_1473_ = lean_apply_6(v_x_1379_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, lean_box(0));
return v___x_1473_;
}
}
v___jp_1393_:
{
lean_object* v___x_1394_; lean_object* v_env_1395_; lean_object* v_nextMacroScope_1396_; lean_object* v_ngen_1397_; lean_object* v_auxDeclNGen_1398_; lean_object* v_traceState_1399_; lean_object* v_recordedDeps_1400_; lean_object* v_messages_1401_; lean_object* v_infoState_1402_; lean_object* v_snapshotTasks_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1470_; 
v___x_1394_ = lean_st_ref_take(v___y_1385_);
v_env_1395_ = lean_ctor_get(v___x_1394_, 0);
v_nextMacroScope_1396_ = lean_ctor_get(v___x_1394_, 1);
v_ngen_1397_ = lean_ctor_get(v___x_1394_, 2);
v_auxDeclNGen_1398_ = lean_ctor_get(v___x_1394_, 3);
v_traceState_1399_ = lean_ctor_get(v___x_1394_, 4);
v_recordedDeps_1400_ = lean_ctor_get(v___x_1394_, 6);
v_messages_1401_ = lean_ctor_get(v___x_1394_, 7);
v_infoState_1402_ = lean_ctor_get(v___x_1394_, 8);
v_snapshotTasks_1403_ = lean_ctor_get(v___x_1394_, 9);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1470_ == 0)
{
lean_object* v_unused_1471_; 
v_unused_1471_ = lean_ctor_get(v___x_1394_, 5);
lean_dec(v_unused_1471_);
v___x_1405_ = v___x_1394_;
v_isShared_1406_ = v_isSharedCheck_1470_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_snapshotTasks_1403_);
lean_inc(v_infoState_1402_);
lean_inc(v_messages_1401_);
lean_inc(v_recordedDeps_1400_);
lean_inc(v_traceState_1399_);
lean_inc(v_auxDeclNGen_1398_);
lean_inc(v_ngen_1397_);
lean_inc(v_nextMacroScope_1396_);
lean_inc(v_env_1395_);
lean_dec(v___x_1394_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1470_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___f_1410_; lean_object* v___x_1412_; 
v___x_1407_ = l_Lean_Environment_setExporting(v_env_1395_, v_isExporting_1380_);
v___x_1408_ = lean_obj_once(&l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1, &l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1_once, _init_l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1);
v___x_1409_ = lean_box(v_isExporting_1392_);
v___f_1410_ = lean_alloc_closure((void*)(l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1410_, 0, v___x_1409_);
lean_closure_set(v___f_1410_, 1, v___x_1408_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 5, v___x_1408_);
lean_ctor_set(v___x_1405_, 0, v___x_1407_);
v___x_1412_ = v___x_1405_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1407_);
lean_ctor_set(v_reuseFailAlloc_1469_, 1, v_nextMacroScope_1396_);
lean_ctor_set(v_reuseFailAlloc_1469_, 2, v_ngen_1397_);
lean_ctor_set(v_reuseFailAlloc_1469_, 3, v_auxDeclNGen_1398_);
lean_ctor_set(v_reuseFailAlloc_1469_, 4, v_traceState_1399_);
lean_ctor_set(v_reuseFailAlloc_1469_, 5, v___x_1408_);
lean_ctor_set(v_reuseFailAlloc_1469_, 6, v_recordedDeps_1400_);
lean_ctor_set(v_reuseFailAlloc_1469_, 7, v_messages_1401_);
lean_ctor_set(v_reuseFailAlloc_1469_, 8, v_infoState_1402_);
lean_ctor_set(v_reuseFailAlloc_1469_, 9, v_snapshotTasks_1403_);
v___x_1412_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_object* v___x_1413_; lean_object* v_r_1414_; 
v___x_1413_ = lean_st_ref_put(v___y_1385_, v___x_1412_);
lean_inc(v___y_1385_);
lean_inc_ref(v___y_1384_);
lean_inc(v___y_1383_);
lean_inc_ref(v___y_1382_);
lean_inc(v___y_1381_);
v_r_1414_ = lean_apply_6(v_x_1379_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, lean_box(0));
if (lean_obj_tag(v_r_1414_) == 0)
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1449_; 
v_a_1415_ = lean_ctor_get(v_r_1414_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v_r_1414_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1417_ = v_r_1414_;
v_isShared_1418_ = v_isSharedCheck_1449_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v_r_1414_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1449_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
lean_inc(v_a_1415_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set_tag(v___x_1417_, 1);
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1415_);
v___x_1420_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
lean_object* v___x_1421_; 
v___x_1421_ = l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___lam__1(v___f_1410_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___x_1420_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1439_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1424_ = v___x_1421_;
v_isShared_1425_ = v_isSharedCheck_1439_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1421_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1439_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v_fst_1426_; lean_object* v_snd_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1437_; 
v_fst_1426_ = lean_ctor_get(v_a_1415_, 0);
lean_inc(v_fst_1426_);
lean_dec(v_a_1415_);
v_snd_1427_ = lean_ctor_get(v_a_1422_, 1);
v_isSharedCheck_1437_ = !lean_is_exclusive(v_a_1422_);
if (v_isSharedCheck_1437_ == 0)
{
lean_object* v_unused_1438_; 
v_unused_1438_ = lean_ctor_get(v_a_1422_, 0);
lean_dec(v_unused_1438_);
v___x_1429_ = v_a_1422_;
v_isShared_1430_ = v_isSharedCheck_1437_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_snd_1427_);
lean_dec(v_a_1422_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1437_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 0, v_fst_1426_);
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_fst_1426_);
lean_ctor_set(v_reuseFailAlloc_1436_, 1, v_snd_1427_);
v___x_1432_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
lean_object* v___x_1434_; 
if (v_isShared_1425_ == 0)
{
lean_ctor_set(v___x_1424_, 0, v___x_1432_);
v___x_1434_ = v___x_1424_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v___x_1432_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
}
}
else
{
lean_object* v_a_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1447_; 
lean_dec(v_a_1415_);
v_a_1440_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1447_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1442_ = v___x_1421_;
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_a_1440_);
lean_dec(v___x_1421_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1445_; 
if (v_isShared_1443_ == 0)
{
v___x_1445_ = v___x_1442_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v_a_1440_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
}
}
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v_a_1450_ = lean_ctor_get(v_r_1414_, 0);
lean_inc(v_a_1450_);
lean_dec_ref_known(v_r_1414_, 1);
v___x_1451_ = lean_box(0);
v___x_1452_ = l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___lam__1(v___f_1410_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___x_1451_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1459_; 
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1459_ == 0)
{
lean_object* v_unused_1460_; 
v_unused_1460_ = lean_ctor_get(v___x_1452_, 0);
lean_dec(v_unused_1460_);
v___x_1454_ = v___x_1452_;
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
else
{
lean_dec(v___x_1452_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1457_; 
if (v_isShared_1455_ == 0)
{
lean_ctor_set_tag(v___x_1454_, 1);
lean_ctor_set(v___x_1454_, 0, v_a_1450_);
v___x_1457_ = v___x_1454_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_a_1450_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
else
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
lean_dec(v_a_1450_);
v_a_1461_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1452_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1452_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg___boxed(lean_object* v_x_1474_, lean_object* v_isExporting_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
uint8_t v_isExporting_boxed_1482_; lean_object* v_res_1483_; 
v_isExporting_boxed_1482_ = lean_unbox(v_isExporting_1475_);
v_res_1483_ = l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg(v_x_1474_, v_isExporting_boxed_1482_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2(lean_object* v_00_u03b1_1484_, lean_object* v_x_1485_, uint8_t v_isExporting_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_){
_start:
{
lean_object* v___x_1493_; 
v___x_1493_ = l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg(v_x_1485_, v_isExporting_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___boxed(lean_object* v_00_u03b1_1494_, lean_object* v_x_1495_, lean_object* v_isExporting_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_){
_start:
{
uint8_t v_isExporting_boxed_1503_; lean_object* v_res_1504_; 
v_isExporting_boxed_1503_ = lean_unbox(v_isExporting_1496_);
v_res_1504_ = l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2(v_00_u03b1_1494_, v_x_1495_, v_isExporting_boxed_1503_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
return v_res_1504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__3___redArg(lean_object* v_opt_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_){
_start:
{
lean_object* v___x_1509_; uint8_t v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1509_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1507_);
v___x_1510_ = l_Lean_Option_get___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__1(v___x_1509_, v_opt_1505_);
lean_dec_ref(v___x_1509_);
v___x_1511_ = lean_box(v___x_1510_);
v___x_1512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1511_);
lean_ctor_set(v___x_1512_, 1, v___y_1506_);
v___x_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1512_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__3___redArg___boxed(lean_object* v_opt_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_){
_start:
{
lean_object* v_res_1518_; 
v_res_1518_ = l_Lean_Option_getM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__3___redArg(v_opt_1514_, v___y_1515_, v___y_1516_);
lean_dec_ref(v___y_1516_);
lean_dec_ref(v_opt_1514_);
return v_res_1518_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4_spec__9___redArg(lean_object* v_a_1519_, lean_object* v_x_1520_){
_start:
{
if (lean_obj_tag(v_x_1520_) == 0)
{
lean_object* v___x_1521_; 
v___x_1521_ = lean_box(0);
return v___x_1521_;
}
else
{
lean_object* v_key_1522_; lean_object* v_value_1523_; lean_object* v_tail_1524_; uint8_t v___x_1525_; 
v_key_1522_ = lean_ctor_get(v_x_1520_, 0);
v_value_1523_ = lean_ctor_get(v_x_1520_, 1);
v_tail_1524_ = lean_ctor_get(v_x_1520_, 2);
v___x_1525_ = lean_name_eq(v_key_1522_, v_a_1519_);
if (v___x_1525_ == 0)
{
v_x_1520_ = v_tail_1524_;
goto _start;
}
else
{
lean_object* v___x_1527_; 
lean_inc(v_value_1523_);
v___x_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1527_, 0, v_value_1523_);
return v___x_1527_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4_spec__9___redArg___boxed(lean_object* v_a_1528_, lean_object* v_x_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4_spec__9___redArg(v_a_1528_, v_x_1529_);
lean_dec(v_x_1529_);
lean_dec(v_a_1528_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4___redArg(lean_object* v_m_1531_, lean_object* v_a_1532_){
_start:
{
lean_object* v_buckets_1533_; lean_object* v___x_1534_; uint64_t v___y_1536_; 
v_buckets_1533_ = lean_ctor_get(v_m_1531_, 1);
v___x_1534_ = lean_array_get_size(v_buckets_1533_);
if (lean_obj_tag(v_a_1532_) == 0)
{
uint64_t v___x_1550_; 
v___x_1550_ = 1723ULL;
v___y_1536_ = v___x_1550_;
goto v___jp_1535_;
}
else
{
uint64_t v_hash_1551_; 
v_hash_1551_ = lean_ctor_get_uint64(v_a_1532_, sizeof(void*)*2);
v___y_1536_ = v_hash_1551_;
goto v___jp_1535_;
}
v___jp_1535_:
{
uint64_t v___x_1537_; uint64_t v___x_1538_; uint64_t v_fold_1539_; uint64_t v___x_1540_; uint64_t v___x_1541_; uint64_t v___x_1542_; size_t v___x_1543_; size_t v___x_1544_; size_t v___x_1545_; size_t v___x_1546_; size_t v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1537_ = 32ULL;
v___x_1538_ = lean_uint64_shift_right(v___y_1536_, v___x_1537_);
v_fold_1539_ = lean_uint64_xor(v___y_1536_, v___x_1538_);
v___x_1540_ = 16ULL;
v___x_1541_ = lean_uint64_shift_right(v_fold_1539_, v___x_1540_);
v___x_1542_ = lean_uint64_xor(v_fold_1539_, v___x_1541_);
v___x_1543_ = lean_uint64_to_usize(v___x_1542_);
v___x_1544_ = lean_usize_of_nat(v___x_1534_);
v___x_1545_ = ((size_t)1ULL);
v___x_1546_ = lean_usize_sub(v___x_1544_, v___x_1545_);
v___x_1547_ = lean_usize_land(v___x_1543_, v___x_1546_);
v___x_1548_ = lean_array_uget_borrowed(v_buckets_1533_, v___x_1547_);
v___x_1549_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4_spec__9___redArg(v_a_1532_, v___x_1548_);
return v___x_1549_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4___redArg___boxed(lean_object* v_m_1552_, lean_object* v_a_1553_){
_start:
{
lean_object* v_res_1554_; 
v_res_1554_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4___redArg(v_m_1552_, v_a_1553_);
lean_dec(v_a_1553_);
lean_dec_ref(v_m_1552_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___lam__0(lean_object* v_addEntryFn_1555_, lean_object* v_entry_1556_, lean_object* v_s_1557_){
_start:
{
lean_object* v_importedEntries_1558_; lean_object* v_state_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1567_; 
v_importedEntries_1558_ = lean_ctor_get(v_s_1557_, 0);
v_state_1559_ = lean_ctor_get(v_s_1557_, 1);
v_isSharedCheck_1567_ = !lean_is_exclusive(v_s_1557_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1561_ = v_s_1557_;
v_isShared_1562_ = v_isSharedCheck_1567_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_state_1559_);
lean_inc(v_importedEntries_1558_);
lean_dec(v_s_1557_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1567_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v_state_1563_; lean_object* v___x_1565_; 
v_state_1563_ = lean_apply_2(v_addEntryFn_1555_, v_state_1559_, v_entry_1556_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 1, v_state_1563_);
v___x_1565_ = v___x_1561_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_importedEntries_1558_);
lean_ctor_set(v_reuseFailAlloc_1566_, 1, v_state_1563_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
return v___x_1565_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__6(lean_object* v_cls_1568_, lean_object* v_msg_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_){
_start:
{
lean_object* v_ref_1576_; lean_object* v___x_1577_; lean_object* v_env_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v_ref_1576_ = lean_ctor_get(v___y_1573_, 2);
v___x_1577_ = lean_st_ref_get(v___y_1574_);
v_env_1578_ = lean_ctor_get(v___x_1577_, 0);
lean_inc_ref(v_env_1578_);
lean_dec(v___x_1577_);
v___x_1579_ = lean_st_ref_get(v___y_1572_);
v___x_1580_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_1571_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1641_; 
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1583_ = v___x_1580_;
v_isShared_1584_ = v_isSharedCheck_1641_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v___x_1580_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1641_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v_lctx_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1639_; 
v_lctx_1585_ = lean_ctor_get(v___x_1579_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1639_ == 0)
{
lean_object* v_unused_1640_; 
v_unused_1640_ = lean_ctor_get(v___x_1579_, 1);
lean_dec(v_unused_1640_);
v___x_1587_ = v___x_1579_;
v_isShared_1588_ = v_isSharedCheck_1639_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_lctx_1585_);
lean_dec(v___x_1579_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1639_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
uint8_t v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1595_; 
v___x_1589_ = lean_unbox(v_a_1581_);
lean_dec(v_a_1581_);
v___x_1590_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_1585_, v___x_1589_);
lean_dec_ref(v_lctx_1585_);
v___x_1591_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1573_);
v___x_1592_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__2, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__2);
v___x_1593_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1593_, 0, v_env_1578_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
lean_ctor_set(v___x_1593_, 2, v___x_1590_);
lean_ctor_set(v___x_1593_, 3, v___x_1591_);
if (v_isShared_1588_ == 0)
{
lean_ctor_set_tag(v___x_1587_, 3);
lean_ctor_set(v___x_1587_, 1, v_msg_1569_);
lean_ctor_set(v___x_1587_, 0, v___x_1593_);
v___x_1595_ = v___x_1587_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v___x_1593_);
lean_ctor_set(v_reuseFailAlloc_1638_, 1, v_msg_1569_);
v___x_1595_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
lean_object* v___x_1596_; lean_object* v_traceState_1597_; lean_object* v_env_1598_; lean_object* v_nextMacroScope_1599_; lean_object* v_ngen_1600_; lean_object* v_auxDeclNGen_1601_; lean_object* v_cache_1602_; lean_object* v_recordedDeps_1603_; lean_object* v_messages_1604_; lean_object* v_infoState_1605_; lean_object* v_snapshotTasks_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1637_; 
v___x_1596_ = lean_st_ref_take(v___y_1574_);
v_traceState_1597_ = lean_ctor_get(v___x_1596_, 4);
v_env_1598_ = lean_ctor_get(v___x_1596_, 0);
v_nextMacroScope_1599_ = lean_ctor_get(v___x_1596_, 1);
v_ngen_1600_ = lean_ctor_get(v___x_1596_, 2);
v_auxDeclNGen_1601_ = lean_ctor_get(v___x_1596_, 3);
v_cache_1602_ = lean_ctor_get(v___x_1596_, 5);
v_recordedDeps_1603_ = lean_ctor_get(v___x_1596_, 6);
v_messages_1604_ = lean_ctor_get(v___x_1596_, 7);
v_infoState_1605_ = lean_ctor_get(v___x_1596_, 8);
v_snapshotTasks_1606_ = lean_ctor_get(v___x_1596_, 9);
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1608_ = v___x_1596_;
v_isShared_1609_ = v_isSharedCheck_1637_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_snapshotTasks_1606_);
lean_inc(v_infoState_1605_);
lean_inc(v_messages_1604_);
lean_inc(v_recordedDeps_1603_);
lean_inc(v_cache_1602_);
lean_inc(v_traceState_1597_);
lean_inc(v_auxDeclNGen_1601_);
lean_inc(v_ngen_1600_);
lean_inc(v_nextMacroScope_1599_);
lean_inc(v_env_1598_);
lean_dec(v___x_1596_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1637_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
uint64_t v_tid_1610_; lean_object* v_traces_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1636_; 
v_tid_1610_ = lean_ctor_get_uint64(v_traceState_1597_, sizeof(void*)*1);
v_traces_1611_ = lean_ctor_get(v_traceState_1597_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_traceState_1597_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1613_ = v_traceState_1597_;
v_isShared_1614_ = v_isSharedCheck_1636_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_traces_1611_);
lean_dec(v_traceState_1597_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1636_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; double v___x_1617_; uint8_t v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1626_; 
v___x_1615_ = lean_box(0);
v___x_1616_ = lean_box(0);
v___x_1617_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__3, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__3_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__3);
v___x_1618_ = 0;
v___x_1619_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__4));
v___x_1620_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1620_, 0, v_cls_1568_);
lean_ctor_set(v___x_1620_, 1, v___x_1616_);
lean_ctor_set(v___x_1620_, 2, v___x_1619_);
lean_ctor_set_float(v___x_1620_, sizeof(void*)*3, v___x_1617_);
lean_ctor_set_float(v___x_1620_, sizeof(void*)*3 + 8, v___x_1617_);
lean_ctor_set_uint8(v___x_1620_, sizeof(void*)*3 + 16, v___x_1618_);
v___x_1621_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__5));
v___x_1622_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1620_);
lean_ctor_set(v___x_1622_, 1, v___x_1595_);
lean_ctor_set(v___x_1622_, 2, v___x_1621_);
lean_inc(v_ref_1576_);
v___x_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1623_, 0, v_ref_1576_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = l_Lean_PersistentArray_push___redArg(v_traces_1611_, v___x_1623_);
if (v_isShared_1614_ == 0)
{
lean_ctor_set(v___x_1613_, 0, v___x_1624_);
v___x_1626_ = v___x_1613_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v___x_1624_);
lean_ctor_set_uint64(v_reuseFailAlloc_1635_, sizeof(void*)*1, v_tid_1610_);
v___x_1626_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
lean_object* v___x_1628_; 
if (v_isShared_1609_ == 0)
{
lean_ctor_set(v___x_1608_, 4, v___x_1626_);
v___x_1628_ = v___x_1608_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_env_1598_);
lean_ctor_set(v_reuseFailAlloc_1634_, 1, v_nextMacroScope_1599_);
lean_ctor_set(v_reuseFailAlloc_1634_, 2, v_ngen_1600_);
lean_ctor_set(v_reuseFailAlloc_1634_, 3, v_auxDeclNGen_1601_);
lean_ctor_set(v_reuseFailAlloc_1634_, 4, v___x_1626_);
lean_ctor_set(v_reuseFailAlloc_1634_, 5, v_cache_1602_);
lean_ctor_set(v_reuseFailAlloc_1634_, 6, v_recordedDeps_1603_);
lean_ctor_set(v_reuseFailAlloc_1634_, 7, v_messages_1604_);
lean_ctor_set(v_reuseFailAlloc_1634_, 8, v_infoState_1605_);
lean_ctor_set(v_reuseFailAlloc_1634_, 9, v_snapshotTasks_1606_);
v___x_1628_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1632_; 
v___x_1629_ = lean_st_ref_put(v___y_1574_, v___x_1628_);
v___x_1630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1615_);
lean_ctor_set(v___x_1630_, 1, v___y_1570_);
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 0, v___x_1630_);
v___x_1632_ = v___x_1583_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v___x_1630_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
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
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1649_; 
lean_dec(v___x_1579_);
lean_dec_ref(v_env_1578_);
lean_dec(v___y_1570_);
lean_dec_ref(v_msg_1569_);
lean_dec(v_cls_1568_);
v_a_1642_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1644_ = v___x_1580_;
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v___x_1580_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1647_; 
if (v_isShared_1645_ == 0)
{
v___x_1647_ = v___x_1644_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_a_1642_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__6___boxed(lean_object* v_cls_1650_, lean_object* v_msg_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_){
_start:
{
lean_object* v_res_1658_; 
v_res_1658_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__6(v_cls_1650_, v_msg_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1653_);
return v_res_1658_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8_spec__12___redArg(lean_object* v_keys_1659_, lean_object* v_i_1660_, lean_object* v_k_1661_){
_start:
{
lean_object* v___x_1662_; uint8_t v___x_1663_; 
v___x_1662_ = lean_array_get_size(v_keys_1659_);
v___x_1663_ = lean_nat_dec_lt(v_i_1660_, v___x_1662_);
if (v___x_1663_ == 0)
{
lean_dec(v_i_1660_);
return v___x_1663_;
}
else
{
lean_object* v_k_x27_1664_; uint8_t v___x_1665_; 
v_k_x27_1664_ = lean_array_fget_borrowed(v_keys_1659_, v_i_1660_);
v___x_1665_ = l_Lean_instBEqExtraModUse_beq(v_k_1661_, v_k_x27_1664_);
if (v___x_1665_ == 0)
{
lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1666_ = lean_unsigned_to_nat(1u);
v___x_1667_ = lean_nat_add(v_i_1660_, v___x_1666_);
lean_dec(v_i_1660_);
v_i_1660_ = v___x_1667_;
goto _start;
}
else
{
lean_dec(v_i_1660_);
return v___x_1663_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8_spec__12___redArg___boxed(lean_object* v_keys_1669_, lean_object* v_i_1670_, lean_object* v_k_1671_){
_start:
{
uint8_t v_res_1672_; lean_object* v_r_1673_; 
v_res_1672_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8_spec__12___redArg(v_keys_1669_, v_i_1670_, v_k_1671_);
lean_dec_ref(v_k_1671_);
lean_dec_ref(v_keys_1669_);
v_r_1673_ = lean_box(v_res_1672_);
return v_r_1673_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8___redArg(lean_object* v_x_1674_, size_t v_x_1675_, lean_object* v_x_1676_){
_start:
{
if (lean_obj_tag(v_x_1674_) == 0)
{
lean_object* v_es_1677_; lean_object* v___x_1678_; size_t v___x_1679_; size_t v___x_1680_; lean_object* v_j_1681_; lean_object* v___x_1682_; 
v_es_1677_ = lean_ctor_get(v_x_1674_, 0);
v___x_1678_ = lean_box(2);
v___x_1679_ = ((size_t)31ULL);
v___x_1680_ = lean_usize_land(v_x_1675_, v___x_1679_);
v_j_1681_ = lean_usize_to_nat(v___x_1680_);
v___x_1682_ = lean_array_get_borrowed(v___x_1678_, v_es_1677_, v_j_1681_);
lean_dec(v_j_1681_);
switch(lean_obj_tag(v___x_1682_))
{
case 0:
{
lean_object* v_key_1683_; uint8_t v___x_1684_; 
v_key_1683_ = lean_ctor_get(v___x_1682_, 0);
v___x_1684_ = l_Lean_instBEqExtraModUse_beq(v_x_1676_, v_key_1683_);
return v___x_1684_;
}
case 1:
{
lean_object* v_node_1685_; size_t v___x_1686_; size_t v___x_1687_; 
v_node_1685_ = lean_ctor_get(v___x_1682_, 0);
v___x_1686_ = ((size_t)5ULL);
v___x_1687_ = lean_usize_shift_right(v_x_1675_, v___x_1686_);
v_x_1674_ = v_node_1685_;
v_x_1675_ = v___x_1687_;
goto _start;
}
default: 
{
uint8_t v___x_1689_; 
v___x_1689_ = 0;
return v___x_1689_;
}
}
}
else
{
lean_object* v_ks_1690_; lean_object* v___x_1691_; uint8_t v___x_1692_; 
v_ks_1690_ = lean_ctor_get(v_x_1674_, 0);
v___x_1691_ = lean_unsigned_to_nat(0u);
v___x_1692_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8_spec__12___redArg(v_ks_1690_, v___x_1691_, v_x_1676_);
return v___x_1692_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8___redArg___boxed(lean_object* v_x_1693_, lean_object* v_x_1694_, lean_object* v_x_1695_){
_start:
{
size_t v_x_27209__boxed_1696_; uint8_t v_res_1697_; lean_object* v_r_1698_; 
v_x_27209__boxed_1696_ = lean_unbox_usize(v_x_1694_);
lean_dec(v_x_1694_);
v_res_1697_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8___redArg(v_x_1693_, v_x_27209__boxed_1696_, v_x_1695_);
lean_dec_ref(v_x_1695_);
lean_dec_ref(v_x_1693_);
v_r_1698_ = lean_box(v_res_1697_);
return v_r_1698_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5___redArg(lean_object* v_x_1699_, lean_object* v_x_1700_){
_start:
{
uint64_t v___x_1701_; size_t v___x_1702_; uint8_t v___x_1703_; 
v___x_1701_ = l_Lean_instHashableExtraModUse_hash(v_x_1700_);
v___x_1702_ = lean_uint64_to_usize(v___x_1701_);
v___x_1703_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8___redArg(v_x_1699_, v___x_1702_, v_x_1700_);
return v___x_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_x_1704_, lean_object* v_x_1705_){
_start:
{
uint8_t v_res_1706_; lean_object* v_r_1707_; 
v_res_1706_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5___redArg(v_x_1704_, v_x_1705_);
lean_dec_ref(v_x_1705_);
lean_dec_ref(v_x_1704_);
v_r_1707_ = lean_box(v_res_1706_);
return v_r_1707_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1708_; 
v___x_1708_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_1708_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1713_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__3));
v___x_1714_ = l_Lean_stringToMessageData(v___x_1713_);
return v___x_1714_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__6(void){
_start:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1716_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__5));
v___x_1717_ = l_Lean_stringToMessageData(v___x_1716_);
return v___x_1717_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__7(void){
_start:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1718_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0___closed__4));
v___x_1719_ = l_Lean_stringToMessageData(v___x_1718_);
return v___x_1719_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__8(void){
_start:
{
lean_object* v_cls_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v_cls_1720_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__2));
v___x_1721_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__4));
v___x_1722_ = l_Lean_Name_append(v___x_1721_, v_cls_1720_);
return v___x_1722_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1724_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__9));
v___x_1725_ = l_Lean_stringToMessageData(v___x_1724_);
return v___x_1725_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__12(void){
_start:
{
lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1727_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__11));
v___x_1728_ = l_Lean_stringToMessageData(v___x_1727_);
return v___x_1728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2(lean_object* v_mod_1733_, uint8_t v_isMeta_1734_, lean_object* v_hint_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_){
_start:
{
lean_object* v___y_1743_; lean_object* v___y_1744_; lean_object* v___y_1745_; lean_object* v___y_1746_; lean_object* v___y_1747_; lean_object* v___y_1748_; lean_object* v___y_1749_; lean_object* v___y_1750_; lean_object* v___y_1751_; lean_object* v___y_1752_; lean_object* v___y_1753_; lean_object* v___y_1754_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v_env_1762_; uint8_t v_isExporting_1763_; lean_object* v_entry_1764_; lean_object* v___y_1766_; lean_object* v___y_1767_; lean_object* v___x_1790_; lean_object* v_env_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; uint8_t v___x_1796_; 
v___x_1760_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__0);
v___x_1761_ = lean_st_ref_get(v___y_1740_);
v_env_1762_ = lean_ctor_get(v___x_1761_, 0);
lean_inc_ref(v_env_1762_);
lean_dec(v___x_1761_);
v_isExporting_1763_ = lean_ctor_get_uint8(v_env_1762_, sizeof(void*)*13);
lean_dec_ref(v_env_1762_);
lean_inc(v_mod_1733_);
v_entry_1764_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1764_, 0, v_mod_1733_);
lean_ctor_set_uint8(v_entry_1764_, sizeof(void*)*1, v_isExporting_1763_);
lean_ctor_set_uint8(v_entry_1764_, sizeof(void*)*1 + 1, v_isMeta_1734_);
v___x_1790_ = lean_st_ref_get(v___y_1740_);
v_env_1791_ = lean_ctor_get(v___x_1790_, 0);
lean_inc_ref(v_env_1791_);
lean_dec(v___x_1790_);
v___x_1792_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1793_ = lean_box(1);
v___x_1794_ = lean_box(0);
v___x_1795_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1760_, v___x_1792_, v_env_1791_, v___x_1793_, v___x_1794_);
v___x_1796_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5___redArg(v___x_1795_, v_entry_1764_);
lean_dec(v___x_1795_);
if (v___x_1796_ == 0)
{
lean_object* v_toCold_1797_; lean_object* v_options_1798_; uint8_t v_hasTrace_1799_; 
v_toCold_1797_ = lean_ctor_get(v___y_1739_, 0);
v_options_1798_ = lean_ctor_get(v_toCold_1797_, 2);
v_hasTrace_1799_ = lean_ctor_get_uint8(v_options_1798_, sizeof(void*)*1);
if (v_hasTrace_1799_ == 0)
{
lean_dec(v_hint_1735_);
lean_dec(v_mod_1733_);
v___y_1766_ = v___y_1736_;
v___y_1767_ = v___y_1740_;
goto v___jp_1765_;
}
else
{
lean_object* v_inheritedTraceOptions_1800_; lean_object* v_cls_1801_; lean_object* v___y_1803_; lean_object* v___y_1804_; lean_object* v___y_1810_; lean_object* v___y_1811_; lean_object* v___x_1823_; uint8_t v___x_1824_; 
v_inheritedTraceOptions_1800_ = lean_ctor_get(v_toCold_1797_, 11);
v_cls_1801_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__2));
v___x_1823_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__8);
v___x_1824_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1800_, v_options_1798_, v___x_1823_);
if (v___x_1824_ == 0)
{
lean_dec(v_hint_1735_);
lean_dec(v_mod_1733_);
v___y_1766_ = v___y_1736_;
v___y_1767_ = v___y_1740_;
goto v___jp_1765_;
}
else
{
lean_object* v___x_1825_; lean_object* v___y_1827_; 
v___x_1825_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__10);
if (v_isExporting_1763_ == 0)
{
lean_object* v___x_1834_; 
v___x_1834_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__15));
v___y_1827_ = v___x_1834_;
goto v___jp_1826_;
}
else
{
lean_object* v___x_1835_; 
v___x_1835_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__16));
v___y_1827_ = v___x_1835_;
goto v___jp_1826_;
}
v___jp_1826_:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
lean_inc_ref(v___y_1827_);
v___x_1828_ = l_Lean_stringToMessageData(v___y_1827_);
v___x_1829_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1825_);
lean_ctor_set(v___x_1829_, 1, v___x_1828_);
v___x_1830_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__12);
v___x_1831_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1829_);
lean_ctor_set(v___x_1831_, 1, v___x_1830_);
if (v_isMeta_1734_ == 0)
{
lean_object* v___x_1832_; 
v___x_1832_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__13));
v___y_1810_ = v___x_1831_;
v___y_1811_ = v___x_1832_;
goto v___jp_1809_;
}
else
{
lean_object* v___x_1833_; 
v___x_1833_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__14));
v___y_1810_ = v___x_1831_;
v___y_1811_ = v___x_1833_;
goto v___jp_1809_;
}
}
}
v___jp_1802_:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1805_, 0, v___y_1803_);
lean_ctor_set(v___x_1805_, 1, v___y_1804_);
v___x_1806_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__6(v_cls_1801_, v___x_1805_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_);
if (lean_obj_tag(v___x_1806_) == 0)
{
lean_object* v_a_1807_; lean_object* v_snd_1808_; 
v_a_1807_ = lean_ctor_get(v___x_1806_, 0);
lean_inc(v_a_1807_);
lean_dec_ref_known(v___x_1806_, 1);
v_snd_1808_ = lean_ctor_get(v_a_1807_, 1);
lean_inc(v_snd_1808_);
lean_dec(v_a_1807_);
v___y_1766_ = v_snd_1808_;
v___y_1767_ = v___y_1740_;
goto v___jp_1765_;
}
else
{
lean_dec_ref_known(v_entry_1764_, 1);
return v___x_1806_;
}
}
v___jp_1809_:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; uint8_t v___x_1818_; 
lean_inc_ref(v___y_1811_);
v___x_1812_ = l_Lean_stringToMessageData(v___y_1811_);
v___x_1813_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1813_, 0, v___y_1810_);
lean_ctor_set(v___x_1813_, 1, v___x_1812_);
v___x_1814_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__4);
v___x_1815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1813_);
lean_ctor_set(v___x_1815_, 1, v___x_1814_);
v___x_1816_ = l_Lean_MessageData_ofName(v_mod_1733_);
v___x_1817_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1815_);
lean_ctor_set(v___x_1817_, 1, v___x_1816_);
v___x_1818_ = l_Lean_Name_isAnonymous(v_hint_1735_);
if (v___x_1818_ == 0)
{
lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1819_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__6);
v___x_1820_ = l_Lean_MessageData_ofName(v_hint_1735_);
v___x_1821_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1819_);
lean_ctor_set(v___x_1821_, 1, v___x_1820_);
v___y_1803_ = v___x_1817_;
v___y_1804_ = v___x_1821_;
goto v___jp_1802_;
}
else
{
lean_object* v___x_1822_; 
lean_dec(v_hint_1735_);
v___x_1822_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___closed__7);
v___y_1803_ = v___x_1817_;
v___y_1804_ = v___x_1822_;
goto v___jp_1802_;
}
}
}
}
else
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; 
lean_dec_ref_known(v_entry_1764_, 1);
lean_dec(v_hint_1735_);
lean_dec(v_mod_1733_);
v___x_1836_ = lean_box(0);
v___x_1837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1836_);
lean_ctor_set(v___x_1837_, 1, v___y_1736_);
v___x_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1837_);
return v___x_1838_;
}
v___jp_1742_:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1755_ = lean_obj_once(&l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1, &l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1_once, _init_l_Lean_Compiler_LCNF_markDeclPublicRec___closed__1);
v___x_1756_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1756_, 0, v___y_1754_);
lean_ctor_set(v___x_1756_, 1, v___y_1749_);
lean_ctor_set(v___x_1756_, 2, v___y_1752_);
lean_ctor_set(v___x_1756_, 3, v___y_1746_);
lean_ctor_set(v___x_1756_, 4, v___y_1753_);
lean_ctor_set(v___x_1756_, 5, v___x_1755_);
lean_ctor_set(v___x_1756_, 6, v___y_1747_);
lean_ctor_set(v___x_1756_, 7, v___y_1748_);
lean_ctor_set(v___x_1756_, 8, v___y_1750_);
lean_ctor_set(v___x_1756_, 9, v___y_1744_);
v___x_1757_ = lean_st_ref_put(v___y_1745_, v___x_1756_);
v___x_1758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1758_, 0, v___y_1751_);
lean_ctor_set(v___x_1758_, 1, v___y_1743_);
v___x_1759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1758_);
return v___x_1759_;
}
v___jp_1765_:
{
lean_object* v___x_1768_; lean_object* v_env_1769_; lean_object* v_nextMacroScope_1770_; lean_object* v_ngen_1771_; lean_object* v_auxDeclNGen_1772_; lean_object* v_traceState_1773_; lean_object* v_recordedDeps_1774_; lean_object* v_messages_1775_; lean_object* v_infoState_1776_; lean_object* v_snapshotTasks_1777_; lean_object* v___x_1778_; lean_object* v_toEnvExtension_1779_; lean_object* v_addEntryFn_1780_; lean_object* v_asyncMode_1781_; uint8_t v_logWrites_1782_; lean_object* v___x_1783_; lean_object* v___f_1784_; lean_object* v___x_1785_; uint8_t v___x_1786_; 
v___x_1768_ = lean_st_ref_take(v___y_1767_);
v_env_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc_ref(v_env_1769_);
v_nextMacroScope_1770_ = lean_ctor_get(v___x_1768_, 1);
lean_inc(v_nextMacroScope_1770_);
v_ngen_1771_ = lean_ctor_get(v___x_1768_, 2);
lean_inc_ref(v_ngen_1771_);
v_auxDeclNGen_1772_ = lean_ctor_get(v___x_1768_, 3);
lean_inc_ref(v_auxDeclNGen_1772_);
v_traceState_1773_ = lean_ctor_get(v___x_1768_, 4);
lean_inc_ref(v_traceState_1773_);
v_recordedDeps_1774_ = lean_ctor_get(v___x_1768_, 6);
lean_inc_ref(v_recordedDeps_1774_);
v_messages_1775_ = lean_ctor_get(v___x_1768_, 7);
lean_inc_ref(v_messages_1775_);
v_infoState_1776_ = lean_ctor_get(v___x_1768_, 8);
lean_inc_ref(v_infoState_1776_);
v_snapshotTasks_1777_ = lean_ctor_get(v___x_1768_, 9);
lean_inc_ref(v_snapshotTasks_1777_);
lean_dec(v___x_1768_);
v___x_1778_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_1779_ = lean_ctor_get(v___x_1778_, 0);
v_addEntryFn_1780_ = lean_ctor_get(v___x_1778_, 3);
v_asyncMode_1781_ = lean_ctor_get(v_toEnvExtension_1779_, 2);
v_logWrites_1782_ = lean_ctor_get_uint8(v_toEnvExtension_1779_, sizeof(void*)*6);
v___x_1783_ = lean_box(0);
lean_inc(v_addEntryFn_1780_);
v___f_1784_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___lam__0), 3, 2);
lean_closure_set(v___f_1784_, 0, v_addEntryFn_1780_);
lean_closure_set(v___f_1784_, 1, v_entry_1764_);
v___x_1785_ = lean_box(0);
v___x_1786_ = 1;
if (v_logWrites_1782_ == 0)
{
lean_object* v___x_1787_; 
lean_inc_ref(v_toEnvExtension_1779_);
v___x_1787_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1779_, v_env_1769_, v___f_1784_, v_asyncMode_1781_, v___x_1785_, v___x_1786_);
v___y_1743_ = v___y_1766_;
v___y_1744_ = v_snapshotTasks_1777_;
v___y_1745_ = v___y_1767_;
v___y_1746_ = v_auxDeclNGen_1772_;
v___y_1747_ = v_recordedDeps_1774_;
v___y_1748_ = v_messages_1775_;
v___y_1749_ = v_nextMacroScope_1770_;
v___y_1750_ = v_infoState_1776_;
v___y_1751_ = v___x_1783_;
v___y_1752_ = v_ngen_1771_;
v___y_1753_ = v_traceState_1773_;
v___y_1754_ = v___x_1787_;
goto v___jp_1742_;
}
else
{
lean_object* v___x_1788_; lean_object* v___x_1789_; 
lean_inc_ref_n(v_toEnvExtension_1779_, 2);
v___x_1788_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1779_, v_env_1769_);
lean_dec_ref(v_env_1769_);
v___x_1789_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1779_, v___x_1788_, v___f_1784_, v_asyncMode_1781_, v___x_1785_, v___x_1786_);
v___y_1743_ = v___y_1766_;
v___y_1744_ = v_snapshotTasks_1777_;
v___y_1745_ = v___y_1767_;
v___y_1746_ = v_auxDeclNGen_1772_;
v___y_1747_ = v_recordedDeps_1774_;
v___y_1748_ = v_messages_1775_;
v___y_1749_ = v_nextMacroScope_1770_;
v___y_1750_ = v_infoState_1776_;
v___y_1751_ = v___x_1783_;
v___y_1752_ = v_ngen_1771_;
v___y_1753_ = v_traceState_1773_;
v___y_1754_ = v___x_1789_;
goto v___jp_1742_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2___boxed(lean_object* v_mod_1839_, lean_object* v_isMeta_1840_, lean_object* v_hint_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_){
_start:
{
uint8_t v_isMeta_boxed_1848_; lean_object* v_res_1849_; 
v_isMeta_boxed_1848_ = lean_unbox(v_isMeta_1840_);
v_res_1849_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2(v_mod_1839_, v_isMeta_boxed_1848_, v_hint_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_);
lean_dec(v___y_1846_);
lean_dec_ref(v___y_1845_);
lean_dec(v___y_1844_);
lean_dec_ref(v___y_1843_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__3(lean_object* v___x_1850_, lean_object* v_declName_1851_, lean_object* v_as_1852_, size_t v_sz_1853_, size_t v_i_1854_, lean_object* v_b_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_){
_start:
{
uint8_t v___x_1862_; 
v___x_1862_ = lean_usize_dec_lt(v_i_1854_, v_sz_1853_);
if (v___x_1862_ == 0)
{
lean_object* v___x_1863_; lean_object* v___x_1864_; 
lean_dec(v_declName_1851_);
v___x_1863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1863_, 0, v_b_1855_);
lean_ctor_set(v___x_1863_, 1, v___y_1856_);
v___x_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1863_);
return v___x_1864_;
}
else
{
lean_object* v___x_1865_; lean_object* v_modules_1866_; lean_object* v___x_1867_; lean_object* v_a_1868_; lean_object* v___x_1869_; lean_object* v_toImport_1870_; lean_object* v_module_1871_; lean_object* v___x_1872_; uint8_t v___x_1873_; lean_object* v___x_1874_; 
v___x_1865_ = l_Lean_Environment_header(v___x_1850_);
v_modules_1866_ = lean_ctor_get(v___x_1865_, 3);
lean_inc_ref(v_modules_1866_);
lean_dec_ref(v___x_1865_);
v___x_1867_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1868_ = lean_array_uget_borrowed(v_as_1852_, v_i_1854_);
v___x_1869_ = lean_array_get(v___x_1867_, v_modules_1866_, v_a_1868_);
lean_dec_ref(v_modules_1866_);
v_toImport_1870_ = lean_ctor_get(v___x_1869_, 0);
lean_inc_ref(v_toImport_1870_);
lean_dec(v___x_1869_);
v_module_1871_ = lean_ctor_get(v_toImport_1870_, 0);
lean_inc(v_module_1871_);
lean_dec_ref(v_toImport_1870_);
v___x_1872_ = lean_box(0);
v___x_1873_ = 0;
lean_inc(v_declName_1851_);
v___x_1874_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2(v_module_1871_, v___x_1873_, v_declName_1851_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_);
if (lean_obj_tag(v___x_1874_) == 0)
{
lean_object* v_a_1875_; lean_object* v_snd_1876_; size_t v___x_1877_; size_t v___x_1878_; 
v_a_1875_ = lean_ctor_get(v___x_1874_, 0);
lean_inc(v_a_1875_);
lean_dec_ref_known(v___x_1874_, 1);
v_snd_1876_ = lean_ctor_get(v_a_1875_, 1);
lean_inc(v_snd_1876_);
lean_dec(v_a_1875_);
v___x_1877_ = ((size_t)1ULL);
v___x_1878_ = lean_usize_add(v_i_1854_, v___x_1877_);
v_i_1854_ = v___x_1878_;
v_b_1855_ = v___x_1872_;
v___y_1856_ = v_snd_1876_;
goto _start;
}
else
{
lean_dec(v_declName_1851_);
return v___x_1874_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__3___boxed(lean_object* v___x_1880_, lean_object* v_declName_1881_, lean_object* v_as_1882_, lean_object* v_sz_1883_, lean_object* v_i_1884_, lean_object* v_b_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_){
_start:
{
size_t v_sz_boxed_1892_; size_t v_i_boxed_1893_; lean_object* v_res_1894_; 
v_sz_boxed_1892_ = lean_unbox_usize(v_sz_1883_);
lean_dec(v_sz_1883_);
v_i_boxed_1893_ = lean_unbox_usize(v_i_1884_);
lean_dec(v_i_1884_);
v_res_1894_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__3(v___x_1880_, v_declName_1881_, v_as_1882_, v_sz_boxed_1892_, v_i_boxed_1893_, v_b_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
lean_dec_ref(v_as_1882_);
lean_dec_ref(v___x_1880_);
return v_res_1894_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1895_; 
v___x_1895_ = l_Std_HashMap_instInhabited___redArg();
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1(lean_object* v_declName_1898_, uint8_t v_isMeta_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_){
_start:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v_env_1912_; lean_object* v___y_1914_; lean_object* v___y_1915_; lean_object* v___x_1937_; 
v___x_1906_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1___closed__0);
v___x_1907_ = lean_st_ref_get(v___y_1904_);
v_env_1912_ = lean_ctor_get(v___x_1907_, 0);
lean_inc_ref(v_env_1912_);
lean_dec(v___x_1907_);
v___x_1937_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1912_, v_declName_1898_);
if (lean_obj_tag(v___x_1937_) == 0)
{
lean_dec_ref(v_env_1912_);
lean_dec(v_declName_1898_);
goto v___jp_1908_;
}
else
{
lean_object* v_val_1938_; lean_object* v___x_1939_; lean_object* v_modules_1940_; lean_object* v___x_1941_; uint8_t v___x_1942_; 
v_val_1938_ = lean_ctor_get(v___x_1937_, 0);
lean_inc(v_val_1938_);
lean_dec_ref_known(v___x_1937_, 1);
v___x_1939_ = l_Lean_Environment_header(v_env_1912_);
v_modules_1940_ = lean_ctor_get(v___x_1939_, 3);
lean_inc_ref(v_modules_1940_);
lean_dec_ref(v___x_1939_);
v___x_1941_ = lean_array_get_size(v_modules_1940_);
v___x_1942_ = lean_nat_dec_lt(v_val_1938_, v___x_1941_);
if (v___x_1942_ == 0)
{
lean_dec_ref(v_modules_1940_);
lean_dec(v_val_1938_);
lean_dec_ref(v_env_1912_);
lean_dec(v_declName_1898_);
goto v___jp_1908_;
}
else
{
lean_object* v___x_1943_; lean_object* v___x_1944_; uint8_t v___y_1946_; 
v___x_1943_ = lean_array_fget(v_modules_1940_, v_val_1938_);
lean_dec(v_val_1938_);
lean_dec_ref(v_modules_1940_);
v___x_1944_ = lean_st_ref_get(v___y_1904_);
if (v_isMeta_1899_ == 0)
{
lean_dec(v___x_1944_);
v___y_1946_ = v_isMeta_1899_;
goto v___jp_1945_;
}
else
{
lean_object* v_env_1959_; uint8_t v___x_1960_; 
v_env_1959_ = lean_ctor_get(v___x_1944_, 0);
lean_inc_ref(v_env_1959_);
lean_dec(v___x_1944_);
lean_inc(v_declName_1898_);
v___x_1960_ = l_Lean_isMarkedMeta(v_env_1959_, v_declName_1898_);
if (v___x_1960_ == 0)
{
v___y_1946_ = v_isMeta_1899_;
goto v___jp_1945_;
}
else
{
uint8_t v___x_1961_; 
v___x_1961_ = 0;
v___y_1946_ = v___x_1961_;
goto v___jp_1945_;
}
}
v___jp_1945_:
{
lean_object* v_toImport_1947_; lean_object* v_module_1948_; lean_object* v___x_1949_; 
v_toImport_1947_ = lean_ctor_get(v___x_1943_, 0);
lean_inc_ref(v_toImport_1947_);
lean_dec(v___x_1943_);
v_module_1948_ = lean_ctor_get(v_toImport_1947_, 0);
lean_inc(v_module_1948_);
lean_dec_ref(v_toImport_1947_);
lean_inc(v_declName_1898_);
v___x_1949_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2(v_module_1948_, v___y_1946_, v_declName_1898_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
if (lean_obj_tag(v___x_1949_) == 0)
{
lean_object* v_a_1950_; lean_object* v_snd_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
v_a_1950_ = lean_ctor_get(v___x_1949_, 0);
lean_inc(v_a_1950_);
lean_dec_ref_known(v___x_1949_, 1);
v_snd_1951_ = lean_ctor_get(v_a_1950_, 1);
lean_inc(v_snd_1951_);
lean_dec(v_a_1950_);
v___x_1952_ = l_Lean_indirectModUseExt;
v___x_1953_ = lean_box(1);
v___x_1954_ = lean_box(0);
lean_inc_ref(v_env_1912_);
v___x_1955_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1906_, v___x_1952_, v_env_1912_, v___x_1953_, v___x_1954_);
v___x_1956_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4___redArg(v___x_1955_, v_declName_1898_);
lean_dec(v___x_1955_);
if (lean_obj_tag(v___x_1956_) == 0)
{
lean_object* v___x_1957_; 
v___x_1957_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1___closed__1));
v___y_1914_ = v_snd_1951_;
v___y_1915_ = v___x_1957_;
goto v___jp_1913_;
}
else
{
lean_object* v_val_1958_; 
v_val_1958_ = lean_ctor_get(v___x_1956_, 0);
lean_inc(v_val_1958_);
lean_dec_ref_known(v___x_1956_, 1);
v___y_1914_ = v_snd_1951_;
v___y_1915_ = v_val_1958_;
goto v___jp_1913_;
}
}
else
{
lean_dec_ref(v_env_1912_);
lean_dec(v_declName_1898_);
return v___x_1949_;
}
}
}
}
v___jp_1908_:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1909_ = lean_box(0);
v___x_1910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1909_);
lean_ctor_set(v___x_1910_, 1, v___y_1900_);
v___x_1911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1911_, 0, v___x_1910_);
return v___x_1911_;
}
v___jp_1913_:
{
lean_object* v___x_1916_; size_t v_sz_1917_; size_t v___x_1918_; lean_object* v___x_1919_; 
v___x_1916_ = lean_box(0);
v_sz_1917_ = lean_array_size(v___y_1915_);
v___x_1918_ = ((size_t)0ULL);
v___x_1919_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__3(v_env_1912_, v_declName_1898_, v___y_1915_, v_sz_1917_, v___x_1918_, v___x_1916_, v___y_1914_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
lean_dec_ref(v___y_1915_);
lean_dec_ref(v_env_1912_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1936_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1922_ = v___x_1919_;
v_isShared_1923_ = v_isSharedCheck_1936_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1919_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1936_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v_snd_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1934_; 
v_snd_1924_ = lean_ctor_get(v_a_1920_, 1);
v_isSharedCheck_1934_ = !lean_is_exclusive(v_a_1920_);
if (v_isSharedCheck_1934_ == 0)
{
lean_object* v_unused_1935_; 
v_unused_1935_ = lean_ctor_get(v_a_1920_, 0);
lean_dec(v_unused_1935_);
v___x_1926_ = v_a_1920_;
v_isShared_1927_ = v_isSharedCheck_1934_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_snd_1924_);
lean_dec(v_a_1920_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1934_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
lean_ctor_set(v___x_1926_, 0, v___x_1916_);
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v___x_1916_);
lean_ctor_set(v_reuseFailAlloc_1933_, 1, v_snd_1924_);
v___x_1929_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
lean_object* v___x_1931_; 
if (v_isShared_1923_ == 0)
{
lean_ctor_set(v___x_1922_, 0, v___x_1929_);
v___x_1931_ = v___x_1922_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v___x_1929_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
}
}
else
{
return v___x_1919_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1___boxed(lean_object* v_declName_1962_, lean_object* v_isMeta_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_){
_start:
{
uint8_t v_isMeta_boxed_1970_; lean_object* v_res_1971_; 
v_isMeta_boxed_1970_ = lean_unbox(v_isMeta_1963_);
v_res_1971_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1(v_declName_1962_, v_isMeta_boxed_1970_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
lean_dec(v___y_1968_);
lean_dec_ref(v___y_1967_);
lean_dec(v___y_1966_);
lean_dec_ref(v___y_1965_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_1972_, lean_object* v_vals_1973_, lean_object* v_i_1974_, lean_object* v_k_1975_){
_start:
{
lean_object* v___x_1976_; uint8_t v___x_1977_; 
v___x_1976_ = lean_array_get_size(v_keys_1972_);
v___x_1977_ = lean_nat_dec_lt(v_i_1974_, v___x_1976_);
if (v___x_1977_ == 0)
{
lean_object* v___x_1978_; 
lean_dec(v_i_1974_);
v___x_1978_ = lean_box(0);
return v___x_1978_;
}
else
{
lean_object* v_k_x27_1979_; uint8_t v___x_1980_; 
v_k_x27_1979_ = lean_array_fget_borrowed(v_keys_1972_, v_i_1974_);
v___x_1980_ = lean_name_eq(v_k_1975_, v_k_x27_1979_);
if (v___x_1980_ == 0)
{
lean_object* v___x_1981_; lean_object* v___x_1982_; 
v___x_1981_ = lean_unsigned_to_nat(1u);
v___x_1982_ = lean_nat_add(v_i_1974_, v___x_1981_);
lean_dec(v_i_1974_);
v_i_1974_ = v___x_1982_;
goto _start;
}
else
{
lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1984_ = lean_array_fget_borrowed(v_vals_1973_, v_i_1974_);
lean_dec(v_i_1974_);
lean_inc(v___x_1984_);
v___x_1985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1984_);
return v___x_1985_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_1986_, lean_object* v_vals_1987_, lean_object* v_i_1988_, lean_object* v_k_1989_){
_start:
{
lean_object* v_res_1990_; 
v_res_1990_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0_spec__2___redArg(v_keys_1986_, v_vals_1987_, v_i_1988_, v_k_1989_);
lean_dec(v_k_1989_);
lean_dec_ref(v_vals_1987_);
lean_dec_ref(v_keys_1986_);
return v_res_1990_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0___redArg(lean_object* v_x_1991_, size_t v_x_1992_, lean_object* v_x_1993_){
_start:
{
if (lean_obj_tag(v_x_1991_) == 0)
{
lean_object* v_es_1994_; lean_object* v___x_1995_; size_t v___x_1996_; size_t v___x_1997_; lean_object* v_j_1998_; lean_object* v___x_1999_; 
v_es_1994_ = lean_ctor_get(v_x_1991_, 0);
v___x_1995_ = lean_box(2);
v___x_1996_ = ((size_t)31ULL);
v___x_1997_ = lean_usize_land(v_x_1992_, v___x_1996_);
v_j_1998_ = lean_usize_to_nat(v___x_1997_);
v___x_1999_ = lean_array_get_borrowed(v___x_1995_, v_es_1994_, v_j_1998_);
lean_dec(v_j_1998_);
switch(lean_obj_tag(v___x_1999_))
{
case 0:
{
lean_object* v_key_2000_; lean_object* v_val_2001_; uint8_t v___x_2002_; 
v_key_2000_ = lean_ctor_get(v___x_1999_, 0);
v_val_2001_ = lean_ctor_get(v___x_1999_, 1);
v___x_2002_ = lean_name_eq(v_x_1993_, v_key_2000_);
if (v___x_2002_ == 0)
{
lean_object* v___x_2003_; 
v___x_2003_ = lean_box(0);
return v___x_2003_;
}
else
{
lean_object* v___x_2004_; 
lean_inc(v_val_2001_);
v___x_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2004_, 0, v_val_2001_);
return v___x_2004_;
}
}
case 1:
{
lean_object* v_node_2005_; size_t v___x_2006_; size_t v___x_2007_; 
v_node_2005_ = lean_ctor_get(v___x_1999_, 0);
v___x_2006_ = ((size_t)5ULL);
v___x_2007_ = lean_usize_shift_right(v_x_1992_, v___x_2006_);
v_x_1991_ = v_node_2005_;
v_x_1992_ = v___x_2007_;
goto _start;
}
default: 
{
lean_object* v___x_2009_; 
v___x_2009_ = lean_box(0);
return v___x_2009_;
}
}
}
else
{
lean_object* v_ks_2010_; lean_object* v_vs_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v_ks_2010_ = lean_ctor_get(v_x_1991_, 0);
v_vs_2011_ = lean_ctor_get(v_x_1991_, 1);
v___x_2012_ = lean_unsigned_to_nat(0u);
v___x_2013_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0_spec__2___redArg(v_ks_2010_, v_vs_2011_, v___x_2012_, v_x_1993_);
return v___x_2013_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0___redArg___boxed(lean_object* v_x_2014_, lean_object* v_x_2015_, lean_object* v_x_2016_){
_start:
{
size_t v_x_27719__boxed_2017_; lean_object* v_res_2018_; 
v_x_27719__boxed_2017_ = lean_unbox_usize(v_x_2015_);
lean_dec(v_x_2015_);
v_res_2018_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0___redArg(v_x_2014_, v_x_27719__boxed_2017_, v_x_2016_);
lean_dec(v_x_2016_);
lean_dec_ref(v_x_2014_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0___redArg(lean_object* v_x_2019_, lean_object* v_x_2020_){
_start:
{
uint64_t v___y_2022_; 
if (lean_obj_tag(v_x_2020_) == 0)
{
uint64_t v___x_2025_; 
v___x_2025_ = 1723ULL;
v___y_2022_ = v___x_2025_;
goto v___jp_2021_;
}
else
{
uint64_t v_hash_2026_; 
v_hash_2026_ = lean_ctor_get_uint64(v_x_2020_, sizeof(void*)*2);
v___y_2022_ = v_hash_2026_;
goto v___jp_2021_;
}
v___jp_2021_:
{
size_t v___x_2023_; lean_object* v___x_2024_; 
v___x_2023_ = lean_uint64_to_usize(v___y_2022_);
v___x_2024_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0___redArg(v_x_2019_, v___x_2023_, v_x_2020_);
return v___x_2024_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0___redArg___boxed(lean_object* v_x_2027_, lean_object* v_x_2028_){
_start:
{
lean_object* v_res_2029_; 
v_res_2029_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0___redArg(v_x_2027_, v_x_2028_);
lean_dec(v_x_2028_);
lean_dec_ref(v_x_2027_);
return v_res_2029_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__0(void){
_start:
{
lean_object* v___x_2030_; 
v___x_2030_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_2030_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__2(void){
_start:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2032_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__1));
v___x_2033_ = l_Lean_stringToMessageData(v___x_2032_);
return v___x_2033_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__4(void){
_start:
{
lean_object* v___x_2035_; lean_object* v___x_2036_; 
v___x_2035_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__3));
v___x_2036_ = l_Lean_stringToMessageData(v___x_2035_);
return v___x_2036_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__6(void){
_start:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2038_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__5));
v___x_2039_ = l_Lean_stringToMessageData(v___x_2038_);
return v___x_2039_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__8(void){
_start:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2041_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__7));
v___x_2042_ = l_Lean_stringToMessageData(v___x_2041_);
return v___x_2042_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4(lean_object* v_origDecl_2043_, lean_object* v_init_2044_, lean_object* v_x_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_){
_start:
{
if (lean_obj_tag(v_x_2045_) == 0)
{
lean_object* v_k_2052_; lean_object* v_l_2053_; lean_object* v_r_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; 
v_k_2052_ = lean_ctor_get(v_x_2045_, 1);
lean_inc(v_k_2052_);
v_l_2053_ = lean_ctor_get(v_x_2045_, 3);
lean_inc(v_l_2053_);
v_r_2054_ = lean_ctor_get(v_x_2045_, 4);
lean_inc(v_r_2054_);
lean_dec_ref_known(v_x_2045_, 5);
v___x_2055_ = lean_box(0);
v___x_2056_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__0, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__0_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__0);
v___x_2057_ = lean_box(0);
lean_inc_ref(v_origDecl_2043_);
v___x_2058_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4(v_origDecl_2043_, v_init_2044_, v_l_2053_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v_a_2059_; lean_object* v_snd_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2184_; 
v_a_2059_ = lean_ctor_get(v___x_2058_, 0);
lean_inc(v_a_2059_);
lean_dec_ref_known(v___x_2058_, 1);
v_snd_2060_ = lean_ctor_get(v_a_2059_, 1);
v_isSharedCheck_2184_ = !lean_is_exclusive(v_a_2059_);
if (v_isSharedCheck_2184_ == 0)
{
lean_object* v_unused_2185_; 
v_unused_2185_ = lean_ctor_get(v_a_2059_, 0);
lean_dec(v_unused_2185_);
v___x_2062_ = v_a_2059_;
v_isShared_2063_ = v_isSharedCheck_2184_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_snd_2060_);
lean_dec(v_a_2059_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2184_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
uint8_t v___x_2064_; 
v___x_2064_ = l_Lean_NameSet_contains(v_snd_2060_, v_k_2052_);
if (v___x_2064_ == 0)
{
lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v_env_2067_; lean_object* v___x_2068_; lean_object* v_toEnvExtension_2069_; lean_object* v_asyncMode_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
lean_inc(v_k_2052_);
v___x_2065_ = l_Lean_NameSet_insert(v_snd_2060_, v_k_2052_);
v___x_2066_ = lean_st_ref_get(v___y_2050_);
v_env_2067_ = lean_ctor_get(v___x_2066_, 0);
lean_inc_ref(v_env_2067_);
lean_dec(v___x_2066_);
v___x_2068_ = l_Lean_Compiler_LCNF_baseExt;
v_toEnvExtension_2069_ = lean_ctor_get(v___x_2068_, 0);
v_asyncMode_2070_ = lean_ctor_get(v_toEnvExtension_2069_, 2);
v___x_2071_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2056_, v___x_2068_, v_env_2067_, v_asyncMode_2070_, v___x_2057_, v___x_2064_);
v___x_2072_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0___redArg(v___x_2071_, v_k_2052_);
lean_dec(v___x_2071_);
if (lean_obj_tag(v___x_2072_) == 1)
{
lean_object* v_val_2073_; lean_object* v___x_2074_; 
lean_del_object(v___x_2062_);
lean_dec(v_k_2052_);
v_val_2073_ = lean_ctor_get(v___x_2072_, 0);
lean_inc_n(v_val_2073_, 2);
lean_dec_ref_known(v___x_2072_, 1);
v___x_2074_ = l_Lean_Compiler_LCNF_Decl_isTemplateLike___redArg(v_val_2073_, v___y_2049_, v___y_2050_);
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v_toSignature_2075_; lean_object* v_a_2076_; lean_object* v_name_2077_; uint8_t v___x_2078_; 
v_toSignature_2075_ = lean_ctor_get(v_val_2073_, 0);
v_a_2076_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_a_2076_);
lean_dec_ref_known(v___x_2074_, 1);
v_name_2077_ = lean_ctor_get(v_toSignature_2075_, 0);
v___x_2078_ = l_Lean_isPrivateName(v_name_2077_);
if (v___x_2078_ == 0)
{
lean_dec(v_a_2076_);
lean_dec(v_val_2073_);
v_init_2044_ = v___x_2055_;
v_x_2045_ = v_r_2054_;
v___y_2046_ = v___x_2065_;
goto _start;
}
else
{
uint8_t v___x_2080_; 
v___x_2080_ = lean_unbox(v_a_2076_);
lean_dec(v_a_2076_);
if (v___x_2080_ == 0)
{
lean_dec(v_val_2073_);
v_init_2044_ = v___x_2055_;
v_x_2045_ = v_r_2054_;
v___y_2046_ = v___x_2065_;
goto _start;
}
else
{
lean_object* v___x_2082_; 
lean_inc_ref(v_origDecl_2043_);
v___x_2082_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go(v_origDecl_2043_, v_val_2073_, v___x_2065_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
if (lean_obj_tag(v___x_2082_) == 0)
{
lean_object* v_a_2083_; lean_object* v_snd_2084_; 
v_a_2083_ = lean_ctor_get(v___x_2082_, 0);
lean_inc(v_a_2083_);
lean_dec_ref_known(v___x_2082_, 1);
v_snd_2084_ = lean_ctor_get(v_a_2083_, 1);
lean_inc(v_snd_2084_);
lean_dec(v_a_2083_);
v_init_2044_ = v___x_2055_;
v_x_2045_ = v_r_2054_;
v___y_2046_ = v_snd_2084_;
goto _start;
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
lean_dec(v_r_2054_);
lean_dec_ref(v_origDecl_2043_);
v_a_2086_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_2082_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2082_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
}
}
else
{
lean_object* v_a_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2101_; 
lean_dec(v_val_2073_);
lean_dec(v___x_2065_);
lean_dec(v_r_2054_);
lean_dec_ref(v_origDecl_2043_);
v_a_2094_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2101_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2101_ == 0)
{
v___x_2096_ = v___x_2074_;
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
else
{
lean_inc(v_a_2094_);
lean_dec(v___x_2074_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v___x_2099_; 
if (v_isShared_2097_ == 0)
{
v___x_2099_ = v___x_2096_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_a_2094_);
v___x_2099_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
return v___x_2099_;
}
}
}
}
else
{
lean_object* v___x_2102_; lean_object* v_env_2103_; lean_object* v___x_2104_; 
lean_dec(v___x_2072_);
v___x_2102_ = lean_st_ref_get(v___y_2050_);
v_env_2103_ = lean_ctor_get(v___x_2102_, 0);
lean_inc_ref(v_env_2103_);
lean_dec(v___x_2102_);
v___x_2104_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2103_, v_k_2052_);
lean_dec_ref(v_env_2103_);
if (lean_obj_tag(v___x_2104_) == 1)
{
lean_object* v_val_2105_; lean_object* v___x_2106_; lean_object* v_env_2128_; lean_object* v___x_2129_; lean_object* v_modules_2130_; lean_object* v___x_2131_; uint8_t v___x_2132_; 
v_val_2105_ = lean_ctor_get(v___x_2104_, 0);
lean_inc(v_val_2105_);
lean_dec_ref_known(v___x_2104_, 1);
v___x_2106_ = lean_st_ref_get(v___y_2050_);
v_env_2128_ = lean_ctor_get(v___x_2106_, 0);
lean_inc_ref(v_env_2128_);
lean_dec(v___x_2106_);
v___x_2129_ = l_Lean_Environment_header(v_env_2128_);
lean_dec_ref(v_env_2128_);
v_modules_2130_ = lean_ctor_get(v___x_2129_, 3);
lean_inc_ref(v_modules_2130_);
lean_dec_ref(v___x_2129_);
v___x_2131_ = lean_array_get_size(v_modules_2130_);
v___x_2132_ = lean_nat_dec_lt(v_val_2105_, v___x_2131_);
if (v___x_2132_ == 0)
{
lean_dec_ref(v_modules_2130_);
lean_dec(v_val_2105_);
lean_del_object(v___x_2062_);
goto v___jp_2107_;
}
else
{
lean_object* v___x_2133_; lean_object* v_toImport_2134_; uint8_t v_isExported_2135_; 
v___x_2133_ = lean_array_fget(v_modules_2130_, v_val_2105_);
lean_dec_ref(v_modules_2130_);
v_toImport_2134_ = lean_ctor_get(v___x_2133_, 0);
lean_inc_ref(v_toImport_2134_);
lean_dec(v___x_2133_);
v_isExported_2135_ = lean_ctor_get_uint8(v_toImport_2134_, sizeof(void*)*1 + 1);
lean_dec_ref(v_toImport_2134_);
if (v_isExported_2135_ == 0)
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v_a_2138_; lean_object* v_fst_2139_; uint8_t v___x_2140_; 
v___x_2136_ = l_Lean_Compiler_compiler_inLeanIR;
v___x_2137_ = l_Lean_Option_getM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__3___redArg(v___x_2136_, v___x_2065_, v___y_2049_);
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
lean_inc(v_a_2138_);
lean_dec_ref(v___x_2137_);
v_fst_2139_ = lean_ctor_get(v_a_2138_, 0);
v___x_2140_ = lean_unbox(v_fst_2139_);
if (v___x_2140_ == 0)
{
lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2177_; 
lean_dec(v_r_2054_);
v_isSharedCheck_2177_ = !lean_is_exclusive(v_a_2138_);
if (v_isSharedCheck_2177_ == 0)
{
lean_object* v_unused_2178_; lean_object* v_unused_2179_; 
v_unused_2178_ = lean_ctor_get(v_a_2138_, 1);
lean_dec(v_unused_2178_);
v_unused_2179_ = lean_ctor_get(v_a_2138_, 0);
lean_dec(v_unused_2179_);
v___x_2142_ = v_a_2138_;
v_isShared_2143_ = v_isSharedCheck_2177_;
goto v_resetjp_2141_;
}
else
{
lean_dec(v_a_2138_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2177_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2144_; lean_object* v_toSignature_2145_; lean_object* v_env_2146_; lean_object* v_name_2147_; lean_object* v___x_2148_; lean_object* v_moduleNames_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2153_; 
v___x_2144_ = lean_st_ref_get(v___y_2050_);
v_toSignature_2145_ = lean_ctor_get(v_origDecl_2043_, 0);
lean_inc_ref(v_toSignature_2145_);
lean_dec_ref(v_origDecl_2043_);
v_env_2146_ = lean_ctor_get(v___x_2144_, 0);
lean_inc_ref(v_env_2146_);
lean_dec(v___x_2144_);
v_name_2147_ = lean_ctor_get(v_toSignature_2145_, 0);
lean_inc(v_name_2147_);
lean_dec_ref(v_toSignature_2145_);
v___x_2148_ = l_Lean_Environment_header(v_env_2146_);
lean_dec_ref(v_env_2146_);
v_moduleNames_2149_ = lean_ctor_get(v___x_2148_, 4);
lean_inc_ref(v_moduleNames_2149_);
lean_dec_ref(v___x_2148_);
v___x_2150_ = l_Lean_MessageData_ofConstName(v_name_2147_, v___x_2064_);
v___x_2151_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__2, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__2_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__2);
if (v_isShared_2143_ == 0)
{
lean_ctor_set_tag(v___x_2142_, 7);
lean_ctor_set(v___x_2142_, 1, v___x_2150_);
lean_ctor_set(v___x_2142_, 0, v___x_2151_);
v___x_2153_ = v___x_2142_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v___x_2151_);
lean_ctor_set(v_reuseFailAlloc_2176_, 1, v___x_2150_);
v___x_2153_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
lean_object* v___x_2154_; lean_object* v___x_2156_; 
v___x_2154_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__4, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__4);
if (v_isShared_2063_ == 0)
{
lean_ctor_set_tag(v___x_2062_, 7);
lean_ctor_set(v___x_2062_, 1, v___x_2154_);
lean_ctor_set(v___x_2062_, 0, v___x_2153_);
v___x_2156_ = v___x_2062_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v___x_2153_);
lean_ctor_set(v_reuseFailAlloc_2175_, 1, v___x_2154_);
v___x_2156_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v_a_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2174_; 
v___x_2157_ = l_Lean_MessageData_ofConstName(v_k_2052_, v___x_2064_);
v___x_2158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2158_, 0, v___x_2156_);
lean_ctor_set(v___x_2158_, 1, v___x_2157_);
v___x_2159_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__6, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__6_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__6);
v___x_2160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2158_);
lean_ctor_set(v___x_2160_, 1, v___x_2159_);
v___x_2161_ = lean_array_get(v___x_2057_, v_moduleNames_2149_, v_val_2105_);
lean_dec(v_val_2105_);
lean_dec_ref(v_moduleNames_2149_);
v___x_2162_ = l_Lean_MessageData_ofName(v___x_2161_);
v___x_2163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2163_, 0, v___x_2160_);
lean_ctor_set(v___x_2163_, 1, v___x_2162_);
v___x_2164_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__8, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___closed__8);
v___x_2165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2163_);
lean_ctor_set(v___x_2165_, 1, v___x_2164_);
v___x_2166_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__0___redArg(v___x_2165_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
v_a_2167_ = lean_ctor_get(v___x_2166_, 0);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2166_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2169_ = v___x_2166_;
v_isShared_2170_ = v_isSharedCheck_2174_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_a_2167_);
lean_dec(v___x_2166_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2174_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v___x_2172_; 
if (v_isShared_2170_ == 0)
{
v___x_2172_ = v___x_2169_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_a_2167_);
v___x_2172_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
return v___x_2172_;
}
}
}
}
}
}
else
{
lean_object* v_snd_2180_; 
lean_dec(v_val_2105_);
lean_del_object(v___x_2062_);
lean_dec(v_k_2052_);
v_snd_2180_ = lean_ctor_get(v_a_2138_, 1);
lean_inc(v_snd_2180_);
lean_dec(v_a_2138_);
v_init_2044_ = v___x_2055_;
v_x_2045_ = v_r_2054_;
v___y_2046_ = v_snd_2180_;
goto _start;
}
}
else
{
lean_dec(v_val_2105_);
lean_del_object(v___x_2062_);
goto v___jp_2107_;
}
}
v___jp_2107_:
{
lean_object* v___x_2108_; lean_object* v_env_2109_; uint8_t v___x_2110_; uint8_t v___x_2111_; uint8_t v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; uint8_t v___x_2115_; lean_object* v___x_2116_; 
v___x_2108_ = lean_st_ref_get(v___y_2050_);
v_env_2109_ = lean_ctor_get(v___x_2108_, 0);
lean_inc_ref(v_env_2109_);
lean_dec(v___x_2108_);
lean_inc(v_k_2052_);
v___x_2110_ = l_Lean_getIRPhases(v_env_2109_, v_k_2052_);
v___x_2111_ = 1;
v___x_2112_ = l_Lean_instBEqIRPhases_beq(v___x_2110_, v___x_2111_);
v___x_2113_ = lean_box(v___x_2112_);
v___x_2114_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1___boxed), 8, 2);
lean_closure_set(v___x_2114_, 0, v_k_2052_);
lean_closure_set(v___x_2114_, 1, v___x_2113_);
v___x_2115_ = 1;
v___x_2116_ = l_Lean_withExporting___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__2___redArg(v___x_2114_, v___x_2115_, v___x_2065_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v_a_2117_; lean_object* v_snd_2118_; 
v_a_2117_ = lean_ctor_get(v___x_2116_, 0);
lean_inc(v_a_2117_);
lean_dec_ref_known(v___x_2116_, 1);
v_snd_2118_ = lean_ctor_get(v_a_2117_, 1);
lean_inc(v_snd_2118_);
lean_dec(v_a_2117_);
v_init_2044_ = v___x_2055_;
v_x_2045_ = v_r_2054_;
v___y_2046_ = v_snd_2118_;
goto _start;
}
else
{
lean_object* v_a_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2127_; 
lean_dec(v_r_2054_);
lean_dec_ref(v_origDecl_2043_);
v_a_2120_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2127_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2122_ = v___x_2116_;
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_a_2120_);
lean_dec(v___x_2116_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v___x_2125_; 
if (v_isShared_2123_ == 0)
{
v___x_2125_ = v___x_2122_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_a_2120_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
}
}
else
{
lean_dec(v___x_2104_);
lean_del_object(v___x_2062_);
lean_dec(v_k_2052_);
v_init_2044_ = v___x_2055_;
v_x_2045_ = v_r_2054_;
v___y_2046_ = v___x_2065_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_2062_);
lean_dec(v_k_2052_);
v_init_2044_ = v___x_2055_;
v_x_2045_ = v_r_2054_;
v___y_2046_ = v_snd_2060_;
goto _start;
}
}
}
else
{
lean_dec(v_r_2054_);
lean_dec(v_k_2052_);
lean_dec_ref(v_origDecl_2043_);
return v___x_2058_;
}
}
else
{
lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; 
lean_dec_ref(v_origDecl_2043_);
v___x_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2186_, 0, v_init_2044_);
v___x_2187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2186_);
lean_ctor_set(v___x_2187_, 1, v___y_2046_);
v___x_2188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2188_, 0, v___x_2187_);
return v___x_2188_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go___lam__0(uint8_t v___x_2189_, lean_object* v_origDecl_2190_, lean_object* v_code_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2198_ = l_Lean_NameSet_empty;
v___x_2199_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_collectUsedDecls(v___x_2189_, v_code_2191_, v___x_2198_);
v___x_2200_ = lean_box(0);
v___x_2201_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4(v_origDecl_2190_, v___x_2200_, v___x_2199_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_);
if (lean_obj_tag(v___x_2201_) == 0)
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2218_; 
v_a_2202_ = lean_ctor_get(v___x_2201_, 0);
v_isSharedCheck_2218_ = !lean_is_exclusive(v___x_2201_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2204_ = v___x_2201_;
v_isShared_2205_ = v_isSharedCheck_2218_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v___x_2201_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2218_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v_snd_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2216_; 
v_snd_2206_ = lean_ctor_get(v_a_2202_, 1);
v_isSharedCheck_2216_ = !lean_is_exclusive(v_a_2202_);
if (v_isSharedCheck_2216_ == 0)
{
lean_object* v_unused_2217_; 
v_unused_2217_ = lean_ctor_get(v_a_2202_, 0);
lean_dec(v_unused_2217_);
v___x_2208_ = v_a_2202_;
v_isShared_2209_ = v_isSharedCheck_2216_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_snd_2206_);
lean_dec(v_a_2202_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2216_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
lean_ctor_set(v___x_2208_, 0, v___x_2200_);
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v___x_2200_);
lean_ctor_set(v_reuseFailAlloc_2215_, 1, v_snd_2206_);
v___x_2211_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
lean_object* v___x_2213_; 
if (v_isShared_2205_ == 0)
{
lean_ctor_set(v___x_2204_, 0, v___x_2211_);
v___x_2213_ = v___x_2204_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v___x_2211_);
v___x_2213_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
return v___x_2213_;
}
}
}
}
}
else
{
lean_object* v_a_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2226_; 
v_a_2219_ = lean_ctor_get(v___x_2201_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v___x_2201_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2221_ = v___x_2201_;
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_a_2219_);
lean_dec(v___x_2201_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2224_; 
if (v_isShared_2222_ == 0)
{
v___x_2224_ = v___x_2221_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_a_2219_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go___lam__0___boxed(lean_object* v___x_2227_, lean_object* v_origDecl_2228_, lean_object* v_code_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_){
_start:
{
uint8_t v___x_27799__boxed_2236_; lean_object* v_res_2237_; 
v___x_27799__boxed_2236_ = lean_unbox(v___x_2227_);
v_res_2237_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go___lam__0(v___x_27799__boxed_2236_, v_origDecl_2228_, v_code_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
return v_res_2237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go(lean_object* v_origDecl_2238_, lean_object* v_decl_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_){
_start:
{
lean_object* v_value_2246_; uint8_t v___x_2247_; lean_object* v___x_2248_; lean_object* v___f_2249_; lean_object* v___x_2250_; 
v_value_2246_ = lean_ctor_get(v_decl_2239_, 1);
lean_inc_ref(v_value_2246_);
lean_dec_ref(v_decl_2239_);
v___x_2247_ = 0;
v___x_2248_ = lean_box(v___x_2247_);
v___f_2249_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2249_, 0, v___x_2248_);
lean_closure_set(v___f_2249_, 1, v_origDecl_2238_);
v___x_2250_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkMeta_go_spec__3___redArg(v___f_2249_, v_value_2246_, v_a_2240_, v_a_2241_, v_a_2242_, v_a_2243_, v_a_2244_);
return v___x_2250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go___boxed(lean_object* v_origDecl_2251_, lean_object* v_decl_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go(v_origDecl_2251_, v_decl_2252_, v_a_2253_, v_a_2254_, v_a_2255_, v_a_2256_, v_a_2257_);
lean_dec(v_a_2257_);
lean_dec_ref(v_a_2256_);
lean_dec(v_a_2255_);
lean_dec_ref(v_a_2254_);
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4___boxed(lean_object* v_origDecl_2260_, lean_object* v_init_2261_, lean_object* v_x_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_){
_start:
{
lean_object* v_res_2269_; 
v_res_2269_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__4(v_origDecl_2260_, v_init_2261_, v_x_2262_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
lean_dec(v___y_2267_);
lean_dec_ref(v___y_2266_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0(lean_object* v_00_u03b2_2270_, lean_object* v_x_2271_, lean_object* v_x_2272_){
_start:
{
lean_object* v___x_2273_; 
v___x_2273_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0___redArg(v_x_2271_, v_x_2272_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0___boxed(lean_object* v_00_u03b2_2274_, lean_object* v_x_2275_, lean_object* v_x_2276_){
_start:
{
lean_object* v_res_2277_; 
v_res_2277_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0(v_00_u03b2_2274_, v_x_2275_, v_x_2276_);
lean_dec(v_x_2276_);
lean_dec_ref(v_x_2275_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__3(lean_object* v_opt_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_){
_start:
{
lean_object* v___x_2285_; 
v___x_2285_ = l_Lean_Option_getM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__3___redArg(v_opt_2278_, v___y_2279_, v___y_2282_);
return v___x_2285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__3___boxed(lean_object* v_opt_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l_Lean_Option_getM___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__3(v_opt_2286_, v___y_2287_, v___y_2288_, v___y_2289_, v___y_2290_, v___y_2291_);
lean_dec(v___y_2291_);
lean_dec_ref(v___y_2290_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2288_);
lean_dec_ref(v_opt_2286_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0(lean_object* v_00_u03b2_2294_, lean_object* v_x_2295_, size_t v_x_2296_, lean_object* v_x_2297_){
_start:
{
lean_object* v___x_2298_; 
v___x_2298_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0___redArg(v_x_2295_, v_x_2296_, v_x_2297_);
return v___x_2298_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2299_, lean_object* v_x_2300_, lean_object* v_x_2301_, lean_object* v_x_2302_){
_start:
{
size_t v_x_28218__boxed_2303_; lean_object* v_res_2304_; 
v_x_28218__boxed_2303_ = lean_unbox_usize(v_x_2301_);
lean_dec(v_x_2301_);
v_res_2304_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0(v_00_u03b2_2299_, v_x_2300_, v_x_28218__boxed_2303_, v_x_2302_);
lean_dec(v_x_2302_);
lean_dec_ref(v_x_2300_);
return v_res_2304_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4(lean_object* v_00_u03b2_2305_, lean_object* v_m_2306_, lean_object* v_a_2307_){
_start:
{
lean_object* v___x_2308_; 
v___x_2308_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4___redArg(v_m_2306_, v_a_2307_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4___boxed(lean_object* v_00_u03b2_2309_, lean_object* v_m_2310_, lean_object* v_a_2311_){
_start:
{
lean_object* v_res_2312_; 
v_res_2312_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4(v_00_u03b2_2309_, v_m_2310_, v_a_2311_);
lean_dec(v_a_2311_);
lean_dec_ref(v_m_2310_);
return v_res_2312_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2313_, lean_object* v_keys_2314_, lean_object* v_vals_2315_, lean_object* v_heq_2316_, lean_object* v_i_2317_, lean_object* v_k_2318_){
_start:
{
lean_object* v___x_2319_; 
v___x_2319_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0_spec__2___redArg(v_keys_2314_, v_vals_2315_, v_i_2317_, v_k_2318_);
return v___x_2319_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2320_, lean_object* v_keys_2321_, lean_object* v_vals_2322_, lean_object* v_heq_2323_, lean_object* v_i_2324_, lean_object* v_k_2325_){
_start:
{
lean_object* v_res_2326_; 
v_res_2326_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__0_spec__0_spec__2(v_00_u03b2_2320_, v_keys_2321_, v_vals_2322_, v_heq_2323_, v_i_2324_, v_k_2325_);
lean_dec(v_k_2325_);
lean_dec_ref(v_vals_2322_);
lean_dec_ref(v_keys_2321_);
return v_res_2326_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_2327_, lean_object* v_x_2328_, lean_object* v_x_2329_){
_start:
{
uint8_t v___x_2330_; 
v___x_2330_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5___redArg(v_x_2328_, v_x_2329_);
return v___x_2330_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_2331_, lean_object* v_x_2332_, lean_object* v_x_2333_){
_start:
{
uint8_t v_res_2334_; lean_object* v_r_2335_; 
v_res_2334_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5(v_00_u03b2_2331_, v_x_2332_, v_x_2333_);
lean_dec_ref(v_x_2333_);
lean_dec_ref(v_x_2332_);
v_r_2335_ = lean_box(v_res_2334_);
return v_r_2335_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4_spec__9(lean_object* v_00_u03b2_2336_, lean_object* v_a_2337_, lean_object* v_x_2338_){
_start:
{
lean_object* v___x_2339_; 
v___x_2339_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4_spec__9___redArg(v_a_2337_, v_x_2338_);
return v___x_2339_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4_spec__9___boxed(lean_object* v_00_u03b2_2340_, lean_object* v_a_2341_, lean_object* v_x_2342_){
_start:
{
lean_object* v_res_2343_; 
v_res_2343_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__4_spec__9(v_00_u03b2_2340_, v_a_2341_, v_x_2342_);
lean_dec(v_x_2342_);
lean_dec(v_a_2341_);
return v_res_2343_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8(lean_object* v_00_u03b2_2344_, lean_object* v_x_2345_, size_t v_x_2346_, lean_object* v_x_2347_){
_start:
{
uint8_t v___x_2348_; 
v___x_2348_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8___redArg(v_x_2345_, v_x_2346_, v_x_2347_);
return v___x_2348_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8___boxed(lean_object* v_00_u03b2_2349_, lean_object* v_x_2350_, lean_object* v_x_2351_, lean_object* v_x_2352_){
_start:
{
size_t v_x_28246__boxed_2353_; uint8_t v_res_2354_; lean_object* v_r_2355_; 
v_x_28246__boxed_2353_ = lean_unbox_usize(v_x_2351_);
lean_dec(v_x_2351_);
v_res_2354_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8(v_00_u03b2_2349_, v_x_2350_, v_x_28246__boxed_2353_, v_x_2352_);
lean_dec_ref(v_x_2352_);
lean_dec_ref(v_x_2350_);
v_r_2355_ = lean_box(v_res_2354_);
return v_r_2355_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8_spec__12(lean_object* v_00_u03b2_2356_, lean_object* v_keys_2357_, lean_object* v_vals_2358_, lean_object* v_heq_2359_, lean_object* v_i_2360_, lean_object* v_k_2361_){
_start:
{
uint8_t v___x_2362_; 
v___x_2362_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8_spec__12___redArg(v_keys_2357_, v_i_2360_, v_k_2361_);
return v___x_2362_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8_spec__12___boxed(lean_object* v_00_u03b2_2363_, lean_object* v_keys_2364_, lean_object* v_vals_2365_, lean_object* v_heq_2366_, lean_object* v_i_2367_, lean_object* v_k_2368_){
_start:
{
uint8_t v_res_2369_; lean_object* v_r_2370_; 
v_res_2369_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go_spec__1_spec__2_spec__5_spec__8_spec__12(v_00_u03b2_2363_, v_keys_2364_, v_vals_2365_, v_heq_2366_, v_i_2367_, v_k_2368_);
lean_dec_ref(v_k_2368_);
lean_dec_ref(v_vals_2365_);
lean_dec_ref(v_keys_2364_);
v_r_2370_ = lean_box(v_res_2369_);
return v_r_2370_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_checkTemplateVisibility_spec__0(lean_object* v_as_2371_, size_t v_sz_2372_, size_t v_i_2373_, lean_object* v_b_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_){
_start:
{
lean_object* v_a_2381_; uint8_t v___x_2385_; 
v___x_2385_ = lean_usize_dec_lt(v_i_2373_, v_sz_2372_);
if (v___x_2385_ == 0)
{
lean_object* v___x_2386_; 
v___x_2386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2386_, 0, v_b_2374_);
return v___x_2386_;
}
else
{
lean_object* v___x_2387_; lean_object* v_a_2388_; lean_object* v___x_2389_; 
v___x_2387_ = lean_box(0);
v_a_2388_ = lean_array_uget_borrowed(v_as_2371_, v_i_2373_);
lean_inc(v_a_2388_);
v___x_2389_ = l_Lean_Compiler_LCNF_Decl_isTemplateLike___redArg(v_a_2388_, v___y_2377_, v___y_2378_);
if (lean_obj_tag(v___x_2389_) == 0)
{
lean_object* v_toSignature_2390_; lean_object* v_a_2391_; lean_object* v_name_2392_; uint8_t v___x_2393_; 
v_toSignature_2390_ = lean_ctor_get(v_a_2388_, 0);
v_a_2391_ = lean_ctor_get(v___x_2389_, 0);
lean_inc(v_a_2391_);
lean_dec_ref_known(v___x_2389_, 1);
v_name_2392_ = lean_ctor_get(v_toSignature_2390_, 0);
v___x_2393_ = l_Lean_isPrivateName(v_name_2392_);
if (v___x_2393_ == 0)
{
uint8_t v___x_2394_; 
v___x_2394_ = lean_unbox(v_a_2391_);
lean_dec(v_a_2391_);
if (v___x_2394_ == 0)
{
v_a_2381_ = v___x_2387_;
goto v___jp_2380_;
}
else
{
lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v___x_2395_ = lean_st_ref_get(v___y_2378_);
lean_dec(v___x_2395_);
v___x_2396_ = l_Lean_NameSet_empty;
lean_inc_n(v_a_2388_, 2);
v___x_2397_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_checkTemplateVisibility_go(v_a_2388_, v_a_2388_, v___x_2396_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_);
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_dec_ref_known(v___x_2397_, 1);
v_a_2381_ = v___x_2387_;
goto v___jp_2380_;
}
else
{
lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2405_; 
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2400_ = v___x_2397_;
v_isShared_2401_ = v_isSharedCheck_2405_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_dec(v___x_2397_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2405_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v___x_2403_; 
if (v_isShared_2401_ == 0)
{
v___x_2403_ = v___x_2400_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_a_2398_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
}
}
}
else
{
lean_dec(v_a_2391_);
v_a_2381_ = v___x_2387_;
goto v___jp_2380_;
}
}
else
{
lean_object* v_a_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2413_; 
v_a_2406_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2413_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2408_ = v___x_2389_;
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_a_2406_);
lean_dec(v___x_2389_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2411_; 
if (v_isShared_2409_ == 0)
{
v___x_2411_ = v___x_2408_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v_a_2406_);
v___x_2411_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
return v___x_2411_;
}
}
}
}
v___jp_2380_:
{
size_t v___x_2382_; size_t v___x_2383_; 
v___x_2382_ = ((size_t)1ULL);
v___x_2383_ = lean_usize_add(v_i_2373_, v___x_2382_);
v_i_2373_ = v___x_2383_;
v_b_2374_ = v_a_2381_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_checkTemplateVisibility_spec__0___boxed(lean_object* v_as_2414_, lean_object* v_sz_2415_, lean_object* v_i_2416_, lean_object* v_b_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_){
_start:
{
size_t v_sz_boxed_2423_; size_t v_i_boxed_2424_; lean_object* v_res_2425_; 
v_sz_boxed_2423_ = lean_unbox_usize(v_sz_2415_);
lean_dec(v_sz_2415_);
v_i_boxed_2424_ = lean_unbox_usize(v_i_2416_);
lean_dec(v_i_2416_);
v_res_2425_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_checkTemplateVisibility_spec__0(v_as_2414_, v_sz_boxed_2423_, v_i_boxed_2424_, v_b_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_);
lean_dec(v___y_2421_);
lean_dec_ref(v___y_2420_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
lean_dec_ref(v_as_2414_);
return v_res_2425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_checkTemplateVisibility___lam__0(lean_object* v_decls_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_){
_start:
{
lean_object* v___x_2432_; lean_object* v_env_2433_; lean_object* v___x_2434_; uint8_t v_isModule_2435_; 
v___x_2432_ = lean_st_ref_get(v___y_2430_);
v_env_2433_ = lean_ctor_get(v___x_2432_, 0);
lean_inc_ref(v_env_2433_);
lean_dec(v___x_2432_);
v___x_2434_ = l_Lean_Environment_header(v_env_2433_);
lean_dec_ref(v_env_2433_);
v_isModule_2435_ = lean_ctor_get_uint8(v___x_2434_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_2434_);
if (v_isModule_2435_ == 0)
{
lean_object* v___x_2436_; 
v___x_2436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2436_, 0, v_decls_2426_);
return v___x_2436_;
}
else
{
lean_object* v___x_2437_; size_t v_sz_2438_; size_t v___x_2439_; lean_object* v___x_2440_; 
v___x_2437_ = lean_box(0);
v_sz_2438_ = lean_array_size(v_decls_2426_);
v___x_2439_ = ((size_t)0ULL);
v___x_2440_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_checkTemplateVisibility_spec__0(v_decls_2426_, v_sz_2438_, v___x_2439_, v___x_2437_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_);
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2447_; 
v_isSharedCheck_2447_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2447_ == 0)
{
lean_object* v_unused_2448_; 
v_unused_2448_ = lean_ctor_get(v___x_2440_, 0);
lean_dec(v_unused_2448_);
v___x_2442_ = v___x_2440_;
v_isShared_2443_ = v_isSharedCheck_2447_;
goto v_resetjp_2441_;
}
else
{
lean_dec(v___x_2440_);
v___x_2442_ = lean_box(0);
v_isShared_2443_ = v_isSharedCheck_2447_;
goto v_resetjp_2441_;
}
v_resetjp_2441_:
{
lean_object* v___x_2445_; 
if (v_isShared_2443_ == 0)
{
lean_ctor_set(v___x_2442_, 0, v_decls_2426_);
v___x_2445_ = v___x_2442_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v_decls_2426_);
v___x_2445_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
return v___x_2445_;
}
}
}
else
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2456_; 
lean_dec_ref(v_decls_2426_);
v_a_2449_ = lean_ctor_get(v___x_2440_, 0);
v_isSharedCheck_2456_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2451_ = v___x_2440_;
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2440_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2454_; 
if (v_isShared_2452_ == 0)
{
v___x_2454_ = v___x_2451_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v_a_2449_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_checkTemplateVisibility___lam__0___boxed(lean_object* v_decls_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_){
_start:
{
lean_object* v_res_2463_; 
v_res_2463_ = l_Lean_Compiler_LCNF_checkTemplateVisibility___lam__0(v_decls_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
lean_dec(v___y_2461_);
lean_dec_ref(v___y_2460_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
return v_res_2463_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2476_; lean_object* v___x_2477_; 
v___x_2476_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0___closed__0));
v___x_2477_ = l_Lean_stringToMessageData(v___x_2476_);
return v___x_2477_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0(uint8_t v_phase_2478_, uint8_t v___x_2479_, lean_object* v_as_2480_, size_t v_sz_2481_, size_t v_i_2482_, lean_object* v_b_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_){
_start:
{
lean_object* v_a_2490_; uint8_t v___x_2494_; 
v___x_2494_ = lean_usize_dec_lt(v_i_2482_, v_sz_2481_);
if (v___x_2494_ == 0)
{
lean_object* v___x_2495_; 
v___x_2495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2495_, 0, v_b_2483_);
return v___x_2495_;
}
else
{
lean_object* v___x_2496_; lean_object* v_a_2497_; lean_object* v___y_2499_; lean_object* v___y_2500_; lean_object* v___y_2501_; lean_object* v___y_2502_; lean_object* v___x_2505_; lean_object* v_toSignature_2506_; lean_object* v_env_2507_; lean_object* v_name_2508_; lean_object* v___x_2509_; uint8_t v___x_2510_; 
v___x_2496_ = lean_box(0);
v_a_2497_ = lean_array_uget_borrowed(v_as_2480_, v_i_2482_);
v___x_2505_ = lean_st_ref_get(v___y_2487_);
v_toSignature_2506_ = lean_ctor_get(v_a_2497_, 0);
v_env_2507_ = lean_ctor_get(v___x_2505_, 0);
lean_inc_ref(v_env_2507_);
lean_dec(v___x_2505_);
v_name_2508_ = lean_ctor_get(v_toSignature_2506_, 0);
v___x_2509_ = l_Lean_Environment_setExporting(v_env_2507_, v___x_2479_);
lean_inc(v_name_2508_);
v___x_2510_ = l_Lean_Environment_contains(v___x_2509_, v_name_2508_, v___x_2479_);
if (v___x_2510_ == 0)
{
v_a_2490_ = v___x_2496_;
goto v___jp_2489_;
}
else
{
lean_object* v_toCold_2511_; lean_object* v_options_2512_; uint8_t v_hasTrace_2513_; 
v_toCold_2511_ = lean_ctor_get(v___y_2486_, 0);
v_options_2512_ = lean_ctor_get(v_toCold_2511_, 2);
v_hasTrace_2513_ = lean_ctor_get_uint8(v_options_2512_, sizeof(void*)*1);
if (v_hasTrace_2513_ == 0)
{
v___y_2499_ = v___y_2484_;
v___y_2500_ = v___y_2485_;
v___y_2501_ = v___y_2486_;
v___y_2502_ = v___y_2487_;
goto v___jp_2498_;
}
else
{
lean_object* v_inheritedTraceOptions_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; uint8_t v___x_2517_; 
v_inheritedTraceOptions_2514_ = lean_ctor_get(v_toCold_2511_, 11);
v___x_2515_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__2));
v___x_2516_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__5, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__5_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__5);
v___x_2517_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2514_, v_options_2512_, v___x_2516_);
if (v___x_2517_ == 0)
{
v___y_2499_ = v___y_2484_;
v___y_2500_ = v___y_2485_;
v___y_2501_ = v___y_2486_;
v___y_2502_ = v___y_2487_;
goto v___jp_2498_;
}
else
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2518_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__7, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__7);
lean_inc(v_name_2508_);
v___x_2519_ = l_Lean_MessageData_ofName(v_name_2508_);
v___x_2520_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2520_, 0, v___x_2518_);
lean_ctor_set(v___x_2520_, 1, v___x_2519_);
v___x_2521_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0___closed__1);
v___x_2522_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2522_, 0, v___x_2520_);
lean_ctor_set(v___x_2522_, 1, v___x_2521_);
v___x_2523_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__0(v___x_2515_, v___x_2522_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_);
if (lean_obj_tag(v___x_2523_) == 0)
{
lean_dec_ref_known(v___x_2523_, 1);
v___y_2499_ = v___y_2484_;
v___y_2500_ = v___y_2485_;
v___y_2501_ = v___y_2486_;
v___y_2502_ = v___y_2487_;
goto v___jp_2498_;
}
else
{
return v___x_2523_;
}
}
}
}
v___jp_2498_:
{
uint8_t v___x_2503_; lean_object* v___x_2504_; 
v___x_2503_ = l_Lean_Compiler_LCNF_Phase_toPurity(v_phase_2478_);
lean_inc(v_a_2497_);
v___x_2504_ = l_Lean_Compiler_LCNF_markDeclPublicRec(v___x_2503_, v_phase_2478_, v_a_2497_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_);
if (lean_obj_tag(v___x_2504_) == 0)
{
lean_dec_ref_known(v___x_2504_, 1);
v_a_2490_ = v___x_2496_;
goto v___jp_2489_;
}
else
{
return v___x_2504_;
}
}
}
v___jp_2489_:
{
size_t v___x_2491_; size_t v___x_2492_; 
v___x_2491_ = ((size_t)1ULL);
v___x_2492_ = lean_usize_add(v_i_2482_, v___x_2491_);
v_i_2482_ = v___x_2492_;
v_b_2483_ = v_a_2490_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0___boxed(lean_object* v_phase_2524_, lean_object* v___x_2525_, lean_object* v_as_2526_, lean_object* v_sz_2527_, lean_object* v_i_2528_, lean_object* v_b_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_){
_start:
{
uint8_t v_phase_boxed_2535_; uint8_t v___x_2626__boxed_2536_; size_t v_sz_boxed_2537_; size_t v_i_boxed_2538_; lean_object* v_res_2539_; 
v_phase_boxed_2535_ = lean_unbox(v_phase_2524_);
v___x_2626__boxed_2536_ = lean_unbox(v___x_2525_);
v_sz_boxed_2537_ = lean_unbox_usize(v_sz_2527_);
lean_dec(v_sz_2527_);
v_i_boxed_2538_ = lean_unbox_usize(v_i_2528_);
lean_dec(v_i_2528_);
v_res_2539_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0(v_phase_boxed_2535_, v___x_2626__boxed_2536_, v_as_2526_, v_sz_boxed_2537_, v_i_boxed_2538_, v_b_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_);
lean_dec(v___y_2533_);
lean_dec_ref(v___y_2532_);
lean_dec(v___y_2531_);
lean_dec_ref(v___y_2530_);
lean_dec_ref(v_as_2526_);
return v_res_2539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferVisibility___lam__0(uint8_t v_phase_2540_, lean_object* v_decls_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_){
_start:
{
lean_object* v___x_2547_; lean_object* v_env_2548_; lean_object* v___x_2549_; uint8_t v_isModule_2550_; 
v___x_2547_ = lean_st_ref_get(v___y_2545_);
v_env_2548_ = lean_ctor_get(v___x_2547_, 0);
lean_inc_ref(v_env_2548_);
lean_dec(v___x_2547_);
v___x_2549_ = l_Lean_Environment_header(v_env_2548_);
lean_dec_ref(v_env_2548_);
v_isModule_2550_ = lean_ctor_get_uint8(v___x_2549_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_2549_);
if (v_isModule_2550_ == 0)
{
lean_object* v___x_2551_; 
v___x_2551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2551_, 0, v_decls_2541_);
return v___x_2551_;
}
else
{
lean_object* v___x_2552_; size_t v_sz_2553_; size_t v___x_2554_; lean_object* v___x_2555_; 
v___x_2552_ = lean_box(0);
v_sz_2553_ = lean_array_size(v_decls_2541_);
v___x_2554_ = ((size_t)0ULL);
v___x_2555_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_inferVisibility_spec__0(v_phase_2540_, v_isModule_2550_, v_decls_2541_, v_sz_2553_, v___x_2554_, v___x_2552_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_);
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2562_; 
v_isSharedCheck_2562_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2562_ == 0)
{
lean_object* v_unused_2563_; 
v_unused_2563_ = lean_ctor_get(v___x_2555_, 0);
lean_dec(v_unused_2563_);
v___x_2557_ = v___x_2555_;
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
else
{
lean_dec(v___x_2555_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2560_; 
if (v_isShared_2558_ == 0)
{
lean_ctor_set(v___x_2557_, 0, v_decls_2541_);
v___x_2560_ = v___x_2557_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v_decls_2541_);
v___x_2560_ = v_reuseFailAlloc_2561_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
return v___x_2560_;
}
}
}
else
{
lean_object* v_a_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2571_; 
lean_dec_ref(v_decls_2541_);
v_a_2564_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2571_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2571_ == 0)
{
v___x_2566_ = v___x_2555_;
v_isShared_2567_ = v_isSharedCheck_2571_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_a_2564_);
lean_dec(v___x_2555_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2571_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2569_; 
if (v_isShared_2567_ == 0)
{
v___x_2569_ = v___x_2566_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_a_2564_);
v___x_2569_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
return v___x_2569_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferVisibility___lam__0___boxed(lean_object* v_phase_2572_, lean_object* v_decls_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_){
_start:
{
uint8_t v_phase_boxed_2579_; lean_object* v_res_2580_; 
v_phase_boxed_2579_ = lean_unbox(v_phase_2572_);
v_res_2580_ = l_Lean_Compiler_LCNF_inferVisibility___lam__0(v_phase_boxed_2579_, v_decls_2573_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_);
lean_dec(v___y_2577_);
lean_dec_ref(v___y_2576_);
lean_dec(v___y_2575_);
lean_dec_ref(v___y_2574_);
return v_res_2580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferVisibility(uint8_t v_phase_2583_){
_start:
{
lean_object* v___x_2584_; lean_object* v___f_2585_; lean_object* v___x_2586_; uint8_t v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2584_ = lean_box(v_phase_2583_);
v___f_2585_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_inferVisibility___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2585_, 0, v___x_2584_);
v___x_2586_ = lean_unsigned_to_nat(0u);
v___x_2587_ = 0;
v___x_2588_ = ((lean_object*)(l_Lean_Compiler_LCNF_inferVisibility___closed__0));
v___x_2589_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_2589_, 0, v___x_2586_);
lean_ctor_set(v___x_2589_, 1, v___x_2588_);
lean_ctor_set(v___x_2589_, 2, v___f_2585_);
lean_ctor_set_uint8(v___x_2589_, sizeof(void*)*3, v_phase_2583_);
lean_ctor_set_uint8(v___x_2589_, sizeof(void*)*3 + 1, v_phase_2583_);
lean_ctor_set_uint8(v___x_2589_, sizeof(void*)*3 + 2, v___x_2587_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferVisibility___boxed(lean_object* v_phase_2590_){
_start:
{
uint8_t v_phase_boxed_2591_; lean_object* v_res_2592_; 
v_phase_boxed_2591_ = lean_unbox(v_phase_2590_);
v_res_2592_ = l_Lean_Compiler_LCNF_inferVisibility(v_phase_boxed_2591_);
return v_res_2592_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2644_ = lean_unsigned_to_nat(3356661454u);
v___x_2645_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_));
v___x_2646_ = l_Lean_Name_num___override(v___x_2645_, v___x_2644_);
return v___x_2646_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2648_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_));
v___x_2649_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_);
v___x_2650_ = l_Lean_Name_str___override(v___x_2649_, v___x_2648_);
return v___x_2650_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; 
v___x_2652_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_));
v___x_2653_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_);
v___x_2654_ = l_Lean_Name_str___override(v___x_2653_, v___x_2652_);
return v___x_2654_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2655_ = lean_unsigned_to_nat(2u);
v___x_2656_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_);
v___x_2657_ = l_Lean_Name_num___override(v___x_2656_, v___x_2655_);
return v___x_2657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2659_; uint8_t v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; 
v___x_2659_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Compiler_LCNF_markDeclPublicRec_spec__1___closed__2));
v___x_2660_ = 0;
v___x_2661_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_);
v___x_2662_ = l_Lean_registerTraceClass(v___x_2659_, v___x_2660_, v___x_2661_);
return v___x_2662_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2____boxed(lean_object* v_a_2663_){
_start:
{
lean_object* v_res_2664_; 
v_res_2664_ = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_();
return v_res_2664_;
}
}
lean_object* runtime_initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Visibility(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_Visibility_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Visibility_3356661454____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Visibility(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Visibility(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Visibility(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Visibility(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Visibility(builtin);
}
#ifdef __cplusplus
}
#endif
