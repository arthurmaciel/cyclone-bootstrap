/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2017 Justin Ethier
 ** Version 0.5 
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
object __glo_lib_91init_117schemeinexact_scheme_inexact = NULL;
object __glo_tan_scheme_inexact = NULL;
object __glo_sqrt_scheme_inexact = NULL;
object __glo_sin_scheme_inexact = NULL;
object __glo_c_91log_scheme_inexact = NULL;
object __glo_c_91log_191_191inline_191_191_scheme_inexact = NULL;
object __glo_log_scheme_inexact = NULL;
object __glo_exp_scheme_inexact = NULL;
object __glo_cos_scheme_inexact = NULL;
object __glo_atan_scheme_inexact = NULL;
object __glo_asin_scheme_inexact = NULL;
object __glo_acos_scheme_inexact = NULL;
object __glo_finite_127_scheme_inexact = NULL;
object __glo_infinite_127_scheme_inexact = NULL;
object __glo_nan_127_scheme_inexact = NULL;
#include "cyclone/runtime.h"
static void __lambda_15(void *data, int argc, closure _,object k_737) ;
static void __lambda_14(void *data, int argc, closure _, object k, object z) ;
static void __lambda_13(void *data, int argc, closure _, object k, object z) ;
static void __lambda_12(void *data, int argc, closure _, object k, object z) ;
static object __lambda_11(void *data, object ptr, object z) ;
static void __lambda_10(void *data, int argc, closure _, object k, object z) ;
static void __lambda_9(void *data, int argc, closure _,object k_7310, object z1_732, object z2_731_raw, ...) ;
static void __lambda_8(void *data, int argc, closure _, object k, object z) ;
static void __lambda_7(void *data, int argc, closure _, object k, object z) ;
static void __lambda_6(void *data, int argc, closure _, object k, object z) ;
static void __lambda_5(void *data, int argc, closure _, object k, object z) ;
static void __lambda_4(void *data, int argc, closure _, object k, object z) ;
static void __lambda_3(void *data, int argc, closure _,object k_7317, object z_734) ;
static void __lambda_2(void *data, int argc, object self_7319, object r_7318) ;
static void __lambda_1(void *data, int argc, closure _, object k, object z) ;
static void __lambda_0(void *data, int argc, closure _, object k, object z) ;

static void __lambda_15(void *data, int argc, closure _,object k_737) {
  Cyc_st_add(data, "scheme/inexact.sld:lib-init:schemeinexact");
return_closcall1(data,  k_737,  obj_int2obj(0));; 
}

static void __lambda_14(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, tan, z); }
static void __lambda_13(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, sqrt, z); }
static void __lambda_12(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, sin, z); }
static object __lambda_11(void *data, object ptr, object z) { return_inexact_double_op_no_cps(data, ptr, log, z); }
static void __lambda_10(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, log, z); }
static void __lambda_9(void *data, int argc, closure _,object k_7310, object z1_732, object z2_731_raw, ...) {
load_varargs(z2_731, z2_731_raw, argc - 2);
  Cyc_st_add(data, "scheme/inexact.sld:log");
if( (boolean_f != Cyc_is_null(z2_731)) ){ 
  
common_type local_7340; object c_7341 = ((inline_function_type)
                   ((closure)__glo_c_91log_191_191inline_191_191_scheme_inexact)->fn)(data,&local_7340,z1_732);
return_closcall1(data,  k_7310,  c_7341);
} else { 
  
common_type local_7349; object c_7350 = ((inline_function_type)
                   ((closure)__glo_c_91log_191_191inline_191_191_scheme_inexact)->fn)(data,&local_7349,z1_732);

common_type local_7353; object c_7354 = ((inline_function_type)
                   ((closure)__glo_c_91log_191_191inline_191_191_scheme_inexact)->fn)(data,&local_7353,Cyc_car(data, z2_731));

common_type local_7345; object c_7346 = Cyc_fast_div(data,&local_7345,c_7350, c_7354);
return_closcall1(data,  k_7310,  c_7346);}
; 
}

