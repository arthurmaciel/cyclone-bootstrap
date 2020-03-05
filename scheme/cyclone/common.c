/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2020 Justin Ethier
 ** Version 0.16 
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
object __glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common = NULL;
object __glo__85c_91file_91header_91comment_85_scheme_cyclone_common = NULL;
object __glo__85Cyc_91version_91banner_85_scheme_cyclone_common = NULL;
object __glo__85version_91banner_85_scheme_cyclone_common = NULL;
object __glo__85version_85_scheme_cyclone_common = NULL;
object __glo__85version_91name_85_scheme_cyclone_common = NULL;
object __glo__85version_91number_85_scheme_cyclone_common = NULL;
#include "cyclone/runtime.h"
defsymbol(_85version_85);
defsymbol(_85version_91banner_85);
defsymbol(_85Cyc_91version_91banner_85);
defsymbol(_85c_91file_91header_91comment_85);
static void __lambda_1(void *data, int argc, closure _,object k_7315) ;
static void __lambda_2(void *data, int argc, object self_7323, object r_7322) ;
static void __lambda_3(void *data, int argc, object self_7324, object r_7317) ;
static void __lambda_4(void *data, int argc, object self_7325, object r_7321) ;
static void __lambda_5(void *data, int argc, object self_7326, object r_7318) ;
static void __lambda_6(void *data, int argc, object self_7327, object r_7319) ;
static void __lambda_7(void *data, int argc, object self_7328, object r_7320) ;

static void __lambda_1(void *data, int argc, closure _,object k_7315) {
  Cyc_st_add(data, "scheme/cyclone/common.sld:lib-init:schemecyclonecommon");

closureN_type c_7333;
object e_7373 [1];
c_7333.hdr.mark = gc_color_red;
 c_7333.hdr.grayed = 0;
c_7333.tag = closureN_tag;
 c_7333.fn = (function_type)__lambda_2;
c_7333.num_args = 1;
c_7333.num_elements = 1;
c_7333.elements = (object *)e_7373;
c_7333.elements[0] = k_7315;


make_utf8_string_with_len(c_7377, " ", 1, 1);

make_utf8_string_with_len(c_7378, "", 0, 0);

object c_7376 = Cyc_string_append(data,(closure)&c_7333,4,__glo__85version_91number_85_scheme_cyclone_common, &c_7377, __glo__85version_91name_85_scheme_cyclone_common, &c_7378);
return_closcall1(data,(closure)&c_7333,  c_7376);; 
}

static void __lambda_2(void *data, int argc, object self_7323, object r_7322) {
  
closureN_type c_7335;
object e_7369 [1];
c_7335.hdr.mark = gc_color_red;
 c_7335.hdr.grayed = 0;
c_7335.tag = closureN_tag;
 c_7335.fn = (function_type)__lambda_3;
c_7335.num_args = 1;
c_7335.num_elements = 1;
c_7335.elements = (object *)e_7369;
c_7335.elements[0] = ((closureN)self_7323)->elements[0];


object c_7372 = global_set_cps_id(data,(closure)&c_7335,"__glo__85version_85_scheme_cyclone_common", __glo__85version_85_scheme_cyclone_common, r_7322);
return_closcall1(data,(closure)&c_7335,  c_7372);; 
}

static void __lambda_3(void *data, int argc, object self_7324, object r_7317) {
  
closureN_type c_7337;
object e_7363 [1];
c_7337.hdr.mark = gc_color_red;
 c_7337.hdr.grayed = 0;
c_7337.tag = closureN_tag;
 c_7337.fn = (function_type)__lambda_4;
c_7337.num_args = 1;
c_7337.num_elements = 1;
c_7337.elements = (object *)e_7363;
c_7337.elements[0] = ((closureN)self_7324)->elements[0];


make_utf8_string_with_len(c_7367, "\n              :@ \n            @@@  \n          @@@@:  \n        `@@@@@+  \n       .@@@+@@@ \n       @@     @@     Cyclone Scheme->C compiler\n      ,@             http://justinethier.github.io/cyclone/\n      '@        \n      .@             (c) 2014-2020 Justin Ethier\n       @@     #@     Version ", 293, 293);

make_utf8_string_with_len(c_7368, "\n       `@@@#@@@.\n        #@@@@@   \n        +@@@+    \n        @@#      \n      `@.  \n     \n", 90, 90);

object c_7366 = Cyc_string_append(data,(closure)&c_7337,3,&c_7367, __glo__85version_85_scheme_cyclone_common, &c_7368);
return_closcall1(data,(closure)&c_7337,  c_7366);; 
}

