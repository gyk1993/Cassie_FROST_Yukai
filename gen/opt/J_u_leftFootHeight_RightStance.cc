/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:45 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t460;
  double t60;
  double t257;
  double t292;
  double t341;
  double t558;
  double t575;
  double t612;
  double t616;
  double t666;
  double t764;
  double t801;
  double t919;
  double t931;
  double t932;
  double t854;
  double t878;
  double t880;
  double t964;
  double t1305;
  double t1309;
  double t1310;
  double t1350;
  double t1260;
  double t1303;
  double t1304;
  double t1410;
  double t1444;
  double t1479;
  double t980;
  double t982;
  double t1002;
  double t1036;
  double t1148;
  double t1205;
  double t1230;
  double t1714;
  double t1720;
  double t1721;
  double t1828;
  double t1850;
  double t1871;
  double t1876;
  double t1956;
  double t1957;
  double t1966;
  double t2209;
  double t2212;
  double t2214;
  double t2253;
  double t2265;
  double t2276;
  double t2281;
  double t2282;
  double t2316;
  double t2317;
  double t2319;
  double t2324;
  double t2339;
  double t2341;
  double t2345;
  double t2364;
  double t2371;
  double t2374;
  double t2596;
  double t2672;
  double t2682;
  double t2721;
  double t2725;
  double t2741;
  double t2769;
  double t2800;
  double t2838;
  double t2874;
  double t2939;
  double t2940;
  double t2943;
  double t61;
  double t199;
  double t836;
  double t853;
  double t1019;
  double t1089;
  double t1091;
  double t3064;
  double t3069;
  double t3072;
  double t3043;
  double t3051;
  double t3055;
  double t1311;
  double t1360;
  double t1364;
  double t1494;
  double t1500;
  double t1531;
  double t3101;
  double t3102;
  double t3108;
  double t1655;
  double t1656;
  double t1663;
  double t1875;
  double t1881;
  double t1913;
  double t3086;
  double t3091;
  double t3095;
  double t3130;
  double t3133;
  double t3134;
  double t2025;
  double t2188;
  double t2208;
  double t2254;
  double t2255;
  double t2264;
  double t2271;
  double t2272;
  double t3140;
  double t3141;
  double t3146;
  double t3157;
  double t3161;
  double t3165;
  double t2304;
  double t2308;
  double t2309;
  double t2315;
  double t2344;
  double t2349;
  double t2360;
  double t3172;
  double t3177;
  double t3178;
  double t3184;
  double t3188;
  double t3190;
  double t2412;
  double t2493;
  double t2518;
  double t2749;
  double t2792;
  double t2794;
  double t3195;
  double t3199;
  double t3204;
  double t3206;
  double t3209;
  double t3210;
  double t2914;
  double t2930;
  double t2932;
  double t3215;
  double t3217;
  double t3226;
  double t3229;
  double t3235;
  double t3236;
  double t3285;
  double t3290;
  double t3294;
  double t3340;
  double t3341;
  double t3345;
  double t3356;
  double t3358;
  double t3363;
  double t3314;
  double t3318;
  double t3319;
  double t3402;
  double t3410;
  double t3411;
  double t3420;
  double t3426;
  double t3438;
  double t3441;
  double t3451;
  double t3466;
  double t3485;
  double t3489;
  double t3495;
  double t3510;
  double t3512;
  double t3519;
  double t3528;
  double t3537;
  double t3542;
  double t3554;
  double t3558;
  double t3561;
  double t3570;
  double t3574;
  double t3575;
  double t3590;
  double t3594;
  double t3599;
  double t3659;
  double t3668;
  double t3670;
  double t3677;
  double t3679;
  double t3681;
  double t3686;
  double t3698;
  double t3699;
  double t3707;
  double t3710;
  double t3721;
  double t3735;
  double t3740;
  double t3744;
  double t3749;
  double t3752;
  double t3753;
  double t3768;
  double t3769;
  double t3771;
  double t3776;
  double t3777;
  double t3783;
  double t3786;
  double t3796;
  double t3802;
  double t3805;
  double t3810;
  double t3811;
  double t3822;
  double t3828;
  double t3838;
  double t3848;
  double t3849;
  double t3853;
  double t3899;
  double t3900;
  double t3902;
  double t3906;
  double t3907;
  double t3910;
  double t3912;
  double t3930;
  double t3934;
  double t3938;
  double t3948;
  double t3952;
  double t3957;
  double t3966;
  double t3977;
  double t3984;
  double t3986;
  double t3989;
  double t3990;
  double t3993;
  double t3994;
  double t3998;
  double t4002;
  double t4004;
  double t4008;
  double t4018;
  double t4026;
  double t4029;
  double t4046;
  double t4052;
  double t4060;
  double t4120;
  double t4124;
  double t4133;
  double t4100;
  double t4101;
  double t4106;
  double t4145;
  double t4147;
  double t4149;
  double t4169;
  double t4171;
  double t4172;
  double t4176;
  double t4177;
  double t4183;
  double t4186;
  double t4189;
  double t4194;
  double t4213;
  double t4215;
  double t4219;
  double t4230;
  double t4235;
  double t4238;
  double t4245;
  double t4247;
  double t4248;
  double t4293;
  double t4299;
  double t4302;
  double t4309;
  double t4310;
  double t4311;
  double t4319;
  double t4322;
  double t4323;
  double t4331;
  double t4333;
  double t4337;
  double t4339;
  double t4342;
  double t4343;
  double t4348;
  double t4349;
  double t4351;
  double t4365;
  double t4366;
  double t4369;
  double t4373;
  double t4374;
  double t4377;
  double t4381;
  double t4382;
  double t4384;
  double t4416;
  double t4419;
  double t4422;
  double t4432;
  double t4434;
  double t4438;
  double t4439;
  double t4444;
  double t4445;
  double t4447;
  double t4450;
  double t4452;
  double t4454;
  double t4459;
  double t4462;
  double t4463;
  double t4471;
  double t4476;
  double t4478;
  double t4511;
  double t4514;
  double t4515;
  double t4519;
  double t4524;
  double t4529;
  double t4536;
  double t4549;
  double t4551;
  double t4552;
  double t4566;
  double t4568;
  double t4620;
  double t4738;
  double t4780;
  double t4781;
  double t4827;
  double t4835;
  double t4842;
  double t4849;
  double t4852;
  double t4984;
  double t4987;
  double t4991;
  double t4884;
  t460 = Sin(var1[3]);
  t60 = Cos(var1[6]);
  t257 = Cos(var1[3]);
  t292 = Cos(var1[5]);
  t341 = t257*t292;
  t558 = Sin(var1[4]);
  t575 = Sin(var1[5]);
  t612 = -1.*t460*t558*t575;
  t616 = t341 + t612;
  t666 = Cos(var1[4]);
  t764 = Sin(var1[6]);
  t801 = Cos(var1[7]);
  t919 = -1.*t666*t60*t460;
  t931 = -1.*t616*t764;
  t932 = t919 + t931;
  t854 = t60*t616;
  t878 = -1.*t666*t460*t764;
  t880 = t854 + t878;
  t964 = Sin(var1[7]);
  t1305 = Cos(var1[8]);
  t1309 = -1.*t1305;
  t1310 = 1. + t1309;
  t1350 = Sin(var1[8]);
  t1260 = t801*t880;
  t1303 = t932*t964;
  t1304 = t1260 + t1303;
  t1410 = t292*t460*t558;
  t1444 = t257*t575;
  t1479 = t1410 + t1444;
  t980 = Cos(var1[9]);
  t982 = -1.*t980;
  t1002 = 1. + t982;
  t1036 = Sin(var1[9]);
  t1148 = t801*t932;
  t1205 = -1.*t880*t964;
  t1230 = t1148 + t1205;
  t1714 = t1305*t1479;
  t1720 = t1304*t1350;
  t1721 = t1714 + t1720;
  t1828 = Cos(var1[10]);
  t1850 = -1.*t1828;
  t1871 = 1. + t1850;
  t1876 = Sin(var1[10]);
  t1956 = t1036*t1230;
  t1957 = t980*t1721;
  t1966 = t1956 + t1957;
  t2209 = t980*t1230;
  t2212 = -1.*t1036*t1721;
  t2214 = t2209 + t2212;
  t2253 = Cos(var1[11]);
  t2265 = Sin(var1[11]);
  t2276 = -1.*t1876*t1966;
  t2281 = t1828*t2214;
  t2282 = t2276 + t2281;
  t2316 = t1828*t1966;
  t2317 = t1876*t2214;
  t2319 = t2316 + t2317;
  t2324 = Cos(var1[12]);
  t2339 = -1.*t2324;
  t2341 = 1. + t2339;
  t2345 = Sin(var1[12]);
  t2364 = t2265*t2282;
  t2371 = t2253*t2319;
  t2374 = t2364 + t2371;
  t2596 = t2253*t2282;
  t2672 = -1.*t2265*t2319;
  t2682 = t2596 + t2672;
  t2721 = Cos(var1[13]);
  t2725 = -1.*t2721;
  t2741 = 1. + t2725;
  t2769 = Sin(var1[13]);
  t2800 = -1.*t2345*t2374;
  t2838 = t2324*t2682;
  t2874 = t2800 + t2838;
  t2939 = t2324*t2374;
  t2940 = t2345*t2682;
  t2943 = t2939 + t2940;
  t61 = -1.*t60;
  t199 = 1. + t61;
  t836 = -1.*t801;
  t853 = 1. + t836;
  t1019 = -0.09*t1002;
  t1089 = 0.049*t1036;
  t1091 = t1019 + t1089;
  t3064 = -1.*t257*t60*t558;
  t3069 = -1.*t257*t666*t575*t764;
  t3072 = t3064 + t3069;
  t3043 = t257*t666*t60*t575;
  t3051 = -1.*t257*t558*t764;
  t3055 = t3043 + t3051;
  t1311 = 0.135*t1310;
  t1360 = 0.049*t1350;
  t1364 = t1311 + t1360;
  t1494 = -0.049*t1310;
  t1500 = 0.135*t1350;
  t1531 = t1494 + t1500;
  t3101 = t801*t3055;
  t3102 = t3072*t964;
  t3108 = t3101 + t3102;
  t1655 = -0.049*t1002;
  t1656 = -0.09*t1036;
  t1663 = t1655 + t1656;
  t1875 = -0.049*t1871;
  t1881 = -0.21*t1876;
  t1913 = t1875 + t1881;
  t3086 = t801*t3072;
  t3091 = -1.*t3055*t964;
  t3095 = t3086 + t3091;
  t3130 = -1.*t257*t666*t292*t1305;
  t3133 = t3108*t1350;
  t3134 = t3130 + t3133;
  t2025 = -0.21*t1871;
  t2188 = 0.049*t1876;
  t2208 = t2025 + t2188;
  t2254 = -1.*t2253;
  t2255 = 1. + t2254;
  t2264 = -0.2707*t2255;
  t2271 = 0.0016*t2265;
  t2272 = t2264 + t2271;
  t3140 = t1036*t3095;
  t3141 = t980*t3134;
  t3146 = t3140 + t3141;
  t3157 = t980*t3095;
  t3161 = -1.*t1036*t3134;
  t3165 = t3157 + t3161;
  t2304 = -1. + t2253;
  t2308 = 0.0016*t2304;
  t2309 = -0.2707*t2265;
  t2315 = t2308 + t2309;
  t2344 = 0.0184*t2341;
  t2349 = -0.7055*t2345;
  t2360 = t2344 + t2349;
  t3172 = -1.*t1876*t3146;
  t3177 = t1828*t3165;
  t3178 = t3172 + t3177;
  t3184 = t1828*t3146;
  t3188 = t1876*t3165;
  t3190 = t3184 + t3188;
  t2412 = -0.7055*t2341;
  t2493 = -0.0184*t2345;
  t2518 = t2412 + t2493;
  t2749 = -1.1135*t2741;
  t2792 = 0.0216*t2769;
  t2794 = t2749 + t2792;
  t3195 = t2265*t3178;
  t3199 = t2253*t3190;
  t3204 = t3195 + t3199;
  t3206 = t2253*t3178;
  t3209 = -1.*t2265*t3190;
  t3210 = t3206 + t3209;
  t2914 = -0.0216*t2741;
  t2930 = -1.1135*t2769;
  t2932 = t2914 + t2930;
  t3215 = -1.*t2345*t3204;
  t3217 = t2324*t3210;
  t3226 = t3215 + t3217;
  t3229 = t2324*t3204;
  t3235 = t2345*t3210;
  t3236 = t3229 + t3235;
  t3285 = t257*t292*t558;
  t3290 = -1.*t460*t575;
  t3294 = t3285 + t3290;
  t3340 = t60*t801*t3294;
  t3341 = -1.*t3294*t764*t964;
  t3345 = t3340 + t3341;
  t3356 = t292*t460;
  t3358 = t257*t558*t575;
  t3363 = t3356 + t3358;
  t3314 = -1.*t801*t3294*t764;
  t3318 = -1.*t60*t3294*t964;
  t3319 = t3314 + t3318;
  t3402 = t1305*t3363;
  t3410 = t3345*t1350;
  t3411 = t3402 + t3410;
  t3420 = t1036*t3319;
  t3426 = t980*t3411;
  t3438 = t3420 + t3426;
  t3441 = t980*t3319;
  t3451 = -1.*t1036*t3411;
  t3466 = t3441 + t3451;
  t3485 = -1.*t1876*t3438;
  t3489 = t1828*t3466;
  t3495 = t3485 + t3489;
  t3510 = t1828*t3438;
  t3512 = t1876*t3466;
  t3519 = t3510 + t3512;
  t3528 = t2265*t3495;
  t3537 = t2253*t3519;
  t3542 = t3528 + t3537;
  t3554 = t2253*t3495;
  t3558 = -1.*t2265*t3519;
  t3561 = t3554 + t3558;
  t3570 = -1.*t2345*t3542;
  t3574 = t2324*t3561;
  t3575 = t3570 + t3574;
  t3590 = t2324*t3542;
  t3594 = t2345*t3561;
  t3599 = t3590 + t3594;
  t3659 = t257*t666*t60;
  t3668 = -1.*t3363*t764;
  t3670 = t3659 + t3668;
  t3677 = -1.*t60*t3363;
  t3679 = -1.*t257*t666*t764;
  t3681 = t3677 + t3679;
  t3686 = t801*t3670;
  t3698 = t3681*t964;
  t3699 = t3686 + t3698;
  t3707 = t801*t3681;
  t3710 = -1.*t3670*t964;
  t3721 = t3707 + t3710;
  t3735 = t1036*t3721;
  t3740 = t980*t3699*t1350;
  t3744 = t3735 + t3740;
  t3749 = t980*t3721;
  t3752 = -1.*t1036*t3699*t1350;
  t3753 = t3749 + t3752;
  t3768 = -1.*t1876*t3744;
  t3769 = t1828*t3753;
  t3771 = t3768 + t3769;
  t3776 = t1828*t3744;
  t3777 = t1876*t3753;
  t3783 = t3776 + t3777;
  t3786 = t2265*t3771;
  t3796 = t2253*t3783;
  t3802 = t3786 + t3796;
  t3805 = t2253*t3771;
  t3810 = -1.*t2265*t3783;
  t3811 = t3805 + t3810;
  t3822 = -1.*t2345*t3802;
  t3828 = t2324*t3811;
  t3838 = t3822 + t3828;
  t3848 = t2324*t3802;
  t3849 = t2345*t3811;
  t3853 = t3848 + t3849;
  t3899 = t60*t3363;
  t3900 = t257*t666*t764;
  t3902 = t3899 + t3900;
  t3906 = -1.*t3902*t964;
  t3907 = t3686 + t3906;
  t3910 = -1.*t801*t3902;
  t3912 = t3910 + t3710;
  t3930 = t1036*t3912;
  t3934 = t980*t3907*t1350;
  t3938 = t3930 + t3934;
  t3948 = t980*t3912;
  t3952 = -1.*t1036*t3907*t1350;
  t3957 = t3948 + t3952;
  t3966 = -1.*t1876*t3938;
  t3977 = t1828*t3957;
  t3984 = t3966 + t3977;
  t3986 = t1828*t3938;
  t3989 = t1876*t3957;
  t3990 = t3986 + t3989;
  t3993 = t2265*t3984;
  t3994 = t2253*t3990;
  t3998 = t3993 + t3994;
  t4002 = t2253*t3984;
  t4004 = -1.*t2265*t3990;
  t4008 = t4002 + t4004;
  t4018 = -1.*t2345*t3998;
  t4026 = t2324*t4008;
  t4029 = t4018 + t4026;
  t4046 = t2324*t3998;
  t4052 = t2345*t4008;
  t4060 = t4046 + t4052;
  t4120 = t801*t3902;
  t4124 = t3670*t964;
  t4133 = t4120 + t4124;
  t4100 = -1.*t257*t292*t558;
  t4101 = t460*t575;
  t4106 = t4100 + t4101;
  t4145 = t1305*t4133;
  t4147 = -1.*t4106*t1350;
  t4149 = t4145 + t4147;
  t4169 = -1.*t1828*t1036*t4149;
  t4171 = -1.*t980*t1876*t4149;
  t4172 = t4169 + t4171;
  t4176 = t980*t1828*t4149;
  t4177 = -1.*t1036*t1876*t4149;
  t4183 = t4176 + t4177;
  t4186 = t2265*t4172;
  t4189 = t2253*t4183;
  t4194 = t4186 + t4189;
  t4213 = t2253*t4172;
  t4215 = -1.*t2265*t4183;
  t4219 = t4213 + t4215;
  t4230 = -1.*t2345*t4194;
  t4235 = t2324*t4219;
  t4238 = t4230 + t4235;
  t4245 = t2324*t4194;
  t4247 = t2345*t4219;
  t4248 = t4245 + t4247;
  t4293 = t1305*t4106;
  t4299 = t4133*t1350;
  t4302 = t4293 + t4299;
  t4309 = -1.*t1036*t3907;
  t4310 = -1.*t980*t4302;
  t4311 = t4309 + t4310;
  t4319 = t980*t3907;
  t4322 = -1.*t1036*t4302;
  t4323 = t4319 + t4322;
  t4331 = t1876*t4311;
  t4333 = t1828*t4323;
  t4337 = t4331 + t4333;
  t4339 = t1828*t4311;
  t4342 = -1.*t1876*t4323;
  t4343 = t4339 + t4342;
  t4348 = -1.*t2265*t4337;
  t4349 = t2253*t4343;
  t4351 = t4348 + t4349;
  t4365 = t2253*t4337;
  t4366 = t2265*t4343;
  t4369 = t4365 + t4366;
  t4373 = t2345*t4351;
  t4374 = t2324*t4369;
  t4377 = t4373 + t4374;
  t4381 = t2324*t4351;
  t4382 = -1.*t2345*t4369;
  t4384 = t4381 + t4382;
  t4416 = t1036*t3907;
  t4419 = t980*t4302;
  t4422 = t4416 + t4419;
  t4432 = -1.*t1876*t4422;
  t4434 = t4432 + t4333;
  t4438 = -1.*t1828*t4422;
  t4439 = t4438 + t4342;
  t4444 = -1.*t2265*t4434;
  t4445 = t2253*t4439;
  t4447 = t4444 + t4445;
  t4450 = t2253*t4434;
  t4452 = t2265*t4439;
  t4454 = t4450 + t4452;
  t4459 = t2345*t4447;
  t4462 = t2324*t4454;
  t4463 = t4459 + t4462;
  t4471 = t2324*t4447;
  t4476 = -1.*t2345*t4454;
  t4478 = t4471 + t4476;
  t4511 = t1828*t4422;
  t4514 = t1876*t4323;
  t4515 = t4511 + t4514;
  t4519 = -1.*t2253*t4515;
  t4524 = t4444 + t4519;
  t4529 = -1.*t2265*t4515;
  t4536 = t4450 + t4529;
  t4549 = t2345*t4524;
  t4551 = t2324*t4536;
  t4552 = t4549 + t4551;
  t4566 = t2324*t4524;
  t4568 = -1.*t2345*t4536;
  t4620 = t4566 + t4568;
  t4738 = t2265*t4434;
  t4780 = t2253*t4515;
  t4781 = t4738 + t4780;
  t4827 = -1.*t2345*t4781;
  t4835 = t4827 + t4551;
  t4842 = -1.*t2324*t4781;
  t4849 = t4842 + t4568;
  t4852 = -1.*t2769*t4835;
  t4984 = t2324*t4781;
  t4987 = t2345*t4536;
  t4991 = t4984 + t4987;
  t4884 = t2721*t4835;
  p_output1[0]=1.;
  p_output1[1]=t1091*t1230 + t1304*t1364 + 0.1305*(t1304*t1305 - 1.*t1350*t1479) + t1479*t1531 + t1663*t1721 + t1913*t1966 + t2208*t2214 + t2272*t2282 + t2315*t2319 + t2360*t2374 + t2518*t2682 + t2794*t2874 + t2932*t2943 + 0.0306*(t2769*t2874 + t2721*t2943) - 1.1312*(t2721*t2874 - 1.*t2769*t2943) + 0.135*t199*t616 + 0.135*t460*t666*t764 + 0.135*t853*t880 - 0.135*t932*t964;
  p_output1[2]=t1091*t3095 + t1364*t3108 + t1663*t3134 + t1913*t3146 + t2208*t3165 + t2272*t3178 + t2315*t3190 + t2360*t3204 + t2518*t3210 + t2794*t3226 + t2932*t3236 + 0.0306*(t2769*t3226 + t2721*t3236) - 1.1312*(t2721*t3226 - 1.*t2769*t3236) - 1.*t1531*t257*t292*t666 + 0.135*t199*t257*t575*t666 + 0.1305*(t1305*t3108 + t1350*t257*t292*t666) + 0.135*t257*t558*t764 + 0.135*t3055*t853 - 0.135*t3072*t964;
  p_output1[3]=0.135*t199*t3294 + t1091*t3319 + t1364*t3345 + t1531*t3363 + 0.1305*(t1305*t3345 - 1.*t1350*t3363) + t1663*t3411 + t1913*t3438 + t2208*t3466 + t2272*t3495 + t2315*t3519 + t2360*t3542 + t2518*t3561 + t2794*t3575 + t2932*t3599 + 0.0306*(t2769*t3575 + t2721*t3599) - 1.1312*(t2721*t3575 - 1.*t2769*t3599) + 0.135*t3294*t60*t853 + 0.135*t3294*t764*t964;
  p_output1[4]=0.1305*t1305*t3699 + t1364*t3699 + t1350*t1663*t3699 + t1091*t3721 + t1913*t3744 + t2208*t3753 + t2272*t3771 + t2315*t3783 + t2360*t3802 + t2518*t3811 + t2794*t3838 + t2932*t3853 + 0.0306*(t2769*t3838 + t2721*t3853) - 1.1312*(t2721*t3838 - 1.*t2769*t3853) - 0.135*t257*t60*t666 + 0.135*t3363*t764 + 0.135*t3670*t853 - 0.135*t3681*t964;
  p_output1[5]=0.1305*t1305*t3907 + t1364*t3907 + t1350*t1663*t3907 + t1091*t3912 + t1913*t3938 + t2208*t3957 + t2272*t3984 + t2315*t3990 + t2360*t3998 + t2518*t4008 + t2794*t4029 + t2932*t4060 + 0.0306*(t2769*t4029 + t2721*t4060) - 1.1312*(t2721*t4029 - 1.*t2769*t4060) - 0.135*t3670*t801 + 0.135*t3902*t964;
  p_output1[6]=(0.135*t1305 - 0.049*t1350)*t4106 + (0.049*t1305 + t1500)*t4133 + 0.1305*(-1.*t1305*t4106 - 1.*t1350*t4133) + t1663*t4149 - 1.*t1036*t2208*t4149 + t2272*t4172 + t2315*t4183 + t2360*t4194 + t2518*t4219 + t2794*t4238 + t2932*t4248 + 0.0306*(t2769*t4238 + t2721*t4248) - 1.1312*(t2721*t4238 - 1.*t2769*t4248) + t1913*t4149*t980;
  p_output1[7]=t2208*t4311 + t1913*t4323 + t2315*t4337 + t2272*t4343 + t2518*t4351 + t2360*t4369 + t2932*t4377 + t2794*t4384 - 1.1312*(-1.*t2769*t4377 + t2721*t4384) + 0.0306*(t2721*t4377 + t2769*t4384) + t4302*(-0.049*t1036 - 0.09*t980) + t3907*(t1656 + 0.049*t980);
  p_output1[8]=(0.049*t1828 + t1881)*t4323 + (-0.21*t1828 - 0.049*t1876)*t4422 + t2315*t4434 + t2272*t4439 + t2518*t4447 + t2360*t4454 + t2932*t4463 + t2794*t4478 - 1.1312*(-1.*t2769*t4463 + t2721*t4478) + 0.0306*(t2721*t4463 + t2769*t4478);
  p_output1[9]=(0.0016*t2253 + t2309)*t4434 + (-0.2707*t2253 - 0.0016*t2265)*t4515 + t2518*t4524 + t2360*t4536 + t2932*t4552 + t2794*t4620 - 1.1312*(-1.*t2769*t4552 + t2721*t4620) + 0.0306*(t2721*t4552 + t2769*t4620);
  p_output1[10]=(-0.0184*t2324 + t2349)*t4536 + (-0.7055*t2324 + 0.0184*t2345)*t4781 + t2932*t4835 + t2794*t4849 - 1.1312*(t2721*t4849 + t4852) + 0.0306*(t2769*t4849 + t4884);
  p_output1[11]=(0.0216*t2721 + t2930)*t4835 + (-1.1135*t2721 - 0.0216*t2769)*t4991 - 1.1312*(t4852 - 1.*t2721*t4991) + 0.0306*(t4884 - 1.*t2769*t4991);
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_leftFootHeight_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void J_u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
