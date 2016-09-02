/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.1.6 (beta)
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

#define closcall4(td, clo,a1,a2,a3,a4) \
if (type_is_pair_prim(clo)) { \
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

#include "cyclone/types.h"
object __glo_lib_91init_117srfi111_srfi_111 = NULL;
object __glo_box_srfi_111 = NULL;
object __glo_set_91box_67_srfi_111 = NULL;
object __glo_unbox_srfi_111 = NULL;
object __glo_box_127_srfi_111 = NULL;
object __glo_box_91type_srfi_111 = NULL;
extern object __glo_member_scheme_base;
extern object __glo_memv_scheme_base;
extern object __glo_memq_scheme_base;
extern object __glo_assoc_scheme_base;
extern object __glo_assv_scheme_base;
extern object __glo_assq_scheme_base;
extern object __glo_cons_91source_scheme_base;
extern object __glo_syntax_91rules_scheme_base;
extern object __glo_letrec_85_scheme_base;
extern object __glo_guard_scheme_base;
extern object __glo_guard_91aux_scheme_base;
extern object __glo_define_91record_91type_scheme_base;
extern object __glo_record_127_scheme_base;
extern object __glo_register_91simple_91type_scheme_base;
extern object __glo_make_91type_91predicate_scheme_base;
extern object __glo_make_91constructor_scheme_base;
extern object __glo_make_91getter_scheme_base;
extern object __glo_make_91setter_scheme_base;
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
extern object __glo_exact_127_scheme_base;
extern object __glo_inexact_127_scheme_base;
extern object __glo_odd_127_scheme_base;
extern object __glo_complex_127_scheme_base;
extern object __glo_rational_127_scheme_base;
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
extern object __glo_error_scheme_base;
extern object __glo_raise_scheme_base;
extern object __glo_raise_91continuable_scheme_base;
extern object __glo_with_91exception_91handler_scheme_base;
extern object __glo_Cyc_91add_91exception_91handler_scheme_base;
extern object __glo_Cyc_91remove_91exception_91handler_scheme_base;
extern object __glo_newline_scheme_base;
extern object __glo_write_91char_scheme_base;
extern object __glo_write_91string_scheme_base;
extern object __glo_flush_91output_91port_scheme_base;
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
#include "cyclone/runtime.h"
defsymbol(value);
static void __lambda_18(void *data, int argc, closure _,object k_737) ;
static void __lambda_17(void *data, int argc, object self_7337, object r_7326) ;
static void __lambda_16(void *data, int argc, object self_7338, object r_7325) ;
static void __lambda_15(void *data, int argc, object self_7339, object r_739) ;
static void __lambda_14(void *data, int argc, object self_7340, object r_7324) ;
static void __lambda_13(void *data, int argc, object self_7341, object r_7310) ;
static void __lambda_12(void *data, int argc, object self_7342, object r_7323) ;
static void __lambda_11(void *data, int argc, object self_7343, object r_7322) ;
static void __lambda_10(void *data, int argc, object self_7344, object r_7321) ;
static void __lambda_9(void *data, int argc, object self_7345, object r_7311) ;
static void __lambda_8(void *data, int argc, object self_7346, object r_7320) ;
static void __lambda_7(void *data, int argc, object self_7347, object r_7319) ;
static void __lambda_6(void *data, int argc, object self_7348, object r_7318) ;
static void __lambda_5(void *data, int argc, object self_7349, object r_7312) ;
static void __lambda_4(void *data, int argc, object self_7350, object _75make_732) ;
static void __lambda_3(void *data, int argc, object self_7351, object k_7315, object value_733) ;
static void __lambda_2(void *data, int argc, object self_7352, object res_734) ;
static void __lambda_1(void *data, int argc, object self_7353, object r_7317) ;
static void __lambda_0(void *data, int argc, object self_7354, object r_7313) ;

static void __lambda_18(void *data, int argc, closure _,object k_737) {
  Cyc_st_add(data, "srfi/111.sld:lib-init:srfi111");

closureN_type c_7357;
c_7357.hdr.mark = gc_color_red;
 c_7357.hdr.grayed = 0;
c_7357.tag = closureN_tag;
 c_7357.fn = (function_type)__lambda_17;
c_7357.num_args = 1;
c_7357.num_elements = 1;
c_7357.elements = (object *)alloca(sizeof(object) * 1);
c_7357.elements[0] = k_737;


make_pair(c_73111,quote_value,NULL);
return_closcall1(data,(closure)&c_7357,  &c_73111);; 
}

static void __lambda_17(void *data, int argc, object self_7337, object r_7326) {
  
closureN_type c_7359;
c_7359.hdr.mark = gc_color_red;
 c_7359.hdr.grayed = 0;
c_7359.tag = closureN_tag;
 c_7359.fn = (function_type)__lambda_16;
c_7359.num_args = 1;
c_7359.num_elements = 1;
c_7359.elements = (object *)alloca(sizeof(object) * 1);
c_7359.elements[0] = ((closureN)self_7337)->elements[0];

return_closcall4(data,  __glo_register_91simple_91type_scheme_base,  &c_7359, __glo_box_91type_srfi_111, boolean_f, r_7326);; 
}

static void __lambda_16(void *data, int argc, object self_7338, object r_7325) {
  
closureN_type c_7361;
c_7361.hdr.mark = gc_color_red;
 c_7361.hdr.grayed = 0;
c_7361.tag = closureN_tag;
 c_7361.fn = (function_type)__lambda_15;
c_7361.num_args = 1;
c_7361.num_elements = 1;
c_7361.elements = (object *)alloca(sizeof(object) * 1);
c_7361.elements[0] = ((closureN)self_7338)->elements[0];

return_closcall1(data,(closure)&c_7361,  global_set(__glo_box_91type_srfi_111, r_7325));; 
}

static void __lambda_15(void *data, int argc, object self_7339, object r_739) {
  
closureN_type c_7363;
c_7363.hdr.mark = gc_color_red;
 c_7363.hdr.grayed = 0;
c_7363.tag = closureN_tag;
 c_7363.fn = (function_type)__lambda_14;
c_7363.num_args = 1;
c_7363.num_elements = 1;
c_7363.elements = (object *)alloca(sizeof(object) * 1);
c_7363.elements[0] = ((closureN)self_7339)->elements[0];

return_closcall3(data,  __glo_make_91type_91predicate_scheme_base,  &c_7363, __glo_box_127_srfi_111, __glo_box_91type_srfi_111);; 
}

static void __lambda_14(void *data, int argc, object self_7340, object r_7324) {
  
closureN_type c_7365;
c_7365.hdr.mark = gc_color_red;
 c_7365.hdr.grayed = 0;
c_7365.tag = closureN_tag;
 c_7365.fn = (function_type)__lambda_13;
c_7365.num_args = 1;
c_7365.num_elements = 1;
c_7365.elements = (object *)alloca(sizeof(object) * 1);
c_7365.elements[0] = ((closureN)self_7340)->elements[0];

return_closcall1(data,(closure)&c_7365,  global_set(__glo_box_127_srfi_111, r_7324));; 
}

static void __lambda_13(void *data, int argc, object self_7341, object r_7310) {
  
closureN_type c_7367;
c_7367.hdr.mark = gc_color_red;
 c_7367.hdr.grayed = 0;
c_7367.tag = closureN_tag;
 c_7367.fn = (function_type)__lambda_12;
c_7367.num_args = 1;
c_7367.num_elements = 1;
c_7367.elements = (object *)alloca(sizeof(object) * 1);
c_7367.elements[0] = ((closureN)self_7341)->elements[0];

return_closcall1(data,(closure)&c_7367,  quote_value);; 
}

static void __lambda_12(void *data, int argc, object self_7342, object r_7323) {
  
closureN_type c_7369;
c_7369.hdr.mark = gc_color_red;
 c_7369.hdr.grayed = 0;
c_7369.tag = closureN_tag;
 c_7369.fn = (function_type)__lambda_11;
c_7369.num_args = 1;
c_7369.num_elements = 1;
c_7369.elements = (object *)alloca(sizeof(object) * 1);
c_7369.elements[0] = ((closureN)self_7342)->elements[0];

return_closcall3(data,  __glo_type_91slot_91offset_scheme_base,  &c_7369, __glo_box_91type_srfi_111, r_7323);; 
}

static void __lambda_11(void *data, int argc, object self_7343, object r_7322) {
  
closureN_type c_7371;
c_7371.hdr.mark = gc_color_red;
 c_7371.hdr.grayed = 0;
c_7371.tag = closureN_tag;
 c_7371.fn = (function_type)__lambda_10;
c_7371.num_args = 1;
c_7371.num_elements = 1;
c_7371.elements = (object *)alloca(sizeof(object) * 1);
c_7371.elements[0] = ((closureN)self_7343)->elements[0];


make_string(c_73106, "unbox");
return_closcall4(data,  __glo_make_91getter_scheme_base,  &c_7371, &c_73106, __glo_box_91type_srfi_111, r_7322);; 
}

static void __lambda_10(void *data, int argc, object self_7344, object r_7321) {
  
closureN_type c_7373;
c_7373.hdr.mark = gc_color_red;
 c_7373.hdr.grayed = 0;
c_7373.tag = closureN_tag;
 c_7373.fn = (function_type)__lambda_9;
c_7373.num_args = 1;
c_7373.num_elements = 1;
c_7373.elements = (object *)alloca(sizeof(object) * 1);
c_7373.elements[0] = ((closureN)self_7344)->elements[0];

return_closcall1(data,(closure)&c_7373,  global_set(__glo_unbox_srfi_111, r_7321));; 
}

static void __lambda_9(void *data, int argc, object self_7345, object r_7311) {
  
closureN_type c_7375;
c_7375.hdr.mark = gc_color_red;
 c_7375.hdr.grayed = 0;
c_7375.tag = closureN_tag;
 c_7375.fn = (function_type)__lambda_8;
c_7375.num_args = 1;
c_7375.num_elements = 1;
c_7375.elements = (object *)alloca(sizeof(object) * 1);
c_7375.elements[0] = ((closureN)self_7345)->elements[0];

return_closcall1(data,(closure)&c_7375,  quote_value);; 
}

static void __lambda_8(void *data, int argc, object self_7346, object r_7320) {
  
closureN_type c_7377;
c_7377.hdr.mark = gc_color_red;
 c_7377.hdr.grayed = 0;
c_7377.tag = closureN_tag;
 c_7377.fn = (function_type)__lambda_7;
c_7377.num_args = 1;
c_7377.num_elements = 1;
c_7377.elements = (object *)alloca(sizeof(object) * 1);
c_7377.elements[0] = ((closureN)self_7346)->elements[0];

return_closcall3(data,  __glo_type_91slot_91offset_scheme_base,  &c_7377, __glo_box_91type_srfi_111, r_7320);; 
}

static void __lambda_7(void *data, int argc, object self_7347, object r_7319) {
  
closureN_type c_7379;
c_7379.hdr.mark = gc_color_red;
 c_7379.hdr.grayed = 0;
c_7379.tag = closureN_tag;
 c_7379.fn = (function_type)__lambda_6;
c_7379.num_args = 1;
c_7379.num_elements = 1;
c_7379.elements = (object *)alloca(sizeof(object) * 1);
c_7379.elements[0] = ((closureN)self_7347)->elements[0];


make_string(c_73103, "set-box!");
return_closcall4(data,  __glo_make_91setter_scheme_base,  &c_7379, &c_73103, __glo_box_91type_srfi_111, r_7319);; 
}

static void __lambda_6(void *data, int argc, object self_7348, object r_7318) {
  
closureN_type c_7381;
c_7381.hdr.mark = gc_color_red;
 c_7381.hdr.grayed = 0;
c_7381.tag = closureN_tag;
 c_7381.fn = (function_type)__lambda_5;
c_7381.num_args = 1;
c_7381.num_elements = 1;
c_7381.elements = (object *)alloca(sizeof(object) * 1);
c_7381.elements[0] = ((closureN)self_7348)->elements[0];

return_closcall1(data,(closure)&c_7381,  global_set(__glo_set_91box_67_srfi_111, r_7318));; 
}

static void __lambda_5(void *data, int argc, object self_7349, object r_7312) {
  
closureN_type c_7383;
c_7383.hdr.mark = gc_color_red;
 c_7383.hdr.grayed = 0;
c_7383.tag = closureN_tag;
 c_7383.fn = (function_type)__lambda_4;
c_7383.num_args = 1;
c_7383.num_elements = 1;
c_7383.elements = (object *)alloca(sizeof(object) * 1);
c_7383.elements[0] = ((closureN)self_7349)->elements[0];


make_string(c_73100, "box");
return_closcall3(data,  __glo_make_91constructor_scheme_base,  &c_7383, &c_73100, __glo_box_91type_srfi_111);; 
}

static void __lambda_4(void *data, int argc, object self_7350, object _75make_732) {
  
closureN_type c_7385;
c_7385.hdr.mark = gc_color_red;
 c_7385.hdr.grayed = 0;
c_7385.tag = closureN_tag;
 c_7385.fn = (function_type)__lambda_0;
c_7385.num_args = 1;
c_7385.num_elements = 1;
c_7385.elements = (object *)alloca(sizeof(object) * 1);
c_7385.elements[0] = ((closureN)self_7350)->elements[0];


closureN_type c_7390;
c_7390.hdr.mark = gc_color_red;
 c_7390.hdr.grayed = 0;
c_7390.tag = closureN_tag;
 c_7390.fn = (function_type)__lambda_3;
c_7390.num_args = 1;
c_7390.num_elements = 1;
c_7390.elements = (object *)alloca(sizeof(object) * 1);
c_7390.elements[0] = _75make_732;

return_closcall1(data,(closure)&c_7385,  &c_7390);; 
}

static void __lambda_3(void *data, int argc, object self_7351, object k_7315, object value_733) {
  
closureN_type c_7393;
c_7393.hdr.mark = gc_color_red;
 c_7393.hdr.grayed = 0;
c_7393.tag = closureN_tag;
 c_7393.fn = (function_type)__lambda_2;
c_7393.num_args = 1;
c_7393.num_elements = 2;
c_7393.elements = (object *)alloca(sizeof(object) * 2);
c_7393.elements[0] = k_7315;
c_7393.elements[1] = value_733;

return_closcall1(data,  ((closureN)self_7351)->elements[0],  &c_7393);; 
}

static void __lambda_2(void *data, int argc, object self_7352, object res_734) {
  
closureN_type c_7395;
c_7395.hdr.mark = gc_color_red;
 c_7395.hdr.grayed = 0;
c_7395.tag = closureN_tag;
 c_7395.fn = (function_type)__lambda_1;
c_7395.num_args = 1;
c_7395.num_elements = 2;
c_7395.elements = (object *)alloca(sizeof(object) * 2);
c_7395.elements[0] = ((closureN)self_7352)->elements[0];
c_7395.elements[1] = res_734;

return_closcall3(data,  __glo_set_91box_67_srfi_111,  &c_7395, res_734, ((closureN)self_7352)->elements[1]);; 
}

static void __lambda_1(void *data, int argc, object self_7353, object r_7317) {
  return_closcall1(data,  ((closureN)self_7353)->elements[0],  ((closureN)self_7353)->elements[1]);; 
}

static void __lambda_0(void *data, int argc, object self_7354, object r_7313) {
  return_closcall1(data,  ((closureN)self_7354)->elements[0],  global_set(__glo_box_srfi_111, r_7313));; 
}

void c_srfi111_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  quote_value = find_or_add_symbol("value");

  add_global((object *) &__glo_lib_91init_117srfi111_srfi_111);
  add_global((object *) &__glo_box_srfi_111);
  add_global((object *) &__glo_set_91box_67_srfi_111);
  add_global((object *) &__glo_unbox_srfi_111);
  add_global((object *) &__glo_box_127_srfi_111);
  add_global((object *) &__glo_box_91type_srfi_111);
  add_symbol(quote_value);
  mclosure0(c_7355, (function_type)__lambda_18);c_7355.num_args = 0; 
  __glo_lib_91init_117srfi111_srfi_111 = &c_7355; 
  __glo_box_srfi_111 = boolean_f; 
  __glo_set_91box_67_srfi_111 = boolean_f; 
  __glo_unbox_srfi_111 = boolean_f; 
  __glo_box_127_srfi_111 = boolean_f; 
  __glo_box_91type_srfi_111 = boolean_f; 

  make_cvar(cvar_73112, (object *)&__glo_lib_91init_117srfi111_srfi_111);make_pair(pair_73113, find_or_add_symbol("lib-init:srfi111"), &cvar_73112);
  make_cvar(cvar_73114, (object *)&__glo_box_srfi_111);make_pair(pair_73115, find_or_add_symbol("box"), &cvar_73114);
  make_cvar(cvar_73116, (object *)&__glo_set_91box_67_srfi_111);make_pair(pair_73117, find_or_add_symbol("set-box!"), &cvar_73116);
  make_cvar(cvar_73118, (object *)&__glo_unbox_srfi_111);make_pair(pair_73119, find_or_add_symbol("unbox"), &cvar_73118);
  make_cvar(cvar_73120, (object *)&__glo_box_127_srfi_111);make_pair(pair_73121, find_or_add_symbol("box?"), &cvar_73120);
  make_cvar(cvar_73122, (object *)&__glo_box_91type_srfi_111);make_pair(pair_73123, find_or_add_symbol("box-type"), &cvar_73122);
make_pair(c_73124, &pair_73113,Cyc_global_variables);
make_pair(c_73125, &pair_73115, &c_73124);
make_pair(c_73126, &pair_73117, &c_73125);
make_pair(c_73127, &pair_73119, &c_73126);
make_pair(c_73128, &pair_73121, &c_73127);
make_pair(c_73129, &pair_73123, &c_73128);
Cyc_global_variables = &c_73129;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117srfi111_srfi_111)->fn)(data, 1, cont, cont);
}
