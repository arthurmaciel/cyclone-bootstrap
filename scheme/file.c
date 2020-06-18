/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2020 Justin Ethier
 ** Version 0.19 
 **
 **/

#define closcall1(td, clo,a1) \
if (obj_is_not_closure(clo)) { \
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
if (obj_is_not_closure(clo)) { \
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
if (obj_is_not_closure(clo)) { \
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

#define closcall4(td, clo,a1,a2,a3,a4) \
if (obj_is_not_closure(clo)) { \
   Cyc_apply(td, 3, (closure)(a1), clo,a2,a3,a4); \
} else { \
   ((clo)->fn)(td, 4, clo,a1,a2,a3,a4);\
}
#define return_closcall4(td, clo,a1,a2,a3,a4) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;\
     GC(td, clo, buf, 4); \
     return; \
 } else {\
     closcall4(td, (closure) (clo),a1,a2,a3,a4); \
     return;\
 } \
}

#define continue_or_gc4(td, clo,a1,a2,a3,a4) { \
 char *top = alloca(sizeof(char)); \
 if (stack_overflow(top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;\
     GC(td, clo, buf, 4); \
     return; \
 } else {\
     continue;\
 } \
}

#define return_direct4(td, _fn,a1,a2,a3,a4) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 4); \
     return; \
 } else { \
     (_fn)(td, 4, (closure)_fn,a1,a2,a3,a4); \
 }}