static void __lambda_4(void *data, int argc, object self_7325, object r_7321) {
  
closureN_type c_7339;
object e_7359 [1];
c_7339.hdr.mark = gc_color_red;
 c_7339.hdr.grayed = 0;
c_7339.tag = closureN_tag;
 c_7339.fn = (function_type)__lambda_5;
c_7339.num_args = 1;
c_7339.num_elements = 1;
c_7339.elements = (object *)e_7359;
c_7339.elements[0] = ((closureN)self_7325)->elements[0];


object c_7362 = global_set_cps_id(data,(closure)&c_7339,"__glo__85version_91banner_85_scheme_cyclone_common", __glo__85version_91banner_85_scheme_cyclone_common, r_7321);
return_closcall1(data,(closure)&c_7339,  c_7362);; 
}

static void __lambda_5(void *data, int argc, object self_7326, object r_7318) {
  
closureN_type c_7341;
object e_7355 [1];
c_7341.hdr.mark = gc_color_red;
 c_7341.hdr.grayed = 0;
c_7341.tag = closureN_tag;
 c_7341.fn = (function_type)__lambda_6;
c_7341.num_args = 1;
c_7341.num_elements = 1;
c_7341.elements = (object *)e_7355;
c_7341.elements[0] = ((closureN)self_7326)->elements[0];


object c_7358 = global_set_cps_id(data,(closure)&c_7341,"__glo__85Cyc_91version_91banner_85_scheme_cyclone_common", __glo__85Cyc_91version_91banner_85_scheme_cyclone_common, __glo__85version_91banner_85_scheme_cyclone_common);
return_closcall1(data,(closure)&c_7341,  c_7358);; 
}

static void __lambda_6(void *data, int argc, object self_7327, object r_7319) {
  
closureN_type c_7343;
object e_7349 [1];
c_7343.hdr.mark = gc_color_red;
 c_7343.hdr.grayed = 0;
c_7343.tag = closureN_tag;
 c_7343.fn = (function_type)__lambda_7;
c_7343.num_args = 1;
c_7343.num_elements = 1;
c_7343.elements = (object *)e_7349;
c_7343.elements[0] = ((closureN)self_7327)->elements[0];


make_utf8_string_with_len(c_7353, "/**\n ** This file was automatically generated by the Cyclone scheme compiler\n ** http://justinethier.github.io/cyclone/\n **\n ** (c) 2014-2020 Justin Ethier\n ** Version ", 168, 168);

make_utf8_string_with_len(c_7354, "\n **\n **/\n", 10, 10);

object c_7352 = Cyc_string_append(data,(closure)&c_7343,3,&c_7353, __glo__85version_85_scheme_cyclone_common, &c_7354);
return_closcall1(data,(closure)&c_7343,  c_7352);; 
}

static void __lambda_7(void *data, int argc, object self_7328, object r_7320) {
  
object c_7348 = global_set_cps_id(data,  ((closureN)self_7328)->elements[0],"__glo__85c_91file_91header_91comment_85_scheme_cyclone_common", __glo__85c_91file_91header_91comment_85_scheme_cyclone_common, r_7320);
return_closcall1(data,  ((closureN)self_7328)->elements[0],  c_7348);; 
}

