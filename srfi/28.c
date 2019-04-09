/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2019 Justin Ethier
 ** Version 0.11 
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
object __glo_lib_91init_117srfi28_srfi_28 = NULL;
object __glo_format_srfi_28 = NULL;
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
extern object __glo_display_scheme_write;
extern object __glo_write_scheme_write;
extern object __glo_write_91shared_scheme_write;
extern object __glo_write_91simple_scheme_write;
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
static void __lambda_12(void *data, int argc, closure _,object k_7376) ;
static void __lambda_1(void *data, int argc, closure _,object k_7339, object format_91string_731_7319, object objects_732_7320_raw, ...) ;
static void __lambda_2(void *data, int argc, object self_7377, object buffer_7323, object fmt_91rec_7325) ;
static void __lambda_16(void *data, int argc, object self_7378, object buffer_7323) ;
static void __lambda_15(void *data, int argc, object self_7379, object fmt_91rec_7325) ;
static void __lambda_3(void *data, int argc, object self_7380, object r_7373) ;
static void __lambda_4(void *data, int argc, object self_7381, object k_7344, object format_91list_733_7329, object objs_734_7330) ;
static void __lambda_5(void *data, int argc, object self_7382, object escape_91write_7331, object raw_91write_7332) ;
static void __lambda_14(void *data, int argc, object self_7383, object escape_91write_7331) ;
static void __lambda_13(void *data, int argc, object self_7384, object raw_91write_7332) ;
static void __lambda_6(void *data, int argc, object self_7385, object k_7367, object how_735_7333) ;
static void __lambda_7(void *data, int argc, object self_7386, object r_7369) ;
static void __lambda_8(void *data, int argc, object self_7387, object k_7363, object what_736_7334, object next_737_7335) ;
static void __lambda_9(void *data, int argc, object self_7388, object r_7364) ;
static void __lambda_10(void *data, int argc, object self_7389, object r_7365) ;
static void __lambda_11(void *data, int argc, object self_7390, object r_7342) ;

static void __lambda_12(void *data, int argc, closure _,object k_7376) {
  Cyc_st_add(data, "srfi/28.sld:lib-init:srfi28");
return_closcall1(data,  k_7376,  obj_int2obj(0));; 
}

static void __lambda_1(void *data, int argc, closure _,object k_7339, object format_91string_731_7319, object objects_732_7320_raw, ...) {
load_varargs(objects_732_7320, objects_732_7320_raw, argc - 2);
  Cyc_st_add(data, "srfi/28.sld:format");

closureN_type c_7393;
object e_73266 [3];
c_7393.hdr.mark = gc_color_red;
 c_7393.hdr.grayed = 0;
c_7393.tag = closureN_tag;
 c_7393.fn = (function_type)__lambda_2;
c_7393.num_args = 2;
c_7393.num_elements = 3;
c_7393.elements = (object *)e_73266;
c_7393.elements[0] = format_91string_731_7319;
c_7393.elements[1] = k_7339;
c_7393.elements[2] = objects_732_7320;

return_direct_with_clo2(data,(closure)&c_7393,__lambda_2,  boolean_f, boolean_f);; 
}

static void __lambda_2(void *data, int argc, object self_7377, object buffer_7323, object fmt_91rec_7325) {
  
closureN_type c_7395;
object e_73262 [4];
c_7395.hdr.mark = gc_color_red;
 c_7395.hdr.grayed = 0;
c_7395.tag = closureN_tag;
 c_7395.fn = (function_type)__lambda_16;
c_7395.num_args = 1;
c_7395.num_elements = 4;
c_7395.elements = (object *)e_73262;
c_7395.elements[0] = fmt_91rec_7325;
c_7395.elements[1] = ((closureN)self_7377)->elements[0];
c_7395.elements[2] = ((closureN)self_7377)->elements[1];
c_7395.elements[3] = ((closureN)self_7377)->elements[2];


pair_type local_73265; 
return_direct_with_clo1(data,(closure)&c_7395,__lambda_16,  set_cell_as_expr(&local_73265, buffer_7323));; 
}

