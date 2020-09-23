/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2020 Justin Ethier
 ** Version 0.21 
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
object __glo_memloc_scheme_cyclone_common = NULL;
object __glo__85reader_91source_91db_85_scheme_cyclone_common = NULL;
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
defsymbol(_85reader_91source_91db_85);
static void __lambda_1(void *data, int argc, closure _,object k_7317) ;
static void __lambda_2(void *data, int argc, object self_7327, object r_7326) ;
static void __lambda_3(void *data, int argc, object self_7328, object r_7319) ;
static void __lambda_4(void *data, int argc, object self_7329, object r_7325) ;
static void __lambda_5(void *data, int argc, object self_7330, object r_7320) ;
static void __lambda_6(void *data, int argc, object self_7331, object r_7321) ;
static void __lambda_7(void *data, int argc, object self_7332, object r_7324) ;
static void __lambda_8(void *data, int argc, object self_7333, object r_7322) ;
static void __lambda_9(void *data, int argc, closure _, object k, object obj) ;

static void __lambda_1(void *data, int argc, closure _,object k_7317) {
  Cyc_st_add(data, "scheme/cyclone/common.sld:lib-init:schemecyclonecommon");

closureN_type c_7339;
object e_7385 [1];
c_7339.hdr.mark = gc_color_red;
 c_7339.hdr.grayed = 0;
c_7339.tag = closureN_tag;
 c_7339.fn = (function_type)__lambda_2;
c_7339.num_args = 1;
c_7339.num_elements = 1;
c_7339.elements = (object *)e_7385;
c_7339.elements[0] = k_7317;


make_utf8_string_with_len(c_7389, " ", 1, 1);

make_utf8_string_with_len(c_7390, "", 0, 0);

object c_7388 = Cyc_string_append(data,(closure)&c_7339,4,__glo__85version_91number_85_scheme_cyclone_common, &c_7389, __glo__85version_91name_85_scheme_cyclone_common, &c_7390);
return_closcall1(data,(closure)&c_7339,  c_7388);; 
}

static void __lambda_2(void *data, int argc, object self_7327, object r_7326) {
  
closureN_type c_7341;
object e_7381 [1];
c_7341.hdr.mark = gc_color_red;
 c_7341.hdr.grayed = 0;
c_7341.tag = closureN_tag;
 c_7341.fn = (function_type)__lambda_3;
c_7341.num_args = 1;
c_7341.num_elements = 1;
c_7341.elements = (object *)e_7381;
c_7341.elements[0] = ((closureN)self_7327)->elements[0];


object c_7384 = global_set_cps_id(data,(closure)&c_7341,"__glo__85version_85_scheme_cyclone_common", __glo__85version_85_scheme_cyclone_common, r_7326);
return_closcall1(data,(closure)&c_7341,  c_7384);; 
}

static void __lambda_3(void *data, int argc, object self_7328, object r_7319) {
  
closureN_type c_7343;
object e_7375 [1];
c_7343.hdr.mark = gc_color_red;
 c_7343.hdr.grayed = 0;
c_7343.tag = closureN_tag;
 c_7343.fn = (function_type)__lambda_4;
c_7343.num_args = 1;
c_7343.num_elements = 1;
c_7343.elements = (object *)e_7375;
c_7343.elements[0] = ((closureN)self_7328)->elements[0];


make_utf8_string_with_len(c_7379, "\n              :@ \n            @@@  \n          @@@@:  \n        `@@@@@+  \n       .@@@+@@@ \n       @@     @@     Cyclone Scheme->C compiler\n      ,@             http://justinethier.github.io/cyclone/\n      '@        \n      .@             (c) 2014-2020 Justin Ethier\n       @@     #@     Version ", 293, 293);

make_utf8_string_with_len(c_7380, "\n       `@@@#@@@.\n        #@@@@@   \n        +@@@+    \n        @@#      \n      `@.  \n     \n", 90, 90);

object c_7378 = Cyc_string_append(data,(closure)&c_7343,3,&c_7379, __glo__85version_85_scheme_cyclone_common, &c_7380);
return_closcall1(data,(closure)&c_7343,  c_7378);; 
}