void c_schemecyclonecommon_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_schemecyclonecommon_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);
  quote__85version_85 = find_or_add_symbol("*version*");
  quote__85version_91banner_85 = find_or_add_symbol("*version-banner*");
  quote__85Cyc_91version_91banner_85 = find_or_add_symbol("*Cyc-version-banner*");
  quote__85c_91file_91header_91comment_85 = find_or_add_symbol("*c-file-header-comment*");

  add_global("__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common", (object *) &__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common);
  add_global("__glo__85c_91file_91header_91comment_85_scheme_cyclone_common", (object *) &__glo__85c_91file_91header_91comment_85_scheme_cyclone_common);
  add_global("__glo__85Cyc_91version_91banner_85_scheme_cyclone_common", (object *) &__glo__85Cyc_91version_91banner_85_scheme_cyclone_common);
  add_global("__glo__85version_91banner_85_scheme_cyclone_common", (object *) &__glo__85version_91banner_85_scheme_cyclone_common);
  add_global("__glo__85version_85_scheme_cyclone_common", (object *) &__glo__85version_85_scheme_cyclone_common);
  add_global("__glo__85version_91name_85_scheme_cyclone_common", (object *) &__glo__85version_91name_85_scheme_cyclone_common);
  add_global("__glo__85version_91number_85_scheme_cyclone_common", (object *) &__glo__85version_91number_85_scheme_cyclone_common);
  add_symbol(quote__85version_85);
  add_symbol(quote__85version_91banner_85);
  add_symbol(quote__85Cyc_91version_91banner_85);
  add_symbol(quote__85c_91file_91header_91comment_85);
  mclosure0(c_7331, (function_type)__lambda_1);c_7331.num_args = 0; 
  __glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common = &c_7331; 
  __glo__85c_91file_91header_91comment_85_scheme_cyclone_common = boolean_f; 
  __glo__85Cyc_91version_91banner_85_scheme_cyclone_common = boolean_f; 
  __glo__85version_91banner_85_scheme_cyclone_common = boolean_f; 
  __glo__85version_85_scheme_cyclone_common = boolean_f; 
  make_utf8_string_with_len(c_7330, "", 0, 0); 
  __glo__85version_91name_85_scheme_cyclone_common = &c_7330; 
  make_utf8_string_with_len(c_7329, "0.16", 4, 4); 
  __glo__85version_91number_85_scheme_cyclone_common = &c_7329; 

  mclosure0(clo_7380, c_schemecyclonecommon_inlinable_lambdas); make_pair(pair_7379, find_or_add_symbol("c_schemecyclonecommon_inlinable_lambdas"), &clo_7380);
  make_cvar(cvar_7381, (object *)&__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common);make_pair(pair_7382, find_or_add_symbol("lib-init:schemecyclonecommon"), &cvar_7381);
  make_cvar(cvar_7383, (object *)&__glo__85c_91file_91header_91comment_85_scheme_cyclone_common);make_pair(pair_7384, find_or_add_symbol("*c-file-header-comment*"), &cvar_7383);
  make_cvar(cvar_7385, (object *)&__glo__85Cyc_91version_91banner_85_scheme_cyclone_common);make_pair(pair_7386, find_or_add_symbol("*Cyc-version-banner*"), &cvar_7385);
  make_cvar(cvar_7387, (object *)&__glo__85version_91banner_85_scheme_cyclone_common);make_pair(pair_7388, find_or_add_symbol("*version-banner*"), &cvar_7387);
  make_cvar(cvar_7389, (object *)&__glo__85version_85_scheme_cyclone_common);make_pair(pair_7390, find_or_add_symbol("*version*"), &cvar_7389);
  make_cvar(cvar_7391, (object *)&__glo__85version_91name_85_scheme_cyclone_common);make_pair(pair_7392, find_or_add_symbol("*version-name*"), &cvar_7391);
  make_cvar(cvar_7393, (object *)&__glo__85version_91number_85_scheme_cyclone_common);make_pair(pair_7394, find_or_add_symbol("*version-number*"), &cvar_7393);
make_pair(c_73102, &pair_7379,Cyc_global_variables);
make_pair(c_73101, &pair_7382, &c_73102);
make_pair(c_73100, &pair_7384, &c_73101);
make_pair(c_7399, &pair_7386, &c_73100);
make_pair(c_7398, &pair_7388, &c_7399);
make_pair(c_7397, &pair_7390, &c_7398);
make_pair(c_7396, &pair_7392, &c_7397);
make_pair(c_7395, &pair_7394, &c_7396);
Cyc_global_variables = &c_7395;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common)->fn)(data, 1, cont, cont);
}
void c_schemecyclonecommon_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_cyclone_common");
  c_schemecyclonecommon_entry_pt_first_lambda(data, argc, cont,value);
}