static void __lambda_16(void *data, int argc, object self_7378, object buffer_7323) {
  
closureN_type c_7397;
object e_73257 [4];
c_7397.hdr.mark = gc_color_red;
 c_7397.hdr.grayed = 0;
c_7397.tag = closureN_tag;
 c_7397.fn = (function_type)__lambda_15;
c_7397.num_args = 1;
c_7397.num_elements = 4;
c_7397.elements = (object *)e_73257;
c_7397.elements[0] = buffer_7323;
c_7397.elements[1] = ((closureN)self_7378)->elements[1];
c_7397.elements[2] = ((closureN)self_7378)->elements[2];
c_7397.elements[3] = ((closureN)self_7378)->elements[3];


pair_type local_73260; 
return_direct_with_clo1(data,(closure)&c_7397,__lambda_15,  set_cell_as_expr(&local_73260, ((closureN)self_7378)->elements[0]));; 
}

static void __lambda_15(void *data, int argc, object self_7379, object fmt_91rec_7325) {
  
closureN_type c_7399;
object e_73256 [5];
c_7399.hdr.mark = gc_color_red;
 c_7399.hdr.grayed = 0;
c_7399.tag = closureN_tag;
 c_7399.fn = (function_type)__lambda_3;
c_7399.num_args = 1;
c_7399.num_elements = 5;
c_7399.elements = (object *)e_73256;
c_7399.elements[0] = ((closureN)self_7379)->elements[0];
c_7399.elements[1] = fmt_91rec_7325;
c_7399.elements[2] = ((closureN)self_7379)->elements[1];
c_7399.elements[3] = ((closureN)self_7379)->elements[2];
c_7399.elements[4] = ((closureN)self_7379)->elements[3];

return_closcall1(data,  __glo_open_91output_91string_scheme_base,  &c_7399);; 
}

static void __lambda_3(void *data, int argc, object self_7380, object r_7373) {
  
  
  closureN_type c_73114;
object e_73252 [2];
c_73114.hdr.mark = gc_color_red;
 c_73114.hdr.grayed = 0;
c_73114.tag = closureN_tag;
 c_73114.fn = (function_type)__lambda_4;
c_73114.num_args = 2;
c_73114.num_elements = 2;
c_73114.elements = (object *)e_73252;
c_73114.elements[0] = ((closureN)self_7380)->elements[0];
c_73114.elements[1] = ((closureN)self_7380)->elements[1];

  Cyc_set_cell(data, ((closureN)self_7380)->elements[0], r_7373);Cyc_set_cell(data, ((closureN)self_7380)->elements[1], &c_73114);
closureN_type c_73102;
object e_73109 [3];
c_73102.hdr.mark = gc_color_red;
 c_73102.hdr.grayed = 0;
c_73102.tag = closureN_tag;
 c_73102.fn = (function_type)__lambda_11;
c_73102.num_args = 1;
c_73102.num_elements = 3;
c_73102.elements = (object *)e_73109;
c_73102.elements[0] = ((closureN)self_7380)->elements[1];
c_73102.elements[1] = ((closureN)self_7380)->elements[3];
c_73102.elements[2] = ((closureN)self_7380)->elements[4];

return_closcall2(data,  __glo_string_91_125list_scheme_base,  &c_73102, ((closureN)self_7380)->elements[2]);;; 
}

static void __lambda_4(void *data, int argc, object self_7381, object k_7344, object format_91list_733_7329, object objs_734_7330) {
  
closureN_type c_73116;
object e_73251 [5];
c_73116.hdr.mark = gc_color_red;
 c_73116.hdr.grayed = 0;
c_73116.tag = closureN_tag;
 c_73116.fn = (function_type)__lambda_5;
c_73116.num_args = 2;
c_73116.num_elements = 5;
c_73116.elements = (object *)e_73251;
c_73116.elements[0] = ((closureN)self_7381)->elements[0];
c_73116.elements[1] = ((closureN)self_7381)->elements[1];
c_73116.elements[2] = format_91list_733_7329;
c_73116.elements[3] = k_7344;
c_73116.elements[4] = objs_734_7330;

return_direct_with_clo2(data,(closure)&c_73116,__lambda_5,  boolean_f, boolean_f);; 
}

