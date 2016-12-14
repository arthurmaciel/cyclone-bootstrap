/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2016 Justin Ethier
 ** Version 0.3.3 (beta)
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

#define closcall6(td, clo,a1,a2,a3,a4,a5,a6) \
if (type_is_pair_prim(clo)) { \
   Cyc_apply(td, 5, (closure)(a1), clo,a2,a3,a4,a5,a6); \
} else { \
   ((clo)->fn)(td, 6, clo,a1,a2,a3,a4,a5,a6);\
}
#define return_closcall6(td, clo,a1,a2,a3,a4,a5,a6) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[6]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;buf[4] = a5;buf[5] = a6;\
     GC(td, clo, buf, 6); \
     return; \
 } else {\
     closcall6(td, (closure) (clo),a1,a2,a3,a4,a5,a6); \
     return;\
 } \
}

#define return_direct6(td, _fn,a1,a2,a3,a4,a5,a6) { \
 char top; \
 if (stack_overflow(&top, (((gc_thread_data *)data)->stack_limit))) { \
     object buf[6]; buf[0] = a1;buf[1] = a2;buf[2] = a3;buf[3] = a4;buf[4] = a5;buf[5] = a6; \
     mclosure0(c1, (function_type) _fn); \
     GC(td, &c1, buf, 6); \
     return; \
 } else { \
     (_fn)(td, 6, (closure)_fn,a1,a2,a3,a4,a5,a6); \
 }}

