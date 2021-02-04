/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2021 Justin Ethier
 ** Version 0.26 
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

#include "cyclone/types.h"
object __glo_lib_91init_117schemewrite_scheme_write = NULL;
object __glo_write_91simple_scheme_write = NULL;
object __glo_write_91shared_scheme_write = NULL;
object __glo_write_scheme_write = NULL;
object __glo_display_scheme_write = NULL;
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
extern object __glo_make_91record_91marker_scheme_base;
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
extern object __glo_error_95loc_scheme_base;
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
extern object __glo_make_91record_91marker_191_191inline_191_191_scheme_base;
#include "cyclone/runtime.h"
defsymbol(write_91shared);
defsymbol(write_91simple);
static void __lambda_5(void *data, int argc, closure _,object k_7327) ;
static void __lambda_6(void *data, int argc, object self_7332, object r_7329) ;
static void __lambda_3(void *data, int argc, closure _,object k_7317, object obj_733_737, object port_734_738_raw, ...) ;
static void __lambda_4(void *data, int argc, object self_7331, object r_7319) ;
static void __lambda_1(void *data, int argc, closure _,object k_7311, object obj_731_735, object port_732_736_raw, ...) ;
static void __lambda_2(void *data, int argc, object self_7330, object r_7313) ;

static void __lambda_5(void *data, int argc, closure _,object k_7327) {
  Cyc_st_add(data, "scheme/write.sld:lib-init:schemewrite");

closureN_type c_7367;
object e_7373 [1];
c_7367.hdr.mark = gc_color_red;
 c_7367.hdr.grayed = 0;
c_7367.tag = closureN_tag;
 c_7367.fn = (function_type)__lambda_6;
c_7367.num_args = 1;
c_7367.num_elements = 1;
c_7367.elements = (object *)e_7373;
c_7367.elements[0] = k_7327;


object c_7376 = global_set_cps_id(data,(closure)&c_7367,"__glo_write_91shared_scheme_write", __glo_write_91shared_scheme_write, __glo_write_scheme_write);
return_closcall1(data,(closure)&c_7367,  c_7376);; 
}

static void __lambda_6(void *data, int argc, object self_7332, object r_7329) {
  
object c_7372 = global_set_cps_id(data,  ((closureN)self_7332)->elements[0],"__glo_write_91simple_scheme_write", __glo_write_91simple_scheme_write, __glo_write_scheme_write);
return_closcall1(data,  ((closureN)self_7332)->elements[0],  c_7372);; 
}

static void __lambda_3(void *data, int argc, closure _,object k_7317, object obj_733_737, object port_734_738_raw, ...) {
load_varargs(port_734_738, port_734_738_raw, argc - 2);
  Cyc_st_add(data, "scheme/write.sld:write");
  
if( (boolean_f != Cyc_is_null(port_734_738)) ){ 
  
closureN_type c_7353;
object e_7359 [2];
c_7353.hdr.mark = gc_color_red;
 c_7353.hdr.grayed = 0;
c_7353.tag = closureN_tag;
 c_7353.fn = (function_type)__lambda_4;
c_7353.num_args = 1;
c_7353.num_elements = 2;
c_7353.elements = (object *)e_7359;
c_7353.elements[0] = k_7317;
c_7353.elements[1] = obj_733_737;

return_closcall1(data,  __glo_current_91output_91port_scheme_base,  &c_7353);
} else { 
  



return_closcall1(data,  k_7317,  Cyc_write_va(data, 2,obj_733_737, Cyc_car(data, port_734_738)));}
;; 
}

static void __lambda_4(void *data, int argc, object self_7331, object r_7319) {
  

return_closcall1(data,  ((closureN)self_7331)->elements[0],  Cyc_write_va(data, 2,((closureN)self_7331)->elements[1], r_7319));; 
}