static void __lambda_5(void *data, int argc, object self_7382, object escape_91write_7331, object raw_91write_7332) {
  
closureN_type c_73118;
object e_73247 [6];
c_73118.hdr.mark = gc_color_red;
 c_73118.hdr.grayed = 0;
c_73118.tag = closureN_tag;
 c_73118.fn = (function_type)__lambda_14;
c_73118.num_args = 1;
c_73118.num_elements = 6;
c_73118.elements = (object *)e_73247;
c_73118.elements[0] = ((closureN)self_7382)->elements[0];
c_73118.elements[1] = ((closureN)self_7382)->elements[1];
c_73118.elements[2] = ((closureN)self_7382)->elements[2];
c_73118.elements[3] = ((closureN)self_7382)->elements[3];
c_73118.elements[4] = ((closureN)self_7382)->elements[4];
c_73118.elements[5] = raw_91write_7332;


pair_type local_73250; 
return_direct_with_clo1(data,(closure)&c_73118,__lambda_14,  set_cell_as_expr(&local_73250, escape_91write_7331));; 
}

static void __lambda_14(void *data, int argc, object self_7383, object escape_91write_7331) {
  
closureN_type c_73120;
object e_73242 [6];
c_73120.hdr.mark = gc_color_red;
 c_73120.hdr.grayed = 0;
c_73120.tag = closureN_tag;
 c_73120.fn = (function_type)__lambda_13;
c_73120.num_args = 1;
c_73120.num_elements = 6;
c_73120.elements = (object *)e_73242;
c_73120.elements[0] = ((closureN)self_7383)->elements[0];
c_73120.elements[1] = escape_91write_7331;
c_73120.elements[2] = ((closureN)self_7383)->elements[1];
c_73120.elements[3] = ((closureN)self_7383)->elements[2];
c_73120.elements[4] = ((closureN)self_7383)->elements[3];
c_73120.elements[5] = ((closureN)self_7383)->elements[4];


pair_type local_73245; 
return_direct_with_clo1(data,(closure)&c_73120,__lambda_13,  set_cell_as_expr(&local_73245, ((closureN)self_7383)->elements[5]));; 
}

