/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2018 Justin Ethier
 ** Version 0.8 
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

#include "cyclone/types.h"
object __glo_lib_91init_117schemelazy_scheme_lazy = NULL;
object __glo_promise_127_scheme_lazy = NULL;
object __glo_make_91promise_scheme_lazy = NULL;
object __glo_delay_91force_scheme_lazy = NULL;
object __glo_delay_scheme_lazy = NULL;
object __glo_force_scheme_lazy = NULL;
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
extern object __glo_string_123_127_191_191inline_191_191_scheme_base;
extern object __glo_string_121_127_191_191inline_191_191_scheme_base;
extern object __glo_string_121_123_127_191_191inline_191_191_scheme_base;
extern object __glo_string_125_127_191_191inline_191_191_scheme_base;
extern object __glo_string_125_123_127_191_191inline_191_191_scheme_base;
extern object __glo_not_191_191inline_191_191_scheme_base;
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
extern object __glo_denominator_191_191inline_191_191_scheme_base;
extern object __glo_numerator_191_191inline_191_191_scheme_base;
extern object __glo_quotient_191_191inline_191_191_scheme_base;
extern object __glo_square_191_191inline_191_191_scheme_base;
extern object __glo_eof_91object_191_191inline_191_191_scheme_base;
#include "cyclone/runtime.h"
defsymbol(lambda);
defsymbol(make_91promise);
static void __lambda_11(void *data, int argc, closure _,object k_7331) ;
static void __lambda_10(void *data, int argc, closure _,object k_7337, object proc_7314_7318) ;
static void __lambda_9(void *data, int argc, object self_7371, object result_91ready_127_7316_7320, object result_7315_7319) ;
static void __lambda_8(void *data, int argc, object self_7372, object result_91ready_127_7316_7320) ;
static void __lambda_7(void *data, int argc, object self_7373, object result_7315_7319) ;
static void __lambda_6(void *data, int argc, object self_7374, object k_7338) ;
static void __lambda_5(void *data, int argc, object self_7375, object x_7317_7321) ;
static void __lambda_4(void *data, int argc, object self_7376, object r_7340) ;
static void __lambda_3(void *data, int argc, object self_7377, object r_7341) ;
static void __lambda_2(void *data, int argc, closure _,object k_7344, object expr_7310_7324, object rename_739_7323, object compare_738_7322) ;
static void __lambda_1(void *data, int argc, closure _,object k_7357, object expr_734_7327, object rename_733_7326, object compare_732_7325) ;
static void __lambda_0(void *data, int argc, closure _,object k_7370, object object_731_7328) ;

static void __lambda_11(void *data, int argc, closure _,object k_7331) {
  Cyc_st_add(data, "scheme/lazy.sld:lib-init:schemelazy");
return_closcall1(data,  k_7331,  global_set(__glo_promise_127_scheme_lazy, primitive_procedure_127));; 
}

static void __lambda_10(void *data, int argc, closure _,object k_7337, object proc_7314_7318) {
  Cyc_st_add(data, "scheme/lazy.sld:make-promise");

closureN_type c_73120;
c_73120.hdr.mark = gc_color_red;
 c_73120.hdr.grayed = 0;
c_73120.tag = closureN_tag;
 c_73120.fn = (function_type)__lambda_9;
c_73120.num_args = 2;
c_73120.num_elements = 2;
c_73120.elements = (object *)alloca(sizeof(object) * 2);
c_73120.elements[0] = k_7337;
c_73120.elements[1] = proc_7314_7318;

return_closcall2(data,(closure)&c_73120,  boolean_f, boolean_f);; 
}

static void __lambda_9(void *data, int argc, object self_7371, object result_91ready_127_7316_7320, object result_7315_7319) {
  
closureN_type c_73122;
c_73122.hdr.mark = gc_color_red;
 c_73122.hdr.grayed = 0;
c_73122.tag = closureN_tag;
 c_73122.fn = (function_type)__lambda_8;
c_73122.num_args = 1;
c_73122.num_elements = 3;
c_73122.elements = (object *)alloca(sizeof(object) * 3);
c_73122.elements[0] = ((closureN)self_7371)->elements[0];
c_73122.elements[1] = ((closureN)self_7371)->elements[1];
c_73122.elements[2] = result_7315_7319;


make_cell(c_73167,result_91ready_127_7316_7320);
return_closcall1(data,(closure)&c_73122,  &c_73167);; 
}

