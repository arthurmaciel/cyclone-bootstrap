/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2019 Justin Ethier
 ** Version 0.9.10 
 **
 **/

#define closcall1(td, clo,a1) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 0, (closure)(a1), clo); \
} else { \
   ((clo)->fn)(td, 1, clo,a1);\
}
#define return_closcall1(td, clo,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else {\
     closcall1(td, (closure) (clo),a1); \
     return;\
 } \
}

#define continue_or_gc1(td, clo,a1) { \
 char *top = alloca(sizeof(char)); \
 if (stack_overflow(top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else {\
     continue;\
 } \
}

#define return_direct1(td, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 1); \
     return; \
 } else { \
     (_fn)(td, 1, (closure)_fn,a1); \
 }}

#define return_direct_with_clo1(td, clo, _fn,a1) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[1]; buf[0] = a1;\
     GC(td, clo, buf, 1); \
     return; \
 } else { \
     (_fn)(td, 1, (closure)(clo),a1); \
 }}

#define closcall2(td, clo,a1,a2) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 1, (closure)(a1), clo,a2); \
} else { \
   ((clo)->fn)(td, 2, clo,a1,a2);\
}
#define return_closcall2(td, clo,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else {\
     closcall2(td, (closure) (clo),a1,a2); \
     return;\
 } \
}

#define continue_or_gc2(td, clo,a1,a2) { \
 char *top = alloca(sizeof(char)); \
 if (stack_overflow(top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else {\
     continue;\
 } \
}

#define return_direct2(td, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 2); \
     return; \
 } else { \
     (_fn)(td, 2, (closure)_fn,a1,a2); \
 }}

#define return_direct_with_clo2(td, clo, _fn,a1,a2) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[2]; buf[0] = a1;buf[1] = a2;\
     GC(td, clo, buf, 2); \
     return; \
 } else { \
     (_fn)(td, 2, (closure)(clo),a1,a2); \
 }}

#define closcall3(td, clo,a1,a2,a3) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 2, (closure)(a1), clo,a2,a3); \
} else { \
   ((clo)->fn)(td, 3, clo,a1,a2,a3);\
}
#define return_closcall3(td, clo,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(td, clo, buf, 3); \
     return; \
 } else {\
     closcall3(td, (closure) (clo),a1,a2,a3); \
     return;\
 } \
}

#define continue_or_gc3(td, clo,a1,a2,a3) { \
 char *top = alloca(sizeof(char)); \
 if (stack_overflow(top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(td, clo, buf, 3); \
     return; \
 } else {\
     continue;\
 } \
}

#define return_direct3(td, _fn,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 3); \
     return; \
 } else { \
     (_fn)(td, 3, (closure)_fn,a1,a2,a3); \
 }}

