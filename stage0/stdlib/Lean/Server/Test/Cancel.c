// Lean compiler output
// Module: Lean.Server.Test.Cancel
// Imports: public import Lean.Elab.Command public import Lean.Elab.Tactic.Basic public meta import Lean.Elab.Command public meta import Lean.Elab.Tactic.Basic
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
lean_object* lean_io_promise_new();
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_wait(lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
lean_object* l_IO_sleep(uint32_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stderr();
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Core_wrapAsyncAsSnapshot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_defaultReportingRange(lean_object*);
lean_object* l_Lean_Core_logSnapshotTask___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_instInhabitedTacticM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_CancelToken_new();
lean_object* l_Lean_Core_getMessageLog___redArg(lean_object*);
lean_object* l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(lean_object*);
lean_object* l_Lean_Language_instInhabitedSnapshotTask_default___redArg(lean_object*);
extern lean_object* l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
lean_object* l_Lean_Elab_Term_wrapAsyncAsSnapshot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
lean_object* l_IO_CancelToken_set(lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_instInhabitedTacticFinishedSnapshot;
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_3167384629____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_3167384629____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_onceRef;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Test"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Cancel"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "tacticWait_for_cancel_once"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__4 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__4_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__5_value_aux_0),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__5_value_aux_1),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 90, 51, 119, 206, 46, 163, 7)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__5_value_aux_2),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 99, 52, 168, 19, 159, 18, 198)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__5_value_aux_3),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__4_value),LEAN_SCALAR_PTR_LITERAL(196, 145, 139, 180, 252, 203, 159, 176)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__5 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__5_value;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "wait_for_cancel_once"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__6 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__6_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__6_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__7 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__7_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__5_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__7_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__8 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__8_value;
LEAN_EXPORT const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__8_value;
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instInhabitedTacticM___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5___closed__0 = (const lean_object*)&l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "blocked"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2;
static lean_once_cell_t l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__3;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "_aux_Lean_Server_Test_Cancel___elabRules_Lean_Server_Test_Cancel_tacticWait_for_cancel_once_1"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__4 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "cancelled!"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__5 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "cancelled (should never be visible)"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__6 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__6_value)}};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__7 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__7_value;
static lean_once_cell_t l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Server.Test.Cancel"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__9 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__9_value;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 118, .m_capacity = 118, .m_length = 117, .m_data = "Lean.Server.Test.Cancel._aux_Lean_Server_Test_Cancel___elabRules_Lean_Server_Test_Cancel_tacticWait_for_cancel_once_1"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__10 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__10_value;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__11 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__11_value;
static lean_once_cell_t l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__12;
static lean_once_cell_t l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__13;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___boxed(lean_object**);
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "blocked!"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_2861725383____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_2861725383____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_unblockedCancelTkRef;
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_getUnblockedCancelTk();
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_getUnblockedCancelTk___boxed(lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "tacticWait_for_unblock"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__0_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__1_value_aux_0),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__1_value_aux_1),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 90, 51, 119, 206, 46, 163, 7)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__1_value_aux_2),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 99, 52, 168, 19, 159, 18, 198)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__1_value_aux_3),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 76, 136, 155, 84, 184, 97, 226)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__1_value;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "wait_for_unblock"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__2 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__2_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__3 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__3_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__3_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__4 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__unblock = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1_spec__0___redArg();
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1_spec__0___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "_aux_Lean_Server_Test_Cancel___elabRules_Lean_Server_Test_Cancel_tacticWait_for_unblock_1"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 114, .m_capacity = 114, .m_length = 113, .m_data = "Lean.Server.Test.Cancel._aux_Lean_Server_Test_Cancel___elabRules_Lean_Server_Test_Cancel_tacticWait_for_unblock_1"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___boxed(lean_object**);
static lean_once_cell_t l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "tacticWait_for_unblock_async"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__0_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__1_value_aux_0),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__1_value_aux_1),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 90, 51, 119, 206, 46, 163, 7)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__1_value_aux_2),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 99, 52, 168, 19, 159, 18, 198)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__1_value_aux_3),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__0_value),LEAN_SCALAR_PTR_LITERAL(80, 2, 167, 3, 169, 184, 169, 27)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__1_value;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "wait_for_unblock_async"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__2 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__2_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__3 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__3_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__3_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__4 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__4_value;
static lean_once_cell_t l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__0___redArg();
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__0___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 120, .m_capacity = 120, .m_length = 119, .m_data = "Lean.Server.Test.Cancel._aux_Lean_Server_Test_Cancel___elabRules_Lean_Server_Test_Cancel_tacticWait_for_unblock_async_1"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__0_value;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 96, .m_capacity = 96, .m_length = 95, .m_data = "_aux_Lean_Server_Test_Cancel___elabRules_Lean_Server_Test_Cancel_tacticWait_for_unblock_async_1"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__1_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 90, 51, 119, 206, 46, 163, 7)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 99, 52, 168, 19, 159, 18, 198)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__2_value_aux_3),((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(191, 112, 48, 102, 88, 16, 3, 203)}};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__2 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__2_value;
static lean_once_cell_t l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel_tacticUnblock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tacticUnblock"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticUnblock___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticUnblock___closed__0_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticUnblock___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticUnblock___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticUnblock___closed__1_value_aux_0),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticUnblock___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticUnblock___closed__1_value_aux_1),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 90, 51, 119, 206, 46, 163, 7)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticUnblock___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticUnblock___closed__1_value_aux_2),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 99, 52, 168, 19, 159, 18, 198)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticUnblock___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticUnblock___closed__1_value_aux_3),((lean_object*)&l_Lean_Server_Test_Cancel_tacticUnblock___closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 134, 8, 83, 163, 213, 163, 162)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticUnblock___closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticUnblock___closed__1_value;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticUnblock___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unblock"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticUnblock___closed__2 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticUnblock___closed__2_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticUnblock___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticUnblock___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticUnblock___closed__3 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticUnblock___closed__3_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticUnblock___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticUnblock___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticUnblock___closed__3_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticUnblock___closed__4 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticUnblock___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Server_Test_Cancel_tacticUnblock = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticUnblock___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___lam__0___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___closed__0_value;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "unblocking!"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "tacticWait_for_cancel_once_async"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__0_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__1_value_aux_0),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__1_value_aux_1),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 90, 51, 119, 206, 46, 163, 7)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__1_value_aux_2),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 99, 52, 168, 19, 159, 18, 198)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__1_value_aux_3),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__0_value),LEAN_SCALAR_PTR_LITERAL(10, 193, 26, 122, 11, 118, 196, 212)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__1_value;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "wait_for_cancel_once_async"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__2 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__2_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__3 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__3_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__3_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__4 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 124, .m_capacity = 124, .m_length = 123, .m_data = "Lean.Server.Test.Cancel._aux_Lean_Server_Test_Cancel___elabRules_Lean_Server_Test_Cancel_tacticWait_for_cancel_once_async_1"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__0___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__0_value;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 100, .m_capacity = 100, .m_length = 99, .m_data = "_aux_Lean_Server_Test_Cancel___elabRules_Lean_Server_Test_Cancel_tacticWait_for_cancel_once_async_1"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__1_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 90, 51, 119, 206, 46, 163, 7)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 99, 52, 168, 19, 159, 18, 198)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__2_value_aux_3),((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(255, 122, 104, 40, 186, 125, 92, 45)}};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__2 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "tacticWait_for_main_cancel_once_async"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__0_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__1_value_aux_0),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__1_value_aux_1),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 90, 51, 119, 206, 46, 163, 7)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__1_value_aux_2),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 99, 52, 168, 19, 159, 18, 198)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__1_value_aux_3),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__0_value),LEAN_SCALAR_PTR_LITERAL(132, 72, 241, 128, 127, 64, 204, 212)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__1_value;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "wait_for_main_cancel_once_async"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__2 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__2_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__3 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__3_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__3_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__4 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 105, .m_capacity = 105, .m_length = 104, .m_data = "_aux_Lean_Server_Test_Cancel___elabRules_Lean_Server_Test_Cancel_tacticWait_for_main_cancel_once_async_1"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__0_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 90, 51, 119, 206, 46, 163, 7)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 99, 52, 168, 19, 159, 18, 198)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__1_value_aux_3),((lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(5, 175, 224, 148, 39, 133, 168, 143)}};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__1_value;
static lean_once_cell_t l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__2;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 129, .m_capacity = 129, .m_length = 128, .m_data = "Lean.Server.Test.Cancel._aux_Lean_Server_Test_Cancel___elabRules_Lean_Server_Test_Cancel_tacticWait_for_main_cancel_once_async_1"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__3 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__3_value;
static lean_once_cell_t l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_4281145543____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_4281145543____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_cmdOnceRef;
static const lean_string_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "commandWait_for_cancel_once_command_"};
static const lean_object* l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__0_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 90, 51, 119, 206, 46, 163, 7)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 99, 52, 168, 19, 159, 18, 198)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__1_value_aux_3),((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(226, 229, 56, 152, 161, 65, 10, 140)}};
static const lean_object* l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__1_value;
static const lean_string_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__2 = (const lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__2_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__3 = (const lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__3_value;
static const lean_string_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "wait_for_cancel_once_command"};
static const lean_object* l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__4 = (const lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__4_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__4_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__5 = (const lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__5_value;
static const lean_string_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__6 = (const lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__6_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__7 = (const lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__7_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__7_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__8 = (const lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__8_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__3_value),((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__5_value),((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__8_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__9 = (const lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__9_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__9_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__10 = (const lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__10_value;
LEAN_EXPORT const lean_object* l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command__ = (const lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__10_value;
static const lean_closure_object l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__2___closed__0 = (const lean_object*)&l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "_aux_Lean_Server_Test_Cancel___elabRules_Lean_Server_Test_Cancel_commandWait_for_cancel_once_command__1"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___closed__0_value;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 128, .m_capacity = 128, .m_length = 127, .m_data = "Lean.Server.Test.Cancel._aux_Lean_Server_Test_Cancel___elabRules_Lean_Server_Test_Cancel_commandWait_for_cancel_once_command__1"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___closed__1_value;
static lean_once_cell_t l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__0_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__0_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__1_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__1_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_testTasksRef;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_mkTestTask(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_mkTestTask___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "tacticWait_for_test_task_"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__0_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 90, 51, 119, 206, 46, 163, 7)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 99, 52, 168, 19, 159, 18, 198)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__1_value_aux_3),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(171, 241, 171, 98, 172, 75, 180, 122)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__1_value;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "wait_for_test_task "};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__2 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__2_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__3 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__3_value;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__4 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__4_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__4_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__5 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__5_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__5_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__6 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__6_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__3_value),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__3_value),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__6_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__7 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__7_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__7_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__8 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__8_value;
LEAN_EXPORT const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__test__task__ = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__8_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "wait_for_test_task: no task registered for "};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___closed__0_value;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "wait_for_test_task: task "};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___closed__1_value;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = " dropped without resolution"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___closed__2 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_1277954624____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_1277954624____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_syncPromisesRef;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_getSyncPromise(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_getSyncPromise___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_resolveSyncPromise(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_resolveSyncPromise___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "tacticWait_for_sync_"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__0_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 90, 51, 119, 206, 46, 163, 7)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 99, 52, 168, 19, 159, 18, 198)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__1_value_aux_3),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 215, 46, 16, 187, 62, 147, 151)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__1_value;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "wait_for_sync "};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__2 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__2_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__3 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__3_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__3_value),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__3_value),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__6_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__4 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__4_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__4_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__5 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Server_Test_Cancel_tacticWait__for__sync__ = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__5_value;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "wait_for_sync: sync promise "};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1___redArg___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "tacticBlock_until_cancelled_"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__0_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 90, 51, 119, 206, 46, 163, 7)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__1_value_aux_2),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3_value),LEAN_SCALAR_PTR_LITERAL(102, 99, 52, 168, 19, 159, 18, 198)}};
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__1_value_aux_3),((lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 22, 208, 150, 242, 79, 233, 148)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__1 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__1_value;
static const lean_string_object l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "block_until_cancelled"};
static const lean_object* l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__2 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__2_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__3 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__3_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__3_value),((lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__3_value),((lean_object*)&l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__6_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__4 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__4_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__4_value)}};
static const lean_object* l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__5 = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled__ = (const lean_object*)&l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 120, .m_capacity = 120, .m_length = 119, .m_data = "Lean.Server.Test.Cancel._aux_Lean_Server_Test_Cancel___elabRules_Lean_Server_Test_Cancel_tacticBlock_until_cancelled__1"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__0 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__0_value;
static lean_once_cell_t l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__1;
static const lean_string_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ": blocked"};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__2 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__2_value;
static const lean_ctor_object l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__3 = (const lean_object*)&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_3167384629____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_2_ = lean_box(0);
v___x_3_ = lean_st_mk_ref(v___x_2_);
v___x_4_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4_, 0, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_3167384629____hygCtx___hyg_2____boxed(lean_object* v_a_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_3167384629____hygCtx___hyg_2_();
return v_res_6_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_box(0);
v___x_28_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_29_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v___x_27_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg(){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_31_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg___closed__0);
v___x_32_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg___boxed(lean_object* v___y_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0(lean_object* v_00_u03b1_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___boxed(lean_object* v_00_u03b1_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0(v_00_u03b1_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
lean_dec(v___y_50_);
lean_dec_ref(v___y_49_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
return v_res_56_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = lean_box(0);
v___x_58_ = l_Lean_interruptExceptionId;
v___x_59_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___x_57_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg(){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg___closed__0);
v___x_62_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg___boxed(lean_object* v___y_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg();
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4(lean_object* v_00_u03b1_65_, lean_object* v___y_66_, lean_object* v___y_67_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg();
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___boxed(lean_object* v_00_u03b1_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4(v_00_u03b1_70_, v___y_71_, v___y_72_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5(lean_object* v_msg_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v___f_86_; lean_object* v___x_10260__overap_87_; lean_object* v___x_88_; 
v___f_86_ = ((lean_object*)(l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5___closed__0));
v___x_10260__overap_87_ = lean_panic_fn_borrowed(v___f_86_, v_msg_76_);
lean_inc(v___y_84_);
lean_inc_ref(v___y_83_);
lean_inc(v___y_82_);
lean_inc_ref(v___y_81_);
lean_inc(v___y_80_);
lean_inc_ref(v___y_79_);
lean_inc(v___y_78_);
lean_inc_ref(v___y_77_);
v___x_88_ = lean_apply_9(v___x_10260__overap_87_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, lean_box(0));
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5___boxed(lean_object* v_msg_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5(v_msg_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__2___redArg(lean_object* v_val_100_){
_start:
{
lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_102_ = lean_box(0);
v___x_103_ = l_IO_CancelToken_isSet(v_val_100_);
if (v___x_103_ == 0)
{
uint32_t v___x_104_; lean_object* v___x_105_; 
v___x_104_ = 30;
v___x_105_ = l_IO_sleep(v___x_104_);
goto _start;
}
else
{
lean_object* v___x_107_; 
v___x_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_102_);
return v___x_107_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__2___redArg___boxed(lean_object* v_val_108_, lean_object* v___y_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__2___redArg(v_val_108_);
lean_dec_ref(v_val_108_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3_spec__4(lean_object* v_s_111_){
_start:
{
lean_object* v___x_113_; lean_object* v_putStr_114_; lean_object* v___x_115_; 
v___x_113_ = lean_get_stderr();
v_putStr_114_ = lean_ctor_get(v___x_113_, 4);
lean_inc_ref(v_putStr_114_);
lean_dec_ref(v___x_113_);
v___x_115_ = lean_apply_2(v_putStr_114_, v_s_111_, lean_box(0));
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3_spec__4___boxed(lean_object* v_s_116_, lean_object* v_a_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_IO_eprint___at___00IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3_spec__4(v_s_116_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3(lean_object* v_s_119_){
_start:
{
uint32_t v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_121_ = 10;
v___x_122_ = lean_string_push(v_s_119_, v___x_121_);
v___x_123_ = l_IO_eprint___at___00IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3_spec__4(v___x_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3___boxed(lean_object* v_s_124_, lean_object* v_a_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3(v_s_124_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__4(lean_object* v_msgData_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
lean_object* v___x_133_; lean_object* v_env_134_; uint8_t v___x_135_; lean_object* v_env_136_; lean_object* v___x_137_; lean_object* v_toCold_138_; lean_object* v_mctx_139_; lean_object* v_lctx_140_; lean_object* v_options_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_133_ = lean_st_ref_get(v___y_131_);
v_env_134_ = lean_ctor_get(v___x_133_, 0);
lean_inc_ref(v_env_134_);
lean_dec(v___x_133_);
v___x_135_ = 0;
v_env_136_ = l_Lean_Environment_setRecordingDeps(v_env_134_, v___x_135_);
v___x_137_ = lean_st_ref_get(v___y_129_);
v_toCold_138_ = lean_ctor_get(v___y_130_, 0);
v_mctx_139_ = lean_ctor_get(v___x_137_, 0);
lean_inc_ref(v_mctx_139_);
lean_dec(v___x_137_);
v_lctx_140_ = lean_ctor_get(v___y_128_, 2);
v_options_141_ = lean_ctor_get(v_toCold_138_, 2);
lean_inc_ref(v_options_141_);
lean_inc_ref(v_lctx_140_);
v___x_142_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_142_, 0, v_env_136_);
lean_ctor_set(v___x_142_, 1, v_mctx_139_);
lean_ctor_set(v___x_142_, 2, v_lctx_140_);
lean_ctor_set(v___x_142_, 3, v_options_141_);
v___x_143_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
lean_ctor_set(v___x_143_, 1, v_msgData_127_);
v___x_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__4___boxed(lean_object* v_msgData_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__4(v_msgData_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_);
lean_dec(v___y_149_);
lean_dec_ref(v___y_148_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
return v_res_151_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__5(lean_object* v_opts_152_, lean_object* v_opt_153_){
_start:
{
lean_object* v_name_154_; lean_object* v_defValue_155_; lean_object* v_map_156_; lean_object* v___x_157_; 
v_name_154_ = lean_ctor_get(v_opt_153_, 0);
v_defValue_155_ = lean_ctor_get(v_opt_153_, 1);
v_map_156_ = lean_ctor_get(v_opts_152_, 0);
v___x_157_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_156_, v_name_154_);
if (lean_obj_tag(v___x_157_) == 0)
{
uint8_t v___x_158_; 
v___x_158_ = lean_unbox(v_defValue_155_);
return v___x_158_;
}
else
{
lean_object* v_val_159_; 
v_val_159_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_val_159_);
lean_dec_ref_known(v___x_157_, 1);
if (lean_obj_tag(v_val_159_) == 1)
{
uint8_t v_v_160_; 
v_v_160_ = lean_ctor_get_uint8(v_val_159_, 0);
lean_dec_ref_known(v_val_159_, 0);
return v_v_160_;
}
else
{
uint8_t v___x_161_; 
lean_dec(v_val_159_);
v___x_161_ = lean_unbox(v_defValue_155_);
return v___x_161_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__5___boxed(lean_object* v_opts_162_, lean_object* v_opt_163_){
_start:
{
uint8_t v_res_164_; lean_object* v_r_165_; 
v_res_164_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__5(v_opts_162_, v_opt_163_);
lean_dec_ref(v_opt_163_);
lean_dec_ref(v_opts_162_);
v_r_165_ = lean_box(v_res_164_);
return v_r_165_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0(uint8_t v___x_174_, lean_object* v_x_175_){
_start:
{
if (lean_obj_tag(v_x_175_) == 1)
{
lean_object* v_pre_176_; 
v_pre_176_ = lean_ctor_get(v_x_175_, 0);
switch(lean_obj_tag(v_pre_176_))
{
case 1:
{
lean_object* v_pre_177_; 
v_pre_177_ = lean_ctor_get(v_pre_176_, 0);
switch(lean_obj_tag(v_pre_177_))
{
case 0:
{
lean_object* v_str_178_; lean_object* v_str_179_; lean_object* v___x_180_; uint8_t v___x_181_; 
v_str_178_ = lean_ctor_get(v_x_175_, 1);
v_str_179_ = lean_ctor_get(v_pre_176_, 1);
v___x_180_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__0));
v___x_181_ = lean_string_dec_eq(v_str_179_, v___x_180_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_182_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__1));
v___x_183_ = lean_string_dec_eq(v_str_179_, v___x_182_);
if (v___x_183_ == 0)
{
return v___x_183_;
}
else
{
lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_184_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__2));
v___x_185_ = lean_string_dec_eq(v_str_178_, v___x_184_);
return v___x_185_;
}
}
else
{
lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_186_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__3));
v___x_187_ = lean_string_dec_eq(v_str_178_, v___x_186_);
return v___x_187_;
}
}
case 1:
{
lean_object* v_pre_188_; 
v_pre_188_ = lean_ctor_get(v_pre_177_, 0);
if (lean_obj_tag(v_pre_188_) == 0)
{
lean_object* v_str_189_; lean_object* v_str_190_; lean_object* v_str_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v_str_189_ = lean_ctor_get(v_x_175_, 1);
v_str_190_ = lean_ctor_get(v_pre_176_, 1);
v_str_191_ = lean_ctor_get(v_pre_177_, 1);
v___x_192_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__4));
v___x_193_ = lean_string_dec_eq(v_str_191_, v___x_192_);
if (v___x_193_ == 0)
{
return v___x_193_;
}
else
{
lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_194_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__5));
v___x_195_ = lean_string_dec_eq(v_str_190_, v___x_194_);
if (v___x_195_ == 0)
{
return v___x_195_;
}
else
{
lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_196_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__6));
v___x_197_ = lean_string_dec_eq(v_str_189_, v___x_196_);
return v___x_197_;
}
}
}
else
{
return v___x_174_;
}
}
default: 
{
return v___x_174_;
}
}
}
case 0:
{
lean_object* v_str_198_; lean_object* v___x_199_; uint8_t v___x_200_; 
v_str_198_ = lean_ctor_get(v_x_175_, 1);
v___x_199_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___closed__7));
v___x_200_ = lean_string_dec_eq(v_str_198_, v___x_199_);
return v___x_200_;
}
default: 
{
return v___x_174_;
}
}
}
else
{
return v___x_174_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v___x_201_, lean_object* v_x_202_){
_start:
{
uint8_t v___x_14576__boxed_203_; uint8_t v_res_204_; lean_object* v_r_205_; 
v___x_14576__boxed_203_ = lean_unbox(v___x_201_);
v_res_204_ = l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___lam__0(v___x_14576__boxed_203_, v_x_202_);
lean_dec(v_x_202_);
v_r_205_ = lean_box(v_res_204_);
return v_r_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg(lean_object* v_ref_210_, lean_object* v_msgData_211_, uint8_t v_severity_212_, uint8_t v_isSilent_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_){
_start:
{
uint8_t v___y_220_; lean_object* v___y_221_; lean_object* v___y_222_; lean_object* v___y_223_; uint8_t v___y_224_; lean_object* v___y_225_; lean_object* v___y_226_; lean_object* v_toCold_227_; lean_object* v___y_228_; lean_object* v___y_257_; lean_object* v___y_258_; uint8_t v___y_259_; uint8_t v___y_260_; lean_object* v___y_261_; uint8_t v___y_262_; lean_object* v___y_263_; lean_object* v___y_264_; uint8_t v___y_284_; lean_object* v___y_285_; uint8_t v___y_286_; lean_object* v___y_287_; lean_object* v___y_288_; uint8_t v___y_289_; lean_object* v___y_290_; uint8_t v___y_294_; uint8_t v___x_311_; uint8_t v___x_312_; 
v___x_311_ = 2;
v___x_312_ = l_Lean_instBEqMessageSeverity_beq(v_severity_212_, v___x_311_);
if (v___x_312_ == 0)
{
goto v___jp_304_;
}
else
{
uint8_t v___x_313_; 
lean_inc_ref(v_msgData_211_);
v___x_313_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_211_);
if (v___x_313_ == 0)
{
goto v___jp_304_;
}
else
{
lean_object* v___x_314_; lean_object* v___x_315_; 
lean_dec_ref(v_msgData_211_);
v___x_314_ = lean_box(0);
v___x_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
return v___x_315_;
}
}
v___jp_219_:
{
lean_object* v_currNamespace_229_; lean_object* v_openDecls_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v_env_235_; lean_object* v_nextMacroScope_236_; lean_object* v_ngen_237_; lean_object* v_auxDeclNGen_238_; lean_object* v_traceState_239_; lean_object* v_cache_240_; lean_object* v_recordedDeps_241_; lean_object* v_messages_242_; lean_object* v_infoState_243_; lean_object* v_snapshotTasks_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_255_; 
v_currNamespace_229_ = lean_ctor_get(v_toCold_227_, 4);
v_openDecls_230_ = lean_ctor_get(v_toCold_227_, 5);
lean_inc(v_openDecls_230_);
lean_inc(v_currNamespace_229_);
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v_currNamespace_229_);
lean_ctor_set(v___x_231_, 1, v_openDecls_230_);
v___x_232_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
lean_ctor_set(v___x_232_, 1, v___y_226_);
lean_inc_ref(v___y_221_);
lean_inc_ref(v___y_223_);
v___x_233_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_233_, 0, v___y_223_);
lean_ctor_set(v___x_233_, 1, v___y_225_);
lean_ctor_set(v___x_233_, 2, v___y_222_);
lean_ctor_set(v___x_233_, 3, v___y_221_);
lean_ctor_set(v___x_233_, 4, v___x_232_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*5, v___y_224_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*5 + 1, v___y_220_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*5 + 2, v_isSilent_213_);
v___x_234_ = lean_st_ref_take(v___y_228_);
v_env_235_ = lean_ctor_get(v___x_234_, 0);
v_nextMacroScope_236_ = lean_ctor_get(v___x_234_, 1);
v_ngen_237_ = lean_ctor_get(v___x_234_, 2);
v_auxDeclNGen_238_ = lean_ctor_get(v___x_234_, 3);
v_traceState_239_ = lean_ctor_get(v___x_234_, 4);
v_cache_240_ = lean_ctor_get(v___x_234_, 5);
v_recordedDeps_241_ = lean_ctor_get(v___x_234_, 6);
v_messages_242_ = lean_ctor_get(v___x_234_, 7);
v_infoState_243_ = lean_ctor_get(v___x_234_, 8);
v_snapshotTasks_244_ = lean_ctor_get(v___x_234_, 9);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_255_ == 0)
{
v___x_246_ = v___x_234_;
v_isShared_247_ = v_isSharedCheck_255_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_snapshotTasks_244_);
lean_inc(v_infoState_243_);
lean_inc(v_messages_242_);
lean_inc(v_recordedDeps_241_);
lean_inc(v_cache_240_);
lean_inc(v_traceState_239_);
lean_inc(v_auxDeclNGen_238_);
lean_inc(v_ngen_237_);
lean_inc(v_nextMacroScope_236_);
lean_inc(v_env_235_);
lean_dec(v___x_234_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_255_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_251_; 
v___x_248_ = lean_box(0);
v___x_249_ = l_Lean_MessageLog_add(v___x_233_, v_messages_242_);
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 7, v___x_249_);
v___x_251_ = v___x_246_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_env_235_);
lean_ctor_set(v_reuseFailAlloc_254_, 1, v_nextMacroScope_236_);
lean_ctor_set(v_reuseFailAlloc_254_, 2, v_ngen_237_);
lean_ctor_set(v_reuseFailAlloc_254_, 3, v_auxDeclNGen_238_);
lean_ctor_set(v_reuseFailAlloc_254_, 4, v_traceState_239_);
lean_ctor_set(v_reuseFailAlloc_254_, 5, v_cache_240_);
lean_ctor_set(v_reuseFailAlloc_254_, 6, v_recordedDeps_241_);
lean_ctor_set(v_reuseFailAlloc_254_, 7, v___x_249_);
lean_ctor_set(v_reuseFailAlloc_254_, 8, v_infoState_243_);
lean_ctor_set(v_reuseFailAlloc_254_, 9, v_snapshotTasks_244_);
v___x_251_ = v_reuseFailAlloc_254_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_st_ref_put(v___y_228_, v___x_251_);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_248_);
return v___x_253_;
}
}
}
v___jp_256_:
{
lean_object* v_fileName_265_; lean_object* v_fileMap_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_282_; 
v_fileName_265_ = lean_ctor_get(v___y_263_, 0);
v_fileMap_266_ = lean_ctor_get(v___y_263_, 1);
v___x_267_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_211_);
v___x_268_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__4(v___x_267_, v___y_214_, v___y_215_, v___y_216_, v___y_217_);
v_a_269_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_282_ == 0)
{
v___x_271_ = v___x_268_;
v_isShared_272_ = v_isSharedCheck_282_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_268_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_282_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
lean_inc_ref_n(v_fileMap_266_, 2);
v___x_273_ = l_Lean_FileMap_toPosition(v_fileMap_266_, v___y_261_);
lean_dec(v___y_261_);
v___x_274_ = l_Lean_FileMap_toPosition(v_fileMap_266_, v___y_264_);
lean_dec(v___y_264_);
v___x_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
v___x_276_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___closed__0));
if (v___y_260_ == 0)
{
lean_del_object(v___x_271_);
v___y_220_ = v___y_259_;
v___y_221_ = v___x_276_;
v___y_222_ = v___x_275_;
v___y_223_ = v_fileName_265_;
v___y_224_ = v___y_262_;
v___y_225_ = v___x_273_;
v___y_226_ = v_a_269_;
v_toCold_227_ = v___y_258_;
v___y_228_ = v___y_217_;
goto v___jp_219_;
}
else
{
uint8_t v___x_277_; 
lean_inc(v_a_269_);
lean_inc_ref(v___y_257_);
v___x_277_ = l_Lean_MessageData_hasTag(v___y_257_, v_a_269_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; lean_object* v___x_280_; 
lean_dec_ref_known(v___x_275_, 1);
lean_dec_ref(v___x_273_);
lean_dec(v_a_269_);
v___x_278_ = lean_box(0);
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 0, v___x_278_);
v___x_280_ = v___x_271_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___x_278_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
else
{
lean_del_object(v___x_271_);
v___y_220_ = v___y_259_;
v___y_221_ = v___x_276_;
v___y_222_ = v___x_275_;
v___y_223_ = v_fileName_265_;
v___y_224_ = v___y_262_;
v___y_225_ = v___x_273_;
v___y_226_ = v_a_269_;
v_toCold_227_ = v___y_258_;
v___y_228_ = v___y_217_;
goto v___jp_219_;
}
}
}
}
v___jp_283_:
{
lean_object* v___x_291_; 
v___x_291_ = l_Lean_Syntax_getTailPos_x3f(v___y_285_, v___y_286_);
lean_dec(v___y_285_);
if (lean_obj_tag(v___x_291_) == 0)
{
lean_inc(v___y_290_);
v___y_257_ = v___y_287_;
v___y_258_ = v___y_288_;
v___y_259_ = v___y_289_;
v___y_260_ = v___y_284_;
v___y_261_ = v___y_290_;
v___y_262_ = v___y_286_;
v___y_263_ = v___y_288_;
v___y_264_ = v___y_290_;
goto v___jp_256_;
}
else
{
lean_object* v_val_292_; 
v_val_292_ = lean_ctor_get(v___x_291_, 0);
lean_inc(v_val_292_);
lean_dec_ref_known(v___x_291_, 1);
v___y_257_ = v___y_287_;
v___y_258_ = v___y_288_;
v___y_259_ = v___y_289_;
v___y_260_ = v___y_284_;
v___y_261_ = v___y_290_;
v___y_262_ = v___y_286_;
v___y_263_ = v___y_288_;
v___y_264_ = v_val_292_;
goto v___jp_256_;
}
}
v___jp_293_:
{
lean_object* v_toCold_295_; lean_object* v_ref_296_; uint8_t v_suppressElabErrors_297_; lean_object* v_ref_298_; uint8_t v___x_299_; lean_object* v___f_300_; lean_object* v___x_301_; 
v_toCold_295_ = lean_ctor_get(v___y_216_, 0);
v_ref_296_ = lean_ctor_get(v___y_216_, 2);
v_suppressElabErrors_297_ = lean_ctor_get_uint8(v___y_216_, sizeof(void*)*3 + 2);
v_ref_298_ = l_Lean_replaceRef(v_ref_210_, v_ref_296_);
v___x_299_ = 0;
v___f_300_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___closed__1));
v___x_301_ = l_Lean_Syntax_getPos_x3f(v_ref_298_, v___x_299_);
if (lean_obj_tag(v___x_301_) == 0)
{
lean_object* v___x_302_; 
v___x_302_ = lean_unsigned_to_nat(0u);
v___y_284_ = v_suppressElabErrors_297_;
v___y_285_ = v_ref_298_;
v___y_286_ = v___x_299_;
v___y_287_ = v___f_300_;
v___y_288_ = v_toCold_295_;
v___y_289_ = v___y_294_;
v___y_290_ = v___x_302_;
goto v___jp_283_;
}
else
{
lean_object* v_val_303_; 
v_val_303_ = lean_ctor_get(v___x_301_, 0);
lean_inc(v_val_303_);
lean_dec_ref_known(v___x_301_, 1);
v___y_284_ = v_suppressElabErrors_297_;
v___y_285_ = v_ref_298_;
v___y_286_ = v___x_299_;
v___y_287_ = v___f_300_;
v___y_288_ = v_toCold_295_;
v___y_289_ = v___y_294_;
v___y_290_ = v_val_303_;
goto v___jp_283_;
}
}
v___jp_304_:
{
uint8_t v___x_305_; uint8_t v___x_306_; 
v___x_305_ = 1;
v___x_306_ = l_Lean_instBEqMessageSeverity_beq(v_severity_212_, v___x_305_);
if (v___x_306_ == 0)
{
v___y_294_ = v_severity_212_;
goto v___jp_293_;
}
else
{
lean_object* v___x_307_; lean_object* v___x_308_; uint8_t v___x_309_; 
v___x_307_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_216_);
v___x_308_ = l_Lean_warningAsError;
v___x_309_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__5(v___x_307_, v___x_308_);
lean_dec_ref(v___x_307_);
if (v___x_309_ == 0)
{
v___y_294_ = v_severity_212_;
goto v___jp_293_;
}
else
{
uint8_t v___x_310_; 
v___x_310_ = 2;
v___y_294_ = v___x_310_;
goto v___jp_293_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___boxed(lean_object* v_ref_316_, lean_object* v_msgData_317_, lean_object* v_severity_318_, lean_object* v_isSilent_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
uint8_t v_severity_boxed_325_; uint8_t v_isSilent_boxed_326_; lean_object* v_res_327_; 
v_severity_boxed_325_ = lean_unbox(v_severity_318_);
v_isSilent_boxed_326_ = lean_unbox(v_isSilent_319_);
v_res_327_ = l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg(v_ref_316_, v_msgData_317_, v_severity_boxed_325_, v_isSilent_boxed_326_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
lean_dec(v___y_321_);
lean_dec_ref(v___y_320_);
lean_dec(v_ref_316_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1(lean_object* v_msgData_328_, uint8_t v_severity_329_, uint8_t v_isSilent_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_){
_start:
{
lean_object* v_ref_340_; lean_object* v___x_341_; 
v_ref_340_ = lean_ctor_get(v___y_337_, 2);
v___x_341_ = l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg(v_ref_340_, v_msgData_328_, v_severity_329_, v_isSilent_330_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1___boxed(lean_object* v_msgData_342_, lean_object* v_severity_343_, lean_object* v_isSilent_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
uint8_t v_severity_boxed_354_; uint8_t v_isSilent_boxed_355_; lean_object* v_res_356_; 
v_severity_boxed_354_ = lean_unbox(v_severity_343_);
v_isSilent_boxed_355_ = lean_unbox(v_isSilent_344_);
v_res_356_ = l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1(v_msgData_342_, v_severity_boxed_354_, v_isSilent_boxed_355_, v___y_345_, v___y_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
lean_dec(v___y_350_);
lean_dec_ref(v___y_349_);
lean_dec(v___y_348_);
lean_dec_ref(v___y_347_);
lean_dec(v___y_346_);
lean_dec_ref(v___y_345_);
return v_res_356_;
}
}
static lean_object* _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__1));
v___x_361_ = l_Lean_MessageData_ofFormat(v___x_360_);
return v___x_361_;
}
}
static lean_object* _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__3(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_362_ = lean_unsigned_to_nat(32u);
v___x_363_ = lean_mk_empty_array_with_capacity(v___x_362_);
v___x_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
return v___x_364_;
}
}
static lean_object* _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8(void){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__7));
v___x_371_ = l_Lean_MessageData_ofFormat(v___x_370_);
return v___x_371_;
}
}
static lean_object* _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__12(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_375_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__11));
v___x_376_ = lean_unsigned_to_nat(39u);
v___x_377_ = lean_unsigned_to_nat(52u);
v___x_378_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__10));
v___x_379_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__9));
v___x_380_ = l_mkPanicMessageWithDecl(v___x_379_, v___x_378_, v___x_377_, v___x_376_, v___x_375_);
return v___x_380_;
}
}
static lean_object* _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__13(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_381_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__11));
v___x_382_ = lean_unsigned_to_nat(37u);
v___x_383_ = lean_unsigned_to_nat(44u);
v___x_384_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__10));
v___x_385_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__9));
v___x_386_ = l_mkPanicMessageWithDecl(v___x_385_, v___x_384_, v___x_383_, v___x_382_, v___x_381_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0(lean_object* v___x_387_, lean_object* v___x_388_, lean_object* v___x_389_, lean_object* v___x_390_, lean_object* v___x_391_, uint8_t v___x_392_, lean_object* v___x_393_, lean_object* v_val_394_, lean_object* v_x_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
lean_object* v___x_405_; uint8_t v___x_406_; uint8_t v___x_407_; lean_object* v___x_408_; 
v___x_405_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2);
v___x_406_ = 2;
v___x_407_ = 0;
v___x_408_ = l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1(v___x_405_, v___x_406_, v___x_407_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_object* v_tacSnap_x3f_409_; 
lean_dec_ref_known(v___x_408_, 1);
v_tacSnap_x3f_409_ = lean_ctor_get(v___y_398_, 6);
if (lean_obj_tag(v_tacSnap_x3f_409_) == 1)
{
lean_object* v_val_410_; lean_object* v___x_411_; 
v_val_410_ = lean_ctor_get(v_tacSnap_x3f_409_, 0);
v___x_411_ = l_Lean_Core_getMessageLog___redArg(v___y_403_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v_a_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; size_t v___x_417_; lean_object* v___x_418_; lean_object* v_new_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; uint64_t v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v_toCold_435_; lean_object* v_cancelTk_x3f_436_; 
v_a_412_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_a_412_);
lean_dec_ref_known(v___x_411_, 1);
v___x_413_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_a_412_);
v___x_414_ = lean_unsigned_to_nat(32u);
v___x_415_ = lean_mk_empty_array_with_capacity(v___x_414_);
v___x_416_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__3, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__3_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__3);
v___x_417_ = ((size_t)5ULL);
lean_inc_n(v___x_387_, 2);
v___x_418_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_418_, 0, v___x_416_);
lean_ctor_set(v___x_418_, 1, v___x_415_);
lean_ctor_set(v___x_418_, 2, v___x_387_);
lean_ctor_set(v___x_418_, 3, v___x_387_);
lean_ctor_set_usize(v___x_418_, 4, v___x_417_);
v_new_419_ = lean_ctor_get(v_val_410_, 1);
v___x_420_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__4));
v___x_421_ = l_Lean_Name_mkStr5(v___x_388_, v___x_389_, v___x_390_, v___x_391_, v___x_420_);
v___x_422_ = l_Lean_Name_toString(v___x_421_, v___x_392_);
v___x_423_ = lean_box(0);
v___x_424_ = 0ULL;
v___x_425_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_425_, 0, v___x_418_);
lean_ctor_set_uint64(v___x_425_, sizeof(void*)*1, v___x_424_);
v___x_426_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_426_, 0, v___x_422_);
lean_ctor_set(v___x_426_, 1, v___x_413_);
lean_ctor_set(v___x_426_, 2, v___x_423_);
lean_ctor_set(v___x_426_, 3, v___x_425_);
lean_ctor_set_uint8(v___x_426_, sizeof(void*)*4, v___x_407_);
v___x_427_ = lean_box(0);
v___x_428_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_393_);
v___x_429_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_429_, 0, v___x_426_);
lean_ctor_set(v___x_429_, 1, v___x_427_);
lean_ctor_set(v___x_429_, 2, v___x_423_);
lean_ctor_set(v___x_429_, 3, v___x_428_);
v___x_430_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_431_, 0, v___x_429_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
v___x_432_ = lean_mk_empty_array_with_capacity(v___x_387_);
lean_dec(v___x_387_);
v___x_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_431_);
lean_ctor_set(v___x_433_, 1, v___x_432_);
v___x_434_ = lean_io_promise_resolve(v___x_433_, v_new_419_);
v_toCold_435_ = lean_ctor_get(v___y_402_, 0);
v_cancelTk_x3f_436_ = lean_ctor_get(v_toCold_435_, 10);
if (lean_obj_tag(v_cancelTk_x3f_436_) == 1)
{
lean_object* v_ref_437_; lean_object* v_val_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v_ref_437_ = lean_ctor_get(v___y_402_, 2);
v_val_438_ = lean_ctor_get(v_cancelTk_x3f_436_, 0);
v___x_439_ = lean_box(0);
v___x_440_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__2___redArg(v_val_438_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_473_; 
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_473_ == 0)
{
lean_object* v_unused_474_; 
v_unused_474_ = lean_ctor_get(v___x_440_, 0);
lean_dec(v_unused_474_);
v___x_442_ = v___x_440_;
v_isShared_443_ = v_isSharedCheck_473_;
goto v_resetjp_441_;
}
else
{
lean_dec(v___x_440_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_473_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__5));
v___x_445_ = l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3(v___x_444_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v___x_446_; lean_object* v___x_447_; 
lean_dec_ref_known(v___x_445_, 1);
lean_del_object(v___x_442_);
v___x_446_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8);
v___x_447_ = l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1(v___x_446_, v___x_406_, v___x_407_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_);
if (lean_obj_tag(v___x_447_) == 0)
{
lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_457_; 
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_457_ == 0)
{
lean_object* v_unused_458_; 
v_unused_458_ = lean_ctor_get(v___x_447_, 0);
lean_dec(v_unused_458_);
v___x_449_ = v___x_447_;
v_isShared_450_ = v_isSharedCheck_457_;
goto v_resetjp_448_;
}
else
{
lean_dec(v___x_447_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_457_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_451_; uint8_t v___x_452_; 
v___x_451_ = lean_io_promise_resolve(v___x_439_, v_val_394_);
v___x_452_ = l_IO_CancelToken_isSet(v_val_438_);
if (v___x_452_ == 0)
{
lean_object* v___x_454_; 
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 0, v___x_439_);
v___x_454_ = v___x_449_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_439_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
else
{
lean_object* v___x_456_; 
lean_del_object(v___x_449_);
v___x_456_ = l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg();
return v___x_456_;
}
}
}
else
{
return v___x_447_;
}
}
else
{
lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_472_; 
v_a_459_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_472_ == 0)
{
v___x_461_ = v___x_445_;
v_isShared_462_ = v_isSharedCheck_472_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v___x_445_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_472_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_463_; lean_object* v___x_465_; 
v___x_463_ = lean_io_error_to_string(v_a_459_);
if (v_isShared_443_ == 0)
{
lean_ctor_set_tag(v___x_442_, 3);
lean_ctor_set(v___x_442_, 0, v___x_463_);
v___x_465_ = v___x_442_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_463_);
v___x_465_ = v_reuseFailAlloc_471_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_469_; 
v___x_466_ = l_Lean_MessageData_ofFormat(v___x_465_);
lean_inc(v_ref_437_);
v___x_467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_467_, 0, v_ref_437_);
lean_ctor_set(v___x_467_, 1, v___x_466_);
if (v_isShared_462_ == 0)
{
lean_ctor_set(v___x_461_, 0, v___x_467_);
v___x_469_ = v___x_461_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_467_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
}
}
}
else
{
return v___x_440_;
}
}
else
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__12, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__12_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__12);
v___x_476_ = l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5(v___x_475_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_);
return v___x_476_;
}
}
else
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_484_; 
lean_dec_ref(v___x_393_);
lean_dec_ref(v___x_391_);
lean_dec_ref(v___x_390_);
lean_dec_ref(v___x_389_);
lean_dec_ref(v___x_388_);
lean_dec(v___x_387_);
v_a_477_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_484_ == 0)
{
v___x_479_ = v___x_411_;
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_411_);
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
else
{
lean_object* v___x_485_; lean_object* v___x_486_; 
lean_dec_ref(v___x_393_);
lean_dec_ref(v___x_391_);
lean_dec_ref(v___x_390_);
lean_dec_ref(v___x_389_);
lean_dec_ref(v___x_388_);
lean_dec(v___x_387_);
v___x_485_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__13, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__13_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__13);
v___x_486_ = l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5(v___x_485_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_);
return v___x_486_;
}
}
else
{
lean_dec_ref(v___x_393_);
lean_dec_ref(v___x_391_);
lean_dec_ref(v___x_390_);
lean_dec_ref(v___x_389_);
lean_dec_ref(v___x_388_);
lean_dec(v___x_387_);
return v___x_408_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___boxed(lean_object** _args){
lean_object* v___x_487_ = _args[0];
lean_object* v___x_488_ = _args[1];
lean_object* v___x_489_ = _args[2];
lean_object* v___x_490_ = _args[3];
lean_object* v___x_491_ = _args[4];
lean_object* v___x_492_ = _args[5];
lean_object* v___x_493_ = _args[6];
lean_object* v_val_494_ = _args[7];
lean_object* v_x_495_ = _args[8];
lean_object* v___y_496_ = _args[9];
lean_object* v___y_497_ = _args[10];
lean_object* v___y_498_ = _args[11];
lean_object* v___y_499_ = _args[12];
lean_object* v___y_500_ = _args[13];
lean_object* v___y_501_ = _args[14];
lean_object* v___y_502_ = _args[15];
lean_object* v___y_503_ = _args[16];
lean_object* v___y_504_ = _args[17];
_start:
{
uint8_t v___x_14927__boxed_505_; lean_object* v_res_506_; 
v___x_14927__boxed_505_ = lean_unbox(v___x_492_);
v_res_506_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0(v___x_487_, v___x_488_, v___x_489_, v___x_490_, v___x_491_, v___x_14927__boxed_505_, v___x_493_, v_val_494_, v_x_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
lean_dec(v_val_494_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1(lean_object* v_x_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_518_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0));
v___x_519_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1));
v___x_520_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2));
v___x_521_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3));
v___x_522_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__5));
v___x_523_ = l_Lean_Syntax_isOfKind(v_x_508_, v___x_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; 
v___x_524_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_524_;
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___f_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___y_533_; 
v___x_525_ = l_Lean_Elab_Tactic_instInhabitedTacticFinishedSnapshot;
v___x_526_ = lean_unsigned_to_nat(0u);
v___x_527_ = lean_io_promise_new();
v___x_528_ = lean_box(v___x_523_);
lean_inc(v___x_527_);
v___f_529_ = lean_alloc_closure((void*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___boxed), 18, 8);
lean_closure_set(v___f_529_, 0, v___x_526_);
lean_closure_set(v___f_529_, 1, v___x_518_);
lean_closure_set(v___f_529_, 2, v___x_519_);
lean_closure_set(v___f_529_, 3, v___x_520_);
lean_closure_set(v___f_529_, 4, v___x_521_);
lean_closure_set(v___f_529_, 5, v___x_528_);
lean_closure_set(v___f_529_, 6, v___x_525_);
lean_closure_set(v___f_529_, 7, v___x_527_);
v___x_530_ = l_Lean_Server_Test_Cancel_onceRef;
v___x_531_ = lean_st_ref_take(v___x_530_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v___x_549_; 
v___x_549_ = l_IO_Promise_result_x21___redArg(v___x_527_);
lean_dec(v___x_527_);
v___y_533_ = v___x_549_;
goto v___jp_532_;
}
else
{
lean_object* v_val_550_; 
lean_dec(v___x_527_);
v_val_550_ = lean_ctor_get(v___x_531_, 0);
lean_inc(v_val_550_);
v___y_533_ = v_val_550_;
goto v___jp_532_;
}
v___jp_532_:
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_534_, 0, v___y_533_);
v___x_535_ = lean_st_ref_put(v___x_530_, v___x_534_);
if (lean_obj_tag(v___x_531_) == 1)
{
lean_object* v_val_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_545_; 
lean_dec_ref(v___f_529_);
v_val_536_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_545_ == 0)
{
v___x_538_ = v___x_531_;
v_isShared_539_ = v_isSharedCheck_545_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_val_536_);
lean_dec(v___x_531_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_545_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
v___x_540_ = lean_io_wait(v_val_536_);
lean_dec(v___x_540_);
v___x_541_ = lean_box(0);
if (v_isShared_539_ == 0)
{
lean_ctor_set_tag(v___x_538_, 0);
lean_ctor_set(v___x_538_, 0, v___x_541_);
v___x_543_ = v___x_538_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
else
{
lean_object* v___x_546_; lean_object* v___x_9357__overap_547_; lean_object* v___x_548_; 
lean_dec(v___x_531_);
v___x_546_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___closed__0));
v___x_9357__overap_547_ = lean_dbg_trace(v___x_546_, v___f_529_);
lean_inc(v_a_516_);
lean_inc_ref(v_a_515_);
lean_inc(v_a_514_);
lean_inc_ref(v_a_513_);
lean_inc(v_a_512_);
lean_inc_ref(v_a_511_);
lean_inc(v_a_510_);
lean_inc_ref(v_a_509_);
v___x_548_ = lean_apply_9(v___x_9357__overap_547_, v_a_509_, v_a_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_, v_a_515_, v_a_516_, lean_box(0));
return v___x_548_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___boxed(lean_object* v_x_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1(v_x_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_);
lean_dec(v_a_559_);
lean_dec_ref(v_a_558_);
lean_dec(v_a_557_);
lean_dec_ref(v_a_556_);
lean_dec(v_a_555_);
lean_dec_ref(v_a_554_);
lean_dec(v_a_553_);
lean_dec_ref(v_a_552_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__2(lean_object* v_val_562_, lean_object* v_inst_563_, lean_object* v_a_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__2___redArg(v_val_562_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__2___boxed(lean_object* v_val_575_, lean_object* v_inst_576_, lean_object* v_a_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__2(v_val_575_, v_inst_576_, v_a_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
lean_dec(v___y_583_);
lean_dec_ref(v___y_582_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
lean_dec_ref(v_val_575_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1(lean_object* v_ref_588_, lean_object* v_msgData_589_, uint8_t v_severity_590_, uint8_t v_isSilent_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg(v_ref_588_, v_msgData_589_, v_severity_590_, v_isSilent_591_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___boxed(lean_object* v_ref_602_, lean_object* v_msgData_603_, lean_object* v_severity_604_, lean_object* v_isSilent_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_){
_start:
{
uint8_t v_severity_boxed_615_; uint8_t v_isSilent_boxed_616_; lean_object* v_res_617_; 
v_severity_boxed_615_ = lean_unbox(v_severity_604_);
v_isSilent_boxed_616_ = lean_unbox(v_isSilent_605_);
v_res_617_ = l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1(v_ref_602_, v_msgData_603_, v_severity_boxed_615_, v_isSilent_boxed_616_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v___y_611_);
lean_dec_ref(v___y_610_);
lean_dec(v___y_609_);
lean_dec_ref(v___y_608_);
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec(v_ref_602_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_2861725383____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_619_ = lean_box(0);
v___x_620_ = lean_st_mk_ref(v___x_619_);
v___x_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_2861725383____hygCtx___hyg_2____boxed(lean_object* v_a_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_2861725383____hygCtx___hyg_2_();
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_getUnblockedCancelTk(){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v_fst_629_; lean_object* v_snd_630_; 
v___x_625_ = l_IO_CancelToken_new();
v___x_626_ = l_Lean_Server_Test_Cancel_unblockedCancelTkRef;
v___x_627_ = lean_st_ref_take(v___x_626_);
if (lean_obj_tag(v___x_627_) == 0)
{
lean_object* v___x_632_; 
lean_inc_ref(v___x_625_);
v___x_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_632_, 0, v___x_625_);
v_fst_629_ = v___x_625_;
v_snd_630_ = v___x_632_;
goto v___jp_628_;
}
else
{
lean_object* v_val_633_; 
lean_dec_ref(v___x_625_);
v_val_633_ = lean_ctor_get(v___x_627_, 0);
lean_inc(v_val_633_);
v_fst_629_ = v_val_633_;
v_snd_630_ = v___x_627_;
goto v___jp_628_;
}
v___jp_628_:
{
lean_object* v___x_631_; 
v___x_631_ = lean_st_ref_put(v___x_626_, v_snd_630_);
return v_fst_629_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_getUnblockedCancelTk___boxed(lean_object* v_a_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_getUnblockedCancelTk();
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1_spec__0___redArg(){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_653_ = lean_box(0);
v___x_654_ = l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_getUnblockedCancelTk();
v___x_655_ = l_IO_CancelToken_isSet(v___x_654_);
lean_dec_ref(v___x_654_);
if (v___x_655_ == 0)
{
uint32_t v___x_656_; lean_object* v___x_657_; 
v___x_656_ = 30;
v___x_657_ = l_IO_sleep(v___x_656_);
goto _start;
}
else
{
lean_object* v___x_659_; 
v___x_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_659_, 0, v___x_653_);
return v___x_659_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1_spec__0___redArg___boxed(lean_object* v___y_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1_spec__0___redArg();
return v_res_661_;
}
}
static lean_object* _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__2(void){
_start:
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_664_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__11));
v___x_665_ = lean_unsigned_to_nat(37u);
v___x_666_ = lean_unsigned_to_nat(89u);
v___x_667_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__1));
v___x_668_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__9));
v___x_669_ = l_mkPanicMessageWithDecl(v___x_668_, v___x_667_, v___x_666_, v___x_665_, v___x_664_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0(lean_object* v___x_670_, lean_object* v___x_671_, lean_object* v___x_672_, lean_object* v___x_673_, lean_object* v___x_674_, uint8_t v___x_675_, lean_object* v___x_676_, lean_object* v_val_677_, lean_object* v_x_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_){
_start:
{
lean_object* v___x_688_; uint8_t v___x_689_; uint8_t v___x_690_; lean_object* v___x_691_; 
v___x_688_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2);
v___x_689_ = 2;
v___x_690_ = 0;
v___x_691_ = l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1(v___x_688_, v___x_689_, v___x_690_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
if (lean_obj_tag(v___x_691_) == 0)
{
lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_761_; 
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_761_ == 0)
{
lean_object* v_unused_762_; 
v_unused_762_ = lean_ctor_get(v___x_691_, 0);
lean_dec(v_unused_762_);
v___x_693_ = v___x_691_;
v_isShared_694_ = v_isSharedCheck_761_;
goto v_resetjp_692_;
}
else
{
lean_dec(v___x_691_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_761_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v_tacSnap_x3f_695_; 
v_tacSnap_x3f_695_ = lean_ctor_get(v___y_681_, 6);
if (lean_obj_tag(v_tacSnap_x3f_695_) == 1)
{
lean_object* v_val_696_; lean_object* v___x_697_; 
v_val_696_ = lean_ctor_get(v_tacSnap_x3f_695_, 0);
v___x_697_ = l_Lean_Core_getMessageLog___redArg(v___y_686_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_a_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; size_t v___x_703_; lean_object* v___x_704_; lean_object* v_new_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; uint64_t v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v_a_698_ = lean_ctor_get(v___x_697_, 0);
lean_inc(v_a_698_);
lean_dec_ref_known(v___x_697_, 1);
v___x_699_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_a_698_);
v___x_700_ = lean_unsigned_to_nat(32u);
v___x_701_ = lean_mk_empty_array_with_capacity(v___x_700_);
v___x_702_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__3, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__3_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__3);
v___x_703_ = ((size_t)5ULL);
lean_inc_n(v___x_670_, 2);
v___x_704_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_704_, 0, v___x_702_);
lean_ctor_set(v___x_704_, 1, v___x_701_);
lean_ctor_set(v___x_704_, 2, v___x_670_);
lean_ctor_set(v___x_704_, 3, v___x_670_);
lean_ctor_set_usize(v___x_704_, 4, v___x_703_);
v_new_705_ = lean_ctor_get(v_val_696_, 1);
v___x_706_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__0));
v___x_707_ = l_Lean_Name_mkStr5(v___x_671_, v___x_672_, v___x_673_, v___x_674_, v___x_706_);
v___x_708_ = l_Lean_Name_toString(v___x_707_, v___x_675_);
v___x_709_ = lean_box(0);
v___x_710_ = 0ULL;
v___x_711_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_711_, 0, v___x_704_);
lean_ctor_set_uint64(v___x_711_, sizeof(void*)*1, v___x_710_);
v___x_712_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_712_, 0, v___x_708_);
lean_ctor_set(v___x_712_, 1, v___x_699_);
lean_ctor_set(v___x_712_, 2, v___x_709_);
lean_ctor_set(v___x_712_, 3, v___x_711_);
lean_ctor_set_uint8(v___x_712_, sizeof(void*)*4, v___x_690_);
v___x_713_ = lean_box(0);
v___x_714_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_676_);
v___x_715_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_715_, 0, v___x_712_);
lean_ctor_set(v___x_715_, 1, v___x_713_);
lean_ctor_set(v___x_715_, 2, v___x_709_);
lean_ctor_set(v___x_715_, 3, v___x_714_);
v___x_716_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_715_);
lean_ctor_set(v___x_717_, 1, v___x_716_);
v___x_718_ = lean_mk_empty_array_with_capacity(v___x_670_);
lean_dec(v___x_670_);
v___x_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_719_, 0, v___x_717_);
lean_ctor_set(v___x_719_, 1, v___x_718_);
v___x_720_ = lean_io_promise_resolve(v___x_719_, v_new_705_);
v___x_721_ = lean_box(0);
v___x_722_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1_spec__0___redArg();
if (lean_obj_tag(v___x_722_) == 0)
{
lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_749_; 
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_749_ == 0)
{
lean_object* v_unused_750_; 
v_unused_750_ = lean_ctor_get(v___x_722_, 0);
lean_dec(v_unused_750_);
v___x_724_ = v___x_722_;
v_isShared_725_ = v_isSharedCheck_749_;
goto v_resetjp_723_;
}
else
{
lean_dec(v___x_722_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_749_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
uint8_t v___x_726_; 
v___x_726_ = l_IO_CancelToken_isSet(v_val_677_);
if (v___x_726_ == 0)
{
lean_object* v___x_728_; 
lean_del_object(v___x_693_);
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 0, v___x_721_);
v___x_728_ = v___x_724_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_721_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
else
{
lean_object* v_ref_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
lean_del_object(v___x_724_);
v_ref_730_ = lean_ctor_get(v___y_685_, 2);
v___x_731_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__5));
v___x_732_ = l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3(v___x_731_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v___x_733_; lean_object* v___x_734_; 
lean_dec_ref_known(v___x_732_, 1);
lean_del_object(v___x_693_);
v___x_733_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8);
v___x_734_ = l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1(v___x_733_, v___x_689_, v___x_690_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
return v___x_734_;
}
else
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_748_; 
v_a_735_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_748_ == 0)
{
v___x_737_ = v___x_732_;
v_isShared_738_ = v_isSharedCheck_748_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_732_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_748_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_739_; lean_object* v___x_741_; 
v___x_739_ = lean_io_error_to_string(v_a_735_);
if (v_isShared_694_ == 0)
{
lean_ctor_set_tag(v___x_693_, 3);
lean_ctor_set(v___x_693_, 0, v___x_739_);
v___x_741_ = v___x_693_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_739_);
v___x_741_ = v_reuseFailAlloc_747_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_745_; 
v___x_742_ = l_Lean_MessageData_ofFormat(v___x_741_);
lean_inc(v_ref_730_);
v___x_743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_743_, 0, v_ref_730_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
if (v_isShared_738_ == 0)
{
lean_ctor_set(v___x_737_, 0, v___x_743_);
v___x_745_ = v___x_737_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_743_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_693_);
return v___x_722_;
}
}
else
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_del_object(v___x_693_);
lean_dec_ref(v___x_676_);
lean_dec_ref(v___x_674_);
lean_dec_ref(v___x_673_);
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v___x_670_);
v_a_751_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_697_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_697_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_751_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
else
{
lean_object* v___x_759_; lean_object* v___x_760_; 
lean_del_object(v___x_693_);
lean_dec_ref(v___x_676_);
lean_dec_ref(v___x_674_);
lean_dec_ref(v___x_673_);
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v___x_670_);
v___x_759_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__2, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__2_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__2);
v___x_760_ = l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5(v___x_759_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
return v___x_760_;
}
}
}
else
{
lean_dec_ref(v___x_676_);
lean_dec_ref(v___x_674_);
lean_dec_ref(v___x_673_);
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_671_);
lean_dec(v___x_670_);
return v___x_691_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___boxed(lean_object** _args){
lean_object* v___x_763_ = _args[0];
lean_object* v___x_764_ = _args[1];
lean_object* v___x_765_ = _args[2];
lean_object* v___x_766_ = _args[3];
lean_object* v___x_767_ = _args[4];
lean_object* v___x_768_ = _args[5];
lean_object* v___x_769_ = _args[6];
lean_object* v_val_770_ = _args[7];
lean_object* v_x_771_ = _args[8];
lean_object* v___y_772_ = _args[9];
lean_object* v___y_773_ = _args[10];
lean_object* v___y_774_ = _args[11];
lean_object* v___y_775_ = _args[12];
lean_object* v___y_776_ = _args[13];
lean_object* v___y_777_ = _args[14];
lean_object* v___y_778_ = _args[15];
lean_object* v___y_779_ = _args[16];
lean_object* v___y_780_ = _args[17];
_start:
{
uint8_t v___x_6945__boxed_781_; lean_object* v_res_782_; 
v___x_6945__boxed_781_ = lean_unbox(v___x_768_);
v_res_782_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0(v___x_763_, v___x_764_, v___x_765_, v___x_766_, v___x_767_, v___x_6945__boxed_781_, v___x_769_, v_val_770_, v_x_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
lean_dec(v___y_779_);
lean_dec_ref(v___y_778_);
lean_dec(v___y_777_);
lean_dec_ref(v___y_776_);
lean_dec(v___y_775_);
lean_dec_ref(v___y_774_);
lean_dec(v___y_773_);
lean_dec_ref(v___y_772_);
lean_dec_ref(v_val_770_);
return v_res_782_;
}
}
static lean_object* _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___closed__0(void){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_783_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__11));
v___x_784_ = lean_unsigned_to_nat(39u);
v___x_785_ = lean_unsigned_to_nat(84u);
v___x_786_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___closed__1));
v___x_787_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__9));
v___x_788_ = l_mkPanicMessageWithDecl(v___x_787_, v___x_786_, v___x_785_, v___x_784_, v___x_783_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1(lean_object* v_x_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_799_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0));
v___x_800_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1));
v___x_801_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2));
v___x_802_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3));
v___x_803_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__unblock___closed__1));
v___x_804_ = l_Lean_Syntax_isOfKind(v_x_789_, v___x_803_);
if (v___x_804_ == 0)
{
lean_object* v___x_805_; 
v___x_805_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_805_;
}
else
{
lean_object* v_toCold_806_; lean_object* v_cancelTk_x3f_807_; 
v_toCold_806_ = lean_ctor_get(v_a_796_, 0);
v_cancelTk_x3f_807_ = lean_ctor_get(v_toCold_806_, 10);
if (lean_obj_tag(v_cancelTk_x3f_807_) == 1)
{
lean_object* v_val_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___f_812_; lean_object* v___x_813_; lean_object* v___x_6414__overap_814_; lean_object* v___x_815_; 
v_val_808_ = lean_ctor_get(v_cancelTk_x3f_807_, 0);
v___x_809_ = l_Lean_Elab_Tactic_instInhabitedTacticFinishedSnapshot;
v___x_810_ = lean_unsigned_to_nat(0u);
v___x_811_ = lean_box(v___x_804_);
lean_inc(v_val_808_);
v___f_812_ = lean_alloc_closure((void*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___lam__0___boxed), 18, 8);
lean_closure_set(v___f_812_, 0, v___x_810_);
lean_closure_set(v___f_812_, 1, v___x_799_);
lean_closure_set(v___f_812_, 2, v___x_800_);
lean_closure_set(v___f_812_, 3, v___x_801_);
lean_closure_set(v___f_812_, 4, v___x_802_);
lean_closure_set(v___f_812_, 5, v___x_811_);
lean_closure_set(v___f_812_, 6, v___x_809_);
lean_closure_set(v___f_812_, 7, v_val_808_);
v___x_813_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___closed__0));
v___x_6414__overap_814_ = lean_dbg_trace(v___x_813_, v___f_812_);
lean_inc(v_a_797_);
lean_inc_ref(v_a_796_);
lean_inc(v_a_795_);
lean_inc_ref(v_a_794_);
lean_inc(v_a_793_);
lean_inc_ref(v_a_792_);
lean_inc(v_a_791_);
lean_inc_ref(v_a_790_);
v___x_815_ = lean_apply_9(v___x_6414__overap_814_, v_a_790_, v_a_791_, v_a_792_, v_a_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_, lean_box(0));
return v___x_815_;
}
else
{
lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_816_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___closed__0, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___closed__0_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___closed__0);
v___x_817_ = l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5(v___x_816_, v_a_790_, v_a_791_, v_a_792_, v_a_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_);
return v___x_817_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1___boxed(lean_object* v_x_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1(v_x_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_, v_a_826_);
lean_dec(v_a_826_);
lean_dec_ref(v_a_825_);
lean_dec(v_a_824_);
lean_dec_ref(v_a_823_);
lean_dec(v_a_822_);
lean_dec_ref(v_a_821_);
lean_dec(v_a_820_);
lean_dec_ref(v_a_819_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1_spec__0(lean_object* v_inst_829_, lean_object* v_a_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_){
_start:
{
lean_object* v___x_840_; 
v___x_840_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1_spec__0___redArg();
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1_spec__0___boxed(lean_object* v_inst_841_, lean_object* v_a_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__1_spec__0(v_inst_841_, v_a_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
lean_dec(v___y_844_);
lean_dec_ref(v___y_843_);
return v_res_852_;
}
}
static lean_object* _init_l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__2(lean_object* v_msg_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_){
_start:
{
lean_object* v___x_878_; lean_object* v___x_5247__overap_879_; lean_object* v___x_880_; 
v___x_878_ = lean_obj_once(&l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__2___closed__0, &l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__2___closed__0_once, _init_l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__2___closed__0);
v___x_5247__overap_879_ = lean_panic_fn_borrowed(v___x_878_, v_msg_870_);
lean_inc(v___y_876_);
lean_inc_ref(v___y_875_);
lean_inc(v___y_874_);
lean_inc_ref(v___y_873_);
lean_inc(v___y_872_);
lean_inc_ref(v___y_871_);
v___x_880_ = lean_apply_7(v___x_5247__overap_879_, v___y_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_, lean_box(0));
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__2___boxed(lean_object* v_msg_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__2(v_msg_881_, v___y_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1_spec__1___redArg(lean_object* v_ref_890_, lean_object* v_msgData_891_, uint8_t v_severity_892_, uint8_t v_isSilent_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
lean_object* v___y_900_; uint8_t v___y_901_; uint8_t v___y_902_; lean_object* v___y_903_; lean_object* v___y_904_; lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v_toCold_907_; lean_object* v___y_908_; lean_object* v___y_937_; lean_object* v___y_938_; lean_object* v___y_939_; uint8_t v___y_940_; uint8_t v___y_941_; uint8_t v___y_942_; lean_object* v___y_943_; lean_object* v___y_944_; lean_object* v___y_964_; uint8_t v___y_965_; lean_object* v___y_966_; uint8_t v___y_967_; lean_object* v___y_968_; uint8_t v___y_969_; lean_object* v___y_970_; uint8_t v___y_974_; uint8_t v___x_991_; uint8_t v___x_992_; 
v___x_991_ = 2;
v___x_992_ = l_Lean_instBEqMessageSeverity_beq(v_severity_892_, v___x_991_);
if (v___x_992_ == 0)
{
goto v___jp_984_;
}
else
{
uint8_t v___x_993_; 
lean_inc_ref(v_msgData_891_);
v___x_993_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_891_);
if (v___x_993_ == 0)
{
goto v___jp_984_;
}
else
{
lean_object* v___x_994_; lean_object* v___x_995_; 
lean_dec_ref(v_msgData_891_);
v___x_994_ = lean_box(0);
v___x_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
return v___x_995_;
}
}
v___jp_899_:
{
lean_object* v_currNamespace_909_; lean_object* v_openDecls_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v_env_915_; lean_object* v_nextMacroScope_916_; lean_object* v_ngen_917_; lean_object* v_auxDeclNGen_918_; lean_object* v_traceState_919_; lean_object* v_cache_920_; lean_object* v_recordedDeps_921_; lean_object* v_messages_922_; lean_object* v_infoState_923_; lean_object* v_snapshotTasks_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_935_; 
v_currNamespace_909_ = lean_ctor_get(v_toCold_907_, 4);
v_openDecls_910_ = lean_ctor_get(v_toCold_907_, 5);
lean_inc(v_openDecls_910_);
lean_inc(v_currNamespace_909_);
v___x_911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_911_, 0, v_currNamespace_909_);
lean_ctor_set(v___x_911_, 1, v_openDecls_910_);
v___x_912_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
lean_ctor_set(v___x_912_, 1, v___y_903_);
lean_inc_ref(v___y_905_);
lean_inc_ref(v___y_900_);
v___x_913_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_913_, 0, v___y_900_);
lean_ctor_set(v___x_913_, 1, v___y_906_);
lean_ctor_set(v___x_913_, 2, v___y_904_);
lean_ctor_set(v___x_913_, 3, v___y_905_);
lean_ctor_set(v___x_913_, 4, v___x_912_);
lean_ctor_set_uint8(v___x_913_, sizeof(void*)*5, v___y_902_);
lean_ctor_set_uint8(v___x_913_, sizeof(void*)*5 + 1, v___y_901_);
lean_ctor_set_uint8(v___x_913_, sizeof(void*)*5 + 2, v_isSilent_893_);
v___x_914_ = lean_st_ref_take(v___y_908_);
v_env_915_ = lean_ctor_get(v___x_914_, 0);
v_nextMacroScope_916_ = lean_ctor_get(v___x_914_, 1);
v_ngen_917_ = lean_ctor_get(v___x_914_, 2);
v_auxDeclNGen_918_ = lean_ctor_get(v___x_914_, 3);
v_traceState_919_ = lean_ctor_get(v___x_914_, 4);
v_cache_920_ = lean_ctor_get(v___x_914_, 5);
v_recordedDeps_921_ = lean_ctor_get(v___x_914_, 6);
v_messages_922_ = lean_ctor_get(v___x_914_, 7);
v_infoState_923_ = lean_ctor_get(v___x_914_, 8);
v_snapshotTasks_924_ = lean_ctor_get(v___x_914_, 9);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_935_ == 0)
{
v___x_926_ = v___x_914_;
v_isShared_927_ = v_isSharedCheck_935_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_snapshotTasks_924_);
lean_inc(v_infoState_923_);
lean_inc(v_messages_922_);
lean_inc(v_recordedDeps_921_);
lean_inc(v_cache_920_);
lean_inc(v_traceState_919_);
lean_inc(v_auxDeclNGen_918_);
lean_inc(v_ngen_917_);
lean_inc(v_nextMacroScope_916_);
lean_inc(v_env_915_);
lean_dec(v___x_914_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_935_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_931_; 
v___x_928_ = lean_box(0);
v___x_929_ = l_Lean_MessageLog_add(v___x_913_, v_messages_922_);
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 7, v___x_929_);
v___x_931_ = v___x_926_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_env_915_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v_nextMacroScope_916_);
lean_ctor_set(v_reuseFailAlloc_934_, 2, v_ngen_917_);
lean_ctor_set(v_reuseFailAlloc_934_, 3, v_auxDeclNGen_918_);
lean_ctor_set(v_reuseFailAlloc_934_, 4, v_traceState_919_);
lean_ctor_set(v_reuseFailAlloc_934_, 5, v_cache_920_);
lean_ctor_set(v_reuseFailAlloc_934_, 6, v_recordedDeps_921_);
lean_ctor_set(v_reuseFailAlloc_934_, 7, v___x_929_);
lean_ctor_set(v_reuseFailAlloc_934_, 8, v_infoState_923_);
lean_ctor_set(v_reuseFailAlloc_934_, 9, v_snapshotTasks_924_);
v___x_931_ = v_reuseFailAlloc_934_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_932_ = lean_st_ref_put(v___y_908_, v___x_931_);
v___x_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_933_, 0, v___x_928_);
return v___x_933_;
}
}
}
v___jp_936_:
{
lean_object* v_fileName_945_; lean_object* v_fileMap_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_962_; 
v_fileName_945_ = lean_ctor_get(v___y_943_, 0);
v_fileMap_946_ = lean_ctor_get(v___y_943_, 1);
v___x_947_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_891_);
v___x_948_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__4(v___x_947_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
v_a_949_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_962_ == 0)
{
v___x_951_ = v___x_948_;
v_isShared_952_ = v_isSharedCheck_962_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_962_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
lean_inc_ref_n(v_fileMap_946_, 2);
v___x_953_ = l_Lean_FileMap_toPosition(v_fileMap_946_, v___y_939_);
lean_dec(v___y_939_);
v___x_954_ = l_Lean_FileMap_toPosition(v_fileMap_946_, v___y_944_);
lean_dec(v___y_944_);
v___x_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_955_, 0, v___x_954_);
v___x_956_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___closed__0));
if (v___y_942_ == 0)
{
lean_del_object(v___x_951_);
v___y_900_ = v_fileName_945_;
v___y_901_ = v___y_941_;
v___y_902_ = v___y_940_;
v___y_903_ = v_a_949_;
v___y_904_ = v___x_955_;
v___y_905_ = v___x_956_;
v___y_906_ = v___x_953_;
v_toCold_907_ = v___y_938_;
v___y_908_ = v___y_897_;
goto v___jp_899_;
}
else
{
uint8_t v___x_957_; 
lean_inc(v_a_949_);
lean_inc_ref(v___y_937_);
v___x_957_ = l_Lean_MessageData_hasTag(v___y_937_, v_a_949_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; lean_object* v___x_960_; 
lean_dec_ref_known(v___x_955_, 1);
lean_dec_ref(v___x_953_);
lean_dec(v_a_949_);
v___x_958_ = lean_box(0);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v___x_958_);
v___x_960_ = v___x_951_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_958_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
else
{
lean_del_object(v___x_951_);
v___y_900_ = v_fileName_945_;
v___y_901_ = v___y_941_;
v___y_902_ = v___y_940_;
v___y_903_ = v_a_949_;
v___y_904_ = v___x_955_;
v___y_905_ = v___x_956_;
v___y_906_ = v___x_953_;
v_toCold_907_ = v___y_938_;
v___y_908_ = v___y_897_;
goto v___jp_899_;
}
}
}
}
v___jp_963_:
{
lean_object* v___x_971_; 
v___x_971_ = l_Lean_Syntax_getTailPos_x3f(v___y_964_, v___y_965_);
lean_dec(v___y_964_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_inc(v___y_970_);
v___y_937_ = v___y_966_;
v___y_938_ = v___y_968_;
v___y_939_ = v___y_970_;
v___y_940_ = v___y_965_;
v___y_941_ = v___y_969_;
v___y_942_ = v___y_967_;
v___y_943_ = v___y_968_;
v___y_944_ = v___y_970_;
goto v___jp_936_;
}
else
{
lean_object* v_val_972_; 
v_val_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_val_972_);
lean_dec_ref_known(v___x_971_, 1);
v___y_937_ = v___y_966_;
v___y_938_ = v___y_968_;
v___y_939_ = v___y_970_;
v___y_940_ = v___y_965_;
v___y_941_ = v___y_969_;
v___y_942_ = v___y_967_;
v___y_943_ = v___y_968_;
v___y_944_ = v_val_972_;
goto v___jp_936_;
}
}
v___jp_973_:
{
lean_object* v_toCold_975_; lean_object* v_ref_976_; uint8_t v_suppressElabErrors_977_; lean_object* v_ref_978_; uint8_t v___x_979_; lean_object* v___f_980_; lean_object* v___x_981_; 
v_toCold_975_ = lean_ctor_get(v___y_896_, 0);
v_ref_976_ = lean_ctor_get(v___y_896_, 2);
v_suppressElabErrors_977_ = lean_ctor_get_uint8(v___y_896_, sizeof(void*)*3 + 2);
v_ref_978_ = l_Lean_replaceRef(v_ref_890_, v_ref_976_);
v___x_979_ = 0;
v___f_980_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___closed__1));
v___x_981_ = l_Lean_Syntax_getPos_x3f(v_ref_978_, v___x_979_);
if (lean_obj_tag(v___x_981_) == 0)
{
lean_object* v___x_982_; 
v___x_982_ = lean_unsigned_to_nat(0u);
v___y_964_ = v_ref_978_;
v___y_965_ = v___x_979_;
v___y_966_ = v___f_980_;
v___y_967_ = v_suppressElabErrors_977_;
v___y_968_ = v_toCold_975_;
v___y_969_ = v___y_974_;
v___y_970_ = v___x_982_;
goto v___jp_963_;
}
else
{
lean_object* v_val_983_; 
v_val_983_ = lean_ctor_get(v___x_981_, 0);
lean_inc(v_val_983_);
lean_dec_ref_known(v___x_981_, 1);
v___y_964_ = v_ref_978_;
v___y_965_ = v___x_979_;
v___y_966_ = v___f_980_;
v___y_967_ = v_suppressElabErrors_977_;
v___y_968_ = v_toCold_975_;
v___y_969_ = v___y_974_;
v___y_970_ = v_val_983_;
goto v___jp_963_;
}
}
v___jp_984_:
{
uint8_t v___x_985_; uint8_t v___x_986_; 
v___x_985_ = 1;
v___x_986_ = l_Lean_instBEqMessageSeverity_beq(v_severity_892_, v___x_985_);
if (v___x_986_ == 0)
{
v___y_974_ = v_severity_892_;
goto v___jp_973_;
}
else
{
lean_object* v___x_987_; lean_object* v___x_988_; uint8_t v___x_989_; 
v___x_987_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_896_);
v___x_988_ = l_Lean_warningAsError;
v___x_989_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__5(v___x_987_, v___x_988_);
lean_dec_ref(v___x_987_);
if (v___x_989_ == 0)
{
v___y_974_ = v_severity_892_;
goto v___jp_973_;
}
else
{
uint8_t v___x_990_; 
v___x_990_ = 2;
v___y_974_ = v___x_990_;
goto v___jp_973_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1_spec__1___redArg___boxed(lean_object* v_ref_996_, lean_object* v_msgData_997_, lean_object* v_severity_998_, lean_object* v_isSilent_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
uint8_t v_severity_boxed_1005_; uint8_t v_isSilent_boxed_1006_; lean_object* v_res_1007_; 
v_severity_boxed_1005_ = lean_unbox(v_severity_998_);
v_isSilent_boxed_1006_ = lean_unbox(v_isSilent_999_);
v_res_1007_ = l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1_spec__1___redArg(v_ref_996_, v_msgData_997_, v_severity_boxed_1005_, v_isSilent_boxed_1006_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
lean_dec(v_ref_996_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1(lean_object* v_msgData_1008_, uint8_t v_severity_1009_, uint8_t v_isSilent_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v_ref_1018_; lean_object* v___x_1019_; 
v_ref_1018_ = lean_ctor_get(v___y_1015_, 2);
v___x_1019_ = l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1_spec__1___redArg(v_ref_1018_, v_msgData_1008_, v_severity_1009_, v_isSilent_1010_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1___boxed(lean_object* v_msgData_1020_, lean_object* v_severity_1021_, lean_object* v_isSilent_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
uint8_t v_severity_boxed_1030_; uint8_t v_isSilent_boxed_1031_; lean_object* v_res_1032_; 
v_severity_boxed_1030_ = lean_unbox(v_severity_1021_);
v_isSilent_boxed_1031_ = lean_unbox(v_isSilent_1022_);
v_res_1032_ = l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1(v_msgData_1020_, v_severity_boxed_1030_, v_isSilent_boxed_1031_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__0___redArg(){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; uint8_t v___x_1036_; 
v___x_1034_ = lean_box(0);
v___x_1035_ = l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_getUnblockedCancelTk();
v___x_1036_ = l_IO_CancelToken_isSet(v___x_1035_);
lean_dec_ref(v___x_1035_);
if (v___x_1036_ == 0)
{
uint32_t v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = 30;
v___x_1038_ = l_IO_sleep(v___x_1037_);
goto _start;
}
else
{
lean_object* v___x_1040_; 
v___x_1040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1034_);
return v___x_1040_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__0___redArg___boxed(lean_object* v___y_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__0___redArg();
return v_res_1042_;
}
}
static lean_object* _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1044_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__11));
v___x_1045_ = lean_unsigned_to_nat(41u);
v___x_1046_ = lean_unsigned_to_nat(113u);
v___x_1047_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0___closed__0));
v___x_1048_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__9));
v___x_1049_ = l_mkPanicMessageWithDecl(v___x_1048_, v___x_1047_, v___x_1046_, v___x_1045_, v___x_1044_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0(lean_object* v_x_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
lean_object* v_toCold_1058_; lean_object* v_cancelTk_x3f_1059_; 
v_toCold_1058_ = lean_ctor_get(v___y_1055_, 0);
v_cancelTk_x3f_1059_ = lean_ctor_get(v_toCold_1058_, 10);
if (lean_obj_tag(v_cancelTk_x3f_1059_) == 1)
{
lean_object* v_ref_1060_; lean_object* v_val_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v_ref_1060_ = lean_ctor_get(v___y_1055_, 2);
v_val_1061_ = lean_ctor_get(v_cancelTk_x3f_1059_, 0);
v___x_1062_ = lean_box(0);
v___x_1063_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__0___redArg();
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1089_; 
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1063_);
if (v_isSharedCheck_1089_ == 0)
{
lean_object* v_unused_1090_; 
v_unused_1090_ = lean_ctor_get(v___x_1063_, 0);
lean_dec(v_unused_1090_);
v___x_1065_ = v___x_1063_;
v_isShared_1066_ = v_isSharedCheck_1089_;
goto v_resetjp_1064_;
}
else
{
lean_dec(v___x_1063_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1089_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
uint8_t v___x_1067_; 
v___x_1067_ = l_IO_CancelToken_isSet(v_val_1061_);
if (v___x_1067_ == 0)
{
lean_object* v___x_1069_; 
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 0, v___x_1062_);
v___x_1069_ = v___x_1065_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v___x_1062_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
else
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
lean_del_object(v___x_1065_);
v___x_1071_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__5));
v___x_1072_ = l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3(v___x_1071_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v___x_1073_; uint8_t v___x_1074_; uint8_t v___x_1075_; lean_object* v___x_1076_; 
lean_dec_ref_known(v___x_1072_, 1);
v___x_1073_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8);
v___x_1074_ = 2;
v___x_1075_ = 0;
v___x_1076_ = l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1(v___x_1073_, v___x_1074_, v___x_1075_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_);
return v___x_1076_;
}
else
{
lean_object* v_a_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1088_; 
v_a_1077_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1079_ = v___x_1072_;
v_isShared_1080_ = v_isSharedCheck_1088_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_a_1077_);
lean_dec(v___x_1072_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1088_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1086_; 
v___x_1081_ = lean_io_error_to_string(v_a_1077_);
v___x_1082_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1081_);
v___x_1083_ = l_Lean_MessageData_ofFormat(v___x_1082_);
lean_inc(v_ref_1060_);
v___x_1084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1084_, 0, v_ref_1060_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 0, v___x_1084_);
v___x_1086_ = v___x_1079_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
}
}
else
{
return v___x_1063_;
}
}
else
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0___closed__1, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0___closed__1_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0___closed__1);
v___x_1092_ = l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__2(v___x_1091_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_);
return v___x_1092_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0___boxed(lean_object* v_x_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___lam__0(v_x_1093_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1098_);
lean_dec(v___y_1097_);
lean_dec_ref(v___y_1096_);
lean_dec(v___y_1095_);
lean_dec_ref(v___y_1094_);
return v_res_1101_;
}
}
static lean_object* _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__3(void){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1110_ = lean_box(0);
v___x_1111_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_1110_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1(lean_object* v_x_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_){
_start:
{
lean_object* v___x_1122_; uint8_t v___x_1123_; 
v___x_1122_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__unblock__async___closed__1));
v___x_1123_ = l_Lean_Syntax_isOfKind(v_x_1112_, v___x_1122_);
if (v___x_1123_ == 0)
{
lean_object* v___x_1124_; 
v___x_1124_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_1124_;
}
else
{
lean_object* v___f_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___f_1125_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__0));
v___x_1126_ = l_IO_CancelToken_new();
v___x_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1126_);
v___x_1128_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__2));
v___x_1129_ = l_Lean_Name_toString(v___x_1128_, v___x_1123_);
lean_inc_ref(v___x_1127_);
v___x_1130_ = l_Lean_Elab_Term_wrapAsyncAsSnapshot___redArg(v___f_1125_, v___x_1127_, v___x_1129_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_object* v_a_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
v_a_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_a_1131_);
lean_dec_ref_known(v___x_1130_, 1);
v___x_1132_ = lean_box(0);
v___x_1133_ = lean_apply_1(v_a_1131_, v___x_1132_);
v___x_1134_ = lean_unsigned_to_nat(0u);
v___x_1135_ = lean_io_as_task(v___x_1133_, v___x_1134_);
v___x_1136_ = lean_box(0);
v___x_1137_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__3, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__3_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__3);
v___x_1138_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1136_);
lean_ctor_set(v___x_1138_, 1, v___x_1137_);
lean_ctor_set(v___x_1138_, 2, v___x_1127_);
lean_ctor_set(v___x_1138_, 3, v___x_1135_);
v___x_1139_ = l_Lean_Core_logSnapshotTask___redArg(v___x_1138_, v_a_1120_);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v___x_1140_; uint8_t v___x_1141_; uint8_t v___x_1142_; lean_object* v___x_1143_; 
lean_dec_ref_known(v___x_1139_, 1);
v___x_1140_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2);
v___x_1141_ = 2;
v___x_1142_ = 0;
v___x_1143_ = l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1(v___x_1140_, v___x_1141_, v___x_1142_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_);
return v___x_1143_;
}
else
{
return v___x_1139_;
}
}
else
{
lean_object* v_a_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1151_; 
lean_dec_ref_known(v___x_1127_, 1);
v_a_1144_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1151_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1146_ = v___x_1130_;
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_a_1144_);
lean_dec(v___x_1130_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1149_; 
if (v_isShared_1147_ == 0)
{
v___x_1149_ = v___x_1146_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_a_1144_);
v___x_1149_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
return v___x_1149_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___boxed(lean_object* v_x_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1(v_x_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_);
lean_dec(v_a_1160_);
lean_dec_ref(v_a_1159_);
lean_dec(v_a_1158_);
lean_dec_ref(v_a_1157_);
lean_dec(v_a_1156_);
lean_dec_ref(v_a_1155_);
lean_dec(v_a_1154_);
lean_dec_ref(v_a_1153_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__0(lean_object* v_inst_1163_, lean_object* v_a_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__0___redArg();
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__0___boxed(lean_object* v_inst_1173_, lean_object* v_a_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__0(v_inst_1173_, v_a_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1_spec__1(lean_object* v_ref_1183_, lean_object* v_msgData_1184_, uint8_t v_severity_1185_, uint8_t v_isSilent_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1_spec__1___redArg(v_ref_1183_, v_msgData_1184_, v_severity_1185_, v_isSilent_1186_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1_spec__1___boxed(lean_object* v_ref_1195_, lean_object* v_msgData_1196_, lean_object* v_severity_1197_, lean_object* v_isSilent_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
uint8_t v_severity_boxed_1206_; uint8_t v_isSilent_boxed_1207_; lean_object* v_res_1208_; 
v_severity_boxed_1206_ = lean_unbox(v_severity_1197_);
v_isSilent_boxed_1207_ = lean_unbox(v_isSilent_1198_);
v_res_1208_ = l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1_spec__1(v_ref_1195_, v_msgData_1196_, v_severity_boxed_1206_, v_isSilent_boxed_1207_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
lean_dec(v_ref_1195_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___lam__0(lean_object* v_x_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1235_ = l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_getUnblockedCancelTk();
v___x_1236_ = l_IO_CancelToken_set(v___x_1235_);
lean_dec_ref(v___x_1235_);
v___x_1237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1236_);
return v___x_1237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___lam__0___boxed(lean_object* v_x_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___lam__0(v_x_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_);
lean_dec(v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec_ref(v___y_1241_);
lean_dec(v___y_1240_);
lean_dec_ref(v___y_1239_);
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1(lean_object* v_x_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_){
_start:
{
lean_object* v___x_1261_; uint8_t v___x_1262_; 
v___x_1261_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticUnblock___closed__1));
v___x_1262_ = l_Lean_Syntax_isOfKind(v_x_1251_, v___x_1261_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; 
v___x_1263_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_1263_;
}
else
{
lean_object* v___f_1264_; lean_object* v___x_1265_; lean_object* v___x_707__overap_1266_; lean_object* v___x_1267_; 
v___f_1264_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___closed__0));
v___x_1265_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___closed__1));
v___x_707__overap_1266_ = lean_dbg_trace(v___x_1265_, v___f_1264_);
lean_inc(v_a_1259_);
lean_inc_ref(v_a_1258_);
lean_inc(v_a_1257_);
lean_inc_ref(v_a_1256_);
lean_inc(v_a_1255_);
lean_inc_ref(v_a_1254_);
lean_inc(v_a_1253_);
lean_inc_ref(v_a_1252_);
v___x_1267_ = lean_apply_9(v___x_707__overap_1266_, v_a_1252_, v_a_1253_, v_a_1254_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_, lean_box(0));
return v___x_1267_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1___boxed(lean_object* v_x_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_){
_start:
{
lean_object* v_res_1278_; 
v_res_1278_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticUnblock__1(v_x_1268_, v_a_1269_, v_a_1270_, v_a_1271_, v_a_1272_, v_a_1273_, v_a_1274_, v_a_1275_, v_a_1276_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec(v_a_1274_);
lean_dec_ref(v_a_1273_);
lean_dec(v_a_1272_);
lean_dec_ref(v_a_1271_);
lean_dec(v_a_1270_);
lean_dec_ref(v_a_1269_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__0(lean_object* v_x_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_){
_start:
{
lean_object* v___x_1305_; uint8_t v___x_1306_; uint8_t v___x_1307_; lean_object* v___x_1308_; 
v___x_1305_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2);
v___x_1306_ = 2;
v___x_1307_ = 0;
v___x_1308_ = l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1(v___x_1305_, v___x_1306_, v___x_1307_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__0___boxed(lean_object* v_x_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
lean_object* v_res_1319_; 
v_res_1319_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__0(v_x_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_);
lean_dec(v___y_1317_);
lean_dec_ref(v___y_1316_);
lean_dec(v___y_1315_);
lean_dec_ref(v___y_1314_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1_spec__0___redArg(lean_object* v_val_1320_){
_start:
{
lean_object* v___x_1322_; uint8_t v___x_1323_; 
v___x_1322_ = lean_box(0);
v___x_1323_ = l_IO_CancelToken_isSet(v_val_1320_);
if (v___x_1323_ == 0)
{
uint32_t v___x_1324_; lean_object* v___x_1325_; 
v___x_1324_ = 30;
v___x_1325_ = l_IO_sleep(v___x_1324_);
goto _start;
}
else
{
lean_object* v___x_1327_; 
v___x_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1322_);
return v___x_1327_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1_spec__0___redArg___boxed(lean_object* v_val_1328_, lean_object* v___y_1329_){
_start:
{
lean_object* v_res_1330_; 
v_res_1330_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1_spec__0___redArg(v_val_1328_);
lean_dec_ref(v_val_1328_);
return v_res_1330_;
}
}
static lean_object* _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1332_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__11));
v___x_1333_ = lean_unsigned_to_nat(41u);
v___x_1334_ = lean_unsigned_to_nat(147u);
v___x_1335_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1___closed__0));
v___x_1336_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__9));
v___x_1337_ = l_mkPanicMessageWithDecl(v___x_1336_, v___x_1335_, v___x_1334_, v___x_1333_, v___x_1332_);
return v___x_1337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1(lean_object* v_val_1338_, lean_object* v_x_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v_toCold_1347_; lean_object* v_cancelTk_x3f_1348_; 
v_toCold_1347_ = lean_ctor_get(v___y_1344_, 0);
v_cancelTk_x3f_1348_ = lean_ctor_get(v_toCold_1347_, 10);
if (lean_obj_tag(v_cancelTk_x3f_1348_) == 1)
{
lean_object* v_ref_1349_; lean_object* v_val_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v_ref_1349_ = lean_ctor_get(v___y_1344_, 2);
v_val_1350_ = lean_ctor_get(v_cancelTk_x3f_1348_, 0);
v___x_1351_ = lean_box(0);
v___x_1352_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1_spec__0___redArg(v_val_1350_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1387_; 
v_isSharedCheck_1387_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1387_ == 0)
{
lean_object* v_unused_1388_; 
v_unused_1388_ = lean_ctor_get(v___x_1352_, 0);
lean_dec(v_unused_1388_);
v___x_1354_ = v___x_1352_;
v_isShared_1355_ = v_isSharedCheck_1387_;
goto v_resetjp_1353_;
}
else
{
lean_dec(v___x_1352_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1387_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__5));
v___x_1357_ = l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3(v___x_1356_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v___x_1358_; uint8_t v___x_1359_; uint8_t v___x_1360_; lean_object* v___x_1361_; 
lean_dec_ref_known(v___x_1357_, 1);
lean_del_object(v___x_1354_);
v___x_1358_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8);
v___x_1359_ = 2;
v___x_1360_ = 0;
v___x_1361_ = l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1(v___x_1358_, v___x_1359_, v___x_1360_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1371_; 
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1361_);
if (v_isSharedCheck_1371_ == 0)
{
lean_object* v_unused_1372_; 
v_unused_1372_ = lean_ctor_get(v___x_1361_, 0);
lean_dec(v_unused_1372_);
v___x_1363_ = v___x_1361_;
v_isShared_1364_ = v_isSharedCheck_1371_;
goto v_resetjp_1362_;
}
else
{
lean_dec(v___x_1361_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1371_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1365_; uint8_t v___x_1366_; 
v___x_1365_ = lean_io_promise_resolve(v___x_1351_, v_val_1338_);
v___x_1366_ = l_IO_CancelToken_isSet(v_val_1350_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1368_; 
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 0, v___x_1351_);
v___x_1368_ = v___x_1363_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v___x_1351_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
else
{
lean_object* v___x_1370_; 
lean_del_object(v___x_1363_);
v___x_1370_ = l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg();
return v___x_1370_;
}
}
}
else
{
return v___x_1361_;
}
}
else
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1386_; 
v_a_1373_ = lean_ctor_get(v___x_1357_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1375_ = v___x_1357_;
v_isShared_1376_ = v_isSharedCheck_1386_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1357_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1386_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; lean_object* v___x_1379_; 
v___x_1377_ = lean_io_error_to_string(v_a_1373_);
if (v_isShared_1355_ == 0)
{
lean_ctor_set_tag(v___x_1354_, 3);
lean_ctor_set(v___x_1354_, 0, v___x_1377_);
v___x_1379_ = v___x_1354_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1377_);
v___x_1379_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v___x_1380_ = l_Lean_MessageData_ofFormat(v___x_1379_);
lean_inc(v_ref_1349_);
v___x_1381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1381_, 0, v_ref_1349_);
lean_ctor_set(v___x_1381_, 1, v___x_1380_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1381_);
v___x_1383_ = v___x_1375_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1381_);
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
else
{
return v___x_1352_;
}
}
else
{
lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1389_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1___closed__1, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1___closed__1_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1___closed__1);
v___x_1390_ = l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__2(v___x_1389_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
return v___x_1390_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1___boxed(lean_object* v_val_1391_, lean_object* v_x_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_){
_start:
{
lean_object* v_res_1400_; 
v_res_1400_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1(v_val_1391_, v_x_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec(v_val_1391_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1(lean_object* v_x_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_){
_start:
{
lean_object* v___x_1419_; uint8_t v___x_1420_; 
v___x_1419_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once__async___closed__1));
v___x_1420_ = l_Lean_Syntax_isOfKind(v_x_1409_, v___x_1419_);
if (v___x_1420_ == 0)
{
lean_object* v___x_1421_; 
v___x_1421_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_1421_;
}
else
{
lean_object* v___f_1422_; lean_object* v___x_1423_; lean_object* v___f_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___y_1428_; 
v___f_1422_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__0));
v___x_1423_ = lean_io_promise_new();
lean_inc(v___x_1423_);
v___f_1424_ = lean_alloc_closure((void*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___lam__1___boxed), 9, 1);
lean_closure_set(v___f_1424_, 0, v___x_1423_);
v___x_1425_ = l_Lean_Server_Test_Cancel_onceRef;
v___x_1426_ = lean_st_ref_take(v___x_1425_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_object* v___x_1466_; 
v___x_1466_ = l_IO_Promise_result_x21___redArg(v___x_1423_);
lean_dec(v___x_1423_);
v___y_1428_ = v___x_1466_;
goto v___jp_1427_;
}
else
{
lean_object* v_val_1467_; 
lean_dec(v___x_1423_);
v_val_1467_ = lean_ctor_get(v___x_1426_, 0);
lean_inc(v_val_1467_);
v___y_1428_ = v_val_1467_;
goto v___jp_1427_;
}
v___jp_1427_:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1429_, 0, v___y_1428_);
v___x_1430_ = lean_st_ref_put(v___x_1425_, v___x_1429_);
if (lean_obj_tag(v___x_1426_) == 1)
{
lean_object* v_val_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1440_; 
lean_dec_ref(v___f_1424_);
v_val_1431_ = lean_ctor_get(v___x_1426_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1433_ = v___x_1426_;
v_isShared_1434_ = v_isSharedCheck_1440_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_val_1431_);
lean_dec(v___x_1426_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1440_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1438_; 
v___x_1435_ = lean_io_wait(v_val_1431_);
lean_dec(v___x_1435_);
v___x_1436_ = lean_box(0);
if (v_isShared_1434_ == 0)
{
lean_ctor_set_tag(v___x_1433_, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1436_);
v___x_1438_ = v___x_1433_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v___x_1436_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
else
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
lean_dec(v___x_1426_);
v___x_1441_ = l_IO_CancelToken_new();
v___x_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1442_, 0, v___x_1441_);
v___x_1443_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__2));
v___x_1444_ = l_Lean_Name_toString(v___x_1443_, v___x_1420_);
lean_inc_ref(v___x_1442_);
v___x_1445_ = l_Lean_Elab_Term_wrapAsyncAsSnapshot___redArg(v___f_1424_, v___x_1442_, v___x_1444_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_);
if (lean_obj_tag(v___x_1445_) == 0)
{
lean_object* v_a_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; 
v_a_1446_ = lean_ctor_get(v___x_1445_, 0);
lean_inc(v_a_1446_);
lean_dec_ref_known(v___x_1445_, 1);
v___x_1447_ = lean_box(0);
v___x_1448_ = lean_apply_1(v_a_1446_, v___x_1447_);
v___x_1449_ = lean_unsigned_to_nat(0u);
v___x_1450_ = lean_io_as_task(v___x_1448_, v___x_1449_);
v___x_1451_ = lean_box(0);
v___x_1452_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__3, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__3_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1___closed__3);
v___x_1453_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1453_, 0, v___x_1451_);
lean_ctor_set(v___x_1453_, 1, v___x_1452_);
lean_ctor_set(v___x_1453_, 2, v___x_1442_);
lean_ctor_set(v___x_1453_, 3, v___x_1450_);
v___x_1454_ = l_Lean_Core_logSnapshotTask___redArg(v___x_1453_, v_a_1417_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v___x_1455_; lean_object* v___x_7512__overap_1456_; lean_object* v___x_1457_; 
lean_dec_ref_known(v___x_1454_, 1);
v___x_1455_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___closed__0));
v___x_7512__overap_1456_ = lean_dbg_trace(v___x_1455_, v___f_1422_);
lean_inc(v_a_1417_);
lean_inc_ref(v_a_1416_);
lean_inc(v_a_1415_);
lean_inc_ref(v_a_1414_);
lean_inc(v_a_1413_);
lean_inc_ref(v_a_1412_);
lean_inc(v_a_1411_);
lean_inc_ref(v_a_1410_);
v___x_1457_ = lean_apply_9(v___x_7512__overap_1456_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, lean_box(0));
return v___x_1457_;
}
else
{
return v___x_1454_;
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
lean_dec_ref_known(v___x_1442_, 1);
v_a_1458_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1445_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1445_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_a_1458_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___boxed(lean_object* v_x_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1(v_x_1468_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_, v_a_1473_, v_a_1474_, v_a_1475_, v_a_1476_);
lean_dec(v_a_1476_);
lean_dec_ref(v_a_1475_);
lean_dec(v_a_1474_);
lean_dec_ref(v_a_1473_);
lean_dec(v_a_1472_);
lean_dec_ref(v_a_1471_);
lean_dec(v_a_1470_);
lean_dec_ref(v_a_1469_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1_spec__0(lean_object* v_val_1479_, lean_object* v_inst_1480_, lean_object* v_a_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_){
_start:
{
lean_object* v___x_1489_; 
v___x_1489_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1_spec__0___redArg(v_val_1479_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1_spec__0___boxed(lean_object* v_val_1490_, lean_object* v_inst_1491_, lean_object* v_a_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1_spec__0(v_val_1490_, v_inst_1491_, v_a_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
lean_dec(v___y_1496_);
lean_dec_ref(v___y_1495_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec_ref(v_val_1490_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___lam__1(lean_object* v_val_1517_, lean_object* v_val_1518_, lean_object* v_x_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = lean_box(0);
v___x_1528_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1_spec__0___redArg(v_val_1517_);
if (lean_obj_tag(v___x_1528_) == 0)
{
lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1570_; 
v_isSharedCheck_1570_ = !lean_is_exclusive(v___x_1528_);
if (v_isSharedCheck_1570_ == 0)
{
lean_object* v_unused_1571_; 
v_unused_1571_ = lean_ctor_get(v___x_1528_, 0);
lean_dec(v_unused_1571_);
v___x_1530_ = v___x_1528_;
v_isShared_1531_ = v_isSharedCheck_1570_;
goto v_resetjp_1529_;
}
else
{
lean_dec(v___x_1528_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1570_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v_toCold_1532_; lean_object* v_ref_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; 
v_toCold_1532_ = lean_ctor_get(v___y_1524_, 0);
v_ref_1533_ = lean_ctor_get(v___y_1524_, 2);
v___x_1534_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__5));
v___x_1535_ = l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3(v___x_1534_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v___x_1536_; uint8_t v___x_1537_; uint8_t v___x_1538_; lean_object* v___x_1539_; 
lean_dec_ref_known(v___x_1535_, 1);
lean_del_object(v___x_1530_);
v___x_1536_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8);
v___x_1537_ = 2;
v___x_1538_ = 0;
v___x_1539_ = l_Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__unblock__async__1_spec__1(v___x_1536_, v___x_1537_, v___x_1538_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1554_; 
v_isSharedCheck_1554_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1554_ == 0)
{
lean_object* v_unused_1555_; 
v_unused_1555_ = lean_ctor_get(v___x_1539_, 0);
lean_dec(v_unused_1555_);
v___x_1541_ = v___x_1539_;
v_isShared_1542_ = v_isSharedCheck_1554_;
goto v_resetjp_1540_;
}
else
{
lean_dec(v___x_1539_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1554_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1543_; lean_object* v_cancelTk_x3f_1544_; 
v___x_1543_ = lean_io_promise_resolve(v___x_1527_, v_val_1518_);
v_cancelTk_x3f_1544_ = lean_ctor_get(v_toCold_1532_, 10);
if (lean_obj_tag(v_cancelTk_x3f_1544_) == 1)
{
lean_object* v_val_1545_; uint8_t v___x_1546_; 
v_val_1545_ = lean_ctor_get(v_cancelTk_x3f_1544_, 0);
v___x_1546_ = l_IO_CancelToken_isSet(v_val_1545_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1548_; 
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 0, v___x_1527_);
v___x_1548_ = v___x_1541_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v___x_1527_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
else
{
lean_object* v___x_1550_; 
lean_del_object(v___x_1541_);
v___x_1550_ = l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg();
return v___x_1550_;
}
}
else
{
lean_object* v___x_1552_; 
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 0, v___x_1527_);
v___x_1552_ = v___x_1541_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v___x_1527_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
}
else
{
return v___x_1539_;
}
}
else
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1569_; 
v_a_1556_ = lean_ctor_get(v___x_1535_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1535_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1558_ = v___x_1535_;
v_isShared_1559_ = v_isSharedCheck_1569_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1535_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1569_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1560_; lean_object* v___x_1562_; 
v___x_1560_ = lean_io_error_to_string(v_a_1556_);
if (v_isShared_1531_ == 0)
{
lean_ctor_set_tag(v___x_1530_, 3);
lean_ctor_set(v___x_1530_, 0, v___x_1560_);
v___x_1562_ = v___x_1530_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v___x_1560_);
v___x_1562_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1566_; 
v___x_1563_ = l_Lean_MessageData_ofFormat(v___x_1562_);
lean_inc(v_ref_1533_);
v___x_1564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1564_, 0, v_ref_1533_);
lean_ctor_set(v___x_1564_, 1, v___x_1563_);
if (v_isShared_1559_ == 0)
{
lean_ctor_set(v___x_1558_, 0, v___x_1564_);
v___x_1566_ = v___x_1558_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v___x_1564_);
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
}
}
else
{
return v___x_1528_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___lam__1___boxed(lean_object* v_val_1572_, lean_object* v_val_1573_, lean_object* v_x_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___lam__1(v_val_1572_, v_val_1573_, v_x_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_);
lean_dec(v___y_1580_);
lean_dec_ref(v___y_1579_);
lean_dec(v___y_1578_);
lean_dec_ref(v___y_1577_);
lean_dec(v___y_1576_);
lean_dec_ref(v___y_1575_);
lean_dec(v_val_1573_);
lean_dec_ref(v_val_1572_);
return v_res_1582_;
}
}
static lean_object* _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__2(void){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1590_ = lean_box(0);
v___x_1591_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_1590_);
return v___x_1591_;
}
}
static lean_object* _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__4(void){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1593_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__11));
v___x_1594_ = lean_unsigned_to_nat(60u);
v___x_1595_ = lean_unsigned_to_nat(177u);
v___x_1596_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__3));
v___x_1597_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__9));
v___x_1598_ = l_mkPanicMessageWithDecl(v___x_1597_, v___x_1596_, v___x_1595_, v___x_1594_, v___x_1593_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1(lean_object* v_x_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_){
_start:
{
lean_object* v___x_1609_; uint8_t v___x_1610_; 
v___x_1609_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__main__cancel__once__async___closed__1));
v___x_1610_ = l_Lean_Syntax_isOfKind(v_x_1599_, v___x_1609_);
if (v___x_1610_ == 0)
{
lean_object* v___x_1611_; 
v___x_1611_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_1611_;
}
else
{
lean_object* v___f_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___y_1617_; 
v___f_1612_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__async__1___closed__0));
v___x_1613_ = lean_io_promise_new();
v___x_1614_ = l_Lean_Server_Test_Cancel_onceRef;
v___x_1615_ = lean_st_ref_take(v___x_1614_);
if (lean_obj_tag(v___x_1615_) == 0)
{
lean_object* v___x_1659_; 
v___x_1659_ = l_IO_Promise_result_x21___redArg(v___x_1613_);
v___y_1617_ = v___x_1659_;
goto v___jp_1616_;
}
else
{
lean_object* v_val_1660_; 
v_val_1660_ = lean_ctor_get(v___x_1615_, 0);
lean_inc(v_val_1660_);
v___y_1617_ = v_val_1660_;
goto v___jp_1616_;
}
v___jp_1616_:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1618_, 0, v___y_1617_);
v___x_1619_ = lean_st_ref_put(v___x_1614_, v___x_1618_);
if (lean_obj_tag(v___x_1615_) == 1)
{
lean_object* v_val_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1629_; 
lean_dec(v___x_1613_);
v_val_1620_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1622_ = v___x_1615_;
v_isShared_1623_ = v_isSharedCheck_1629_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_val_1620_);
lean_dec(v___x_1615_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1629_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1627_; 
v___x_1624_ = lean_io_wait(v_val_1620_);
lean_dec(v___x_1624_);
v___x_1625_ = lean_box(0);
if (v_isShared_1623_ == 0)
{
lean_ctor_set_tag(v___x_1622_, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1625_);
v___x_1627_ = v___x_1622_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v___x_1625_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
else
{
lean_object* v_toCold_1630_; lean_object* v_cancelTk_x3f_1631_; 
lean_dec(v___x_1615_);
v_toCold_1630_ = lean_ctor_get(v_a_1606_, 0);
v_cancelTk_x3f_1631_ = lean_ctor_get(v_toCold_1630_, 10);
if (lean_obj_tag(v_cancelTk_x3f_1631_) == 1)
{
lean_object* v_val_1632_; lean_object* v___f_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; 
v_val_1632_ = lean_ctor_get(v_cancelTk_x3f_1631_, 0);
lean_inc(v_val_1632_);
v___f_1633_ = lean_alloc_closure((void*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___lam__1___boxed), 10, 2);
lean_closure_set(v___f_1633_, 0, v_val_1632_);
lean_closure_set(v___f_1633_, 1, v___x_1613_);
v___x_1634_ = lean_box(0);
v___x_1635_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__1));
v___x_1636_ = l_Lean_Name_toString(v___x_1635_, v___x_1610_);
v___x_1637_ = l_Lean_Elab_Term_wrapAsyncAsSnapshot___redArg(v___f_1633_, v___x_1634_, v___x_1636_, v_a_1602_, v_a_1603_, v_a_1604_, v_a_1605_, v_a_1606_, v_a_1607_);
if (lean_obj_tag(v___x_1637_) == 0)
{
lean_object* v_a_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v_a_1638_ = lean_ctor_get(v___x_1637_, 0);
lean_inc(v_a_1638_);
lean_dec_ref_known(v___x_1637_, 1);
v___x_1639_ = lean_box(0);
v___x_1640_ = lean_apply_1(v_a_1638_, v___x_1639_);
v___x_1641_ = lean_unsigned_to_nat(0u);
v___x_1642_ = lean_io_as_task(v___x_1640_, v___x_1641_);
v___x_1643_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__2, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__2_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__2);
lean_inc_ref(v_cancelTk_x3f_1631_);
v___x_1644_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1634_);
lean_ctor_set(v___x_1644_, 1, v___x_1643_);
lean_ctor_set(v___x_1644_, 2, v_cancelTk_x3f_1631_);
lean_ctor_set(v___x_1644_, 3, v___x_1642_);
v___x_1645_ = l_Lean_Core_logSnapshotTask___redArg(v___x_1644_, v_a_1607_);
if (lean_obj_tag(v___x_1645_) == 0)
{
lean_object* v___x_1646_; lean_object* v___x_7398__overap_1647_; lean_object* v___x_1648_; 
lean_dec_ref_known(v___x_1645_, 1);
v___x_1646_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___closed__0));
v___x_7398__overap_1647_ = lean_dbg_trace(v___x_1646_, v___f_1612_);
lean_inc(v_a_1607_);
lean_inc_ref(v_a_1606_);
lean_inc(v_a_1605_);
lean_inc_ref(v_a_1604_);
lean_inc(v_a_1603_);
lean_inc_ref(v_a_1602_);
lean_inc(v_a_1601_);
lean_inc_ref(v_a_1600_);
v___x_1648_ = lean_apply_9(v___x_7398__overap_1647_, v_a_1600_, v_a_1601_, v_a_1602_, v_a_1603_, v_a_1604_, v_a_1605_, v_a_1606_, v_a_1607_, lean_box(0));
return v___x_1648_;
}
else
{
return v___x_1645_;
}
}
else
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1656_; 
v_a_1649_ = lean_ctor_get(v___x_1637_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1651_ = v___x_1637_;
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1637_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1654_; 
if (v_isShared_1652_ == 0)
{
v___x_1654_ = v___x_1651_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_a_1649_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
}
else
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
lean_dec(v___x_1613_);
v___x_1657_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__4, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__4_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__4);
v___x_1658_ = l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5(v___x_1657_, v_a_1600_, v_a_1601_, v_a_1602_, v_a_1603_, v_a_1604_, v_a_1605_, v_a_1606_, v_a_1607_);
return v___x_1658_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___boxed(lean_object* v_x_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_){
_start:
{
lean_object* v_res_1671_; 
v_res_1671_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1(v_x_1661_, v_a_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_);
lean_dec(v_a_1669_);
lean_dec_ref(v_a_1668_);
lean_dec(v_a_1667_);
lean_dec_ref(v_a_1666_);
lean_dec(v_a_1665_);
lean_dec_ref(v_a_1664_);
lean_dec(v_a_1663_);
lean_dec_ref(v_a_1662_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_4281145543____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1673_ = lean_box(0);
v___x_1674_ = lean_st_mk_ref(v___x_1673_);
v___x_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1674_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_4281145543____hygCtx___hyg_2____boxed(lean_object* v_a_1676_){
_start:
{
lean_object* v_res_1677_; 
v_res_1677_ = l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_4281145543____hygCtx___hyg_2_();
return v_res_1677_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__2(lean_object* v_msg_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_){
_start:
{
lean_object* v___f_1710_; lean_object* v___x_4145__overap_1711_; lean_object* v___x_1712_; 
v___f_1710_ = ((lean_object*)(l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__2___closed__0));
v___x_4145__overap_1711_ = lean_panic_fn_borrowed(v___f_1710_, v_msg_1706_);
lean_inc(v___y_1708_);
lean_inc_ref(v___y_1707_);
v___x_1712_ = lean_apply_3(v___x_4145__overap_1711_, v___y_1707_, v___y_1708_, lean_box(0));
return v___x_1712_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__2___boxed(lean_object* v_msg_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__2(v_msg_1713_, v___y_1714_, v___y_1715_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__3___redArg(){
_start:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1719_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg___closed__0);
v___x_1720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1719_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__3___redArg___boxed(lean_object* v___y_1721_){
_start:
{
lean_object* v_res_1722_; 
v_res_1722_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__3___redArg();
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__3(lean_object* v_00_u03b1_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_){
_start:
{
lean_object* v___x_1727_; 
v___x_1727_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__3___redArg();
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__3___boxed(lean_object* v_00_u03b1_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_){
_start:
{
lean_object* v_res_1732_; 
v_res_1732_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__3(v_00_u03b1_1728_, v___y_1729_, v___y_1730_);
lean_dec(v___y_1730_);
lean_dec_ref(v___y_1729_);
return v_res_1732_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1733_; 
v___x_1733_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1733_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__1(void){
_start:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1734_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__0);
v___x_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1734_);
return v___x_1735_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__2(void){
_start:
{
lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1736_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__1);
v___x_1737_ = lean_unsigned_to_nat(0u);
v___x_1738_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1737_);
lean_ctor_set(v___x_1738_, 1, v___x_1737_);
lean_ctor_set(v___x_1738_, 2, v___x_1737_);
lean_ctor_set(v___x_1738_, 3, v___x_1737_);
lean_ctor_set(v___x_1738_, 4, v___x_1736_);
lean_ctor_set(v___x_1738_, 5, v___x_1736_);
lean_ctor_set(v___x_1738_, 6, v___x_1736_);
lean_ctor_set(v___x_1738_, 7, v___x_1736_);
lean_ctor_set(v___x_1738_, 8, v___x_1736_);
lean_ctor_set(v___x_1738_, 9, v___x_1736_);
lean_ctor_set(v___x_1738_, 10, v___x_1736_);
return v___x_1738_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__3(void){
_start:
{
lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1739_ = lean_unsigned_to_nat(32u);
v___x_1740_ = lean_mk_empty_array_with_capacity(v___x_1739_);
v___x_1741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1740_);
return v___x_1741_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__4(void){
_start:
{
size_t v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1742_ = ((size_t)5ULL);
v___x_1743_ = lean_unsigned_to_nat(0u);
v___x_1744_ = lean_unsigned_to_nat(32u);
v___x_1745_ = lean_mk_empty_array_with_capacity(v___x_1744_);
v___x_1746_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__3);
v___x_1747_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1747_, 0, v___x_1746_);
lean_ctor_set(v___x_1747_, 1, v___x_1745_);
lean_ctor_set(v___x_1747_, 2, v___x_1743_);
lean_ctor_set(v___x_1747_, 3, v___x_1743_);
lean_ctor_set_usize(v___x_1747_, 4, v___x_1742_);
return v___x_1747_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__5(void){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1748_ = lean_box(1);
v___x_1749_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__4);
v___x_1750_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__1);
v___x_1751_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1750_);
lean_ctor_set(v___x_1751_, 1, v___x_1749_);
lean_ctor_set(v___x_1751_, 2, v___x_1748_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5(lean_object* v_msgData_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_){
_start:
{
lean_object* v___x_1756_; lean_object* v_toCold_1757_; lean_object* v_env_1758_; lean_object* v_options_1759_; uint8_t v___x_1760_; lean_object* v_env_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1756_ = lean_st_ref_get(v___y_1754_);
v_toCold_1757_ = lean_ctor_get(v___y_1753_, 0);
v_env_1758_ = lean_ctor_get(v___x_1756_, 0);
lean_inc_ref(v_env_1758_);
lean_dec(v___x_1756_);
v_options_1759_ = lean_ctor_get(v_toCold_1757_, 2);
v___x_1760_ = 0;
v_env_1761_ = l_Lean_Environment_setRecordingDeps(v_env_1758_, v___x_1760_);
v___x_1762_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__2);
v___x_1763_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___closed__5);
lean_inc_ref(v_options_1759_);
v___x_1764_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1764_, 0, v_env_1761_);
lean_ctor_set(v___x_1764_, 1, v___x_1762_);
lean_ctor_set(v___x_1764_, 2, v___x_1763_);
lean_ctor_set(v___x_1764_, 3, v_options_1759_);
v___x_1765_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1764_);
lean_ctor_set(v___x_1765_, 1, v_msgData_1752_);
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1765_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5___boxed(lean_object* v_msgData_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_){
_start:
{
lean_object* v_res_1771_; 
v_res_1771_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5(v_msgData_1767_, v___y_1768_, v___y_1769_);
lean_dec(v___y_1769_);
lean_dec_ref(v___y_1768_);
return v_res_1771_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4(lean_object* v_ref_1772_, lean_object* v_msgData_1773_, uint8_t v_severity_1774_, uint8_t v_isSilent_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_){
_start:
{
uint8_t v___y_1780_; uint8_t v___y_1781_; lean_object* v___y_1782_; lean_object* v___y_1783_; lean_object* v___y_1784_; lean_object* v___y_1785_; lean_object* v___y_1786_; lean_object* v_toCold_1787_; lean_object* v___y_1788_; lean_object* v___y_1817_; lean_object* v___y_1818_; uint8_t v___y_1819_; lean_object* v___y_1820_; uint8_t v___y_1821_; uint8_t v___y_1822_; lean_object* v___y_1823_; lean_object* v___y_1824_; lean_object* v___y_1844_; uint8_t v___y_1845_; lean_object* v___y_1846_; uint8_t v___y_1847_; lean_object* v___y_1848_; uint8_t v___y_1849_; lean_object* v___y_1850_; uint8_t v___y_1854_; uint8_t v___x_1871_; uint8_t v___x_1872_; 
v___x_1871_ = 2;
v___x_1872_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1774_, v___x_1871_);
if (v___x_1872_ == 0)
{
goto v___jp_1864_;
}
else
{
uint8_t v___x_1873_; 
lean_inc_ref(v_msgData_1773_);
v___x_1873_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1773_);
if (v___x_1873_ == 0)
{
goto v___jp_1864_;
}
else
{
lean_object* v___x_1874_; lean_object* v___x_1875_; 
lean_dec_ref(v_msgData_1773_);
v___x_1874_ = lean_box(0);
v___x_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1874_);
return v___x_1875_;
}
}
v___jp_1779_:
{
lean_object* v_currNamespace_1789_; lean_object* v_openDecls_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v_env_1795_; lean_object* v_nextMacroScope_1796_; lean_object* v_ngen_1797_; lean_object* v_auxDeclNGen_1798_; lean_object* v_traceState_1799_; lean_object* v_cache_1800_; lean_object* v_recordedDeps_1801_; lean_object* v_messages_1802_; lean_object* v_infoState_1803_; lean_object* v_snapshotTasks_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1815_; 
v_currNamespace_1789_ = lean_ctor_get(v_toCold_1787_, 4);
v_openDecls_1790_ = lean_ctor_get(v_toCold_1787_, 5);
lean_inc(v_openDecls_1790_);
lean_inc(v_currNamespace_1789_);
v___x_1791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1791_, 0, v_currNamespace_1789_);
lean_ctor_set(v___x_1791_, 1, v_openDecls_1790_);
v___x_1792_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1791_);
lean_ctor_set(v___x_1792_, 1, v___y_1785_);
lean_inc_ref(v___y_1786_);
lean_inc_ref(v___y_1784_);
v___x_1793_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1793_, 0, v___y_1784_);
lean_ctor_set(v___x_1793_, 1, v___y_1782_);
lean_ctor_set(v___x_1793_, 2, v___y_1783_);
lean_ctor_set(v___x_1793_, 3, v___y_1786_);
lean_ctor_set(v___x_1793_, 4, v___x_1792_);
lean_ctor_set_uint8(v___x_1793_, sizeof(void*)*5, v___y_1781_);
lean_ctor_set_uint8(v___x_1793_, sizeof(void*)*5 + 1, v___y_1780_);
lean_ctor_set_uint8(v___x_1793_, sizeof(void*)*5 + 2, v_isSilent_1775_);
v___x_1794_ = lean_st_ref_take(v___y_1788_);
v_env_1795_ = lean_ctor_get(v___x_1794_, 0);
v_nextMacroScope_1796_ = lean_ctor_get(v___x_1794_, 1);
v_ngen_1797_ = lean_ctor_get(v___x_1794_, 2);
v_auxDeclNGen_1798_ = lean_ctor_get(v___x_1794_, 3);
v_traceState_1799_ = lean_ctor_get(v___x_1794_, 4);
v_cache_1800_ = lean_ctor_get(v___x_1794_, 5);
v_recordedDeps_1801_ = lean_ctor_get(v___x_1794_, 6);
v_messages_1802_ = lean_ctor_get(v___x_1794_, 7);
v_infoState_1803_ = lean_ctor_get(v___x_1794_, 8);
v_snapshotTasks_1804_ = lean_ctor_get(v___x_1794_, 9);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1806_ = v___x_1794_;
v_isShared_1807_ = v_isSharedCheck_1815_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_snapshotTasks_1804_);
lean_inc(v_infoState_1803_);
lean_inc(v_messages_1802_);
lean_inc(v_recordedDeps_1801_);
lean_inc(v_cache_1800_);
lean_inc(v_traceState_1799_);
lean_inc(v_auxDeclNGen_1798_);
lean_inc(v_ngen_1797_);
lean_inc(v_nextMacroScope_1796_);
lean_inc(v_env_1795_);
lean_dec(v___x_1794_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1815_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1811_; 
v___x_1808_ = lean_box(0);
v___x_1809_ = l_Lean_MessageLog_add(v___x_1793_, v_messages_1802_);
if (v_isShared_1807_ == 0)
{
lean_ctor_set(v___x_1806_, 7, v___x_1809_);
v___x_1811_ = v___x_1806_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_env_1795_);
lean_ctor_set(v_reuseFailAlloc_1814_, 1, v_nextMacroScope_1796_);
lean_ctor_set(v_reuseFailAlloc_1814_, 2, v_ngen_1797_);
lean_ctor_set(v_reuseFailAlloc_1814_, 3, v_auxDeclNGen_1798_);
lean_ctor_set(v_reuseFailAlloc_1814_, 4, v_traceState_1799_);
lean_ctor_set(v_reuseFailAlloc_1814_, 5, v_cache_1800_);
lean_ctor_set(v_reuseFailAlloc_1814_, 6, v_recordedDeps_1801_);
lean_ctor_set(v_reuseFailAlloc_1814_, 7, v___x_1809_);
lean_ctor_set(v_reuseFailAlloc_1814_, 8, v_infoState_1803_);
lean_ctor_set(v_reuseFailAlloc_1814_, 9, v_snapshotTasks_1804_);
v___x_1811_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1812_ = lean_st_ref_put(v___y_1788_, v___x_1811_);
v___x_1813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1813_, 0, v___x_1808_);
return v___x_1813_;
}
}
}
v___jp_1816_:
{
lean_object* v_fileName_1825_; lean_object* v_fileMap_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1842_; 
v_fileName_1825_ = lean_ctor_get(v___y_1823_, 0);
v_fileMap_1826_ = lean_ctor_get(v___y_1823_, 1);
v___x_1827_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1773_);
v___x_1828_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4_spec__5(v___x_1827_, v___y_1776_, v___y_1777_);
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1842_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1842_ == 0)
{
v___x_1831_ = v___x_1828_;
v_isShared_1832_ = v_isSharedCheck_1842_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1828_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1842_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
lean_inc_ref_n(v_fileMap_1826_, 2);
v___x_1833_ = l_Lean_FileMap_toPosition(v_fileMap_1826_, v___y_1820_);
lean_dec(v___y_1820_);
v___x_1834_ = l_Lean_FileMap_toPosition(v_fileMap_1826_, v___y_1824_);
lean_dec(v___y_1824_);
v___x_1835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1834_);
v___x_1836_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___closed__0));
if (v___y_1819_ == 0)
{
lean_del_object(v___x_1831_);
v___y_1780_ = v___y_1821_;
v___y_1781_ = v___y_1822_;
v___y_1782_ = v___x_1833_;
v___y_1783_ = v___x_1835_;
v___y_1784_ = v_fileName_1825_;
v___y_1785_ = v_a_1829_;
v___y_1786_ = v___x_1836_;
v_toCold_1787_ = v___y_1818_;
v___y_1788_ = v___y_1777_;
goto v___jp_1779_;
}
else
{
uint8_t v___x_1837_; 
lean_inc(v_a_1829_);
lean_inc_ref(v___y_1817_);
v___x_1837_ = l_Lean_MessageData_hasTag(v___y_1817_, v_a_1829_);
if (v___x_1837_ == 0)
{
lean_object* v___x_1838_; lean_object* v___x_1840_; 
lean_dec_ref_known(v___x_1835_, 1);
lean_dec_ref(v___x_1833_);
lean_dec(v_a_1829_);
v___x_1838_ = lean_box(0);
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 0, v___x_1838_);
v___x_1840_ = v___x_1831_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v___x_1838_);
v___x_1840_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
return v___x_1840_;
}
}
else
{
lean_del_object(v___x_1831_);
v___y_1780_ = v___y_1821_;
v___y_1781_ = v___y_1822_;
v___y_1782_ = v___x_1833_;
v___y_1783_ = v___x_1835_;
v___y_1784_ = v_fileName_1825_;
v___y_1785_ = v_a_1829_;
v___y_1786_ = v___x_1836_;
v_toCold_1787_ = v___y_1818_;
v___y_1788_ = v___y_1777_;
goto v___jp_1779_;
}
}
}
}
v___jp_1843_:
{
lean_object* v___x_1851_; 
v___x_1851_ = l_Lean_Syntax_getTailPos_x3f(v___y_1848_, v___y_1847_);
lean_dec(v___y_1848_);
if (lean_obj_tag(v___x_1851_) == 0)
{
lean_inc(v___y_1850_);
v___y_1817_ = v___y_1844_;
v___y_1818_ = v___y_1846_;
v___y_1819_ = v___y_1845_;
v___y_1820_ = v___y_1850_;
v___y_1821_ = v___y_1849_;
v___y_1822_ = v___y_1847_;
v___y_1823_ = v___y_1846_;
v___y_1824_ = v___y_1850_;
goto v___jp_1816_;
}
else
{
lean_object* v_val_1852_; 
v_val_1852_ = lean_ctor_get(v___x_1851_, 0);
lean_inc(v_val_1852_);
lean_dec_ref_known(v___x_1851_, 1);
v___y_1817_ = v___y_1844_;
v___y_1818_ = v___y_1846_;
v___y_1819_ = v___y_1845_;
v___y_1820_ = v___y_1850_;
v___y_1821_ = v___y_1849_;
v___y_1822_ = v___y_1847_;
v___y_1823_ = v___y_1846_;
v___y_1824_ = v_val_1852_;
goto v___jp_1816_;
}
}
v___jp_1853_:
{
lean_object* v_toCold_1855_; lean_object* v_ref_1856_; uint8_t v_suppressElabErrors_1857_; lean_object* v_ref_1858_; uint8_t v___x_1859_; lean_object* v___f_1860_; lean_object* v___x_1861_; 
v_toCold_1855_ = lean_ctor_get(v___y_1776_, 0);
v_ref_1856_ = lean_ctor_get(v___y_1776_, 2);
v_suppressElabErrors_1857_ = lean_ctor_get_uint8(v___y_1776_, sizeof(void*)*3 + 2);
v_ref_1858_ = l_Lean_replaceRef(v_ref_1772_, v_ref_1856_);
v___x_1859_ = 0;
v___f_1860_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1___redArg___closed__1));
v___x_1861_ = l_Lean_Syntax_getPos_x3f(v_ref_1858_, v___x_1859_);
if (lean_obj_tag(v___x_1861_) == 0)
{
lean_object* v___x_1862_; 
v___x_1862_ = lean_unsigned_to_nat(0u);
v___y_1844_ = v___f_1860_;
v___y_1845_ = v_suppressElabErrors_1857_;
v___y_1846_ = v_toCold_1855_;
v___y_1847_ = v___x_1859_;
v___y_1848_ = v_ref_1858_;
v___y_1849_ = v___y_1854_;
v___y_1850_ = v___x_1862_;
goto v___jp_1843_;
}
else
{
lean_object* v_val_1863_; 
v_val_1863_ = lean_ctor_get(v___x_1861_, 0);
lean_inc(v_val_1863_);
lean_dec_ref_known(v___x_1861_, 1);
v___y_1844_ = v___f_1860_;
v___y_1845_ = v_suppressElabErrors_1857_;
v___y_1846_ = v_toCold_1855_;
v___y_1847_ = v___x_1859_;
v___y_1848_ = v_ref_1858_;
v___y_1849_ = v___y_1854_;
v___y_1850_ = v_val_1863_;
goto v___jp_1843_;
}
}
v___jp_1864_:
{
uint8_t v___x_1865_; uint8_t v___x_1866_; 
v___x_1865_ = 1;
v___x_1866_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1774_, v___x_1865_);
if (v___x_1866_ == 0)
{
v___y_1854_ = v_severity_1774_;
goto v___jp_1853_;
}
else
{
lean_object* v___x_1867_; lean_object* v___x_1868_; uint8_t v___x_1869_; 
v___x_1867_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1776_);
v___x_1868_ = l_Lean_warningAsError;
v___x_1869_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__1_spec__1_spec__5(v___x_1867_, v___x_1868_);
lean_dec_ref(v___x_1867_);
if (v___x_1869_ == 0)
{
v___y_1854_ = v_severity_1774_;
goto v___jp_1853_;
}
else
{
uint8_t v___x_1870_; 
v___x_1870_ = 2;
v___y_1854_ = v___x_1870_;
goto v___jp_1853_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4___boxed(lean_object* v_ref_1876_, lean_object* v_msgData_1877_, lean_object* v_severity_1878_, lean_object* v_isSilent_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_){
_start:
{
uint8_t v_severity_boxed_1883_; uint8_t v_isSilent_boxed_1884_; lean_object* v_res_1885_; 
v_severity_boxed_1883_ = lean_unbox(v_severity_1878_);
v_isSilent_boxed_1884_ = lean_unbox(v_isSilent_1879_);
v_res_1885_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4(v_ref_1876_, v_msgData_1877_, v_severity_boxed_1883_, v_isSilent_boxed_1884_, v___y_1880_, v___y_1881_);
lean_dec(v___y_1881_);
lean_dec_ref(v___y_1880_);
lean_dec(v_ref_1876_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1(lean_object* v_msgData_1886_, uint8_t v_severity_1887_, uint8_t v_isSilent_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_){
_start:
{
lean_object* v_ref_1892_; lean_object* v___x_1893_; 
v_ref_1892_ = lean_ctor_get(v___y_1889_, 2);
v___x_1893_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1_spec__4(v_ref_1892_, v_msgData_1886_, v_severity_1887_, v_isSilent_1888_, v___y_1889_, v___y_1890_);
return v___x_1893_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1___boxed(lean_object* v_msgData_1894_, lean_object* v_severity_1895_, lean_object* v_isSilent_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
uint8_t v_severity_boxed_1900_; uint8_t v_isSilent_boxed_1901_; lean_object* v_res_1902_; 
v_severity_boxed_1900_ = lean_unbox(v_severity_1895_);
v_isSilent_boxed_1901_ = lean_unbox(v_isSilent_1896_);
v_res_1902_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1(v_msgData_1894_, v_severity_boxed_1900_, v_isSilent_boxed_1901_, v___y_1897_, v___y_1898_);
lean_dec(v___y_1898_);
lean_dec_ref(v___y_1897_);
return v_res_1902_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1(lean_object* v_msgData_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_){
_start:
{
uint8_t v___x_1907_; uint8_t v___x_1908_; lean_object* v___x_1909_; 
v___x_1907_ = 0;
v___x_1908_ = 0;
v___x_1909_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1_spec__1(v_msgData_1903_, v___x_1907_, v___x_1908_, v___y_1904_, v___y_1905_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1___boxed(lean_object* v_msgData_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_){
_start:
{
lean_object* v_res_1914_; 
v_res_1914_ = l_Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1(v_msgData_1910_, v___y_1911_, v___y_1912_);
lean_dec(v___y_1912_);
lean_dec_ref(v___y_1911_);
return v_res_1914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__0___redArg(lean_object* v_val_1915_){
_start:
{
lean_object* v___x_1917_; uint8_t v___x_1918_; 
v___x_1917_ = lean_box(0);
v___x_1918_ = l_IO_CancelToken_isSet(v_val_1915_);
if (v___x_1918_ == 0)
{
uint32_t v___x_1919_; lean_object* v___x_1920_; 
v___x_1919_ = 30;
v___x_1920_ = l_IO_sleep(v___x_1919_);
goto _start;
}
else
{
lean_object* v___x_1922_; 
v___x_1922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1917_);
return v___x_1922_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__0___redArg___boxed(lean_object* v_val_1923_, lean_object* v___y_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__0___redArg(v_val_1923_);
lean_dec_ref(v_val_1923_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__0(lean_object* v_val_1926_, lean_object* v_val_1927_, lean_object* v_x_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_){
_start:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1932_ = lean_box(0);
v___x_1933_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__0___redArg(v_val_1926_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1973_; 
v_isSharedCheck_1973_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1973_ == 0)
{
lean_object* v_unused_1974_; 
v_unused_1974_ = lean_ctor_get(v___x_1933_, 0);
lean_dec(v_unused_1974_);
v___x_1935_ = v___x_1933_;
v_isShared_1936_ = v_isSharedCheck_1973_;
goto v_resetjp_1934_;
}
else
{
lean_dec(v___x_1933_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1973_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v_toCold_1937_; lean_object* v_ref_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v_toCold_1937_ = lean_ctor_get(v___y_1929_, 0);
v_ref_1938_ = lean_ctor_get(v___y_1929_, 2);
v___x_1939_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__5));
v___x_1940_ = l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3(v___x_1939_);
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v___x_1941_; lean_object* v___x_1942_; 
lean_dec_ref_known(v___x_1940_, 1);
lean_del_object(v___x_1935_);
v___x_1941_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__8);
v___x_1942_ = l_Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1(v___x_1941_, v___y_1929_, v___y_1930_);
if (lean_obj_tag(v___x_1942_) == 0)
{
lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1957_; 
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1957_ == 0)
{
lean_object* v_unused_1958_; 
v_unused_1958_ = lean_ctor_get(v___x_1942_, 0);
lean_dec(v_unused_1958_);
v___x_1944_ = v___x_1942_;
v_isShared_1945_ = v_isSharedCheck_1957_;
goto v_resetjp_1943_;
}
else
{
lean_dec(v___x_1942_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1957_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1946_; lean_object* v_cancelTk_x3f_1947_; 
v___x_1946_ = lean_io_promise_resolve(v___x_1932_, v_val_1927_);
v_cancelTk_x3f_1947_ = lean_ctor_get(v_toCold_1937_, 10);
if (lean_obj_tag(v_cancelTk_x3f_1947_) == 1)
{
lean_object* v_val_1948_; uint8_t v___x_1949_; 
v_val_1948_ = lean_ctor_get(v_cancelTk_x3f_1947_, 0);
v___x_1949_ = l_IO_CancelToken_isSet(v_val_1948_);
if (v___x_1949_ == 0)
{
lean_object* v___x_1951_; 
if (v_isShared_1945_ == 0)
{
lean_ctor_set(v___x_1944_, 0, v___x_1932_);
v___x_1951_ = v___x_1944_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1932_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
else
{
lean_object* v___x_1953_; 
lean_del_object(v___x_1944_);
v___x_1953_ = l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg();
return v___x_1953_;
}
}
else
{
lean_object* v___x_1955_; 
if (v_isShared_1945_ == 0)
{
lean_ctor_set(v___x_1944_, 0, v___x_1932_);
v___x_1955_ = v___x_1944_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v___x_1932_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
else
{
return v___x_1942_;
}
}
else
{
lean_object* v_a_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1972_; 
v_a_1959_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1961_ = v___x_1940_;
v_isShared_1962_ = v_isSharedCheck_1972_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_a_1959_);
lean_dec(v___x_1940_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1972_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1963_; lean_object* v___x_1965_; 
v___x_1963_ = lean_io_error_to_string(v_a_1959_);
if (v_isShared_1936_ == 0)
{
lean_ctor_set_tag(v___x_1935_, 3);
lean_ctor_set(v___x_1935_, 0, v___x_1963_);
v___x_1965_ = v___x_1935_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v___x_1963_);
v___x_1965_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1969_; 
v___x_1966_ = l_Lean_MessageData_ofFormat(v___x_1965_);
lean_inc(v_ref_1938_);
v___x_1967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1967_, 0, v_ref_1938_);
lean_ctor_set(v___x_1967_, 1, v___x_1966_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 0, v___x_1967_);
v___x_1969_ = v___x_1961_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v___x_1967_);
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
else
{
return v___x_1933_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__0___boxed(lean_object* v_val_1975_, lean_object* v_val_1976_, lean_object* v_x_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_){
_start:
{
lean_object* v_res_1981_; 
v_res_1981_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__0(v_val_1975_, v_val_1976_, v_x_1977_, v___y_1978_, v___y_1979_);
lean_dec(v___y_1979_);
lean_dec_ref(v___y_1978_);
lean_dec(v_val_1976_);
lean_dec_ref(v_val_1975_);
return v_res_1981_;
}
}
static lean_object* _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1984_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__11));
v___x_1985_ = lean_unsigned_to_nat(44u);
v___x_1986_ = lean_unsigned_to_nat(209u);
v___x_1987_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___closed__1));
v___x_1988_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__9));
v___x_1989_ = l_mkPanicMessageWithDecl(v___x_1988_, v___x_1987_, v___x_1986_, v___x_1985_, v___x_1984_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1(lean_object* v___x_1990_, lean_object* v___x_1991_, lean_object* v___x_1992_, lean_object* v___x_1993_, uint8_t v___x_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___y_2002_; 
v___x_1998_ = lean_io_promise_new();
v___x_1999_ = l_Lean_Server_Test_Cancel_cmdOnceRef;
v___x_2000_ = lean_st_ref_take(v___x_1999_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v___x_2044_; 
v___x_2044_ = l_IO_Promise_result_x21___redArg(v___x_1998_);
v___y_2002_ = v___x_2044_;
goto v___jp_2001_;
}
else
{
lean_object* v_val_2045_; 
v_val_2045_ = lean_ctor_get(v___x_2000_, 0);
lean_inc(v_val_2045_);
v___y_2002_ = v_val_2045_;
goto v___jp_2001_;
}
v___jp_2001_:
{
lean_object* v___x_2003_; lean_object* v___x_2004_; 
v___x_2003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2003_, 0, v___y_2002_);
v___x_2004_ = lean_st_ref_put(v___x_1999_, v___x_2003_);
if (lean_obj_tag(v___x_2000_) == 1)
{
lean_object* v_val_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2014_; 
lean_dec(v___x_1998_);
lean_dec_ref(v___y_1995_);
lean_dec_ref(v___x_1993_);
lean_dec_ref(v___x_1992_);
lean_dec_ref(v___x_1991_);
lean_dec_ref(v___x_1990_);
v_val_2005_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2007_ = v___x_2000_;
v_isShared_2008_ = v_isSharedCheck_2014_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_val_2005_);
lean_dec(v___x_2000_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2014_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2012_; 
v___x_2009_ = lean_io_wait(v_val_2005_);
lean_dec(v___x_2009_);
v___x_2010_ = lean_box(0);
if (v_isShared_2008_ == 0)
{
lean_ctor_set_tag(v___x_2007_, 0);
lean_ctor_set(v___x_2007_, 0, v___x_2010_);
v___x_2012_ = v___x_2007_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_2010_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
else
{
lean_object* v_toCold_2015_; lean_object* v_cancelTk_x3f_2016_; 
lean_dec(v___x_2000_);
v_toCold_2015_ = lean_ctor_get(v___y_1995_, 0);
v_cancelTk_x3f_2016_ = lean_ctor_get(v_toCold_2015_, 10);
if (lean_obj_tag(v_cancelTk_x3f_2016_) == 1)
{
lean_object* v_val_2017_; lean_object* v___f_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v_val_2017_ = lean_ctor_get(v_cancelTk_x3f_2016_, 0);
lean_inc(v_val_2017_);
v___f_2018_ = lean_alloc_closure((void*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__0___boxed), 6, 2);
lean_closure_set(v___f_2018_, 0, v_val_2017_);
lean_closure_set(v___f_2018_, 1, v___x_1998_);
v___x_2019_ = lean_box(0);
v___x_2020_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___closed__0));
v___x_2021_ = l_Lean_Name_mkStr5(v___x_1990_, v___x_1991_, v___x_1992_, v___x_1993_, v___x_2020_);
v___x_2022_ = l_Lean_Name_toString(v___x_2021_, v___x_1994_);
v___x_2023_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___f_2018_, v___x_2019_, v___x_2022_, v___y_1995_, v___y_1996_);
if (lean_obj_tag(v___x_2023_) == 0)
{
lean_object* v_a_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; 
v_a_2024_ = lean_ctor_get(v___x_2023_, 0);
lean_inc(v_a_2024_);
lean_dec_ref_known(v___x_2023_, 1);
v___x_2025_ = lean_box(0);
v___x_2026_ = lean_apply_1(v_a_2024_, v___x_2025_);
v___x_2027_ = lean_unsigned_to_nat(0u);
v___x_2028_ = lean_io_as_task(v___x_2026_, v___x_2027_);
v___x_2029_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__2, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__2_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__main__cancel__once__async__1___closed__2);
lean_inc_ref(v_cancelTk_x3f_2016_);
v___x_2030_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2030_, 0, v___x_2019_);
lean_ctor_set(v___x_2030_, 1, v___x_2029_);
lean_ctor_set(v___x_2030_, 2, v_cancelTk_x3f_2016_);
lean_ctor_set(v___x_2030_, 3, v___x_2028_);
v___x_2031_ = l_Lean_Core_logSnapshotTask___redArg(v___x_2030_, v___y_1996_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
lean_dec_ref_known(v___x_2031_, 1);
v___x_2032_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__2);
v___x_2033_ = l_Lean_logInfo___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__1(v___x_2032_, v___y_1995_, v___y_1996_);
lean_dec_ref(v___y_1995_);
return v___x_2033_;
}
else
{
lean_dec_ref(v___y_1995_);
return v___x_2031_;
}
}
else
{
lean_object* v_a_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2041_; 
lean_dec_ref(v___y_1995_);
v_a_2034_ = lean_ctor_get(v___x_2023_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v___x_2023_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2036_ = v___x_2023_;
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_a_2034_);
lean_dec(v___x_2023_);
v___x_2036_ = lean_box(0);
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
v_resetjp_2035_:
{
lean_object* v___x_2039_; 
if (v_isShared_2037_ == 0)
{
v___x_2039_ = v___x_2036_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v_a_2034_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
}
}
}
}
else
{
lean_object* v___x_2042_; lean_object* v___x_2043_; 
lean_dec(v___x_1998_);
lean_dec_ref(v___x_1993_);
lean_dec_ref(v___x_1992_);
lean_dec_ref(v___x_1991_);
lean_dec_ref(v___x_1990_);
v___x_2042_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___closed__2, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___closed__2_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___closed__2);
v___x_2043_ = l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__2(v___x_2042_, v___y_1995_, v___y_1996_);
lean_dec_ref(v___y_1995_);
return v___x_2043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___boxed(lean_object* v___x_2046_, lean_object* v___x_2047_, lean_object* v___x_2048_, lean_object* v___x_2049_, lean_object* v___x_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_){
_start:
{
uint8_t v___x_7458__boxed_2054_; lean_object* v_res_2055_; 
v___x_7458__boxed_2054_ = lean_unbox(v___x_2050_);
v_res_2055_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1(v___x_2046_, v___x_2047_, v___x_2048_, v___x_2049_, v___x_7458__boxed_2054_, v___y_2051_, v___y_2052_);
lean_dec(v___y_2052_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1(lean_object* v_x_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_){
_start:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; uint8_t v___x_2065_; 
v___x_2060_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__0));
v___x_2061_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__1));
v___x_2062_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__2));
v___x_2063_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__cancel__once___closed__3));
v___x_2064_ = ((lean_object*)(l_Lean_Server_Test_Cancel_commandWait__for__cancel__once__command___00__closed__1));
v___x_2065_ = l_Lean_Syntax_isOfKind(v_x_2056_, v___x_2064_);
if (v___x_2065_ == 0)
{
lean_object* v___x_2066_; 
v___x_2066_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__3___redArg();
return v___x_2066_;
}
else
{
lean_object* v___x_2067_; lean_object* v___f_2068_; lean_object* v___x_2069_; 
v___x_2067_ = lean_box(v___x_2065_);
v___f_2068_ = lean_alloc_closure((void*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___lam__1___boxed), 8, 5);
lean_closure_set(v___f_2068_, 0, v___x_2060_);
lean_closure_set(v___f_2068_, 1, v___x_2061_);
lean_closure_set(v___f_2068_, 2, v___x_2062_);
lean_closure_set(v___f_2068_, 3, v___x_2063_);
lean_closure_set(v___f_2068_, 4, v___x_2067_);
v___x_2069_ = l_Lean_Elab_Command_liftCoreM___redArg(v___f_2068_, v_a_2057_, v_a_2058_);
return v___x_2069_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1___boxed(lean_object* v_x_2070_, lean_object* v_a_2071_, lean_object* v_a_2072_, lean_object* v_a_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1(v_x_2070_, v_a_2071_, v_a_2072_);
lean_dec(v_a_2072_);
lean_dec_ref(v_a_2071_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__0(lean_object* v_val_2075_, lean_object* v_inst_2076_, lean_object* v_a_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
lean_object* v___x_2081_; 
v___x_2081_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__0___redArg(v_val_2075_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__0___boxed(lean_object* v_val_2082_, lean_object* v_inst_2083_, lean_object* v_a_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_){
_start:
{
lean_object* v_res_2088_; 
v_res_2088_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__commandWait__for__cancel__once__command____1_spec__0(v_val_2082_, v_inst_2083_, v_a_2084_, v___y_2085_, v___y_2086_);
lean_dec(v___y_2086_);
lean_dec_ref(v___y_2085_);
lean_dec_ref(v_val_2082_);
return v_res_2088_;
}
}
static lean_object* _init_l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__0_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2089_ = lean_box(0);
v___x_2090_ = lean_unsigned_to_nat(16u);
v___x_2091_ = lean_mk_array(v___x_2090_, v___x_2089_);
return v___x_2091_;
}
}
static lean_object* _init_l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__1_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2092_ = lean_obj_once(&l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__0_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2_, &l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__0_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__0_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2_);
v___x_2093_ = lean_unsigned_to_nat(0u);
v___x_2094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2093_);
lean_ctor_set(v___x_2094_, 1, v___x_2092_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2096_ = lean_obj_once(&l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__1_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2_, &l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__1_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__1_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2_);
v___x_2097_ = lean_st_mk_ref(v___x_2096_);
v___x_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2097_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2____boxed(lean_object* v_a_2099_){
_start:
{
lean_object* v_res_2100_; 
v_res_2100_ = l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2_();
return v_res_2100_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__3___redArg(lean_object* v_a_2101_, lean_object* v_b_2102_, lean_object* v_x_2103_){
_start:
{
if (lean_obj_tag(v_x_2103_) == 0)
{
lean_dec(v_b_2102_);
lean_dec_ref(v_a_2101_);
return v_x_2103_;
}
else
{
lean_object* v_key_2104_; lean_object* v_value_2105_; lean_object* v_tail_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2118_; 
v_key_2104_ = lean_ctor_get(v_x_2103_, 0);
v_value_2105_ = lean_ctor_get(v_x_2103_, 1);
v_tail_2106_ = lean_ctor_get(v_x_2103_, 2);
v_isSharedCheck_2118_ = !lean_is_exclusive(v_x_2103_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2108_ = v_x_2103_;
v_isShared_2109_ = v_isSharedCheck_2118_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_tail_2106_);
lean_inc(v_value_2105_);
lean_inc(v_key_2104_);
lean_dec(v_x_2103_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2118_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
uint8_t v___x_2110_; 
v___x_2110_ = lean_string_dec_eq(v_key_2104_, v_a_2101_);
if (v___x_2110_ == 0)
{
lean_object* v___x_2111_; lean_object* v___x_2113_; 
v___x_2111_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__3___redArg(v_a_2101_, v_b_2102_, v_tail_2106_);
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 2, v___x_2111_);
v___x_2113_ = v___x_2108_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v_key_2104_);
lean_ctor_set(v_reuseFailAlloc_2114_, 1, v_value_2105_);
lean_ctor_set(v_reuseFailAlloc_2114_, 2, v___x_2111_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
return v___x_2113_;
}
}
else
{
lean_object* v___x_2116_; 
lean_dec(v_value_2105_);
lean_dec(v_key_2104_);
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 1, v_b_2102_);
lean_ctor_set(v___x_2108_, 0, v_a_2101_);
v___x_2116_ = v___x_2108_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_a_2101_);
lean_ctor_set(v_reuseFailAlloc_2117_, 1, v_b_2102_);
lean_ctor_set(v_reuseFailAlloc_2117_, 2, v_tail_2106_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_2119_, lean_object* v_x_2120_){
_start:
{
if (lean_obj_tag(v_x_2120_) == 0)
{
return v_x_2119_;
}
else
{
lean_object* v_key_2121_; lean_object* v_value_2122_; lean_object* v_tail_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2146_; 
v_key_2121_ = lean_ctor_get(v_x_2120_, 0);
v_value_2122_ = lean_ctor_get(v_x_2120_, 1);
v_tail_2123_ = lean_ctor_get(v_x_2120_, 2);
v_isSharedCheck_2146_ = !lean_is_exclusive(v_x_2120_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2125_ = v_x_2120_;
v_isShared_2126_ = v_isSharedCheck_2146_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_tail_2123_);
lean_inc(v_value_2122_);
lean_inc(v_key_2121_);
lean_dec(v_x_2120_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2146_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2127_; uint64_t v___x_2128_; uint64_t v___x_2129_; uint64_t v___x_2130_; uint64_t v_fold_2131_; uint64_t v___x_2132_; uint64_t v___x_2133_; uint64_t v___x_2134_; size_t v___x_2135_; size_t v___x_2136_; size_t v___x_2137_; size_t v___x_2138_; size_t v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2142_; 
v___x_2127_ = lean_array_get_size(v_x_2119_);
v___x_2128_ = lean_string_hash(v_key_2121_);
v___x_2129_ = 32ULL;
v___x_2130_ = lean_uint64_shift_right(v___x_2128_, v___x_2129_);
v_fold_2131_ = lean_uint64_xor(v___x_2128_, v___x_2130_);
v___x_2132_ = 16ULL;
v___x_2133_ = lean_uint64_shift_right(v_fold_2131_, v___x_2132_);
v___x_2134_ = lean_uint64_xor(v_fold_2131_, v___x_2133_);
v___x_2135_ = lean_uint64_to_usize(v___x_2134_);
v___x_2136_ = lean_usize_of_nat(v___x_2127_);
v___x_2137_ = ((size_t)1ULL);
v___x_2138_ = lean_usize_sub(v___x_2136_, v___x_2137_);
v___x_2139_ = lean_usize_land(v___x_2135_, v___x_2138_);
v___x_2140_ = lean_array_uget_borrowed(v_x_2119_, v___x_2139_);
lean_inc(v___x_2140_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 2, v___x_2140_);
v___x_2142_ = v___x_2125_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_key_2121_);
lean_ctor_set(v_reuseFailAlloc_2145_, 1, v_value_2122_);
lean_ctor_set(v_reuseFailAlloc_2145_, 2, v___x_2140_);
v___x_2142_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
lean_object* v___x_2143_; 
v___x_2143_ = lean_array_uset(v_x_2119_, v___x_2139_, v___x_2142_);
v_x_2119_ = v___x_2143_;
v_x_2120_ = v_tail_2123_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2_spec__3___redArg(lean_object* v_i_2147_, lean_object* v_source_2148_, lean_object* v_target_2149_){
_start:
{
lean_object* v___x_2150_; uint8_t v___x_2151_; 
v___x_2150_ = lean_array_get_size(v_source_2148_);
v___x_2151_ = lean_nat_dec_lt(v_i_2147_, v___x_2150_);
if (v___x_2151_ == 0)
{
lean_dec_ref(v_source_2148_);
lean_dec(v_i_2147_);
return v_target_2149_;
}
else
{
lean_object* v_es_2152_; lean_object* v___x_2153_; lean_object* v_source_2154_; lean_object* v_target_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v_es_2152_ = lean_array_fget(v_source_2148_, v_i_2147_);
v___x_2153_ = lean_box(0);
v_source_2154_ = lean_array_fset(v_source_2148_, v_i_2147_, v___x_2153_);
v_target_2155_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2_spec__3_spec__4___redArg(v_target_2149_, v_es_2152_);
v___x_2156_ = lean_unsigned_to_nat(1u);
v___x_2157_ = lean_nat_add(v_i_2147_, v___x_2156_);
lean_dec(v_i_2147_);
v_i_2147_ = v___x_2157_;
v_source_2148_ = v_source_2154_;
v_target_2149_ = v_target_2155_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2___redArg(lean_object* v_data_2159_){
_start:
{
lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v_nbuckets_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
v___x_2160_ = lean_array_get_size(v_data_2159_);
v___x_2161_ = lean_unsigned_to_nat(2u);
v_nbuckets_2162_ = lean_nat_mul(v___x_2160_, v___x_2161_);
v___x_2163_ = lean_unsigned_to_nat(0u);
v___x_2164_ = lean_box(0);
v___x_2165_ = lean_mk_array(v_nbuckets_2162_, v___x_2164_);
v___x_2166_ = lean_array_propagate_mark(v_data_2159_, v___x_2165_);
v___x_2167_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2_spec__3___redArg(v___x_2163_, v_data_2159_, v___x_2166_);
return v___x_2167_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0_spec__0___redArg(lean_object* v_a_2168_, lean_object* v_x_2169_){
_start:
{
if (lean_obj_tag(v_x_2169_) == 0)
{
uint8_t v___x_2170_; 
v___x_2170_ = 0;
return v___x_2170_;
}
else
{
lean_object* v_key_2171_; lean_object* v_tail_2172_; uint8_t v___x_2173_; 
v_key_2171_ = lean_ctor_get(v_x_2169_, 0);
v_tail_2172_ = lean_ctor_get(v_x_2169_, 2);
v___x_2173_ = lean_string_dec_eq(v_key_2171_, v_a_2168_);
if (v___x_2173_ == 0)
{
v_x_2169_ = v_tail_2172_;
goto _start;
}
else
{
return v___x_2173_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0_spec__0___redArg___boxed(lean_object* v_a_2175_, lean_object* v_x_2176_){
_start:
{
uint8_t v_res_2177_; lean_object* v_r_2178_; 
v_res_2177_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0_spec__0___redArg(v_a_2175_, v_x_2176_);
lean_dec(v_x_2176_);
lean_dec_ref(v_a_2175_);
v_r_2178_ = lean_box(v_res_2177_);
return v_r_2178_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(lean_object* v_m_2179_, lean_object* v_a_2180_, lean_object* v_b_2181_){
_start:
{
lean_object* v_size_2182_; lean_object* v_buckets_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2226_; 
v_size_2182_ = lean_ctor_get(v_m_2179_, 0);
v_buckets_2183_ = lean_ctor_get(v_m_2179_, 1);
v_isSharedCheck_2226_ = !lean_is_exclusive(v_m_2179_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2185_ = v_m_2179_;
v_isShared_2186_ = v_isSharedCheck_2226_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_buckets_2183_);
lean_inc(v_size_2182_);
lean_dec(v_m_2179_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2226_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2187_; uint64_t v___x_2188_; uint64_t v___x_2189_; uint64_t v___x_2190_; uint64_t v_fold_2191_; uint64_t v___x_2192_; uint64_t v___x_2193_; uint64_t v___x_2194_; size_t v___x_2195_; size_t v___x_2196_; size_t v___x_2197_; size_t v___x_2198_; size_t v___x_2199_; lean_object* v_bkt_2200_; uint8_t v___x_2201_; 
v___x_2187_ = lean_array_get_size(v_buckets_2183_);
v___x_2188_ = lean_string_hash(v_a_2180_);
v___x_2189_ = 32ULL;
v___x_2190_ = lean_uint64_shift_right(v___x_2188_, v___x_2189_);
v_fold_2191_ = lean_uint64_xor(v___x_2188_, v___x_2190_);
v___x_2192_ = 16ULL;
v___x_2193_ = lean_uint64_shift_right(v_fold_2191_, v___x_2192_);
v___x_2194_ = lean_uint64_xor(v_fold_2191_, v___x_2193_);
v___x_2195_ = lean_uint64_to_usize(v___x_2194_);
v___x_2196_ = lean_usize_of_nat(v___x_2187_);
v___x_2197_ = ((size_t)1ULL);
v___x_2198_ = lean_usize_sub(v___x_2196_, v___x_2197_);
v___x_2199_ = lean_usize_land(v___x_2195_, v___x_2198_);
v_bkt_2200_ = lean_array_uget_borrowed(v_buckets_2183_, v___x_2199_);
v___x_2201_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0_spec__0___redArg(v_a_2180_, v_bkt_2200_);
if (v___x_2201_ == 0)
{
lean_object* v___x_2202_; lean_object* v_size_x27_2203_; lean_object* v___x_2204_; lean_object* v_buckets_x27_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; uint8_t v___x_2211_; 
v___x_2202_ = lean_unsigned_to_nat(1u);
v_size_x27_2203_ = lean_nat_add(v_size_2182_, v___x_2202_);
lean_dec(v_size_2182_);
lean_inc(v_bkt_2200_);
v___x_2204_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2204_, 0, v_a_2180_);
lean_ctor_set(v___x_2204_, 1, v_b_2181_);
lean_ctor_set(v___x_2204_, 2, v_bkt_2200_);
v_buckets_x27_2205_ = lean_array_uset(v_buckets_2183_, v___x_2199_, v___x_2204_);
v___x_2206_ = lean_unsigned_to_nat(4u);
v___x_2207_ = lean_nat_mul(v_size_x27_2203_, v___x_2206_);
v___x_2208_ = lean_unsigned_to_nat(3u);
v___x_2209_ = lean_nat_div(v___x_2207_, v___x_2208_);
lean_dec(v___x_2207_);
v___x_2210_ = lean_array_get_size(v_buckets_x27_2205_);
v___x_2211_ = lean_nat_dec_le(v___x_2209_, v___x_2210_);
lean_dec(v___x_2209_);
if (v___x_2211_ == 0)
{
lean_object* v_val_2212_; lean_object* v___x_2214_; 
v_val_2212_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2___redArg(v_buckets_x27_2205_);
if (v_isShared_2186_ == 0)
{
lean_ctor_set(v___x_2185_, 1, v_val_2212_);
lean_ctor_set(v___x_2185_, 0, v_size_x27_2203_);
v___x_2214_ = v___x_2185_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v_size_x27_2203_);
lean_ctor_set(v_reuseFailAlloc_2215_, 1, v_val_2212_);
v___x_2214_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
return v___x_2214_;
}
}
else
{
lean_object* v___x_2217_; 
if (v_isShared_2186_ == 0)
{
lean_ctor_set(v___x_2185_, 1, v_buckets_x27_2205_);
lean_ctor_set(v___x_2185_, 0, v_size_x27_2203_);
v___x_2217_ = v___x_2185_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_size_x27_2203_);
lean_ctor_set(v_reuseFailAlloc_2218_, 1, v_buckets_x27_2205_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
else
{
lean_object* v___x_2219_; lean_object* v_buckets_x27_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2224_; 
lean_inc(v_bkt_2200_);
v___x_2219_ = lean_box(0);
v_buckets_x27_2220_ = lean_array_uset(v_buckets_2183_, v___x_2199_, v___x_2219_);
v___x_2221_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__3___redArg(v_a_2180_, v_b_2181_, v_bkt_2200_);
v___x_2222_ = lean_array_uset(v_buckets_x27_2220_, v___x_2199_, v___x_2221_);
if (v_isShared_2186_ == 0)
{
lean_ctor_set(v___x_2185_, 1, v___x_2222_);
v___x_2224_ = v___x_2185_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_size_2182_);
lean_ctor_set(v_reuseFailAlloc_2225_, 1, v___x_2222_);
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
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0___redArg(lean_object* v_m_2227_, lean_object* v_a_2228_){
_start:
{
lean_object* v_buckets_2229_; lean_object* v___x_2230_; uint64_t v___x_2231_; uint64_t v___x_2232_; uint64_t v___x_2233_; uint64_t v_fold_2234_; uint64_t v___x_2235_; uint64_t v___x_2236_; uint64_t v___x_2237_; size_t v___x_2238_; size_t v___x_2239_; size_t v___x_2240_; size_t v___x_2241_; size_t v___x_2242_; lean_object* v___x_2243_; uint8_t v___x_2244_; 
v_buckets_2229_ = lean_ctor_get(v_m_2227_, 1);
v___x_2230_ = lean_array_get_size(v_buckets_2229_);
v___x_2231_ = lean_string_hash(v_a_2228_);
v___x_2232_ = 32ULL;
v___x_2233_ = lean_uint64_shift_right(v___x_2231_, v___x_2232_);
v_fold_2234_ = lean_uint64_xor(v___x_2231_, v___x_2233_);
v___x_2235_ = 16ULL;
v___x_2236_ = lean_uint64_shift_right(v_fold_2234_, v___x_2235_);
v___x_2237_ = lean_uint64_xor(v_fold_2234_, v___x_2236_);
v___x_2238_ = lean_uint64_to_usize(v___x_2237_);
v___x_2239_ = lean_usize_of_nat(v___x_2230_);
v___x_2240_ = ((size_t)1ULL);
v___x_2241_ = lean_usize_sub(v___x_2239_, v___x_2240_);
v___x_2242_ = lean_usize_land(v___x_2238_, v___x_2241_);
v___x_2243_ = lean_array_uget_borrowed(v_buckets_2229_, v___x_2242_);
v___x_2244_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0_spec__0___redArg(v_a_2228_, v___x_2243_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0___redArg___boxed(lean_object* v_m_2245_, lean_object* v_a_2246_){
_start:
{
uint8_t v_res_2247_; lean_object* v_r_2248_; 
v_res_2247_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0___redArg(v_m_2245_, v_a_2246_);
lean_dec_ref(v_a_2246_);
lean_dec_ref(v_m_2245_);
v_r_2248_ = lean_box(v_res_2247_);
return v_r_2248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_mkTestTask(lean_object* v_label_2249_){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v_fst_2255_; lean_object* v_snd_2256_; uint8_t v___x_2258_; 
v___x_2251_ = lean_io_promise_new();
v___x_2252_ = l_Lean_Server_Test_Cancel_testTasksRef;
v___x_2253_ = lean_st_ref_take(v___x_2252_);
v___x_2258_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0___redArg(v___x_2253_, v_label_2249_);
if (v___x_2258_ == 0)
{
lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; 
lean_inc(v___x_2251_);
v___x_2259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2251_);
v___x_2260_ = lean_io_promise_result_opt(v___x_2251_);
lean_dec(v___x_2251_);
v___x_2261_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v___x_2253_, v_label_2249_, v___x_2260_);
v_fst_2255_ = v___x_2259_;
v_snd_2256_ = v___x_2261_;
goto v___jp_2254_;
}
else
{
lean_object* v___x_2262_; 
lean_dec(v___x_2251_);
lean_dec_ref(v_label_2249_);
v___x_2262_ = lean_box(0);
v_fst_2255_ = v___x_2262_;
v_snd_2256_ = v___x_2253_;
goto v___jp_2254_;
}
v___jp_2254_:
{
lean_object* v___x_2257_; 
v___x_2257_ = lean_st_ref_put(v___x_2252_, v_snd_2256_);
return v_fst_2255_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_mkTestTask___boxed(lean_object* v_label_2263_, lean_object* v_a_2264_){
_start:
{
lean_object* v_res_2265_; 
v_res_2265_ = l_Lean_Server_Test_Cancel_mkTestTask(v_label_2263_);
return v_res_2265_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0(lean_object* v_00_u03b2_2266_, lean_object* v_m_2267_, lean_object* v_a_2268_){
_start:
{
uint8_t v___x_2269_; 
v___x_2269_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0___redArg(v_m_2267_, v_a_2268_);
return v___x_2269_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0___boxed(lean_object* v_00_u03b2_2270_, lean_object* v_m_2271_, lean_object* v_a_2272_){
_start:
{
uint8_t v_res_2273_; lean_object* v_r_2274_; 
v_res_2273_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0(v_00_u03b2_2270_, v_m_2271_, v_a_2272_);
lean_dec_ref(v_a_2272_);
lean_dec_ref(v_m_2271_);
v_r_2274_ = lean_box(v_res_2273_);
return v_r_2274_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1(lean_object* v_00_u03b2_2275_, lean_object* v_m_2276_, lean_object* v_a_2277_, lean_object* v_b_2278_){
_start:
{
lean_object* v___x_2279_; 
v___x_2279_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_m_2276_, v_a_2277_, v_b_2278_);
return v___x_2279_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0_spec__0(lean_object* v_00_u03b2_2280_, lean_object* v_a_2281_, lean_object* v_x_2282_){
_start:
{
uint8_t v___x_2283_; 
v___x_2283_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0_spec__0___redArg(v_a_2281_, v_x_2282_);
return v___x_2283_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2284_, lean_object* v_a_2285_, lean_object* v_x_2286_){
_start:
{
uint8_t v_res_2287_; lean_object* v_r_2288_; 
v_res_2287_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Server_Test_Cancel_mkTestTask_spec__0_spec__0(v_00_u03b2_2284_, v_a_2285_, v_x_2286_);
lean_dec(v_x_2286_);
lean_dec_ref(v_a_2285_);
v_r_2288_ = lean_box(v_res_2287_);
return v_r_2288_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2(lean_object* v_00_u03b2_2289_, lean_object* v_data_2290_){
_start:
{
lean_object* v___x_2291_; 
v___x_2291_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2___redArg(v_data_2290_);
return v___x_2291_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__3(lean_object* v_00_u03b2_2292_, lean_object* v_a_2293_, lean_object* v_b_2294_, lean_object* v_x_2295_){
_start:
{
lean_object* v___x_2296_; 
v___x_2296_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__3___redArg(v_a_2293_, v_b_2294_, v_x_2295_);
return v___x_2296_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2297_, lean_object* v_i_2298_, lean_object* v_source_2299_, lean_object* v_target_2300_){
_start:
{
lean_object* v___x_2301_; 
v___x_2301_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2_spec__3___redArg(v_i_2298_, v_source_2299_, v_target_2300_);
return v___x_2301_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_2302_, lean_object* v_x_2303_, lean_object* v_x_2304_){
_start:
{
lean_object* v___x_2305_; 
v___x_2305_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1_spec__2_spec__3_spec__4___redArg(v_x_2303_, v_x_2304_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0_spec__0___redArg(lean_object* v_a_2331_, lean_object* v_x_2332_){
_start:
{
if (lean_obj_tag(v_x_2332_) == 0)
{
lean_object* v___x_2333_; 
v___x_2333_ = lean_box(0);
return v___x_2333_;
}
else
{
lean_object* v_key_2334_; lean_object* v_value_2335_; lean_object* v_tail_2336_; uint8_t v___x_2337_; 
v_key_2334_ = lean_ctor_get(v_x_2332_, 0);
v_value_2335_ = lean_ctor_get(v_x_2332_, 1);
v_tail_2336_ = lean_ctor_get(v_x_2332_, 2);
v___x_2337_ = lean_string_dec_eq(v_key_2334_, v_a_2331_);
if (v___x_2337_ == 0)
{
v_x_2332_ = v_tail_2336_;
goto _start;
}
else
{
lean_object* v___x_2339_; 
lean_inc(v_value_2335_);
v___x_2339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2339_, 0, v_value_2335_);
return v___x_2339_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0_spec__0___redArg___boxed(lean_object* v_a_2340_, lean_object* v_x_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0_spec__0___redArg(v_a_2340_, v_x_2341_);
lean_dec(v_x_2341_);
lean_dec_ref(v_a_2340_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(lean_object* v_m_2343_, lean_object* v_a_2344_){
_start:
{
lean_object* v_buckets_2345_; lean_object* v___x_2346_; uint64_t v___x_2347_; uint64_t v___x_2348_; uint64_t v___x_2349_; uint64_t v_fold_2350_; uint64_t v___x_2351_; uint64_t v___x_2352_; uint64_t v___x_2353_; size_t v___x_2354_; size_t v___x_2355_; size_t v___x_2356_; size_t v___x_2357_; size_t v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v_buckets_2345_ = lean_ctor_get(v_m_2343_, 1);
v___x_2346_ = lean_array_get_size(v_buckets_2345_);
v___x_2347_ = lean_string_hash(v_a_2344_);
v___x_2348_ = 32ULL;
v___x_2349_ = lean_uint64_shift_right(v___x_2347_, v___x_2348_);
v_fold_2350_ = lean_uint64_xor(v___x_2347_, v___x_2349_);
v___x_2351_ = 16ULL;
v___x_2352_ = lean_uint64_shift_right(v_fold_2350_, v___x_2351_);
v___x_2353_ = lean_uint64_xor(v_fold_2350_, v___x_2352_);
v___x_2354_ = lean_uint64_to_usize(v___x_2353_);
v___x_2355_ = lean_usize_of_nat(v___x_2346_);
v___x_2356_ = ((size_t)1ULL);
v___x_2357_ = lean_usize_sub(v___x_2355_, v___x_2356_);
v___x_2358_ = lean_usize_land(v___x_2354_, v___x_2357_);
v___x_2359_ = lean_array_uget_borrowed(v_buckets_2345_, v___x_2358_);
v___x_2360_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0_spec__0___redArg(v_a_2344_, v___x_2359_);
return v___x_2360_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg___boxed(lean_object* v_m_2361_, lean_object* v_a_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(v_m_2361_, v_a_2362_);
lean_dec_ref(v_a_2362_);
lean_dec_ref(v_m_2361_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg(lean_object* v_x_2367_, lean_object* v_a_2368_){
_start:
{
lean_object* v___x_2370_; uint8_t v___x_2371_; 
v___x_2370_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__test__task___00__closed__1));
lean_inc(v_x_2367_);
v___x_2371_ = l_Lean_Syntax_isOfKind(v_x_2367_, v___x_2370_);
if (v___x_2371_ == 0)
{
lean_object* v___x_2372_; 
lean_dec(v_x_2367_);
v___x_2372_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_2372_;
}
else
{
lean_object* v___x_2373_; lean_object* v_label_2374_; lean_object* v_label_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; 
v___x_2373_ = lean_unsigned_to_nat(1u);
v_label_2374_ = l_Lean_Syntax_getArg(v_x_2367_, v___x_2373_);
lean_dec(v_x_2367_);
v_label_2375_ = l_Lean_TSyntax_getString(v_label_2374_);
lean_dec(v_label_2374_);
v___x_2376_ = l_Lean_Server_Test_Cancel_testTasksRef;
v___x_2377_ = lean_st_ref_get(v___x_2376_);
v___x_2378_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(v___x_2377_, v_label_2375_);
lean_dec(v___x_2377_);
if (lean_obj_tag(v___x_2378_) == 0)
{
lean_object* v_ref_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v_ref_2379_ = lean_ctor_get(v_a_2368_, 2);
v___x_2380_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___closed__0));
v___x_2381_ = lean_string_append(v___x_2380_, v_label_2375_);
lean_dec_ref(v_label_2375_);
v___x_2382_ = l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3(v___x_2381_);
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_object* v_a_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2390_; 
v_a_2383_ = lean_ctor_get(v___x_2382_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2385_ = v___x_2382_;
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_a_2383_);
lean_dec(v___x_2382_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
lean_object* v___x_2388_; 
if (v_isShared_2386_ == 0)
{
v___x_2388_ = v___x_2385_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_a_2383_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
return v___x_2388_;
}
}
}
else
{
lean_object* v_a_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2402_; 
v_a_2391_ = lean_ctor_get(v___x_2382_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2393_ = v___x_2382_;
v_isShared_2394_ = v_isSharedCheck_2402_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_a_2391_);
lean_dec(v___x_2382_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2402_;
goto v_resetjp_2392_;
}
v_resetjp_2392_:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2400_; 
v___x_2395_ = lean_io_error_to_string(v_a_2391_);
v___x_2396_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2395_);
v___x_2397_ = l_Lean_MessageData_ofFormat(v___x_2396_);
lean_inc(v_ref_2379_);
v___x_2398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2398_, 0, v_ref_2379_);
lean_ctor_set(v___x_2398_, 1, v___x_2397_);
if (v_isShared_2394_ == 0)
{
lean_ctor_set(v___x_2393_, 0, v___x_2398_);
v___x_2400_ = v___x_2393_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v___x_2398_);
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
else
{
lean_object* v_val_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2445_; 
v_val_2403_ = lean_ctor_get(v___x_2378_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v___x_2378_);
if (v_isSharedCheck_2445_ == 0)
{
v___x_2405_ = v___x_2378_;
v_isShared_2406_ = v_isSharedCheck_2445_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_val_2403_);
lean_dec(v___x_2378_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2445_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2407_; 
v___x_2407_ = lean_io_wait(v_val_2403_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_ref_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; 
v_ref_2408_ = lean_ctor_get(v_a_2368_, 2);
v___x_2409_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___closed__1));
v___x_2410_ = lean_string_append(v___x_2409_, v_label_2375_);
lean_dec_ref(v_label_2375_);
v___x_2411_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___closed__2));
v___x_2412_ = lean_string_append(v___x_2410_, v___x_2411_);
v___x_2413_ = l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3(v___x_2412_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2421_; 
lean_del_object(v___x_2405_);
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2416_ = v___x_2413_;
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2413_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2419_; 
if (v_isShared_2417_ == 0)
{
v___x_2419_ = v___x_2416_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_a_2414_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2435_; 
v_a_2422_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2435_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2435_ == 0)
{
v___x_2424_ = v___x_2413_;
v_isShared_2425_ = v_isSharedCheck_2435_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2413_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2435_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2426_; lean_object* v___x_2428_; 
v___x_2426_ = lean_io_error_to_string(v_a_2422_);
if (v_isShared_2406_ == 0)
{
lean_ctor_set_tag(v___x_2405_, 3);
lean_ctor_set(v___x_2405_, 0, v___x_2426_);
v___x_2428_ = v___x_2405_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v___x_2426_);
v___x_2428_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2432_; 
v___x_2429_ = l_Lean_MessageData_ofFormat(v___x_2428_);
lean_inc(v_ref_2408_);
v___x_2430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2430_, 0, v_ref_2408_);
lean_ctor_set(v___x_2430_, 1, v___x_2429_);
if (v_isShared_2425_ == 0)
{
lean_ctor_set(v___x_2424_, 0, v___x_2430_);
v___x_2432_ = v___x_2424_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v___x_2430_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
}
}
else
{
lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2443_; 
lean_del_object(v___x_2405_);
lean_dec_ref(v_label_2375_);
v_isSharedCheck_2443_ = !lean_is_exclusive(v___x_2407_);
if (v_isSharedCheck_2443_ == 0)
{
lean_object* v_unused_2444_; 
v_unused_2444_ = lean_ctor_get(v___x_2407_, 0);
lean_dec(v_unused_2444_);
v___x_2437_ = v___x_2407_;
v_isShared_2438_ = v_isSharedCheck_2443_;
goto v_resetjp_2436_;
}
else
{
lean_dec(v___x_2407_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2443_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2439_; lean_object* v___x_2441_; 
v___x_2439_ = lean_box(0);
if (v_isShared_2438_ == 0)
{
lean_ctor_set_tag(v___x_2437_, 0);
lean_ctor_set(v___x_2437_, 0, v___x_2439_);
v___x_2441_ = v___x_2437_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2439_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___boxed(lean_object* v_x_2446_, lean_object* v_a_2447_, lean_object* v_a_2448_){
_start:
{
lean_object* v_res_2449_; 
v_res_2449_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg(v_x_2446_, v_a_2447_);
lean_dec_ref(v_a_2447_);
return v_res_2449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1(lean_object* v_x_2450_, lean_object* v_a_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg(v_x_2450_, v_a_2457_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___boxed(lean_object* v_x_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_){
_start:
{
lean_object* v_res_2471_; 
v_res_2471_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1(v_x_2461_, v_a_2462_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_, v_a_2469_);
lean_dec(v_a_2469_);
lean_dec_ref(v_a_2468_);
lean_dec(v_a_2467_);
lean_dec_ref(v_a_2466_);
lean_dec(v_a_2465_);
lean_dec_ref(v_a_2464_);
lean_dec(v_a_2463_);
lean_dec_ref(v_a_2462_);
return v_res_2471_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0(lean_object* v_00_u03b2_2472_, lean_object* v_m_2473_, lean_object* v_a_2474_){
_start:
{
lean_object* v___x_2475_; 
v___x_2475_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(v_m_2473_, v_a_2474_);
return v___x_2475_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___boxed(lean_object* v_00_u03b2_2476_, lean_object* v_m_2477_, lean_object* v_a_2478_){
_start:
{
lean_object* v_res_2479_; 
v_res_2479_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0(v_00_u03b2_2476_, v_m_2477_, v_a_2478_);
lean_dec_ref(v_a_2478_);
lean_dec_ref(v_m_2477_);
return v_res_2479_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0_spec__0(lean_object* v_00_u03b2_2480_, lean_object* v_a_2481_, lean_object* v_x_2482_){
_start:
{
lean_object* v___x_2483_; 
v___x_2483_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0_spec__0___redArg(v_a_2481_, v_x_2482_);
return v___x_2483_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2484_, lean_object* v_a_2485_, lean_object* v_x_2486_){
_start:
{
lean_object* v_res_2487_; 
v_res_2487_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0_spec__0(v_00_u03b2_2484_, v_a_2485_, v_x_2486_);
lean_dec(v_x_2486_);
lean_dec_ref(v_a_2485_);
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_1277954624____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
v___x_2489_ = lean_obj_once(&l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__1_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2_, &l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__1_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2__once, _init_l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn___closed__1_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2_);
v___x_2490_ = lean_st_mk_ref(v___x_2489_);
v___x_2491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2491_, 0, v___x_2490_);
return v___x_2491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_1277954624____hygCtx___hyg_2____boxed(lean_object* v_a_2492_){
_start:
{
lean_object* v_res_2493_; 
v_res_2493_ = l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_1277954624____hygCtx___hyg_2_();
return v_res_2493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_getSyncPromise(lean_object* v_label_2494_){
_start:
{
lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v_fst_2500_; lean_object* v_snd_2501_; lean_object* v___x_2503_; 
v___x_2496_ = lean_io_promise_new();
v___x_2497_ = l_Lean_Server_Test_Cancel_syncPromisesRef;
v___x_2498_ = lean_st_ref_take(v___x_2497_);
v___x_2503_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(v___x_2498_, v_label_2494_);
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_object* v___x_2504_; 
lean_inc(v___x_2496_);
v___x_2504_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v___x_2498_, v_label_2494_, v___x_2496_);
v_fst_2500_ = v___x_2496_;
v_snd_2501_ = v___x_2504_;
goto v___jp_2499_;
}
else
{
lean_object* v_val_2505_; 
lean_dec(v___x_2496_);
lean_dec_ref(v_label_2494_);
v_val_2505_ = lean_ctor_get(v___x_2503_, 0);
lean_inc(v_val_2505_);
lean_dec_ref_known(v___x_2503_, 1);
v_fst_2500_ = v_val_2505_;
v_snd_2501_ = v___x_2498_;
goto v___jp_2499_;
}
v___jp_2499_:
{
lean_object* v___x_2502_; 
v___x_2502_ = lean_st_ref_put(v___x_2497_, v_snd_2501_);
return v_fst_2500_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_getSyncPromise___boxed(lean_object* v_label_2506_, lean_object* v_a_2507_){
_start:
{
lean_object* v_res_2508_; 
v_res_2508_ = l_Lean_Server_Test_Cancel_getSyncPromise(v_label_2506_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_resolveSyncPromise(lean_object* v_label_2509_){
_start:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2511_ = l_Lean_Server_Test_Cancel_getSyncPromise(v_label_2509_);
v___x_2512_ = lean_box(0);
v___x_2513_ = lean_io_promise_resolve(v___x_2512_, v___x_2511_);
lean_dec(v___x_2511_);
return v___x_2513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel_resolveSyncPromise___boxed(lean_object* v_label_2514_, lean_object* v_a_2515_){
_start:
{
lean_object* v_res_2516_; 
v_res_2516_ = l_Lean_Server_Test_Cancel_resolveSyncPromise(v_label_2514_);
return v_res_2516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1___redArg(lean_object* v_x_2538_, lean_object* v_a_2539_){
_start:
{
lean_object* v___x_2541_; uint8_t v___x_2542_; 
v___x_2541_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticWait__for__sync___00__closed__1));
lean_inc(v_x_2538_);
v___x_2542_ = l_Lean_Syntax_isOfKind(v_x_2538_, v___x_2541_);
if (v___x_2542_ == 0)
{
lean_object* v___x_2543_; 
lean_dec(v_x_2538_);
v___x_2543_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_2543_;
}
else
{
lean_object* v___x_2544_; lean_object* v_label_2545_; lean_object* v_lbl_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2544_ = lean_unsigned_to_nat(1u);
v_label_2545_ = l_Lean_Syntax_getArg(v_x_2538_, v___x_2544_);
lean_dec(v_x_2538_);
v_lbl_2546_ = l_Lean_TSyntax_getString(v_label_2545_);
lean_dec(v_label_2545_);
lean_inc_ref(v_lbl_2546_);
v___x_2547_ = l_Lean_Server_Test_Cancel_getSyncPromise(v_lbl_2546_);
v___x_2548_ = lean_io_promise_result_opt(v___x_2547_);
lean_dec(v___x_2547_);
v___x_2549_ = lean_io_wait(v___x_2548_);
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v_ref_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
v_ref_2550_ = lean_ctor_get(v_a_2539_, 2);
v___x_2551_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1___redArg___closed__0));
v___x_2552_ = lean_string_append(v___x_2551_, v_lbl_2546_);
lean_dec_ref(v_lbl_2546_);
v___x_2553_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1___redArg___closed__2));
v___x_2554_ = lean_string_append(v___x_2552_, v___x_2553_);
v___x_2555_ = l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3(v___x_2554_);
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v_a_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2563_; 
v_a_2556_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2563_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2558_ = v___x_2555_;
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_a_2556_);
lean_dec(v___x_2555_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v___x_2561_; 
if (v_isShared_2559_ == 0)
{
v___x_2561_ = v___x_2558_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v_a_2556_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
return v___x_2561_;
}
}
}
else
{
lean_object* v_a_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2575_; 
v_a_2564_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2575_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2575_ == 0)
{
v___x_2566_ = v___x_2555_;
v_isShared_2567_ = v_isSharedCheck_2575_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_a_2564_);
lean_dec(v___x_2555_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2575_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2573_; 
v___x_2568_ = lean_io_error_to_string(v_a_2564_);
v___x_2569_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
v___x_2570_ = l_Lean_MessageData_ofFormat(v___x_2569_);
lean_inc(v_ref_2550_);
v___x_2571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2571_, 0, v_ref_2550_);
lean_ctor_set(v___x_2571_, 1, v___x_2570_);
if (v_isShared_2567_ == 0)
{
lean_ctor_set(v___x_2566_, 0, v___x_2571_);
v___x_2573_ = v___x_2566_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v___x_2571_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
}
}
else
{
lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2583_; 
lean_dec_ref(v_lbl_2546_);
v_isSharedCheck_2583_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2583_ == 0)
{
lean_object* v_unused_2584_; 
v_unused_2584_ = lean_ctor_get(v___x_2549_, 0);
lean_dec(v_unused_2584_);
v___x_2577_ = v___x_2549_;
v_isShared_2578_ = v_isSharedCheck_2583_;
goto v_resetjp_2576_;
}
else
{
lean_dec(v___x_2549_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2583_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2579_; lean_object* v___x_2581_; 
v___x_2579_ = lean_box(0);
if (v_isShared_2578_ == 0)
{
lean_ctor_set_tag(v___x_2577_, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2579_);
v___x_2581_ = v___x_2577_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v___x_2579_);
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
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1___redArg___boxed(lean_object* v_x_2585_, lean_object* v_a_2586_, lean_object* v_a_2587_){
_start:
{
lean_object* v_res_2588_; 
v_res_2588_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1___redArg(v_x_2585_, v_a_2586_);
lean_dec_ref(v_a_2586_);
return v_res_2588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1(lean_object* v_x_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_){
_start:
{
lean_object* v___x_2599_; 
v___x_2599_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1___redArg(v_x_2589_, v_a_2596_);
return v___x_2599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1___boxed(lean_object* v_x_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_, lean_object* v_a_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_){
_start:
{
lean_object* v_res_2610_; 
v_res_2610_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__sync____1(v_x_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_, v_a_2605_, v_a_2606_, v_a_2607_, v_a_2608_);
lean_dec(v_a_2608_);
lean_dec_ref(v_a_2607_);
lean_dec(v_a_2606_);
lean_dec_ref(v_a_2605_);
lean_dec(v_a_2604_);
lean_dec_ref(v_a_2603_);
lean_dec(v_a_2602_);
lean_dec_ref(v_a_2601_);
return v_res_2610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___lam__0(lean_object* v___x_2631_, lean_object* v_val_2632_, lean_object* v_a_x3f_2633_){
_start:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___x_2635_ = lean_io_promise_resolve(v___x_2631_, v_val_2632_);
v___x_2636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2636_, 0, v___x_2635_);
return v___x_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___lam__0___boxed(lean_object* v___x_2637_, lean_object* v_val_2638_, lean_object* v_a_x3f_2639_, lean_object* v___y_2640_){
_start:
{
lean_object* v_res_2641_; 
v_res_2641_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___lam__0(v___x_2637_, v_val_2638_, v_a_x3f_2639_);
lean_dec(v_a_x3f_2639_);
lean_dec(v_val_2638_);
return v_res_2641_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1_spec__0___redArg(lean_object* v___y_2642_){
_start:
{
lean_object* v_toCold_2648_; lean_object* v_cancelTk_x3f_2649_; 
v_toCold_2648_ = lean_ctor_get(v___y_2642_, 0);
v_cancelTk_x3f_2649_ = lean_ctor_get(v_toCold_2648_, 10);
if (lean_obj_tag(v_cancelTk_x3f_2649_) == 1)
{
lean_object* v_val_2650_; uint8_t v___x_2651_; 
v_val_2650_ = lean_ctor_get(v_cancelTk_x3f_2649_, 0);
v___x_2651_ = l_IO_CancelToken_isSet(v_val_2650_);
if (v___x_2651_ == 0)
{
goto v___jp_2644_;
}
else
{
lean_object* v___x_2652_; 
v___x_2652_ = l_Lean_throwInterruptException___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__4___redArg();
if (lean_obj_tag(v___x_2652_) == 0)
{
lean_dec_ref_known(v___x_2652_, 1);
goto v___jp_2644_;
}
else
{
return v___x_2652_;
}
}
}
else
{
goto v___jp_2644_;
}
v___jp_2644_:
{
uint32_t v___x_2645_; lean_object* v___x_2646_; 
v___x_2645_ = 10;
v___x_2646_ = l_IO_sleep(v___x_2645_);
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1_spec__0___redArg___boxed(lean_object* v___y_2653_, lean_object* v___y_2654_){
_start:
{
lean_object* v_res_2655_; 
v_res_2655_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1_spec__0___redArg(v___y_2653_);
lean_dec_ref(v___y_2653_);
return v_res_2655_;
}
}
static lean_object* _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__1(void){
_start:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; 
v___x_2657_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__11));
v___x_2658_ = lean_unsigned_to_nat(50u);
v___x_2659_ = lean_unsigned_to_nat(302u);
v___x_2660_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__0));
v___x_2661_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1___lam__0___closed__9));
v___x_2662_ = l_mkPanicMessageWithDecl(v___x_2661_, v___x_2660_, v___x_2659_, v___x_2658_, v___x_2657_);
return v___x_2662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1(lean_object* v_x_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_, lean_object* v_a_2674_){
_start:
{
lean_object* v___x_2676_; uint8_t v___x_2677_; 
v___x_2676_ = ((lean_object*)(l_Lean_Server_Test_Cancel_tacticBlock__until__cancelled___00__closed__1));
lean_inc(v_x_2666_);
v___x_2677_ = l_Lean_Syntax_isOfKind(v_x_2666_, v___x_2676_);
if (v___x_2677_ == 0)
{
lean_object* v___x_2678_; 
lean_dec(v_x_2666_);
v___x_2678_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_2678_;
}
else
{
lean_object* v___x_2679_; lean_object* v_label_2680_; lean_object* v_lbl_2681_; lean_object* v___x_2682_; 
v___x_2679_ = lean_unsigned_to_nat(1u);
v_label_2680_ = l_Lean_Syntax_getArg(v_x_2666_, v___x_2679_);
lean_dec(v_x_2666_);
v_lbl_2681_ = l_Lean_TSyntax_getString(v_label_2680_);
lean_dec(v_label_2680_);
lean_inc_ref(v_lbl_2681_);
v___x_2682_ = l_Lean_Server_Test_Cancel_mkTestTask(v_lbl_2681_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2683_ = l_Lean_Server_Test_Cancel_testTasksRef;
v___x_2684_ = lean_st_ref_get(v___x_2683_);
v___x_2685_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(v___x_2684_, v_lbl_2681_);
lean_dec_ref(v_lbl_2681_);
lean_dec(v___x_2684_);
if (lean_obj_tag(v___x_2685_) == 1)
{
lean_object* v_val_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2695_; 
v_val_2686_ = lean_ctor_get(v___x_2685_, 0);
v_isSharedCheck_2695_ = !lean_is_exclusive(v___x_2685_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2688_ = v___x_2685_;
v_isShared_2689_ = v_isSharedCheck_2695_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_val_2686_);
lean_dec(v___x_2685_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2695_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2693_; 
v___x_2690_ = lean_box(0);
v___x_2691_ = lean_io_wait(v_val_2686_);
lean_dec(v___x_2691_);
if (v_isShared_2689_ == 0)
{
lean_ctor_set_tag(v___x_2688_, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2690_);
v___x_2693_ = v___x_2688_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v___x_2690_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
return v___x_2693_;
}
}
}
else
{
lean_object* v___x_2696_; lean_object* v___x_2697_; 
lean_dec(v___x_2685_);
v___x_2696_ = lean_obj_once(&l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__1, &l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__1_once, _init_l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__1);
v___x_2697_ = l_panic___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__5(v___x_2696_, v_a_2667_, v_a_2668_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_);
return v___x_2697_;
}
}
else
{
lean_object* v_val_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2744_; 
v_val_2698_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2700_ = v___x_2682_;
v_isShared_2701_ = v_isSharedCheck_2744_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_val_2698_);
lean_dec(v___x_2682_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2744_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v_ref_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; 
v_ref_2702_ = lean_ctor_get(v_a_2673_, 2);
v___x_2703_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__2));
lean_inc_ref(v_lbl_2681_);
v___x_2704_ = lean_string_append(v_lbl_2681_, v___x_2703_);
v___x_2705_ = l_IO_eprintln___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__3(v___x_2704_);
if (lean_obj_tag(v___x_2705_) == 0)
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
lean_dec_ref_known(v___x_2705_, 1);
lean_del_object(v___x_2700_);
v___x_2706_ = l_Lean_Server_Test_Cancel_resolveSyncPromise(v_lbl_2681_);
v___x_2707_ = lean_box(0);
v___x_2708_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1_spec__0___redArg(v_a_2673_);
if (lean_obj_tag(v___x_2708_) == 0)
{
lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2717_; 
lean_dec_ref_known(v___x_2708_, 1);
v___x_2709_ = ((lean_object*)(l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___closed__3));
v___x_2710_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___lam__0(v___x_2707_, v_val_2698_, v___x_2709_);
lean_dec(v_val_2698_);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2717_ == 0)
{
lean_object* v_unused_2718_; 
v_unused_2718_ = lean_ctor_get(v___x_2710_, 0);
lean_dec(v_unused_2718_);
v___x_2712_ = v___x_2710_;
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
else
{
lean_dec(v___x_2710_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2715_; 
if (v_isShared_2713_ == 0)
{
lean_ctor_set(v___x_2712_, 0, v___x_2707_);
v___x_2715_ = v___x_2712_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v___x_2707_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
}
}
}
else
{
lean_object* v_a_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2728_; 
v_a_2719_ = lean_ctor_get(v___x_2708_, 0);
lean_inc(v_a_2719_);
lean_dec_ref_known(v___x_2708_, 1);
v___x_2720_ = lean_box(0);
v___x_2721_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___lam__0(v___x_2707_, v_val_2698_, v___x_2720_);
lean_dec(v_val_2698_);
v_isSharedCheck_2728_ = !lean_is_exclusive(v___x_2721_);
if (v_isSharedCheck_2728_ == 0)
{
lean_object* v_unused_2729_; 
v_unused_2729_ = lean_ctor_get(v___x_2721_, 0);
lean_dec(v_unused_2729_);
v___x_2723_ = v___x_2721_;
v_isShared_2724_ = v_isSharedCheck_2728_;
goto v_resetjp_2722_;
}
else
{
lean_dec(v___x_2721_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2728_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v___x_2726_; 
if (v_isShared_2724_ == 0)
{
lean_ctor_set_tag(v___x_2723_, 1);
lean_ctor_set(v___x_2723_, 0, v_a_2719_);
v___x_2726_ = v___x_2723_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v_a_2719_);
v___x_2726_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
return v___x_2726_;
}
}
}
}
else
{
lean_object* v_a_2730_; lean_object* v___x_2732_; uint8_t v_isShared_2733_; uint8_t v_isSharedCheck_2743_; 
lean_dec(v_val_2698_);
lean_dec_ref(v_lbl_2681_);
v_a_2730_ = lean_ctor_get(v___x_2705_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2705_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2732_ = v___x_2705_;
v_isShared_2733_ = v_isSharedCheck_2743_;
goto v_resetjp_2731_;
}
else
{
lean_inc(v_a_2730_);
lean_dec(v___x_2705_);
v___x_2732_ = lean_box(0);
v_isShared_2733_ = v_isSharedCheck_2743_;
goto v_resetjp_2731_;
}
v_resetjp_2731_:
{
lean_object* v___x_2734_; lean_object* v___x_2736_; 
v___x_2734_ = lean_io_error_to_string(v_a_2730_);
if (v_isShared_2701_ == 0)
{
lean_ctor_set_tag(v___x_2700_, 3);
lean_ctor_set(v___x_2700_, 0, v___x_2734_);
v___x_2736_ = v___x_2700_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v___x_2734_);
v___x_2736_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2740_; 
v___x_2737_ = l_Lean_MessageData_ofFormat(v___x_2736_);
lean_inc(v_ref_2702_);
v___x_2738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2738_, 0, v_ref_2702_);
lean_ctor_set(v___x_2738_, 1, v___x_2737_);
if (v_isShared_2733_ == 0)
{
lean_ctor_set(v___x_2732_, 0, v___x_2738_);
v___x_2740_ = v___x_2732_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v___x_2738_);
v___x_2740_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
return v___x_2740_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1___boxed(lean_object* v_x_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_, lean_object* v_a_2751_, lean_object* v_a_2752_, lean_object* v_a_2753_, lean_object* v_a_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = l_Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1(v_x_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_, v_a_2752_, v_a_2753_);
lean_dec(v_a_2753_);
lean_dec_ref(v_a_2752_);
lean_dec(v_a_2751_);
lean_dec_ref(v_a_2750_);
lean_dec(v_a_2749_);
lean_dec_ref(v_a_2748_);
lean_dec(v_a_2747_);
lean_dec_ref(v_a_2746_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1_spec__0(lean_object* v_inst_2756_, lean_object* v_a_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_){
_start:
{
lean_object* v___x_2767_; 
v___x_2767_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1_spec__0___redArg(v___y_2764_);
return v___x_2767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1_spec__0___boxed(lean_object* v_inst_2768_, lean_object* v_a_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticBlock__until__cancelled____1_spec__0(v_inst_2768_, v_a_2769_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_);
lean_dec(v___y_2777_);
lean_dec_ref(v___y_2776_);
lean_dec(v___y_2775_);
lean_dec_ref(v___y_2774_);
lean_dec(v___y_2773_);
lean_dec_ref(v___y_2772_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
return v_res_2779_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Test_Cancel(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Test_Cancel(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_3167384629____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Server_Test_Cancel_onceRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Server_Test_Cancel_onceRef);
lean_dec_ref(res);
res = l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_2861725383____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Server_Test_Cancel_unblockedCancelTkRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Server_Test_Cancel_unblockedCancelTkRef);
lean_dec_ref(res);
res = l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_4281145543____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Server_Test_Cancel_cmdOnceRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Server_Test_Cancel_cmdOnceRef);
lean_dec_ref(res);
res = l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_651650561____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Server_Test_Cancel_testTasksRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Server_Test_Cancel_testTasksRef);
lean_dec_ref(res);
res = l___private_Lean_Server_Test_Cancel_0__Lean_Server_Test_Cancel_initFn_00___x40_Lean_Server_Test_Cancel_1277954624____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Server_Test_Cancel_syncPromisesRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Server_Test_Cancel_syncPromisesRef);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Test_Cancel(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Test_Cancel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Test_Cancel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Test_Cancel(builtin);
}
#ifdef __cplusplus
}
#endif