static void __lambda_13(void *data, int argc, object self_7384, object raw_91write_7332) {
  
  closureN_type c_73215;
object e_73241 [4];
c_73215.hdr.mark = gc_color_red;
 c_73215.hdr.grayed = 0;
c_73215.tag = closureN_tag;
 c_73215.fn = (function_type)__lambda_6;
c_73215.num_args = 1;
c_73215.num_elements = 4;
c_73215.elements = (object *)e_73241;
c_73215.elements[0] = ((closureN)self_7384)->elements[0];
c_73215.elements[1] = ((closureN)self_7384)->elements[2];
c_73215.elements[2] = ((closureN)self_7384)->elements[3];
c_73215.elements[3] = ((closureN)self_7384)->elements[5];

  
  closureN_type c_73193;
object e_73211 [4];
c_73193.hdr.mark = gc_color_red;
 c_73193.hdr.grayed = 0;
c_73193.tag = closureN_tag;
 c_73193.fn = (function_type)__lambda_8;
c_73193.num_args = 2;
c_73193.num_elements = 4;
c_73193.elements = (object *)e_73211;
c_73193.elements[0] = ((closureN)self_7384)->elements[0];
c_73193.elements[1] = ((closureN)self_7384)->elements[2];
c_73193.elements[2] = ((closureN)self_7384)->elements[3];
c_73193.elements[3] = ((closureN)self_7384)->elements[5];

  Cyc_set_cell(data, ((closureN)self_7384)->elements[1], &c_73215);Cyc_set_cell(data, raw_91write_7332, &c_73193);  
if( (boolean_f != Cyc_is_null(((closureN)self_7384)->elements[3])) ){ 
  

return_closcall2(data,  __glo_get_91output_91string_scheme_base,  ((closureN)self_7384)->elements[4], car(((closureN)self_7384)->elements[0]));
} else { 
    
  
if( (boolean_f != Cyc_char_eq_op(data, Cyc_car(data, ((closureN)self_7384)->elements[3]), obj_char2obj(126))) ){ 
    
  
if( (boolean_f != Cyc_is_null(Cyc_cdr(data, ((closureN)self_7384)->elements[3]))) ){ 
  
make_utf8_string_with_len(c_73142, "Incomplete escape sequence", 26, 26);
return_closcall2(data,  __glo_error_scheme_base,  ((closureN)self_7384)->elements[4], &c_73142);
} else { 
    
  
if( (boolean_f != Cyc_eq(Cyc_cadr(data, ((closureN)self_7384)->elements[3]), obj_char2obj(97))) ){ 
  

return_closcall2(data,  car(((closureN)self_7384)->elements[1]),  ((closureN)self_7384)->elements[4], __glo_display_scheme_write);
} else { 
    
  
if( (boolean_f != Cyc_eq(Cyc_cadr(data, ((closureN)self_7384)->elements[3]), obj_char2obj(115))) ){ 
  

return_closcall2(data,  car(((closureN)self_7384)->elements[1]),  ((closureN)self_7384)->elements[4], __glo_write_scheme_write);
} else { 
    
  
if( (boolean_f != Cyc_eq(Cyc_cadr(data, ((closureN)self_7384)->elements[3]), obj_char2obj(37))) ){ 
  

return_closcall3(data,  car(raw_91write_7332),  ((closureN)self_7384)->elements[4], obj_char2obj(10), primitive_cddr);
} else { 
    
  
if( (boolean_f != Cyc_eq(Cyc_cadr(data, ((closureN)self_7384)->elements[3]), obj_char2obj(126))) ){ 
  

return_closcall3(data,  car(raw_91write_7332),  ((closureN)self_7384)->elements[4], obj_char2obj(126), primitive_cddr);
} else { 
  
make_utf8_string_with_len(c_73183, "Unrecognized escape sequence", 28, 28);
return_closcall2(data,  __glo_error_scheme_base,  ((closureN)self_7384)->elements[4], &c_73183);}
;}
;}
;}
;}
;
} else { 
  



return_closcall3(data,  car(raw_91write_7332),  ((closureN)self_7384)->elements[4], Cyc_car(data, ((closureN)self_7384)->elements[3]), primitive_cdr);}
;}
;; 
}

static void __lambda_6(void *data, int argc, object self_7385, object k_7367, object how_735_7333) {
    
if( (boolean_f != Cyc_is_null(((closureN)self_7385)->elements[3])) ){ 
  
make_utf8_string_with_len(c_73220, "No value for escape sequence", 28, 28);
return_closcall2(data,  __glo_error_scheme_base,  k_7367, &c_73220);
} else { 
  
closureN_type c_73222;
object e_73234 [4];
c_73222.hdr.mark = gc_color_red;
 c_73222.hdr.grayed = 0;
c_73222.tag = closureN_tag;
 c_73222.fn = (function_type)__lambda_7;
c_73222.num_args = 1;
c_73222.num_elements = 4;
c_73222.elements = (object *)e_73234;
c_73222.elements[0] = ((closureN)self_7385)->elements[1];
c_73222.elements[1] = ((closureN)self_7385)->elements[2];
c_73222.elements[2] = k_7367;
c_73222.elements[3] = ((closureN)self_7385)->elements[3];





return_closcall3(data,  how_735_7333,  &c_73222, Cyc_car(data, ((closureN)self_7385)->elements[3]), car(((closureN)self_7385)->elements[0]));}
;; 
}