static void __lambda_1(void *data, int argc, closure _,object k_7311, object obj_731_735, object port_732_736_raw, ...) {
load_varargs(port_732_736, port_732_736_raw, argc - 2);
  Cyc_st_add(data, "scheme/write.sld:display");
  
if( (boolean_f != Cyc_is_null(port_732_736)) ){ 
  
closureN_type c_7337;
object e_7343 [2];
c_7337.hdr.mark = gc_color_red;
 c_7337.hdr.grayed = 0;
c_7337.tag = closureN_tag;
 c_7337.fn = (function_type)__lambda_2;
c_7337.num_args = 1;
c_7337.num_elements = 2;
c_7337.elements = (object *)e_7343;
c_7337.elements[0] = k_7311;
c_7337.elements[1] = obj_731_735;

return_closcall1(data,  __glo_current_91output_91port_scheme_base,  &c_7337);
} else { 
  



return_closcall1(data,  k_7311,  Cyc_display_va(data, 2,obj_731_735, Cyc_car(data, port_732_736)));}
;; 
}

static void __lambda_2(void *data, int argc, object self_7330, object r_7313) {
  

return_closcall1(data,  ((closureN)self_7330)->elements[0],  Cyc_display_va(data, 2,((closureN)self_7330)->elements[1], r_7313));; 
}

void c_schemewrite_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_schemewrite_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);
  quote_write_91shared = find_or_add_symbol("write-shared");
  quote_write_91simple = find_or_add_symbol("write-simple");

  add_global("__glo_lib_91init_117schemewrite_scheme_write", (object *) &__glo_lib_91init_117schemewrite_scheme_write);
  add_global("__glo_write_91simple_scheme_write", (object *) &__glo_write_91simple_scheme_write);
  add_global("__glo_write_91shared_scheme_write", (object *) &__glo_write_91shared_scheme_write);
  add_global("__glo_write_scheme_write", (object *) &__glo_write_scheme_write);
  add_global("__glo_display_scheme_write", (object *) &__glo_display_scheme_write);
  add_symbol(quote_write_91shared);
  add_symbol(quote_write_91simple);
  mclosure0(c_7365, (function_type)__lambda_5);c_7365.num_args = 0; 
  __glo_lib_91init_117schemewrite_scheme_write = &c_7365; 
  mclosure0(c_7349, (function_type)__lambda_3);c_7349.num_args = 1; 
  __glo_write_scheme_write = &c_7349; 
  mclosure0(c_7333, (function_type)__lambda_1);c_7333.num_args = 1; 
  __glo_display_scheme_write = &c_7333; 
  __glo_write_91simple_scheme_write = boolean_f; 
  __glo_write_91shared_scheme_write = boolean_f; 

  mclosure0(clo_7378, c_schemewrite_inlinable_lambdas); make_pair(pair_7377, find_or_add_symbol("c_schemewrite_inlinable_lambdas"), &clo_7378);
  make_cvar(cvar_7379, (object *)&__glo_lib_91init_117schemewrite_scheme_write);make_pair(pair_7380, find_or_add_symbol("lib-init:schemewrite"), &cvar_7379);
  make_cvar(cvar_7381, (object *)&__glo_write_91simple_scheme_write);make_pair(pair_7382, find_or_add_symbol("write-simple"), &cvar_7381);
  make_cvar(cvar_7383, (object *)&__glo_write_91shared_scheme_write);make_pair(pair_7384, find_or_add_symbol("write-shared"), &cvar_7383);
  make_cvar(cvar_7385, (object *)&__glo_write_scheme_write);make_pair(pair_7386, find_or_add_symbol("write"), &cvar_7385);
  make_cvar(cvar_7387, (object *)&__glo_display_scheme_write);make_pair(pair_7388, find_or_add_symbol("display"), &cvar_7387);
make_pair(c_7394, &pair_7377,Cyc_global_variables);
make_pair(c_7393, &pair_7380, &c_7394);
make_pair(c_7392, &pair_7382, &c_7393);
make_pair(c_7391, &pair_7384, &c_7392);
make_pair(c_7390, &pair_7386, &c_7391);
make_pair(c_7389, &pair_7388, &c_7390);
Cyc_global_variables = &c_7389;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemewrite_scheme_write)->fn)(data, 1, cont, cont);
}
void c_schemewrite_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_write");
  c_schemewrite_entry_pt_first_lambda(data, argc, cont,value);
}