#define return_direct_with_clo4(td, clo, _fn,a1,a2,a3,a4) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[4]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;\
     GC(td, clo, buf, 4); \
     return; \
 } else { \
     (_fn)(td, 4, (closure)(clo),a1,a2,a3,a4); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117schemefile_scheme_file = NULL;
object __glo_with_91output_91to_91file_scheme_file = NULL;
object __glo_with_91input_91from_91file_scheme_file = NULL;
object __glo_call_91with_91output_91file_scheme_file = NULL;
object __glo_call_91with_91input_91file_scheme_file = NULL;
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
extern object __glo_fast_91string_123_127_scheme_base;
extern object __glo_fast_91string_121_127_scheme_base;
extern object __glo_fast_91string_121_123_127_scheme_base;
extern object __glo_fast_91string_125_127_scheme_base;
extern object __glo_fast_91string_125_123_127_scheme_base;
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
extern object __glo_Cyc_91map_91loop_912_scheme_base;
extern object __glo_Cyc_91for_91each_91loop_911_scheme_base;
extern object __glo_Cyc_91for_91each_91loop_912_scheme_base;
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
extern object __glo_write_91string_911_scheme_base;
extern object __glo_write_91string_912_scheme_base;
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
extern object __glo_define_91values_scheme_base;
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
extern object __glo__void_scheme_base;
extern object __glo_syntax_91error_scheme_base;
extern object __glo_bytevector_91copy_scheme_base;
extern object __glo_bytevector_91copy_67_scheme_base;
extern object __glo_utf8_91_125string_scheme_base;
extern object __glo_string_91_125utf8_scheme_base;
extern object __glo_denominator_scheme_base;
extern object __glo_numerator_scheme_base;
extern object __glo_parameterize_scheme_base;
extern object __glo_read_91bytevector_scheme_base;
extern object __glo_read_91bytevector_67_scheme_base;
extern object __glo_write_91bytevector_scheme_base;
extern object __glo_peek_91u8_scheme_base;
extern object __glo_read_91u8_scheme_base;
extern object __glo_write_91u8_scheme_base;
extern object __glo_binary_91port_127_scheme_base;
extern object __glo_textual_91port_127_scheme_base;
extern object __glo_fast_91string_123_127_191_191inline_191_191_scheme_base;
extern object __glo_fast_91string_121_127_191_191inline_191_191_scheme_base;
extern object __glo_fast_91string_121_123_127_191_191inline_191_191_scheme_base;
extern object __glo_fast_91string_125_127_191_191inline_191_191_scheme_base;
extern object __glo_fast_91string_125_123_127_191_191inline_191_191_scheme_base;
extern object __glo__75write_91bytevector_191_191inline_191_191_scheme_base;
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
extern object __glo_void_191_191inline_191_191_scheme_base;
#include "cyclone/runtime.h"
defsymbol(_121param_91convert_125);
defsymbol(_121param_91set_67_125);
static void __lambda_19(void *data, int argc, closure _,object k_7367) ;
static void __lambda_11(void *data, int argc, closure _,object k_7351, object string_739_7321, object thunk_7310_7322) ;
static void __lambda_12(void *data, int argc, object self_7375, object r_7352) ;
static void __lambda_13(void *data, int argc, object self_7376, object r_7362) ;
static void __lambda_14(void *data, int argc, object self_7377, object r_7353) ;
static void __lambda_15(void *data, int argc, object self_7378, object old_7311_7323, object new_7312_7324) ;
static void __lambda_17(void *data, int argc, object self_7380, object k_7356) ;
static void __lambda_18(void *data, int argc, object self_7381, object r_7359) ;
static void __lambda_16(void *data, int argc, object self_7379, object k_7360) ;
static void __lambda_3(void *data, int argc, closure _,object k_7335, object string_735_7317, object thunk_736_7318) ;
static void __lambda_4(void *data, int argc, object self_7368, object r_7336) ;
static void __lambda_5(void *data, int argc, object self_7369, object r_7346) ;
static void __lambda_6(void *data, int argc, object self_7370, object r_7337) ;
static void __lambda_7(void *data, int argc, object self_7371, object old_737_7319, object new_738_7320) ;
static void __lambda_9(void *data, int argc, object self_7373, object k_7340) ;
static void __lambda_10(void *data, int argc, object self_7374, object r_7343) ;
static void __lambda_8(void *data, int argc, object self_7372, object k_7344) ;
static void __lambda_2(void *data, int argc, closure _,object k_7331, object string_733_7315, object proc_734_7316) ;
static void __lambda_1(void *data, int argc, closure _,object k_7327, object string_731_7313, object proc_732_7314) ;

static void __lambda_19(void *data, int argc, closure _,object k_7367) {
  Cyc_st_add(data, "scheme/file.sld:lib-init:schemefile");
return_closcall1(data,  k_7367,  obj_int2obj(0));; 
}

static void __lambda_11(void *data, int argc, closure _,object k_7351, object string_739_7321, object thunk_7310_7322) {
  Cyc_st_add(data, "scheme/file.sld:with-output-to-file");

closureN_type c_73130;
object e_73163 [3];
c_73130.hdr.mark = gc_color_red;
 c_73130.hdr.grayed = 0;
c_73130.tag = closureN_tag;
 c_73130.fn = (function_type)__lambda_12;
c_73130.num_args = 1;
c_73130.num_elements = 3;
c_73130.elements = (object *)e_73163;
c_73130.elements[0] = k_7351;
c_73130.elements[1] = string_739_7321;
c_73130.elements[2] = thunk_7310_7322;

return_closcall1(data,  __glo_current_91output_91port_scheme_base,  &c_73130);; 
}

static void __lambda_12(void *data, int argc, object self_7375, object r_7352) {
  
closureN_type c_73132;
object e_73162 [4];
c_73132.hdr.mark = gc_color_red;
 c_73132.hdr.grayed = 0;
c_73132.tag = closureN_tag;
 c_73132.fn = (function_type)__lambda_13;
c_73132.num_args = 1;
c_73132.num_elements = 4;
c_73132.elements = (object *)e_73162;
c_73132.elements[0] = ((closureN)self_7375)->elements[0];
c_73132.elements[1] = r_7352;
c_73132.elements[2] = ((closureN)self_7375)->elements[1];
c_73132.elements[3] = ((closureN)self_7375)->elements[2];

return_closcall2(data,  __glo_current_91output_91port_scheme_base,  &c_73132, quote__121param_91convert_125);; 
}

static void __lambda_13(void *data, int argc, object self_7376, object r_7362) {
  
closureN_type c_73134;
object e_73157 [3];
c_73134.hdr.mark = gc_color_red;
 c_73134.hdr.grayed = 0;
c_73134.tag = closureN_tag;
 c_73134.fn = (function_type)__lambda_14;
c_73134.num_args = 1;
c_73134.num_elements = 3;
c_73134.elements = (object *)e_73157;
c_73134.elements[0] = ((closureN)self_7376)->elements[0];
c_73134.elements[1] = ((closureN)self_7376)->elements[1];
c_73134.elements[2] = ((closureN)self_7376)->elements[3];


port_type c_73160 = Cyc_io_open_output_file(data,((closureN)self_7376)->elements[2]);
return_closcall2(data,  r_7362,  &c_73134, &c_73160);; 
}

static void __lambda_14(void *data, int argc, object self_7377, object r_7353) {
  
closureN_type c_73136;
object e_73155 [2];
c_73136.hdr.mark = gc_color_red;
 c_73136.hdr.grayed = 0;
c_73136.tag = closureN_tag;
 c_73136.fn = (function_type)__lambda_15;
c_73136.num_args = 2;
c_73136.num_elements = 2;
c_73136.elements = (object *)e_73155;
c_73136.elements[0] = ((closureN)self_7377)->elements[0];
c_73136.elements[1] = ((closureN)self_7377)->elements[2];

return_direct_with_clo2(data,(closure)&c_73136,__lambda_15,  ((closureN)self_7377)->elements[1], r_7353);; 
}

static void __lambda_15(void *data, int argc, object self_7378, object old_7311_7323, object new_7312_7324) {
  
closureN_type c_73139;
object e_73142 [1];
c_73139.hdr.mark = gc_color_red;
 c_73139.hdr.grayed = 0;
c_73139.tag = closureN_tag;
 c_73139.fn = (function_type)__lambda_16;
c_73139.num_args = 0;
c_73139.num_elements = 1;
c_73139.elements = (object *)e_73142;
c_73139.elements[0] = new_7312_7324;


closureN_type c_73144;
object e_73154 [1];
c_73144.hdr.mark = gc_color_red;
 c_73144.hdr.grayed = 0;
c_73144.tag = closureN_tag;
 c_73144.fn = (function_type)__lambda_17;
c_73144.num_args = 0;
c_73144.num_elements = 1;
c_73144.elements = (object *)e_73154;
c_73144.elements[0] = old_7311_7323;

return_closcall4(data,  __glo_dynamic_91wind_scheme_base,  ((closureN)self_7378)->elements[0], &c_73139, ((closureN)self_7378)->elements[1], &c_73144);; 
}

static void __lambda_17(void *data, int argc, object self_7380, object k_7356) {
  
closureN_type c_73146;
object e_73153 [2];
c_73146.hdr.mark = gc_color_red;
 c_73146.hdr.grayed = 0;
c_73146.tag = closureN_tag;
 c_73146.fn = (function_type)__lambda_18;
c_73146.num_args = 1;
c_73146.num_elements = 2;
c_73146.elements = (object *)e_73153;
c_73146.elements[0] = k_7356;
c_73146.elements[1] = ((closureN)self_7380)->elements[0];

return_closcall1(data,  __glo_current_91output_91port_scheme_base,  &c_73146);; 
}

static void __lambda_18(void *data, int argc, object self_7381, object r_7359) {
  
  Cyc_io_close_port(data, r_7359);return_closcall3(data,  __glo_current_91output_91port_scheme_base,  ((closureN)self_7381)->elements[0], quote__121param_91set_67_125, ((closureN)self_7381)->elements[1]);;; 
}

static void __lambda_16(void *data, int argc, object self_7379, object k_7360) {
  return_closcall3(data,  __glo_current_91output_91port_scheme_base,  k_7360, quote__121param_91set_67_125, ((closureN)self_7379)->elements[0]);; 
}

static void __lambda_3(void *data, int argc, closure _,object k_7335, object string_735_7317, object thunk_736_7318) {
  Cyc_st_add(data, "scheme/file.sld:with-input-from-file");

closureN_type c_7394;
object e_73127 [3];
c_7394.hdr.mark = gc_color_red;
 c_7394.hdr.grayed = 0;
c_7394.tag = closureN_tag;
 c_7394.fn = (function_type)__lambda_4;
c_7394.num_args = 1;
c_7394.num_elements = 3;
c_7394.elements = (object *)e_73127;
c_7394.elements[0] = k_7335;
c_7394.elements[1] = string_735_7317;
c_7394.elements[2] = thunk_736_7318;

return_closcall1(data,  __glo_current_91input_91port_scheme_base,  &c_7394);; 
}

static void __lambda_4(void *data, int argc, object self_7368, object r_7336) {
  
closureN_type c_7396;
object e_73126 [4];
c_7396.hdr.mark = gc_color_red;
 c_7396.hdr.grayed = 0;
c_7396.tag = closureN_tag;
 c_7396.fn = (function_type)__lambda_5;
c_7396.num_args = 1;
c_7396.num_elements = 4;
c_7396.elements = (object *)e_73126;
c_7396.elements[0] = ((closureN)self_7368)->elements[0];
c_7396.elements[1] = r_7336;
c_7396.elements[2] = ((closureN)self_7368)->elements[1];
c_7396.elements[3] = ((closureN)self_7368)->elements[2];

return_closcall2(data,  __glo_current_91input_91port_scheme_base,  &c_7396, quote__121param_91convert_125);; 
}

static void __lambda_5(void *data, int argc, object self_7369, object r_7346) {
  
closureN_type c_7398;
object e_73121 [3];
c_7398.hdr.mark = gc_color_red;
 c_7398.hdr.grayed = 0;
c_7398.tag = closureN_tag;
 c_7398.fn = (function_type)__lambda_6;
c_7398.num_args = 1;
c_7398.num_elements = 3;
c_7398.elements = (object *)e_73121;
c_7398.elements[0] = ((closureN)self_7369)->elements[0];
c_7398.elements[1] = ((closureN)self_7369)->elements[1];
c_7398.elements[2] = ((closureN)self_7369)->elements[3];


port_type c_73124 = Cyc_io_open_input_file(data,((closureN)self_7369)->elements[2]);
return_closcall2(data,  r_7346,  &c_7398, &c_73124);; 
}

static void __lambda_6(void *data, int argc, object self_7370, object r_7337) {
  
closureN_type c_73100;
object e_73119 [2];
c_73100.hdr.mark = gc_color_red;
 c_73100.hdr.grayed = 0;
c_73100.tag = closureN_tag;
 c_73100.fn = (function_type)__lambda_7;
c_73100.num_args = 2;
c_73100.num_elements = 2;
c_73100.elements = (object *)e_73119;
c_73100.elements[0] = ((closureN)self_7370)->elements[0];
c_73100.elements[1] = ((closureN)self_7370)->elements[2];

return_direct_with_clo2(data,(closure)&c_73100,__lambda_7,  ((closureN)self_7370)->elements[1], r_7337);; 
}

static void __lambda_7(void *data, int argc, object self_7371, object old_737_7319, object new_738_7320) {
  
closureN_type c_73103;
object e_73106 [1];
c_73103.hdr.mark = gc_color_red;
 c_73103.hdr.grayed = 0;
c_73103.tag = closureN_tag;
 c_73103.fn = (function_type)__lambda_8;
c_73103.num_args = 0;
c_73103.num_elements = 1;
c_73103.elements = (object *)e_73106;
c_73103.elements[0] = new_738_7320;


closureN_type c_73108;
object e_73118 [1];
c_73108.hdr.mark = gc_color_red;
 c_73108.hdr.grayed = 0;
c_73108.tag = closureN_tag;
 c_73108.fn = (function_type)__lambda_9;
c_73108.num_args = 0;
c_73108.num_elements = 1;
c_73108.elements = (object *)e_73118;
c_73108.elements[0] = old_737_7319;

return_closcall4(data,  __glo_dynamic_91wind_scheme_base,  ((closureN)self_7371)->elements[0], &c_73103, ((closureN)self_7371)->elements[1], &c_73108);; 
}

static void __lambda_9(void *data, int argc, object self_7373, object k_7340) {
  
closureN_type c_73110;
object e_73117 [2];
c_73110.hdr.mark = gc_color_red;
 c_73110.hdr.grayed = 0;
c_73110.tag = closureN_tag;
 c_73110.fn = (function_type)__lambda_10;
c_73110.num_args = 1;
c_73110.num_elements = 2;
c_73110.elements = (object *)e_73117;
c_73110.elements[0] = k_7340;
c_73110.elements[1] = ((closureN)self_7373)->elements[0];

return_closcall1(data,  __glo_current_91input_91port_scheme_base,  &c_73110);; 
}

static void __lambda_10(void *data, int argc, object self_7374, object r_7343) {
  
  Cyc_io_close_port(data, r_7343);return_closcall3(data,  __glo_current_91input_91port_scheme_base,  ((closureN)self_7374)->elements[0], quote__121param_91set_67_125, ((closureN)self_7374)->elements[1]);;; 
}

static void __lambda_8(void *data, int argc, object self_7372, object k_7344) {
  return_closcall3(data,  __glo_current_91input_91port_scheme_base,  k_7344, quote__121param_91set_67_125, ((closureN)self_7372)->elements[0]);; 
}

static void __lambda_2(void *data, int argc, closure _,object k_7331, object string_733_7315, object proc_734_7316) {
  Cyc_st_add(data, "scheme/file.sld:call-with-output-file");

port_type c_7391 = Cyc_io_open_output_file(data,string_733_7315);
return_closcall3(data,  __glo_call_91with_91port_scheme_base,  k_7331, &c_7391, proc_734_7316);; 
}

static void __lambda_1(void *data, int argc, closure _,object k_7327, object string_731_7313, object proc_732_7314) {
  Cyc_st_add(data, "scheme/file.sld:call-with-input-file");

port_type c_7386 = Cyc_io_open_input_file(data,string_731_7313);
return_closcall3(data,  __glo_call_91with_91port_scheme_base,  k_7327, &c_7386, proc_732_7314);; 
}

void c_schemefile_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_schemefile_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);
  quote__121param_91convert_125 = find_or_add_symbol("<param-convert>");
  quote__121param_91set_67_125 = find_or_add_symbol("<param-set!>");

  add_global("__glo_lib_91init_117schemefile_scheme_file", (object *) &__glo_lib_91init_117schemefile_scheme_file);
  add_global("__glo_with_91output_91to_91file_scheme_file", (object *) &__glo_with_91output_91to_91file_scheme_file);
  add_global("__glo_with_91input_91from_91file_scheme_file", (object *) &__glo_with_91input_91from_91file_scheme_file);
  add_global("__glo_call_91with_91output_91file_scheme_file", (object *) &__glo_call_91with_91output_91file_scheme_file);
  add_global("__glo_call_91with_91input_91file_scheme_file", (object *) &__glo_call_91with_91input_91file_scheme_file);
  add_symbol(quote__121param_91convert_125);
  add_symbol(quote__121param_91set_67_125);
  mclosure0(c_73164, (function_type)__lambda_19);c_73164.num_args = 0; 
  __glo_lib_91init_117schemefile_scheme_file = &c_73164; 
  mclosure0(c_73128, (function_type)__lambda_11);c_73128.num_args = 2; 
  __glo_with_91output_91to_91file_scheme_file = &c_73128; 
  mclosure0(c_7392, (function_type)__lambda_3);c_7392.num_args = 2; 
  __glo_with_91input_91from_91file_scheme_file = &c_7392; 
  mclosure0(c_7387, (function_type)__lambda_2);c_7387.num_args = 2; 
  __glo_call_91with_91output_91file_scheme_file = &c_7387; 
  mclosure0(c_7382, (function_type)__lambda_1);c_7382.num_args = 2; 
  __glo_call_91with_91input_91file_scheme_file = &c_7382; 

  mclosure0(clo_73167, c_schemefile_inlinable_lambdas); make_pair(pair_73166, find_or_add_symbol("c_schemefile_inlinable_lambdas"), &clo_73167);
  make_cvar(cvar_73168, (object *)&__glo_lib_91init_117schemefile_scheme_file);make_pair(pair_73169, find_or_add_symbol("lib-init:schemefile"), &cvar_73168);
  make_cvar(cvar_73170, (object *)&__glo_with_91output_91to_91file_scheme_file);make_pair(pair_73171, find_or_add_symbol("with-output-to-file"), &cvar_73170);
  make_cvar(cvar_73172, (object *)&__glo_with_91input_91from_91file_scheme_file);make_pair(pair_73173, find_or_add_symbol("with-input-from-file"), &cvar_73172);
  make_cvar(cvar_73174, (object *)&__glo_call_91with_91output_91file_scheme_file);make_pair(pair_73175, find_or_add_symbol("call-with-output-file"), &cvar_73174);
  make_cvar(cvar_73176, (object *)&__glo_call_91with_91input_91file_scheme_file);make_pair(pair_73177, find_or_add_symbol("call-with-input-file"), &cvar_73176);
make_pair(c_73183, &pair_73166,Cyc_global_variables);
make_pair(c_73182, &pair_73169, &c_73183);
make_pair(c_73181, &pair_73171, &c_73182);
make_pair(c_73180, &pair_73173, &c_73181);
make_pair(c_73179, &pair_73175, &c_73180);
make_pair(c_73178, &pair_73177, &c_73179);
Cyc_global_variables = &c_73178;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemefile_scheme_file)->fn)(data, 1, cont, cont);
}
void c_schemefile_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_file");
  c_schemefile_entry_pt_first_lambda(data, argc, cont,value);
}
