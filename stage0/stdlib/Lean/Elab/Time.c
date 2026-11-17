// Lean compiler output
// Module: Lean.Elab.Time
// Imports: public import Lean.Elab.Command
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
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_io_mono_ms_now();
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Time_elabTimeCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Time_elabTimeCmd___closed__0 = (const lean_object*)&l_Lean_Elab_Time_elabTimeCmd___closed__0_value;
static const lean_string_object l_Lean_Elab_Time_elabTimeCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Time_elabTimeCmd___closed__1 = (const lean_object*)&l_Lean_Elab_Time_elabTimeCmd___closed__1_value;
static const lean_string_object l_Lean_Elab_Time_elabTimeCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "timeCmd"};
static const lean_object* l_Lean_Elab_Time_elabTimeCmd___closed__2 = (const lean_object*)&l_Lean_Elab_Time_elabTimeCmd___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Time_elabTimeCmd___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Time_elabTimeCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Time_elabTimeCmd___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Time_elabTimeCmd___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Time_elabTimeCmd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Time_elabTimeCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Time_elabTimeCmd___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Time_elabTimeCmd___closed__2_value),LEAN_SCALAR_PTR_LITERAL(241, 30, 11, 88, 214, 137, 225, 32)}};
static const lean_object* l_Lean_Elab_Time_elabTimeCmd___closed__3 = (const lean_object*)&l_Lean_Elab_Time_elabTimeCmd___closed__3_value;
static const lean_string_object l_Lean_Elab_Time_elabTimeCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "time: "};
static const lean_object* l_Lean_Elab_Time_elabTimeCmd___closed__4 = (const lean_object*)&l_Lean_Elab_Time_elabTimeCmd___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Time_elabTimeCmd___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Time_elabTimeCmd___closed__5;
static const lean_string_object l_Lean_Elab_Time_elabTimeCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ms"};
static const lean_object* l_Lean_Elab_Time_elabTimeCmd___closed__6 = (const lean_object*)&l_Lean_Elab_Time_elabTimeCmd___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Time_elabTimeCmd___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Time_elabTimeCmd___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Time_elabTimeCmd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Time_elabTimeCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Time"};
static const lean_object* l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "elabTimeCmd"};
static const lean_object* l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Time_elabTimeCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(148, 109, 103, 22, 229, 14, 107, 103)}};
static const lean_ctor_object l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(76, 103, 203, 174, 210, 209, 148, 47)}};
static const lean_object* l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___redArg();
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___boxed(lean_object* v_00_u03b1_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0(v_00_u03b1_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
return v_res_18_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___lam__0(uint8_t v___x_20_, lean_object* v_x_21_){
_start:
{
if (lean_obj_tag(v_x_21_) == 1)
{
lean_object* v_pre_22_; 
v_pre_22_ = lean_ctor_get(v_x_21_, 0);
if (lean_obj_tag(v_pre_22_) == 0)
{
lean_object* v_str_23_; lean_object* v___x_24_; uint8_t v___x_25_; 
v_str_23_ = lean_ctor_get(v_x_21_, 1);
v___x_24_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___lam__0___closed__0));
v___x_25_ = lean_string_dec_eq(v_str_23_, v___x_24_);
return v___x_25_;
}
else
{
return v___x_20_;
}
}
else
{
return v___x_20_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___lam__0___boxed(lean_object* v___x_26_, lean_object* v_x_27_){
_start:
{
uint8_t v___x_2751__boxed_28_; uint8_t v_res_29_; lean_object* v_r_30_; 
v___x_2751__boxed_28_ = lean_unbox(v___x_26_);
v_res_29_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___lam__0(v___x_2751__boxed_28_, v_x_27_);
lean_dec(v_x_27_);
v_r_30_ = lean_box(v_res_29_);
return v_r_30_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__3(lean_object* v_opts_31_, lean_object* v_opt_32_){
_start:
{
lean_object* v_name_33_; lean_object* v_defValue_34_; lean_object* v_map_35_; lean_object* v___x_36_; 
v_name_33_ = lean_ctor_get(v_opt_32_, 0);
v_defValue_34_ = lean_ctor_get(v_opt_32_, 1);
v_map_35_ = lean_ctor_get(v_opts_31_, 0);
v___x_36_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_35_, v_name_33_);
if (lean_obj_tag(v___x_36_) == 0)
{
uint8_t v___x_37_; 
v___x_37_ = lean_unbox(v_defValue_34_);
return v___x_37_;
}
else
{
lean_object* v_val_38_; 
v_val_38_ = lean_ctor_get(v___x_36_, 0);
lean_inc(v_val_38_);
lean_dec_ref_known(v___x_36_, 1);
if (lean_obj_tag(v_val_38_) == 1)
{
uint8_t v_v_39_; 
v_v_39_ = lean_ctor_get_uint8(v_val_38_, 0);
lean_dec_ref_known(v_val_38_, 0);
return v_v_39_;
}
else
{
uint8_t v___x_40_; 
lean_dec(v_val_38_);
v___x_40_ = lean_unbox(v_defValue_34_);
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__3___boxed(lean_object* v_opts_41_, lean_object* v_opt_42_){
_start:
{
uint8_t v_res_43_; lean_object* v_r_44_; 
v_res_43_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__3(v_opts_41_, v_opt_42_);
lean_dec_ref(v_opt_42_);
lean_dec_ref(v_opts_41_);
v_r_44_ = lean_box(v_res_43_);
return v_r_44_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_45_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__0);
v___x_47_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_47_, 0, v___x_46_);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_48_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__1);
v___x_49_ = lean_unsigned_to_nat(0u);
v___x_50_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
lean_ctor_set(v___x_50_, 1, v___x_49_);
lean_ctor_set(v___x_50_, 2, v___x_49_);
lean_ctor_set(v___x_50_, 3, v___x_49_);
lean_ctor_set(v___x_50_, 4, v___x_48_);
lean_ctor_set(v___x_50_, 5, v___x_48_);
lean_ctor_set(v___x_50_, 6, v___x_48_);
lean_ctor_set(v___x_50_, 7, v___x_48_);
lean_ctor_set(v___x_50_, 8, v___x_48_);
lean_ctor_set(v___x_50_, 9, v___x_48_);
lean_ctor_set(v___x_50_, 10, v___x_48_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = lean_unsigned_to_nat(32u);
v___x_52_ = lean_mk_empty_array_with_capacity(v___x_51_);
v___x_53_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__4(void){
_start:
{
size_t v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_54_ = ((size_t)5ULL);
v___x_55_ = lean_unsigned_to_nat(0u);
v___x_56_ = lean_unsigned_to_nat(32u);
v___x_57_ = lean_mk_empty_array_with_capacity(v___x_56_);
v___x_58_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__3);
v___x_59_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___x_57_);
lean_ctor_set(v___x_59_, 2, v___x_55_);
lean_ctor_set(v___x_59_, 3, v___x_55_);
lean_ctor_set_usize(v___x_59_, 4, v___x_54_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_60_ = lean_box(1);
v___x_61_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__4);
v___x_62_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__1);
v___x_63_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_61_);
lean_ctor_set(v___x_63_, 2, v___x_60_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg(lean_object* v_msgData_64_, lean_object* v___y_65_){
_start:
{
lean_object* v___x_67_; lean_object* v_env_68_; uint8_t v___x_69_; lean_object* v_env_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v_scopes_73_; lean_object* v___x_74_; lean_object* v_opts_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_67_ = lean_st_ref_get(v___y_65_);
v_env_68_ = lean_ctor_get(v___x_67_, 0);
lean_inc_ref(v_env_68_);
lean_dec(v___x_67_);
v___x_69_ = 0;
v_env_70_ = l_Lean_Environment_setRecordingDeps(v_env_68_, v___x_69_);
v___x_71_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_72_ = lean_st_ref_get(v___y_65_);
v_scopes_73_ = lean_ctor_get(v___x_72_, 2);
lean_inc(v_scopes_73_);
lean_dec(v___x_72_);
v___x_74_ = l_List_head_x21___redArg(v___x_71_, v_scopes_73_);
lean_dec(v_scopes_73_);
v_opts_75_ = lean_ctor_get(v___x_74_, 1);
lean_inc_ref(v_opts_75_);
lean_dec(v___x_74_);
v___x_76_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__2);
v___x_77_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___closed__5);
v___x_78_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_78_, 0, v_env_70_);
lean_ctor_set(v___x_78_, 1, v___x_76_);
lean_ctor_set(v___x_78_, 2, v___x_77_);
lean_ctor_set(v___x_78_, 3, v_opts_75_);
v___x_79_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v_msgData_64_);
v___x_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg(v_msgData_81_, v___y_82_);
lean_dec(v___y_82_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1(lean_object* v_ref_89_, lean_object* v_msgData_90_, uint8_t v_severity_91_, uint8_t v_isSilent_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
lean_object* v___y_97_; lean_object* v___y_98_; uint8_t v___y_99_; uint8_t v___y_100_; lean_object* v___y_101_; lean_object* v___y_102_; lean_object* v___y_103_; lean_object* v___y_104_; lean_object* v___y_162_; uint8_t v___y_163_; uint8_t v___y_164_; lean_object* v___y_165_; lean_object* v___y_166_; lean_object* v___y_187_; uint8_t v___y_188_; lean_object* v___y_189_; uint8_t v___y_190_; lean_object* v___y_191_; uint8_t v___y_195_; uint8_t v___x_223_; uint8_t v___x_224_; 
v___x_223_ = 2;
v___x_224_ = l_Lean_instBEqMessageSeverity_beq(v_severity_91_, v___x_223_);
if (v___x_224_ == 0)
{
goto v___jp_212_;
}
else
{
uint8_t v___x_225_; 
lean_inc_ref(v_msgData_90_);
v___x_225_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_90_);
if (v___x_225_ == 0)
{
goto v___jp_212_;
}
else
{
lean_object* v___x_226_; lean_object* v___x_227_; 
lean_dec_ref(v_msgData_90_);
v___x_226_ = lean_box(0);
v___x_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
return v___x_227_;
}
}
v___jp_96_:
{
lean_object* v___x_105_; 
v___x_105_ = l_Lean_Elab_Command_getScope___redArg(v___y_104_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v_currNamespace_107_; lean_object* v___x_108_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_a_106_);
lean_dec_ref_known(v___x_105_, 1);
v_currNamespace_107_ = lean_ctor_get(v_a_106_, 2);
lean_inc(v_currNamespace_107_);
lean_dec(v_a_106_);
v___x_108_ = l_Lean_Elab_Command_getScope___redArg(v___y_104_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_144_; 
v_a_109_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_144_ == 0)
{
v___x_111_ = v___x_108_;
v_isShared_112_ = v_isSharedCheck_144_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_144_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v_openDecls_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v_env_118_; lean_object* v_messages_119_; lean_object* v_scopes_120_; lean_object* v_usedQuotCtxts_121_; lean_object* v_nextMacroScope_122_; lean_object* v_maxRecDepth_123_; lean_object* v_ngen_124_; lean_object* v_auxDeclNGen_125_; lean_object* v_infoState_126_; lean_object* v_traceState_127_; lean_object* v_snapshotTasks_128_; lean_object* v_prevLinterStates_129_; lean_object* v_codeQualityEntryTasks_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_143_; 
v_openDecls_113_ = lean_ctor_get(v_a_109_, 3);
lean_inc(v_openDecls_113_);
lean_dec(v_a_109_);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v_currNamespace_107_);
lean_ctor_set(v___x_114_, 1, v_openDecls_113_);
v___x_115_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
lean_ctor_set(v___x_115_, 1, v___y_101_);
lean_inc_ref(v___y_98_);
lean_inc_ref(v___y_97_);
v___x_116_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_116_, 0, v___y_97_);
lean_ctor_set(v___x_116_, 1, v___y_103_);
lean_ctor_set(v___x_116_, 2, v___y_102_);
lean_ctor_set(v___x_116_, 3, v___y_98_);
lean_ctor_set(v___x_116_, 4, v___x_115_);
lean_ctor_set_uint8(v___x_116_, sizeof(void*)*5, v___y_100_);
lean_ctor_set_uint8(v___x_116_, sizeof(void*)*5 + 1, v___y_99_);
lean_ctor_set_uint8(v___x_116_, sizeof(void*)*5 + 2, v_isSilent_92_);
v___x_117_ = lean_st_ref_take(v___y_104_);
v_env_118_ = lean_ctor_get(v___x_117_, 0);
v_messages_119_ = lean_ctor_get(v___x_117_, 1);
v_scopes_120_ = lean_ctor_get(v___x_117_, 2);
v_usedQuotCtxts_121_ = lean_ctor_get(v___x_117_, 3);
v_nextMacroScope_122_ = lean_ctor_get(v___x_117_, 4);
v_maxRecDepth_123_ = lean_ctor_get(v___x_117_, 5);
v_ngen_124_ = lean_ctor_get(v___x_117_, 6);
v_auxDeclNGen_125_ = lean_ctor_get(v___x_117_, 7);
v_infoState_126_ = lean_ctor_get(v___x_117_, 8);
v_traceState_127_ = lean_ctor_get(v___x_117_, 9);
v_snapshotTasks_128_ = lean_ctor_get(v___x_117_, 10);
v_prevLinterStates_129_ = lean_ctor_get(v___x_117_, 11);
v_codeQualityEntryTasks_130_ = lean_ctor_get(v___x_117_, 12);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_143_ == 0)
{
v___x_132_ = v___x_117_;
v_isShared_133_ = v_isSharedCheck_143_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_codeQualityEntryTasks_130_);
lean_inc(v_prevLinterStates_129_);
lean_inc(v_snapshotTasks_128_);
lean_inc(v_traceState_127_);
lean_inc(v_infoState_126_);
lean_inc(v_auxDeclNGen_125_);
lean_inc(v_ngen_124_);
lean_inc(v_maxRecDepth_123_);
lean_inc(v_nextMacroScope_122_);
lean_inc(v_usedQuotCtxts_121_);
lean_inc(v_scopes_120_);
lean_inc(v_messages_119_);
lean_inc(v_env_118_);
lean_dec(v___x_117_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_143_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_137_; 
v___x_134_ = lean_box(0);
v___x_135_ = l_Lean_MessageLog_add(v___x_116_, v_messages_119_);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 1, v___x_135_);
v___x_137_ = v___x_132_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_env_118_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v___x_135_);
lean_ctor_set(v_reuseFailAlloc_142_, 2, v_scopes_120_);
lean_ctor_set(v_reuseFailAlloc_142_, 3, v_usedQuotCtxts_121_);
lean_ctor_set(v_reuseFailAlloc_142_, 4, v_nextMacroScope_122_);
lean_ctor_set(v_reuseFailAlloc_142_, 5, v_maxRecDepth_123_);
lean_ctor_set(v_reuseFailAlloc_142_, 6, v_ngen_124_);
lean_ctor_set(v_reuseFailAlloc_142_, 7, v_auxDeclNGen_125_);
lean_ctor_set(v_reuseFailAlloc_142_, 8, v_infoState_126_);
lean_ctor_set(v_reuseFailAlloc_142_, 9, v_traceState_127_);
lean_ctor_set(v_reuseFailAlloc_142_, 10, v_snapshotTasks_128_);
lean_ctor_set(v_reuseFailAlloc_142_, 11, v_prevLinterStates_129_);
lean_ctor_set(v_reuseFailAlloc_142_, 12, v_codeQualityEntryTasks_130_);
v___x_137_ = v_reuseFailAlloc_142_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
lean_object* v___x_138_; lean_object* v___x_140_; 
v___x_138_ = lean_st_ref_put(v___y_104_, v___x_137_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 0, v___x_134_);
v___x_140_ = v___x_111_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_134_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
}
}
else
{
lean_object* v_a_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_152_; 
lean_dec(v_currNamespace_107_);
lean_dec_ref(v___y_103_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
v_a_145_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_152_ == 0)
{
v___x_147_ = v___x_108_;
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_a_145_);
lean_dec(v___x_108_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_150_; 
if (v_isShared_148_ == 0)
{
v___x_150_ = v___x_147_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_a_145_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
}
else
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_160_; 
lean_dec_ref(v___y_103_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
v_a_153_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_160_ == 0)
{
v___x_155_ = v___x_105_;
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_105_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_156_ == 0)
{
v___x_158_ = v___x_155_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_153_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
v___jp_161_:
{
lean_object* v_fileName_167_; lean_object* v_fileMap_168_; uint8_t v_suppressElabErrors_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v_a_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_185_; 
v_fileName_167_ = lean_ctor_get(v___y_93_, 0);
v_fileMap_168_ = lean_ctor_get(v___y_93_, 1);
v_suppressElabErrors_169_ = lean_ctor_get_uint8(v___y_93_, sizeof(void*)*10);
v___x_170_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_90_);
v___x_171_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg(v___x_170_, v___y_94_);
v_a_172_ = lean_ctor_get(v___x_171_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_185_ == 0)
{
v___x_174_ = v___x_171_;
v_isShared_175_ = v_isSharedCheck_185_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_a_172_);
lean_dec(v___x_171_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_185_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
lean_inc_ref_n(v_fileMap_168_, 2);
v___x_176_ = l_Lean_FileMap_toPosition(v_fileMap_168_, v___y_165_);
lean_dec(v___y_165_);
v___x_177_ = l_Lean_FileMap_toPosition(v_fileMap_168_, v___y_166_);
lean_dec(v___y_166_);
v___x_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
v___x_179_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___closed__0));
if (v_suppressElabErrors_169_ == 0)
{
lean_del_object(v___x_174_);
v___y_97_ = v_fileName_167_;
v___y_98_ = v___x_179_;
v___y_99_ = v___y_164_;
v___y_100_ = v___y_163_;
v___y_101_ = v_a_172_;
v___y_102_ = v___x_178_;
v___y_103_ = v___x_176_;
v___y_104_ = v___y_94_;
goto v___jp_96_;
}
else
{
uint8_t v___x_180_; 
lean_inc(v_a_172_);
lean_inc_ref(v___y_162_);
v___x_180_ = l_Lean_MessageData_hasTag(v___y_162_, v_a_172_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; lean_object* v___x_183_; 
lean_dec_ref_known(v___x_178_, 1);
lean_dec_ref(v___x_176_);
lean_dec(v_a_172_);
v___x_181_ = lean_box(0);
if (v_isShared_175_ == 0)
{
lean_ctor_set(v___x_174_, 0, v___x_181_);
v___x_183_ = v___x_174_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_181_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
else
{
lean_del_object(v___x_174_);
v___y_97_ = v_fileName_167_;
v___y_98_ = v___x_179_;
v___y_99_ = v___y_164_;
v___y_100_ = v___y_163_;
v___y_101_ = v_a_172_;
v___y_102_ = v___x_178_;
v___y_103_ = v___x_176_;
v___y_104_ = v___y_94_;
goto v___jp_96_;
}
}
}
}
v___jp_186_:
{
lean_object* v___x_192_; 
v___x_192_ = l_Lean_Syntax_getTailPos_x3f(v___y_189_, v___y_188_);
lean_dec(v___y_189_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_inc(v___y_191_);
v___y_162_ = v___y_187_;
v___y_163_ = v___y_188_;
v___y_164_ = v___y_190_;
v___y_165_ = v___y_191_;
v___y_166_ = v___y_191_;
goto v___jp_161_;
}
else
{
lean_object* v_val_193_; 
v_val_193_ = lean_ctor_get(v___x_192_, 0);
lean_inc(v_val_193_);
lean_dec_ref_known(v___x_192_, 1);
v___y_162_ = v___y_187_;
v___y_163_ = v___y_188_;
v___y_164_ = v___y_190_;
v___y_165_ = v___y_191_;
v___y_166_ = v_val_193_;
goto v___jp_161_;
}
}
v___jp_194_:
{
lean_object* v___x_196_; 
v___x_196_ = l_Lean_Elab_Command_getRef___redArg(v___y_93_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; lean_object* v_ref_198_; uint8_t v___x_199_; lean_object* v___f_200_; lean_object* v___x_201_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
lean_inc(v_a_197_);
lean_dec_ref_known(v___x_196_, 1);
v_ref_198_ = l_Lean_replaceRef(v_ref_89_, v_a_197_);
lean_dec(v_a_197_);
v___x_199_ = 0;
v___f_200_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___closed__1));
v___x_201_ = l_Lean_Syntax_getPos_x3f(v_ref_198_, v___x_199_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v___x_202_; 
v___x_202_ = lean_unsigned_to_nat(0u);
v___y_187_ = v___f_200_;
v___y_188_ = v___x_199_;
v___y_189_ = v_ref_198_;
v___y_190_ = v___y_195_;
v___y_191_ = v___x_202_;
goto v___jp_186_;
}
else
{
lean_object* v_val_203_; 
v_val_203_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_val_203_);
lean_dec_ref_known(v___x_201_, 1);
v___y_187_ = v___f_200_;
v___y_188_ = v___x_199_;
v___y_189_ = v_ref_198_;
v___y_190_ = v___y_195_;
v___y_191_ = v_val_203_;
goto v___jp_186_;
}
}
else
{
lean_object* v_a_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_211_; 
lean_dec_ref(v_msgData_90_);
v_a_204_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_211_ == 0)
{
v___x_206_ = v___x_196_;
v_isShared_207_ = v_isSharedCheck_211_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_a_204_);
lean_dec(v___x_196_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_211_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_209_; 
if (v_isShared_207_ == 0)
{
v___x_209_ = v___x_206_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_a_204_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
}
}
v___jp_212_:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v_scopes_215_; lean_object* v___x_216_; lean_object* v_opts_217_; uint8_t v___x_218_; uint8_t v___x_219_; 
v___x_213_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_214_ = lean_st_ref_get(v___y_94_);
v_scopes_215_ = lean_ctor_get(v___x_214_, 2);
lean_inc(v_scopes_215_);
lean_dec(v___x_214_);
v___x_216_ = l_List_head_x21___redArg(v___x_213_, v_scopes_215_);
lean_dec(v_scopes_215_);
v_opts_217_ = lean_ctor_get(v___x_216_, 1);
lean_inc_ref(v_opts_217_);
lean_dec(v___x_216_);
v___x_218_ = 1;
v___x_219_ = l_Lean_instBEqMessageSeverity_beq(v_severity_91_, v___x_218_);
if (v___x_219_ == 0)
{
lean_dec_ref(v_opts_217_);
v___y_195_ = v_severity_91_;
goto v___jp_194_;
}
else
{
lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_220_ = l_Lean_warningAsError;
v___x_221_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__3(v_opts_217_, v___x_220_);
lean_dec_ref(v_opts_217_);
if (v___x_221_ == 0)
{
v___y_195_ = v_severity_91_;
goto v___jp_194_;
}
else
{
uint8_t v___x_222_; 
v___x_222_ = 2;
v___y_195_ = v___x_222_;
goto v___jp_194_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1___boxed(lean_object* v_ref_228_, lean_object* v_msgData_229_, lean_object* v_severity_230_, lean_object* v_isSilent_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
uint8_t v_severity_boxed_235_; uint8_t v_isSilent_boxed_236_; lean_object* v_res_237_; 
v_severity_boxed_235_ = lean_unbox(v_severity_230_);
v_isSilent_boxed_236_ = lean_unbox(v_isSilent_231_);
v_res_237_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1(v_ref_228_, v_msgData_229_, v_severity_boxed_235_, v_isSilent_boxed_236_, v___y_232_, v___y_233_);
lean_dec(v___y_233_);
lean_dec_ref(v___y_232_);
lean_dec(v_ref_228_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1(lean_object* v_ref_238_, lean_object* v_msgData_239_, lean_object* v___y_240_, lean_object* v___y_241_){
_start:
{
uint8_t v___x_243_; uint8_t v___x_244_; lean_object* v___x_245_; 
v___x_243_ = 0;
v___x_244_ = 0;
v___x_245_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1(v_ref_238_, v_msgData_239_, v___x_243_, v___x_244_, v___y_240_, v___y_241_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1___boxed(lean_object* v_ref_246_, lean_object* v_msgData_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1(v_ref_246_, v_msgData_247_, v___y_248_, v___y_249_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v_ref_246_);
return v_res_251_;
}
}
static lean_object* _init_l_Lean_Elab_Time_elabTimeCmd___closed__5(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_260_ = ((lean_object*)(l_Lean_Elab_Time_elabTimeCmd___closed__4));
v___x_261_ = l_Lean_stringToMessageData(v___x_260_);
return v___x_261_;
}
}
static lean_object* _init_l_Lean_Elab_Time_elabTimeCmd___closed__7(void){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_263_ = ((lean_object*)(l_Lean_Elab_Time_elabTimeCmd___closed__6));
v___x_264_ = l_Lean_stringToMessageData(v___x_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Time_elabTimeCmd(lean_object* v_x_265_, lean_object* v_a_266_, lean_object* v_a_267_){
_start:
{
lean_object* v___x_269_; uint8_t v___x_270_; 
v___x_269_ = ((lean_object*)(l_Lean_Elab_Time_elabTimeCmd___closed__3));
lean_inc(v_x_265_);
v___x_270_ = l_Lean_Syntax_isOfKind(v_x_265_, v___x_269_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; 
lean_dec(v_x_265_);
v___x_271_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Time_elabTimeCmd_spec__0___redArg();
return v___x_271_;
}
else
{
lean_object* v___x_272_; lean_object* v_tk_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_272_ = lean_unsigned_to_nat(0u);
v_tk_273_ = l_Lean_Syntax_getArg(v_x_265_, v___x_272_);
v___x_274_ = lean_unsigned_to_nat(1u);
v___x_275_ = l_Lean_Syntax_getArg(v_x_265_, v___x_274_);
lean_dec(v_x_265_);
v___x_276_ = lean_io_mono_ms_now();
v___x_277_ = l_Lean_Elab_Command_elabCommand(v___x_275_, v_a_266_, v_a_267_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_293_; 
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_293_ == 0)
{
lean_object* v_unused_294_; 
v_unused_294_ = lean_ctor_get(v___x_277_, 0);
lean_dec(v_unused_294_);
v___x_279_ = v___x_277_;
v_isShared_280_ = v_isSharedCheck_293_;
goto v_resetjp_278_;
}
else
{
lean_dec(v___x_277_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_293_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_286_; 
v___x_281_ = lean_io_mono_ms_now();
v___x_282_ = lean_obj_once(&l_Lean_Elab_Time_elabTimeCmd___closed__5, &l_Lean_Elab_Time_elabTimeCmd___closed__5_once, _init_l_Lean_Elab_Time_elabTimeCmd___closed__5);
v___x_283_ = lean_nat_sub(v___x_281_, v___x_276_);
lean_dec(v___x_276_);
lean_dec(v___x_281_);
v___x_284_ = l_Nat_reprFast(v___x_283_);
if (v_isShared_280_ == 0)
{
lean_ctor_set_tag(v___x_279_, 3);
lean_ctor_set(v___x_279_, 0, v___x_284_);
v___x_286_ = v___x_279_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v___x_284_);
v___x_286_ = v_reuseFailAlloc_292_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_287_ = l_Lean_MessageData_ofFormat(v___x_286_);
v___x_288_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_282_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = lean_obj_once(&l_Lean_Elab_Time_elabTimeCmd___closed__7, &l_Lean_Elab_Time_elabTimeCmd___closed__7_once, _init_l_Lean_Elab_Time_elabTimeCmd___closed__7);
v___x_290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_288_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v___x_291_ = l_Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1(v_tk_273_, v___x_290_, v_a_266_, v_a_267_);
lean_dec(v_tk_273_);
return v___x_291_;
}
}
}
else
{
lean_dec(v___x_276_);
lean_dec(v_tk_273_);
return v___x_277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Time_elabTimeCmd___boxed(lean_object* v_x_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lean_Elab_Time_elabTimeCmd(v_x_295_, v_a_296_, v_a_297_);
lean_dec(v_a_297_);
lean_dec_ref(v_a_296_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2(lean_object* v_msgData_300_, lean_object* v___y_301_, lean_object* v___y_302_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___redArg(v_msgData_300_, v___y_302_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2___boxed(lean_object* v_msgData_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Time_elabTimeCmd_spec__1_spec__1_spec__2(v_msgData_305_, v___y_306_, v___y_307_);
lean_dec(v___y_307_);
lean_dec_ref(v___y_306_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1(){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_319_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_320_ = ((lean_object*)(l_Lean_Elab_Time_elabTimeCmd___closed__3));
v___x_321_ = ((lean_object*)(l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___closed__3));
v___x_322_ = lean_alloc_closure((void*)(l_Lean_Elab_Time_elabTimeCmd___boxed), 4, 0);
v___x_323_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_319_, v___x_320_, v___x_321_, v___x_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1___boxed(lean_object* v_a_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1();
return v_res_325_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Time(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Time_0__Lean_Elab_Time_elabTimeCmd___regBuiltin_Lean_Elab_Time_elabTimeCmd__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Time(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Time(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Time(builtin);
}
#ifdef __cplusplus
}
#endif
