// Lean compiler output
// Module: Lean.Language.Lean.Util
// Imports: public import Lean.Language.Lean.Types import Lean.Elab.InfoTree.Util
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
lean_object* l_Lean_Elab_Info_range_x3f(lean_object*);
uint8_t l_Lean_Syntax_Range_overlaps(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Syntax_getRangeWithTrailing_x3f(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
lean_object* l_Lean_Language_Snapshot_transform(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_transformWith___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Language_SnapshotTree_transform___boxed(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageLog_append(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_foldInfo___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_Range_includes(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* lean_obj_tag_nat(lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedInfoTree_default;
extern lean_object* l_Lean_MessageLog_empty;
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeContainsHoverPos(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeContainsHoverPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeOverlapsRequestedRange(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeOverlapsRequestedRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeIncludesRequestedRange(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeIncludesRequestedRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTree_foldSnaps___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTree_foldSnaps___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1 = (const lean_object*)&l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_isAfterHoverPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_isAfterHoverPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_containsHoverPos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_containsHoverPos___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdParsedSnap___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdParsedSnap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Language_Lean_findCmdDataAtPos_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1(lean_object*);
static const lean_string_object l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Language.Lean.Util"};
static const lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__0 = (const lean_object*)&l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__0_value;
static const lean_string_object l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Language.Lean.findCmdDataAtPos"};
static const lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__1 = (const lean_object*)&l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__1_value;
static const lean_string_object l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "assertion violation: s.infoTree\?.isSome\n        "};
static const lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__2 = (const lean_object*)&l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTree_transform___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__5___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___lam__0___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2(lean_object*);
static lean_once_cell_t l_Lean_Language_Lean_findCmdDataAtPos___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__2___closed__0;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__2(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findInfoTreeAtPos___lam__0(lean_object*);
static const lean_closure_object l_Lean_Language_Lean_findInfoTreeAtPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_findInfoTreeAtPos___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_Lean_findInfoTreeAtPos___closed__0 = (const lean_object*)&l_Lean_Language_Lean_findInfoTreeAtPos___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findInfoTreeAtPos(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findInfoTreeAtPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeContainsHoverPos(lean_object* v_text_1_, lean_object* v_r_2_, lean_object* v_hoverPos_3_, uint8_t v_includeStop_4_){
_start:
{
if (v_includeStop_4_ == 0)
{
lean_object* v_stop_5_; lean_object* v_source_6_; lean_object* v___x_7_; uint8_t v_decide_8_; uint8_t v___x_9_; 
v_stop_5_ = lean_ctor_get(v_r_2_, 1);
v_source_6_ = lean_ctor_get(v_text_1_, 0);
v___x_7_ = lean_string_utf8_byte_size(v_source_6_);
v_decide_8_ = lean_nat_dec_eq(v_stop_5_, v___x_7_);
v___x_9_ = l_Lean_Syntax_Range_contains(v_r_2_, v_hoverPos_3_, v_decide_8_);
return v___x_9_;
}
else
{
uint8_t v___x_10_; 
v___x_10_ = l_Lean_Syntax_Range_contains(v_r_2_, v_hoverPos_3_, v_includeStop_4_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeContainsHoverPos___boxed(lean_object* v_text_11_, lean_object* v_r_12_, lean_object* v_hoverPos_13_, lean_object* v_includeStop_14_){
_start:
{
uint8_t v_includeStop_boxed_15_; uint8_t v_res_16_; lean_object* v_r_17_; 
v_includeStop_boxed_15_ = lean_unbox(v_includeStop_14_);
v_res_16_ = l_Lean_FileMap_rangeContainsHoverPos(v_text_11_, v_r_12_, v_hoverPos_13_, v_includeStop_boxed_15_);
lean_dec(v_hoverPos_13_);
lean_dec_ref(v_r_12_);
lean_dec_ref(v_text_11_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeOverlapsRequestedRange(lean_object* v_text_18_, lean_object* v_documentRange_19_, lean_object* v_requestedRange_20_, uint8_t v_includeDocumentRangeStop_21_, uint8_t v_includeRequestedRangeStop_22_){
_start:
{
if (v_includeDocumentRangeStop_21_ == 0)
{
lean_object* v_stop_23_; lean_object* v_source_24_; lean_object* v___x_25_; uint8_t v_decide_26_; uint8_t v___x_27_; 
v_stop_23_ = lean_ctor_get(v_documentRange_19_, 1);
v_source_24_ = lean_ctor_get(v_text_18_, 0);
v___x_25_ = lean_string_utf8_byte_size(v_source_24_);
v_decide_26_ = lean_nat_dec_eq(v_stop_23_, v___x_25_);
v___x_27_ = l_Lean_Syntax_Range_overlaps(v_documentRange_19_, v_requestedRange_20_, v_decide_26_, v_includeRequestedRangeStop_22_);
return v___x_27_;
}
else
{
uint8_t v___x_28_; 
v___x_28_ = l_Lean_Syntax_Range_overlaps(v_documentRange_19_, v_requestedRange_20_, v_includeDocumentRangeStop_21_, v_includeRequestedRangeStop_22_);
return v___x_28_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeOverlapsRequestedRange___boxed(lean_object* v_text_29_, lean_object* v_documentRange_30_, lean_object* v_requestedRange_31_, lean_object* v_includeDocumentRangeStop_32_, lean_object* v_includeRequestedRangeStop_33_){
_start:
{
uint8_t v_includeDocumentRangeStop_boxed_34_; uint8_t v_includeRequestedRangeStop_boxed_35_; uint8_t v_res_36_; lean_object* v_r_37_; 
v_includeDocumentRangeStop_boxed_34_ = lean_unbox(v_includeDocumentRangeStop_32_);
v_includeRequestedRangeStop_boxed_35_ = lean_unbox(v_includeRequestedRangeStop_33_);
v_res_36_ = l_Lean_FileMap_rangeOverlapsRequestedRange(v_text_29_, v_documentRange_30_, v_requestedRange_31_, v_includeDocumentRangeStop_boxed_34_, v_includeRequestedRangeStop_boxed_35_);
lean_dec_ref(v_requestedRange_31_);
lean_dec_ref(v_documentRange_30_);
lean_dec_ref(v_text_29_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
LEAN_EXPORT uint8_t l_Lean_FileMap_rangeIncludesRequestedRange(lean_object* v_text_38_, lean_object* v_documentRange_39_, lean_object* v_requestedRange_40_, uint8_t v_includeDocumentRangeStop_41_, uint8_t v_includeRequestedRangeStop_42_){
_start:
{
if (v_includeDocumentRangeStop_41_ == 0)
{
lean_object* v_stop_43_; lean_object* v_source_44_; lean_object* v___x_45_; uint8_t v_decide_46_; uint8_t v___x_47_; 
v_stop_43_ = lean_ctor_get(v_documentRange_39_, 1);
v_source_44_ = lean_ctor_get(v_text_38_, 0);
v___x_45_ = lean_string_utf8_byte_size(v_source_44_);
v_decide_46_ = lean_nat_dec_eq(v_stop_43_, v___x_45_);
v___x_47_ = l_Lean_Syntax_Range_includes(v_documentRange_39_, v_requestedRange_40_, v_decide_46_, v_includeRequestedRangeStop_42_);
return v___x_47_;
}
else
{
uint8_t v___x_48_; 
v___x_48_ = l_Lean_Syntax_Range_includes(v_documentRange_39_, v_requestedRange_40_, v_includeDocumentRangeStop_41_, v_includeRequestedRangeStop_42_);
return v___x_48_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_FileMap_rangeIncludesRequestedRange___boxed(lean_object* v_text_49_, lean_object* v_documentRange_50_, lean_object* v_requestedRange_51_, lean_object* v_includeDocumentRangeStop_52_, lean_object* v_includeRequestedRangeStop_53_){
_start:
{
uint8_t v_includeDocumentRangeStop_boxed_54_; uint8_t v_includeRequestedRangeStop_boxed_55_; uint8_t v_res_56_; lean_object* v_r_57_; 
v_includeDocumentRangeStop_boxed_54_ = lean_unbox(v_includeDocumentRangeStop_52_);
v_includeRequestedRangeStop_boxed_55_ = lean_unbox(v_includeRequestedRangeStop_53_);
v_res_56_ = l_Lean_FileMap_rangeIncludesRequestedRange(v_text_49_, v_documentRange_50_, v_requestedRange_51_, v_includeDocumentRangeStop_boxed_54_, v_includeRequestedRangeStop_boxed_55_);
lean_dec_ref(v_requestedRange_51_);
lean_dec_ref(v_documentRange_50_);
lean_dec_ref(v_text_49_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx___impl(lean_object* v_x_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_obj_tag_nat(v_x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx___impl___boxed(lean_object* v_x_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorIdx___impl(v_x_60_);
lean_dec(v_x_60_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(lean_object* v_t_62_, lean_object* v_k_63_){
_start:
{
if (lean_obj_tag(v_t_62_) == 0)
{
return v_k_63_;
}
else
{
uint8_t v_foldChildren_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v_foldChildren_64_ = lean_ctor_get_uint8(v_t_62_, 0);
v___x_65_ = lean_box(v_foldChildren_64_);
v___x_66_ = lean_apply_1(v_k_63_, v___x_65_);
return v___x_66_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg___boxed(lean_object* v_t_67_, lean_object* v_k_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_67_, v_k_68_);
lean_dec(v_t_67_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim(lean_object* v_motive_70_, lean_object* v_ctorIdx_71_, lean_object* v_t_72_, lean_object* v_h_73_, lean_object* v_k_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_72_, v_k_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___boxed(lean_object* v_motive_76_, lean_object* v_ctorIdx_77_, lean_object* v_t_78_, lean_object* v_h_79_, lean_object* v_k_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim(v_motive_76_, v_ctorIdx_77_, v_t_78_, v_h_79_, v_k_80_);
lean_dec(v_t_78_);
lean_dec(v_ctorIdx_77_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg(lean_object* v_t_82_, lean_object* v_done_83_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_82_, v_done_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg___boxed(lean_object* v_t_85_, lean_object* v_done_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___redArg(v_t_85_, v_done_86_);
lean_dec(v_t_85_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim(lean_object* v_motive_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_done_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_89_, v_done_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim___boxed(lean_object* v_motive_93_, lean_object* v_t_94_, lean_object* v_h_95_, lean_object* v_done_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_done_elim(v_motive_93_, v_t_94_, v_h_95_, v_done_96_);
lean_dec(v_t_94_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg(lean_object* v_t_98_, lean_object* v_proceed_99_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_98_, v_proceed_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg___boxed(lean_object* v_t_101_, lean_object* v_proceed_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___redArg(v_t_101_, v_proceed_102_);
lean_dec(v_t_101_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim(lean_object* v_motive_104_, lean_object* v_t_105_, lean_object* v_h_106_, lean_object* v_proceed_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_ctorElim___redArg(v_t_105_, v_proceed_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim___boxed(lean_object* v_motive_109_, lean_object* v_t_110_, lean_object* v_h_111_, lean_object* v_proceed_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_Language_SnapshotTree_foldSnaps_Control_proceed_elim(v_motive_109_, v_t_110_, v_h_111_, v_proceed_112_);
lean_dec(v_t_110_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__0(lean_object* v_f_114_, lean_object* v_tail_115_, lean_object* v_x_116_){
_start:
{
lean_object* v_snd_117_; uint8_t v___x_118_; 
v_snd_117_ = lean_ctor_get(v_x_116_, 1);
v___x_118_ = lean_unbox(v_snd_117_);
if (v___x_118_ == 0)
{
lean_object* v_fst_119_; lean_object* v___x_120_; 
v_fst_119_ = lean_ctor_get(v_x_116_, 0);
lean_inc(v_fst_119_);
lean_dec_ref(v_x_116_);
v___x_120_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(v_f_114_, v_fst_119_, v_tail_115_);
return v___x_120_;
}
else
{
lean_object* v___x_121_; 
lean_dec(v_tail_115_);
lean_dec_ref(v_f_114_);
v___x_121_ = lean_task_pure(v_x_116_);
return v___x_121_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__2(lean_object* v_f_122_, lean_object* v_tail_123_, lean_object* v_head_124_, lean_object* v___f_125_, lean_object* v_x_126_){
_start:
{
lean_object* v_snd_127_; 
v_snd_127_ = lean_ctor_get(v_x_126_, 1);
if (lean_obj_tag(v_snd_127_) == 1)
{
uint8_t v_foldChildren_128_; 
v_foldChildren_128_ = lean_ctor_get_uint8(v_snd_127_, 0);
if (v_foldChildren_128_ == 0)
{
lean_object* v_fst_129_; lean_object* v___x_130_; 
lean_dec_ref(v___f_125_);
lean_dec_ref(v_head_124_);
v_fst_129_ = lean_ctor_get(v_x_126_, 0);
lean_inc(v_fst_129_);
lean_dec_ref(v_x_126_);
v___x_130_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(v_f_122_, v_fst_129_, v_tail_123_);
return v___x_130_;
}
else
{
lean_object* v_fst_131_; lean_object* v_task_132_; lean_object* v___f_133_; lean_object* v___x_134_; lean_object* v_subtreeTask_135_; lean_object* v___x_136_; 
lean_dec(v_tail_123_);
v_fst_131_ = lean_ctor_get(v_x_126_, 0);
lean_inc(v_fst_131_);
lean_dec_ref(v_x_126_);
v_task_132_ = lean_ctor_get(v_head_124_, 3);
lean_inc_ref(v_task_132_);
lean_dec_ref(v_head_124_);
v___f_133_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__1), 3, 2);
lean_closure_set(v___f_133_, 0, v_f_122_);
lean_closure_set(v___f_133_, 1, v_fst_131_);
v___x_134_ = lean_unsigned_to_nat(0u);
v_subtreeTask_135_ = lean_task_bind(v_task_132_, v___f_133_, v___x_134_, v_foldChildren_128_);
v___x_136_ = lean_task_bind(v_subtreeTask_135_, v___f_125_, v___x_134_, v_foldChildren_128_);
return v___x_136_;
}
}
else
{
lean_object* v_fst_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_147_; 
lean_dec_ref(v___f_125_);
lean_dec_ref(v_head_124_);
lean_dec(v_tail_123_);
lean_dec_ref(v_f_122_);
v_fst_137_ = lean_ctor_get(v_x_126_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v_x_126_);
if (v_isSharedCheck_147_ == 0)
{
lean_object* v_unused_148_; 
v_unused_148_ = lean_ctor_get(v_x_126_, 1);
lean_dec(v_unused_148_);
v___x_139_ = v_x_126_;
v_isShared_140_ = v_isSharedCheck_147_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_fst_137_);
lean_dec(v_x_126_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_147_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
uint8_t v___x_141_; lean_object* v___x_142_; lean_object* v___x_144_; 
v___x_141_ = 1;
v___x_142_ = lean_box(v___x_141_);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 1, v___x_142_);
v___x_144_ = v___x_139_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_fst_137_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v___x_142_);
v___x_144_ = v_reuseFailAlloc_146_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
lean_object* v___x_145_; 
v___x_145_ = lean_task_pure(v___x_144_);
return v___x_145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(lean_object* v_f_149_, lean_object* v_acc_150_, lean_object* v_a_151_){
_start:
{
if (lean_obj_tag(v_a_151_) == 0)
{
uint8_t v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
lean_dec_ref(v_f_149_);
v___x_152_ = 0;
v___x_153_ = lean_box(v___x_152_);
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v_acc_150_);
lean_ctor_set(v___x_154_, 1, v___x_153_);
v___x_155_ = lean_task_pure(v___x_154_);
return v___x_155_;
}
else
{
lean_object* v_head_156_; lean_object* v_tail_157_; lean_object* v___f_158_; lean_object* v___f_159_; lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; lean_object* v___x_163_; 
v_head_156_ = lean_ctor_get(v_a_151_, 0);
lean_inc_n(v_head_156_, 2);
v_tail_157_ = lean_ctor_get(v_a_151_, 1);
lean_inc_n(v_tail_157_, 2);
lean_dec_ref_known(v_a_151_, 2);
lean_inc_ref_n(v_f_149_, 2);
v___f_158_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__0), 3, 2);
lean_closure_set(v___f_158_, 0, v_f_149_);
lean_closure_set(v___f_158_, 1, v_tail_157_);
v___f_159_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__2), 5, 4);
lean_closure_set(v___f_159_, 0, v_f_149_);
lean_closure_set(v___f_159_, 1, v_tail_157_);
lean_closure_set(v___f_159_, 2, v_head_156_);
lean_closure_set(v___f_159_, 3, v___f_158_);
v___x_160_ = lean_apply_2(v_f_149_, v_head_156_, v_acc_150_);
v___x_161_ = lean_unsigned_to_nat(0u);
v___x_162_ = 1;
v___x_163_ = lean_task_bind(v___x_160_, v___f_159_, v___x_161_, v___x_162_);
return v___x_163_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(lean_object* v_f_164_, lean_object* v_acc_165_, lean_object* v_tree_166_){
_start:
{
lean_object* v_children_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v_children_167_ = lean_ctor_get(v_tree_166_, 1);
lean_inc_ref(v_children_167_);
lean_dec_ref(v_tree_166_);
v___x_168_ = lean_array_to_list(v_children_167_);
v___x_169_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(v_f_164_, v_acc_165_, v___x_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg___lam__1(lean_object* v_f_170_, lean_object* v_fst_171_, lean_object* v_tree_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(v_f_170_, v_fst_171_, v_tree_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree(lean_object* v_00_u03b1_174_, lean_object* v_f_175_, lean_object* v_acc_176_, lean_object* v_tree_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(v_f_175_, v_acc_176_, v_tree_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren(lean_object* v_00_u03b1_179_, lean_object* v_f_180_, lean_object* v_acc_181_, lean_object* v_a_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseChildren___redArg(v_f_180_, v_acc_181_, v_a_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0(lean_object* v_x_184_){
_start:
{
lean_object* v_fst_185_; 
v_fst_185_ = lean_ctor_get(v_x_184_, 0);
lean_inc(v_fst_185_);
return v_fst_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0___boxed(lean_object* v_x_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg___lam__0(v_x_186_);
lean_dec_ref(v_x_186_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps___redArg(lean_object* v_tree_189_, lean_object* v_init_190_, lean_object* v_f_191_){
_start:
{
lean_object* v___f_192_; lean_object* v_t_193_; lean_object* v___x_194_; uint8_t v___x_195_; lean_object* v___x_196_; 
v___f_192_ = ((lean_object*)(l_Lean_Language_SnapshotTree_foldSnaps___redArg___closed__0));
v_t_193_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_SnapshotTree_foldSnaps_traverseTree___redArg(v_f_191_, v_init_190_, v_tree_189_);
v___x_194_ = lean_unsigned_to_nat(0u);
v___x_195_ = 1;
v___x_196_ = lean_task_map(v___f_192_, v_t_193_, v___x_194_, v___x_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldSnaps(lean_object* v_00_u03b1_197_, lean_object* v_tree_198_, lean_object* v_init_199_, lean_object* v_f_200_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg(v_tree_198_, v_init_199_, v_f_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0(uint8_t v___x_202_, lean_object* v___x_203_, lean_object* v_tree_204_){
_start:
{
lean_object* v_element_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_218_; 
v_element_205_ = lean_ctor_get(v_tree_204_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v_tree_204_);
if (v_isSharedCheck_218_ == 0)
{
lean_object* v_unused_219_; 
v_unused_219_ = lean_ctor_get(v_tree_204_, 1);
lean_dec(v_unused_219_);
v___x_207_ = v_tree_204_;
v_isShared_208_ = v_isSharedCheck_218_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_element_205_);
lean_dec(v_tree_204_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_218_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v_infoTree_x3f_209_; 
v_infoTree_x3f_209_ = lean_ctor_get(v_element_205_, 2);
lean_inc(v_infoTree_x3f_209_);
lean_dec_ref(v_element_205_);
if (lean_obj_tag(v_infoTree_x3f_209_) == 1)
{
lean_object* v___x_210_; lean_object* v___x_212_; 
lean_dec(v___x_203_);
v___x_210_ = lean_box(0);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 1, v___x_210_);
lean_ctor_set(v___x_207_, 0, v_infoTree_x3f_209_);
v___x_212_ = v___x_207_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_infoTree_x3f_209_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v___x_210_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
else
{
lean_object* v___x_214_; lean_object* v___x_216_; 
lean_dec(v_infoTree_x3f_209_);
v___x_214_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_214_, 0, v___x_202_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 1, v___x_214_);
lean_ctor_set(v___x_207_, 0, v___x_203_);
v___x_216_ = v___x_207_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_203_);
lean_ctor_set(v_reuseFailAlloc_217_, 1, v___x_214_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0___boxed(lean_object* v___x_220_, lean_object* v___x_221_, lean_object* v_tree_222_){
_start:
{
uint8_t v___x_462__boxed_223_; lean_object* v_res_224_; 
v___x_462__boxed_223_ = lean_unbox(v___x_220_);
v_res_224_ = l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0(v___x_462__boxed_223_, v___x_221_, v_tree_222_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1(lean_object* v_text_229_, lean_object* v_hoverPos_230_, uint8_t v_includeStop_231_, lean_object* v___x_232_, lean_object* v_snap_233_, lean_object* v_x_234_){
_start:
{
lean_object* v_stx_x3f_235_; 
v_stx_x3f_235_ = lean_ctor_get(v_snap_233_, 0);
lean_inc(v_stx_x3f_235_);
if (lean_obj_tag(v_stx_x3f_235_) == 1)
{
lean_object* v_task_236_; lean_object* v_val_237_; uint8_t v___x_238_; lean_object* v___x_239_; 
v_task_236_ = lean_ctor_get(v_snap_233_, 3);
lean_inc_ref(v_task_236_);
lean_dec_ref(v_snap_233_);
v_val_237_ = lean_ctor_get(v_stx_x3f_235_, 0);
lean_inc(v_val_237_);
lean_dec_ref_known(v_stx_x3f_235_, 1);
v___x_238_ = 1;
v___x_239_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_val_237_, v___x_238_);
lean_dec(v_val_237_);
if (lean_obj_tag(v___x_239_) == 1)
{
lean_object* v_val_240_; uint8_t v___x_241_; 
v_val_240_ = lean_ctor_get(v___x_239_, 0);
lean_inc(v_val_240_);
lean_dec_ref_known(v___x_239_, 1);
v___x_241_ = l_Lean_FileMap_rangeContainsHoverPos(v_text_229_, v_val_240_, v_hoverPos_230_, v_includeStop_231_);
lean_dec(v_val_240_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
lean_dec_ref(v_task_236_);
v___x_242_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_242_, 0, v___x_241_);
v___x_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_232_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = lean_task_pure(v___x_243_);
return v___x_244_;
}
else
{
lean_object* v___x_245_; lean_object* v___f_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_245_ = lean_box(v___x_241_);
v___f_246_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__0___boxed), 3, 2);
lean_closure_set(v___f_246_, 0, v___x_245_);
lean_closure_set(v___f_246_, 1, v___x_232_);
v___x_247_ = lean_unsigned_to_nat(0u);
v___x_248_ = lean_task_map(v___f_246_, v_task_236_, v___x_247_, v___x_241_);
return v___x_248_;
}
}
else
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
lean_dec(v___x_239_);
lean_dec_ref(v_task_236_);
v___x_249_ = ((lean_object*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0));
v___x_250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_232_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = lean_task_pure(v___x_250_);
return v___x_251_;
}
}
else
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
lean_dec(v_stx_x3f_235_);
lean_dec_ref(v_snap_233_);
v___x_252_ = ((lean_object*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1));
v___x_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_232_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
v___x_254_ = lean_task_pure(v___x_253_);
return v___x_254_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___boxed(lean_object* v_text_255_, lean_object* v_hoverPos_256_, lean_object* v_includeStop_257_, lean_object* v___x_258_, lean_object* v_snap_259_, lean_object* v_x_260_){
_start:
{
uint8_t v_includeStop_boxed_261_; lean_object* v_res_262_; 
v_includeStop_boxed_261_ = lean_unbox(v_includeStop_257_);
v_res_262_ = l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1(v_text_255_, v_hoverPos_256_, v_includeStop_boxed_261_, v___x_258_, v_snap_259_, v_x_260_);
lean_dec(v_x_260_);
lean_dec(v_hoverPos_256_);
lean_dec_ref(v_text_255_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos(lean_object* v_text_263_, lean_object* v_tree_264_, lean_object* v_hoverPos_265_, uint8_t v_includeStop_266_){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___f_269_; lean_object* v___x_270_; 
v___x_267_ = lean_box(0);
v___x_268_ = lean_box(v_includeStop_266_);
v___f_269_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___boxed), 6, 4);
lean_closure_set(v___f_269_, 0, v_text_263_);
lean_closure_set(v___f_269_, 1, v_hoverPos_265_);
lean_closure_set(v___f_269_, 2, v___x_268_);
lean_closure_set(v___f_269_, 3, v___x_267_);
v___x_270_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg(v_tree_264_, v___x_267_, v___f_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_findInfoTreeAtPos___boxed(lean_object* v_text_271_, lean_object* v_tree_272_, lean_object* v_hoverPos_273_, lean_object* v_includeStop_274_){
_start:
{
uint8_t v_includeStop_boxed_275_; lean_object* v_res_276_; 
v_includeStop_boxed_275_ = lean_unbox(v_includeStop_274_);
v_res_276_ = l_Lean_Language_SnapshotTree_findInfoTreeAtPos(v_text_271_, v_tree_272_, v_hoverPos_273_, v_includeStop_boxed_275_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0(lean_object* v_requestedRange_277_, uint8_t v___x_278_, lean_object* v_f_279_, lean_object* v_ctx_280_, lean_object* v_i_281_, lean_object* v_acc_282_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = l_Lean_Elab_Info_range_x3f(v_i_281_);
if (lean_obj_tag(v___x_283_) == 1)
{
lean_object* v_val_284_; uint8_t v___x_285_; 
v_val_284_ = lean_ctor_get(v___x_283_, 0);
lean_inc(v_val_284_);
lean_dec_ref_known(v___x_283_, 1);
v___x_285_ = l_Lean_Syntax_Range_overlaps(v_val_284_, v_requestedRange_277_, v___x_278_, v___x_278_);
lean_dec(v_val_284_);
if (v___x_285_ == 0)
{
lean_dec_ref(v_i_281_);
lean_dec_ref(v_ctx_280_);
lean_dec(v_f_279_);
return v_acc_282_;
}
else
{
lean_object* v___x_286_; 
v___x_286_ = lean_apply_3(v_f_279_, v_ctx_280_, v_i_281_, v_acc_282_);
return v___x_286_;
}
}
else
{
lean_dec(v___x_283_);
lean_dec_ref(v_i_281_);
lean_dec_ref(v_ctx_280_);
lean_dec(v_f_279_);
return v_acc_282_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0___boxed(lean_object* v_requestedRange_287_, lean_object* v___x_288_, lean_object* v_f_289_, lean_object* v_ctx_290_, lean_object* v_i_291_, lean_object* v_acc_292_){
_start:
{
uint8_t v___x_637__boxed_293_; lean_object* v_res_294_; 
v___x_637__boxed_293_ = lean_unbox(v___x_288_);
v_res_294_ = l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0(v_requestedRange_287_, v___x_637__boxed_293_, v_f_289_, v_ctx_290_, v_i_291_, v_acc_292_);
lean_dec_ref(v_requestedRange_287_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1(lean_object* v___f_295_, lean_object* v_acc_296_, uint8_t v___x_297_, lean_object* v_tree_298_){
_start:
{
lean_object* v_element_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_314_; 
v_element_299_ = lean_ctor_get(v_tree_298_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v_tree_298_);
if (v_isSharedCheck_314_ == 0)
{
lean_object* v_unused_315_; 
v_unused_315_ = lean_ctor_get(v_tree_298_, 1);
lean_dec(v_unused_315_);
v___x_301_ = v_tree_298_;
v_isShared_302_ = v_isSharedCheck_314_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_element_299_);
lean_dec(v_tree_298_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_314_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v_infoTree_x3f_303_; 
v_infoTree_x3f_303_ = lean_ctor_get(v_element_299_, 2);
lean_inc(v_infoTree_x3f_303_);
lean_dec_ref(v_element_299_);
if (lean_obj_tag(v_infoTree_x3f_303_) == 1)
{
lean_object* v_val_304_; lean_object* v_acc_305_; lean_object* v___x_306_; lean_object* v___x_308_; 
v_val_304_ = lean_ctor_get(v_infoTree_x3f_303_, 0);
lean_inc(v_val_304_);
lean_dec_ref_known(v_infoTree_x3f_303_, 1);
v_acc_305_ = l_Lean_Elab_InfoTree_foldInfo___redArg(v___f_295_, v_acc_296_, v_val_304_);
v___x_306_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_306_, 0, v___x_297_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 1, v___x_306_);
lean_ctor_set(v___x_301_, 0, v_acc_305_);
v___x_308_ = v___x_301_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_acc_305_);
lean_ctor_set(v_reuseFailAlloc_309_, 1, v___x_306_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
else
{
lean_object* v___x_310_; lean_object* v___x_312_; 
lean_dec(v_infoTree_x3f_303_);
lean_dec(v___f_295_);
v___x_310_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_310_, 0, v___x_297_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 1, v___x_310_);
lean_ctor_set(v___x_301_, 0, v_acc_296_);
v___x_312_ = v___x_301_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_acc_296_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v___x_310_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1___boxed(lean_object* v___f_316_, lean_object* v_acc_317_, lean_object* v___x_318_, lean_object* v_tree_319_){
_start:
{
uint8_t v___x_649__boxed_320_; lean_object* v_res_321_; 
v___x_649__boxed_320_ = lean_unbox(v___x_318_);
v_res_321_ = l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1(v___f_316_, v_acc_317_, v___x_649__boxed_320_, v_tree_319_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__2(lean_object* v_requestedRange_322_, lean_object* v_f_323_, lean_object* v_snap_324_, lean_object* v_acc_325_){
_start:
{
lean_object* v_stx_x3f_326_; 
v_stx_x3f_326_ = lean_ctor_get(v_snap_324_, 0);
lean_inc(v_stx_x3f_326_);
if (lean_obj_tag(v_stx_x3f_326_) == 1)
{
lean_object* v_task_327_; lean_object* v_val_328_; uint8_t v___x_329_; lean_object* v___x_330_; 
v_task_327_ = lean_ctor_get(v_snap_324_, 3);
lean_inc_ref(v_task_327_);
lean_dec_ref(v_snap_324_);
v_val_328_ = lean_ctor_get(v_stx_x3f_326_, 0);
lean_inc(v_val_328_);
lean_dec_ref_known(v_stx_x3f_326_, 1);
v___x_329_ = 1;
v___x_330_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_val_328_, v___x_329_);
lean_dec(v_val_328_);
if (lean_obj_tag(v___x_330_) == 1)
{
lean_object* v_val_331_; uint8_t v___x_332_; 
v_val_331_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_val_331_);
lean_dec_ref_known(v___x_330_, 1);
v___x_332_ = l_Lean_Syntax_Range_overlaps(v_val_331_, v_requestedRange_322_, v___x_329_, v___x_329_);
lean_dec(v_val_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
lean_dec_ref(v_task_327_);
lean_dec(v_f_323_);
lean_dec_ref(v_requestedRange_322_);
v___x_333_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_333_, 0, v___x_332_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v_acc_325_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = lean_task_pure(v___x_334_);
return v___x_335_;
}
else
{
lean_object* v___x_336_; lean_object* v___f_337_; lean_object* v___x_338_; lean_object* v___f_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_336_ = lean_box(v___x_332_);
v___f_337_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_337_, 0, v_requestedRange_322_);
lean_closure_set(v___f_337_, 1, v___x_336_);
lean_closure_set(v___f_337_, 2, v_f_323_);
v___x_338_ = lean_box(v___x_332_);
v___f_339_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_339_, 0, v___f_337_);
lean_closure_set(v___f_339_, 1, v_acc_325_);
lean_closure_set(v___f_339_, 2, v___x_338_);
v___x_340_ = lean_unsigned_to_nat(0u);
v___x_341_ = lean_task_map(v___f_339_, v_task_327_, v___x_340_, v___x_332_);
return v___x_341_;
}
}
else
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
lean_dec(v___x_330_);
lean_dec_ref(v_task_327_);
lean_dec(v_f_323_);
lean_dec_ref(v_requestedRange_322_);
v___x_342_ = ((lean_object*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0));
v___x_343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_343_, 0, v_acc_325_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
v___x_344_ = lean_task_pure(v___x_343_);
return v___x_344_;
}
}
else
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
lean_dec(v_stx_x3f_326_);
lean_dec_ref(v_snap_324_);
lean_dec(v_f_323_);
lean_dec_ref(v_requestedRange_322_);
v___x_345_ = ((lean_object*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__1));
v___x_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_346_, 0, v_acc_325_);
lean_ctor_set(v___x_346_, 1, v___x_345_);
v___x_347_ = lean_task_pure(v___x_346_);
return v___x_347_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange___redArg(lean_object* v_tree_348_, lean_object* v_requestedRange_349_, lean_object* v_init_350_, lean_object* v_f_351_){
_start:
{
lean_object* v___f_352_; lean_object* v___x_353_; 
v___f_352_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_foldInfosInRange___redArg___lam__2), 4, 2);
lean_closure_set(v___f_352_, 0, v_requestedRange_349_);
lean_closure_set(v___f_352_, 1, v_f_351_);
v___x_353_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg(v_tree_348_, v_init_350_, v___f_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_foldInfosInRange(lean_object* v_00_u03b1_354_, lean_object* v_tree_355_, lean_object* v_requestedRange_356_, lean_object* v_init_357_, lean_object* v_f_358_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = l_Lean_Language_SnapshotTree_foldInfosInRange___redArg(v_tree_355_, v_requestedRange_356_, v_init_357_, v_f_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0(lean_object* v_log_360_, uint8_t v___x_361_, lean_object* v_tree_362_){
_start:
{
lean_object* v_element_363_; lean_object* v_diagnostics_364_; lean_object* v_msgLog_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_374_; 
v_element_363_ = lean_ctor_get(v_tree_362_, 0);
lean_inc_ref(v_element_363_);
lean_dec_ref(v_tree_362_);
v_diagnostics_364_ = lean_ctor_get(v_element_363_, 1);
lean_inc_ref(v_diagnostics_364_);
lean_dec_ref(v_element_363_);
v_msgLog_365_ = lean_ctor_get(v_diagnostics_364_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v_diagnostics_364_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; 
v_unused_375_ = lean_ctor_get(v_diagnostics_364_, 1);
lean_dec(v_unused_375_);
v___x_367_ = v_diagnostics_364_;
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_msgLog_365_);
lean_dec(v_diagnostics_364_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_369_ = l_Lean_MessageLog_append(v_log_360_, v_msgLog_365_);
v___x_370_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_370_, 0, v___x_361_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 1, v___x_370_);
lean_ctor_set(v___x_367_, 0, v___x_369_);
v___x_372_ = v___x_367_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_369_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v___x_370_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0___boxed(lean_object* v_log_376_, lean_object* v___x_377_, lean_object* v_tree_378_){
_start:
{
uint8_t v___x_421__boxed_379_; lean_object* v_res_380_; 
v___x_421__boxed_379_ = lean_unbox(v___x_377_);
v_res_380_ = l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0(v_log_376_, v___x_421__boxed_379_, v_tree_378_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1(lean_object* v_requestedRange_381_, lean_object* v_snap_382_, lean_object* v_log_383_){
_start:
{
lean_object* v_stx_x3f_384_; 
v_stx_x3f_384_ = lean_ctor_get(v_snap_382_, 0);
lean_inc(v_stx_x3f_384_);
if (lean_obj_tag(v_stx_x3f_384_) == 1)
{
lean_object* v_task_385_; lean_object* v_val_386_; uint8_t v___x_387_; lean_object* v___x_388_; 
v_task_385_ = lean_ctor_get(v_snap_382_, 3);
lean_inc_ref(v_task_385_);
lean_dec_ref(v_snap_382_);
v_val_386_ = lean_ctor_get(v_stx_x3f_384_, 0);
lean_inc(v_val_386_);
lean_dec_ref_known(v_stx_x3f_384_, 1);
v___x_387_ = 1;
v___x_388_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_val_386_, v___x_387_);
lean_dec(v_val_386_);
if (lean_obj_tag(v___x_388_) == 1)
{
lean_object* v_val_389_; uint8_t v___x_390_; 
v_val_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_val_389_);
lean_dec_ref_known(v___x_388_, 1);
v___x_390_ = l_Lean_Syntax_Range_overlaps(v_val_389_, v_requestedRange_381_, v___x_387_, v___x_387_);
lean_dec(v_val_389_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
lean_dec_ref(v_task_385_);
v___x_391_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_391_, 0, v___x_390_);
v___x_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_392_, 0, v_log_383_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
v___x_393_ = lean_task_pure(v___x_392_);
return v___x_393_;
}
else
{
lean_object* v___x_394_; lean_object* v___f_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_394_ = lean_box(v___x_390_);
v___f_395_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__0___boxed), 3, 2);
lean_closure_set(v___f_395_, 0, v_log_383_);
lean_closure_set(v___f_395_, 1, v___x_394_);
v___x_396_ = lean_unsigned_to_nat(0u);
v___x_397_ = lean_task_map(v___f_395_, v_task_385_, v___x_396_, v___x_390_);
return v___x_397_;
}
}
else
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
lean_dec(v___x_388_);
lean_dec_ref(v_task_385_);
v___x_398_ = ((lean_object*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0));
v___x_399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_399_, 0, v_log_383_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v___x_400_ = lean_task_pure(v___x_399_);
return v___x_400_;
}
}
else
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
lean_dec(v_stx_x3f_384_);
lean_dec_ref(v_snap_382_);
v___x_401_ = ((lean_object*)(l_Lean_Language_SnapshotTree_findInfoTreeAtPos___lam__1___closed__0));
v___x_402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_402_, 0, v_log_383_);
lean_ctor_set(v___x_402_, 1, v___x_401_);
v___x_403_ = lean_task_pure(v___x_402_);
return v___x_403_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1___boxed(lean_object* v_requestedRange_404_, lean_object* v_snap_405_, lean_object* v_log_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1(v_requestedRange_404_, v_snap_405_, v_log_406_);
lean_dec_ref(v_requestedRange_404_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTree_collectMessagesInRange(lean_object* v_tree_408_, lean_object* v_requestedRange_409_){
_start:
{
lean_object* v___f_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___f_410_ = lean_alloc_closure((void*)(l_Lean_Language_SnapshotTree_collectMessagesInRange___lam__1___boxed), 3, 1);
lean_closure_set(v___f_410_, 0, v_requestedRange_409_);
v___x_411_ = l_Lean_MessageLog_empty;
v___x_412_ = l_Lean_Language_SnapshotTree_foldSnaps___redArg(v_tree_408_, v___x_411_, v___f_410_);
return v___x_412_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_isAfterHoverPos(lean_object* v_hoverPos_413_, lean_object* v_cmdParsed_414_){
_start:
{
lean_object* v_stx_415_; uint8_t v___x_416_; lean_object* v___x_417_; 
v_stx_415_ = lean_ctor_get(v_cmdParsed_414_, 1);
v___x_416_ = 1;
v___x_417_ = l_Lean_Syntax_getPos_x3f(v_stx_415_, v___x_416_);
if (lean_obj_tag(v___x_417_) == 1)
{
lean_object* v_val_418_; lean_object* v___x_419_; lean_object* v___x_420_; uint8_t v___x_421_; 
v_val_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_val_418_);
lean_dec_ref_known(v___x_417_, 1);
v___x_419_ = lean_unsigned_to_nat(1u);
v___x_420_ = lean_nat_add(v_hoverPos_413_, v___x_419_);
v___x_421_ = lean_nat_dec_le(v___x_420_, v_val_418_);
lean_dec(v_val_418_);
lean_dec(v___x_420_);
return v___x_421_;
}
else
{
uint8_t v___x_422_; 
lean_dec(v___x_417_);
v___x_422_ = 0;
return v___x_422_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_isAfterHoverPos___boxed(lean_object* v_hoverPos_423_, lean_object* v_cmdParsed_424_){
_start:
{
uint8_t v_res_425_; lean_object* v_r_426_; 
v_res_425_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_isAfterHoverPos(v_hoverPos_423_, v_cmdParsed_424_);
lean_dec_ref(v_cmdParsed_424_);
lean_dec(v_hoverPos_423_);
v_r_426_ = lean_box(v_res_425_);
return v_r_426_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_containsHoverPos(lean_object* v_text_427_, lean_object* v_hoverPos_428_, lean_object* v_cmdParsed_429_){
_start:
{
lean_object* v_stx_430_; uint8_t v___x_431_; lean_object* v___x_432_; 
v_stx_430_ = lean_ctor_get(v_cmdParsed_429_, 1);
v___x_431_ = 1;
v___x_432_ = l_Lean_Syntax_getRangeWithTrailing_x3f(v_stx_430_, v___x_431_);
if (lean_obj_tag(v___x_432_) == 1)
{
lean_object* v_val_433_; uint8_t v___x_434_; uint8_t v___x_435_; 
v_val_433_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_val_433_);
lean_dec_ref_known(v___x_432_, 1);
v___x_434_ = 0;
v___x_435_ = l_Lean_FileMap_rangeContainsHoverPos(v_text_427_, v_val_433_, v_hoverPos_428_, v___x_434_);
lean_dec(v_val_433_);
return v___x_435_;
}
else
{
uint8_t v___x_436_; 
lean_dec(v___x_432_);
v___x_436_ = 0;
return v___x_436_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_containsHoverPos___boxed(lean_object* v_text_437_, lean_object* v_hoverPos_438_, lean_object* v_cmdParsed_439_){
_start:
{
uint8_t v_res_440_; lean_object* v_r_441_; 
v_res_440_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_containsHoverPos(v_text_437_, v_hoverPos_438_, v_cmdParsed_439_);
lean_dec_ref(v_cmdParsed_439_);
lean_dec(v_hoverPos_438_);
lean_dec_ref(v_text_437_);
v_r_441_ = lean_box(v_res_440_);
return v_r_441_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = lean_box(0);
v___x_443_ = lean_task_pure(v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go(lean_object* v_text_444_, lean_object* v_hoverPos_445_, lean_object* v_cmdParsed_446_){
_start:
{
uint8_t v___x_447_; 
v___x_447_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_containsHoverPos(v_text_444_, v_hoverPos_445_, v_cmdParsed_446_);
if (v___x_447_ == 0)
{
uint8_t v___x_448_; 
v___x_448_ = l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_isAfterHoverPos(v_hoverPos_445_, v_cmdParsed_446_);
if (v___x_448_ == 0)
{
lean_object* v_nextCmdSnap_x3f_449_; 
v_nextCmdSnap_x3f_449_ = lean_ctor_get(v_cmdParsed_446_, 4);
lean_inc(v_nextCmdSnap_x3f_449_);
lean_dec_ref(v_cmdParsed_446_);
if (lean_obj_tag(v_nextCmdSnap_x3f_449_) == 0)
{
lean_object* v___x_450_; 
lean_dec(v_hoverPos_445_);
lean_dec_ref(v_text_444_);
v___x_450_ = lean_obj_once(&l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0, &l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0_once, _init_l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0);
return v___x_450_;
}
else
{
lean_object* v_val_451_; lean_object* v_task_452_; lean_object* v___x_453_; lean_object* v___x_454_; uint8_t v___x_455_; lean_object* v___x_456_; 
v_val_451_ = lean_ctor_get(v_nextCmdSnap_x3f_449_, 0);
lean_inc(v_val_451_);
lean_dec_ref_known(v_nextCmdSnap_x3f_449_, 1);
v_task_452_ = lean_ctor_get(v_val_451_, 3);
lean_inc_ref(v_task_452_);
lean_dec(v_val_451_);
v___x_453_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go), 3, 2);
lean_closure_set(v___x_453_, 0, v_text_444_);
lean_closure_set(v___x_453_, 1, v_hoverPos_445_);
v___x_454_ = lean_unsigned_to_nat(0u);
v___x_455_ = 1;
v___x_456_ = lean_task_bind(v_task_452_, v___x_453_, v___x_454_, v___x_455_);
return v___x_456_;
}
}
else
{
lean_object* v___x_457_; 
lean_dec_ref(v_cmdParsed_446_);
lean_dec(v_hoverPos_445_);
lean_dec_ref(v_text_444_);
v___x_457_ = lean_obj_once(&l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0, &l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0_once, _init_l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0);
return v___x_457_;
}
}
else
{
lean_object* v___x_458_; lean_object* v___x_459_; 
lean_dec(v_hoverPos_445_);
lean_dec_ref(v_text_444_);
v___x_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_458_, 0, v_cmdParsed_446_);
v___x_459_ = lean_task_pure(v___x_458_);
return v___x_459_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdParsedSnap___lam__0(lean_object* v_text_460_, lean_object* v_hoverPos_461_, lean_object* v_headerProcessed_462_){
_start:
{
lean_object* v_result_x3f_463_; 
v_result_x3f_463_ = lean_ctor_get(v_headerProcessed_462_, 2);
lean_inc(v_result_x3f_463_);
lean_dec_ref(v_headerProcessed_462_);
if (lean_obj_tag(v_result_x3f_463_) == 1)
{
lean_object* v_val_464_; lean_object* v_firstCmdSnap_465_; lean_object* v_task_466_; lean_object* v___x_467_; lean_object* v___x_468_; uint8_t v___x_469_; lean_object* v___x_470_; 
v_val_464_ = lean_ctor_get(v_result_x3f_463_, 0);
lean_inc(v_val_464_);
lean_dec_ref_known(v_result_x3f_463_, 1);
v_firstCmdSnap_465_ = lean_ctor_get(v_val_464_, 1);
lean_inc_ref(v_firstCmdSnap_465_);
lean_dec(v_val_464_);
v_task_466_ = lean_ctor_get(v_firstCmdSnap_465_, 3);
lean_inc_ref(v_task_466_);
lean_dec_ref(v_firstCmdSnap_465_);
v___x_467_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go), 3, 2);
lean_closure_set(v___x_467_, 0, v_text_460_);
lean_closure_set(v___x_467_, 1, v_hoverPos_461_);
v___x_468_ = lean_unsigned_to_nat(0u);
v___x_469_ = 1;
v___x_470_ = lean_task_bind(v_task_466_, v___x_467_, v___x_468_, v___x_469_);
return v___x_470_;
}
else
{
lean_object* v___x_471_; 
lean_dec(v_result_x3f_463_);
lean_dec(v_hoverPos_461_);
lean_dec_ref(v_text_460_);
v___x_471_ = lean_obj_once(&l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0, &l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0_once, _init_l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0);
return v___x_471_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdParsedSnap(lean_object* v_initSnap_472_, lean_object* v_text_473_, lean_object* v_hoverPos_474_){
_start:
{
lean_object* v_result_x3f_475_; 
v_result_x3f_475_ = lean_ctor_get(v_initSnap_472_, 4);
lean_inc(v_result_x3f_475_);
lean_dec_ref(v_initSnap_472_);
if (lean_obj_tag(v_result_x3f_475_) == 1)
{
lean_object* v_val_476_; lean_object* v_processedSnap_477_; lean_object* v_task_478_; lean_object* v___f_479_; lean_object* v___x_480_; uint8_t v___x_481_; lean_object* v___x_482_; 
v_val_476_ = lean_ctor_get(v_result_x3f_475_, 0);
lean_inc(v_val_476_);
lean_dec_ref_known(v_result_x3f_475_, 1);
v_processedSnap_477_ = lean_ctor_get(v_val_476_, 1);
lean_inc_ref(v_processedSnap_477_);
lean_dec(v_val_476_);
v_task_478_ = lean_ctor_get(v_processedSnap_477_, 3);
lean_inc_ref(v_task_478_);
lean_dec_ref(v_processedSnap_477_);
v___f_479_ = lean_alloc_closure((void*)(l_Lean_Language_Lean_findCmdParsedSnap___lam__0), 3, 2);
lean_closure_set(v___f_479_, 0, v_text_473_);
lean_closure_set(v___f_479_, 1, v_hoverPos_474_);
v___x_480_ = lean_unsigned_to_nat(0u);
v___x_481_ = 1;
v___x_482_ = lean_task_bind(v_task_478_, v___f_479_, v___x_480_, v___x_481_);
return v___x_482_;
}
else
{
lean_object* v___x_483_; 
lean_dec(v_result_x3f_475_);
lean_dec(v_hoverPos_474_);
lean_dec_ref(v_text_473_);
v___x_483_ = lean_obj_once(&l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0, &l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0_once, _init_l___private_Lean_Language_Lean_Util_0__Lean_Language_Lean_findCmdParsedSnap_go___closed__0);
return v___x_483_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Language_Lean_findCmdDataAtPos_spec__0(lean_object* v_msg_484_){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = lean_box(0);
v___x_486_ = lean_panic_fn_borrowed(v___x_485_, v_msg_484_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Language_Lean_findCmdDataAtPos_spec__1(lean_object* v_msg_487_){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = l_Lean_Elab_instInhabitedInfoTree_default;
v___x_489_ = lean_panic_fn_borrowed(v___x_488_, v_msg_487_);
return v___x_489_;
}
}
static lean_object* _init_l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__3(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_493_ = ((lean_object*)(l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__2));
v___x_494_ = lean_unsigned_to_nat(8u);
v___x_495_ = lean_unsigned_to_nat(199u);
v___x_496_ = ((lean_object*)(l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__1));
v___x_497_ = ((lean_object*)(l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__0));
v___x_498_ = l_mkPanicMessageWithDecl(v___x_497_, v___x_496_, v___x_495_, v___x_494_, v___x_493_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__0(lean_object* v_stx_499_, lean_object* v_s_500_){
_start:
{
lean_object* v_infoTree_x3f_501_; 
v_infoTree_x3f_501_ = lean_ctor_get(v_s_500_, 2);
lean_inc(v_infoTree_x3f_501_);
lean_dec_ref(v_s_500_);
if (lean_obj_tag(v_infoTree_x3f_501_) == 0)
{
lean_object* v___x_502_; lean_object* v___x_503_; 
lean_dec(v_stx_499_);
v___x_502_ = lean_obj_once(&l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__3, &l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__3_once, _init_l_Lean_Language_Lean_findCmdDataAtPos___lam__0___closed__3);
v___x_503_ = l_panic___at___00Lean_Language_Lean_findCmdDataAtPos_spec__0(v___x_502_);
return v___x_503_;
}
else
{
lean_object* v_val_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_512_; 
v_val_504_ = lean_ctor_get(v_infoTree_x3f_501_, 0);
v_isSharedCheck_512_ = !lean_is_exclusive(v_infoTree_x3f_501_);
if (v_isSharedCheck_512_ == 0)
{
v___x_506_ = v_infoTree_x3f_501_;
v_isShared_507_ = v_isSharedCheck_512_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_val_504_);
lean_dec(v_infoTree_x3f_501_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_512_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_508_; lean_object* v___x_510_; 
v___x_508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_508_, 0, v_stx_499_);
lean_ctor_set(v___x_508_, 1, v_val_504_);
if (v_isShared_507_ == 0)
{
lean_ctor_set(v___x_506_, 0, v___x_508_);
v___x_510_ = v___x_506_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_508_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__1(lean_object* v_elabSnap_513_, lean_object* v___f_514_, lean_object* v_stx_515_, lean_object* v_x_516_){
_start:
{
if (lean_obj_tag(v_x_516_) == 0)
{
lean_object* v_infoTreeSnap_517_; lean_object* v_task_518_; lean_object* v___x_519_; uint8_t v___x_520_; lean_object* v___x_521_; 
lean_dec(v_stx_515_);
v_infoTreeSnap_517_ = lean_ctor_get(v_elabSnap_513_, 3);
lean_inc_ref(v_infoTreeSnap_517_);
lean_dec_ref(v_elabSnap_513_);
v_task_518_ = lean_ctor_get(v_infoTreeSnap_517_, 3);
lean_inc_ref(v_task_518_);
lean_dec_ref(v_infoTreeSnap_517_);
v___x_519_ = lean_unsigned_to_nat(0u);
v___x_520_ = 1;
v___x_521_ = lean_task_map(v___f_514_, v_task_518_, v___x_519_, v___x_520_);
return v___x_521_;
}
else
{
lean_object* v_val_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_531_; 
lean_dec_ref(v___f_514_);
lean_dec_ref(v_elabSnap_513_);
v_val_522_ = lean_ctor_get(v_x_516_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v_x_516_);
if (v_isSharedCheck_531_ == 0)
{
v___x_524_ = v_x_516_;
v_isShared_525_ = v_isSharedCheck_531_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_val_522_);
lean_dec(v_x_516_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_531_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_526_, 0, v_stx_515_);
lean_ctor_set(v___x_526_, 1, v_val_522_);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 0, v___x_526_);
v___x_528_ = v___x_524_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_526_);
v___x_528_ = v_reuseFailAlloc_530_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_529_; 
v___x_529_ = lean_task_pure(v___x_528_);
return v___x_529_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__5(lean_object* v_t_533_, lean_object* v_a_534_){
_start:
{
lean_object* v___f_535_; lean_object* v___x_536_; 
v___f_535_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__5___closed__0));
v___x_536_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_533_, v___f_535_, v_a_534_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__5___boxed(lean_object* v_t_537_, lean_object* v_a_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__5(v_t_537_, v_a_538_);
lean_dec_ref(v_a_538_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2___lam__0(lean_object* v_s_540_, lean_object* v___y_541_){
_start:
{
lean_object* v_toSnapshotTreeM_542_; lean_object* v___x_543_; 
v_toSnapshotTreeM_542_ = lean_ctor_get(v_s_540_, 1);
lean_inc_ref(v_toSnapshotTreeM_542_);
lean_dec_ref(v_s_540_);
lean_inc_ref(v___y_541_);
v___x_543_ = lean_apply_1(v_toSnapshotTreeM_542_, v___y_541_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2___lam__0___boxed(lean_object* v_s_544_, lean_object* v___y_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2___lam__0(v_s_544_, v___y_545_);
lean_dec_ref(v___y_545_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2(lean_object* v_t_548_, lean_object* v_a_549_){
_start:
{
lean_object* v___f_550_; lean_object* v___x_551_; 
v___f_550_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2___closed__0));
v___x_551_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_548_, v___f_550_, v_a_549_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2___boxed(lean_object* v_t_552_, lean_object* v_a_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2(v_t_552_, v_a_553_);
lean_dec_ref(v_a_553_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___lam__0(lean_object* v_s_557_, lean_object* v___y_558_){
_start:
{
lean_object* v_toSnapshot_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v_toSnapshot_559_ = lean_ctor_get(v_s_557_, 0);
lean_inc_ref(v_toSnapshot_559_);
lean_dec_ref(v_s_557_);
v___x_560_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_559_, v___y_558_);
v___x_561_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___lam__0___closed__0));
v___x_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_560_);
lean_ctor_set(v___x_562_, 1, v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___lam__0___boxed(lean_object* v_s_563_, lean_object* v___y_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___lam__0(v_s_563_, v___y_564_);
lean_dec_ref(v___y_564_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3(lean_object* v_t_567_, lean_object* v_a_568_){
_start:
{
lean_object* v___f_569_; lean_object* v___x_570_; 
v___f_569_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___closed__0));
v___x_570_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_567_, v___f_569_, v_a_568_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___boxed(lean_object* v_t_571_, lean_object* v_a_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3(v_t_571_, v_a_572_);
lean_dec_ref(v_a_572_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4___lam__0(lean_object* v_s_574_, lean_object* v___y_575_){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_576_ = l_Lean_Language_Snapshot_transform(v_s_574_, v___y_575_);
v___x_577_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3___lam__0___closed__0));
v___x_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_576_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4___lam__0___boxed(lean_object* v_s_579_, lean_object* v___y_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4___lam__0(v_s_579_, v___y_580_);
lean_dec_ref(v___y_580_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4(lean_object* v_t_583_, lean_object* v_a_584_){
_start:
{
lean_object* v___f_585_; lean_object* v___x_586_; 
v___f_585_ = ((lean_object*)(l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4___closed__0));
v___x_586_ = l_Lean_Language_SnapshotTask_transformWith___redArg(v_t_583_, v___f_585_, v_a_584_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4___boxed(lean_object* v_t_587_, lean_object* v_a_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4(v_t_587_, v_a_588_);
lean_dec_ref(v_a_588_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2(lean_object* v_a_590_){
_start:
{
lean_object* v_toSnapshot_591_; lean_object* v_elabSnap_592_; lean_object* v_resultSnap_593_; lean_object* v_infoTreeSnap_594_; lean_object* v_reportSnap_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v_toSnapshot_591_ = lean_ctor_get(v_a_590_, 0);
lean_inc_ref(v_toSnapshot_591_);
v_elabSnap_592_ = lean_ctor_get(v_a_590_, 1);
lean_inc_ref(v_elabSnap_592_);
v_resultSnap_593_ = lean_ctor_get(v_a_590_, 2);
lean_inc_ref(v_resultSnap_593_);
v_infoTreeSnap_594_ = lean_ctor_get(v_a_590_, 3);
lean_inc_ref(v_infoTreeSnap_594_);
v_reportSnap_595_ = lean_ctor_get(v_a_590_, 4);
lean_inc_ref(v_reportSnap_595_);
lean_dec_ref(v_a_590_);
v___x_596_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_597_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_591_, v___x_596_);
v___x_598_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__2(v_elabSnap_592_, v___x_596_);
v___x_599_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__3(v_resultSnap_593_, v___x_596_);
v___x_600_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__4(v_infoTreeSnap_594_, v___x_596_);
v___x_601_ = l_Lean_Language_SnapshotTask_transform___at___00Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2_spec__5(v_reportSnap_595_, v___x_596_);
v___x_602_ = lean_unsigned_to_nat(4u);
v___x_603_ = lean_mk_empty_array_with_capacity(v___x_602_);
v___x_604_ = lean_array_push(v___x_603_, v___x_598_);
v___x_605_ = lean_array_push(v___x_604_, v___x_599_);
v___x_606_ = lean_array_push(v___x_605_, v___x_600_);
v___x_607_ = lean_array_push(v___x_606_, v___x_601_);
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_597_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
return v___x_608_;
}
}
static lean_object* _init_l_Lean_Language_Lean_findCmdDataAtPos___lam__2___closed__0(void){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_609_ = lean_box(0);
v___x_610_ = lean_task_pure(v___x_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__2(lean_object* v_text_611_, lean_object* v_hoverPos_612_, uint8_t v_includeStop_613_, lean_object* v_x_614_){
_start:
{
if (lean_obj_tag(v_x_614_) == 0)
{
lean_object* v___x_615_; 
lean_dec(v_hoverPos_612_);
lean_dec_ref(v_text_611_);
v___x_615_ = lean_obj_once(&l_Lean_Language_Lean_findCmdDataAtPos___lam__2___closed__0, &l_Lean_Language_Lean_findCmdDataAtPos___lam__2___closed__0_once, _init_l_Lean_Language_Lean_findCmdDataAtPos___lam__2___closed__0);
return v___x_615_;
}
else
{
lean_object* v_val_616_; lean_object* v_stx_617_; lean_object* v_elabSnap_618_; lean_object* v___f_619_; lean_object* v___f_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; uint8_t v___x_624_; lean_object* v___x_625_; 
v_val_616_ = lean_ctor_get(v_x_614_, 0);
lean_inc(v_val_616_);
lean_dec_ref_known(v_x_614_, 1);
v_stx_617_ = lean_ctor_get(v_val_616_, 1);
lean_inc_n(v_stx_617_, 2);
v_elabSnap_618_ = lean_ctor_get(v_val_616_, 3);
lean_inc_ref_n(v_elabSnap_618_, 2);
lean_dec(v_val_616_);
v___f_619_ = lean_alloc_closure((void*)(l_Lean_Language_Lean_findCmdDataAtPos___lam__0), 2, 1);
lean_closure_set(v___f_619_, 0, v_stx_617_);
v___f_620_ = lean_alloc_closure((void*)(l_Lean_Language_Lean_findCmdDataAtPos___lam__1), 4, 3);
lean_closure_set(v___f_620_, 0, v_elabSnap_618_);
lean_closure_set(v___f_620_, 1, v___f_619_);
lean_closure_set(v___f_620_, 2, v_stx_617_);
v___x_621_ = l_Lean_Language_toSnapshotTree___at___00Lean_Language_Lean_findCmdDataAtPos_spec__2(v_elabSnap_618_);
v___x_622_ = l_Lean_Language_SnapshotTree_findInfoTreeAtPos(v_text_611_, v___x_621_, v_hoverPos_612_, v_includeStop_613_);
v___x_623_ = lean_unsigned_to_nat(0u);
v___x_624_ = 1;
v___x_625_ = lean_task_bind(v___x_622_, v___f_620_, v___x_623_, v___x_624_);
return v___x_625_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___lam__2___boxed(lean_object* v_text_626_, lean_object* v_hoverPos_627_, lean_object* v_includeStop_628_, lean_object* v_x_629_){
_start:
{
uint8_t v_includeStop_boxed_630_; lean_object* v_res_631_; 
v_includeStop_boxed_630_ = lean_unbox(v_includeStop_628_);
v_res_631_ = l_Lean_Language_Lean_findCmdDataAtPos___lam__2(v_text_626_, v_hoverPos_627_, v_includeStop_boxed_630_, v_x_629_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos(lean_object* v_initSnap_632_, lean_object* v_text_633_, lean_object* v_hoverPos_634_, uint8_t v_includeStop_635_){
_start:
{
lean_object* v___x_636_; lean_object* v___f_637_; lean_object* v___x_638_; lean_object* v___x_639_; uint8_t v___x_640_; lean_object* v___x_641_; 
v___x_636_ = lean_box(v_includeStop_635_);
lean_inc(v_hoverPos_634_);
lean_inc_ref(v_text_633_);
v___f_637_ = lean_alloc_closure((void*)(l_Lean_Language_Lean_findCmdDataAtPos___lam__2___boxed), 4, 3);
lean_closure_set(v___f_637_, 0, v_text_633_);
lean_closure_set(v___f_637_, 1, v_hoverPos_634_);
lean_closure_set(v___f_637_, 2, v___x_636_);
v___x_638_ = l_Lean_Language_Lean_findCmdParsedSnap(v_initSnap_632_, v_text_633_, v_hoverPos_634_);
v___x_639_ = lean_unsigned_to_nat(0u);
v___x_640_ = 1;
v___x_641_ = lean_task_bind(v___x_638_, v___f_637_, v___x_639_, v___x_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findCmdDataAtPos___boxed(lean_object* v_initSnap_642_, lean_object* v_text_643_, lean_object* v_hoverPos_644_, lean_object* v_includeStop_645_){
_start:
{
uint8_t v_includeStop_boxed_646_; lean_object* v_res_647_; 
v_includeStop_boxed_646_ = lean_unbox(v_includeStop_645_);
v_res_647_ = l_Lean_Language_Lean_findCmdDataAtPos(v_initSnap_642_, v_text_643_, v_hoverPos_644_, v_includeStop_boxed_646_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findInfoTreeAtPos___lam__0(lean_object* v_x_648_){
_start:
{
if (lean_obj_tag(v_x_648_) == 0)
{
lean_object* v___x_649_; 
v___x_649_ = lean_box(0);
return v___x_649_;
}
else
{
lean_object* v_val_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_658_; 
v_val_650_ = lean_ctor_get(v_x_648_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v_x_648_);
if (v_isSharedCheck_658_ == 0)
{
v___x_652_ = v_x_648_;
v_isShared_653_ = v_isSharedCheck_658_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_val_650_);
lean_dec(v_x_648_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_658_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v_snd_654_; lean_object* v___x_656_; 
v_snd_654_ = lean_ctor_get(v_val_650_, 1);
lean_inc(v_snd_654_);
lean_dec(v_val_650_);
if (v_isShared_653_ == 0)
{
lean_ctor_set(v___x_652_, 0, v_snd_654_);
v___x_656_ = v___x_652_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_snd_654_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findInfoTreeAtPos(lean_object* v_initSnap_660_, lean_object* v_text_661_, lean_object* v_hoverPos_662_, uint8_t v_includeStop_663_){
_start:
{
lean_object* v___f_664_; lean_object* v___x_665_; lean_object* v___x_666_; uint8_t v___x_667_; lean_object* v___x_668_; 
v___f_664_ = ((lean_object*)(l_Lean_Language_Lean_findInfoTreeAtPos___closed__0));
v___x_665_ = l_Lean_Language_Lean_findCmdDataAtPos(v_initSnap_660_, v_text_661_, v_hoverPos_662_, v_includeStop_663_);
v___x_666_ = lean_unsigned_to_nat(0u);
v___x_667_ = 1;
v___x_668_ = lean_task_map(v___f_664_, v___x_665_, v___x_666_, v___x_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_findInfoTreeAtPos___boxed(lean_object* v_initSnap_669_, lean_object* v_text_670_, lean_object* v_hoverPos_671_, lean_object* v_includeStop_672_){
_start:
{
uint8_t v_includeStop_boxed_673_; lean_object* v_res_674_; 
v_includeStop_boxed_673_ = lean_unbox(v_includeStop_672_);
v_res_674_ = l_Lean_Language_Lean_findInfoTreeAtPos(v_initSnap_669_, v_text_670_, v_hoverPos_671_, v_includeStop_boxed_673_);
return v_res_674_;
}
}
lean_object* runtime_initialize_Lean_Language_Lean_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_InfoTree_Util(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Language_Lean_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Language_Lean_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Language_Lean_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Language_Lean_Types(uint8_t builtin);
lean_object* initialize_Lean_Elab_InfoTree_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Language_Lean_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Language_Lean_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_InfoTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Language_Lean_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Language_Lean_Util(builtin);
}
#ifdef __cplusplus
}
#endif
