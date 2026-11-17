// Lean compiler output
// Module: Init.Data.Float.Model.Unpacked.Operations.Sqrt
// Imports: public import Init.Data.Float.Model.Unpacked.Round public import Init.Data.Nat.Sqrt.Basic
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* lean_nat_shiftl(lean_object*, lean_object*);
lean_object* l_Nat_sqrt(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Float_Model_totalExponent(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Float_Model_Format_targetExponent(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Float_Model_UnpackedFloat_roundWithAccuracy(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Float_Model_UnpackedFloat_sqrtCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Float_Model_UnpackedFloat_sqrtCore___closed__0;
static const lean_ctor_object l_Float_Model_UnpackedFloat_sqrtCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Float_Model_UnpackedFloat_sqrtCore___closed__1 = (const lean_object*)&l_Float_Model_UnpackedFloat_sqrtCore___closed__1_value;
static const lean_ctor_object l_Float_Model_UnpackedFloat_sqrtCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Float_Model_UnpackedFloat_sqrtCore___closed__2 = (const lean_object*)&l_Float_Model_UnpackedFloat_sqrtCore___closed__2_value;
static lean_once_cell_t l_Float_Model_UnpackedFloat_sqrtCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Float_Model_UnpackedFloat_sqrtCore___closed__3;
LEAN_EXPORT lean_object* l_Float_Model_UnpackedFloat_sqrtCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Float_Model_UnpackedFloat_sqrtCore___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Float_Model_UnpackedFloat_sqrt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Float_Model_UnpackedFloat_sqrt___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Float_Model_UnpackedFloat_sqrtCore___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(2u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Float_Model_UnpackedFloat_sqrtCore___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_unsigned_to_nat(1u);
v___x_8_ = lean_nat_to_int(v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Float_Model_UnpackedFloat_sqrtCore(lean_object* v_spec_9_, lean_object* v_m_10_, lean_object* v_e_11_){
_start:
{
lean_object* v___y_13_; lean_object* v___y_14_; lean_object* v___y_15_; lean_object* v___x_18_; lean_object* v___y_20_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_18_ = lean_obj_once(&l_Float_Model_UnpackedFloat_sqrtCore___closed__0, &l_Float_Model_UnpackedFloat_sqrtCore___closed__0_once, _init_l_Float_Model_UnpackedFloat_sqrtCore___closed__0);
v___x_34_ = lean_int_ediv(v_e_11_, v___x_18_);
v___x_35_ = l_Float_Model_totalExponent(v_m_10_, v_e_11_);
v___x_36_ = lean_obj_once(&l_Float_Model_UnpackedFloat_sqrtCore___closed__3, &l_Float_Model_UnpackedFloat_sqrtCore___closed__3_once, _init_l_Float_Model_UnpackedFloat_sqrtCore___closed__3);
v___x_37_ = lean_int_add(v___x_35_, v___x_36_);
lean_dec(v___x_35_);
v___x_38_ = lean_int_ediv(v___x_37_, v___x_18_);
lean_dec(v___x_37_);
v___x_39_ = l_Float_Model_Format_targetExponent(v_spec_9_, v___x_38_);
lean_dec(v___x_38_);
v___x_40_ = lean_int_dec_le(v___x_34_, v___x_39_);
if (v___x_40_ == 0)
{
lean_dec(v___x_34_);
v___y_20_ = v___x_39_;
goto v___jp_19_;
}
else
{
lean_dec(v___x_39_);
v___y_20_ = v___x_34_;
goto v___jp_19_;
}
v___jp_12_:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
lean_inc(v___y_15_);
v___x_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_16_, 0, v___y_14_);
lean_ctor_set(v___x_16_, 1, v___y_15_);
v___x_17_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_17_, 0, v___y_13_);
lean_ctor_set(v___x_17_, 1, v___x_16_);
return v___x_17_;
}
v___jp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v_shiftAmount_23_; lean_object* v_m_24_; lean_object* v_root_25_; lean_object* v___x_26_; lean_object* v_rem_27_; lean_object* v___x_28_; uint8_t v___x_29_; 
v___x_21_ = lean_int_mul(v___x_18_, v___y_20_);
v___x_22_ = lean_int_sub(v_e_11_, v___x_21_);
lean_dec(v___x_21_);
v_shiftAmount_23_ = l_Int_toNat(v___x_22_);
lean_dec(v___x_22_);
v_m_24_ = lean_nat_shiftl(v_m_10_, v_shiftAmount_23_);
lean_dec(v_shiftAmount_23_);
v_root_25_ = l_Nat_sqrt(v_m_24_);
v___x_26_ = lean_nat_mul(v_root_25_, v_root_25_);
v_rem_27_ = lean_nat_sub(v_m_24_, v___x_26_);
lean_dec(v___x_26_);
lean_dec(v_m_24_);
v___x_28_ = lean_unsigned_to_nat(0u);
v___x_29_ = lean_nat_dec_eq(v_rem_27_, v___x_28_);
if (v___x_29_ == 0)
{
uint8_t v___x_30_; 
v___x_30_ = lean_nat_dec_le(v_rem_27_, v_root_25_);
lean_dec(v_rem_27_);
if (v___x_30_ == 0)
{
lean_object* v___x_31_; 
v___x_31_ = ((lean_object*)(l_Float_Model_UnpackedFloat_sqrtCore___closed__1));
v___y_13_ = v_root_25_;
v___y_14_ = v___y_20_;
v___y_15_ = v___x_31_;
goto v___jp_12_;
}
else
{
lean_object* v___x_32_; 
v___x_32_ = ((lean_object*)(l_Float_Model_UnpackedFloat_sqrtCore___closed__2));
v___y_13_ = v_root_25_;
v___y_14_ = v___y_20_;
v___y_15_ = v___x_32_;
goto v___jp_12_;
}
}
else
{
lean_object* v___x_33_; 
lean_dec(v_rem_27_);
v___x_33_ = lean_box(0);
v___y_13_ = v_root_25_;
v___y_14_ = v___y_20_;
v___y_15_ = v___x_33_;
goto v___jp_12_;
}
}
}
}
LEAN_EXPORT lean_object* l_Float_Model_UnpackedFloat_sqrtCore___boxed(lean_object* v_spec_41_, lean_object* v_m_42_, lean_object* v_e_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Float_Model_UnpackedFloat_sqrtCore(v_spec_41_, v_m_42_, v_e_43_);
lean_dec(v_e_43_);
lean_dec(v_m_42_);
lean_dec_ref(v_spec_41_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Float_Model_UnpackedFloat_sqrt(lean_object* v_spec_45_, lean_object* v_x_46_){
_start:
{
switch(lean_obj_tag(v_x_46_))
{
case 0:
{
uint8_t v_sign_47_; 
v_sign_47_ = lean_ctor_get_uint8(v_x_46_, 0);
if (v_sign_47_ == 0)
{
lean_object* v___x_48_; 
v___x_48_ = lean_box(1);
return v___x_48_;
}
else
{
lean_inc_ref(v_x_46_);
return v_x_46_;
}
}
case 3:
{
uint8_t v_sign_49_; 
v_sign_49_ = lean_ctor_get_uint8(v_x_46_, sizeof(void*)*2);
if (v_sign_49_ == 0)
{
lean_object* v___x_50_; 
v___x_50_ = lean_box(1);
return v___x_50_;
}
else
{
lean_object* v_mantissa_51_; lean_object* v_exponent_52_; lean_object* v___x_53_; lean_object* v_snd_54_; lean_object* v_fst_55_; lean_object* v_fst_56_; lean_object* v_snd_57_; lean_object* v___x_58_; 
v_mantissa_51_ = lean_ctor_get(v_x_46_, 0);
v_exponent_52_ = lean_ctor_get(v_x_46_, 1);
v___x_53_ = l_Float_Model_UnpackedFloat_sqrtCore(v_spec_45_, v_mantissa_51_, v_exponent_52_);
v_snd_54_ = lean_ctor_get(v___x_53_, 1);
lean_inc(v_snd_54_);
v_fst_55_ = lean_ctor_get(v___x_53_, 0);
lean_inc(v_fst_55_);
lean_dec_ref(v___x_53_);
v_fst_56_ = lean_ctor_get(v_snd_54_, 0);
lean_inc(v_fst_56_);
v_snd_57_ = lean_ctor_get(v_snd_54_, 1);
lean_inc(v_snd_57_);
lean_dec(v_snd_54_);
v___x_58_ = l_Float_Model_UnpackedFloat_roundWithAccuracy(v_spec_45_, v_sign_49_, v_fst_55_, v_fst_56_, v_snd_57_);
lean_dec(v_snd_57_);
lean_dec(v_fst_56_);
return v___x_58_;
}
}
default: 
{
lean_inc(v_x_46_);
return v_x_46_;
}
}
}
}
LEAN_EXPORT lean_object* l_Float_Model_UnpackedFloat_sqrt___boxed(lean_object* v_spec_59_, lean_object* v_x_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Float_Model_UnpackedFloat_sqrt(v_spec_59_, v_x_60_);
lean_dec(v_x_60_);
lean_dec_ref(v_spec_59_);
return v_res_61_;
}
}
lean_object* runtime_initialize_Init_Data_Float_Model_Unpacked_Round(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Sqrt_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Float_Model_Unpacked_Operations_Sqrt(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Float_Model_Unpacked_Round(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Sqrt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Float_Model_Unpacked_Operations_Sqrt(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Float_Model_Unpacked_Round(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Sqrt_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Float_Model_Unpacked_Operations_Sqrt(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Float_Model_Unpacked_Round(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Sqrt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Float_Model_Unpacked_Operations_Sqrt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Float_Model_Unpacked_Operations_Sqrt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Float_Model_Unpacked_Operations_Sqrt(builtin);
}
#ifdef __cplusplus
}
#endif