static void __lambda_8(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, exp, z); }
static void __lambda_7(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, cos, z); }
static void __lambda_6(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, atan, z); }
static void __lambda_5(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, asin, z); }
static void __lambda_4(void *data, int argc, closure _, object k, object z) { return_inexact_double_op(data, k, acos, z); }
static void __lambda_3(void *data, int argc, closure _,object k_7317, object z_734) {
  Cyc_st_add(data, "scheme/inexact.sld:finite?");

closureN_type c_7324;
c_7324.hdr.mark = gc_color_red;
 c_7324.hdr.grayed = 0;
c_7324.tag = closureN_tag;
 c_7324.fn = (function_type)__lambda_2;
c_7324.num_args = 1;
c_7324.num_elements = 1;
c_7324.elements = (object *)alloca(sizeof(object) * 1);
c_7324.elements[0] = k_7317;

return_closcall2(data,  __glo_infinite_127_scheme_inexact,  &c_7324, z_734);; 
}

static void __lambda_2(void *data, int argc, object self_7319, object r_7318) {
  if( (boolean_f != r_7318) ){ 
  return_closcall1(data,  ((closureN)self_7319)->elements[0],  boolean_f);
} else { 
  return_closcall1(data,  ((closureN)self_7319)->elements[0],  boolean_t);}
; 
}

static void __lambda_1(void *data, int argc, closure _, object k, object z) { Cyc_check_num(data, z);
        if (obj_is_int(z) || 
            type_of(z) == integer_tag ||
            type_of(z) == bignum_tag ||
            !isinf(((double_type *)z)->value)) 
        {
          return_closcall1(data, k, boolean_f);
        }
        return_closcall1(data, k, boolean_t); }
static void __lambda_0(void *data, int argc, closure _, object k, object z) { Cyc_check_num(data, z);
        if (obj_is_int(z) || 
            type_of(z) == integer_tag ||
            type_of(z) == bignum_tag ||
            !isnan(((double_type *)z)->value)) 
        {
          return_closcall1(data, k, boolean_f);
        }
        return_closcall1(data, k, boolean_t); }
