/**
 ** This file was automatically generated by the Cyclone scheme compiler
 ** http://justinethier.github.io/cyclone/
 **
 ** (c) 2014-2018 Justin Ethier
 ** Version 0.9.2 
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
object __glo_lib_91init_117schemecxr_scheme_cxr = NULL;
object __glo_caaaaar_scheme_cxr = NULL;
object __glo_cddddr_scheme_cxr = NULL;
object __glo_cdddar_scheme_cxr = NULL;
object __glo_cddadr_scheme_cxr = NULL;
object __glo_cddaar_scheme_cxr = NULL;
object __glo_cdaddr_scheme_cxr = NULL;
object __glo_cdadar_scheme_cxr = NULL;
object __glo_cdaadr_scheme_cxr = NULL;
object __glo_cdaaar_scheme_cxr = NULL;
object __glo_cadddr_scheme_cxr = NULL;
object __glo_caddar_scheme_cxr = NULL;
object __glo_cadadr_scheme_cxr = NULL;
object __glo_cadaar_scheme_cxr = NULL;
object __glo_caaddr_scheme_cxr = NULL;
object __glo_caadar_scheme_cxr = NULL;
object __glo_caaadr_scheme_cxr = NULL;
object __glo_caaaar_scheme_cxr = NULL;
object __glo_cdddr_scheme_cxr = NULL;
object __glo_cddar_scheme_cxr = NULL;
object __glo_cdadr_scheme_cxr = NULL;
object __glo_cdaar_scheme_cxr = NULL;
object __glo_caddr_scheme_cxr = NULL;
object __glo_cadar_scheme_cxr = NULL;
object __glo_caadr_scheme_cxr = NULL;
object __glo_caaar_scheme_cxr = NULL;
object __glo_cddr_scheme_cxr = NULL;
object __glo_cdar_scheme_cxr = NULL;
object __glo_cadr_scheme_cxr = NULL;
object __glo_caar_scheme_cxr = NULL;
#include "cyclone/runtime.h"
static void __lambda_57(void *data, int argc, closure _,object k_73248) ;
static void __lambda_56(void *data, int argc, closure _,object k_73241, object lis_7329_7358) ;
static void __lambda_55(void *data, int argc, closure _,object k_73234, object lis_7328_7357) ;
static void __lambda_54(void *data, int argc, object self_73276, object r_73238) ;
static void __lambda_53(void *data, int argc, closure _,object k_73227, object lis_7327_7356) ;
static void __lambda_52(void *data, int argc, object self_73275, object r_73231) ;
static void __lambda_51(void *data, int argc, closure _,object k_73220, object lis_7326_7355) ;
static void __lambda_50(void *data, int argc, object self_73274, object r_73224) ;
static void __lambda_49(void *data, int argc, closure _,object k_73213, object lis_7325_7354) ;
static void __lambda_48(void *data, int argc, object self_73273, object r_73217) ;
static void __lambda_47(void *data, int argc, closure _,object k_73206, object lis_7324_7353) ;
static void __lambda_46(void *data, int argc, object self_73272, object r_73210) ;
static void __lambda_45(void *data, int argc, closure _,object k_73199, object lis_7323_7352) ;
static void __lambda_44(void *data, int argc, object self_73271, object r_73203) ;
static void __lambda_43(void *data, int argc, closure _,object k_73192, object lis_7322_7351) ;
static void __lambda_42(void *data, int argc, object self_73270, object r_73196) ;
static void __lambda_41(void *data, int argc, closure _,object k_73185, object lis_7321_7350) ;
static void __lambda_40(void *data, int argc, object self_73269, object r_73189) ;
static void __lambda_39(void *data, int argc, closure _,object k_73178, object lis_7320_7349) ;
static void __lambda_38(void *data, int argc, object self_73268, object r_73182) ;
static void __lambda_37(void *data, int argc, closure _,object k_73171, object lis_7319_7348) ;
static void __lambda_36(void *data, int argc, object self_73267, object r_73175) ;
static void __lambda_35(void *data, int argc, closure _,object k_73164, object lis_7318_7347) ;
static void __lambda_34(void *data, int argc, object self_73266, object r_73168) ;
static void __lambda_33(void *data, int argc, closure _,object k_73157, object lis_7317_7346) ;
static void __lambda_32(void *data, int argc, object self_73265, object r_73161) ;
static void __lambda_31(void *data, int argc, closure _,object k_73150, object lis_7316_7345) ;
static void __lambda_30(void *data, int argc, object self_73264, object r_73154) ;
static void __lambda_29(void *data, int argc, closure _,object k_73143, object lis_7315_7344) ;
static void __lambda_28(void *data, int argc, object self_73263, object r_73147) ;
static void __lambda_27(void *data, int argc, closure _,object k_73136, object lis_7314_7343) ;
static void __lambda_26(void *data, int argc, object self_73262, object r_73140) ;
static void __lambda_25(void *data, int argc, closure _,object k_73129, object lis_7313_7342) ;
static void __lambda_24(void *data, int argc, object self_73261, object r_73133) ;
static void __lambda_23(void *data, int argc, closure _,object k_73123, object lis_7312_7341) ;
static void __lambda_22(void *data, int argc, object self_73260, object r_73126) ;
static void __lambda_21(void *data, int argc, closure _,object k_73117, object lis_7311_7340) ;
static void __lambda_20(void *data, int argc, object self_73259, object r_73120) ;
static void __lambda_19(void *data, int argc, closure _,object k_73111, object lis_7310_7339) ;
static void __lambda_18(void *data, int argc, object self_73258, object r_73114) ;
static void __lambda_17(void *data, int argc, closure _,object k_73105, object lis_739_7338) ;
static void __lambda_16(void *data, int argc, object self_73257, object r_73108) ;
static void __lambda_15(void *data, int argc, closure _,object k_7399, object lis_738_7337) ;
static void __lambda_14(void *data, int argc, object self_73256, object r_73102) ;
static void __lambda_13(void *data, int argc, closure _,object k_7393, object lis_737_7336) ;
static void __lambda_12(void *data, int argc, object self_73255, object r_7396) ;
static void __lambda_11(void *data, int argc, closure _,object k_7387, object lis_736_7335) ;
static void __lambda_10(void *data, int argc, object self_73254, object r_7390) ;
static void __lambda_9(void *data, int argc, closure _,object k_7381, object lis_735_7334) ;
static void __lambda_8(void *data, int argc, object self_73253, object r_7384) ;
static void __lambda_7(void *data, int argc, closure _,object k_7376, object lis_734_7333) ;
static void __lambda_6(void *data, int argc, object self_73252, object r_7378) ;
static void __lambda_5(void *data, int argc, closure _,object k_7371, object lis_733_7332) ;
static void __lambda_4(void *data, int argc, object self_73251, object r_7373) ;
static void __lambda_3(void *data, int argc, closure _,object k_7366, object lis_732_7331) ;
static void __lambda_2(void *data, int argc, object self_73250, object r_7368) ;
static void __lambda_1(void *data, int argc, closure _,object k_7361, object lis_731_7330) ;
static void __lambda_0(void *data, int argc, object self_73249, object r_7363) ;

static void __lambda_57(void *data, int argc, closure _,object k_73248) {
  Cyc_st_add(data, "scheme/cxr.sld:lib-init:schemecxr");
return_closcall1(data,  k_73248,  obj_int2obj(0));; 
}

static void __lambda_56(void *data, int argc, closure _,object k_73241, object lis_7329_7358) {
  Cyc_st_add(data, "scheme/cxr.sld:caaaaar");
return_closcall1(data,  k_73241,  Cyc_car(data, Cyc_car(data, Cyc_car(data, Cyc_car(data, Cyc_car(data, lis_7329_7358))))));; 
}

static void __lambda_55(void *data, int argc, closure _,object k_73234, object lis_7328_7357) {
  Cyc_st_add(data, "scheme/cxr.sld:cddddr");

closureN_type c_73598;
c_73598.hdr.mark = gc_color_red;
 c_73598.hdr.grayed = 0;
c_73598.tag = closureN_tag;
 c_73598.fn = (function_type)__lambda_54;
c_73598.num_args = 1;
c_73598.num_elements = 1;
c_73598.elements = (object *)alloca(sizeof(object) * 1);
c_73598.elements[0] = k_73234;

return_closcall1(data,  lis_7328_7357,  &c_73598);; 
}

static void __lambda_54(void *data, int argc, object self_73276, object r_73238) {
  return_closcall1(data,  ((closureN)self_73276)->elements[0],  Cyc_cdr(data, Cyc_cdr(data, Cyc_cdr(data, Cyc_cdr(data, r_73238)))));; 
}

static void __lambda_53(void *data, int argc, closure _,object k_73227, object lis_7327_7356) {
  Cyc_st_add(data, "scheme/cxr.sld:cdddar");

closureN_type c_73585;
c_73585.hdr.mark = gc_color_red;
 c_73585.hdr.grayed = 0;
c_73585.tag = closureN_tag;
 c_73585.fn = (function_type)__lambda_52;
c_73585.num_args = 1;
c_73585.num_elements = 1;
c_73585.elements = (object *)alloca(sizeof(object) * 1);
c_73585.elements[0] = k_73227;

return_closcall1(data,  lis_7327_7356,  &c_73585);; 
}

static void __lambda_52(void *data, int argc, object self_73275, object r_73231) {
  return_closcall1(data,  ((closureN)self_73275)->elements[0],  Cyc_cdr(data, Cyc_cdr(data, Cyc_cdr(data, Cyc_car(data, r_73231)))));; 
}

static void __lambda_51(void *data, int argc, closure _,object k_73220, object lis_7326_7355) {
  Cyc_st_add(data, "scheme/cxr.sld:cddadr");

closureN_type c_73572;
c_73572.hdr.mark = gc_color_red;
 c_73572.hdr.grayed = 0;
c_73572.tag = closureN_tag;
 c_73572.fn = (function_type)__lambda_50;
c_73572.num_args = 1;
c_73572.num_elements = 1;
c_73572.elements = (object *)alloca(sizeof(object) * 1);
c_73572.elements[0] = k_73220;

return_closcall1(data,  lis_7326_7355,  &c_73572);; 
}

static void __lambda_50(void *data, int argc, object self_73274, object r_73224) {
  return_closcall1(data,  ((closureN)self_73274)->elements[0],  Cyc_cdr(data, Cyc_cdr(data, Cyc_car(data, Cyc_cdr(data, r_73224)))));; 
}

static void __lambda_49(void *data, int argc, closure _,object k_73213, object lis_7325_7354) {
  Cyc_st_add(data, "scheme/cxr.sld:cddaar");

closureN_type c_73559;
c_73559.hdr.mark = gc_color_red;
 c_73559.hdr.grayed = 0;
c_73559.tag = closureN_tag;
 c_73559.fn = (function_type)__lambda_48;
c_73559.num_args = 1;
c_73559.num_elements = 1;
c_73559.elements = (object *)alloca(sizeof(object) * 1);
c_73559.elements[0] = k_73213;

return_closcall1(data,  lis_7325_7354,  &c_73559);; 
}

static void __lambda_48(void *data, int argc, object self_73273, object r_73217) {
  return_closcall1(data,  ((closureN)self_73273)->elements[0],  Cyc_cdr(data, Cyc_cdr(data, Cyc_car(data, Cyc_car(data, r_73217)))));; 
}

static void __lambda_47(void *data, int argc, closure _,object k_73206, object lis_7324_7353) {
  Cyc_st_add(data, "scheme/cxr.sld:cdaddr");

closureN_type c_73546;
c_73546.hdr.mark = gc_color_red;
 c_73546.hdr.grayed = 0;
c_73546.tag = closureN_tag;
 c_73546.fn = (function_type)__lambda_46;
c_73546.num_args = 1;
c_73546.num_elements = 1;
c_73546.elements = (object *)alloca(sizeof(object) * 1);
c_73546.elements[0] = k_73206;

return_closcall1(data,  lis_7324_7353,  &c_73546);; 
}

static void __lambda_46(void *data, int argc, object self_73272, object r_73210) {
  return_closcall1(data,  ((closureN)self_73272)->elements[0],  Cyc_cdr(data, Cyc_car(data, Cyc_cdr(data, Cyc_cdr(data, r_73210)))));; 
}

static void __lambda_45(void *data, int argc, closure _,object k_73199, object lis_7323_7352) {
  Cyc_st_add(data, "scheme/cxr.sld:cdadar");

closureN_type c_73533;
c_73533.hdr.mark = gc_color_red;
 c_73533.hdr.grayed = 0;
c_73533.tag = closureN_tag;
 c_73533.fn = (function_type)__lambda_44;
c_73533.num_args = 1;
c_73533.num_elements = 1;
c_73533.elements = (object *)alloca(sizeof(object) * 1);
c_73533.elements[0] = k_73199;

return_closcall1(data,  lis_7323_7352,  &c_73533);; 
}

static void __lambda_44(void *data, int argc, object self_73271, object r_73203) {
  return_closcall1(data,  ((closureN)self_73271)->elements[0],  Cyc_cdr(data, Cyc_car(data, Cyc_cdr(data, Cyc_car(data, r_73203)))));; 
}

static void __lambda_43(void *data, int argc, closure _,object k_73192, object lis_7322_7351) {
  Cyc_st_add(data, "scheme/cxr.sld:cdaadr");

closureN_type c_73520;
c_73520.hdr.mark = gc_color_red;
 c_73520.hdr.grayed = 0;
c_73520.tag = closureN_tag;
 c_73520.fn = (function_type)__lambda_42;
c_73520.num_args = 1;
c_73520.num_elements = 1;
c_73520.elements = (object *)alloca(sizeof(object) * 1);
c_73520.elements[0] = k_73192;

return_closcall1(data,  lis_7322_7351,  &c_73520);; 
}

static void __lambda_42(void *data, int argc, object self_73270, object r_73196) {
  return_closcall1(data,  ((closureN)self_73270)->elements[0],  Cyc_cdr(data, Cyc_car(data, Cyc_car(data, Cyc_cdr(data, r_73196)))));; 
}

static void __lambda_41(void *data, int argc, closure _,object k_73185, object lis_7321_7350) {
  Cyc_st_add(data, "scheme/cxr.sld:cdaaar");

closureN_type c_73507;
c_73507.hdr.mark = gc_color_red;
 c_73507.hdr.grayed = 0;
c_73507.tag = closureN_tag;
 c_73507.fn = (function_type)__lambda_40;
c_73507.num_args = 1;
c_73507.num_elements = 1;
c_73507.elements = (object *)alloca(sizeof(object) * 1);
c_73507.elements[0] = k_73185;

return_closcall1(data,  lis_7321_7350,  &c_73507);; 
}

static void __lambda_40(void *data, int argc, object self_73269, object r_73189) {
  return_closcall1(data,  ((closureN)self_73269)->elements[0],  Cyc_cdr(data, Cyc_car(data, Cyc_car(data, Cyc_car(data, r_73189)))));; 
}

static void __lambda_39(void *data, int argc, closure _,object k_73178, object lis_7320_7349) {
  Cyc_st_add(data, "scheme/cxr.sld:cadddr");

closureN_type c_73494;
c_73494.hdr.mark = gc_color_red;
 c_73494.hdr.grayed = 0;
c_73494.tag = closureN_tag;
 c_73494.fn = (function_type)__lambda_38;
c_73494.num_args = 1;
c_73494.num_elements = 1;
c_73494.elements = (object *)alloca(sizeof(object) * 1);
c_73494.elements[0] = k_73178;

return_closcall1(data,  lis_7320_7349,  &c_73494);; 
}

static void __lambda_38(void *data, int argc, object self_73268, object r_73182) {
  return_closcall1(data,  ((closureN)self_73268)->elements[0],  Cyc_car(data, Cyc_cdr(data, Cyc_cdr(data, Cyc_cdr(data, r_73182)))));; 
}

static void __lambda_37(void *data, int argc, closure _,object k_73171, object lis_7319_7348) {
  Cyc_st_add(data, "scheme/cxr.sld:caddar");

closureN_type c_73481;
c_73481.hdr.mark = gc_color_red;
 c_73481.hdr.grayed = 0;
c_73481.tag = closureN_tag;
 c_73481.fn = (function_type)__lambda_36;
c_73481.num_args = 1;
c_73481.num_elements = 1;
c_73481.elements = (object *)alloca(sizeof(object) * 1);
c_73481.elements[0] = k_73171;

return_closcall1(data,  lis_7319_7348,  &c_73481);; 
}

static void __lambda_36(void *data, int argc, object self_73267, object r_73175) {
  return_closcall1(data,  ((closureN)self_73267)->elements[0],  Cyc_car(data, Cyc_cdr(data, Cyc_cdr(data, Cyc_car(data, r_73175)))));; 
}

static void __lambda_35(void *data, int argc, closure _,object k_73164, object lis_7318_7347) {
  Cyc_st_add(data, "scheme/cxr.sld:cadadr");

closureN_type c_73468;
c_73468.hdr.mark = gc_color_red;
 c_73468.hdr.grayed = 0;
c_73468.tag = closureN_tag;
 c_73468.fn = (function_type)__lambda_34;
c_73468.num_args = 1;
c_73468.num_elements = 1;
c_73468.elements = (object *)alloca(sizeof(object) * 1);
c_73468.elements[0] = k_73164;

return_closcall1(data,  lis_7318_7347,  &c_73468);; 
}

static void __lambda_34(void *data, int argc, object self_73266, object r_73168) {
  return_closcall1(data,  ((closureN)self_73266)->elements[0],  Cyc_car(data, Cyc_cdr(data, Cyc_car(data, Cyc_cdr(data, r_73168)))));; 
}

static void __lambda_33(void *data, int argc, closure _,object k_73157, object lis_7317_7346) {
  Cyc_st_add(data, "scheme/cxr.sld:cadaar");

closureN_type c_73455;
c_73455.hdr.mark = gc_color_red;
 c_73455.hdr.grayed = 0;
c_73455.tag = closureN_tag;
 c_73455.fn = (function_type)__lambda_32;
c_73455.num_args = 1;
c_73455.num_elements = 1;
c_73455.elements = (object *)alloca(sizeof(object) * 1);
c_73455.elements[0] = k_73157;

return_closcall1(data,  lis_7317_7346,  &c_73455);; 
}

static void __lambda_32(void *data, int argc, object self_73265, object r_73161) {
  return_closcall1(data,  ((closureN)self_73265)->elements[0],  Cyc_car(data, Cyc_cdr(data, Cyc_car(data, Cyc_car(data, r_73161)))));; 
}

static void __lambda_31(void *data, int argc, closure _,object k_73150, object lis_7316_7345) {
  Cyc_st_add(data, "scheme/cxr.sld:caaddr");

closureN_type c_73442;
c_73442.hdr.mark = gc_color_red;
 c_73442.hdr.grayed = 0;
c_73442.tag = closureN_tag;
 c_73442.fn = (function_type)__lambda_30;
c_73442.num_args = 1;
c_73442.num_elements = 1;
c_73442.elements = (object *)alloca(sizeof(object) * 1);
c_73442.elements[0] = k_73150;

return_closcall1(data,  lis_7316_7345,  &c_73442);; 
}

static void __lambda_30(void *data, int argc, object self_73264, object r_73154) {
  return_closcall1(data,  ((closureN)self_73264)->elements[0],  Cyc_car(data, Cyc_car(data, Cyc_cdr(data, Cyc_cdr(data, r_73154)))));; 
}

static void __lambda_29(void *data, int argc, closure _,object k_73143, object lis_7315_7344) {
  Cyc_st_add(data, "scheme/cxr.sld:caadar");

closureN_type c_73429;
c_73429.hdr.mark = gc_color_red;
 c_73429.hdr.grayed = 0;
c_73429.tag = closureN_tag;
 c_73429.fn = (function_type)__lambda_28;
c_73429.num_args = 1;
c_73429.num_elements = 1;
c_73429.elements = (object *)alloca(sizeof(object) * 1);
c_73429.elements[0] = k_73143;

return_closcall1(data,  lis_7315_7344,  &c_73429);; 
}

static void __lambda_28(void *data, int argc, object self_73263, object r_73147) {
  return_closcall1(data,  ((closureN)self_73263)->elements[0],  Cyc_car(data, Cyc_car(data, Cyc_cdr(data, Cyc_car(data, r_73147)))));; 
}

static void __lambda_27(void *data, int argc, closure _,object k_73136, object lis_7314_7343) {
  Cyc_st_add(data, "scheme/cxr.sld:caaadr");

closureN_type c_73416;
c_73416.hdr.mark = gc_color_red;
 c_73416.hdr.grayed = 0;
c_73416.tag = closureN_tag;
 c_73416.fn = (function_type)__lambda_26;
c_73416.num_args = 1;
c_73416.num_elements = 1;
c_73416.elements = (object *)alloca(sizeof(object) * 1);
c_73416.elements[0] = k_73136;

return_closcall1(data,  lis_7314_7343,  &c_73416);; 
}

static void __lambda_26(void *data, int argc, object self_73262, object r_73140) {
  return_closcall1(data,  ((closureN)self_73262)->elements[0],  Cyc_car(data, Cyc_car(data, Cyc_car(data, Cyc_cdr(data, r_73140)))));; 
}

static void __lambda_25(void *data, int argc, closure _,object k_73129, object lis_7313_7342) {
  Cyc_st_add(data, "scheme/cxr.sld:caaaar");

closureN_type c_73403;
c_73403.hdr.mark = gc_color_red;
 c_73403.hdr.grayed = 0;
c_73403.tag = closureN_tag;
 c_73403.fn = (function_type)__lambda_24;
c_73403.num_args = 1;
c_73403.num_elements = 1;
c_73403.elements = (object *)alloca(sizeof(object) * 1);
c_73403.elements[0] = k_73129;

return_closcall1(data,  lis_7313_7342,  &c_73403);; 
}

static void __lambda_24(void *data, int argc, object self_73261, object r_73133) {
  return_closcall1(data,  ((closureN)self_73261)->elements[0],  Cyc_car(data, Cyc_car(data, Cyc_car(data, Cyc_car(data, r_73133)))));; 
}

static void __lambda_23(void *data, int argc, closure _,object k_73123, object lis_7312_7341) {
  Cyc_st_add(data, "scheme/cxr.sld:cdddr");

closureN_type c_73392;
c_73392.hdr.mark = gc_color_red;
 c_73392.hdr.grayed = 0;
c_73392.tag = closureN_tag;
 c_73392.fn = (function_type)__lambda_22;
c_73392.num_args = 1;
c_73392.num_elements = 1;
c_73392.elements = (object *)alloca(sizeof(object) * 1);
c_73392.elements[0] = k_73123;

return_closcall1(data,  lis_7312_7341,  &c_73392);; 
}

static void __lambda_22(void *data, int argc, object self_73260, object r_73126) {
  return_closcall1(data,  ((closureN)self_73260)->elements[0],  Cyc_cdr(data, Cyc_cdr(data, Cyc_cdr(data, r_73126))));; 
}

static void __lambda_21(void *data, int argc, closure _,object k_73117, object lis_7311_7340) {
  Cyc_st_add(data, "scheme/cxr.sld:cddar");

closureN_type c_73381;
c_73381.hdr.mark = gc_color_red;
 c_73381.hdr.grayed = 0;
c_73381.tag = closureN_tag;
 c_73381.fn = (function_type)__lambda_20;
c_73381.num_args = 1;
c_73381.num_elements = 1;
c_73381.elements = (object *)alloca(sizeof(object) * 1);
c_73381.elements[0] = k_73117;

return_closcall1(data,  lis_7311_7340,  &c_73381);; 
}

static void __lambda_20(void *data, int argc, object self_73259, object r_73120) {
  return_closcall1(data,  ((closureN)self_73259)->elements[0],  Cyc_cdr(data, Cyc_cdr(data, Cyc_car(data, r_73120))));; 
}

static void __lambda_19(void *data, int argc, closure _,object k_73111, object lis_7310_7339) {
  Cyc_st_add(data, "scheme/cxr.sld:cdadr");

closureN_type c_73370;
c_73370.hdr.mark = gc_color_red;
 c_73370.hdr.grayed = 0;
c_73370.tag = closureN_tag;
 c_73370.fn = (function_type)__lambda_18;
c_73370.num_args = 1;
c_73370.num_elements = 1;
c_73370.elements = (object *)alloca(sizeof(object) * 1);
c_73370.elements[0] = k_73111;

return_closcall1(data,  lis_7310_7339,  &c_73370);; 
}

static void __lambda_18(void *data, int argc, object self_73258, object r_73114) {
  return_closcall1(data,  ((closureN)self_73258)->elements[0],  Cyc_cdr(data, Cyc_car(data, Cyc_cdr(data, r_73114))));; 
}

static void __lambda_17(void *data, int argc, closure _,object k_73105, object lis_739_7338) {
  Cyc_st_add(data, "scheme/cxr.sld:cdaar");

closureN_type c_73359;
c_73359.hdr.mark = gc_color_red;
 c_73359.hdr.grayed = 0;
c_73359.tag = closureN_tag;
 c_73359.fn = (function_type)__lambda_16;
c_73359.num_args = 1;
c_73359.num_elements = 1;
c_73359.elements = (object *)alloca(sizeof(object) * 1);
c_73359.elements[0] = k_73105;

return_closcall1(data,  lis_739_7338,  &c_73359);; 
}

static void __lambda_16(void *data, int argc, object self_73257, object r_73108) {
  return_closcall1(data,  ((closureN)self_73257)->elements[0],  Cyc_cdr(data, Cyc_car(data, Cyc_car(data, r_73108))));; 
}

static void __lambda_15(void *data, int argc, closure _,object k_7399, object lis_738_7337) {
  Cyc_st_add(data, "scheme/cxr.sld:caddr");

closureN_type c_73348;
c_73348.hdr.mark = gc_color_red;
 c_73348.hdr.grayed = 0;
c_73348.tag = closureN_tag;
 c_73348.fn = (function_type)__lambda_14;
c_73348.num_args = 1;
c_73348.num_elements = 1;
c_73348.elements = (object *)alloca(sizeof(object) * 1);
c_73348.elements[0] = k_7399;

return_closcall1(data,  lis_738_7337,  &c_73348);; 
}

static void __lambda_14(void *data, int argc, object self_73256, object r_73102) {
  return_closcall1(data,  ((closureN)self_73256)->elements[0],  Cyc_car(data, Cyc_cdr(data, Cyc_cdr(data, r_73102))));; 
}

static void __lambda_13(void *data, int argc, closure _,object k_7393, object lis_737_7336) {
  Cyc_st_add(data, "scheme/cxr.sld:cadar");

closureN_type c_73337;
c_73337.hdr.mark = gc_color_red;
 c_73337.hdr.grayed = 0;
c_73337.tag = closureN_tag;
 c_73337.fn = (function_type)__lambda_12;
c_73337.num_args = 1;
c_73337.num_elements = 1;
c_73337.elements = (object *)alloca(sizeof(object) * 1);
c_73337.elements[0] = k_7393;

return_closcall1(data,  lis_737_7336,  &c_73337);; 
}

static void __lambda_12(void *data, int argc, object self_73255, object r_7396) {
  return_closcall1(data,  ((closureN)self_73255)->elements[0],  Cyc_car(data, Cyc_cdr(data, Cyc_car(data, r_7396))));; 
}

static void __lambda_11(void *data, int argc, closure _,object k_7387, object lis_736_7335) {
  Cyc_st_add(data, "scheme/cxr.sld:caadr");

closureN_type c_73326;
c_73326.hdr.mark = gc_color_red;
 c_73326.hdr.grayed = 0;
c_73326.tag = closureN_tag;
 c_73326.fn = (function_type)__lambda_10;
c_73326.num_args = 1;
c_73326.num_elements = 1;
c_73326.elements = (object *)alloca(sizeof(object) * 1);
c_73326.elements[0] = k_7387;

return_closcall1(data,  lis_736_7335,  &c_73326);; 
}

static void __lambda_10(void *data, int argc, object self_73254, object r_7390) {
  return_closcall1(data,  ((closureN)self_73254)->elements[0],  Cyc_car(data, Cyc_car(data, Cyc_cdr(data, r_7390))));; 
}

static void __lambda_9(void *data, int argc, closure _,object k_7381, object lis_735_7334) {
  Cyc_st_add(data, "scheme/cxr.sld:caaar");

closureN_type c_73315;
c_73315.hdr.mark = gc_color_red;
 c_73315.hdr.grayed = 0;
c_73315.tag = closureN_tag;
 c_73315.fn = (function_type)__lambda_8;
c_73315.num_args = 1;
c_73315.num_elements = 1;
c_73315.elements = (object *)alloca(sizeof(object) * 1);
c_73315.elements[0] = k_7381;

return_closcall1(data,  lis_735_7334,  &c_73315);; 
}

static void __lambda_8(void *data, int argc, object self_73253, object r_7384) {
  return_closcall1(data,  ((closureN)self_73253)->elements[0],  Cyc_car(data, Cyc_car(data, Cyc_car(data, r_7384))));; 
}

static void __lambda_7(void *data, int argc, closure _,object k_7376, object lis_734_7333) {
  Cyc_st_add(data, "scheme/cxr.sld:cddr");

closureN_type c_73306;
c_73306.hdr.mark = gc_color_red;
 c_73306.hdr.grayed = 0;
c_73306.tag = closureN_tag;
 c_73306.fn = (function_type)__lambda_6;
c_73306.num_args = 1;
c_73306.num_elements = 1;
c_73306.elements = (object *)alloca(sizeof(object) * 1);
c_73306.elements[0] = k_7376;

return_closcall1(data,  lis_734_7333,  &c_73306);; 
}

static void __lambda_6(void *data, int argc, object self_73252, object r_7378) {
  return_closcall1(data,  ((closureN)self_73252)->elements[0],  Cyc_cdr(data, Cyc_cdr(data, r_7378)));; 
}

static void __lambda_5(void *data, int argc, closure _,object k_7371, object lis_733_7332) {
  Cyc_st_add(data, "scheme/cxr.sld:cdar");

closureN_type c_73297;
c_73297.hdr.mark = gc_color_red;
 c_73297.hdr.grayed = 0;
c_73297.tag = closureN_tag;
 c_73297.fn = (function_type)__lambda_4;
c_73297.num_args = 1;
c_73297.num_elements = 1;
c_73297.elements = (object *)alloca(sizeof(object) * 1);
c_73297.elements[0] = k_7371;

return_closcall1(data,  lis_733_7332,  &c_73297);; 
}

static void __lambda_4(void *data, int argc, object self_73251, object r_7373) {
  return_closcall1(data,  ((closureN)self_73251)->elements[0],  Cyc_cdr(data, Cyc_car(data, r_7373)));; 
}

static void __lambda_3(void *data, int argc, closure _,object k_7366, object lis_732_7331) {
  Cyc_st_add(data, "scheme/cxr.sld:cadr");

closureN_type c_73288;
c_73288.hdr.mark = gc_color_red;
 c_73288.hdr.grayed = 0;
c_73288.tag = closureN_tag;
 c_73288.fn = (function_type)__lambda_2;
c_73288.num_args = 1;
c_73288.num_elements = 1;
c_73288.elements = (object *)alloca(sizeof(object) * 1);
c_73288.elements[0] = k_7366;

return_closcall1(data,  lis_732_7331,  &c_73288);; 
}

static void __lambda_2(void *data, int argc, object self_73250, object r_7368) {
  return_closcall1(data,  ((closureN)self_73250)->elements[0],  Cyc_car(data, Cyc_cdr(data, r_7368)));; 
}

static void __lambda_1(void *data, int argc, closure _,object k_7361, object lis_731_7330) {
  Cyc_st_add(data, "scheme/cxr.sld:caar");

closureN_type c_73279;
c_73279.hdr.mark = gc_color_red;
 c_73279.hdr.grayed = 0;
c_73279.tag = closureN_tag;
 c_73279.fn = (function_type)__lambda_0;
c_73279.num_args = 1;
c_73279.num_elements = 1;
c_73279.elements = (object *)alloca(sizeof(object) * 1);
c_73279.elements[0] = k_7361;

return_closcall1(data,  lis_731_7330,  &c_73279);; 
}

static void __lambda_0(void *data, int argc, object self_73249, object r_7363) {
  return_closcall1(data,  ((closureN)self_73249)->elements[0],  Cyc_car(data, Cyc_car(data, r_7363)));; 
}

void c_schemecxr_inlinable_lambdas(void *data, int argc, closure _, object cont){ 
(((closure)cont)->fn)(data, 1, cont, NULL);
 } 
void c_schemecxr_entry_pt_first_lambda(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
Cyc_set_globals_changed((gc_thread_data *)data);

  add_global((object *) &__glo_lib_91init_117schemecxr_scheme_cxr);
  add_global((object *) &__glo_caaaaar_scheme_cxr);
  add_global((object *) &__glo_cddddr_scheme_cxr);
  add_global((object *) &__glo_cdddar_scheme_cxr);
  add_global((object *) &__glo_cddadr_scheme_cxr);
  add_global((object *) &__glo_cddaar_scheme_cxr);
  add_global((object *) &__glo_cdaddr_scheme_cxr);
  add_global((object *) &__glo_cdadar_scheme_cxr);
  add_global((object *) &__glo_cdaadr_scheme_cxr);
  add_global((object *) &__glo_cdaaar_scheme_cxr);
  add_global((object *) &__glo_cadddr_scheme_cxr);
  add_global((object *) &__glo_caddar_scheme_cxr);
  add_global((object *) &__glo_cadadr_scheme_cxr);
  add_global((object *) &__glo_cadaar_scheme_cxr);
  add_global((object *) &__glo_caaddr_scheme_cxr);
  add_global((object *) &__glo_caadar_scheme_cxr);
  add_global((object *) &__glo_caaadr_scheme_cxr);
  add_global((object *) &__glo_caaaar_scheme_cxr);
  add_global((object *) &__glo_cdddr_scheme_cxr);
  add_global((object *) &__glo_cddar_scheme_cxr);
  add_global((object *) &__glo_cdadr_scheme_cxr);
  add_global((object *) &__glo_cdaar_scheme_cxr);
  add_global((object *) &__glo_caddr_scheme_cxr);
  add_global((object *) &__glo_cadar_scheme_cxr);
  add_global((object *) &__glo_caadr_scheme_cxr);
  add_global((object *) &__glo_caaar_scheme_cxr);
  add_global((object *) &__glo_cddr_scheme_cxr);
  add_global((object *) &__glo_cdar_scheme_cxr);
  add_global((object *) &__glo_cadr_scheme_cxr);
  add_global((object *) &__glo_caar_scheme_cxr);
  mclosure0(c_73621, (function_type)__lambda_57);c_73621.num_args = 0; 
  __glo_lib_91init_117schemecxr_scheme_cxr = &c_73621; 
  mclosure0(c_73609, (function_type)__lambda_56);c_73609.num_args = 1; 
  __glo_caaaaar_scheme_cxr = &c_73609; 
  mclosure0(c_73596, (function_type)__lambda_55);c_73596.num_args = 1; 
  __glo_cddddr_scheme_cxr = &c_73596; 
  mclosure0(c_73583, (function_type)__lambda_53);c_73583.num_args = 1; 
  __glo_cdddar_scheme_cxr = &c_73583; 
  mclosure0(c_73570, (function_type)__lambda_51);c_73570.num_args = 1; 
  __glo_cddadr_scheme_cxr = &c_73570; 
  mclosure0(c_73557, (function_type)__lambda_49);c_73557.num_args = 1; 
  __glo_cddaar_scheme_cxr = &c_73557; 
  mclosure0(c_73544, (function_type)__lambda_47);c_73544.num_args = 1; 
  __glo_cdaddr_scheme_cxr = &c_73544; 
  mclosure0(c_73531, (function_type)__lambda_45);c_73531.num_args = 1; 
  __glo_cdadar_scheme_cxr = &c_73531; 
  mclosure0(c_73518, (function_type)__lambda_43);c_73518.num_args = 1; 
  __glo_cdaadr_scheme_cxr = &c_73518; 
  mclosure0(c_73505, (function_type)__lambda_41);c_73505.num_args = 1; 
  __glo_cdaaar_scheme_cxr = &c_73505; 
  mclosure0(c_73492, (function_type)__lambda_39);c_73492.num_args = 1; 
  __glo_cadddr_scheme_cxr = &c_73492; 
  mclosure0(c_73479, (function_type)__lambda_37);c_73479.num_args = 1; 
  __glo_caddar_scheme_cxr = &c_73479; 
  mclosure0(c_73466, (function_type)__lambda_35);c_73466.num_args = 1; 
  __glo_cadadr_scheme_cxr = &c_73466; 
  mclosure0(c_73453, (function_type)__lambda_33);c_73453.num_args = 1; 
  __glo_cadaar_scheme_cxr = &c_73453; 
  mclosure0(c_73440, (function_type)__lambda_31);c_73440.num_args = 1; 
  __glo_caaddr_scheme_cxr = &c_73440; 
  mclosure0(c_73427, (function_type)__lambda_29);c_73427.num_args = 1; 
  __glo_caadar_scheme_cxr = &c_73427; 
  mclosure0(c_73414, (function_type)__lambda_27);c_73414.num_args = 1; 
  __glo_caaadr_scheme_cxr = &c_73414; 
  mclosure0(c_73401, (function_type)__lambda_25);c_73401.num_args = 1; 
  __glo_caaaar_scheme_cxr = &c_73401; 
  mclosure0(c_73390, (function_type)__lambda_23);c_73390.num_args = 1; 
  __glo_cdddr_scheme_cxr = &c_73390; 
  mclosure0(c_73379, (function_type)__lambda_21);c_73379.num_args = 1; 
  __glo_cddar_scheme_cxr = &c_73379; 
  mclosure0(c_73368, (function_type)__lambda_19);c_73368.num_args = 1; 
  __glo_cdadr_scheme_cxr = &c_73368; 
  mclosure0(c_73357, (function_type)__lambda_17);c_73357.num_args = 1; 
  __glo_cdaar_scheme_cxr = &c_73357; 
  mclosure0(c_73346, (function_type)__lambda_15);c_73346.num_args = 1; 
  __glo_caddr_scheme_cxr = &c_73346; 
  mclosure0(c_73335, (function_type)__lambda_13);c_73335.num_args = 1; 
  __glo_cadar_scheme_cxr = &c_73335; 
  mclosure0(c_73324, (function_type)__lambda_11);c_73324.num_args = 1; 
  __glo_caadr_scheme_cxr = &c_73324; 
  mclosure0(c_73313, (function_type)__lambda_9);c_73313.num_args = 1; 
  __glo_caaar_scheme_cxr = &c_73313; 
  mclosure0(c_73304, (function_type)__lambda_7);c_73304.num_args = 1; 
  __glo_cddr_scheme_cxr = &c_73304; 
  mclosure0(c_73295, (function_type)__lambda_5);c_73295.num_args = 1; 
  __glo_cdar_scheme_cxr = &c_73295; 
  mclosure0(c_73286, (function_type)__lambda_3);c_73286.num_args = 1; 
  __glo_cadr_scheme_cxr = &c_73286; 
  mclosure0(c_73277, (function_type)__lambda_1);c_73277.num_args = 1; 
  __glo_caar_scheme_cxr = &c_73277; 

  mclosure0(clo_73624, c_schemecxr_inlinable_lambdas); make_pair(pair_73623, find_or_add_symbol("c_schemecxr_inlinable_lambdas"), &clo_73624);
  make_cvar(cvar_73625, (object *)&__glo_lib_91init_117schemecxr_scheme_cxr);make_pair(pair_73626, find_or_add_symbol("lib-init:schemecxr"), &cvar_73625);
  make_cvar(cvar_73627, (object *)&__glo_caaaaar_scheme_cxr);make_pair(pair_73628, find_or_add_symbol("caaaaar"), &cvar_73627);
  make_cvar(cvar_73629, (object *)&__glo_cddddr_scheme_cxr);make_pair(pair_73630, find_or_add_symbol("cddddr"), &cvar_73629);
  make_cvar(cvar_73631, (object *)&__glo_cdddar_scheme_cxr);make_pair(pair_73632, find_or_add_symbol("cdddar"), &cvar_73631);
  make_cvar(cvar_73633, (object *)&__glo_cddadr_scheme_cxr);make_pair(pair_73634, find_or_add_symbol("cddadr"), &cvar_73633);
  make_cvar(cvar_73635, (object *)&__glo_cddaar_scheme_cxr);make_pair(pair_73636, find_or_add_symbol("cddaar"), &cvar_73635);
  make_cvar(cvar_73637, (object *)&__glo_cdaddr_scheme_cxr);make_pair(pair_73638, find_or_add_symbol("cdaddr"), &cvar_73637);
  make_cvar(cvar_73639, (object *)&__glo_cdadar_scheme_cxr);make_pair(pair_73640, find_or_add_symbol("cdadar"), &cvar_73639);
  make_cvar(cvar_73641, (object *)&__glo_cdaadr_scheme_cxr);make_pair(pair_73642, find_or_add_symbol("cdaadr"), &cvar_73641);
  make_cvar(cvar_73643, (object *)&__glo_cdaaar_scheme_cxr);make_pair(pair_73644, find_or_add_symbol("cdaaar"), &cvar_73643);
  make_cvar(cvar_73645, (object *)&__glo_cadddr_scheme_cxr);make_pair(pair_73646, find_or_add_symbol("cadddr"), &cvar_73645);
  make_cvar(cvar_73647, (object *)&__glo_caddar_scheme_cxr);make_pair(pair_73648, find_or_add_symbol("caddar"), &cvar_73647);
  make_cvar(cvar_73649, (object *)&__glo_cadadr_scheme_cxr);make_pair(pair_73650, find_or_add_symbol("cadadr"), &cvar_73649);
  make_cvar(cvar_73651, (object *)&__glo_cadaar_scheme_cxr);make_pair(pair_73652, find_or_add_symbol("cadaar"), &cvar_73651);
  make_cvar(cvar_73653, (object *)&__glo_caaddr_scheme_cxr);make_pair(pair_73654, find_or_add_symbol("caaddr"), &cvar_73653);
  make_cvar(cvar_73655, (object *)&__glo_caadar_scheme_cxr);make_pair(pair_73656, find_or_add_symbol("caadar"), &cvar_73655);
  make_cvar(cvar_73657, (object *)&__glo_caaadr_scheme_cxr);make_pair(pair_73658, find_or_add_symbol("caaadr"), &cvar_73657);
  make_cvar(cvar_73659, (object *)&__glo_caaaar_scheme_cxr);make_pair(pair_73660, find_or_add_symbol("caaaar"), &cvar_73659);
  make_cvar(cvar_73661, (object *)&__glo_cdddr_scheme_cxr);make_pair(pair_73662, find_or_add_symbol("cdddr"), &cvar_73661);
  make_cvar(cvar_73663, (object *)&__glo_cddar_scheme_cxr);make_pair(pair_73664, find_or_add_symbol("cddar"), &cvar_73663);
  make_cvar(cvar_73665, (object *)&__glo_cdadr_scheme_cxr);make_pair(pair_73666, find_or_add_symbol("cdadr"), &cvar_73665);
  make_cvar(cvar_73667, (object *)&__glo_cdaar_scheme_cxr);make_pair(pair_73668, find_or_add_symbol("cdaar"), &cvar_73667);
  make_cvar(cvar_73669, (object *)&__glo_caddr_scheme_cxr);make_pair(pair_73670, find_or_add_symbol("caddr"), &cvar_73669);
  make_cvar(cvar_73671, (object *)&__glo_cadar_scheme_cxr);make_pair(pair_73672, find_or_add_symbol("cadar"), &cvar_73671);
  make_cvar(cvar_73673, (object *)&__glo_caadr_scheme_cxr);make_pair(pair_73674, find_or_add_symbol("caadr"), &cvar_73673);
  make_cvar(cvar_73675, (object *)&__glo_caaar_scheme_cxr);make_pair(pair_73676, find_or_add_symbol("caaar"), &cvar_73675);
  make_cvar(cvar_73677, (object *)&__glo_cddr_scheme_cxr);make_pair(pair_73678, find_or_add_symbol("cddr"), &cvar_73677);
  make_cvar(cvar_73679, (object *)&__glo_cdar_scheme_cxr);make_pair(pair_73680, find_or_add_symbol("cdar"), &cvar_73679);
  make_cvar(cvar_73681, (object *)&__glo_cadr_scheme_cxr);make_pair(pair_73682, find_or_add_symbol("cadr"), &cvar_73681);
  make_cvar(cvar_73683, (object *)&__glo_caar_scheme_cxr);make_pair(pair_73684, find_or_add_symbol("caar"), &cvar_73683);
make_pair(c_73715, &pair_73623,Cyc_global_variables);
make_pair(c_73714, &pair_73626, &c_73715);
make_pair(c_73713, &pair_73628, &c_73714);
make_pair(c_73712, &pair_73630, &c_73713);
make_pair(c_73711, &pair_73632, &c_73712);
make_pair(c_73710, &pair_73634, &c_73711);
make_pair(c_73709, &pair_73636, &c_73710);
make_pair(c_73708, &pair_73638, &c_73709);
make_pair(c_73707, &pair_73640, &c_73708);
make_pair(c_73706, &pair_73642, &c_73707);
make_pair(c_73705, &pair_73644, &c_73706);
make_pair(c_73704, &pair_73646, &c_73705);
make_pair(c_73703, &pair_73648, &c_73704);
make_pair(c_73702, &pair_73650, &c_73703);
make_pair(c_73701, &pair_73652, &c_73702);
make_pair(c_73700, &pair_73654, &c_73701);
make_pair(c_73699, &pair_73656, &c_73700);
make_pair(c_73698, &pair_73658, &c_73699);
make_pair(c_73697, &pair_73660, &c_73698);
make_pair(c_73696, &pair_73662, &c_73697);
make_pair(c_73695, &pair_73664, &c_73696);
make_pair(c_73694, &pair_73666, &c_73695);
make_pair(c_73693, &pair_73668, &c_73694);
make_pair(c_73692, &pair_73670, &c_73693);
make_pair(c_73691, &pair_73672, &c_73692);
make_pair(c_73690, &pair_73674, &c_73691);
make_pair(c_73689, &pair_73676, &c_73690);
make_pair(c_73688, &pair_73678, &c_73689);
make_pair(c_73687, &pair_73680, &c_73688);
make_pair(c_73686, &pair_73682, &c_73687);
make_pair(c_73685, &pair_73684, &c_73686);
Cyc_global_variables = &c_73685;
cont = ((closure1_type *)cont)->element;
(((closure)__glo_lib_91init_117schemecxr_scheme_cxr)->fn)(data, 1, cont, cont);
}
void c_schemecxr_entry_pt(data, argc, cont,value) void *data; int argc; closure cont; object value;{ 
  register_library("scheme_cxr");
  c_schemecxr_entry_pt_first_lambda(data, argc, cont,value);
}