static void __lambda_4(void *data, int argc, object self_7329, object r_7325) {
  
closureN_type c_7345;
object e_7371 [1];
c_7345.hdr.mark = gc_color_red;
 c_7345.hdr.grayed = 0;
c_7345.tag = closureN_tag;
 c_7345.fn = (function_type)__lambda_5;
c_7345.num_args = 1;
c_7345.num_elements = 1;
c_7345.elements = (object *)e_7371;
c_7345.elements[0] = ((closureN)self_7329)->elements[0];


object c_7374 = global_set_cps_id(data,(closure)&c_7345,"__glo__85version_91banner_85_scheme_cyclone_common", __glo__85version_91banner_85_scheme_cyclone_common, r_7325);
return_closcall1(data,(closure)&c_7345,  c_7374);; 
}

static void __lambda_5(void *data, int argc, object self_7330, object r_7320) {
  
closureN_type c_7347;
object e_7367 [1];
c_7347.hdr.mark = gc_color_red;
 c_7347.hdr.grayed = 0;
c_7347.tag = closureN_tag;
 c_7347.fn = (function_type)__lambda_6;
c_7347.num_args = 1;
c_7347.num_elements = 1;
c_7347.elements = (object *)e_7367;
c_7347.elements[0] = ((closureN)self_7330)->elements[0];


object c_7370 = global_set_cps_id(data,(closure)&c_7347,"__glo__85Cyc_91version_91banner_85_scheme_cyclone_common", __glo__85Cyc_91version_91banner_85_scheme_cyclone_common, __glo__85version_91banner_85_scheme_cyclone_common);
return_closcall1(data,(closure)&c_7347,  c_7370);; 
}

static void __lambda_6(void *data, int argc, object self_7331, object r_7321) {
  
closureN_type c_7349;
object e_7361 [1];
c_7349.hdr.mark = gc_color_red;
 c_7349.hdr.grayed = 0;
c_7349.tag = closureN_tag;
 c_7349.fn = (function_type)__lambda_7;
c_7349.num_args = 1;
c_7349.num_elements = 1;
c_7349.elements = (object *)e_7361;
c_7349.elements[0] = ((closureN)self_7331)->elements[0];


make_utf8_string_with_len(c_7365, "/**\n ** This file was automatically generated by the Cyclone scheme compiler\n ** http://justinethier.github.io/cyclone/\n **\n ** (c) 2014-2020 Justin Ethier\n ** Version ", 168, 168);

make_utf8_string_with_len(c_7366, "\n **\n **/\n", 10, 10);

object c_7364 = Cyc_string_append(data,(closure)&c_7349,3,&c_7365, __glo__85version_85_scheme_cyclone_common, &c_7366);
return_closcall1(data,(closure)&c_7349,  c_7364);; 
}

static void __lambda_7(void *data, int argc, object self_7332, object r_7324) {
  
closureN_type c_7351;
object e_7357 [1];
c_7351.hdr.mark = gc_color_red;
 c_7351.hdr.grayed = 0;
c_7351.tag = closureN_tag;
 c_7351.fn = (function_type)__lambda_8;
c_7351.num_args = 1;
c_7351.num_elements = 1;
c_7351.elements = (object *)e_7357;
c_7351.elements[0] = ((closureN)self_7332)->elements[0];


object c_7360 = global_set_cps_id(data,(closure)&c_7351,"__glo__85c_91file_91header_91comment_85_scheme_cyclone_common", __glo__85c_91file_91header_91comment_85_scheme_cyclone_common, r_7324);
return_closcall1(data,(closure)&c_7351,  c_7360);; 
}

static void __lambda_8(void *data, int argc, object self_7333, object r_7322) {
  
object c_7356 = global_set_cps_id(data,  ((closureN)self_7333)->elements[0],"__glo__85reader_91source_91db_85_scheme_cyclone_common", __glo__85reader_91source_91db_85_scheme_cyclone_common, NULL);
return_closcall1(data,  ((closureN)self_7333)->elements[0],  c_7356);; 
}

static void __lambda_9(void *data, int argc, closure _, object k, object obj) { char str[32];
    sprintf(str, "%p", obj);
    make_utf8_string(data, s, str);
  return_closcall1(data, k, &s); }