void c_schemeinexact_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 

  add_global((object *) &__glo_lib_91init_117schemeinexact_scheme_inexact);
  add_global((object *) &__glo_tan_scheme_inexact);
  add_global((object *) &__glo_sqrt_scheme_inexact);
  add_global((object *) &__glo_sin_scheme_inexact);
  add_global((object *) &__glo_c_91log_scheme_inexact);
  add_global((object *) &__glo_c_91log_191_191inline_191_191_scheme_inexact);
  add_global((object *) &__glo_log_scheme_inexact);
  add_global((object *) &__glo_exp_scheme_inexact);
  add_global((object *) &__glo_cos_scheme_inexact);
  add_global((object *) &__glo_atan_scheme_inexact);
  add_global((object *) &__glo_asin_scheme_inexact);
  add_global((object *) &__glo_acos_scheme_inexact);
  add_global((object *) &__glo_finite_127_scheme_inexact);
  add_global((object *) &__glo_infinite_127_scheme_inexact);
  add_global((object *) &__glo_nan_127_scheme_inexact);
  mclosure0(c_7362, (function_type)__lambda_15);c_7362.num_args = 0; 
  __glo_lib_91init_117schemeinexact_scheme_inexact = &c_7362; 
  mclosure0(c_7361, (function_type)__lambda_14);c_7361.num_args = 1; 
  __glo_tan_scheme_inexact = &c_7361; 
  mclosure0(c_7360, (function_type)__lambda_13);c_7360.num_args = 1; 
  __glo_sqrt_scheme_inexact = &c_7360; 
  mclosure0(c_7359, (function_type)__lambda_12);c_7359.num_args = 1; 
  __glo_sin_scheme_inexact = &c_7359; 
  mclosure0(c_7358, (function_type)__lambda_10);c_7358.num_args = 1; 
  __glo_c_91log_scheme_inexact = &c_7358; 
  mclosure0(c_7357, (function_type)__lambda_11);c_7357.num_args = -1; 
  __glo_c_91log_191_191inline_191_191_scheme_inexact = &c_7357; 
  mclosure0(c_7334, (function_type)__lambda_9);c_7334.num_args = 1; 
  __glo_log_scheme_inexact = &c_7334; 
  mclosure0(c_7333, (function_type)__lambda_8);c_7333.num_args = 1; 
  __glo_exp_scheme_inexact = &c_7333; 
  mclosure0(c_7332, (function_type)__lambda_7);c_7332.num_args = 1; 
  __glo_cos_scheme_inexact = &c_7332; 
  mclosure0(c_7331, (function_type)__lambda_6);c_7331.num_args = 1; 
  __glo_atan_scheme_inexact = &c_7331; 
  mclosure0(c_7330, (function_type)__lambda_5);c_7330.num_args = 1; 
  __glo_asin_scheme_inexact = &c_7330; 
  mclosure0(c_7329, (function_type)__lambda_4);c_7329.num_args = 1; 
  __glo_acos_scheme_inexact = &c_7329; 
  mclosure0(c_7322, (function_type)__lambda_3);c_7322.num_args = 1; 
  __glo_finite_127_scheme_inexact = &c_7322; 
  mclosure0(c_7321, (function_type)__lambda_1);c_7321.num_args = 1; 
  __glo_infinite_127_scheme_inexact = &c_7321; 
  mclosure0(c_7320, (function_type)__lambda_0);c_7320.num_args = 1; 
  __glo_nan_127_scheme_inexact = &c_7320; 

  make_cvar(cvar_7364, (object *)&__glo_lib_91init_117schemeinexact_scheme_inexact);make_pair(pair_7365, find_or_add_symbol("lib-init:schemeinexact"), &cvar_7364);
  make_cvar(cvar_7366, (object *)&__glo_tan_scheme_inexact);make_pair(pair_7367, find_or_add_symbol("tan"), &cvar_7366);
  make_cvar(cvar_7368, (object *)&__glo_sqrt_scheme_inexact);make_pair(pair_7369, find_or_add_symbol("sqrt"), &cvar_7368);
  make_cvar(cvar_7370, (object *)&__glo_sin_scheme_inexact);make_pair(pair_7371, find_or_add_symbol("sin"), &cvar_7370);
  make_cvar(cvar_7372, (object *)&__glo_c_91log_scheme_inexact);make_pair(pair_7373, find_or_add_symbol("c-log"), &cvar_7372);
  make_cvar(cvar_7374, (object *)&__glo_c_91log_191_191inline_191_191_scheme_inexact);make_pair(pair_7375, find_or_add_symbol("c-log__inline__"), &cvar_7374);
  make_cvar(cvar_7376, (object *)&__glo_log_scheme_inexact);make_pair(pair_7377, find_or_add_symbol("log"), &cvar_7376);
  make_cvar(cvar_7378, (object *)&__glo_exp_scheme_inexact);make_pair(pair_7379, find_or_add_symbol("exp"), &cvar_7378);
  make_cvar(cvar_7380, (object *)&__glo_cos_scheme_inexact);make_pair(pair_7381, find_or_add_symbol("cos"), &cvar_7380);
  make_cvar(cvar_7382, (object *)&__glo_atan_scheme_inexact);make_pair(pair_7383, find_or_add_symbol("atan"), &cvar_7382);
  make_cvar(cvar_7384, (object *)&__glo_asin_scheme_inexact);make_pair(pair_7385, find_or_add_symbol("asin"), &cvar_7384);
  make_cvar(cvar_7386, (object *)&__glo_acos_scheme_inexact);make_pair(pair_7387, find_or_add_symbol("acos"), &cvar_7386);
  make_cvar(cvar_7388, (object *)&__glo_finite_127_scheme_inexact);make_pair(pair_7389, find_or_add_symbol("finite?"), &cvar_7388);
  make_cvar(cvar_7390, (object *)&__glo_infinite_127_scheme_inexact);make_pair(pair_7391, find_or_add_symbol("infinite?"), &cvar_7390);
  make_cvar(cvar_7392, (object *)&__glo_nan_127_scheme_inexact);make_pair(pair_7393, find_or_add_symbol("nan?"), &cvar_7392);
make_pair(c_7394, &pair_7365,Cyc_global_variables);
make_pair(c_7395, &pair_7367, &c_7394);
make_pair(c_7396, &pair_7369, &c_7395);
make_pair(c_7397, &pair_7371, &c_7396);
make_pair(c_7398, &pair_7373, &c_7397);
make_pair(c_7399, &pair_7375, &c_7398);
make_pair(c_73100, &pair_7377, &c_7399);
make_pair(c_73101, &pair_7379, &c_73100);
make_pair(c_73102, &pair_7381, &c_73101);
make_pair(c_73103, &pair_7383, &c_73102);
make_pair(c_73104, &pair_7385, &c_73103);
make_pair(c_73105, &pair_7387, &c_73104);
make_pair(c_73106, &pair_7389, &c_73105);
make_pair(c_73107, &pair_7391, &c_73106);
make_pair(c_73108, &pair_7393, &c_73107);
Cyc_global_variables = &c_73108;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemeinexact_scheme_inexact)->fn)(data, 1, cont, cont);
}
void c_schemeinexact_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_inexact");
  c_schemeinexact_entry_pt_first_lambda(data, argc, cont,value);
}