static void __lambda_8(void *data, int argc, object self_7372, object result_91ready_127_7316_7320) {
  
closureN_type c_73124;
c_73124.hdr.mark = gc_color_red;
 c_73124.hdr.grayed = 0;
c_73124.tag = closureN_tag;
 c_73124.fn = (function_type)__lambda_7;
c_73124.num_args = 1;
c_73124.num_elements = 3;
c_73124.elements = (object *)alloca(sizeof(object) * 3);
c_73124.elements[0] = ((closureN)self_7372)->elements[0];
c_73124.elements[1] = ((closureN)self_7372)->elements[1];
c_73124.elements[2] = result_91ready_127_7316_7320;


make_cell(c_73163,((closureN)self_7372)->elements[2]);
return_closcall1(data,(closure)&c_73124,  &c_73163);; 
}

static void __lambda_7(void *data, int argc, object self_7373, object result_7315_7319) {
  
closureN_type c_73127;
c_73127.hdr.mark = gc_color_red;
 c_73127.hdr.grayed = 0;
c_73127.tag = closureN_tag;
 c_73127.fn = (function_type)__lambda_6;
c_73127.num_args = 0;
c_73127.num_elements = 3;
c_73127.elements = (object *)alloca(sizeof(object) * 3);
c_73127.elements[0] = ((closureN)self_7373)->elements[1];
c_73127.elements[1] = result_7315_7319;
c_73127.elements[2] = ((closureN)self_7373)->elements[2];

return_closcall1(data,  ((closureN)self_7373)->elements[0],  &c_73127);; 
}

static void __lambda_6(void *data, int argc, object self_7374, object k_7338) {
  if( (boolean_f != car(((closureN)self_7374)->elements[2])) ){ 
  return_closcall1(data,  k_7338,  car(((closureN)self_7374)->elements[1]));
} else { 
  
closureN_type c_73137;
c_73137.hdr.mark = gc_color_red;
 c_73137.hdr.grayed = 0;
c_73137.tag = closureN_tag;
 c_73137.fn = (function_type)__lambda_5;
c_73137.num_args = 1;
c_73137.num_elements = 3;
c_73137.elements = (object *)alloca(sizeof(object) * 3);
c_73137.elements[0] = k_7338;
c_73137.elements[1] = ((closureN)self_7374)->elements[1];
c_73137.elements[2] = ((closureN)self_7374)->elements[2];

return_closcall1(data,  ((closureN)self_7374)->elements[0],  &c_73137);}
; 
}

static void __lambda_5(void *data, int argc, object self_7375, object x_7317_7321) {
  if( (boolean_f != car(((closureN)self_7375)->elements[2])) ){ 
  return_closcall1(data,  ((closureN)self_7375)->elements[0],  car(((closureN)self_7375)->elements[1]));
} else { 
  
closureN_type c_73147;
c_73147.hdr.mark = gc_color_red;
 c_73147.hdr.grayed = 0;
c_73147.tag = closureN_tag;
 c_73147.fn = (function_type)__lambda_4;
c_73147.num_args = 1;
c_73147.num_elements = 3;
c_73147.elements = (object *)alloca(sizeof(object) * 3);
c_73147.elements[0] = ((closureN)self_7375)->elements[0];
c_73147.elements[1] = ((closureN)self_7375)->elements[1];
c_73147.elements[2] = ((closureN)self_7375)->elements[2];

return_closcall1(data,(closure)&c_73147,  Cyc_set_cell(data, ((closureN)self_7375)->elements[1], x_7317_7321));}
; 
}

static void __lambda_4(void *data, int argc, object self_7376, object r_7340) {
  
closureN_type c_73149;
c_73149.hdr.mark = gc_color_red;
 c_73149.hdr.grayed = 0;
c_73149.tag = closureN_tag;
 c_73149.fn = (function_type)__lambda_3;
c_73149.num_args = 1;
c_73149.num_elements = 2;
c_73149.elements = (object *)alloca(sizeof(object) * 2);
c_73149.elements[0] = ((closureN)self_7376)->elements[0];
c_73149.elements[1] = ((closureN)self_7376)->elements[1];

return_closcall1(data,(closure)&c_73149,  Cyc_set_cell(data, ((closureN)self_7376)->elements[2], boolean_t));; 
}

static void __lambda_3(void *data, int argc, object self_7377, object r_7341) {
  return_closcall1(data,  ((closureN)self_7377)->elements[0],  car(((closureN)self_7377)->elements[1]));; 
}

static void __lambda_2(void *data, int argc, closure _,object k_7344, object expr_7310_7324, object rename_739_7323, object compare_738_7322) {
  Cyc_st_add(data, "scheme/lazy.sld:delay-force");

make_pair(c_73115,Cyc_cadr(data, expr_7310_7324), NULL);

make_pair(c_73112,NULL, &c_73115);

make_pair(c_73109,quote_lambda, &c_73112);

make_pair(c_73106,&c_73109, NULL);

make_pair(c_73103,quote_make_91promise, &c_73106);
return_closcall1(data,  k_7344,  &c_73103);; 
}