void c_schemecyclonecommon_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_schemecyclonecommon_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);
  quote__85version_85 = find_or_add_symbol("*version*");
  quote__85version_91banner_85 = find_or_add_symbol("*version-banner*");
  quote__85Cyc_91version_91banner_85 = find_or_add_symbol("*Cyc-version-banner*");
  quote__85c_91file_91header_91comment_85 = find_or_add_symbol("*c-file-header-comment*");
  quote__85reader_91source_91db_85 = find_or_add_symbol("*reader-source-db*");

  add_global("__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common", (object *) &__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common);
  add_global("__glo_memloc_scheme_cyclone_common", (object *) &__glo_memloc_scheme_cyclone_common);
  add_global("__glo__85reader_91source_91db_85_scheme_cyclone_common", (object *) &__glo__85reader_91source_91db_85_scheme_cyclone_common);
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
  add_symbol(quote__85reader_91source_91db_85);
  mclosure0(c_7337, (function_type)__lambda_1);c_7337.num_args = 0; 
  __glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common = &c_7337; 
  mclosure0(c_7336, (function_type)__lambda_9);c_7336.num_args = 1; 
  __glo_memloc_scheme_cyclone_common = &c_7336; 
  __glo__85reader_91source_91db_85_scheme_cyclone_common = boolean_f; 
  __glo__85c_91file_91header_91comment_85_scheme_cyclone_common = boolean_f; 
  __glo__85Cyc_91version_91banner_85_scheme_cyclone_common = boolean_f; 
  __glo__85version_91banner_85_scheme_cyclone_common = boolean_f; 
  __glo__85version_85_scheme_cyclone_common = boolean_f; 
  make_utf8_string_with_len(c_7335, "", 0, 0); 
  __glo__85version_91name_85_scheme_cyclone_common = &c_7335; 
  make_utf8_string_with_len(c_7334, "0.22", 4, 4); 
  __glo__85version_91number_85_scheme_cyclone_common = &c_7334; 

  mclosure0(clo_7392, c_schemecyclonecommon_inlinable_lambdas); make_pair(pair_7391, find_or_add_symbol("c_schemecyclonecommon_inlinable_lambdas"), &clo_7392);
  make_cvar(cvar_7393, (object *)&__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common);make_pair(pair_7394, find_or_add_symbol("lib-init:schemecyclonecommon"), &cvar_7393);
  make_cvar(cvar_7395, (object *)&__glo_memloc_scheme_cyclone_common);make_pair(pair_7396, find_or_add_symbol("memloc"), &cvar_7395);
  make_cvar(cvar_7397, (object *)&__glo__85reader_91source_91db_85_scheme_cyclone_common);make_pair(pair_7398, find_or_add_symbol("*reader-source-db*"), &cvar_7397);
  make_cvar(cvar_7399, (object *)&__glo__85c_91file_91header_91comment_85_scheme_cyclone_common);make_pair(pair_73100, find_or_add_symbol("*c-file-header-comment*"), &cvar_7399);
  make_cvar(cvar_73101, (object *)&__glo__85Cyc_91version_91banner_85_scheme_cyclone_common);make_pair(pair_73102, find_or_add_symbol("*Cyc-version-banner*"), &cvar_73101);
  make_cvar(cvar_73103, (object *)&__glo__85version_91banner_85_scheme_cyclone_common);make_pair(pair_73104, find_or_add_symbol("*version-banner*"), &cvar_73103);
  make_cvar(cvar_73105, (object *)&__glo__85version_85_scheme_cyclone_common);make_pair(pair_73106, find_or_add_symbol("*version*"), &cvar_73105);
  make_cvar(cvar_73107, (object *)&__glo__85version_91name_85_scheme_cyclone_common);make_pair(pair_73108, find_or_add_symbol("*version-name*"), &cvar_73107);
  make_cvar(cvar_73109, (object *)&__glo__85version_91number_85_scheme_cyclone_common);make_pair(pair_73110, find_or_add_symbol("*version-number*"), &cvar_73109);
make_pair(c_73120, &pair_7391,Cyc_global_variables);
make_pair(c_73119, &pair_7394, &c_73120);
make_pair(c_73118, &pair_7396, &c_73119);
make_pair(c_73117, &pair_7398, &c_73118);
make_pair(c_73116, &pair_73100, &c_73117);
make_pair(c_73115, &pair_73102, &c_73116);
make_pair(c_73114, &pair_73104, &c_73115);
make_pair(c_73113, &pair_73106, &c_73114);
make_pair(c_73112, &pair_73108, &c_73113);
make_pair(c_73111, &pair_73110, &c_73112);
Cyc_global_variables = &c_73111;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemecyclonecommon_scheme_cyclone_common)->fn)(data, 1, cont, cont);
}
void c_schemecyclonecommon_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_cyclone_common");
  c_schemecyclonecommon_entry_pt_first_lambda(data, argc, cont,value);
}