#define return_direct_with_clo3(td, clo, _fn,a1,a2,a3) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[3]; buf[0] = a1;buf[1] = a2;buf[2] = a3;\
     GC(td, clo, buf, 3); \
     return; \
 } else { \
     (_fn)(td, 3, (closure)(clo),a1,a2,a3); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemecomplex_scheme_complex = NULL;
object __glo__75make_91rect_scheme_complex = NULL;
object __glo__75imag_91part_scheme_complex = NULL;
object __glo__75real_91part_scheme_complex = NULL;
object __glo_make_91rectangular_scheme_complex = NULL;
object __glo_make_91polar_scheme_complex = NULL;
object __glo_angle_scheme_complex = NULL;
object __glo_magnitude_scheme_complex = NULL;
object __glo_imag_91part_scheme_complex = NULL;
object __glo_real_91part_scheme_complex = NULL;
extern object __glo_member_scheme_base;
extern object __glo_assoc_scheme_base;
extern object __glo_cons_91source_scheme_base;
extern object __glo_syntax_91rules_scheme_base;
extern object __glo_letrec_85_scheme_base;
extern object __glo_guard_scheme_base;
extern object __glo_guard_91aux_scheme_base;
extern object __glo_define_91record_91type_scheme_base;
extern object __glo_record_127_scheme_base;
extern object __glo_is_91a_127_scheme_base;
extern object __glo_register_91simple_91type_scheme_base;
extern object __glo_make_91type_91predicate_scheme_base;
extern object __glo_make_91constructor_scheme_base;
extern object __glo_make_91constructor_95args_scheme_base;
extern object __glo_make_91getter_scheme_base;
extern object __glo_make_91setter_scheme_base;
extern object __glo_slot_91ref_scheme_base;
extern object __glo_slot_91set_67_scheme_base;
extern object __glo_type_91slot_91offset_scheme_base;
extern object __glo_receive_scheme_base;
extern object __glo_abs_scheme_base;
extern object __glo_max_scheme_base;
extern object __glo_min_scheme_base;
extern object __glo_modulo_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_even_127_scheme_base;
extern object __glo_exact_91integer_127_scheme_base;
extern object __glo_exact_91integer_91sqrt_scheme_base;
extern object __glo_exact_127_scheme_base;
extern object __glo_inexact_127_scheme_base;
extern object __glo_odd_127_scheme_base;
extern object __glo_complex_127_scheme_base;
extern object __glo_rational_127_scheme_base;
extern object __glo_bignum_127_scheme_base;
extern object __glo_gcd_scheme_base;
extern object __glo_lcm_scheme_base;
extern object __glo_quotient_scheme_base;
extern object __glo_remainder_scheme_base;
extern object __glo_truncate_91quotient_scheme_base;
extern object __glo_truncate_91remainder_scheme_base;
extern object __glo_truncate_95_scheme_base;
extern object __glo_floor_91quotient_scheme_base;
extern object __glo_floor_91remainder_scheme_base;
extern object __glo_floor_95_scheme_base;
extern object __glo_square_scheme_base;
extern object __glo_expt_scheme_base;
extern object __glo_call_91with_91current_91continuation_scheme_base;
extern object __glo_call_95cc_scheme_base;
extern object __glo_call_91with_91values_scheme_base;
extern object __glo_dynamic_91wind_scheme_base;
extern object __glo_values_scheme_base;
extern object __glo_char_123_127_scheme_base;
extern object __glo_char_121_127_scheme_base;
extern object __glo_char_125_127_scheme_base;
extern object __glo_char_121_123_127_scheme_base;
extern object __glo_char_125_123_127_scheme_base;
extern object __glo_string_123_127_scheme_base;
extern object __glo_string_121_127_scheme_base;
extern object __glo_string_121_123_127_scheme_base;
extern object __glo_string_125_127_scheme_base;
extern object __glo_string_125_123_127_scheme_base;
extern object __glo_foldl_scheme_base;
extern object __glo_foldr_scheme_base;
extern object __glo_not_scheme_base;
extern object __glo_list_127_scheme_base;
extern object __glo_zero_127_scheme_base;
extern object __glo_positive_127_scheme_base;
extern object __glo_negative_127_scheme_base;
extern object __glo_append_scheme_base;
extern object __glo__list_scheme_base;
extern object __glo_make_91list_scheme_base;
extern object __glo_list_91copy_scheme_base;
extern object __glo_map_scheme_base;
extern object __glo_Cyc_91map_91loop_911_scheme_base;
extern object __glo_Cyc_91for_91each_91loop_911_scheme_base;
extern object __glo_for_91each_scheme_base;
extern object __glo_list_91tail_scheme_base;
extern object __glo_list_91ref_scheme_base;
extern object __glo_list_91set_67_scheme_base;
extern object __glo_reverse_scheme_base;
extern object __glo_boolean_123_127_scheme_base;
extern object __glo_symbol_123_127_scheme_base;
extern object __glo_Cyc_91obj_123_127_scheme_base;
extern object __glo_vector_scheme_base;
extern object __glo_vector_91append_scheme_base;
extern object __glo_vector_91copy_scheme_base;
extern object __glo_vector_91copy_67_scheme_base;
extern object __glo_vector_91fill_67_scheme_base;
extern object __glo_vector_91_125list_scheme_base;
extern object __glo_vector_91_125string_scheme_base;
extern object __glo_vector_91map_scheme_base;
extern object __glo_vector_91for_91each_scheme_base;
extern object __glo_make_91string_scheme_base;
extern object __glo_string_scheme_base;
extern object __glo_string_91copy_scheme_base;
extern object __glo_string_91copy_67_scheme_base;
extern object __glo_string_91fill_67_scheme_base;
extern object __glo_string_91_125list_scheme_base;
extern object __glo_string_91_125vector_scheme_base;
extern object __glo_string_91map_scheme_base;
extern object __glo_string_91for_91each_scheme_base;
extern object __glo_make_91parameter_scheme_base;
extern object __glo_current_91output_91port_scheme_base;
extern object __glo_current_91input_91port_scheme_base;
extern object __glo_current_91error_91port_scheme_base;
extern object __glo_call_91with_91port_scheme_base;
extern object __glo_error_91object_127_scheme_base;
extern object __glo_error_91object_91message_scheme_base;
extern object __glo_error_91object_91irritants_scheme_base;
extern object __glo_error_scheme_base;
extern object __glo_raise_scheme_base;
extern object __glo_raise_91continuable_scheme_base;
extern object __glo_with_91handler_scheme_base;
extern object __glo_with_91exception_91handler_scheme_base;
extern object __glo_Cyc_91add_91exception_91handler_scheme_base;
extern object __glo_Cyc_91remove_91exception_91handler_scheme_base;
extern object __glo_newline_scheme_base;
extern object __glo_write_91char_scheme_base;
extern object __glo_write_91string_scheme_base;
extern object __glo_flush_91output_91port_scheme_base;
extern object __glo_peek_91char_scheme_base;
extern object __glo_read_91char_scheme_base;
extern object __glo_read_91line_scheme_base;
extern object __glo_read_91string_scheme_base;
extern object __glo_input_91port_127_scheme_base;
extern object __glo_output_91port_127_scheme_base;
extern object __glo_input_91port_91open_127_scheme_base;
extern object __glo_output_91port_91open_127_scheme_base;
extern object __glo_get_91output_91string_scheme_base;
extern object __glo_open_91output_91string_scheme_base;
extern object __glo_open_91input_91string_scheme_base;
extern object __glo_get_91output_91bytevector_scheme_base;
extern object __glo_open_91input_91bytevector_scheme_base;
extern object __glo_open_91output_91bytevector_scheme_base;
extern object __glo_features_scheme_base;
extern object __glo_Cyc_91add_91feature_67_scheme_base;
extern object __glo_Cyc_91version_scheme_base;
extern object __glo_any_scheme_base;
extern object __glo_every_scheme_base;
extern object __glo_and_scheme_base;
extern object __glo_or_scheme_base;
extern object __glo_let_scheme_base;
extern object __glo_let_85_scheme_base;
extern object __glo_letrec_scheme_base;
extern object __glo_let_85_91values_scheme_base;
extern object __glo_let_91values_scheme_base;
extern object __glo_begin_scheme_base;
extern object __glo__case_scheme_base;
extern object __glo_cond_scheme_base;
extern object __glo_cond_91expand_scheme_base;
extern object __glo__do_scheme_base;
extern object __glo_when_scheme_base;
extern object __glo_unless_scheme_base;
extern object __glo_quasiquote_scheme_base;
extern object __glo_floor_scheme_base;
extern object __glo_ceiling_scheme_base;
extern object __glo_truncate_scheme_base;
extern object __glo_round_scheme_base;
extern object __glo_exact_scheme_base;
extern object __glo_inexact_scheme_base;
extern object __glo_eof_91object_scheme_base;
extern object __glo_syntax_91error_scheme_base;
extern object __glo_bytevector_91copy_scheme_base;
extern object __glo_bytevector_91copy_67_scheme_base;
extern object __glo_utf8_91_125string_scheme_base;
extern object __glo_string_91_125utf8_scheme_base;
extern object __glo_denominator_scheme_base;
extern object __glo_numerator_scheme_base;
extern object __glo_parameterize_scheme_base;
extern object __glo_peek_91u8_scheme_base;
extern object __glo_read_91u8_scheme_base;
extern object __glo_write_91u8_scheme_base;
extern object __glo_acos_scheme_inexact;
extern object __glo_asin_scheme_inexact;
extern object __glo_atan_scheme_inexact;
extern object __glo_cos_scheme_inexact;
extern object __glo_exp_scheme_inexact;
extern object __glo_finite_127_scheme_inexact;
extern object __glo_infinite_127_scheme_inexact;
extern object __glo_log_scheme_inexact;
extern object __glo_nan_127_scheme_inexact;
extern object __glo_sin_scheme_inexact;
extern object __glo_sqrt_scheme_inexact;
extern object __glo_tan_scheme_inexact;
extern object __glo_string_123_127_191_191inline_191_191_scheme_base;
extern object __glo_string_121_127_191_191inline_191_191_scheme_base;
extern object __glo_string_121_123_127_191_191inline_191_191_scheme_base;
extern object __glo_string_125_127_191_191inline_191_191_scheme_base;
extern object __glo_string_125_123_127_191_191inline_191_191_scheme_base;
extern object __glo_not_191_191inline_191_191_scheme_base;
extern object __glo_list_127_191_191inline_191_191_scheme_base;
extern object __glo_zero_127_191_191inline_191_191_scheme_base;
extern object __glo_positive_127_191_191inline_191_191_scheme_base;
extern object __glo_negative_127_191_191inline_191_191_scheme_base;
extern object __glo_floor_191_191inline_191_191_scheme_base;
extern object __glo_ceiling_191_191inline_191_191_scheme_base;
extern object __glo_truncate_191_191inline_191_191_scheme_base;
extern object __glo_round_191_191inline_191_191_scheme_base;
extern object __glo_inexact_191_191inline_191_191_scheme_base;
extern object __glo_sqrt_191_191inline_191_191_scheme_base;
extern object __glo_exact_91integer_127_191_191inline_191_191_scheme_base;
extern object __glo_exact_127_191_191inline_191_191_scheme_base;
extern object __glo_complex_127_191_191inline_191_191_scheme_base;
extern object __glo_denominator_191_191inline_191_191_scheme_base;
extern object __glo_numerator_191_191inline_191_191_scheme_base;
extern object __glo_quotient_191_191inline_191_191_scheme_base;
extern object __glo_square_191_191inline_191_191_scheme_base;
extern object __glo_eof_91object_191_191inline_191_191_scheme_base;
#include "cyclone/runtime.h"
static void __lambda_17(void *data, int argc, closure _,object k_7352) ;
static void __lambda_20(void *data, int argc, closure _, object k, object r, object i) ;
static void __lambda_19(void *data, int argc, closure _, object k, object z) ;
static void __lambda_18(void *data, int argc, closure _, object k, object z) ;
static void __lambda_16(void *data, int argc, closure _,object k_7349, object x_737_7315, object y_738_7316) ;
static void __lambda_13(void *data, int argc, closure _,object k_7342, object r_735_7313, object phi_736_7314) ;
static void __lambda_14(void *data, int argc, object self_7361, object r_7346) ;
static void __lambda_15(void *data, int argc, object self_7362, object r_7345) ;
static void __lambda_10(void *data, int argc, closure _,object k_7337, object z_734_7312) ;
static void __lambda_11(void *data, int argc, object self_7359, object r_7338) ;
static void __lambda_12(void *data, int argc, object self_7360, object r_7339) ;
static void __lambda_5(void *data, int argc, closure _,object k_7327, object z_733_7311) ;
static void __lambda_6(void *data, int argc, object self_7355, object r_7333) ;
static void __lambda_7(void *data, int argc, object self_7356, object r_7334) ;
static void __lambda_8(void *data, int argc, object self_7357, object r_7331) ;
static void __lambda_9(void *data, int argc, object self_7358, object r_7332) ;
static void __lambda_3(void *data, int argc, closure _,object k_7323, object x_732_7310) ;
static void __lambda_4(void *data, int argc, object self_7354, object r_7324) ;
static void __lambda_1(void *data, int argc, closure _,object k_7319, object x_731_739) ;
static void __lambda_2(void *data, int argc, object self_7353, object r_7320) ;

static void __lambda_17(void *data, int argc, closure _,object k_7352) {
  Cyc_st_add(data, "scheme/complex.sld:lib-init:schemecomplex");
return_closcall1(data,  k_7352,  obj_int2obj(0));; 
}

static void __lambda_20(void *data, int argc, closure _, object k, object r, object i) { Cyc_check_num(data, r);
        Cyc_check_num(data, i);
        Cyc_make_rectangular(data, k, r, i);  }
static void __lambda_19(void *data, int argc, closure _, object k, object z) { make_double(d, cimag(complex_num_value(z)));
        return_closcall1(data, k, &d);  }
static void __lambda_18(void *data, int argc, closure _, object k, object z) { make_double(d, creal(complex_num_value(z)));
        return_closcall1(data, k, &d);  }
static void __lambda_16(void *data, int argc, closure _,object k_7349, object x_737_7315, object y_738_7316) {
  Cyc_st_add(data, "scheme/complex.sld:make-rectangular");
return_closcall3(data,  __glo__75make_91rect_scheme_complex,  k_7349, x_737_7315, y_738_7316);; 
}

static void __lambda_13(void *data, int argc, closure _,object k_7342, object r_735_7313, object phi_736_7314) {
  Cyc_st_add(data, "scheme/complex.sld:make-polar");

closureN_type c_73126;
c_73126.hdr.mark = gc_color_red;
 c_73126.hdr.grayed = 0;
c_73126.tag = closureN_tag;
 c_73126.fn = (function_type)__lambda_14;
c_73126.num_args = 1;
c_73126.num_elements = 3;
c_73126.elements = (object *)alloca(sizeof(object) * 3);
c_73126.elements[0] = k_7342;
c_73126.elements[1] = phi_736_7314;
c_73126.elements[2] = r_735_7313;

return_closcall2(data,  __glo_cos_scheme_inexact,  &c_73126, phi_736_7314);; 
}

static void __lambda_14(void *data, int argc, object self_7361, object r_7346) {
  
closureN_type c_73128;
c_73128.hdr.mark = gc_color_red;
 c_73128.hdr.grayed = 0;
c_73128.tag = closureN_tag;
 c_73128.fn = (function_type)__lambda_15;
c_73128.num_args = 1;
c_73128.num_elements = 3;
c_73128.elements = (object *)alloca(sizeof(object) * 3);
c_73128.elements[0] = ((closureN)self_7361)->elements[0];
c_73128.elements[1] = r_7346;
c_73128.elements[2] = ((closureN)self_7361)->elements[2];

return_closcall2(data,  __glo_sin_scheme_inexact,  &c_73128, ((closureN)self_7361)->elements[1]);; 
}

static void __lambda_15(void *data, int argc, object self_7362, object r_7345) {
  
complex_num_type local_73133; 

complex_num_type local_73138; 
return_closcall3(data,  __glo__75make_91rect_scheme_complex,  ((closureN)self_7362)->elements[0], Cyc_fast_mul(data,&local_73133, ((closureN)self_7362)->elements[2], ((closureN)self_7362)->elements[1]), Cyc_fast_mul(data,&local_73138, ((closureN)self_7362)->elements[2], r_7345));; 
}

static void __lambda_10(void *data, int argc, closure _,object k_7337, object z_734_7312) {
  Cyc_st_add(data, "scheme/complex.sld:angle");

closureN_type c_73117;
c_73117.hdr.mark = gc_color_red;
 c_73117.hdr.grayed = 0;
c_73117.tag = closureN_tag;
 c_73117.fn = (function_type)__lambda_11;
c_73117.num_args = 1;
c_73117.num_elements = 2;
c_73117.elements = (object *)alloca(sizeof(object) * 2);
c_73117.elements[0] = k_7337;
c_73117.elements[1] = z_734_7312;

return_closcall2(data,  __glo_imag_91part_scheme_complex,  &c_73117, z_734_7312);; 
}

static void __lambda_11(void *data, int argc, object self_7359, object r_7338) {
  
closureN_type c_73119;
c_73119.hdr.mark = gc_color_red;
 c_73119.hdr.grayed = 0;
c_73119.tag = closureN_tag;
 c_73119.fn = (function_type)__lambda_12;
c_73119.num_args = 1;
c_73119.num_elements = 2;
c_73119.elements = (object *)alloca(sizeof(object) * 2);
c_73119.elements[0] = ((closureN)self_7359)->elements[0];
c_73119.elements[1] = r_7338;

return_closcall2(data,  __glo_real_91part_scheme_complex,  &c_73119, ((closureN)self_7359)->elements[1]);; 
}

static void __lambda_12(void *data, int argc, object self_7360, object r_7339) {
  return_closcall3(data,  __glo_atan_scheme_inexact,  ((closureN)self_7360)->elements[0], ((closureN)self_7360)->elements[1], r_7339);; 
}

static void __lambda_5(void *data, int argc, closure _,object k_7327, object z_733_7311) {
  Cyc_st_add(data, "scheme/complex.sld:magnitude");

closureN_type c_7388;
c_7388.hdr.mark = gc_color_red;
 c_7388.hdr.grayed = 0;
c_7388.tag = closureN_tag;
 c_7388.fn = (function_type)__lambda_6;
c_7388.num_args = 1;
c_7388.num_elements = 2;
c_7388.elements = (object *)alloca(sizeof(object) * 2);
c_7388.elements[0] = k_7327;
c_7388.elements[1] = z_733_7311;

return_closcall2(data,  __glo_real_91part_scheme_complex,  &c_7388, z_733_7311);; 
}

static void __lambda_6(void *data, int argc, object self_7355, object r_7333) {
  
closureN_type c_7390;
c_7390.hdr.mark = gc_color_red;
 c_7390.hdr.grayed = 0;
c_7390.tag = closureN_tag;
 c_7390.fn = (function_type)__lambda_7;
c_7390.num_args = 1;
c_7390.num_elements = 3;
c_7390.elements = (object *)alloca(sizeof(object) * 3);
c_7390.elements[0] = ((closureN)self_7355)->elements[0];
c_7390.elements[1] = r_7333;
c_7390.elements[2] = ((closureN)self_7355)->elements[1];

return_closcall2(data,  __glo_real_91part_scheme_complex,  &c_7390, ((closureN)self_7355)->elements[1]);; 
}

static void __lambda_7(void *data, int argc, object self_7356, object r_7334) {
  
closureN_type c_7392;
c_7392.hdr.mark = gc_color_red;
 c_7392.hdr.grayed = 0;
c_7392.tag = closureN_tag;
 c_7392.fn = (function_type)__lambda_8;
c_7392.num_args = 1;
c_7392.num_elements = 4;
c_7392.elements = (object *)alloca(sizeof(object) * 4);
c_7392.elements[0] = ((closureN)self_7356)->elements[0];
c_7392.elements[1] = ((closureN)self_7356)->elements[1];
c_7392.elements[2] = r_7334;
c_7392.elements[3] = ((closureN)self_7356)->elements[2];

return_closcall2(data,  __glo_imag_91part_scheme_complex,  &c_7392, ((closureN)self_7356)->elements[2]);; 
}

static void __lambda_8(void *data, int argc, object self_7357, object r_7331) {
  
closureN_type c_7394;
c_7394.hdr.mark = gc_color_red;
 c_7394.hdr.grayed = 0;
c_7394.tag = closureN_tag;
 c_7394.fn = (function_type)__lambda_9;
c_7394.num_args = 1;
c_7394.num_elements = 4;
c_7394.elements = (object *)alloca(sizeof(object) * 4);
c_7394.elements[0] = ((closureN)self_7357)->elements[0];
c_7394.elements[1] = r_7331;
c_7394.elements[2] = ((closureN)self_7357)->elements[1];
c_7394.elements[3] = ((closureN)self_7357)->elements[2];

return_closcall2(data,  __glo_imag_91part_scheme_complex,  &c_7394, ((closureN)self_7357)->elements[3]);; 
}

static void __lambda_9(void *data, int argc, object self_7358, object r_7332) {
  
complex_num_type local_7399; 

complex_num_type local_73102; 

complex_num_type local_73105; 

complex_num_type local_73110; 
return_closcall1(data,  ((closureN)self_7358)->elements[0],  ((inline_function_type)
                   ((closure)__glo_sqrt_191_191inline_191_191_scheme_base)->fn)(data,&local_7399, Cyc_fast_sum(data,&local_73102, Cyc_fast_mul(data,&local_73105, ((closureN)self_7358)->elements[2], ((closureN)self_7358)->elements[3]), Cyc_fast_mul(data,&local_73110, ((closureN)self_7358)->elements[1], r_7332))));; 
}

static void __lambda_3(void *data, int argc, closure _,object k_7323, object x_732_7310) {
  Cyc_st_add(data, "scheme/complex.sld:imag-part");

closureN_type c_7377;
c_7377.hdr.mark = gc_color_red;
 c_7377.hdr.grayed = 0;
c_7377.tag = closureN_tag;
 c_7377.fn = (function_type)__lambda_4;
c_7377.num_args = 1;
c_7377.num_elements = 2;
c_7377.elements = (object *)alloca(sizeof(object) * 2);
c_7377.elements[0] = k_7323;
c_7377.elements[1] = x_732_7310;


complex_num_type local_7385; 
return_direct_with_clo1(data,(closure)&c_7377,__lambda_4,  ((inline_function_type)
                   ((closure)__glo_complex_127_191_191inline_191_191_scheme_base)->fn)(data,&local_7385, x_732_7310));; 
}

static void __lambda_4(void *data, int argc, object self_7354, object r_7324) {
  if( (boolean_f != r_7324) ){ 
  return_closcall2(data,  __glo__75imag_91part_scheme_complex,  ((closureN)self_7354)->elements[0], ((closureN)self_7354)->elements[1]);
} else { 
  return_closcall1(data,  ((closureN)self_7354)->elements[0],  obj_int2obj(0));}
;; 
}

static void __lambda_1(void *data, int argc, closure _,object k_7319, object x_731_739) {
  Cyc_st_add(data, "scheme/complex.sld:real-part");

closureN_type c_7365;
c_7365.hdr.mark = gc_color_red;
 c_7365.hdr.grayed = 0;
c_7365.tag = closureN_tag;
 c_7365.fn = (function_type)__lambda_2;
c_7365.num_args = 1;
c_7365.num_elements = 2;
c_7365.elements = (object *)alloca(sizeof(object) * 2);
c_7365.elements[0] = k_7319;
c_7365.elements[1] = x_731_739;


complex_num_type local_7374; 
return_direct_with_clo1(data,(closure)&c_7365,__lambda_2,  ((inline_function_type)
                   ((closure)__glo_complex_127_191_191inline_191_191_scheme_base)->fn)(data,&local_7374, x_731_739));; 
}

static void __lambda_2(void *data, int argc, object self_7353, object r_7320) {
  if( (boolean_f != r_7320) ){ 
  return_closcall2(data,  __glo__75real_91part_scheme_complex,  ((closureN)self_7353)->elements[0], ((closureN)self_7353)->elements[1]);
} else { 
  return_closcall1(data,  ((closureN)self_7353)->elements[0],  ((closureN)self_7353)->elements[1]);}
;; 
}

void c_schemecomplex_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_schemecomplex_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);

  add_global((object *) &__glo_lib_91init_117schemecomplex_scheme_complex);
  add_global((object *) &__glo__75make_91rect_scheme_complex);
  add_global((object *) &__glo__75imag_91part_scheme_complex);
  add_global((object *) &__glo__75real_91part_scheme_complex);
  add_global((object *) &__glo_make_91rectangular_scheme_complex);
  add_global((object *) &__glo_make_91polar_scheme_complex);
  add_global((object *) &__glo_angle_scheme_complex);
  add_global((object *) &__glo_magnitude_scheme_complex);
  add_global((object *) &__glo_imag_91part_scheme_complex);
  add_global((object *) &__glo_real_91part_scheme_complex);
  mclosure0(c_73146, (function_type)__lambda_17);c_73146.num_args = 0; 
  __glo_lib_91init_117schemecomplex_scheme_complex = &c_73146; 
  mclosure0(c_73145, (function_type)__lambda_20);c_73145.num_args = 2; 
  __glo__75make_91rect_scheme_complex = &c_73145; 
  mclosure0(c_73144, (function_type)__lambda_19);c_73144.num_args = 1; 
  __glo__75imag_91part_scheme_complex = &c_73144; 
  mclosure0(c_73143, (function_type)__lambda_18);c_73143.num_args = 1; 
  __glo__75real_91part_scheme_complex = &c_73143; 
  mclosure0(c_73141, (function_type)__lambda_16);c_73141.num_args = 2; 
  __glo_make_91rectangular_scheme_complex = &c_73141; 
  mclosure0(c_73124, (function_type)__lambda_13);c_73124.num_args = 2; 
  __glo_make_91polar_scheme_complex = &c_73124; 
  mclosure0(c_73115, (function_type)__lambda_10);c_73115.num_args = 1; 
  __glo_angle_scheme_complex = &c_73115; 
  mclosure0(c_7386, (function_type)__lambda_5);c_7386.num_args = 1; 
  __glo_magnitude_scheme_complex = &c_7386; 
  mclosure0(c_7375, (function_type)__lambda_3);c_7375.num_args = 1; 
  __glo_imag_91part_scheme_complex = &c_7375; 
  mclosure0(c_7363, (function_type)__lambda_1);c_7363.num_args = 1; 
  __glo_real_91part_scheme_complex = &c_7363; 

  mclosure0(clo_73149, c_schemecomplex_inlinable_lambdas); make_pair(pair_73148, find_or_add_symbol("c_schemecomplex_inlinable_lambdas"), &clo_73149);
  make_cvar(cvar_73150, (object *)&__glo_lib_91init_117schemecomplex_scheme_complex);make_pair(pair_73151, find_or_add_symbol("lib-init:schemecomplex"), &cvar_73150);
  make_cvar(cvar_73152, (object *)&__glo__75make_91rect_scheme_complex);make_pair(pair_73153, find_or_add_symbol("%make-rect"), &cvar_73152);
  make_cvar(cvar_73154, (object *)&__glo__75imag_91part_scheme_complex);make_pair(pair_73155, find_or_add_symbol("%imag-part"), &cvar_73154);
  make_cvar(cvar_73156, (object *)&__glo__75real_91part_scheme_complex);make_pair(pair_73157, find_or_add_symbol("%real-part"), &cvar_73156);
  make_cvar(cvar_73158, (object *)&__glo_make_91rectangular_scheme_complex);make_pair(pair_73159, find_or_add_symbol("make-rectangular"), &cvar_73158);
  make_cvar(cvar_73160, (object *)&__glo_make_91polar_scheme_complex);make_pair(pair_73161, find_or_add_symbol("make-polar"), &cvar_73160);
  make_cvar(cvar_73162, (object *)&__glo_angle_scheme_complex);make_pair(pair_73163, find_or_add_symbol("angle"), &cvar_73162);
  make_cvar(cvar_73164, (object *)&__glo_magnitude_scheme_complex);make_pair(pair_73165, find_or_add_symbol("magnitude"), &cvar_73164);
  make_cvar(cvar_73166, (object *)&__glo_imag_91part_scheme_complex);make_pair(pair_73167, find_or_add_symbol("imag-part"), &cvar_73166);
  make_cvar(cvar_73168, (object *)&__glo_real_91part_scheme_complex);make_pair(pair_73169, find_or_add_symbol("real-part"), &cvar_73168);
make_pair(c_73180, &pair_73148,Cyc_global_variables);
make_pair(c_73179, &pair_73151, &c_73180);
make_pair(c_73178, &pair_73153, &c_73179);
make_pair(c_73177, &pair_73155, &c_73178);
make_pair(c_73176, &pair_73157, &c_73177);
make_pair(c_73175, &pair_73159, &c_73176);
make_pair(c_73174, &pair_73161, &c_73175);
make_pair(c_73173, &pair_73163, &c_73174);
make_pair(c_73172, &pair_73165, &c_73173);
make_pair(c_73171, &pair_73167, &c_73172);
make_pair(c_73170, &pair_73169, &c_73171);
Cyc_global_variables = &c_73170;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemecomplex_scheme_complex)->fn)(data, 1, cont, cont);
}
void c_schemecomplex_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_complex");
  c_schemecomplex_entry_pt_first_lambda(data, argc, cont,value);
}