static void __lambda_7(void *data, int argc, object self_7386, object r_7369) {
  





return_closcall3(data,  car(((closureN)self_7386)->elements[0]),  ((closureN)self_7386)->elements[2], Cyc_cddr(data, ((closureN)self_7386)->elements[1]), Cyc_cdr(data, ((closureN)self_7386)->elements[3]));; 
}

static void __lambda_8(void *data, int argc, object self_7387, object k_7363, object what_736_7334, object next_737_7335) {
  
closureN_type c_73195;
object e_73207 [5];
c_73195.hdr.mark = gc_color_red;
 c_73195.hdr.grayed = 0;
c_73195.tag = closureN_tag;
 c_73195.fn = (function_type)__lambda_9;
c_73195.num_args = 1;
c_73195.num_elements = 5;
c_73195.elements = (object *)e_73207;
c_73195.elements[0] = ((closureN)self_7387)->elements[1];
c_73195.elements[1] = ((closureN)self_7387)->elements[2];
c_73195.elements[2] = k_7363;
c_73195.elements[3] = next_737_7335;
c_73195.elements[4] = ((closureN)self_7387)->elements[3];



return_closcall3(data,  __glo_write_91char_scheme_base,  &c_73195, what_736_7334, car(((closureN)self_7387)->elements[0]));; 
}

static void __lambda_9(void *data, int argc, object self_7388, object r_7364) {
  
closureN_type c_73198;
object e_73205 [3];
c_73198.hdr.mark = gc_color_red;
 c_73198.hdr.grayed = 0;
c_73198.tag = closureN_tag;
 c_73198.fn = (function_type)__lambda_10;
c_73198.num_args = 1;
c_73198.num_elements = 3;
c_73198.elements = (object *)e_73205;
c_73198.elements[0] = ((closureN)self_7388)->elements[0];
c_73198.elements[1] = ((closureN)self_7388)->elements[2];
c_73198.elements[2] = ((closureN)self_7388)->elements[4];

return_closcall2(data,  ((closureN)self_7388)->elements[3],  &c_73198, ((closureN)self_7388)->elements[1]);; 
}

static void __lambda_10(void *data, int argc, object self_7389, object r_7365) {
  

return_closcall3(data,  car(((closureN)self_7389)->elements[0]),  ((closureN)self_7389)->elements[1], r_7365, ((closureN)self_7389)->elements[2]);; 
}

static void __lambda_11(void *data, int argc, object self_7390, object r_7342) {
  

return_closcall3(data,  car(((closureN)self_7390)->elements[0]),  ((closureN)self_7390)->elements[1], r_7342, ((closureN)self_7390)->elements[2]);; 
}

void c_srfi28_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_srfi28_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);

  add_global((object *) &__glo_lib_91init_117srfi28_srfi_28);
  add_global((object *) &__glo_format_srfi_28);
  mclosure0(c_73267, (function_type)__lambda_12);c_73267.num_args = 0; 
  __glo_lib_91init_117srfi28_srfi_28 = &c_73267; 
  mclosure0(c_7391, (function_type)__lambda_1);c_7391.num_args = 1; 
  __glo_format_srfi_28 = &c_7391; 

  mclosure0(clo_73270, c_srfi28_inlinable_lambdas); make_pair(pair_73269, find_or_add_symbol("c_srfi28_inlinable_lambdas"), &clo_73270);
  make_cvar(cvar_73271, (object *)&__glo_lib_91init_117srfi28_srfi_28);make_pair(pair_73272, find_or_add_symbol("lib-init:srfi28"), &cvar_73271);
  make_cvar(cvar_73273, (object *)&__glo_format_srfi_28);make_pair(pair_73274, find_or_add_symbol("format"), &cvar_73273);
make_pair(c_73277, &pair_73269,Cyc_global_variables);
make_pair(c_73276, &pair_73272, &c_73277);
make_pair(c_73275, &pair_73274, &c_73276);
Cyc_global_variables = &c_73275;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117srfi28_srfi_28)->fn)(data, 1, cont, cont);
}
void c_srfi28_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("srfi_28");
  c_srfi28_entry_pt_first_lambda(data, argc, cont,value);
}
