// Lean compiler output
// Module: Init.Data.String.Decode
// Imports: import Init.Data.Char.Lemmas public import Init.Data.ByteArray.Basic import Init.Data.ByteArray.Lemmas public import Init.Data.UInt.Basic import Init.Data.BitVec.Bootstrap import Init.Data.BitVec.Lemmas import Init.Data.Nat.Internal.Linear import Init.Data.Nat.MinMax import Init.Data.Option.Lemmas import Init.Data.UInt.Bitwise import Init.Data.UInt.Lemmas import Init.Omega
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
uint8_t lean_uint8_land(uint8_t, uint8_t);
uint32_t lean_uint8_to_uint32(uint8_t);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint32_t lean_uint32_shift_right(uint32_t, uint32_t);
uint8_t lean_uint32_to_uint8(uint32_t);
uint8_t lean_uint8_lor(uint8_t, uint8_t);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_uint32_dec_lt(uint32_t, uint32_t);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_String_utf8EncodeCharFast(uint32_t);
LEAN_EXPORT lean_object* l_String_utf8EncodeCharFast___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_invalid_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_invalid_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_invalid_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_invalid_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_done_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_done_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_done_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_done_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_oneMore_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_oneMore_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_oneMore_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_oneMore_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_twoMore_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_twoMore_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_twoMore_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_twoMore_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_threeMore_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_threeMore_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_threeMore_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_threeMore_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_utf8DecodeChar_x3f_parseFirstByte(uint8_t);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_parseFirstByte___boxed(lean_object*);
LEAN_EXPORT uint8_t l_UInt8_isUTF8ContinuationByte(uint8_t);
LEAN_EXPORT lean_object* l_UInt8_isUTF8ContinuationByte___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2081___redArg(uint8_t);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2081___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2081(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2081___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_utf8DecodeChar_x3f_verify_u2081___redArg();
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_verify_u2081___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_utf8DecodeChar_x3f_verify_u2081(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_verify_u2081___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_ByteArray_utf8DecodeChar_x3f_assemble_u2082Unchecked(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2082Unchecked___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2082(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2082___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_utf8DecodeChar_x3f_verify_u2082(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_verify_u2082___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_ByteArray_utf8DecodeChar_x3f_assemble_u2083Unchecked(uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2083Unchecked___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2083(uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2083___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_utf8DecodeChar_x3f_verify_u2083(uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_verify_u2083___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_ByteArray_utf8DecodeChar_x3f_assemble_u2084Unchecked(uint8_t, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2084Unchecked___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2084(uint8_t, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2084___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_utf8DecodeChar_x3f_verify_u2084(uint8_t, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_verify_u2084___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Internal_utf8DecodeList(lean_object*);
LEAN_EXPORT uint8_t l_ByteArray_validateUTF8At(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_validateUTF8At___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__10_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__10_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__6_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__6_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__8_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__8_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_ByteArray_utf8DecodeChar___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_ByteArray_utf8DecodeChar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_UInt8_instDecidableIsUTF8FirstByte(uint8_t);
LEAN_EXPORT lean_object* l_UInt8_instDecidableIsUTF8FirstByte___boxed(lean_object*);
LEAN_EXPORT lean_object* l_UInt8_utf8ByteSize___redArg(uint8_t);
LEAN_EXPORT lean_object* l_UInt8_utf8ByteSize___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_UInt8_utf8ByteSize(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_UInt8_utf8ByteSize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_utf8EncodeCharFast(uint32_t v_c_1_){
_start:
{
uint32_t v___x_2_; uint8_t v___x_3_; 
v___x_2_ = 127;
v___x_3_ = lean_uint32_dec_le(v_c_1_, v___x_2_);
if (v___x_3_ == 0)
{
uint32_t v___x_4_; uint8_t v___x_5_; 
v___x_4_ = 2047;
v___x_5_ = lean_uint32_dec_le(v_c_1_, v___x_4_);
if (v___x_5_ == 0)
{
uint32_t v___x_6_; uint8_t v___x_7_; 
v___x_6_ = 65535;
v___x_7_ = lean_uint32_dec_le(v_c_1_, v___x_6_);
if (v___x_7_ == 0)
{
uint32_t v___x_8_; uint32_t v___x_9_; uint8_t v___x_10_; uint8_t v___x_11_; uint8_t v___x_12_; uint8_t v___x_13_; uint8_t v___x_14_; uint32_t v___x_15_; uint32_t v___x_16_; uint8_t v___x_17_; uint8_t v___x_18_; uint8_t v___x_19_; uint8_t v___x_20_; uint8_t v___x_21_; uint32_t v___x_22_; uint32_t v___x_23_; uint8_t v___x_24_; uint8_t v___x_25_; uint8_t v___x_26_; uint8_t v___x_27_; uint8_t v___x_28_; uint8_t v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_8_ = 18;
v___x_9_ = lean_uint32_shift_right(v_c_1_, v___x_8_);
v___x_10_ = lean_uint32_to_uint8(v___x_9_);
v___x_11_ = 7;
v___x_12_ = lean_uint8_land(v___x_10_, v___x_11_);
v___x_13_ = 240;
v___x_14_ = lean_uint8_lor(v___x_12_, v___x_13_);
v___x_15_ = 12;
v___x_16_ = lean_uint32_shift_right(v_c_1_, v___x_15_);
v___x_17_ = lean_uint32_to_uint8(v___x_16_);
v___x_18_ = 63;
v___x_19_ = lean_uint8_land(v___x_17_, v___x_18_);
v___x_20_ = 128;
v___x_21_ = lean_uint8_lor(v___x_19_, v___x_20_);
v___x_22_ = 6;
v___x_23_ = lean_uint32_shift_right(v_c_1_, v___x_22_);
v___x_24_ = lean_uint32_to_uint8(v___x_23_);
v___x_25_ = lean_uint8_land(v___x_24_, v___x_18_);
v___x_26_ = lean_uint8_lor(v___x_25_, v___x_20_);
v___x_27_ = lean_uint32_to_uint8(v_c_1_);
v___x_28_ = lean_uint8_land(v___x_27_, v___x_18_);
v___x_29_ = lean_uint8_lor(v___x_28_, v___x_20_);
v___x_30_ = lean_box(0);
v___x_31_ = lean_box(v___x_29_);
v___x_32_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
lean_ctor_set(v___x_32_, 1, v___x_30_);
v___x_33_ = lean_box(v___x_26_);
v___x_34_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
lean_ctor_set(v___x_34_, 1, v___x_32_);
v___x_35_ = lean_box(v___x_21_);
v___x_36_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
lean_ctor_set(v___x_36_, 1, v___x_34_);
v___x_37_ = lean_box(v___x_14_);
v___x_38_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_36_);
return v___x_38_;
}
else
{
uint32_t v___x_39_; uint32_t v___x_40_; uint8_t v___x_41_; uint8_t v___x_42_; uint8_t v___x_43_; uint8_t v___x_44_; uint8_t v___x_45_; uint32_t v___x_46_; uint32_t v___x_47_; uint8_t v___x_48_; uint8_t v___x_49_; uint8_t v___x_50_; uint8_t v___x_51_; uint8_t v___x_52_; uint8_t v___x_53_; uint8_t v___x_54_; uint8_t v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_39_ = 12;
v___x_40_ = lean_uint32_shift_right(v_c_1_, v___x_39_);
v___x_41_ = lean_uint32_to_uint8(v___x_40_);
v___x_42_ = 15;
v___x_43_ = lean_uint8_land(v___x_41_, v___x_42_);
v___x_44_ = 224;
v___x_45_ = lean_uint8_lor(v___x_43_, v___x_44_);
v___x_46_ = 6;
v___x_47_ = lean_uint32_shift_right(v_c_1_, v___x_46_);
v___x_48_ = lean_uint32_to_uint8(v___x_47_);
v___x_49_ = 63;
v___x_50_ = lean_uint8_land(v___x_48_, v___x_49_);
v___x_51_ = 128;
v___x_52_ = lean_uint8_lor(v___x_50_, v___x_51_);
v___x_53_ = lean_uint32_to_uint8(v_c_1_);
v___x_54_ = lean_uint8_land(v___x_53_, v___x_49_);
v___x_55_ = lean_uint8_lor(v___x_54_, v___x_51_);
v___x_56_ = lean_box(0);
v___x_57_ = lean_box(v___x_55_);
v___x_58_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
lean_ctor_set(v___x_58_, 1, v___x_56_);
v___x_59_ = lean_box(v___x_52_);
v___x_60_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set(v___x_60_, 1, v___x_58_);
v___x_61_ = lean_box(v___x_45_);
v___x_62_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
return v___x_62_;
}
}
else
{
uint32_t v___x_63_; uint32_t v___x_64_; uint8_t v___x_65_; uint8_t v___x_66_; uint8_t v___x_67_; uint8_t v___x_68_; uint8_t v___x_69_; uint8_t v___x_70_; uint8_t v___x_71_; uint8_t v___x_72_; uint8_t v___x_73_; uint8_t v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_63_ = 6;
v___x_64_ = lean_uint32_shift_right(v_c_1_, v___x_63_);
v___x_65_ = lean_uint32_to_uint8(v___x_64_);
v___x_66_ = 31;
v___x_67_ = lean_uint8_land(v___x_65_, v___x_66_);
v___x_68_ = 192;
v___x_69_ = lean_uint8_lor(v___x_67_, v___x_68_);
v___x_70_ = lean_uint32_to_uint8(v_c_1_);
v___x_71_ = 63;
v___x_72_ = lean_uint8_land(v___x_70_, v___x_71_);
v___x_73_ = 128;
v___x_74_ = lean_uint8_lor(v___x_72_, v___x_73_);
v___x_75_ = lean_box(0);
v___x_76_ = lean_box(v___x_74_);
v___x_77_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set(v___x_77_, 1, v___x_75_);
v___x_78_ = lean_box(v___x_69_);
v___x_79_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_77_);
return v___x_79_;
}
}
else
{
uint8_t v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_80_ = lean_uint32_to_uint8(v_c_1_);
v___x_81_ = lean_box(0);
v___x_82_ = lean_box(v___x_80_);
v___x_83_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v___x_81_);
return v___x_83_;
}
}
}
LEAN_EXPORT lean_object* l_String_utf8EncodeCharFast___boxed(lean_object* v_c_84_){
_start:
{
uint32_t v_c_boxed_85_; lean_object* v_res_86_; 
v_c_boxed_85_ = lean_unbox_uint32(v_c_84_);
lean_dec(v_c_84_);
v_res_86_ = l_String_utf8EncodeCharFast(v_c_boxed_85_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorIdx___impl(uint8_t v_x_87_){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_box(v_x_87_);
v___x_89_ = lean_obj_tag_nat(v___x_88_);
lean_dec(v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorIdx___impl___boxed(lean_object* v_x_90_){
_start:
{
uint8_t v_x_4__boxed_91_; lean_object* v_res_92_; 
v_x_4__boxed_91_ = lean_unbox(v_x_90_);
v_res_92_ = l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorIdx___impl(v_x_4__boxed_91_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorElim___redArg(lean_object* v_k_93_){
_start:
{
lean_inc(v_k_93_);
return v_k_93_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorElim___redArg___boxed(lean_object* v_k_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorElim___redArg(v_k_94_);
lean_dec(v_k_94_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorElim(lean_object* v_motive_96_, lean_object* v_ctorIdx_97_, uint8_t v_t_98_, lean_object* v_h_99_, lean_object* v_k_100_){
_start:
{
lean_inc(v_k_100_);
return v_k_100_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorElim___boxed(lean_object* v_motive_101_, lean_object* v_ctorIdx_102_, lean_object* v_t_103_, lean_object* v_h_104_, lean_object* v_k_105_){
_start:
{
uint8_t v_t_boxed_106_; lean_object* v_res_107_; 
v_t_boxed_106_ = lean_unbox(v_t_103_);
v_res_107_ = l_ByteArray_utf8DecodeChar_x3f_FirstByte_ctorElim(v_motive_101_, v_ctorIdx_102_, v_t_boxed_106_, v_h_104_, v_k_105_);
lean_dec(v_k_105_);
lean_dec(v_ctorIdx_102_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_invalid_elim___redArg(lean_object* v_invalid_108_){
_start:
{
lean_inc(v_invalid_108_);
return v_invalid_108_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_invalid_elim___redArg___boxed(lean_object* v_invalid_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_ByteArray_utf8DecodeChar_x3f_FirstByte_invalid_elim___redArg(v_invalid_109_);
lean_dec(v_invalid_109_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_invalid_elim(lean_object* v_motive_111_, uint8_t v_t_112_, lean_object* v_h_113_, lean_object* v_invalid_114_){
_start:
{
lean_inc(v_invalid_114_);
return v_invalid_114_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_invalid_elim___boxed(lean_object* v_motive_115_, lean_object* v_t_116_, lean_object* v_h_117_, lean_object* v_invalid_118_){
_start:
{
uint8_t v_t_boxed_119_; lean_object* v_res_120_; 
v_t_boxed_119_ = lean_unbox(v_t_116_);
v_res_120_ = l_ByteArray_utf8DecodeChar_x3f_FirstByte_invalid_elim(v_motive_115_, v_t_boxed_119_, v_h_117_, v_invalid_118_);
lean_dec(v_invalid_118_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_done_elim___redArg(lean_object* v_done_121_){
_start:
{
lean_inc(v_done_121_);
return v_done_121_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_done_elim___redArg___boxed(lean_object* v_done_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l_ByteArray_utf8DecodeChar_x3f_FirstByte_done_elim___redArg(v_done_122_);
lean_dec(v_done_122_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_done_elim(lean_object* v_motive_124_, uint8_t v_t_125_, lean_object* v_h_126_, lean_object* v_done_127_){
_start:
{
lean_inc(v_done_127_);
return v_done_127_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_done_elim___boxed(lean_object* v_motive_128_, lean_object* v_t_129_, lean_object* v_h_130_, lean_object* v_done_131_){
_start:
{
uint8_t v_t_boxed_132_; lean_object* v_res_133_; 
v_t_boxed_132_ = lean_unbox(v_t_129_);
v_res_133_ = l_ByteArray_utf8DecodeChar_x3f_FirstByte_done_elim(v_motive_128_, v_t_boxed_132_, v_h_130_, v_done_131_);
lean_dec(v_done_131_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_oneMore_elim___redArg(lean_object* v_oneMore_134_){
_start:
{
lean_inc(v_oneMore_134_);
return v_oneMore_134_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_oneMore_elim___redArg___boxed(lean_object* v_oneMore_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_ByteArray_utf8DecodeChar_x3f_FirstByte_oneMore_elim___redArg(v_oneMore_135_);
lean_dec(v_oneMore_135_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_oneMore_elim(lean_object* v_motive_137_, uint8_t v_t_138_, lean_object* v_h_139_, lean_object* v_oneMore_140_){
_start:
{
lean_inc(v_oneMore_140_);
return v_oneMore_140_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_oneMore_elim___boxed(lean_object* v_motive_141_, lean_object* v_t_142_, lean_object* v_h_143_, lean_object* v_oneMore_144_){
_start:
{
uint8_t v_t_boxed_145_; lean_object* v_res_146_; 
v_t_boxed_145_ = lean_unbox(v_t_142_);
v_res_146_ = l_ByteArray_utf8DecodeChar_x3f_FirstByte_oneMore_elim(v_motive_141_, v_t_boxed_145_, v_h_143_, v_oneMore_144_);
lean_dec(v_oneMore_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_twoMore_elim___redArg(lean_object* v_twoMore_147_){
_start:
{
lean_inc(v_twoMore_147_);
return v_twoMore_147_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_twoMore_elim___redArg___boxed(lean_object* v_twoMore_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_ByteArray_utf8DecodeChar_x3f_FirstByte_twoMore_elim___redArg(v_twoMore_148_);
lean_dec(v_twoMore_148_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_twoMore_elim(lean_object* v_motive_150_, uint8_t v_t_151_, lean_object* v_h_152_, lean_object* v_twoMore_153_){
_start:
{
lean_inc(v_twoMore_153_);
return v_twoMore_153_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_twoMore_elim___boxed(lean_object* v_motive_154_, lean_object* v_t_155_, lean_object* v_h_156_, lean_object* v_twoMore_157_){
_start:
{
uint8_t v_t_boxed_158_; lean_object* v_res_159_; 
v_t_boxed_158_ = lean_unbox(v_t_155_);
v_res_159_ = l_ByteArray_utf8DecodeChar_x3f_FirstByte_twoMore_elim(v_motive_154_, v_t_boxed_158_, v_h_156_, v_twoMore_157_);
lean_dec(v_twoMore_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_threeMore_elim___redArg(lean_object* v_threeMore_160_){
_start:
{
lean_inc(v_threeMore_160_);
return v_threeMore_160_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_threeMore_elim___redArg___boxed(lean_object* v_threeMore_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_ByteArray_utf8DecodeChar_x3f_FirstByte_threeMore_elim___redArg(v_threeMore_161_);
lean_dec(v_threeMore_161_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_threeMore_elim(lean_object* v_motive_163_, uint8_t v_t_164_, lean_object* v_h_165_, lean_object* v_threeMore_166_){
_start:
{
lean_inc(v_threeMore_166_);
return v_threeMore_166_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_FirstByte_threeMore_elim___boxed(lean_object* v_motive_167_, lean_object* v_t_168_, lean_object* v_h_169_, lean_object* v_threeMore_170_){
_start:
{
uint8_t v_t_boxed_171_; lean_object* v_res_172_; 
v_t_boxed_171_ = lean_unbox(v_t_168_);
v_res_172_ = l_ByteArray_utf8DecodeChar_x3f_FirstByte_threeMore_elim(v_motive_167_, v_t_boxed_171_, v_h_169_, v_threeMore_170_);
lean_dec(v_threeMore_170_);
return v_res_172_;
}
}
LEAN_EXPORT uint8_t l_ByteArray_utf8DecodeChar_x3f_parseFirstByte(uint8_t v_b_173_){
_start:
{
uint8_t v___x_174_; uint8_t v___x_175_; uint8_t v___x_176_; uint8_t v___x_177_; 
v___x_174_ = 128;
v___x_175_ = lean_uint8_land(v_b_173_, v___x_174_);
v___x_176_ = 0;
v___x_177_ = lean_uint8_dec_eq(v___x_175_, v___x_176_);
if (v___x_177_ == 0)
{
uint8_t v___x_178_; uint8_t v___x_179_; uint8_t v___x_180_; uint8_t v___x_181_; 
v___x_178_ = 224;
v___x_179_ = lean_uint8_land(v_b_173_, v___x_178_);
v___x_180_ = 192;
v___x_181_ = lean_uint8_dec_eq(v___x_179_, v___x_180_);
if (v___x_181_ == 0)
{
uint8_t v___x_182_; uint8_t v___x_183_; uint8_t v___x_184_; 
v___x_182_ = 240;
v___x_183_ = lean_uint8_land(v_b_173_, v___x_182_);
v___x_184_ = lean_uint8_dec_eq(v___x_183_, v___x_178_);
if (v___x_184_ == 0)
{
uint8_t v___x_185_; uint8_t v___x_186_; uint8_t v___x_187_; 
v___x_185_ = 248;
v___x_186_ = lean_uint8_land(v_b_173_, v___x_185_);
v___x_187_ = lean_uint8_dec_eq(v___x_186_, v___x_182_);
if (v___x_187_ == 0)
{
uint8_t v___x_188_; 
v___x_188_ = 0;
return v___x_188_;
}
else
{
uint8_t v___x_189_; 
v___x_189_ = 4;
return v___x_189_;
}
}
else
{
uint8_t v___x_190_; 
v___x_190_ = 3;
return v___x_190_;
}
}
else
{
uint8_t v___x_191_; 
v___x_191_ = 2;
return v___x_191_;
}
}
else
{
uint8_t v___x_192_; 
v___x_192_ = 1;
return v___x_192_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_parseFirstByte___boxed(lean_object* v_b_193_){
_start:
{
uint8_t v_b_boxed_194_; uint8_t v_res_195_; lean_object* v_r_196_; 
v_b_boxed_194_ = lean_unbox(v_b_193_);
v_res_195_ = l_ByteArray_utf8DecodeChar_x3f_parseFirstByte(v_b_boxed_194_);
v_r_196_ = lean_box(v_res_195_);
return v_r_196_;
}
}
LEAN_EXPORT uint8_t l_UInt8_isUTF8ContinuationByte(uint8_t v_b_197_){
_start:
{
uint8_t v___x_198_; uint8_t v___x_199_; uint8_t v___x_200_; uint8_t v___x_201_; 
v___x_198_ = 192;
v___x_199_ = lean_uint8_land(v_b_197_, v___x_198_);
v___x_200_ = 128;
v___x_201_ = lean_uint8_dec_eq(v___x_199_, v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_UInt8_isUTF8ContinuationByte___boxed(lean_object* v_b_202_){
_start:
{
uint8_t v_b_boxed_203_; uint8_t v_res_204_; lean_object* v_r_205_; 
v_b_boxed_203_ = lean_unbox(v_b_202_);
v_res_204_ = l_UInt8_isUTF8ContinuationByte(v_b_boxed_203_);
v_r_205_ = lean_box(v_res_204_);
return v_r_205_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2081___redArg(uint8_t v_w_206_){
_start:
{
uint32_t v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_207_ = lean_uint8_to_uint32(v_w_206_);
v___x_208_ = lean_box_uint32(v___x_207_);
v___x_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2081___redArg___boxed(lean_object* v_w_210_){
_start:
{
uint8_t v_w_boxed_211_; lean_object* v_res_212_; 
v_w_boxed_211_ = lean_unbox(v_w_210_);
v_res_212_ = l_ByteArray_utf8DecodeChar_x3f_assemble_u2081___redArg(v_w_boxed_211_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2081(uint8_t v_w_213_, lean_object* v_h_214_){
_start:
{
uint32_t v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_215_ = lean_uint8_to_uint32(v_w_213_);
v___x_216_ = lean_box_uint32(v___x_215_);
v___x_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2081___boxed(lean_object* v_w_218_, lean_object* v_h_219_){
_start:
{
uint8_t v_w_boxed_220_; lean_object* v_res_221_; 
v_w_boxed_220_ = lean_unbox(v_w_218_);
v_res_221_ = l_ByteArray_utf8DecodeChar_x3f_assemble_u2081(v_w_boxed_220_, v_h_219_);
return v_res_221_;
}
}
LEAN_EXPORT uint8_t l_ByteArray_utf8DecodeChar_x3f_verify_u2081___redArg(){
_start:
{
uint8_t v___x_223_; 
v___x_223_ = 1;
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_verify_u2081___redArg___boxed(lean_object* v___dummy_224_){
_start:
{
uint8_t v_res_225_; lean_object* v_r_226_; 
v_res_225_ = l_ByteArray_utf8DecodeChar_x3f_verify_u2081___redArg();
v_r_226_ = lean_box(v_res_225_);
return v_r_226_;
}
}
LEAN_EXPORT uint8_t l_ByteArray_utf8DecodeChar_x3f_verify_u2081(uint8_t v_w_227_, uint8_t v___w_228_, lean_object* v___h_229_){
_start:
{
uint8_t v___x_230_; 
v___x_230_ = 1;
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_verify_u2081___boxed(lean_object* v_w_231_, lean_object* v___w_232_, lean_object* v___h_233_){
_start:
{
uint8_t v_w_boxed_234_; uint8_t v___w_boxed_235_; uint8_t v_res_236_; lean_object* v_r_237_; 
v_w_boxed_234_ = lean_unbox(v_w_231_);
v___w_boxed_235_ = lean_unbox(v___w_232_);
v_res_236_ = l_ByteArray_utf8DecodeChar_x3f_verify_u2081(v_w_boxed_234_, v___w_boxed_235_, v___h_233_);
v_r_237_ = lean_box(v_res_236_);
return v_r_237_;
}
}
LEAN_EXPORT uint32_t l_ByteArray_utf8DecodeChar_x3f_assemble_u2082Unchecked(uint8_t v_w_238_, uint8_t v_x_239_){
_start:
{
uint8_t v___x_240_; uint8_t v_b_u2080_241_; uint8_t v___x_242_; uint8_t v_b_u2081_243_; uint32_t v___x_244_; uint32_t v___x_245_; uint32_t v___x_246_; uint32_t v___x_247_; uint32_t v___x_248_; 
v___x_240_ = 31;
v_b_u2080_241_ = lean_uint8_land(v_w_238_, v___x_240_);
v___x_242_ = 63;
v_b_u2081_243_ = lean_uint8_land(v_x_239_, v___x_242_);
v___x_244_ = lean_uint8_to_uint32(v_b_u2080_241_);
v___x_245_ = 6;
v___x_246_ = lean_uint32_shift_left(v___x_244_, v___x_245_);
v___x_247_ = lean_uint8_to_uint32(v_b_u2081_243_);
v___x_248_ = lean_uint32_lor(v___x_246_, v___x_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2082Unchecked___boxed(lean_object* v_w_249_, lean_object* v_x_250_){
_start:
{
uint8_t v_w_boxed_251_; uint8_t v_x_boxed_252_; uint32_t v_res_253_; lean_object* v_r_254_; 
v_w_boxed_251_ = lean_unbox(v_w_249_);
v_x_boxed_252_ = lean_unbox(v_x_250_);
v_res_253_ = l_ByteArray_utf8DecodeChar_x3f_assemble_u2082Unchecked(v_w_boxed_251_, v_x_boxed_252_);
v_r_254_ = lean_box_uint32(v_res_253_);
return v_r_254_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2082(uint8_t v_w_255_, uint8_t v_x_256_){
_start:
{
uint8_t v___x_257_; uint8_t v___x_258_; uint8_t v___x_259_; uint8_t v___x_260_; 
v___x_257_ = 192;
v___x_258_ = lean_uint8_land(v_x_256_, v___x_257_);
v___x_259_ = 128;
v___x_260_ = lean_uint8_dec_eq(v___x_258_, v___x_259_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; 
v___x_261_ = lean_box(0);
return v___x_261_;
}
else
{
uint8_t v___x_262_; uint8_t v_b_u2080_263_; uint8_t v___x_264_; uint8_t v_b_u2081_265_; uint32_t v___x_266_; uint32_t v___x_267_; uint32_t v___x_268_; uint32_t v___x_269_; uint32_t v_r_270_; uint32_t v___x_271_; uint8_t v___x_272_; 
v___x_262_ = 31;
v_b_u2080_263_ = lean_uint8_land(v_w_255_, v___x_262_);
v___x_264_ = 63;
v_b_u2081_265_ = lean_uint8_land(v_x_256_, v___x_264_);
v___x_266_ = lean_uint8_to_uint32(v_b_u2080_263_);
v___x_267_ = 6;
v___x_268_ = lean_uint32_shift_left(v___x_266_, v___x_267_);
v___x_269_ = lean_uint8_to_uint32(v_b_u2081_265_);
v_r_270_ = lean_uint32_lor(v___x_268_, v___x_269_);
v___x_271_ = 128;
v___x_272_ = lean_uint32_dec_lt(v_r_270_, v___x_271_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = lean_box_uint32(v_r_270_);
v___x_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
return v___x_274_;
}
else
{
lean_object* v___x_275_; 
v___x_275_ = lean_box(0);
return v___x_275_;
}
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2082___boxed(lean_object* v_w_276_, lean_object* v_x_277_){
_start:
{
uint8_t v_w_boxed_278_; uint8_t v_x_boxed_279_; lean_object* v_res_280_; 
v_w_boxed_278_ = lean_unbox(v_w_276_);
v_x_boxed_279_ = lean_unbox(v_x_277_);
v_res_280_ = l_ByteArray_utf8DecodeChar_x3f_assemble_u2082(v_w_boxed_278_, v_x_boxed_279_);
return v_res_280_;
}
}
LEAN_EXPORT uint8_t l_ByteArray_utf8DecodeChar_x3f_verify_u2082(uint8_t v_w_281_, uint8_t v_x_282_){
_start:
{
uint8_t v___x_283_; uint8_t v___x_284_; uint8_t v___x_285_; uint8_t v___x_286_; 
v___x_283_ = 192;
v___x_284_ = lean_uint8_land(v_x_282_, v___x_283_);
v___x_285_ = 128;
v___x_286_ = lean_uint8_dec_eq(v___x_284_, v___x_285_);
if (v___x_286_ == 0)
{
return v___x_286_;
}
else
{
uint8_t v___x_287_; uint8_t v_b_u2080_288_; uint8_t v___x_289_; uint8_t v_b_u2081_290_; uint32_t v___x_291_; uint32_t v___x_292_; uint32_t v___x_293_; uint32_t v___x_294_; uint32_t v_r_295_; uint32_t v___x_296_; uint8_t v___x_297_; 
v___x_287_ = 31;
v_b_u2080_288_ = lean_uint8_land(v_w_281_, v___x_287_);
v___x_289_ = 63;
v_b_u2081_290_ = lean_uint8_land(v_x_282_, v___x_289_);
v___x_291_ = lean_uint8_to_uint32(v_b_u2080_288_);
v___x_292_ = 6;
v___x_293_ = lean_uint32_shift_left(v___x_291_, v___x_292_);
v___x_294_ = lean_uint8_to_uint32(v_b_u2081_290_);
v_r_295_ = lean_uint32_lor(v___x_293_, v___x_294_);
v___x_296_ = 128;
v___x_297_ = lean_uint32_dec_le(v___x_296_, v_r_295_);
return v___x_297_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_verify_u2082___boxed(lean_object* v_w_298_, lean_object* v_x_299_){
_start:
{
uint8_t v_w_boxed_300_; uint8_t v_x_boxed_301_; uint8_t v_res_302_; lean_object* v_r_303_; 
v_w_boxed_300_ = lean_unbox(v_w_298_);
v_x_boxed_301_ = lean_unbox(v_x_299_);
v_res_302_ = l_ByteArray_utf8DecodeChar_x3f_verify_u2082(v_w_boxed_300_, v_x_boxed_301_);
v_r_303_ = lean_box(v_res_302_);
return v_r_303_;
}
}
LEAN_EXPORT uint32_t l_ByteArray_utf8DecodeChar_x3f_assemble_u2083Unchecked(uint8_t v_w_304_, uint8_t v_x_305_, uint8_t v_y_306_){
_start:
{
uint8_t v___x_307_; uint8_t v_b_u2080_308_; uint8_t v___x_309_; uint8_t v_b_u2081_310_; uint8_t v_b_u2082_311_; uint32_t v___x_312_; uint32_t v___x_313_; uint32_t v___x_314_; uint32_t v___x_315_; uint32_t v___x_316_; uint32_t v___x_317_; uint32_t v___x_318_; uint32_t v___x_319_; uint32_t v___x_320_; 
v___x_307_ = 15;
v_b_u2080_308_ = lean_uint8_land(v_w_304_, v___x_307_);
v___x_309_ = 63;
v_b_u2081_310_ = lean_uint8_land(v_x_305_, v___x_309_);
v_b_u2082_311_ = lean_uint8_land(v_y_306_, v___x_309_);
v___x_312_ = lean_uint8_to_uint32(v_b_u2080_308_);
v___x_313_ = 12;
v___x_314_ = lean_uint32_shift_left(v___x_312_, v___x_313_);
v___x_315_ = lean_uint8_to_uint32(v_b_u2081_310_);
v___x_316_ = 6;
v___x_317_ = lean_uint32_shift_left(v___x_315_, v___x_316_);
v___x_318_ = lean_uint32_lor(v___x_314_, v___x_317_);
v___x_319_ = lean_uint8_to_uint32(v_b_u2082_311_);
v___x_320_ = lean_uint32_lor(v___x_318_, v___x_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2083Unchecked___boxed(lean_object* v_w_321_, lean_object* v_x_322_, lean_object* v_y_323_){
_start:
{
uint8_t v_w_boxed_324_; uint8_t v_x_boxed_325_; uint8_t v_y_boxed_326_; uint32_t v_res_327_; lean_object* v_r_328_; 
v_w_boxed_324_ = lean_unbox(v_w_321_);
v_x_boxed_325_ = lean_unbox(v_x_322_);
v_y_boxed_326_ = lean_unbox(v_y_323_);
v_res_327_ = l_ByteArray_utf8DecodeChar_x3f_assemble_u2083Unchecked(v_w_boxed_324_, v_x_boxed_325_, v_y_boxed_326_);
v_r_328_ = lean_box_uint32(v_res_327_);
return v_r_328_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2083(uint8_t v_w_329_, uint8_t v_x_330_, uint8_t v_y_331_){
_start:
{
uint8_t v___x_332_; uint8_t v___x_333_; uint8_t v___x_334_; uint8_t v___x_335_; 
v___x_332_ = 192;
v___x_333_ = lean_uint8_land(v_x_330_, v___x_332_);
v___x_334_ = 128;
v___x_335_ = lean_uint8_dec_eq(v___x_333_, v___x_334_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; 
v___x_336_ = lean_box(0);
return v___x_336_;
}
else
{
uint8_t v___x_337_; uint8_t v___x_338_; 
v___x_337_ = lean_uint8_land(v_y_331_, v___x_332_);
v___x_338_ = lean_uint8_dec_eq(v___x_337_, v___x_334_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; 
v___x_339_ = lean_box(0);
return v___x_339_;
}
else
{
uint8_t v___x_340_; uint8_t v_b_u2080_341_; uint8_t v___x_342_; uint8_t v_b_u2081_343_; uint8_t v_b_u2082_344_; uint32_t v___x_345_; uint32_t v___x_346_; uint32_t v___x_347_; uint32_t v___x_348_; uint32_t v___x_349_; uint32_t v___x_350_; uint32_t v___x_351_; uint32_t v___x_352_; uint32_t v_r_353_; uint32_t v___x_354_; uint8_t v___x_355_; 
v___x_340_ = 15;
v_b_u2080_341_ = lean_uint8_land(v_w_329_, v___x_340_);
v___x_342_ = 63;
v_b_u2081_343_ = lean_uint8_land(v_x_330_, v___x_342_);
v_b_u2082_344_ = lean_uint8_land(v_y_331_, v___x_342_);
v___x_345_ = lean_uint8_to_uint32(v_b_u2080_341_);
v___x_346_ = 12;
v___x_347_ = lean_uint32_shift_left(v___x_345_, v___x_346_);
v___x_348_ = lean_uint8_to_uint32(v_b_u2081_343_);
v___x_349_ = 6;
v___x_350_ = lean_uint32_shift_left(v___x_348_, v___x_349_);
v___x_351_ = lean_uint32_lor(v___x_347_, v___x_350_);
v___x_352_ = lean_uint8_to_uint32(v_b_u2082_344_);
v_r_353_ = lean_uint32_lor(v___x_351_, v___x_352_);
v___x_354_ = 2048;
v___x_355_ = lean_uint32_dec_lt(v_r_353_, v___x_354_);
if (v___x_355_ == 0)
{
uint32_t v___x_356_; uint8_t v___x_357_; 
v___x_356_ = 55296;
v___x_357_ = lean_uint32_dec_le(v___x_356_, v_r_353_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = lean_box_uint32(v_r_353_);
v___x_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
return v___x_359_;
}
else
{
uint32_t v___x_360_; uint8_t v___x_361_; 
v___x_360_ = 57343;
v___x_361_ = lean_uint32_dec_le(v_r_353_, v___x_360_);
if (v___x_361_ == 0)
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_box_uint32(v_r_353_);
v___x_363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
return v___x_363_;
}
else
{
lean_object* v___x_364_; 
v___x_364_ = lean_box(0);
return v___x_364_;
}
}
}
else
{
lean_object* v___x_365_; 
v___x_365_ = lean_box(0);
return v___x_365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2083___boxed(lean_object* v_w_366_, lean_object* v_x_367_, lean_object* v_y_368_){
_start:
{
uint8_t v_w_boxed_369_; uint8_t v_x_boxed_370_; uint8_t v_y_boxed_371_; lean_object* v_res_372_; 
v_w_boxed_369_ = lean_unbox(v_w_366_);
v_x_boxed_370_ = lean_unbox(v_x_367_);
v_y_boxed_371_ = lean_unbox(v_y_368_);
v_res_372_ = l_ByteArray_utf8DecodeChar_x3f_assemble_u2083(v_w_boxed_369_, v_x_boxed_370_, v_y_boxed_371_);
return v_res_372_;
}
}
LEAN_EXPORT uint8_t l_ByteArray_utf8DecodeChar_x3f_verify_u2083(uint8_t v_w_373_, uint8_t v_x_374_, uint8_t v_y_375_){
_start:
{
uint8_t v___x_376_; uint8_t v___x_377_; uint8_t v___x_378_; uint8_t v___x_379_; 
v___x_376_ = 192;
v___x_377_ = lean_uint8_land(v_x_374_, v___x_376_);
v___x_378_ = 128;
v___x_379_ = lean_uint8_dec_eq(v___x_377_, v___x_378_);
if (v___x_379_ == 0)
{
return v___x_379_;
}
else
{
uint8_t v___x_380_; uint8_t v___x_381_; 
v___x_380_ = lean_uint8_land(v_y_375_, v___x_376_);
v___x_381_ = lean_uint8_dec_eq(v___x_380_, v___x_378_);
if (v___x_381_ == 0)
{
return v___x_381_;
}
else
{
uint8_t v___x_382_; uint8_t v_b_u2080_383_; uint8_t v___x_384_; uint8_t v_b_u2081_385_; uint8_t v_b_u2082_386_; uint32_t v___x_387_; uint32_t v___x_388_; uint32_t v___x_389_; uint32_t v___x_390_; uint32_t v___x_391_; uint32_t v___x_392_; uint32_t v___x_393_; uint32_t v___x_394_; uint32_t v_r_395_; uint32_t v___x_396_; uint8_t v___x_397_; 
v___x_382_ = 15;
v_b_u2080_383_ = lean_uint8_land(v_w_373_, v___x_382_);
v___x_384_ = 63;
v_b_u2081_385_ = lean_uint8_land(v_x_374_, v___x_384_);
v_b_u2082_386_ = lean_uint8_land(v_y_375_, v___x_384_);
v___x_387_ = lean_uint8_to_uint32(v_b_u2080_383_);
v___x_388_ = 12;
v___x_389_ = lean_uint32_shift_left(v___x_387_, v___x_388_);
v___x_390_ = lean_uint8_to_uint32(v_b_u2081_385_);
v___x_391_ = 6;
v___x_392_ = lean_uint32_shift_left(v___x_390_, v___x_391_);
v___x_393_ = lean_uint32_lor(v___x_389_, v___x_392_);
v___x_394_ = lean_uint8_to_uint32(v_b_u2082_386_);
v_r_395_ = lean_uint32_lor(v___x_393_, v___x_394_);
v___x_396_ = 2048;
v___x_397_ = lean_uint32_dec_le(v___x_396_, v_r_395_);
if (v___x_397_ == 0)
{
return v___x_397_;
}
else
{
uint32_t v___x_398_; uint8_t v___x_399_; 
v___x_398_ = 55296;
v___x_399_ = lean_uint32_dec_lt(v_r_395_, v___x_398_);
if (v___x_399_ == 0)
{
uint32_t v___x_400_; uint8_t v___x_401_; 
v___x_400_ = 57343;
v___x_401_ = lean_uint32_dec_lt(v___x_400_, v_r_395_);
return v___x_401_;
}
else
{
return v___x_399_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_verify_u2083___boxed(lean_object* v_w_402_, lean_object* v_x_403_, lean_object* v_y_404_){
_start:
{
uint8_t v_w_boxed_405_; uint8_t v_x_boxed_406_; uint8_t v_y_boxed_407_; uint8_t v_res_408_; lean_object* v_r_409_; 
v_w_boxed_405_ = lean_unbox(v_w_402_);
v_x_boxed_406_ = lean_unbox(v_x_403_);
v_y_boxed_407_ = lean_unbox(v_y_404_);
v_res_408_ = l_ByteArray_utf8DecodeChar_x3f_verify_u2083(v_w_boxed_405_, v_x_boxed_406_, v_y_boxed_407_);
v_r_409_ = lean_box(v_res_408_);
return v_r_409_;
}
}
LEAN_EXPORT uint32_t l_ByteArray_utf8DecodeChar_x3f_assemble_u2084Unchecked(uint8_t v_w_410_, uint8_t v_x_411_, uint8_t v_y_412_, uint8_t v_z_413_){
_start:
{
uint8_t v___x_414_; uint8_t v_b_u2080_415_; uint8_t v___x_416_; uint8_t v_b_u2081_417_; uint8_t v_b_u2082_418_; uint8_t v_b_u2083_419_; uint32_t v___x_420_; uint32_t v___x_421_; uint32_t v___x_422_; uint32_t v___x_423_; uint32_t v___x_424_; uint32_t v___x_425_; uint32_t v___x_426_; uint32_t v___x_427_; uint32_t v___x_428_; uint32_t v___x_429_; uint32_t v___x_430_; uint32_t v___x_431_; uint32_t v___x_432_; 
v___x_414_ = 7;
v_b_u2080_415_ = lean_uint8_land(v_w_410_, v___x_414_);
v___x_416_ = 63;
v_b_u2081_417_ = lean_uint8_land(v_x_411_, v___x_416_);
v_b_u2082_418_ = lean_uint8_land(v_y_412_, v___x_416_);
v_b_u2083_419_ = lean_uint8_land(v_z_413_, v___x_416_);
v___x_420_ = lean_uint8_to_uint32(v_b_u2080_415_);
v___x_421_ = 18;
v___x_422_ = lean_uint32_shift_left(v___x_420_, v___x_421_);
v___x_423_ = lean_uint8_to_uint32(v_b_u2081_417_);
v___x_424_ = 12;
v___x_425_ = lean_uint32_shift_left(v___x_423_, v___x_424_);
v___x_426_ = lean_uint32_lor(v___x_422_, v___x_425_);
v___x_427_ = lean_uint8_to_uint32(v_b_u2082_418_);
v___x_428_ = 6;
v___x_429_ = lean_uint32_shift_left(v___x_427_, v___x_428_);
v___x_430_ = lean_uint32_lor(v___x_426_, v___x_429_);
v___x_431_ = lean_uint8_to_uint32(v_b_u2083_419_);
v___x_432_ = lean_uint32_lor(v___x_430_, v___x_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2084Unchecked___boxed(lean_object* v_w_433_, lean_object* v_x_434_, lean_object* v_y_435_, lean_object* v_z_436_){
_start:
{
uint8_t v_w_boxed_437_; uint8_t v_x_boxed_438_; uint8_t v_y_boxed_439_; uint8_t v_z_boxed_440_; uint32_t v_res_441_; lean_object* v_r_442_; 
v_w_boxed_437_ = lean_unbox(v_w_433_);
v_x_boxed_438_ = lean_unbox(v_x_434_);
v_y_boxed_439_ = lean_unbox(v_y_435_);
v_z_boxed_440_ = lean_unbox(v_z_436_);
v_res_441_ = l_ByteArray_utf8DecodeChar_x3f_assemble_u2084Unchecked(v_w_boxed_437_, v_x_boxed_438_, v_y_boxed_439_, v_z_boxed_440_);
v_r_442_ = lean_box_uint32(v_res_441_);
return v_r_442_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2084(uint8_t v_w_443_, uint8_t v_x_444_, uint8_t v_y_445_, uint8_t v_z_446_){
_start:
{
uint8_t v___x_447_; uint8_t v___x_448_; uint8_t v___x_449_; uint8_t v___x_450_; 
v___x_447_ = 192;
v___x_448_ = lean_uint8_land(v_x_444_, v___x_447_);
v___x_449_ = 128;
v___x_450_ = lean_uint8_dec_eq(v___x_448_, v___x_449_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; 
v___x_451_ = lean_box(0);
return v___x_451_;
}
else
{
uint8_t v___x_452_; uint8_t v___x_453_; 
v___x_452_ = lean_uint8_land(v_y_445_, v___x_447_);
v___x_453_ = lean_uint8_dec_eq(v___x_452_, v___x_449_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; 
v___x_454_ = lean_box(0);
return v___x_454_;
}
else
{
uint8_t v___x_455_; uint8_t v___x_456_; 
v___x_455_ = lean_uint8_land(v_z_446_, v___x_447_);
v___x_456_ = lean_uint8_dec_eq(v___x_455_, v___x_449_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; 
v___x_457_ = lean_box(0);
return v___x_457_;
}
else
{
uint8_t v___x_458_; uint8_t v_b_u2080_459_; uint8_t v___x_460_; uint8_t v_b_u2081_461_; uint8_t v_b_u2082_462_; uint8_t v_b_u2083_463_; uint32_t v___x_464_; uint32_t v___x_465_; uint32_t v___x_466_; uint32_t v___x_467_; uint32_t v___x_468_; uint32_t v___x_469_; uint32_t v___x_470_; uint32_t v___x_471_; uint32_t v___x_472_; uint32_t v___x_473_; uint32_t v___x_474_; uint32_t v___x_475_; uint32_t v_r_476_; uint32_t v___x_477_; uint8_t v___x_478_; 
v___x_458_ = 7;
v_b_u2080_459_ = lean_uint8_land(v_w_443_, v___x_458_);
v___x_460_ = 63;
v_b_u2081_461_ = lean_uint8_land(v_x_444_, v___x_460_);
v_b_u2082_462_ = lean_uint8_land(v_y_445_, v___x_460_);
v_b_u2083_463_ = lean_uint8_land(v_z_446_, v___x_460_);
v___x_464_ = lean_uint8_to_uint32(v_b_u2080_459_);
v___x_465_ = 18;
v___x_466_ = lean_uint32_shift_left(v___x_464_, v___x_465_);
v___x_467_ = lean_uint8_to_uint32(v_b_u2081_461_);
v___x_468_ = 12;
v___x_469_ = lean_uint32_shift_left(v___x_467_, v___x_468_);
v___x_470_ = lean_uint32_lor(v___x_466_, v___x_469_);
v___x_471_ = lean_uint8_to_uint32(v_b_u2082_462_);
v___x_472_ = 6;
v___x_473_ = lean_uint32_shift_left(v___x_471_, v___x_472_);
v___x_474_ = lean_uint32_lor(v___x_470_, v___x_473_);
v___x_475_ = lean_uint8_to_uint32(v_b_u2083_463_);
v_r_476_ = lean_uint32_lor(v___x_474_, v___x_475_);
v___x_477_ = 65536;
v___x_478_ = lean_uint32_dec_lt(v_r_476_, v___x_477_);
if (v___x_478_ == 0)
{
uint32_t v___x_479_; uint8_t v___x_480_; 
v___x_479_ = 1114111;
v___x_480_ = lean_uint32_dec_lt(v___x_479_, v_r_476_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = lean_box_uint32(v_r_476_);
v___x_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
return v___x_482_;
}
else
{
lean_object* v___x_483_; 
v___x_483_ = lean_box(0);
return v___x_483_;
}
}
else
{
lean_object* v___x_484_; 
v___x_484_ = lean_box(0);
return v___x_484_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_assemble_u2084___boxed(lean_object* v_w_485_, lean_object* v_x_486_, lean_object* v_y_487_, lean_object* v_z_488_){
_start:
{
uint8_t v_w_boxed_489_; uint8_t v_x_boxed_490_; uint8_t v_y_boxed_491_; uint8_t v_z_boxed_492_; lean_object* v_res_493_; 
v_w_boxed_489_ = lean_unbox(v_w_485_);
v_x_boxed_490_ = lean_unbox(v_x_486_);
v_y_boxed_491_ = lean_unbox(v_y_487_);
v_z_boxed_492_ = lean_unbox(v_z_488_);
v_res_493_ = l_ByteArray_utf8DecodeChar_x3f_assemble_u2084(v_w_boxed_489_, v_x_boxed_490_, v_y_boxed_491_, v_z_boxed_492_);
return v_res_493_;
}
}
LEAN_EXPORT uint8_t l_ByteArray_utf8DecodeChar_x3f_verify_u2084(uint8_t v_w_494_, uint8_t v_x_495_, uint8_t v_y_496_, uint8_t v_z_497_){
_start:
{
uint8_t v___x_498_; uint8_t v___x_499_; uint8_t v___x_500_; uint8_t v___x_501_; 
v___x_498_ = 192;
v___x_499_ = lean_uint8_land(v_x_495_, v___x_498_);
v___x_500_ = 128;
v___x_501_ = lean_uint8_dec_eq(v___x_499_, v___x_500_);
if (v___x_501_ == 0)
{
return v___x_501_;
}
else
{
uint8_t v___x_502_; uint8_t v___x_503_; uint8_t v___x_504_; 
v___x_502_ = 0;
v___x_503_ = lean_uint8_land(v_y_496_, v___x_498_);
v___x_504_ = lean_uint8_dec_eq(v___x_503_, v___x_500_);
if (v___x_504_ == 0)
{
return v___x_502_;
}
else
{
uint8_t v___x_505_; uint8_t v___x_506_; 
v___x_505_ = lean_uint8_land(v_z_497_, v___x_498_);
v___x_506_ = lean_uint8_dec_eq(v___x_505_, v___x_500_);
if (v___x_506_ == 0)
{
return v___x_502_;
}
else
{
uint8_t v___x_507_; uint8_t v_b_u2080_508_; uint8_t v___x_509_; uint8_t v_b_u2081_510_; uint8_t v_b_u2082_511_; uint8_t v_b_u2083_512_; uint32_t v___x_513_; uint32_t v___x_514_; uint32_t v___x_515_; uint32_t v___x_516_; uint32_t v___x_517_; uint32_t v___x_518_; uint32_t v___x_519_; uint32_t v___x_520_; uint32_t v___x_521_; uint32_t v___x_522_; uint32_t v___x_523_; uint32_t v___x_524_; uint32_t v_r_525_; uint32_t v___x_526_; uint8_t v___x_527_; 
v___x_507_ = 7;
v_b_u2080_508_ = lean_uint8_land(v_w_494_, v___x_507_);
v___x_509_ = 63;
v_b_u2081_510_ = lean_uint8_land(v_x_495_, v___x_509_);
v_b_u2082_511_ = lean_uint8_land(v_y_496_, v___x_509_);
v_b_u2083_512_ = lean_uint8_land(v_z_497_, v___x_509_);
v___x_513_ = lean_uint8_to_uint32(v_b_u2080_508_);
v___x_514_ = 18;
v___x_515_ = lean_uint32_shift_left(v___x_513_, v___x_514_);
v___x_516_ = lean_uint8_to_uint32(v_b_u2081_510_);
v___x_517_ = 12;
v___x_518_ = lean_uint32_shift_left(v___x_516_, v___x_517_);
v___x_519_ = lean_uint32_lor(v___x_515_, v___x_518_);
v___x_520_ = lean_uint8_to_uint32(v_b_u2082_511_);
v___x_521_ = 6;
v___x_522_ = lean_uint32_shift_left(v___x_520_, v___x_521_);
v___x_523_ = lean_uint32_lor(v___x_519_, v___x_522_);
v___x_524_ = lean_uint8_to_uint32(v_b_u2083_512_);
v_r_525_ = lean_uint32_lor(v___x_523_, v___x_524_);
v___x_526_ = 65536;
v___x_527_ = lean_uint32_dec_le(v___x_526_, v_r_525_);
if (v___x_527_ == 0)
{
return v___x_527_;
}
else
{
uint32_t v___x_528_; uint8_t v___x_529_; 
v___x_528_ = 1114111;
v___x_529_ = lean_uint32_dec_le(v_r_525_, v___x_528_);
return v___x_529_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f_verify_u2084___boxed(lean_object* v_w_530_, lean_object* v_x_531_, lean_object* v_y_532_, lean_object* v_z_533_){
_start:
{
uint8_t v_w_boxed_534_; uint8_t v_x_boxed_535_; uint8_t v_y_boxed_536_; uint8_t v_z_boxed_537_; uint8_t v_res_538_; lean_object* v_r_539_; 
v_w_boxed_534_ = lean_unbox(v_w_530_);
v_x_boxed_535_ = lean_unbox(v_x_531_);
v_y_boxed_536_ = lean_unbox(v_y_532_);
v_z_boxed_537_ = lean_unbox(v_z_533_);
v_res_538_ = l_ByteArray_utf8DecodeChar_x3f_verify_u2084(v_w_boxed_534_, v_x_boxed_535_, v_y_boxed_536_, v_z_boxed_537_);
v_r_539_ = lean_box(v_res_538_);
return v_r_539_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f(lean_object* v_bytes_540_, lean_object* v_i_541_){
_start:
{
lean_object* v___x_542_; uint8_t v___x_543_; 
v___x_542_ = lean_byte_array_size(v_bytes_540_);
v___x_543_ = lean_nat_dec_lt(v_i_541_, v___x_542_);
if (v___x_543_ == 0)
{
lean_object* v___x_544_; 
v___x_544_ = lean_box(0);
return v___x_544_;
}
else
{
uint8_t v___x_545_; uint8_t v___x_546_; uint8_t v___x_547_; uint8_t v___x_548_; uint8_t v___x_549_; 
v___x_545_ = lean_byte_array_fget(v_bytes_540_, v_i_541_);
v___x_546_ = 128;
v___x_547_ = lean_uint8_land(v___x_545_, v___x_546_);
v___x_548_ = 0;
v___x_549_ = lean_uint8_dec_eq(v___x_547_, v___x_548_);
if (v___x_549_ == 0)
{
uint8_t v___x_550_; uint8_t v___x_551_; uint8_t v___x_552_; uint8_t v___x_553_; 
v___x_550_ = 224;
v___x_551_ = lean_uint8_land(v___x_545_, v___x_550_);
v___x_552_ = 192;
v___x_553_ = lean_uint8_dec_eq(v___x_551_, v___x_552_);
if (v___x_553_ == 0)
{
uint8_t v___x_554_; uint8_t v___x_555_; uint8_t v___x_556_; 
v___x_554_ = 240;
v___x_555_ = lean_uint8_land(v___x_545_, v___x_554_);
v___x_556_ = lean_uint8_dec_eq(v___x_555_, v___x_550_);
if (v___x_556_ == 0)
{
uint8_t v___x_557_; uint8_t v___x_558_; uint8_t v___x_559_; 
v___x_557_ = 248;
v___x_558_ = lean_uint8_land(v___x_545_, v___x_557_);
v___x_559_ = lean_uint8_dec_eq(v___x_558_, v___x_554_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; 
v___x_560_ = lean_box(0);
return v___x_560_;
}
else
{
lean_object* v___x_561_; lean_object* v___x_562_; uint8_t v___x_563_; 
v___x_561_ = lean_unsigned_to_nat(3u);
v___x_562_ = lean_nat_add(v_i_541_, v___x_561_);
v___x_563_ = lean_nat_dec_lt(v___x_562_, v___x_542_);
if (v___x_563_ == 0)
{
lean_object* v___x_564_; 
lean_dec(v___x_562_);
v___x_564_ = lean_box(0);
return v___x_564_;
}
else
{
lean_object* v___x_565_; lean_object* v___x_566_; uint8_t v___x_567_; uint8_t v___x_568_; uint8_t v___x_569_; 
v___x_565_ = lean_unsigned_to_nat(1u);
v___x_566_ = lean_nat_add(v_i_541_, v___x_565_);
v___x_567_ = lean_byte_array_fget(v_bytes_540_, v___x_566_);
lean_dec(v___x_566_);
v___x_568_ = lean_uint8_land(v___x_567_, v___x_552_);
v___x_569_ = lean_uint8_dec_eq(v___x_568_, v___x_546_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; 
lean_dec(v___x_562_);
v___x_570_ = lean_box(0);
return v___x_570_;
}
else
{
lean_object* v___x_571_; lean_object* v___x_572_; uint8_t v___x_573_; uint8_t v___x_574_; uint8_t v___x_575_; 
v___x_571_ = lean_unsigned_to_nat(2u);
v___x_572_ = lean_nat_add(v_i_541_, v___x_571_);
v___x_573_ = lean_byte_array_fget(v_bytes_540_, v___x_572_);
lean_dec(v___x_572_);
v___x_574_ = lean_uint8_land(v___x_573_, v___x_552_);
v___x_575_ = lean_uint8_dec_eq(v___x_574_, v___x_546_);
if (v___x_575_ == 0)
{
lean_object* v___x_576_; 
lean_dec(v___x_562_);
v___x_576_ = lean_box(0);
return v___x_576_;
}
else
{
uint8_t v___x_577_; uint8_t v___x_578_; uint8_t v___x_579_; 
v___x_577_ = lean_byte_array_fget(v_bytes_540_, v___x_562_);
lean_dec(v___x_562_);
v___x_578_ = lean_uint8_land(v___x_577_, v___x_552_);
v___x_579_ = lean_uint8_dec_eq(v___x_578_, v___x_546_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; 
v___x_580_ = lean_box(0);
return v___x_580_;
}
else
{
uint8_t v___x_581_; uint8_t v_b_u2080_582_; uint8_t v___x_583_; uint8_t v_b_u2081_584_; uint8_t v_b_u2082_585_; uint8_t v_b_u2083_586_; uint32_t v___x_587_; uint32_t v___x_588_; uint32_t v___x_589_; uint32_t v___x_590_; uint32_t v___x_591_; uint32_t v___x_592_; uint32_t v___x_593_; uint32_t v___x_594_; uint32_t v___x_595_; uint32_t v___x_596_; uint32_t v___x_597_; uint32_t v___x_598_; uint32_t v_r_599_; uint32_t v___x_600_; uint8_t v___x_601_; 
v___x_581_ = 7;
v_b_u2080_582_ = lean_uint8_land(v___x_545_, v___x_581_);
v___x_583_ = 63;
v_b_u2081_584_ = lean_uint8_land(v___x_567_, v___x_583_);
v_b_u2082_585_ = lean_uint8_land(v___x_573_, v___x_583_);
v_b_u2083_586_ = lean_uint8_land(v___x_577_, v___x_583_);
v___x_587_ = lean_uint8_to_uint32(v_b_u2080_582_);
v___x_588_ = 18;
v___x_589_ = lean_uint32_shift_left(v___x_587_, v___x_588_);
v___x_590_ = lean_uint8_to_uint32(v_b_u2081_584_);
v___x_591_ = 12;
v___x_592_ = lean_uint32_shift_left(v___x_590_, v___x_591_);
v___x_593_ = lean_uint32_lor(v___x_589_, v___x_592_);
v___x_594_ = lean_uint8_to_uint32(v_b_u2082_585_);
v___x_595_ = 6;
v___x_596_ = lean_uint32_shift_left(v___x_594_, v___x_595_);
v___x_597_ = lean_uint32_lor(v___x_593_, v___x_596_);
v___x_598_ = lean_uint8_to_uint32(v_b_u2083_586_);
v_r_599_ = lean_uint32_lor(v___x_597_, v___x_598_);
v___x_600_ = 65536;
v___x_601_ = lean_uint32_dec_lt(v_r_599_, v___x_600_);
if (v___x_601_ == 0)
{
uint32_t v___x_602_; uint8_t v___x_603_; 
v___x_602_ = 1114111;
v___x_603_ = lean_uint32_dec_lt(v___x_602_, v_r_599_);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = lean_box_uint32(v_r_599_);
v___x_605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
return v___x_605_;
}
else
{
lean_object* v___x_606_; 
v___x_606_ = lean_box(0);
return v___x_606_;
}
}
else
{
lean_object* v___x_607_; 
v___x_607_ = lean_box(0);
return v___x_607_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_608_; lean_object* v___x_609_; uint8_t v___x_610_; 
v___x_608_ = lean_unsigned_to_nat(2u);
v___x_609_ = lean_nat_add(v_i_541_, v___x_608_);
v___x_610_ = lean_nat_dec_lt(v___x_609_, v___x_542_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; 
lean_dec(v___x_609_);
v___x_611_ = lean_box(0);
return v___x_611_;
}
else
{
lean_object* v___x_612_; lean_object* v___x_613_; uint8_t v___x_614_; uint8_t v___x_615_; uint8_t v___x_616_; 
v___x_612_ = lean_unsigned_to_nat(1u);
v___x_613_ = lean_nat_add(v_i_541_, v___x_612_);
v___x_614_ = lean_byte_array_fget(v_bytes_540_, v___x_613_);
lean_dec(v___x_613_);
v___x_615_ = lean_uint8_land(v___x_614_, v___x_552_);
v___x_616_ = lean_uint8_dec_eq(v___x_615_, v___x_546_);
if (v___x_616_ == 0)
{
lean_object* v___x_617_; 
lean_dec(v___x_609_);
v___x_617_ = lean_box(0);
return v___x_617_;
}
else
{
uint8_t v___x_618_; uint8_t v___x_619_; uint8_t v___x_620_; 
v___x_618_ = lean_byte_array_fget(v_bytes_540_, v___x_609_);
lean_dec(v___x_609_);
v___x_619_ = lean_uint8_land(v___x_618_, v___x_552_);
v___x_620_ = lean_uint8_dec_eq(v___x_619_, v___x_546_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; 
v___x_621_ = lean_box(0);
return v___x_621_;
}
else
{
uint8_t v___x_622_; uint8_t v_b_u2080_623_; uint8_t v___x_624_; uint8_t v_b_u2081_625_; uint8_t v_b_u2082_626_; uint32_t v___x_627_; uint32_t v___x_628_; uint32_t v___x_629_; uint32_t v___x_630_; uint32_t v___x_631_; uint32_t v___x_632_; uint32_t v___x_633_; uint32_t v___x_634_; uint32_t v_r_635_; uint32_t v___x_636_; uint8_t v___x_637_; 
v___x_622_ = 15;
v_b_u2080_623_ = lean_uint8_land(v___x_545_, v___x_622_);
v___x_624_ = 63;
v_b_u2081_625_ = lean_uint8_land(v___x_614_, v___x_624_);
v_b_u2082_626_ = lean_uint8_land(v___x_618_, v___x_624_);
v___x_627_ = lean_uint8_to_uint32(v_b_u2080_623_);
v___x_628_ = 12;
v___x_629_ = lean_uint32_shift_left(v___x_627_, v___x_628_);
v___x_630_ = lean_uint8_to_uint32(v_b_u2081_625_);
v___x_631_ = 6;
v___x_632_ = lean_uint32_shift_left(v___x_630_, v___x_631_);
v___x_633_ = lean_uint32_lor(v___x_629_, v___x_632_);
v___x_634_ = lean_uint8_to_uint32(v_b_u2082_626_);
v_r_635_ = lean_uint32_lor(v___x_633_, v___x_634_);
v___x_636_ = 2048;
v___x_637_ = lean_uint32_dec_lt(v_r_635_, v___x_636_);
if (v___x_637_ == 0)
{
uint32_t v___x_638_; uint8_t v___x_639_; 
v___x_638_ = 55296;
v___x_639_ = lean_uint32_dec_le(v___x_638_, v_r_635_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = lean_box_uint32(v_r_635_);
v___x_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
return v___x_641_;
}
else
{
uint32_t v___x_642_; uint8_t v___x_643_; 
v___x_642_ = 57343;
v___x_643_ = lean_uint32_dec_le(v_r_635_, v___x_642_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = lean_box_uint32(v_r_635_);
v___x_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
return v___x_645_;
}
else
{
lean_object* v___x_646_; 
v___x_646_ = lean_box(0);
return v___x_646_;
}
}
}
else
{
lean_object* v___x_647_; 
v___x_647_ = lean_box(0);
return v___x_647_;
}
}
}
}
}
}
else
{
lean_object* v___x_648_; lean_object* v___x_649_; uint8_t v___x_650_; 
v___x_648_ = lean_unsigned_to_nat(1u);
v___x_649_ = lean_nat_add(v_i_541_, v___x_648_);
v___x_650_ = lean_nat_dec_lt(v___x_649_, v___x_542_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; 
lean_dec(v___x_649_);
v___x_651_ = lean_box(0);
return v___x_651_;
}
else
{
uint8_t v___x_652_; uint8_t v___x_653_; uint8_t v___x_654_; 
v___x_652_ = lean_byte_array_fget(v_bytes_540_, v___x_649_);
lean_dec(v___x_649_);
v___x_653_ = lean_uint8_land(v___x_652_, v___x_552_);
v___x_654_ = lean_uint8_dec_eq(v___x_653_, v___x_546_);
if (v___x_654_ == 0)
{
lean_object* v___x_655_; 
v___x_655_ = lean_box(0);
return v___x_655_;
}
else
{
uint8_t v___x_656_; uint8_t v_b_u2080_657_; uint8_t v___x_658_; uint8_t v_b_u2081_659_; uint32_t v___x_660_; uint32_t v___x_661_; uint32_t v___x_662_; uint32_t v___x_663_; uint32_t v_r_664_; uint32_t v___x_665_; uint8_t v___x_666_; 
v___x_656_ = 31;
v_b_u2080_657_ = lean_uint8_land(v___x_545_, v___x_656_);
v___x_658_ = 63;
v_b_u2081_659_ = lean_uint8_land(v___x_652_, v___x_658_);
v___x_660_ = lean_uint8_to_uint32(v_b_u2080_657_);
v___x_661_ = 6;
v___x_662_ = lean_uint32_shift_left(v___x_660_, v___x_661_);
v___x_663_ = lean_uint8_to_uint32(v_b_u2081_659_);
v_r_664_ = lean_uint32_lor(v___x_662_, v___x_663_);
v___x_665_ = 128;
v___x_666_ = lean_uint32_dec_lt(v_r_664_, v___x_665_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_667_ = lean_box_uint32(v_r_664_);
v___x_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
return v___x_668_;
}
else
{
lean_object* v___x_669_; 
v___x_669_ = lean_box(0);
return v___x_669_;
}
}
}
}
}
else
{
uint32_t v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_670_ = lean_uint8_to_uint32(v___x_545_);
v___x_671_ = lean_box_uint32(v___x_670_);
v___x_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
return v___x_672_;
}
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar_x3f___boxed(lean_object* v_bytes_673_, lean_object* v_i_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l_ByteArray_utf8DecodeChar_x3f(v_bytes_673_, v_i_674_);
lean_dec(v_i_674_);
lean_dec_ref(v_bytes_673_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_String_Internal_utf8DecodeList(lean_object* v_x_676_){
_start:
{
if (lean_obj_tag(v_x_676_) == 0)
{
lean_object* v___x_677_; 
v___x_677_ = lean_box(0);
return v___x_677_;
}
else
{
lean_object* v_head_678_; lean_object* v_tail_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_847_; 
v_head_678_ = lean_ctor_get(v_x_676_, 0);
v_tail_679_ = lean_ctor_get(v_x_676_, 1);
v_isSharedCheck_847_ = !lean_is_exclusive(v_x_676_);
if (v_isSharedCheck_847_ == 0)
{
v___x_681_ = v_x_676_;
v_isShared_682_ = v_isSharedCheck_847_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_tail_679_);
lean_inc(v_head_678_);
lean_dec(v_x_676_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_847_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
uint8_t v___x_683_; uint8_t v___x_684_; uint8_t v___x_685_; uint8_t v___x_686_; uint8_t v___x_687_; 
v___x_683_ = 128;
v___x_684_ = lean_unbox(v_head_678_);
v___x_685_ = lean_uint8_land(v___x_684_, v___x_683_);
v___x_686_ = 0;
v___x_687_ = lean_uint8_dec_eq(v___x_685_, v___x_686_);
if (v___x_687_ == 0)
{
uint8_t v___x_688_; uint8_t v___x_689_; uint8_t v___x_690_; uint8_t v___x_691_; uint8_t v___x_692_; 
lean_del_object(v___x_681_);
v___x_688_ = 224;
v___x_689_ = lean_unbox(v_head_678_);
v___x_690_ = lean_uint8_land(v___x_689_, v___x_688_);
v___x_691_ = 192;
v___x_692_ = lean_uint8_dec_eq(v___x_690_, v___x_691_);
if (v___x_692_ == 0)
{
uint8_t v___x_693_; uint8_t v___x_694_; uint8_t v___x_695_; uint8_t v___x_696_; 
v___x_693_ = 240;
v___x_694_ = lean_unbox(v_head_678_);
v___x_695_ = lean_uint8_land(v___x_694_, v___x_693_);
v___x_696_ = lean_uint8_dec_eq(v___x_695_, v___x_688_);
if (v___x_696_ == 0)
{
uint8_t v___x_697_; uint8_t v___x_698_; uint8_t v___x_699_; uint8_t v___x_700_; 
v___x_697_ = 248;
v___x_698_ = lean_unbox(v_head_678_);
v___x_699_ = lean_uint8_land(v___x_698_, v___x_697_);
v___x_700_ = lean_uint8_dec_eq(v___x_699_, v___x_693_);
if (v___x_700_ == 0)
{
lean_object* v___x_701_; 
lean_dec(v_tail_679_);
lean_dec(v_head_678_);
v___x_701_ = lean_box(0);
return v___x_701_;
}
else
{
if (lean_obj_tag(v_tail_679_) == 1)
{
lean_object* v_tail_702_; 
v_tail_702_ = lean_ctor_get(v_tail_679_, 1);
lean_inc(v_tail_702_);
if (lean_obj_tag(v_tail_702_) == 1)
{
lean_object* v_tail_703_; 
v_tail_703_ = lean_ctor_get(v_tail_702_, 1);
lean_inc(v_tail_703_);
if (lean_obj_tag(v_tail_703_) == 1)
{
lean_object* v_head_704_; lean_object* v_head_705_; lean_object* v_head_706_; lean_object* v_tail_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_757_; 
v_head_704_ = lean_ctor_get(v_tail_679_, 0);
lean_inc(v_head_704_);
lean_dec_ref_known(v_tail_679_, 2);
v_head_705_ = lean_ctor_get(v_tail_702_, 0);
lean_inc(v_head_705_);
lean_dec_ref_known(v_tail_702_, 2);
v_head_706_ = lean_ctor_get(v_tail_703_, 0);
v_tail_707_ = lean_ctor_get(v_tail_703_, 1);
v_isSharedCheck_757_ = !lean_is_exclusive(v_tail_703_);
if (v_isSharedCheck_757_ == 0)
{
v___x_709_ = v_tail_703_;
v_isShared_710_ = v_isSharedCheck_757_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_tail_707_);
lean_inc(v_head_706_);
lean_dec(v_tail_703_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_757_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
uint8_t v___x_711_; uint8_t v___x_712_; uint8_t v___x_713_; 
v___x_711_ = lean_unbox(v_head_704_);
v___x_712_ = lean_uint8_land(v___x_711_, v___x_691_);
v___x_713_ = lean_uint8_dec_eq(v___x_712_, v___x_683_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; 
lean_del_object(v___x_709_);
lean_dec(v_tail_707_);
lean_dec(v_head_706_);
lean_dec(v_head_705_);
lean_dec(v_head_704_);
lean_dec(v_head_678_);
v___x_714_ = lean_box(0);
return v___x_714_;
}
else
{
uint8_t v___x_715_; uint8_t v___x_716_; uint8_t v___x_717_; 
v___x_715_ = lean_unbox(v_head_705_);
v___x_716_ = lean_uint8_land(v___x_715_, v___x_691_);
v___x_717_ = lean_uint8_dec_eq(v___x_716_, v___x_683_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; 
lean_del_object(v___x_709_);
lean_dec(v_tail_707_);
lean_dec(v_head_706_);
lean_dec(v_head_705_);
lean_dec(v_head_704_);
lean_dec(v_head_678_);
v___x_718_ = lean_box(0);
return v___x_718_;
}
else
{
uint8_t v___x_719_; uint8_t v___x_720_; uint8_t v___x_721_; 
v___x_719_ = lean_unbox(v_head_706_);
v___x_720_ = lean_uint8_land(v___x_719_, v___x_691_);
v___x_721_ = lean_uint8_dec_eq(v___x_720_, v___x_683_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; 
lean_del_object(v___x_709_);
lean_dec(v_tail_707_);
lean_dec(v_head_706_);
lean_dec(v_head_705_);
lean_dec(v_head_704_);
lean_dec(v_head_678_);
v___x_722_ = lean_box(0);
return v___x_722_;
}
else
{
uint8_t v___x_723_; uint8_t v___x_724_; uint8_t v_b_u2080_725_; uint8_t v___x_726_; uint8_t v___x_727_; uint8_t v_b_u2081_728_; uint8_t v___x_729_; uint8_t v_b_u2082_730_; uint8_t v___x_731_; uint8_t v_b_u2083_732_; uint32_t v___x_733_; uint32_t v___x_734_; uint32_t v___x_735_; uint32_t v___x_736_; uint32_t v___x_737_; uint32_t v___x_738_; uint32_t v___x_739_; uint32_t v___x_740_; uint32_t v___x_741_; uint32_t v___x_742_; uint32_t v___x_743_; uint32_t v___x_744_; uint32_t v_r_745_; uint32_t v___x_746_; uint8_t v___x_747_; 
v___x_723_ = 7;
v___x_724_ = lean_unbox(v_head_678_);
lean_dec(v_head_678_);
v_b_u2080_725_ = lean_uint8_land(v___x_724_, v___x_723_);
v___x_726_ = 63;
v___x_727_ = lean_unbox(v_head_704_);
lean_dec(v_head_704_);
v_b_u2081_728_ = lean_uint8_land(v___x_727_, v___x_726_);
v___x_729_ = lean_unbox(v_head_705_);
lean_dec(v_head_705_);
v_b_u2082_730_ = lean_uint8_land(v___x_729_, v___x_726_);
v___x_731_ = lean_unbox(v_head_706_);
lean_dec(v_head_706_);
v_b_u2083_732_ = lean_uint8_land(v___x_731_, v___x_726_);
v___x_733_ = lean_uint8_to_uint32(v_b_u2080_725_);
v___x_734_ = 18;
v___x_735_ = lean_uint32_shift_left(v___x_733_, v___x_734_);
v___x_736_ = lean_uint8_to_uint32(v_b_u2081_728_);
v___x_737_ = 12;
v___x_738_ = lean_uint32_shift_left(v___x_736_, v___x_737_);
v___x_739_ = lean_uint32_lor(v___x_735_, v___x_738_);
v___x_740_ = lean_uint8_to_uint32(v_b_u2082_730_);
v___x_741_ = 6;
v___x_742_ = lean_uint32_shift_left(v___x_740_, v___x_741_);
v___x_743_ = lean_uint32_lor(v___x_739_, v___x_742_);
v___x_744_ = lean_uint8_to_uint32(v_b_u2083_732_);
v_r_745_ = lean_uint32_lor(v___x_743_, v___x_744_);
v___x_746_ = 65536;
v___x_747_ = lean_uint32_dec_lt(v_r_745_, v___x_746_);
if (v___x_747_ == 0)
{
uint32_t v___x_748_; uint8_t v___x_749_; 
v___x_748_ = 1114111;
v___x_749_ = lean_uint32_dec_lt(v___x_748_, v_r_745_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_753_; 
v___x_750_ = l_String_Internal_utf8DecodeList(v_tail_707_);
v___x_751_ = lean_box_uint32(v_r_745_);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 1, v___x_750_);
lean_ctor_set(v___x_709_, 0, v___x_751_);
v___x_753_ = v___x_709_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_751_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v___x_750_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
else
{
lean_object* v___x_755_; 
lean_del_object(v___x_709_);
lean_dec(v_tail_707_);
v___x_755_ = lean_box(0);
return v___x_755_;
}
}
else
{
lean_object* v___x_756_; 
lean_del_object(v___x_709_);
lean_dec(v_tail_707_);
v___x_756_ = lean_box(0);
return v___x_756_;
}
}
}
}
}
}
else
{
lean_object* v___x_758_; 
lean_dec_ref_known(v_tail_702_, 2);
lean_dec(v_tail_703_);
lean_dec_ref_known(v_tail_679_, 2);
lean_dec(v_head_678_);
v___x_758_ = lean_box(0);
return v___x_758_;
}
}
else
{
lean_object* v___x_759_; 
lean_dec(v_tail_702_);
lean_dec_ref_known(v_tail_679_, 2);
lean_dec(v_head_678_);
v___x_759_ = lean_box(0);
return v___x_759_;
}
}
else
{
lean_object* v___x_760_; 
lean_dec(v_tail_679_);
lean_dec(v_head_678_);
v___x_760_ = lean_box(0);
return v___x_760_;
}
}
}
else
{
if (lean_obj_tag(v_tail_679_) == 1)
{
lean_object* v_tail_761_; 
v_tail_761_ = lean_ctor_get(v_tail_679_, 1);
lean_inc(v_tail_761_);
if (lean_obj_tag(v_tail_761_) == 1)
{
lean_object* v_head_762_; lean_object* v_head_763_; lean_object* v_tail_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_807_; 
v_head_762_ = lean_ctor_get(v_tail_679_, 0);
lean_inc(v_head_762_);
lean_dec_ref_known(v_tail_679_, 2);
v_head_763_ = lean_ctor_get(v_tail_761_, 0);
v_tail_764_ = lean_ctor_get(v_tail_761_, 1);
v_isSharedCheck_807_ = !lean_is_exclusive(v_tail_761_);
if (v_isSharedCheck_807_ == 0)
{
v___x_766_ = v_tail_761_;
v_isShared_767_ = v_isSharedCheck_807_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_tail_764_);
lean_inc(v_head_763_);
lean_dec(v_tail_761_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_807_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
uint8_t v___x_768_; uint8_t v___x_769_; uint8_t v___x_770_; 
v___x_768_ = lean_unbox(v_head_762_);
v___x_769_ = lean_uint8_land(v___x_768_, v___x_691_);
v___x_770_ = lean_uint8_dec_eq(v___x_769_, v___x_683_);
if (v___x_770_ == 0)
{
lean_object* v___x_771_; 
lean_del_object(v___x_766_);
lean_dec(v_tail_764_);
lean_dec(v_head_763_);
lean_dec(v_head_762_);
lean_dec(v_head_678_);
v___x_771_ = lean_box(0);
return v___x_771_;
}
else
{
uint8_t v___x_772_; uint8_t v___x_773_; uint8_t v___x_774_; 
v___x_772_ = lean_unbox(v_head_763_);
v___x_773_ = lean_uint8_land(v___x_772_, v___x_691_);
v___x_774_ = lean_uint8_dec_eq(v___x_773_, v___x_683_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; 
lean_del_object(v___x_766_);
lean_dec(v_tail_764_);
lean_dec(v_head_763_);
lean_dec(v_head_762_);
lean_dec(v_head_678_);
v___x_775_ = lean_box(0);
return v___x_775_;
}
else
{
uint8_t v___x_776_; uint8_t v___x_777_; uint8_t v_b_u2080_778_; uint8_t v___x_779_; uint8_t v___x_780_; uint8_t v_b_u2081_781_; uint8_t v___x_782_; uint8_t v_b_u2082_783_; uint32_t v___x_784_; uint32_t v___x_785_; uint32_t v___x_786_; uint32_t v___x_787_; uint32_t v___x_788_; uint32_t v___x_789_; uint32_t v___x_790_; uint32_t v___x_791_; uint32_t v_r_792_; uint32_t v___x_799_; uint8_t v___x_800_; 
v___x_776_ = 15;
v___x_777_ = lean_unbox(v_head_678_);
lean_dec(v_head_678_);
v_b_u2080_778_ = lean_uint8_land(v___x_777_, v___x_776_);
v___x_779_ = 63;
v___x_780_ = lean_unbox(v_head_762_);
lean_dec(v_head_762_);
v_b_u2081_781_ = lean_uint8_land(v___x_780_, v___x_779_);
v___x_782_ = lean_unbox(v_head_763_);
lean_dec(v_head_763_);
v_b_u2082_783_ = lean_uint8_land(v___x_782_, v___x_779_);
v___x_784_ = lean_uint8_to_uint32(v_b_u2080_778_);
v___x_785_ = 12;
v___x_786_ = lean_uint32_shift_left(v___x_784_, v___x_785_);
v___x_787_ = lean_uint8_to_uint32(v_b_u2081_781_);
v___x_788_ = 6;
v___x_789_ = lean_uint32_shift_left(v___x_787_, v___x_788_);
v___x_790_ = lean_uint32_lor(v___x_786_, v___x_789_);
v___x_791_ = lean_uint8_to_uint32(v_b_u2082_783_);
v_r_792_ = lean_uint32_lor(v___x_790_, v___x_791_);
v___x_799_ = 2048;
v___x_800_ = lean_uint32_dec_lt(v_r_792_, v___x_799_);
if (v___x_800_ == 0)
{
uint32_t v___x_801_; uint8_t v___x_802_; 
v___x_801_ = 55296;
v___x_802_ = lean_uint32_dec_le(v___x_801_, v_r_792_);
if (v___x_802_ == 0)
{
goto v___jp_793_;
}
else
{
uint32_t v___x_803_; uint8_t v___x_804_; 
v___x_803_ = 57343;
v___x_804_ = lean_uint32_dec_le(v_r_792_, v___x_803_);
if (v___x_804_ == 0)
{
goto v___jp_793_;
}
else
{
lean_object* v___x_805_; 
lean_del_object(v___x_766_);
lean_dec(v_tail_764_);
v___x_805_ = lean_box(0);
return v___x_805_;
}
}
}
else
{
lean_object* v___x_806_; 
lean_del_object(v___x_766_);
lean_dec(v_tail_764_);
v___x_806_ = lean_box(0);
return v___x_806_;
}
v___jp_793_:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_797_; 
v___x_794_ = l_String_Internal_utf8DecodeList(v_tail_764_);
v___x_795_ = lean_box_uint32(v_r_792_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 1, v___x_794_);
lean_ctor_set(v___x_766_, 0, v___x_795_);
v___x_797_ = v___x_766_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v___x_795_);
lean_ctor_set(v_reuseFailAlloc_798_, 1, v___x_794_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
return v___x_797_;
}
}
}
}
}
}
else
{
lean_object* v___x_808_; 
lean_dec_ref_known(v_tail_679_, 2);
lean_dec(v_tail_761_);
lean_dec(v_head_678_);
v___x_808_ = lean_box(0);
return v___x_808_;
}
}
else
{
lean_object* v___x_809_; 
lean_dec(v_tail_679_);
lean_dec(v_head_678_);
v___x_809_ = lean_box(0);
return v___x_809_;
}
}
}
else
{
if (lean_obj_tag(v_tail_679_) == 1)
{
lean_object* v_head_810_; lean_object* v_tail_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_838_; 
v_head_810_ = lean_ctor_get(v_tail_679_, 0);
v_tail_811_ = lean_ctor_get(v_tail_679_, 1);
v_isSharedCheck_838_ = !lean_is_exclusive(v_tail_679_);
if (v_isSharedCheck_838_ == 0)
{
v___x_813_ = v_tail_679_;
v_isShared_814_ = v_isSharedCheck_838_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_tail_811_);
lean_inc(v_head_810_);
lean_dec(v_tail_679_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_838_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
uint8_t v___x_815_; uint8_t v___x_816_; uint8_t v___x_817_; 
v___x_815_ = lean_unbox(v_head_810_);
v___x_816_ = lean_uint8_land(v___x_815_, v___x_691_);
v___x_817_ = lean_uint8_dec_eq(v___x_816_, v___x_683_);
if (v___x_817_ == 0)
{
lean_object* v___x_818_; 
lean_del_object(v___x_813_);
lean_dec(v_tail_811_);
lean_dec(v_head_810_);
lean_dec(v_head_678_);
v___x_818_ = lean_box(0);
return v___x_818_;
}
else
{
uint8_t v___x_819_; uint8_t v___x_820_; uint8_t v_b_u2080_821_; uint8_t v___x_822_; uint8_t v___x_823_; uint8_t v_b_u2081_824_; uint32_t v___x_825_; uint32_t v___x_826_; uint32_t v___x_827_; uint32_t v___x_828_; uint32_t v_r_829_; uint32_t v___x_830_; uint8_t v___x_831_; 
v___x_819_ = 31;
v___x_820_ = lean_unbox(v_head_678_);
lean_dec(v_head_678_);
v_b_u2080_821_ = lean_uint8_land(v___x_820_, v___x_819_);
v___x_822_ = 63;
v___x_823_ = lean_unbox(v_head_810_);
lean_dec(v_head_810_);
v_b_u2081_824_ = lean_uint8_land(v___x_823_, v___x_822_);
v___x_825_ = lean_uint8_to_uint32(v_b_u2080_821_);
v___x_826_ = 6;
v___x_827_ = lean_uint32_shift_left(v___x_825_, v___x_826_);
v___x_828_ = lean_uint8_to_uint32(v_b_u2081_824_);
v_r_829_ = lean_uint32_lor(v___x_827_, v___x_828_);
v___x_830_ = 128;
v___x_831_ = lean_uint32_dec_lt(v_r_829_, v___x_830_);
if (v___x_831_ == 0)
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_835_; 
v___x_832_ = l_String_Internal_utf8DecodeList(v_tail_811_);
v___x_833_ = lean_box_uint32(v_r_829_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 1, v___x_832_);
lean_ctor_set(v___x_813_, 0, v___x_833_);
v___x_835_ = v___x_813_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v___x_833_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v___x_832_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
else
{
lean_object* v___x_837_; 
lean_del_object(v___x_813_);
lean_dec(v_tail_811_);
v___x_837_ = lean_box(0);
return v___x_837_;
}
}
}
}
else
{
lean_object* v___x_839_; 
lean_dec(v_tail_679_);
lean_dec(v_head_678_);
v___x_839_ = lean_box(0);
return v___x_839_;
}
}
}
else
{
uint8_t v___x_840_; uint32_t v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_845_; 
v___x_840_ = lean_unbox(v_head_678_);
lean_dec(v_head_678_);
v___x_841_ = lean_uint8_to_uint32(v___x_840_);
v___x_842_ = l_String_Internal_utf8DecodeList(v_tail_679_);
v___x_843_ = lean_box_uint32(v___x_841_);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 1, v___x_842_);
lean_ctor_set(v___x_681_, 0, v___x_843_);
v___x_845_ = v___x_681_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_843_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v___x_842_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_ByteArray_validateUTF8At(lean_object* v_bytes_848_, lean_object* v_i_849_){
_start:
{
lean_object* v___x_850_; uint8_t v___x_851_; 
v___x_850_ = lean_byte_array_size(v_bytes_848_);
v___x_851_ = lean_nat_dec_lt(v_i_849_, v___x_850_);
if (v___x_851_ == 0)
{
return v___x_851_;
}
else
{
uint8_t v___x_852_; uint8_t v___x_853_; uint8_t v___x_854_; uint8_t v___x_855_; uint8_t v___x_856_; 
v___x_852_ = lean_byte_array_fget(v_bytes_848_, v_i_849_);
v___x_853_ = 128;
v___x_854_ = lean_uint8_land(v___x_852_, v___x_853_);
v___x_855_ = 0;
v___x_856_ = lean_uint8_dec_eq(v___x_854_, v___x_855_);
if (v___x_856_ == 0)
{
uint8_t v___x_857_; uint8_t v___x_858_; uint8_t v___x_859_; uint8_t v___x_860_; 
v___x_857_ = 224;
v___x_858_ = lean_uint8_land(v___x_852_, v___x_857_);
v___x_859_ = 192;
v___x_860_ = lean_uint8_dec_eq(v___x_858_, v___x_859_);
if (v___x_860_ == 0)
{
uint8_t v___x_861_; uint8_t v___x_862_; uint8_t v___x_863_; 
v___x_861_ = 240;
v___x_862_ = lean_uint8_land(v___x_852_, v___x_861_);
v___x_863_ = lean_uint8_dec_eq(v___x_862_, v___x_857_);
if (v___x_863_ == 0)
{
uint8_t v___x_864_; uint8_t v___x_865_; uint8_t v___x_866_; 
v___x_864_ = 248;
v___x_865_ = lean_uint8_land(v___x_852_, v___x_864_);
v___x_866_ = lean_uint8_dec_eq(v___x_865_, v___x_861_);
if (v___x_866_ == 0)
{
return v___x_866_;
}
else
{
lean_object* v___x_867_; lean_object* v___x_868_; uint8_t v___x_869_; 
v___x_867_ = lean_unsigned_to_nat(3u);
v___x_868_ = lean_nat_add(v_i_849_, v___x_867_);
v___x_869_ = lean_nat_dec_lt(v___x_868_, v___x_850_);
if (v___x_869_ == 0)
{
lean_dec(v___x_868_);
return v___x_869_;
}
else
{
lean_object* v___x_870_; lean_object* v___x_871_; uint8_t v___x_872_; uint8_t v___x_873_; uint8_t v___x_874_; 
v___x_870_ = lean_unsigned_to_nat(1u);
v___x_871_ = lean_nat_add(v_i_849_, v___x_870_);
v___x_872_ = lean_byte_array_fget(v_bytes_848_, v___x_871_);
lean_dec(v___x_871_);
v___x_873_ = lean_uint8_land(v___x_872_, v___x_859_);
v___x_874_ = lean_uint8_dec_eq(v___x_873_, v___x_853_);
if (v___x_874_ == 0)
{
lean_dec(v___x_868_);
return v___x_874_;
}
else
{
lean_object* v___x_875_; lean_object* v___x_876_; uint8_t v___x_877_; uint8_t v___x_878_; uint8_t v___x_879_; 
v___x_875_ = lean_unsigned_to_nat(2u);
v___x_876_ = lean_nat_add(v_i_849_, v___x_875_);
v___x_877_ = lean_byte_array_fget(v_bytes_848_, v___x_876_);
lean_dec(v___x_876_);
v___x_878_ = lean_uint8_land(v___x_877_, v___x_859_);
v___x_879_ = lean_uint8_dec_eq(v___x_878_, v___x_853_);
if (v___x_879_ == 0)
{
lean_dec(v___x_868_);
return v___x_863_;
}
else
{
uint8_t v___x_880_; uint8_t v___x_881_; uint8_t v___x_882_; 
v___x_880_ = lean_byte_array_fget(v_bytes_848_, v___x_868_);
lean_dec(v___x_868_);
v___x_881_ = lean_uint8_land(v___x_880_, v___x_859_);
v___x_882_ = lean_uint8_dec_eq(v___x_881_, v___x_853_);
if (v___x_882_ == 0)
{
return v___x_863_;
}
else
{
uint8_t v___x_883_; uint8_t v_b_u2080_884_; uint8_t v___x_885_; uint8_t v_b_u2081_886_; uint8_t v_b_u2082_887_; uint8_t v_b_u2083_888_; uint32_t v___x_889_; uint32_t v___x_890_; uint32_t v___x_891_; uint32_t v___x_892_; uint32_t v___x_893_; uint32_t v___x_894_; uint32_t v___x_895_; uint32_t v___x_896_; uint32_t v___x_897_; uint32_t v___x_898_; uint32_t v___x_899_; uint32_t v___x_900_; uint32_t v_r_901_; uint32_t v___x_902_; uint8_t v___x_903_; 
v___x_883_ = 7;
v_b_u2080_884_ = lean_uint8_land(v___x_852_, v___x_883_);
v___x_885_ = 63;
v_b_u2081_886_ = lean_uint8_land(v___x_872_, v___x_885_);
v_b_u2082_887_ = lean_uint8_land(v___x_877_, v___x_885_);
v_b_u2083_888_ = lean_uint8_land(v___x_880_, v___x_885_);
v___x_889_ = lean_uint8_to_uint32(v_b_u2080_884_);
v___x_890_ = 18;
v___x_891_ = lean_uint32_shift_left(v___x_889_, v___x_890_);
v___x_892_ = lean_uint8_to_uint32(v_b_u2081_886_);
v___x_893_ = 12;
v___x_894_ = lean_uint32_shift_left(v___x_892_, v___x_893_);
v___x_895_ = lean_uint32_lor(v___x_891_, v___x_894_);
v___x_896_ = lean_uint8_to_uint32(v_b_u2082_887_);
v___x_897_ = 6;
v___x_898_ = lean_uint32_shift_left(v___x_896_, v___x_897_);
v___x_899_ = lean_uint32_lor(v___x_895_, v___x_898_);
v___x_900_ = lean_uint8_to_uint32(v_b_u2083_888_);
v_r_901_ = lean_uint32_lor(v___x_899_, v___x_900_);
v___x_902_ = 65536;
v___x_903_ = lean_uint32_dec_le(v___x_902_, v_r_901_);
if (v___x_903_ == 0)
{
return v___x_903_;
}
else
{
uint32_t v___x_904_; uint8_t v___x_905_; 
v___x_904_ = 1114111;
v___x_905_ = lean_uint32_dec_le(v_r_901_, v___x_904_);
return v___x_905_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_906_; lean_object* v___x_907_; uint8_t v___x_908_; 
v___x_906_ = lean_unsigned_to_nat(2u);
v___x_907_ = lean_nat_add(v_i_849_, v___x_906_);
v___x_908_ = lean_nat_dec_lt(v___x_907_, v___x_850_);
if (v___x_908_ == 0)
{
lean_dec(v___x_907_);
return v___x_908_;
}
else
{
lean_object* v___x_909_; lean_object* v___x_910_; uint8_t v___x_911_; uint8_t v___x_912_; uint8_t v___x_913_; 
v___x_909_ = lean_unsigned_to_nat(1u);
v___x_910_ = lean_nat_add(v_i_849_, v___x_909_);
v___x_911_ = lean_byte_array_fget(v_bytes_848_, v___x_910_);
lean_dec(v___x_910_);
v___x_912_ = lean_uint8_land(v___x_911_, v___x_859_);
v___x_913_ = lean_uint8_dec_eq(v___x_912_, v___x_853_);
if (v___x_913_ == 0)
{
lean_dec(v___x_907_);
return v___x_913_;
}
else
{
uint8_t v___x_914_; uint8_t v___x_915_; uint8_t v___x_916_; 
v___x_914_ = lean_byte_array_fget(v_bytes_848_, v___x_907_);
lean_dec(v___x_907_);
v___x_915_ = lean_uint8_land(v___x_914_, v___x_859_);
v___x_916_ = lean_uint8_dec_eq(v___x_915_, v___x_853_);
if (v___x_916_ == 0)
{
return v___x_916_;
}
else
{
uint8_t v___x_917_; uint8_t v_b_u2080_918_; uint8_t v___x_919_; uint8_t v_b_u2081_920_; uint8_t v_b_u2082_921_; uint32_t v___x_922_; uint32_t v___x_923_; uint32_t v___x_924_; uint32_t v___x_925_; uint32_t v___x_926_; uint32_t v___x_927_; uint32_t v___x_928_; uint32_t v___x_929_; uint32_t v_r_930_; uint32_t v___x_931_; uint8_t v___x_932_; 
v___x_917_ = 15;
v_b_u2080_918_ = lean_uint8_land(v___x_852_, v___x_917_);
v___x_919_ = 63;
v_b_u2081_920_ = lean_uint8_land(v___x_911_, v___x_919_);
v_b_u2082_921_ = lean_uint8_land(v___x_914_, v___x_919_);
v___x_922_ = lean_uint8_to_uint32(v_b_u2080_918_);
v___x_923_ = 12;
v___x_924_ = lean_uint32_shift_left(v___x_922_, v___x_923_);
v___x_925_ = lean_uint8_to_uint32(v_b_u2081_920_);
v___x_926_ = 6;
v___x_927_ = lean_uint32_shift_left(v___x_925_, v___x_926_);
v___x_928_ = lean_uint32_lor(v___x_924_, v___x_927_);
v___x_929_ = lean_uint8_to_uint32(v_b_u2082_921_);
v_r_930_ = lean_uint32_lor(v___x_928_, v___x_929_);
v___x_931_ = 2048;
v___x_932_ = lean_uint32_dec_le(v___x_931_, v_r_930_);
if (v___x_932_ == 0)
{
return v___x_932_;
}
else
{
uint32_t v___x_933_; uint8_t v___x_934_; 
v___x_933_ = 55296;
v___x_934_ = lean_uint32_dec_lt(v_r_930_, v___x_933_);
if (v___x_934_ == 0)
{
uint32_t v___x_935_; uint8_t v___x_936_; 
v___x_935_ = 57343;
v___x_936_ = lean_uint32_dec_lt(v___x_935_, v_r_930_);
return v___x_936_;
}
else
{
return v___x_934_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_937_; lean_object* v___x_938_; uint8_t v___x_939_; 
v___x_937_ = lean_unsigned_to_nat(1u);
v___x_938_ = lean_nat_add(v_i_849_, v___x_937_);
v___x_939_ = lean_nat_dec_lt(v___x_938_, v___x_850_);
if (v___x_939_ == 0)
{
lean_dec(v___x_938_);
return v___x_939_;
}
else
{
uint8_t v___x_940_; uint8_t v___x_941_; uint8_t v___x_942_; 
v___x_940_ = lean_byte_array_fget(v_bytes_848_, v___x_938_);
lean_dec(v___x_938_);
v___x_941_ = lean_uint8_land(v___x_940_, v___x_859_);
v___x_942_ = lean_uint8_dec_eq(v___x_941_, v___x_853_);
if (v___x_942_ == 0)
{
return v___x_942_;
}
else
{
uint8_t v___x_943_; uint8_t v_b_u2080_944_; uint8_t v___x_945_; uint8_t v_b_u2081_946_; uint32_t v___x_947_; uint32_t v___x_948_; uint32_t v___x_949_; uint32_t v___x_950_; uint32_t v_r_951_; uint32_t v___x_952_; uint8_t v___x_953_; 
v___x_943_ = 31;
v_b_u2080_944_ = lean_uint8_land(v___x_852_, v___x_943_);
v___x_945_ = 63;
v_b_u2081_946_ = lean_uint8_land(v___x_940_, v___x_945_);
v___x_947_ = lean_uint8_to_uint32(v_b_u2080_944_);
v___x_948_ = 6;
v___x_949_ = lean_uint32_shift_left(v___x_947_, v___x_948_);
v___x_950_ = lean_uint8_to_uint32(v_b_u2081_946_);
v_r_951_ = lean_uint32_lor(v___x_949_, v___x_950_);
v___x_952_ = 128;
v___x_953_ = lean_uint32_dec_le(v___x_952_, v_r_951_);
return v___x_953_;
}
}
}
}
else
{
return v___x_851_;
}
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_validateUTF8At___boxed(lean_object* v_bytes_954_, lean_object* v_i_955_){
_start:
{
uint8_t v_res_956_; lean_object* v_r_957_; 
v_res_956_ = l_ByteArray_validateUTF8At(v_bytes_954_, v_i_955_);
lean_dec(v_i_955_);
lean_dec_ref(v_bytes_954_);
v_r_957_ = lean_box(v_res_956_);
return v_r_957_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_match__1_splitter___redArg(uint8_t v_x_958_, lean_object* v_h__1_959_, lean_object* v_h__2_960_, lean_object* v_h__3_961_, lean_object* v_h__4_962_, lean_object* v_h__5_963_){
_start:
{
switch(v_x_958_)
{
case 0:
{
lean_object* v___x_964_; 
lean_dec(v_h__5_963_);
lean_dec(v_h__4_962_);
lean_dec(v_h__3_961_);
lean_dec(v_h__2_960_);
v___x_964_ = lean_apply_1(v_h__1_959_, lean_box(0));
return v___x_964_;
}
case 1:
{
lean_object* v___x_965_; 
lean_dec(v_h__5_963_);
lean_dec(v_h__4_962_);
lean_dec(v_h__3_961_);
lean_dec(v_h__1_959_);
v___x_965_ = lean_apply_1(v_h__2_960_, lean_box(0));
return v___x_965_;
}
case 2:
{
lean_object* v___x_966_; 
lean_dec(v_h__5_963_);
lean_dec(v_h__4_962_);
lean_dec(v_h__2_960_);
lean_dec(v_h__1_959_);
v___x_966_ = lean_apply_1(v_h__3_961_, lean_box(0));
return v___x_966_;
}
case 3:
{
lean_object* v___x_967_; 
lean_dec(v_h__5_963_);
lean_dec(v_h__3_961_);
lean_dec(v_h__2_960_);
lean_dec(v_h__1_959_);
v___x_967_ = lean_apply_1(v_h__4_962_, lean_box(0));
return v___x_967_;
}
default: 
{
lean_object* v___x_968_; 
lean_dec(v_h__4_962_);
lean_dec(v_h__3_961_);
lean_dec(v_h__2_960_);
lean_dec(v_h__1_959_);
v___x_968_ = lean_apply_1(v_h__5_963_, lean_box(0));
return v___x_968_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_match__1_splitter___redArg___boxed(lean_object* v_x_969_, lean_object* v_h__1_970_, lean_object* v_h__2_971_, lean_object* v_h__3_972_, lean_object* v_h__4_973_, lean_object* v_h__5_974_){
_start:
{
uint8_t v_x_47__boxed_975_; lean_object* v_res_976_; 
v_x_47__boxed_975_ = lean_unbox(v_x_969_);
v_res_976_ = l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_match__1_splitter___redArg(v_x_47__boxed_975_, v_h__1_970_, v_h__2_971_, v_h__3_972_, v_h__4_973_, v_h__5_974_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_match__1_splitter(lean_object* v_motive_977_, uint8_t v_x_978_, lean_object* v_h__1_979_, lean_object* v_h__2_980_, lean_object* v_h__3_981_, lean_object* v_h__4_982_, lean_object* v_h__5_983_){
_start:
{
switch(v_x_978_)
{
case 0:
{
lean_object* v___x_984_; 
lean_dec(v_h__5_983_);
lean_dec(v_h__4_982_);
lean_dec(v_h__3_981_);
lean_dec(v_h__2_980_);
v___x_984_ = lean_apply_1(v_h__1_979_, lean_box(0));
return v___x_984_;
}
case 1:
{
lean_object* v___x_985_; 
lean_dec(v_h__5_983_);
lean_dec(v_h__4_982_);
lean_dec(v_h__3_981_);
lean_dec(v_h__1_979_);
v___x_985_ = lean_apply_1(v_h__2_980_, lean_box(0));
return v___x_985_;
}
case 2:
{
lean_object* v___x_986_; 
lean_dec(v_h__5_983_);
lean_dec(v_h__4_982_);
lean_dec(v_h__2_980_);
lean_dec(v_h__1_979_);
v___x_986_ = lean_apply_1(v_h__3_981_, lean_box(0));
return v___x_986_;
}
case 3:
{
lean_object* v___x_987_; 
lean_dec(v_h__5_983_);
lean_dec(v_h__3_981_);
lean_dec(v_h__2_980_);
lean_dec(v_h__1_979_);
v___x_987_ = lean_apply_1(v_h__4_982_, lean_box(0));
return v___x_987_;
}
default: 
{
lean_object* v___x_988_; 
lean_dec(v_h__4_982_);
lean_dec(v_h__3_981_);
lean_dec(v_h__2_980_);
lean_dec(v_h__1_979_);
v___x_988_ = lean_apply_1(v_h__5_983_, lean_box(0));
return v___x_988_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_match__1_splitter___boxed(lean_object* v_motive_989_, lean_object* v_x_990_, lean_object* v_h__1_991_, lean_object* v_h__2_992_, lean_object* v_h__3_993_, lean_object* v_h__4_994_, lean_object* v_h__5_995_){
_start:
{
uint8_t v_x_60__boxed_996_; lean_object* v_res_997_; 
v_x_60__boxed_996_ = lean_unbox(v_x_990_);
v_res_997_ = l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_match__1_splitter(v_motive_989_, v_x_60__boxed_996_, v_h__1_991_, v_h__2_992_, v_h__3_993_, v_h__4_994_, v_h__5_995_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__10_splitter___redArg(lean_object* v_x_998_, lean_object* v_h__1_999_, lean_object* v_h__2_1000_){
_start:
{
if (lean_obj_tag(v_x_998_) == 0)
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
lean_dec(v_h__2_1000_);
v___x_1001_ = lean_box(0);
v___x_1002_ = lean_apply_1(v_h__1_999_, v___x_1001_);
return v___x_1002_;
}
else
{
lean_object* v_head_1003_; lean_object* v_tail_1004_; lean_object* v___x_1005_; 
lean_dec(v_h__1_999_);
v_head_1003_ = lean_ctor_get(v_x_998_, 0);
lean_inc(v_head_1003_);
v_tail_1004_ = lean_ctor_get(v_x_998_, 1);
lean_inc(v_tail_1004_);
lean_dec_ref_known(v_x_998_, 2);
v___x_1005_ = lean_apply_2(v_h__2_1000_, v_head_1003_, v_tail_1004_);
return v___x_1005_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__10_splitter(lean_object* v_motive_1006_, lean_object* v_x_1007_, lean_object* v_h__1_1008_, lean_object* v_h__2_1009_){
_start:
{
if (lean_obj_tag(v_x_1007_) == 0)
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
lean_dec(v_h__2_1009_);
v___x_1010_ = lean_box(0);
v___x_1011_ = lean_apply_1(v_h__1_1008_, v___x_1010_);
return v___x_1011_;
}
else
{
lean_object* v_head_1012_; lean_object* v_tail_1013_; lean_object* v___x_1014_; 
lean_dec(v_h__1_1008_);
v_head_1012_ = lean_ctor_get(v_x_1007_, 0);
lean_inc(v_head_1012_);
v_tail_1013_ = lean_ctor_get(v_x_1007_, 1);
lean_inc(v_tail_1013_);
lean_dec_ref_known(v_x_1007_, 2);
v___x_1014_ = lean_apply_2(v_h__2_1009_, v_head_1012_, v_tail_1013_);
return v___x_1014_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__1_splitter___redArg(lean_object* v_x_1015_, lean_object* v_h__1_1016_, lean_object* v_h__2_1017_){
_start:
{
if (lean_obj_tag(v_x_1015_) == 0)
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
lean_dec(v_h__1_1016_);
v___x_1018_ = lean_box(0);
v___x_1019_ = lean_apply_1(v_h__2_1017_, v___x_1018_);
return v___x_1019_;
}
else
{
lean_object* v_val_1020_; lean_object* v___x_1021_; 
lean_dec(v_h__2_1017_);
v_val_1020_ = lean_ctor_get(v_x_1015_, 0);
lean_inc(v_val_1020_);
lean_dec_ref_known(v_x_1015_, 1);
v___x_1021_ = lean_apply_1(v_h__1_1016_, v_val_1020_);
return v___x_1021_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__1_splitter(lean_object* v_motive_1022_, lean_object* v_x_1023_, lean_object* v_h__1_1024_, lean_object* v_h__2_1025_){
_start:
{
if (lean_obj_tag(v_x_1023_) == 0)
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
lean_dec(v_h__1_1024_);
v___x_1026_ = lean_box(0);
v___x_1027_ = lean_apply_1(v_h__2_1025_, v___x_1026_);
return v___x_1027_;
}
else
{
lean_object* v_val_1028_; lean_object* v___x_1029_; 
lean_dec(v_h__2_1025_);
v_val_1028_ = lean_ctor_get(v_x_1023_, 0);
lean_inc(v_val_1028_);
lean_dec_ref_known(v_x_1023_, 1);
v___x_1029_ = lean_apply_1(v_h__1_1024_, v_val_1028_);
return v___x_1029_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__3_splitter___redArg(lean_object* v_ws_1030_, lean_object* v_h__1_1031_, lean_object* v_h__2_1032_){
_start:
{
if (lean_obj_tag(v_ws_1030_) == 1)
{
lean_object* v_head_1033_; lean_object* v_tail_1034_; lean_object* v___x_1035_; 
lean_dec(v_h__2_1032_);
v_head_1033_ = lean_ctor_get(v_ws_1030_, 0);
lean_inc(v_head_1033_);
v_tail_1034_ = lean_ctor_get(v_ws_1030_, 1);
lean_inc(v_tail_1034_);
lean_dec_ref_known(v_ws_1030_, 2);
v___x_1035_ = lean_apply_2(v_h__1_1031_, v_head_1033_, v_tail_1034_);
return v___x_1035_;
}
else
{
lean_object* v___x_1036_; 
lean_dec(v_h__1_1031_);
v___x_1036_ = lean_apply_2(v_h__2_1032_, v_ws_1030_, lean_box(0));
return v___x_1036_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__3_splitter(lean_object* v_motive_1037_, lean_object* v_ws_1038_, lean_object* v_h__1_1039_, lean_object* v_h__2_1040_){
_start:
{
if (lean_obj_tag(v_ws_1038_) == 1)
{
lean_object* v_head_1041_; lean_object* v_tail_1042_; lean_object* v___x_1043_; 
lean_dec(v_h__2_1040_);
v_head_1041_ = lean_ctor_get(v_ws_1038_, 0);
lean_inc(v_head_1041_);
v_tail_1042_ = lean_ctor_get(v_ws_1038_, 1);
lean_inc(v_tail_1042_);
lean_dec_ref_known(v_ws_1038_, 2);
v___x_1043_ = lean_apply_2(v_h__1_1039_, v_head_1041_, v_tail_1042_);
return v___x_1043_;
}
else
{
lean_object* v___x_1044_; 
lean_dec(v_h__1_1039_);
v___x_1044_ = lean_apply_2(v_h__2_1040_, v_ws_1038_, lean_box(0));
return v___x_1044_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__6_splitter___redArg(lean_object* v_ws_1045_, lean_object* v_h__1_1046_, lean_object* v_h__2_1047_){
_start:
{
if (lean_obj_tag(v_ws_1045_) == 1)
{
lean_object* v_tail_1048_; 
v_tail_1048_ = lean_ctor_get(v_ws_1045_, 1);
if (lean_obj_tag(v_tail_1048_) == 1)
{
lean_object* v_head_1049_; lean_object* v_head_1050_; lean_object* v_tail_1051_; lean_object* v___x_1052_; 
lean_inc_ref(v_tail_1048_);
lean_dec(v_h__2_1047_);
v_head_1049_ = lean_ctor_get(v_ws_1045_, 0);
lean_inc(v_head_1049_);
lean_dec_ref_known(v_ws_1045_, 2);
v_head_1050_ = lean_ctor_get(v_tail_1048_, 0);
lean_inc(v_head_1050_);
v_tail_1051_ = lean_ctor_get(v_tail_1048_, 1);
lean_inc(v_tail_1051_);
lean_dec_ref_known(v_tail_1048_, 2);
v___x_1052_ = lean_apply_3(v_h__1_1046_, v_head_1049_, v_head_1050_, v_tail_1051_);
return v___x_1052_;
}
else
{
lean_object* v___x_1053_; 
lean_dec(v_h__1_1046_);
v___x_1053_ = lean_apply_2(v_h__2_1047_, v_ws_1045_, lean_box(0));
return v___x_1053_;
}
}
else
{
lean_object* v___x_1054_; 
lean_dec(v_h__1_1046_);
v___x_1054_ = lean_apply_2(v_h__2_1047_, v_ws_1045_, lean_box(0));
return v___x_1054_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__6_splitter(lean_object* v_motive_1055_, lean_object* v_ws_1056_, lean_object* v_h__1_1057_, lean_object* v_h__2_1058_){
_start:
{
if (lean_obj_tag(v_ws_1056_) == 1)
{
lean_object* v_tail_1059_; 
v_tail_1059_ = lean_ctor_get(v_ws_1056_, 1);
if (lean_obj_tag(v_tail_1059_) == 1)
{
lean_object* v_head_1060_; lean_object* v_head_1061_; lean_object* v_tail_1062_; lean_object* v___x_1063_; 
lean_inc_ref(v_tail_1059_);
lean_dec(v_h__2_1058_);
v_head_1060_ = lean_ctor_get(v_ws_1056_, 0);
lean_inc(v_head_1060_);
lean_dec_ref_known(v_ws_1056_, 2);
v_head_1061_ = lean_ctor_get(v_tail_1059_, 0);
lean_inc(v_head_1061_);
v_tail_1062_ = lean_ctor_get(v_tail_1059_, 1);
lean_inc(v_tail_1062_);
lean_dec_ref_known(v_tail_1059_, 2);
v___x_1063_ = lean_apply_3(v_h__1_1057_, v_head_1060_, v_head_1061_, v_tail_1062_);
return v___x_1063_;
}
else
{
lean_object* v___x_1064_; 
lean_dec(v_h__1_1057_);
v___x_1064_ = lean_apply_2(v_h__2_1058_, v_ws_1056_, lean_box(0));
return v___x_1064_;
}
}
else
{
lean_object* v___x_1065_; 
lean_dec(v_h__1_1057_);
v___x_1065_ = lean_apply_2(v_h__2_1058_, v_ws_1056_, lean_box(0));
return v___x_1065_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__8_splitter___redArg(lean_object* v_ws_1066_, lean_object* v_h__1_1067_, lean_object* v_h__2_1068_){
_start:
{
if (lean_obj_tag(v_ws_1066_) == 1)
{
lean_object* v_tail_1069_; 
v_tail_1069_ = lean_ctor_get(v_ws_1066_, 1);
if (lean_obj_tag(v_tail_1069_) == 1)
{
lean_object* v_tail_1070_; 
v_tail_1070_ = lean_ctor_get(v_tail_1069_, 1);
if (lean_obj_tag(v_tail_1070_) == 1)
{
lean_object* v_head_1071_; lean_object* v_head_1072_; lean_object* v_head_1073_; lean_object* v_tail_1074_; lean_object* v___x_1075_; 
lean_inc_ref(v_tail_1070_);
lean_inc_ref(v_tail_1069_);
lean_dec(v_h__2_1068_);
v_head_1071_ = lean_ctor_get(v_ws_1066_, 0);
lean_inc(v_head_1071_);
lean_dec_ref_known(v_ws_1066_, 2);
v_head_1072_ = lean_ctor_get(v_tail_1069_, 0);
lean_inc(v_head_1072_);
lean_dec_ref_known(v_tail_1069_, 2);
v_head_1073_ = lean_ctor_get(v_tail_1070_, 0);
lean_inc(v_head_1073_);
v_tail_1074_ = lean_ctor_get(v_tail_1070_, 1);
lean_inc(v_tail_1074_);
lean_dec_ref_known(v_tail_1070_, 2);
v___x_1075_ = lean_apply_4(v_h__1_1067_, v_head_1071_, v_head_1072_, v_head_1073_, v_tail_1074_);
return v___x_1075_;
}
else
{
lean_object* v___x_1076_; 
lean_dec(v_h__1_1067_);
v___x_1076_ = lean_apply_2(v_h__2_1068_, v_ws_1066_, lean_box(0));
return v___x_1076_;
}
}
else
{
lean_object* v___x_1077_; 
lean_dec(v_h__1_1067_);
v___x_1077_ = lean_apply_2(v_h__2_1068_, v_ws_1066_, lean_box(0));
return v___x_1077_;
}
}
else
{
lean_object* v___x_1078_; 
lean_dec(v_h__1_1067_);
v___x_1078_ = lean_apply_2(v_h__2_1068_, v_ws_1066_, lean_box(0));
return v___x_1078_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__String_Internal_utf8DecodeList_match__8_splitter(lean_object* v_motive_1079_, lean_object* v_ws_1080_, lean_object* v_h__1_1081_, lean_object* v_h__2_1082_){
_start:
{
if (lean_obj_tag(v_ws_1080_) == 1)
{
lean_object* v_tail_1083_; 
v_tail_1083_ = lean_ctor_get(v_ws_1080_, 1);
if (lean_obj_tag(v_tail_1083_) == 1)
{
lean_object* v_tail_1084_; 
v_tail_1084_ = lean_ctor_get(v_tail_1083_, 1);
if (lean_obj_tag(v_tail_1084_) == 1)
{
lean_object* v_head_1085_; lean_object* v_head_1086_; lean_object* v_head_1087_; lean_object* v_tail_1088_; lean_object* v___x_1089_; 
lean_inc_ref(v_tail_1084_);
lean_inc_ref(v_tail_1083_);
lean_dec(v_h__2_1082_);
v_head_1085_ = lean_ctor_get(v_ws_1080_, 0);
lean_inc(v_head_1085_);
lean_dec_ref_known(v_ws_1080_, 2);
v_head_1086_ = lean_ctor_get(v_tail_1083_, 0);
lean_inc(v_head_1086_);
lean_dec_ref_known(v_tail_1083_, 2);
v_head_1087_ = lean_ctor_get(v_tail_1084_, 0);
lean_inc(v_head_1087_);
v_tail_1088_ = lean_ctor_get(v_tail_1084_, 1);
lean_inc(v_tail_1088_);
lean_dec_ref_known(v_tail_1084_, 2);
v___x_1089_ = lean_apply_4(v_h__1_1081_, v_head_1085_, v_head_1086_, v_head_1087_, v_tail_1088_);
return v___x_1089_;
}
else
{
lean_object* v___x_1090_; 
lean_dec(v_h__1_1081_);
v___x_1090_ = lean_apply_2(v_h__2_1082_, v_ws_1080_, lean_box(0));
return v___x_1090_;
}
}
else
{
lean_object* v___x_1091_; 
lean_dec(v_h__1_1081_);
v___x_1091_ = lean_apply_2(v_h__2_1082_, v_ws_1080_, lean_box(0));
return v___x_1091_;
}
}
else
{
lean_object* v___x_1092_; 
lean_dec(v_h__1_1081_);
v___x_1092_ = lean_apply_2(v_h__2_1082_, v_ws_1080_, lean_box(0));
return v___x_1092_;
}
}
}
LEAN_EXPORT uint32_t l_ByteArray_utf8DecodeChar___redArg(lean_object* v_bytes_1093_, lean_object* v_i_1094_){
_start:
{
lean_object* v___x_1095_; uint8_t v___x_1096_; uint8_t v___x_1097_; uint8_t v___x_1098_; uint8_t v___x_1099_; uint8_t v___x_1100_; uint8_t v___x_1101_; 
v___x_1095_ = lean_byte_array_size(v_bytes_1093_);
v___x_1096_ = lean_nat_dec_lt(v_i_1094_, v___x_1095_);
v___x_1097_ = lean_byte_array_fget(v_bytes_1093_, v_i_1094_);
v___x_1098_ = 128;
v___x_1099_ = lean_uint8_land(v___x_1097_, v___x_1098_);
v___x_1100_ = 0;
v___x_1101_ = lean_uint8_dec_eq(v___x_1099_, v___x_1100_);
if (v___x_1101_ == 0)
{
uint8_t v___x_1102_; uint8_t v___x_1103_; uint8_t v___x_1104_; uint8_t v___x_1105_; 
v___x_1102_ = 224;
v___x_1103_ = lean_uint8_land(v___x_1097_, v___x_1102_);
v___x_1104_ = 192;
v___x_1105_ = lean_uint8_dec_eq(v___x_1103_, v___x_1104_);
if (v___x_1105_ == 0)
{
uint8_t v___x_1106_; uint8_t v___x_1107_; uint8_t v___x_1108_; 
v___x_1106_ = 240;
v___x_1107_ = lean_uint8_land(v___x_1097_, v___x_1106_);
v___x_1108_ = lean_uint8_dec_eq(v___x_1107_, v___x_1102_);
if (v___x_1108_ == 0)
{
uint8_t v___x_1109_; uint8_t v___x_1110_; uint8_t v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; uint8_t v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; uint8_t v___x_1117_; uint8_t v___x_1118_; uint8_t v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; uint8_t v___x_1122_; uint8_t v___x_1123_; uint8_t v___x_1124_; uint8_t v___x_1125_; uint8_t v___x_1126_; uint8_t v___x_1127_; uint8_t v___x_1128_; uint8_t v_b_u2080_1129_; uint8_t v___x_1130_; uint8_t v_b_u2081_1131_; uint8_t v_b_u2082_1132_; uint8_t v_b_u2083_1133_; uint32_t v___x_1134_; uint32_t v___x_1135_; uint32_t v___x_1136_; uint32_t v___x_1137_; uint32_t v___x_1138_; uint32_t v___x_1139_; uint32_t v___x_1140_; uint32_t v___x_1141_; uint32_t v___x_1142_; uint32_t v___x_1143_; uint32_t v___x_1144_; uint32_t v___x_1145_; uint32_t v_r_1146_; uint32_t v___x_1147_; uint8_t v___x_1148_; uint32_t v___x_1149_; uint8_t v___x_1150_; 
v___x_1109_ = 248;
v___x_1110_ = lean_uint8_land(v___x_1097_, v___x_1109_);
v___x_1111_ = lean_uint8_dec_eq(v___x_1110_, v___x_1106_);
v___x_1112_ = lean_unsigned_to_nat(3u);
v___x_1113_ = lean_nat_add(v_i_1094_, v___x_1112_);
v___x_1114_ = lean_nat_dec_lt(v___x_1113_, v___x_1095_);
v___x_1115_ = lean_unsigned_to_nat(1u);
v___x_1116_ = lean_nat_add(v_i_1094_, v___x_1115_);
v___x_1117_ = lean_byte_array_fget(v_bytes_1093_, v___x_1116_);
lean_dec(v___x_1116_);
v___x_1118_ = lean_uint8_land(v___x_1117_, v___x_1104_);
v___x_1119_ = lean_uint8_dec_eq(v___x_1118_, v___x_1098_);
v___x_1120_ = lean_unsigned_to_nat(2u);
v___x_1121_ = lean_nat_add(v_i_1094_, v___x_1120_);
v___x_1122_ = lean_byte_array_fget(v_bytes_1093_, v___x_1121_);
lean_dec(v___x_1121_);
v___x_1123_ = lean_uint8_land(v___x_1122_, v___x_1104_);
v___x_1124_ = lean_uint8_dec_eq(v___x_1123_, v___x_1098_);
v___x_1125_ = lean_byte_array_fget(v_bytes_1093_, v___x_1113_);
lean_dec(v___x_1113_);
v___x_1126_ = lean_uint8_land(v___x_1125_, v___x_1104_);
v___x_1127_ = lean_uint8_dec_eq(v___x_1126_, v___x_1098_);
v___x_1128_ = 7;
v_b_u2080_1129_ = lean_uint8_land(v___x_1097_, v___x_1128_);
v___x_1130_ = 63;
v_b_u2081_1131_ = lean_uint8_land(v___x_1117_, v___x_1130_);
v_b_u2082_1132_ = lean_uint8_land(v___x_1122_, v___x_1130_);
v_b_u2083_1133_ = lean_uint8_land(v___x_1125_, v___x_1130_);
v___x_1134_ = lean_uint8_to_uint32(v_b_u2080_1129_);
v___x_1135_ = 18;
v___x_1136_ = lean_uint32_shift_left(v___x_1134_, v___x_1135_);
v___x_1137_ = lean_uint8_to_uint32(v_b_u2081_1131_);
v___x_1138_ = 12;
v___x_1139_ = lean_uint32_shift_left(v___x_1137_, v___x_1138_);
v___x_1140_ = lean_uint32_lor(v___x_1136_, v___x_1139_);
v___x_1141_ = lean_uint8_to_uint32(v_b_u2082_1132_);
v___x_1142_ = 6;
v___x_1143_ = lean_uint32_shift_left(v___x_1141_, v___x_1142_);
v___x_1144_ = lean_uint32_lor(v___x_1140_, v___x_1143_);
v___x_1145_ = lean_uint8_to_uint32(v_b_u2083_1133_);
v_r_1146_ = lean_uint32_lor(v___x_1144_, v___x_1145_);
v___x_1147_ = 65536;
v___x_1148_ = lean_uint32_dec_lt(v_r_1146_, v___x_1147_);
v___x_1149_ = 1114111;
v___x_1150_ = lean_uint32_dec_lt(v___x_1149_, v_r_1146_);
return v_r_1146_;
}
else
{
lean_object* v___x_1151_; lean_object* v___x_1152_; uint8_t v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; uint8_t v___x_1156_; uint8_t v___x_1157_; uint8_t v___x_1158_; uint8_t v___x_1159_; uint8_t v___x_1160_; uint8_t v___x_1161_; uint8_t v___x_1162_; uint8_t v_b_u2080_1163_; uint8_t v___x_1164_; uint8_t v_b_u2081_1165_; uint8_t v_b_u2082_1166_; uint32_t v___x_1167_; uint32_t v___x_1168_; uint32_t v___x_1169_; uint32_t v___x_1170_; uint32_t v___x_1171_; uint32_t v___x_1172_; uint32_t v___x_1173_; uint32_t v___x_1174_; uint32_t v_r_1175_; uint32_t v___x_1176_; uint8_t v___x_1177_; uint32_t v___x_1178_; uint8_t v___x_1179_; 
v___x_1151_ = lean_unsigned_to_nat(2u);
v___x_1152_ = lean_nat_add(v_i_1094_, v___x_1151_);
v___x_1153_ = lean_nat_dec_lt(v___x_1152_, v___x_1095_);
v___x_1154_ = lean_unsigned_to_nat(1u);
v___x_1155_ = lean_nat_add(v_i_1094_, v___x_1154_);
v___x_1156_ = lean_byte_array_fget(v_bytes_1093_, v___x_1155_);
lean_dec(v___x_1155_);
v___x_1157_ = lean_uint8_land(v___x_1156_, v___x_1104_);
v___x_1158_ = lean_uint8_dec_eq(v___x_1157_, v___x_1098_);
v___x_1159_ = lean_byte_array_fget(v_bytes_1093_, v___x_1152_);
lean_dec(v___x_1152_);
v___x_1160_ = lean_uint8_land(v___x_1159_, v___x_1104_);
v___x_1161_ = lean_uint8_dec_eq(v___x_1160_, v___x_1098_);
v___x_1162_ = 15;
v_b_u2080_1163_ = lean_uint8_land(v___x_1097_, v___x_1162_);
v___x_1164_ = 63;
v_b_u2081_1165_ = lean_uint8_land(v___x_1156_, v___x_1164_);
v_b_u2082_1166_ = lean_uint8_land(v___x_1159_, v___x_1164_);
v___x_1167_ = lean_uint8_to_uint32(v_b_u2080_1163_);
v___x_1168_ = 12;
v___x_1169_ = lean_uint32_shift_left(v___x_1167_, v___x_1168_);
v___x_1170_ = lean_uint8_to_uint32(v_b_u2081_1165_);
v___x_1171_ = 6;
v___x_1172_ = lean_uint32_shift_left(v___x_1170_, v___x_1171_);
v___x_1173_ = lean_uint32_lor(v___x_1169_, v___x_1172_);
v___x_1174_ = lean_uint8_to_uint32(v_b_u2082_1166_);
v_r_1175_ = lean_uint32_lor(v___x_1173_, v___x_1174_);
v___x_1176_ = 2048;
v___x_1177_ = lean_uint32_dec_lt(v_r_1175_, v___x_1176_);
v___x_1178_ = 55296;
v___x_1179_ = lean_uint32_dec_le(v___x_1178_, v_r_1175_);
if (v___x_1179_ == 0)
{
return v_r_1175_;
}
else
{
uint32_t v___x_1180_; uint8_t v___x_1181_; 
v___x_1180_ = 57343;
v___x_1181_ = lean_uint32_dec_le(v_r_1175_, v___x_1180_);
return v_r_1175_;
}
}
}
else
{
lean_object* v___x_1182_; lean_object* v___x_1183_; uint8_t v___x_1184_; uint8_t v___x_1185_; uint8_t v___x_1186_; uint8_t v___x_1187_; uint8_t v___x_1188_; uint8_t v_b_u2080_1189_; uint8_t v___x_1190_; uint8_t v_b_u2081_1191_; uint32_t v___x_1192_; uint32_t v___x_1193_; uint32_t v___x_1194_; uint32_t v___x_1195_; uint32_t v_r_1196_; uint32_t v___x_1197_; uint8_t v___x_1198_; 
v___x_1182_ = lean_unsigned_to_nat(1u);
v___x_1183_ = lean_nat_add(v_i_1094_, v___x_1182_);
v___x_1184_ = lean_nat_dec_lt(v___x_1183_, v___x_1095_);
v___x_1185_ = lean_byte_array_fget(v_bytes_1093_, v___x_1183_);
lean_dec(v___x_1183_);
v___x_1186_ = lean_uint8_land(v___x_1185_, v___x_1104_);
v___x_1187_ = lean_uint8_dec_eq(v___x_1186_, v___x_1098_);
v___x_1188_ = 31;
v_b_u2080_1189_ = lean_uint8_land(v___x_1097_, v___x_1188_);
v___x_1190_ = 63;
v_b_u2081_1191_ = lean_uint8_land(v___x_1185_, v___x_1190_);
v___x_1192_ = lean_uint8_to_uint32(v_b_u2080_1189_);
v___x_1193_ = 6;
v___x_1194_ = lean_uint32_shift_left(v___x_1192_, v___x_1193_);
v___x_1195_ = lean_uint8_to_uint32(v_b_u2081_1191_);
v_r_1196_ = lean_uint32_lor(v___x_1194_, v___x_1195_);
v___x_1197_ = 128;
v___x_1198_ = lean_uint32_dec_lt(v_r_1196_, v___x_1197_);
return v_r_1196_;
}
}
else
{
uint32_t v___x_1199_; 
v___x_1199_ = lean_uint8_to_uint32(v___x_1097_);
return v___x_1199_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar___redArg___boxed(lean_object* v_bytes_1200_, lean_object* v_i_1201_){
_start:
{
uint32_t v_res_1202_; lean_object* v_r_1203_; 
v_res_1202_ = l_ByteArray_utf8DecodeChar___redArg(v_bytes_1200_, v_i_1201_);
lean_dec(v_i_1201_);
lean_dec_ref(v_bytes_1200_);
v_r_1203_ = lean_box_uint32(v_res_1202_);
return v_r_1203_;
}
}
LEAN_EXPORT uint32_t l_ByteArray_utf8DecodeChar(lean_object* v_bytes_1204_, lean_object* v_i_1205_, lean_object* v_h_1206_){
_start:
{
lean_object* v___x_1207_; uint8_t v___x_1208_; uint8_t v___x_1209_; uint8_t v___x_1210_; uint8_t v___x_1211_; uint8_t v___x_1212_; uint8_t v___x_1213_; 
v___x_1207_ = lean_byte_array_size(v_bytes_1204_);
v___x_1208_ = lean_nat_dec_lt(v_i_1205_, v___x_1207_);
v___x_1209_ = lean_byte_array_fget(v_bytes_1204_, v_i_1205_);
v___x_1210_ = 128;
v___x_1211_ = lean_uint8_land(v___x_1209_, v___x_1210_);
v___x_1212_ = 0;
v___x_1213_ = lean_uint8_dec_eq(v___x_1211_, v___x_1212_);
if (v___x_1213_ == 0)
{
uint8_t v___x_1214_; uint8_t v___x_1215_; uint8_t v___x_1216_; uint8_t v___x_1217_; 
v___x_1214_ = 224;
v___x_1215_ = lean_uint8_land(v___x_1209_, v___x_1214_);
v___x_1216_ = 192;
v___x_1217_ = lean_uint8_dec_eq(v___x_1215_, v___x_1216_);
if (v___x_1217_ == 0)
{
uint8_t v___x_1218_; uint8_t v___x_1219_; uint8_t v___x_1220_; 
v___x_1218_ = 240;
v___x_1219_ = lean_uint8_land(v___x_1209_, v___x_1218_);
v___x_1220_ = lean_uint8_dec_eq(v___x_1219_, v___x_1214_);
if (v___x_1220_ == 0)
{
uint8_t v___x_1221_; uint8_t v___x_1222_; uint8_t v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; uint8_t v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; uint8_t v___x_1229_; uint8_t v___x_1230_; uint8_t v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; uint8_t v___x_1234_; uint8_t v___x_1235_; uint8_t v___x_1236_; uint8_t v___x_1237_; uint8_t v___x_1238_; uint8_t v___x_1239_; uint8_t v___x_1240_; uint8_t v_b_u2080_1241_; uint8_t v___x_1242_; uint8_t v_b_u2081_1243_; uint8_t v_b_u2082_1244_; uint8_t v_b_u2083_1245_; uint32_t v___x_1246_; uint32_t v___x_1247_; uint32_t v___x_1248_; uint32_t v___x_1249_; uint32_t v___x_1250_; uint32_t v___x_1251_; uint32_t v___x_1252_; uint32_t v___x_1253_; uint32_t v___x_1254_; uint32_t v___x_1255_; uint32_t v___x_1256_; uint32_t v___x_1257_; uint32_t v_r_1258_; uint32_t v___x_1259_; uint8_t v___x_1260_; uint32_t v___x_1261_; uint8_t v___x_1262_; 
v___x_1221_ = 248;
v___x_1222_ = lean_uint8_land(v___x_1209_, v___x_1221_);
v___x_1223_ = lean_uint8_dec_eq(v___x_1222_, v___x_1218_);
v___x_1224_ = lean_unsigned_to_nat(3u);
v___x_1225_ = lean_nat_add(v_i_1205_, v___x_1224_);
v___x_1226_ = lean_nat_dec_lt(v___x_1225_, v___x_1207_);
v___x_1227_ = lean_unsigned_to_nat(1u);
v___x_1228_ = lean_nat_add(v_i_1205_, v___x_1227_);
v___x_1229_ = lean_byte_array_fget(v_bytes_1204_, v___x_1228_);
lean_dec(v___x_1228_);
v___x_1230_ = lean_uint8_land(v___x_1229_, v___x_1216_);
v___x_1231_ = lean_uint8_dec_eq(v___x_1230_, v___x_1210_);
v___x_1232_ = lean_unsigned_to_nat(2u);
v___x_1233_ = lean_nat_add(v_i_1205_, v___x_1232_);
v___x_1234_ = lean_byte_array_fget(v_bytes_1204_, v___x_1233_);
lean_dec(v___x_1233_);
v___x_1235_ = lean_uint8_land(v___x_1234_, v___x_1216_);
v___x_1236_ = lean_uint8_dec_eq(v___x_1235_, v___x_1210_);
v___x_1237_ = lean_byte_array_fget(v_bytes_1204_, v___x_1225_);
lean_dec(v___x_1225_);
v___x_1238_ = lean_uint8_land(v___x_1237_, v___x_1216_);
v___x_1239_ = lean_uint8_dec_eq(v___x_1238_, v___x_1210_);
v___x_1240_ = 7;
v_b_u2080_1241_ = lean_uint8_land(v___x_1209_, v___x_1240_);
v___x_1242_ = 63;
v_b_u2081_1243_ = lean_uint8_land(v___x_1229_, v___x_1242_);
v_b_u2082_1244_ = lean_uint8_land(v___x_1234_, v___x_1242_);
v_b_u2083_1245_ = lean_uint8_land(v___x_1237_, v___x_1242_);
v___x_1246_ = lean_uint8_to_uint32(v_b_u2080_1241_);
v___x_1247_ = 18;
v___x_1248_ = lean_uint32_shift_left(v___x_1246_, v___x_1247_);
v___x_1249_ = lean_uint8_to_uint32(v_b_u2081_1243_);
v___x_1250_ = 12;
v___x_1251_ = lean_uint32_shift_left(v___x_1249_, v___x_1250_);
v___x_1252_ = lean_uint32_lor(v___x_1248_, v___x_1251_);
v___x_1253_ = lean_uint8_to_uint32(v_b_u2082_1244_);
v___x_1254_ = 6;
v___x_1255_ = lean_uint32_shift_left(v___x_1253_, v___x_1254_);
v___x_1256_ = lean_uint32_lor(v___x_1252_, v___x_1255_);
v___x_1257_ = lean_uint8_to_uint32(v_b_u2083_1245_);
v_r_1258_ = lean_uint32_lor(v___x_1256_, v___x_1257_);
v___x_1259_ = 65536;
v___x_1260_ = lean_uint32_dec_lt(v_r_1258_, v___x_1259_);
v___x_1261_ = 1114111;
v___x_1262_ = lean_uint32_dec_lt(v___x_1261_, v_r_1258_);
return v_r_1258_;
}
else
{
lean_object* v___x_1263_; lean_object* v___x_1264_; uint8_t v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; uint8_t v___x_1268_; uint8_t v___x_1269_; uint8_t v___x_1270_; uint8_t v___x_1271_; uint8_t v___x_1272_; uint8_t v___x_1273_; uint8_t v___x_1274_; uint8_t v_b_u2080_1275_; uint8_t v___x_1276_; uint8_t v_b_u2081_1277_; uint8_t v_b_u2082_1278_; uint32_t v___x_1279_; uint32_t v___x_1280_; uint32_t v___x_1281_; uint32_t v___x_1282_; uint32_t v___x_1283_; uint32_t v___x_1284_; uint32_t v___x_1285_; uint32_t v___x_1286_; uint32_t v_r_1287_; uint32_t v___x_1288_; uint8_t v___x_1289_; uint32_t v___x_1290_; uint8_t v___x_1291_; 
v___x_1263_ = lean_unsigned_to_nat(2u);
v___x_1264_ = lean_nat_add(v_i_1205_, v___x_1263_);
v___x_1265_ = lean_nat_dec_lt(v___x_1264_, v___x_1207_);
v___x_1266_ = lean_unsigned_to_nat(1u);
v___x_1267_ = lean_nat_add(v_i_1205_, v___x_1266_);
v___x_1268_ = lean_byte_array_fget(v_bytes_1204_, v___x_1267_);
lean_dec(v___x_1267_);
v___x_1269_ = lean_uint8_land(v___x_1268_, v___x_1216_);
v___x_1270_ = lean_uint8_dec_eq(v___x_1269_, v___x_1210_);
v___x_1271_ = lean_byte_array_fget(v_bytes_1204_, v___x_1264_);
lean_dec(v___x_1264_);
v___x_1272_ = lean_uint8_land(v___x_1271_, v___x_1216_);
v___x_1273_ = lean_uint8_dec_eq(v___x_1272_, v___x_1210_);
v___x_1274_ = 15;
v_b_u2080_1275_ = lean_uint8_land(v___x_1209_, v___x_1274_);
v___x_1276_ = 63;
v_b_u2081_1277_ = lean_uint8_land(v___x_1268_, v___x_1276_);
v_b_u2082_1278_ = lean_uint8_land(v___x_1271_, v___x_1276_);
v___x_1279_ = lean_uint8_to_uint32(v_b_u2080_1275_);
v___x_1280_ = 12;
v___x_1281_ = lean_uint32_shift_left(v___x_1279_, v___x_1280_);
v___x_1282_ = lean_uint8_to_uint32(v_b_u2081_1277_);
v___x_1283_ = 6;
v___x_1284_ = lean_uint32_shift_left(v___x_1282_, v___x_1283_);
v___x_1285_ = lean_uint32_lor(v___x_1281_, v___x_1284_);
v___x_1286_ = lean_uint8_to_uint32(v_b_u2082_1278_);
v_r_1287_ = lean_uint32_lor(v___x_1285_, v___x_1286_);
v___x_1288_ = 2048;
v___x_1289_ = lean_uint32_dec_lt(v_r_1287_, v___x_1288_);
v___x_1290_ = 55296;
v___x_1291_ = lean_uint32_dec_le(v___x_1290_, v_r_1287_);
if (v___x_1291_ == 0)
{
return v_r_1287_;
}
else
{
uint32_t v___x_1292_; uint8_t v___x_1293_; 
v___x_1292_ = 57343;
v___x_1293_ = lean_uint32_dec_le(v_r_1287_, v___x_1292_);
return v_r_1287_;
}
}
}
else
{
lean_object* v___x_1294_; lean_object* v___x_1295_; uint8_t v___x_1296_; uint8_t v___x_1297_; uint8_t v___x_1298_; uint8_t v___x_1299_; uint8_t v___x_1300_; uint8_t v_b_u2080_1301_; uint8_t v___x_1302_; uint8_t v_b_u2081_1303_; uint32_t v___x_1304_; uint32_t v___x_1305_; uint32_t v___x_1306_; uint32_t v___x_1307_; uint32_t v_r_1308_; uint32_t v___x_1309_; uint8_t v___x_1310_; 
v___x_1294_ = lean_unsigned_to_nat(1u);
v___x_1295_ = lean_nat_add(v_i_1205_, v___x_1294_);
v___x_1296_ = lean_nat_dec_lt(v___x_1295_, v___x_1207_);
v___x_1297_ = lean_byte_array_fget(v_bytes_1204_, v___x_1295_);
lean_dec(v___x_1295_);
v___x_1298_ = lean_uint8_land(v___x_1297_, v___x_1216_);
v___x_1299_ = lean_uint8_dec_eq(v___x_1298_, v___x_1210_);
v___x_1300_ = 31;
v_b_u2080_1301_ = lean_uint8_land(v___x_1209_, v___x_1300_);
v___x_1302_ = 63;
v_b_u2081_1303_ = lean_uint8_land(v___x_1297_, v___x_1302_);
v___x_1304_ = lean_uint8_to_uint32(v_b_u2080_1301_);
v___x_1305_ = 6;
v___x_1306_ = lean_uint32_shift_left(v___x_1304_, v___x_1305_);
v___x_1307_ = lean_uint8_to_uint32(v_b_u2081_1303_);
v_r_1308_ = lean_uint32_lor(v___x_1306_, v___x_1307_);
v___x_1309_ = 128;
v___x_1310_ = lean_uint32_dec_lt(v_r_1308_, v___x_1309_);
return v_r_1308_;
}
}
else
{
uint32_t v___x_1311_; 
v___x_1311_ = lean_uint8_to_uint32(v___x_1209_);
return v___x_1311_;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_utf8DecodeChar___boxed(lean_object* v_bytes_1312_, lean_object* v_i_1313_, lean_object* v_h_1314_){
_start:
{
uint32_t v_res_1315_; lean_object* v_r_1316_; 
v_res_1315_ = l_ByteArray_utf8DecodeChar(v_bytes_1312_, v_i_1313_, v_h_1314_);
lean_dec(v_i_1313_);
lean_dec_ref(v_bytes_1312_);
v_r_1316_ = lean_box_uint32(v_res_1315_);
return v_r_1316_;
}
}
LEAN_EXPORT uint8_t l_UInt8_instDecidableIsUTF8FirstByte(uint8_t v_c_1317_){
_start:
{
uint8_t v___x_1318_; uint8_t v___x_1319_; uint8_t v___x_1320_; uint8_t v___x_1321_; 
v___x_1318_ = 128;
v___x_1319_ = lean_uint8_land(v_c_1317_, v___x_1318_);
v___x_1320_ = 0;
v___x_1321_ = lean_uint8_dec_eq(v___x_1319_, v___x_1320_);
if (v___x_1321_ == 0)
{
uint8_t v___x_1322_; uint8_t v___x_1323_; uint8_t v___x_1324_; uint8_t v___x_1325_; 
v___x_1322_ = 224;
v___x_1323_ = lean_uint8_land(v_c_1317_, v___x_1322_);
v___x_1324_ = 192;
v___x_1325_ = lean_uint8_dec_eq(v___x_1323_, v___x_1324_);
if (v___x_1325_ == 0)
{
uint8_t v___x_1326_; uint8_t v___x_1327_; uint8_t v___x_1328_; 
v___x_1326_ = 240;
v___x_1327_ = lean_uint8_land(v_c_1317_, v___x_1326_);
v___x_1328_ = lean_uint8_dec_eq(v___x_1327_, v___x_1322_);
if (v___x_1328_ == 0)
{
uint8_t v___x_1329_; uint8_t v___x_1330_; uint8_t v___x_1331_; 
v___x_1329_ = 248;
v___x_1330_ = lean_uint8_land(v_c_1317_, v___x_1329_);
v___x_1331_ = lean_uint8_dec_eq(v___x_1330_, v___x_1326_);
return v___x_1331_;
}
else
{
return v___x_1328_;
}
}
else
{
return v___x_1325_;
}
}
else
{
return v___x_1321_;
}
}
}
LEAN_EXPORT lean_object* l_UInt8_instDecidableIsUTF8FirstByte___boxed(lean_object* v_c_1332_){
_start:
{
uint8_t v_c_boxed_1333_; uint8_t v_res_1334_; lean_object* v_r_1335_; 
v_c_boxed_1333_ = lean_unbox(v_c_1332_);
v_res_1334_ = l_UInt8_instDecidableIsUTF8FirstByte(v_c_boxed_1333_);
v_r_1335_ = lean_box(v_res_1334_);
return v_r_1335_;
}
}
LEAN_EXPORT lean_object* l_UInt8_utf8ByteSize___redArg(uint8_t v_c_1336_){
_start:
{
uint8_t v___x_1337_; uint8_t v___x_1338_; uint8_t v___x_1339_; uint8_t v___x_1340_; 
v___x_1337_ = 128;
v___x_1338_ = lean_uint8_land(v_c_1336_, v___x_1337_);
v___x_1339_ = 0;
v___x_1340_ = lean_uint8_dec_eq(v___x_1338_, v___x_1339_);
if (v___x_1340_ == 0)
{
uint8_t v___x_1341_; uint8_t v___x_1342_; uint8_t v___x_1343_; uint8_t v___x_1344_; 
v___x_1341_ = 224;
v___x_1342_ = lean_uint8_land(v_c_1336_, v___x_1341_);
v___x_1343_ = 192;
v___x_1344_ = lean_uint8_dec_eq(v___x_1342_, v___x_1343_);
if (v___x_1344_ == 0)
{
uint8_t v___x_1345_; uint8_t v___x_1346_; uint8_t v___x_1347_; 
v___x_1345_ = 240;
v___x_1346_ = lean_uint8_land(v_c_1336_, v___x_1345_);
v___x_1347_ = lean_uint8_dec_eq(v___x_1346_, v___x_1341_);
if (v___x_1347_ == 0)
{
lean_object* v___x_1348_; 
v___x_1348_ = lean_unsigned_to_nat(4u);
return v___x_1348_;
}
else
{
lean_object* v___x_1349_; 
v___x_1349_ = lean_unsigned_to_nat(3u);
return v___x_1349_;
}
}
else
{
lean_object* v___x_1350_; 
v___x_1350_ = lean_unsigned_to_nat(2u);
return v___x_1350_;
}
}
else
{
lean_object* v___x_1351_; 
v___x_1351_ = lean_unsigned_to_nat(1u);
return v___x_1351_;
}
}
}
LEAN_EXPORT lean_object* l_UInt8_utf8ByteSize___redArg___boxed(lean_object* v_c_1352_){
_start:
{
uint8_t v_c_boxed_1353_; lean_object* v_res_1354_; 
v_c_boxed_1353_ = lean_unbox(v_c_1352_);
v_res_1354_ = l_UInt8_utf8ByteSize___redArg(v_c_boxed_1353_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l_UInt8_utf8ByteSize(uint8_t v_c_1355_, lean_object* v___h_1356_){
_start:
{
uint8_t v___x_1357_; uint8_t v___x_1358_; uint8_t v___x_1359_; uint8_t v___x_1360_; 
v___x_1357_ = 128;
v___x_1358_ = lean_uint8_land(v_c_1355_, v___x_1357_);
v___x_1359_ = 0;
v___x_1360_ = lean_uint8_dec_eq(v___x_1358_, v___x_1359_);
if (v___x_1360_ == 0)
{
uint8_t v___x_1361_; uint8_t v___x_1362_; uint8_t v___x_1363_; uint8_t v___x_1364_; 
v___x_1361_ = 224;
v___x_1362_ = lean_uint8_land(v_c_1355_, v___x_1361_);
v___x_1363_ = 192;
v___x_1364_ = lean_uint8_dec_eq(v___x_1362_, v___x_1363_);
if (v___x_1364_ == 0)
{
uint8_t v___x_1365_; uint8_t v___x_1366_; uint8_t v___x_1367_; 
v___x_1365_ = 240;
v___x_1366_ = lean_uint8_land(v_c_1355_, v___x_1365_);
v___x_1367_ = lean_uint8_dec_eq(v___x_1366_, v___x_1361_);
if (v___x_1367_ == 0)
{
lean_object* v___x_1368_; 
v___x_1368_ = lean_unsigned_to_nat(4u);
return v___x_1368_;
}
else
{
lean_object* v___x_1369_; 
v___x_1369_ = lean_unsigned_to_nat(3u);
return v___x_1369_;
}
}
else
{
lean_object* v___x_1370_; 
v___x_1370_ = lean_unsigned_to_nat(2u);
return v___x_1370_;
}
}
else
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_unsigned_to_nat(1u);
return v___x_1371_;
}
}
}
LEAN_EXPORT lean_object* l_UInt8_utf8ByteSize___boxed(lean_object* v_c_1372_, lean_object* v___h_1373_){
_start:
{
uint8_t v_c_boxed_1374_; lean_object* v_res_1375_; 
v_c_boxed_1374_ = lean_unbox(v_c_1372_);
v_res_1375_ = l_UInt8_utf8ByteSize(v_c_boxed_1374_, v___h_1373_);
return v_res_1375_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize(uint8_t v_x_1376_){
_start:
{
switch(v_x_1376_)
{
case 0:
{
lean_object* v___x_1377_; 
v___x_1377_ = lean_unsigned_to_nat(0u);
return v___x_1377_;
}
case 1:
{
lean_object* v___x_1378_; 
v___x_1378_ = lean_unsigned_to_nat(1u);
return v___x_1378_;
}
case 2:
{
lean_object* v___x_1379_; 
v___x_1379_ = lean_unsigned_to_nat(2u);
return v___x_1379_;
}
case 3:
{
lean_object* v___x_1380_; 
v___x_1380_ = lean_unsigned_to_nat(3u);
return v___x_1380_;
}
default: 
{
lean_object* v___x_1381_; 
v___x_1381_ = lean_unsigned_to_nat(4u);
return v___x_1381_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize___boxed(lean_object* v_x_1382_){
_start:
{
uint8_t v_x_54__boxed_1383_; lean_object* v_res_1384_; 
v_x_54__boxed_1383_ = lean_unbox(v_x_1382_);
v_res_1384_ = l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize(v_x_54__boxed_1383_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize_match__1_splitter___redArg(uint8_t v_x_1385_, lean_object* v_h__1_1386_, lean_object* v_h__2_1387_, lean_object* v_h__3_1388_, lean_object* v_h__4_1389_, lean_object* v_h__5_1390_){
_start:
{
switch(v_x_1385_)
{
case 0:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; 
lean_dec(v_h__5_1390_);
lean_dec(v_h__4_1389_);
lean_dec(v_h__3_1388_);
lean_dec(v_h__2_1387_);
v___x_1391_ = lean_box(0);
v___x_1392_ = lean_apply_1(v_h__1_1386_, v___x_1391_);
return v___x_1392_;
}
case 1:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; 
lean_dec(v_h__5_1390_);
lean_dec(v_h__4_1389_);
lean_dec(v_h__3_1388_);
lean_dec(v_h__1_1386_);
v___x_1393_ = lean_box(0);
v___x_1394_ = lean_apply_1(v_h__2_1387_, v___x_1393_);
return v___x_1394_;
}
case 2:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; 
lean_dec(v_h__5_1390_);
lean_dec(v_h__4_1389_);
lean_dec(v_h__2_1387_);
lean_dec(v_h__1_1386_);
v___x_1395_ = lean_box(0);
v___x_1396_ = lean_apply_1(v_h__3_1388_, v___x_1395_);
return v___x_1396_;
}
case 3:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; 
lean_dec(v_h__5_1390_);
lean_dec(v_h__3_1388_);
lean_dec(v_h__2_1387_);
lean_dec(v_h__1_1386_);
v___x_1397_ = lean_box(0);
v___x_1398_ = lean_apply_1(v_h__4_1389_, v___x_1397_);
return v___x_1398_;
}
default: 
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
lean_dec(v_h__4_1389_);
lean_dec(v_h__3_1388_);
lean_dec(v_h__2_1387_);
lean_dec(v_h__1_1386_);
v___x_1399_ = lean_box(0);
v___x_1400_ = lean_apply_1(v_h__5_1390_, v___x_1399_);
return v___x_1400_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize_match__1_splitter___redArg___boxed(lean_object* v_x_1401_, lean_object* v_h__1_1402_, lean_object* v_h__2_1403_, lean_object* v_h__3_1404_, lean_object* v_h__4_1405_, lean_object* v_h__5_1406_){
_start:
{
uint8_t v_x_51__boxed_1407_; lean_object* v_res_1408_; 
v_x_51__boxed_1407_ = lean_unbox(v_x_1401_);
v_res_1408_ = l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize_match__1_splitter___redArg(v_x_51__boxed_1407_, v_h__1_1402_, v_h__2_1403_, v_h__3_1404_, v_h__4_1405_, v_h__5_1406_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize_match__1_splitter(lean_object* v_motive_1409_, uint8_t v_x_1410_, lean_object* v_h__1_1411_, lean_object* v_h__2_1412_, lean_object* v_h__3_1413_, lean_object* v_h__4_1414_, lean_object* v_h__5_1415_){
_start:
{
switch(v_x_1410_)
{
case 0:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
lean_dec(v_h__5_1415_);
lean_dec(v_h__4_1414_);
lean_dec(v_h__3_1413_);
lean_dec(v_h__2_1412_);
v___x_1416_ = lean_box(0);
v___x_1417_ = lean_apply_1(v_h__1_1411_, v___x_1416_);
return v___x_1417_;
}
case 1:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
lean_dec(v_h__5_1415_);
lean_dec(v_h__4_1414_);
lean_dec(v_h__3_1413_);
lean_dec(v_h__1_1411_);
v___x_1418_ = lean_box(0);
v___x_1419_ = lean_apply_1(v_h__2_1412_, v___x_1418_);
return v___x_1419_;
}
case 2:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; 
lean_dec(v_h__5_1415_);
lean_dec(v_h__4_1414_);
lean_dec(v_h__2_1412_);
lean_dec(v_h__1_1411_);
v___x_1420_ = lean_box(0);
v___x_1421_ = lean_apply_1(v_h__3_1413_, v___x_1420_);
return v___x_1421_;
}
case 3:
{
lean_object* v___x_1422_; lean_object* v___x_1423_; 
lean_dec(v_h__5_1415_);
lean_dec(v_h__3_1413_);
lean_dec(v_h__2_1412_);
lean_dec(v_h__1_1411_);
v___x_1422_ = lean_box(0);
v___x_1423_ = lean_apply_1(v_h__4_1414_, v___x_1422_);
return v___x_1423_;
}
default: 
{
lean_object* v___x_1424_; lean_object* v___x_1425_; 
lean_dec(v_h__4_1414_);
lean_dec(v_h__3_1413_);
lean_dec(v_h__2_1412_);
lean_dec(v_h__1_1411_);
v___x_1424_ = lean_box(0);
v___x_1425_ = lean_apply_1(v_h__5_1415_, v___x_1424_);
return v___x_1425_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize_match__1_splitter___boxed(lean_object* v_motive_1426_, lean_object* v_x_1427_, lean_object* v_h__1_1428_, lean_object* v_h__2_1429_, lean_object* v_h__3_1430_, lean_object* v_h__4_1431_, lean_object* v_h__5_1432_){
_start:
{
uint8_t v_x_74__boxed_1433_; lean_object* v_res_1434_; 
v_x_74__boxed_1433_ = lean_unbox(v_x_1427_);
v_res_1434_ = l___private_Init_Data_String_Decode_0__ByteArray_utf8DecodeChar_x3f_FirstByte_utf8ByteSize_match__1_splitter(v_motive_1426_, v_x_74__boxed_1433_, v_h__1_1428_, v_h__2_1429_, v_h__3_1430_, v_h__4_1431_, v_h__5_1432_);
return v_res_1434_;
}
}
lean_object* runtime_initialize_Init_Data_Char_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ByteArray_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ByteArray_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_BitVec_Bootstrap(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_BitVec_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_MinMax(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Bitwise(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_String_Decode(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Char_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ByteArray_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ByteArray_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_BitVec_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_BitVec_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_MinMax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Bitwise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_String_Decode(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Char_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_ByteArray_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_ByteArray_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_BitVec_Bootstrap(uint8_t builtin);
lean_object* initialize_Init_Data_BitVec_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_MinMax(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Bitwise(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_String_Decode(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Char_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ByteArray_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ByteArray_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_BitVec_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_BitVec_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_MinMax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Bitwise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Decode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_String_Decode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_String_Decode(builtin);
}
#ifdef __cplusplus
}
#endif