#include "cyclone/types.h"
object __glo_lib_91init_117srfi18_srfi_18 = NULL;
object __glo_condition_91variable_91broadcast_67_srfi_18 = NULL;
object __glo_condition_91variable_91signal_67_srfi_18 = NULL;
object __glo_condition_91variable_91wait_67_srfi_18 = NULL;
object __glo_make_91condition_91variable_srfi_18 = NULL;
object __glo_condition_91variable_127_srfi_18 = NULL;
object __glo_Cyc_91mutex_91unlock_67_srfi_18 = NULL;
object __glo_mutex_91unlock_67_srfi_18 = NULL;
object __glo_mutex_91lock_67_srfi_18 = NULL;
object __glo_make_91mutex_srfi_18 = NULL;
object __glo_mutex_127_srfi_18 = NULL;
object __glo_Cyc_91minor_91gc_srfi_18 = NULL;
object __glo__91_125heap_srfi_18 = NULL;
object __glo_thread_91sleep_67_srfi_18 = NULL;
object __glo_thread_91terminate_67_srfi_18 = NULL;
object __glo_thread_91yield_67_srfi_18 = NULL;
object __glo_thread_91start_67_srfi_18 = NULL;
object __glo__75current_91thread_srfi_18 = NULL;
object __glo__85primordial_91thread_85_srfi_18 = NULL;
object __glo_current_91thread_srfi_18 = NULL;
object __glo_thread_91specific_91set_67_srfi_18 = NULL;
object __glo_thread_91specific_srfi_18 = NULL;
object __glo_thread_91name_srfi_18 = NULL;
object __glo_make_91thread_srfi_18 = NULL;
object __glo_thread_127_srfi_18 = NULL;
extern object __glo_member_scheme_base;
extern object __glo_assoc_scheme_base;
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
extern object __glo_exact_91integer_91sqrt_scheme_base;
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
extern object __glo_parameterize_scheme_base;
#include "cyclone/runtime.h"
defsymbol(cyc_91thread_91obj);
static void __lambda_33(void *data, int argc, closure _,object k_7333) ;
static void __lambda_32(void *data, int argc, object self_7386, object r_7335) ;
static void __lambda_31(void *data, int argc, closure _, object k, object cond) ;
static void __lambda_30(void *data, int argc, closure _, object k, object cond) ;
static void __lambda_29(void *data, int argc, closure _, object k, object cond, object lock) ;
static void __lambda_28(void *data, int argc, closure _, object k) ;
static void __lambda_27(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_26(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_25(void *data, int argc, closure _,object k_7339, object mutex_7316, object opts_7315_raw, ...) ;
static void __lambda_24(void *data, int argc, object self_7387, object r_7344) ;
static void __lambda_23(void *data, int argc, object self_7388, object r_7341) ;
static void __lambda_22(void *data, int argc, object self_7389, object r_7343) ;
static void __lambda_21(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_20(void *data, int argc, closure _, object k) ;
static void __lambda_19(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_18(void *data, int argc, closure _, object k) ;
static void __lambda_17(void *data, int argc, closure _, object k, object obj) ;
static void __lambda_16(void *data, int argc, closure _, object k, object timeout) ;
static void __lambda_15(void *data, int argc, closure _, object k) ;
static void __lambda_14(void *data, int argc, closure _,object k_7347) ;
static void __lambda_13(void *data, int argc, closure _,object k_7350, object t_7318) ;
static void __lambda_12(void *data, int argc, object self_7390, object thunk_7319) ;
static void __lambda_11(void *data, int argc, object self_7391, object thread_91params_7320) ;
static void __lambda_10(void *data, int argc, object self_7392, object r_7353) ;
static void __lambda_9(void *data, int argc, closure _, object k) ;
static void __lambda_8(void *data, int argc, closure _,object k_7359) ;
static void __lambda_7(void *data, int argc, object self_7393, object t_7322) ;
static void __lambda_6(void *data, int argc, closure _,object k_7364, object t_7324, object obj_7323) ;
static void __lambda_5(void *data, int argc, closure _,object k_7367, object t_7325) ;
static void __lambda_4(void *data, int argc, closure _,object k_7370, object t_7326) ;
static void __lambda_3(void *data, int argc, closure _,object k_7373, object thunk_7328, object name_7327_raw, ...) ;
static void __lambda_2(void *data, int argc, object self_7394, object name_91str_7329) ;
static void __lambda_1(void *data, int argc, object self_7395, object k_7376) ;
static void __lambda_0(void *data, int argc, closure _,object k_7380, object obj_7330) ;

static void __lambda_33(void *data, int argc, closure _,object k_7333) {
  Cyc_st_add(data, "srfi/18.sld:lib-init:srfi18");

closureN_type c_73211;
c_73211.hdr.mark = gc_color_red;
 c_73211.hdr.grayed = 0;
c_73211.tag = closureN_tag;
 c_73211.fn = (function_type)__lambda_32;
c_73211.num_args = 1;
c_73211.num_elements = 1;
c_73211.elements = (object *)alloca(sizeof(object) * 1);
c_73211.elements[0] = k_7333;


make_string(c_73216, "main thread");
return_closcall6(data,  __glo_vector_scheme_base,  &c_73211, quote_cyc_91thread_91obj, boolean_f, boolean_f, &c_73216, boolean_f);; 
}

static void __lambda_32(void *data, int argc, object self_7386, object r_7335) {
  return_closcall1(data,  ((closureN)self_7386)->elements[0],  global_set(__glo__85primordial_91thread_85_srfi_18, r_7335));; 
}

static void __lambda_31(void *data, int argc, closure _, object k, object cond) { Cyc_check_cond_var(data, cond);
        if (pthread_cond_broadcast(&(((cond_var)cond)->cond)) != 0) {
          fprintf(stderr, "Unable to broadcast condition variable\n");
          exit(1);
        }
        return_closcall1(data, k, boolean_t);  }
static void __lambda_30(void *data, int argc, closure _, object k, object cond) { Cyc_check_cond_var(data, cond);
        if (pthread_cond_signal(&(((cond_var)cond)->cond)) != 0) {
          fprintf(stderr, "Unable to signal condition variable\n");
          exit(1);
        }
        return_closcall1(data, k, boolean_t);  }
static void __lambda_29(void *data, int argc, closure _, object k, object cond, object lock) { Cyc_check_cond_var(data, cond);
        Cyc_check_mutex(data, lock);
        set_thread_blocked(data, k);
        if (pthread_cond_wait(
            &(((cond_var)cond)->cond),
            &(((mutex)lock)->lock)) != 0) {
          fprintf(stderr, "Unable to wait for condition variable\n");
          exit(1);
        }
        return_thread_runnable(data, boolean_t);  }
static void __lambda_28(void *data, int argc, closure _, object k) { int heap_grown;
        cond_var cond;
        cond_var_type tmp;
        tmp.hdr.mark = gc_color_red;
        tmp.hdr.grayed = 0;
        tmp.tag = cond_var_tag;
        cond = gc_alloc(gc_get_heap(), sizeof(cond_var_type), (char *)(&tmp), (gc_thread_data *)data, &heap_grown);
        if (pthread_cond_init(&(cond->cond), NULL) != 0) {
          fprintf(stderr, "Unable to make condition variable\n");
          exit(1);
        }
        return_closcall1(data, k, cond);  }
static void __lambda_27(void *data, int argc, closure _, object k, object obj) { object result = Cyc_is_cond_var(obj);
        return_closcall1(data, k, result);  }
static void __lambda_26(void *data, int argc, closure _, object k, object obj) { mutex m = (mutex) obj;
        Cyc_check_mutex(data, obj);
        if (pthread_mutex_unlock(&(m->lock)) != 0) {
          fprintf(stderr, "Error unlocking mutex\n");
          exit(1);
        }
        return_closcall1(data, k, boolean_t);  }
static void __lambda_25(void *data, int argc, closure _,object k_7339, object mutex_7316, object opts_7315_raw, ...) {
load_varargs(opts_7315, opts_7315_raw, argc - 2);
  Cyc_st_add(data, "srfi/18.sld:mutex-unlock!");
if( (boolean_f != Cyc_is_null(opts_7315)) ){ 
  return_closcall2(data,  __glo_Cyc_91mutex_91unlock_67_srfi_18,  k_7339, mutex_7316);
} else { 
  
closureN_type c_73184;
c_73184.hdr.mark = gc_color_red;
 c_73184.hdr.grayed = 0;
c_73184.tag = closureN_tag;
 c_73184.fn = (function_type)__lambda_24;
c_73184.num_args = 1;
c_73184.num_elements = 3;
c_73184.elements = (object *)alloca(sizeof(object) * 3);
c_73184.elements[0] = k_7339;
c_73184.elements[1] = mutex_7316;
c_73184.elements[2] = opts_7315;

return_closcall1(data,(closure)&c_73184,  Cyc_car(data, opts_7315));}
; 
}

static void __lambda_24(void *data, int argc, object self_7387, object r_7344) {
  
closureN_type c_73186;
c_73186.hdr.mark = gc_color_red;
 c_73186.hdr.grayed = 0;
c_73186.tag = closureN_tag;
 c_73186.fn = (function_type)__lambda_23;
c_73186.num_args = 1;
c_73186.num_elements = 3;
c_73186.elements = (object *)alloca(sizeof(object) * 3);
c_73186.elements[0] = ((closureN)self_7387)->elements[0];
c_73186.elements[1] = ((closureN)self_7387)->elements[1];
c_73186.elements[2] = ((closureN)self_7387)->elements[2];

return_closcall2(data,  __glo_condition_91variable_127_srfi_18,  &c_73186, r_7344);; 
}

static void __lambda_23(void *data, int argc, object self_7388, object r_7341) {
  if( (boolean_f != r_7341) ){ 
  
closureN_type c_73188;
c_73188.hdr.mark = gc_color_red;
 c_73188.hdr.grayed = 0;
c_73188.tag = closureN_tag;
 c_73188.fn = (function_type)__lambda_22;
c_73188.num_args = 1;
c_73188.num_elements = 2;
c_73188.elements = (object *)alloca(sizeof(object) * 2);
c_73188.elements[0] = ((closureN)self_7388)->elements[0];
c_73188.elements[1] = ((closureN)self_7388)->elements[1];

return_closcall3(data,  __glo_condition_91variable_91wait_67_srfi_18,  &c_73188, Cyc_car(data, ((closureN)self_7388)->elements[2]), ((closureN)self_7388)->elements[1]);
} else { 
  
make_string(c_73198, "mutex-unlock! - unhandled args");
return_closcall4(data,  __glo_error_scheme_base,  ((closureN)self_7388)->elements[0], &c_73198, ((closureN)self_7388)->elements[1], ((closureN)self_7388)->elements[2]);}
; 
}

static void __lambda_22(void *data, int argc, object self_7389, object r_7343) {
  return_closcall2(data,  __glo_Cyc_91mutex_91unlock_67_srfi_18,  ((closureN)self_7389)->elements[0], ((closureN)self_7389)->elements[1]);; 
}

static void __lambda_21(void *data, int argc, closure _, object k, object obj) { mutex m = (mutex) obj;
        Cyc_check_mutex(data, obj);
        set_thread_blocked(data, k);
        if (pthread_mutex_lock(&(m->lock)) != 0) {
          fprintf(stderr, "Error locking mutex\n");
          exit(1);
        }
        return_thread_runnable(data, boolean_t);  }
static void __lambda_20(void *data, int argc, closure _, object k) { int heap_grown;
        mutex lock;
        mutex_type tmp;
        tmp.hdr.mark = gc_color_red;
        tmp.hdr.grayed = 0;
        tmp.tag = mutex_tag;
        lock = gc_alloc(gc_get_heap(), sizeof(mutex_type), (char *)(&tmp), (gc_thread_data *)data, &heap_grown);
        if (pthread_mutex_init(&(lock->lock), NULL) != 0) {
          fprintf(stderr, "Unable to make mutex\n");
          exit(1);
        }
        return_closcall1(data, k, lock);  }
static void __lambda_19(void *data, int argc, closure _, object k, object obj) { object result = Cyc_is_mutex(obj);
        return_closcall1(data, k, result);  }
static void __lambda_18(void *data, int argc, closure _, object k) { Cyc_trigger_minor_gc(data, k);  }
static void __lambda_17(void *data, int argc, closure _, object k, object obj) { object heap_obj = copy2heap(data, obj);
        return_closcall1(data, k, heap_obj);  }
static void __lambda_16(void *data, int argc, closure _, object k, object timeout) { set_thread_blocked(data, k);
        Cyc_thread_sleep(data, timeout);
        return_thread_runnable(data, boolean_t);  }
static void __lambda_15(void *data, int argc, closure _, object k) { Cyc_end_thread(data);  }
static void __lambda_14(void *data, int argc, closure _,object k_7347) {
  Cyc_st_add(data, "srfi/18.sld:thread-yield!");
return_closcall2(data,  __glo_thread_91sleep_67_srfi_18,  k_7347, obj_int2obj(1));; 
}

static void __lambda_13(void *data, int argc, closure _,object k_7350, object t_7318) {
  Cyc_st_add(data, "srfi/18.sld:thread-start!");

closureN_type c_73151;
c_73151.hdr.mark = gc_color_red;
 c_73151.hdr.grayed = 0;
c_73151.tag = closureN_tag;
 c_73151.fn = (function_type)__lambda_12;
c_73151.num_args = 1;
c_73151.num_elements = 2;
c_73151.elements = (object *)alloca(sizeof(object) * 2);
c_73151.elements[0] = k_7350;
c_73151.elements[1] = t_7318;

return_closcall1(data,(closure)&c_73151,  Cyc_vector_ref(data, t_7318, obj_int2obj(1)));; 
}

static void __lambda_12(void *data, int argc, object self_7390, object thunk_7319) {
  
closureN_type c_73153;
c_73153.hdr.mark = gc_color_red;
 c_73153.hdr.grayed = 0;
c_73153.tag = closureN_tag;
 c_73153.fn = (function_type)__lambda_11;
c_73153.num_args = 1;
c_73153.num_elements = 2;
c_73153.elements = (object *)alloca(sizeof(object) * 2);
c_73153.elements[0] = ((closureN)self_7390)->elements[0];
c_73153.elements[1] = ((closureN)self_7390)->elements[1];


make_pair(c_73166,((closureN)self_7390)->elements[1], thunk_7319);
return_closcall1(data,(closure)&c_73153,  &c_73166);; 
}

static void __lambda_11(void *data, int argc, object self_7391, object thread_91params_7320) {
  
closureN_type c_73155;
c_73155.hdr.mark = gc_color_red;
 c_73155.hdr.grayed = 0;
c_73155.tag = closureN_tag;
 c_73155.fn = (function_type)__lambda_10;
c_73155.num_args = 1;
c_73155.num_elements = 3;
c_73155.elements = (object *)alloca(sizeof(object) * 3);
c_73155.elements[0] = ((closureN)self_7391)->elements[0];
c_73155.elements[1] = ((closureN)self_7391)->elements[1];
c_73155.elements[2] = thread_91params_7320;

return_closcall1(data,  __glo_Cyc_91minor_91gc_srfi_18,  &c_73155);; 
}

static void __lambda_10(void *data, int argc, object self_7392, object r_7353) {
  return_closcall1(data,  ((closureN)self_7392)->elements[0],  Cyc_vector_set(data, ((closureN)self_7392)->elements[1], obj_int2obj(2), Cyc_spawn_thread(((closureN)self_7392)->elements[2])));; 
}

static void __lambda_9(void *data, int argc, closure _, object k) { gc_thread_data *td = (gc_thread_data *)data;
        return_closcall1(data, k, td->scm_thread_obj);  }
static void __lambda_8(void *data, int argc, closure _,object k_7359) {
  Cyc_st_add(data, "srfi/18.sld:current-thread");

closureN_type c_73141;
c_73141.hdr.mark = gc_color_red;
 c_73141.hdr.grayed = 0;
c_73141.tag = closureN_tag;
 c_73141.fn = (function_type)__lambda_7;
c_73141.num_args = 1;
c_73141.num_elements = 1;
c_73141.elements = (object *)alloca(sizeof(object) * 1);
c_73141.elements[0] = k_7359;

return_closcall1(data,  __glo__75current_91thread_srfi_18,  &c_73141);; 
}

static void __lambda_7(void *data, int argc, object self_7393, object t_7322) {
  if( (boolean_f != Cyc_is_null(t_7322)) ){ 
  return_closcall1(data,  ((closureN)self_7393)->elements[0],  __glo__85primordial_91thread_85_srfi_18);
} else { 
  return_closcall1(data,  ((closureN)self_7393)->elements[0],  t_7322);}
; 
}

static void __lambda_6(void *data, int argc, closure _,object k_7364, object t_7324, object obj_7323) {
  Cyc_st_add(data, "srfi/18.sld:thread-specific-set!");
return_closcall1(data,  k_7364,  Cyc_vector_set(data, t_7324, obj_int2obj(4), obj_7323));; 
}

static void __lambda_5(void *data, int argc, closure _,object k_7367, object t_7325) {
  Cyc_st_add(data, "srfi/18.sld:thread-specific");
return_closcall1(data,  k_7367,  Cyc_vector_ref(data, t_7325, obj_int2obj(4)));; 
}

static void __lambda_4(void *data, int argc, closure _,object k_7370, object t_7326) {
  Cyc_st_add(data, "srfi/18.sld:thread-name");
return_closcall1(data,  k_7370,  Cyc_vector_ref(data, t_7326, obj_int2obj(3)));; 
}

static void __lambda_3(void *data, int argc, closure _,object k_7373, object thunk_7328, object name_7327_raw, ...) {
load_varargs(name_7327, name_7327_raw, argc - 2);
  Cyc_st_add(data, "srfi/18.sld:make-thread");

closureN_type c_73113;
c_73113.hdr.mark = gc_color_red;
 c_73113.hdr.grayed = 0;
c_73113.tag = closureN_tag;
 c_73113.fn = (function_type)__lambda_1;
c_73113.num_args = 0;
c_73113.num_elements = 1;
c_73113.elements = (object *)alloca(sizeof(object) * 1);
c_73113.elements[0] = name_7327;


closureN_type c_73123;
c_73123.hdr.mark = gc_color_red;
 c_73123.hdr.grayed = 0;
c_73123.tag = closureN_tag;
 c_73123.fn = (function_type)__lambda_2;
c_73123.num_args = 1;
c_73123.num_elements = 2;
c_73123.elements = (object *)alloca(sizeof(object) * 2);
c_73123.elements[0] = k_7373;
c_73123.elements[1] = thunk_7328;

return_closcall1(data,(closure)&c_73113,  &c_73123);; 
}

static void __lambda_2(void *data, int argc, object self_7394, object name_91str_7329) {
  return_closcall6(data,  __glo_vector_scheme_base,  ((closureN)self_7394)->elements[0], quote_cyc_91thread_91obj, ((closureN)self_7394)->elements[1], boolean_f, name_91str_7329, boolean_f);; 
}

static void __lambda_1(void *data, int argc, object self_7395, object k_7376) {
  if( (boolean_f != Cyc_is_pair(((closureN)self_7395)->elements[0])) ){ 
  return_closcall1(data,  k_7376,  Cyc_car(data, ((closureN)self_7395)->elements[0]));
} else { 
  
make_string(c_73122, "");
return_closcall1(data,  k_7376,  &c_73122);}
; 
}

static void __lambda_0(void *data, int argc, closure _,object k_7380, object obj_7330) {
  Cyc_st_add(data, "srfi/18.sld:thread?");
if( (boolean_f != Cyc_is_vector(obj_7330)) ){ 
    object c_73101 = Cyc_num_fast_gt_op(data,Cyc_vector_length(data, obj_7330), obj_int2obj(0));
if( (boolean_f != c_73101) ){ 
  return_closcall1(data,  k_7380,  equalp(quote_cyc_91thread_91obj, Cyc_vector_ref(data, obj_7330, obj_int2obj(0))));
} else { 
  return_closcall1(data,  k_7380,  boolean_f);}

} else { 
  return_closcall1(data,  k_7380,  boolean_f);}
; 
}

void c_srfi18_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  quote_cyc_91thread_91obj = find_or_add_symbol("cyc-thread-obj");

  add_global((object *) &__glo_lib_91init_117srfi18_srfi_18);
  add_global((object *) &__glo_condition_91variable_91broadcast_67_srfi_18);
  add_global((object *) &__glo_condition_91variable_91signal_67_srfi_18);
  add_global((object *) &__glo_condition_91variable_91wait_67_srfi_18);
  add_global((object *) &__glo_make_91condition_91variable_srfi_18);
  add_global((object *) &__glo_condition_91variable_127_srfi_18);
  add_global((object *) &__glo_Cyc_91mutex_91unlock_67_srfi_18);
  add_global((object *) &__glo_mutex_91unlock_67_srfi_18);
  add_global((object *) &__glo_mutex_91lock_67_srfi_18);
  add_global((object *) &__glo_make_91mutex_srfi_18);
  add_global((object *) &__glo_mutex_127_srfi_18);
  add_global((object *) &__glo_Cyc_91minor_91gc_srfi_18);
  add_global((object *) &__glo__91_125heap_srfi_18);
  add_global((object *) &__glo_thread_91sleep_67_srfi_18);
  add_global((object *) &__glo_thread_91terminate_67_srfi_18);
  add_global((object *) &__glo_thread_91yield_67_srfi_18);
  add_global((object *) &__glo_thread_91start_67_srfi_18);
  add_global((object *) &__glo__75current_91thread_srfi_18);
  add_global((object *) &__glo__85primordial_91thread_85_srfi_18);
  add_global((object *) &__glo_current_91thread_srfi_18);
  add_global((object *) &__glo_thread_91specific_91set_67_srfi_18);
  add_global((object *) &__glo_thread_91specific_srfi_18);
  add_global((object *) &__glo_thread_91name_srfi_18);
  add_global((object *) &__glo_make_91thread_srfi_18);
  add_global((object *) &__glo_thread_127_srfi_18);
  add_symbol(quote_cyc_91thread_91obj);
  mclosure0(c_73209, (function_type)__lambda_33);c_73209.num_args = 0; 
  __glo_lib_91init_117srfi18_srfi_18 = &c_73209; 
  mclosure0(c_73208, (function_type)__lambda_31);c_73208.num_args = 1; 
  __glo_condition_91variable_91broadcast_67_srfi_18 = &c_73208; 
  mclosure0(c_73207, (function_type)__lambda_30);c_73207.num_args = 1; 
  __glo_condition_91variable_91signal_67_srfi_18 = &c_73207; 
  mclosure0(c_73206, (function_type)__lambda_29);c_73206.num_args = 2; 
  __glo_condition_91variable_91wait_67_srfi_18 = &c_73206; 
  mclosure0(c_73205, (function_type)__lambda_28);c_73205.num_args = 0; 
  __glo_make_91condition_91variable_srfi_18 = &c_73205; 
  mclosure0(c_73204, (function_type)__lambda_27);c_73204.num_args = 1; 
  __glo_condition_91variable_127_srfi_18 = &c_73204; 
  mclosure0(c_73203, (function_type)__lambda_26);c_73203.num_args = 1; 
  __glo_Cyc_91mutex_91unlock_67_srfi_18 = &c_73203; 
  mclosure0(c_73179, (function_type)__lambda_25);c_73179.num_args = 1; 
  __glo_mutex_91unlock_67_srfi_18 = &c_73179; 
  mclosure0(c_73178, (function_type)__lambda_21);c_73178.num_args = 1; 
  __glo_mutex_91lock_67_srfi_18 = &c_73178; 
  mclosure0(c_73177, (function_type)__lambda_20);c_73177.num_args = 0; 
  __glo_make_91mutex_srfi_18 = &c_73177; 
  mclosure0(c_73176, (function_type)__lambda_19);c_73176.num_args = 1; 
  __glo_mutex_127_srfi_18 = &c_73176; 
  mclosure0(c_73175, (function_type)__lambda_18);c_73175.num_args = 0; 
  __glo_Cyc_91minor_91gc_srfi_18 = &c_73175; 
  mclosure0(c_73174, (function_type)__lambda_17);c_73174.num_args = 1; 
  __glo__91_125heap_srfi_18 = &c_73174; 
  mclosure0(c_73173, (function_type)__lambda_16);c_73173.num_args = 1; 
  __glo_thread_91sleep_67_srfi_18 = &c_73173; 
  mclosure0(c_73172, (function_type)__lambda_15);c_73172.num_args = 0; 
  __glo_thread_91terminate_67_srfi_18 = &c_73172; 
  mclosure0(c_73170, (function_type)__lambda_14);c_73170.num_args = 0; 
  __glo_thread_91yield_67_srfi_18 = &c_73170; 
  mclosure0(c_73149, (function_type)__lambda_13);c_73149.num_args = 1; 
  __glo_thread_91start_67_srfi_18 = &c_73149; 
  mclosure0(c_73148, (function_type)__lambda_9);c_73148.num_args = 0; 
  __glo__75current_91thread_srfi_18 = &c_73148; 
  mclosure0(c_73139, (function_type)__lambda_8);c_73139.num_args = 0; 
  __glo_current_91thread_srfi_18 = &c_73139; 
  mclosure0(c_73135, (function_type)__lambda_6);c_73135.num_args = 2; 
  __glo_thread_91specific_91set_67_srfi_18 = &c_73135; 
  mclosure0(c_73131, (function_type)__lambda_5);c_73131.num_args = 1; 
  __glo_thread_91specific_srfi_18 = &c_73131; 
  mclosure0(c_73127, (function_type)__lambda_4);c_73127.num_args = 1; 
  __glo_thread_91name_srfi_18 = &c_73127; 
  mclosure0(c_73111, (function_type)__lambda_3);c_73111.num_args = 1; 
  __glo_make_91thread_srfi_18 = &c_73111; 
  mclosure0(c_7396, (function_type)__lambda_0);c_7396.num_args = 1; 
  __glo_thread_127_srfi_18 = &c_7396; 
  __glo__85primordial_91thread_85_srfi_18 = boolean_f; 

  make_cvar(cvar_73217, (object *)&__glo_lib_91init_117srfi18_srfi_18);make_pair(pair_73218, find_or_add_symbol("lib-init:srfi18"), &cvar_73217);
  make_cvar(cvar_73219, (object *)&__glo_condition_91variable_91broadcast_67_srfi_18);make_pair(pair_73220, find_or_add_symbol("condition-variable-broadcast!"), &cvar_73219);
  make_cvar(cvar_73221, (object *)&__glo_condition_91variable_91signal_67_srfi_18);make_pair(pair_73222, find_or_add_symbol("condition-variable-signal!"), &cvar_73221);
  make_cvar(cvar_73223, (object *)&__glo_condition_91variable_91wait_67_srfi_18);make_pair(pair_73224, find_or_add_symbol("condition-variable-wait!"), &cvar_73223);
  make_cvar(cvar_73225, (object *)&__glo_make_91condition_91variable_srfi_18);make_pair(pair_73226, find_or_add_symbol("make-condition-variable"), &cvar_73225);
  make_cvar(cvar_73227, (object *)&__glo_condition_91variable_127_srfi_18);make_pair(pair_73228, find_or_add_symbol("condition-variable?"), &cvar_73227);
  make_cvar(cvar_73229, (object *)&__glo_Cyc_91mutex_91unlock_67_srfi_18);make_pair(pair_73230, find_or_add_symbol("Cyc-mutex-unlock!"), &cvar_73229);
  make_cvar(cvar_73231, (object *)&__glo_mutex_91unlock_67_srfi_18);make_pair(pair_73232, find_or_add_symbol("mutex-unlock!"), &cvar_73231);
  make_cvar(cvar_73233, (object *)&__glo_mutex_91lock_67_srfi_18);make_pair(pair_73234, find_or_add_symbol("mutex-lock!"), &cvar_73233);
  make_cvar(cvar_73235, (object *)&__glo_make_91mutex_srfi_18);make_pair(pair_73236, find_or_add_symbol("make-mutex"), &cvar_73235);
  make_cvar(cvar_73237, (object *)&__glo_mutex_127_srfi_18);make_pair(pair_73238, find_or_add_symbol("mutex?"), &cvar_73237);
  make_cvar(cvar_73239, (object *)&__glo_Cyc_91minor_91gc_srfi_18);make_pair(pair_73240, find_or_add_symbol("Cyc-minor-gc"), &cvar_73239);
  make_cvar(cvar_73241, (object *)&__glo__91_125heap_srfi_18);make_pair(pair_73242, find_or_add_symbol("->heap"), &cvar_73241);
  make_cvar(cvar_73243, (object *)&__glo_thread_91sleep_67_srfi_18);make_pair(pair_73244, find_or_add_symbol("thread-sleep!"), &cvar_73243);
  make_cvar(cvar_73245, (object *)&__glo_thread_91terminate_67_srfi_18);make_pair(pair_73246, find_or_add_symbol("thread-terminate!"), &cvar_73245);
  make_cvar(cvar_73247, (object *)&__glo_thread_91yield_67_srfi_18);make_pair(pair_73248, find_or_add_symbol("thread-yield!"), &cvar_73247);
  make_cvar(cvar_73249, (object *)&__glo_thread_91start_67_srfi_18);make_pair(pair_73250, find_or_add_symbol("thread-start!"), &cvar_73249);
  make_cvar(cvar_73251, (object *)&__glo__75current_91thread_srfi_18);make_pair(pair_73252, find_or_add_symbol("%current-thread"), &cvar_73251);
  make_cvar(cvar_73253, (object *)&__glo__85primordial_91thread_85_srfi_18);make_pair(pair_73254, find_or_add_symbol("*primordial-thread*"), &cvar_73253);
  make_cvar(cvar_73255, (object *)&__glo_current_91thread_srfi_18);make_pair(pair_73256, find_or_add_symbol("current-thread"), &cvar_73255);
  make_cvar(cvar_73257, (object *)&__glo_thread_91specific_91set_67_srfi_18);make_pair(pair_73258, find_or_add_symbol("thread-specific-set!"), &cvar_73257);
  make_cvar(cvar_73259, (object *)&__glo_thread_91specific_srfi_18);make_pair(pair_73260, find_or_add_symbol("thread-specific"), &cvar_73259);
  make_cvar(cvar_73261, (object *)&__glo_thread_91name_srfi_18);make_pair(pair_73262, find_or_add_symbol("thread-name"), &cvar_73261);
  make_cvar(cvar_73263, (object *)&__glo_make_91thread_srfi_18);make_pair(pair_73264, find_or_add_symbol("make-thread"), &cvar_73263);
  make_cvar(cvar_73265, (object *)&__glo_thread_127_srfi_18);make_pair(pair_73266, find_or_add_symbol("thread?"), &cvar_73265);
make_pair(c_73267, &pair_73218,Cyc_global_variables);
make_pair(c_73268, &pair_73220, &c_73267);
make_pair(c_73269, &pair_73222, &c_73268);
make_pair(c_73270, &pair_73224, &c_73269);
make_pair(c_73271, &pair_73226, &c_73270);
make_pair(c_73272, &pair_73228, &c_73271);
make_pair(c_73273, &pair_73230, &c_73272);
make_pair(c_73274, &pair_73232, &c_73273);
make_pair(c_73275, &pair_73234, &c_73274);
make_pair(c_73276, &pair_73236, &c_73275);
make_pair(c_73277, &pair_73238, &c_73276);
make_pair(c_73278, &pair_73240, &c_73277);
make_pair(c_73279, &pair_73242, &c_73278);
make_pair(c_73280, &pair_73244, &c_73279);
make_pair(c_73281, &pair_73246, &c_73280);
make_pair(c_73282, &pair_73248, &c_73281);
make_pair(c_73283, &pair_73250, &c_73282);
make_pair(c_73284, &pair_73252, &c_73283);
make_pair(c_73285, &pair_73254, &c_73284);
make_pair(c_73286, &pair_73256, &c_73285);
make_pair(c_73287, &pair_73258, &c_73286);
make_pair(c_73288, &pair_73260, &c_73287);
make_pair(c_73289, &pair_73262, &c_73288);
make_pair(c_73290, &pair_73264, &c_73289);
make_pair(c_73291, &pair_73266, &c_73290);
Cyc_global_variables = &c_73291;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117srfi18_srfi_18)->fn)(data, 1, cont, cont);
}