static void __lambda_1(void *data, int argc, closure _,object k_7357, object expr_734_7327, object rename_733_7326, object compare_732_7325) {
  Cyc_st_add(data, "scheme/lazy.sld:delay");

make_pair(c_7396,Cyc_cadr(data, expr_734_7327), NULL);

make_pair(c_7393,NULL, &c_7396);

make_pair(c_7390,quote_lambda, &c_7393);

make_pair(c_7387,&c_7390, NULL);

make_pair(c_7384,quote_make_91promise, &c_7387);
return_closcall1(data,  k_7357,  &c_7384);; 
}

static void __lambda_0(void *data, int argc, closure _,object k_7370, object object_731_7328) {
  Cyc_st_add(data, "scheme/lazy.sld:force");
return_closcall1(data,  object_731_7328,  k_7370);; 
}

void c_schemelazy_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_schemelazy_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);
  quote_lambda = find_or_add_symbol("lambda");
  quote_make_91promise = find_or_add_symbol("make-promise");

  add_global((object *) &__glo_lib_91init_117schemelazy_scheme_lazy);
  add_global((object *) &__glo_promise_127_scheme_lazy);
  add_global((object *) &__glo_make_91promise_scheme_lazy);
  add_global((object *) &__glo_delay_91force_scheme_lazy);
  add_global((object *) &__glo_delay_scheme_lazy);
  add_global((object *) &__glo_force_scheme_lazy);
  add_symbol(quote_lambda);
  add_symbol(quote_make_91promise);
  mclosure0(c_73168, (function_type)__lambda_11);c_73168.num_args = 0; 
  __glo_lib_91init_117schemelazy_scheme_lazy = &c_73168; 
  mclosure0(c_73118, (function_type)__lambda_10);c_73118.num_args = 1; 
  __glo_make_91promise_scheme_lazy = &c_73118; 
  mmacro(c_7399, (function_type)__lambda_2);c_7399.num_args = 3; 
  __glo_delay_91force_scheme_lazy = &c_7399; 
  mmacro(c_7380, (function_type)__lambda_1);c_7380.num_args = 3; 
  __glo_delay_scheme_lazy = &c_7380; 
  mclosure0(c_7378, (function_type)__lambda_0);c_7378.num_args = 1; 
  __glo_force_scheme_lazy = &c_7378; 
  __glo_promise_127_scheme_lazy = boolean_f; 

  mclosure0(clo_73173, c_schemelazy_inlinable_lambdas); make_pair(pair_73172, find_or_add_symbol("c_schemelazy_inlinable_lambdas"), &clo_73173);
  make_cvar(cvar_73174, (object *)&__glo_lib_91init_117schemelazy_scheme_lazy);make_pair(pair_73175, find_or_add_symbol("lib-init:schemelazy"), &cvar_73174);
  make_cvar(cvar_73176, (object *)&__glo_promise_127_scheme_lazy);make_pair(pair_73177, find_or_add_symbol("promise?"), &cvar_73176);
  make_cvar(cvar_73178, (object *)&__glo_make_91promise_scheme_lazy);make_pair(pair_73179, find_or_add_symbol("make-promise"), &cvar_73178);
  make_cvar(cvar_73180, (object *)&__glo_delay_91force_scheme_lazy);make_pair(pair_73181, find_or_add_symbol("delay-force"), &cvar_73180);
  make_cvar(cvar_73182, (object *)&__glo_delay_scheme_lazy);make_pair(pair_73183, find_or_add_symbol("delay"), &cvar_73182);
  make_cvar(cvar_73184, (object *)&__glo_force_scheme_lazy);make_pair(pair_73185, find_or_add_symbol("force"), &cvar_73184);
make_pair(c_73186, &pair_73172,Cyc_global_variables);
make_pair(c_73187, &pair_73175, &c_73186);
make_pair(c_73188, &pair_73177, &c_73187);
make_pair(c_73189, &pair_73179, &c_73188);
make_pair(c_73190, &pair_73181, &c_73189);
make_pair(c_73191, &pair_73183, &c_73190);
make_pair(c_73192, &pair_73185, &c_73191);
Cyc_global_variables = &c_73192;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemelazy_scheme_lazy)->fn)(data, 1, cont, cont);
}
void c_schemelazy_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_lazy");
  c_schemelazy_entry_pt_first_lambda(data, argc, cont,value);
}
