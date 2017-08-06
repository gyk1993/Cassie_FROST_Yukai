/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:42 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t40;
  double t76;
  double t7;
  double t47;
  double t83;
  double t157;
  double t126;
  double t135;
  double t141;
  double t149;
  double t195;
  double t96;
  double t110;
  double t121;
  double t151;
  double t226;
  double t237;
  double t244;
  double t257;
  double t258;
  double t286;
  double t297;
  double t298;
  double t334;
  double t73;
  double t84;
  double t92;
  double t485;
  double t629;
  double t636;
  double t671;
  double t619;
  double t700;
  double t701;
  double t705;
  double t725;
  double t1086;
  double t1099;
  double t1145;
  double t1157;
  double t1179;
  double t1190;
  double t1211;
  double t1342;
  double t1351;
  double t1418;
  double t1484;
  double t1523;
  double t1542;
  double t1582;
  double t1717;
  double t1754;
  double t1799;
  double t1878;
  double t1923;
  double t1925;
  double t1967;
  double t2099;
  double t2137;
  double t2166;
  double t2288;
  double t2316;
  double t2318;
  double t2518;
  double t2525;
  double t2656;
  double t2977;
  double t2978;
  double t2980;
  double t492;
  double t505;
  double t3019;
  double t3031;
  double t3039;
  double t615;
  double t621;
  double t624;
  double t718;
  double t761;
  double t867;
  double t3055;
  double t3056;
  double t3061;
  double t931;
  double t932;
  double t951;
  double t1153;
  double t1167;
  double t1178;
  double t3101;
  double t3102;
  double t3106;
  double t3110;
  double t3111;
  double t3113;
  double t1235;
  double t1280;
  double t1332;
  double t1566;
  double t1586;
  double t1691;
  double t3116;
  double t3119;
  double t3120;
  double t3122;
  double t3126;
  double t3127;
  double t1850;
  double t1871;
  double t1876;
  double t2150;
  double t2172;
  double t2271;
  double t3134;
  double t3136;
  double t3137;
  double t3140;
  double t3142;
  double t3145;
  double t2371;
  double t2374;
  double t2493;
  double t3148;
  double t3161;
  double t3162;
  double t3165;
  double t3167;
  double t3170;
  double t3043;
  double t3051;
  double t3054;
  double t3207;
  double t3222;
  double t3071;
  double t3074;
  double t3075;
  double t3083;
  double t3091;
  double t3225;
  double t3226;
  double t3235;
  double t3236;
  double t3240;
  double t3248;
  double t3255;
  double t3260;
  double t3264;
  double t3265;
  double t3268;
  double t3281;
  double t3285;
  double t3286;
  double t3293;
  double t3294;
  double t3297;
  double t3302;
  double t3303;
  double t3306;
  double t3311;
  double t3314;
  double t3315;
  double t3319;
  double t3334;
  double t3335;
  double t2951;
  double t2960;
  double t2964;
  double t2968;
  double t3372;
  double t3375;
  double t3387;
  double t2984;
  double t2996;
  double t370;
  double t3411;
  double t3414;
  double t3418;
  double t3398;
  double t3401;
  double t3402;
  double t3442;
  double t3443;
  double t3448;
  double t3452;
  double t3456;
  double t3458;
  double t3462;
  double t3464;
  double t3466;
  double t3468;
  double t3469;
  double t3477;
  double t3485;
  double t3489;
  double t3494;
  double t3496;
  double t3500;
  double t3501;
  double t3512;
  double t3514;
  double t3515;
  double t3520;
  double t3523;
  double t3525;
  double t3528;
  double t3537;
  double t3538;
  double t3366;
  double t3368;
  double t3370;
  double t3371;
  double t3595;
  double t3597;
  double t3599;
  double t3590;
  double t3591;
  double t3593;
  double t3420;
  double t3421;
  double t3609;
  double t3611;
  double t3613;
  double t3602;
  double t3603;
  double t3606;
  double t3643;
  double t3647;
  double t3653;
  double t3658;
  double t3659;
  double t3663;
  double t3668;
  double t3669;
  double t3670;
  double t3675;
  double t3677;
  double t3679;
  double t3682;
  double t3683;
  double t3685;
  double t3698;
  double t3699;
  double t3700;
  double t3705;
  double t3708;
  double t3709;
  double t3712;
  double t3715;
  double t3719;
  double t3722;
  double t3726;
  double t3730;
  double t3783;
  double t3786;
  double t3791;
  double t3797;
  double t3798;
  double t3802;
  double t3805;
  double t3806;
  double t3807;
  double t3810;
  double t3811;
  double t3813;
  double t3815;
  double t3826;
  double t3828;
  double t3837;
  double t3841;
  double t3848;
  double t3853;
  double t3855;
  double t3857;
  double t3860;
  double t3863;
  double t3864;
  double t3868;
  double t3869;
  double t3881;
  double t3908;
  double t3910;
  double t3911;
  double t3932;
  double t3933;
  double t3937;
  double t3938;
  double t3941;
  double t3944;
  double t3945;
  double t3948;
  double t3949;
  double t3950;
  double t3953;
  double t3954;
  double t3956;
  double t3958;
  double t3960;
  double t3961;
  double t4002;
  double t4004;
  double t4014;
  double t4016;
  double t4018;
  double t4022;
  double t4025;
  double t4029;
  double t4030;
  double t4041;
  double t4046;
  double t4049;
  double t4050;
  double t4109;
  double t4112;
  double t4113;
  double t4125;
  double t4128;
  double t4132;
  double t4133;
  double t4137;
  double t4171;
  double t4172;
  double t4173;
  double t4144;
  double t3578;
  double t3586;
  double t4189;
  double t4190;
  double t4192;
  double t4207;
  double t4208;
  double t4213;
  double t4196;
  double t4199;
  double t4201;
  double t4230;
  double t4231;
  double t4234;
  double t4238;
  double t4239;
  double t4244;
  double t4219;
  double t4220;
  double t4221;
  double t4253;
  double t4255;
  double t4256;
  double t4259;
  double t4261;
  double t4263;
  double t4265;
  double t4267;
  double t4268;
  double t4271;
  double t4273;
  double t4275;
  double t4277;
  double t4280;
  double t4281;
  double t4285;
  double t4288;
  double t4289;
  double t4293;
  double t4298;
  double t4299;
  double t4303;
  double t4306;
  double t4307;
  double t4310;
  double t4311;
  double t4314;
  t40 = Cos(var1[5]);
  t76 = Sin(var1[3]);
  t7 = Cos(var1[3]);
  t47 = Sin(var1[4]);
  t83 = Sin(var1[5]);
  t157 = Cos(var1[4]);
  t126 = Cos(var1[6]);
  t135 = t40*t76;
  t141 = t7*t47*t83;
  t149 = t135 + t141;
  t195 = Sin(var1[6]);
  t96 = Cos(var1[8]);
  t110 = Sin(var1[8]);
  t121 = Cos(var1[7]);
  t151 = t126*t149;
  t226 = t7*t157*t195;
  t237 = t151 + t226;
  t244 = t121*t237;
  t257 = t7*t157*t126;
  t258 = -1.*t149*t195;
  t286 = t257 + t258;
  t297 = Sin(var1[7]);
  t298 = t286*t297;
  t334 = t244 + t298;
  t73 = -1.*t7*t40*t47;
  t84 = t76*t83;
  t92 = t73 + t84;
  t485 = Cos(var1[9]);
  t629 = t96*t334;
  t636 = -1.*t92*t110;
  t671 = t629 + t636;
  t619 = Sin(var1[9]);
  t700 = Cos(var1[10]);
  t701 = -1.*t700;
  t705 = 1. + t701;
  t725 = Sin(var1[10]);
  t1086 = Cos(var1[11]);
  t1099 = -1.*t1086;
  t1145 = 1. + t1099;
  t1157 = Sin(var1[11]);
  t1179 = -1.*t700*t619*t671;
  t1190 = -1.*t485*t725*t671;
  t1211 = t1179 + t1190;
  t1342 = t485*t700*t671;
  t1351 = -1.*t619*t725*t671;
  t1418 = t1342 + t1351;
  t1484 = Cos(var1[12]);
  t1523 = -1.*t1484;
  t1542 = 1. + t1523;
  t1582 = Sin(var1[12]);
  t1717 = t1157*t1211;
  t1754 = t1086*t1418;
  t1799 = t1717 + t1754;
  t1878 = t1086*t1211;
  t1923 = -1.*t1157*t1418;
  t1925 = t1878 + t1923;
  t1967 = Cos(var1[13]);
  t2099 = -1.*t1967;
  t2137 = 1. + t2099;
  t2166 = Sin(var1[13]);
  t2288 = -1.*t1582*t1799;
  t2316 = t1484*t1925;
  t2318 = t2288 + t2316;
  t2518 = t1484*t1799;
  t2525 = t1582*t1925;
  t2656 = t2518 + t2525;
  t2977 = -1.*t126*t149;
  t2978 = -1.*t7*t157*t195;
  t2980 = t2977 + t2978;
  t492 = -1.*t485;
  t505 = 1. + t492;
  t3019 = t121*t286;
  t3031 = t2980*t297;
  t3039 = t3019 + t3031;
  t615 = -0.049*t505;
  t621 = -0.09*t619;
  t624 = 0. + t615 + t621;
  t718 = -0.049*t705;
  t761 = -0.21*t725;
  t867 = 0. + t718 + t761;
  t3055 = t121*t2980;
  t3056 = -1.*t286*t297;
  t3061 = t3055 + t3056;
  t931 = -0.21*t705;
  t932 = 0.049*t725;
  t951 = 0. + t931 + t932;
  t1153 = -0.2707*t1145;
  t1167 = 0.0016*t1157;
  t1178 = 0. + t1153 + t1167;
  t3101 = t619*t3061;
  t3102 = t485*t3039*t110;
  t3106 = t3101 + t3102;
  t3110 = t485*t3061;
  t3111 = -1.*t619*t3039*t110;
  t3113 = t3110 + t3111;
  t1235 = -0.0016*t1145;
  t1280 = -0.2707*t1157;
  t1332 = 0. + t1235 + t1280;
  t1566 = 0.0184*t1542;
  t1586 = -0.7055*t1582;
  t1691 = 0. + t1566 + t1586;
  t3116 = -1.*t725*t3106;
  t3119 = t700*t3113;
  t3120 = t3116 + t3119;
  t3122 = t700*t3106;
  t3126 = t725*t3113;
  t3127 = t3122 + t3126;
  t1850 = -0.7055*t1542;
  t1871 = -0.0184*t1582;
  t1876 = 0. + t1850 + t1871;
  t2150 = -1.1135*t2137;
  t2172 = 0.0216*t2166;
  t2271 = 0. + t2150 + t2172;
  t3134 = t1157*t3120;
  t3136 = t1086*t3127;
  t3137 = t3134 + t3136;
  t3140 = t1086*t3120;
  t3142 = -1.*t1157*t3127;
  t3145 = t3140 + t3142;
  t2371 = -0.0216*t2137;
  t2374 = -1.1135*t2166;
  t2493 = 0. + t2371 + t2374;
  t3148 = -1.*t1582*t3137;
  t3161 = t1484*t3145;
  t3162 = t3148 + t3161;
  t3165 = t1484*t3137;
  t3167 = t1582*t3145;
  t3170 = t3165 + t3167;
  t3043 = -0.09*t505;
  t3051 = 0.049*t619;
  t3054 = 0. + t3043 + t3051;
  t3207 = -1.*t237*t297;
  t3222 = t3019 + t3207;
  t3071 = -1.*t96;
  t3074 = 1. + t3071;
  t3075 = 0.135*t3074;
  t3083 = 0.049*t110;
  t3091 = 0. + t3075 + t3083;
  t3225 = -1.*t121*t237;
  t3226 = t3225 + t3056;
  t3235 = t619*t3226;
  t3236 = t485*t3222*t110;
  t3240 = t3235 + t3236;
  t3248 = t485*t3226;
  t3255 = -1.*t619*t3222*t110;
  t3260 = t3248 + t3255;
  t3264 = -1.*t725*t3240;
  t3265 = t700*t3260;
  t3268 = t3264 + t3265;
  t3281 = t700*t3240;
  t3285 = t725*t3260;
  t3286 = t3281 + t3285;
  t3293 = t1157*t3268;
  t3294 = t1086*t3286;
  t3297 = t3293 + t3294;
  t3302 = t1086*t3268;
  t3303 = -1.*t1157*t3286;
  t3306 = t3302 + t3303;
  t3311 = -1.*t1582*t3297;
  t3314 = t1484*t3306;
  t3315 = t3311 + t3314;
  t3319 = t1484*t3297;
  t3334 = t1582*t3306;
  t3335 = t3319 + t3334;
  t2951 = -1.*t121;
  t2960 = 1. + t2951;
  t2964 = 0.135*t2960;
  t2968 = 0. + t2964;
  t3372 = t7*t40*t47;
  t3375 = -1.*t76*t83;
  t3387 = t3372 + t3375;
  t2984 = -0.135*t297;
  t2996 = 0. + t2984;
  t370 = 0.135*t110;
  t3411 = t126*t121*t3387;
  t3414 = -1.*t3387*t195*t297;
  t3418 = t3411 + t3414;
  t3398 = -1.*t121*t3387*t195;
  t3401 = -1.*t126*t3387*t297;
  t3402 = t3398 + t3401;
  t3442 = t96*t149;
  t3443 = t3418*t110;
  t3448 = t3442 + t3443;
  t3452 = t619*t3402;
  t3456 = t485*t3448;
  t3458 = t3452 + t3456;
  t3462 = t485*t3402;
  t3464 = -1.*t619*t3448;
  t3466 = t3462 + t3464;
  t3468 = -1.*t725*t3458;
  t3469 = t700*t3466;
  t3477 = t3468 + t3469;
  t3485 = t700*t3458;
  t3489 = t725*t3466;
  t3494 = t3485 + t3489;
  t3496 = t1157*t3477;
  t3500 = t1086*t3494;
  t3501 = t3496 + t3500;
  t3512 = t1086*t3477;
  t3514 = -1.*t1157*t3494;
  t3515 = t3512 + t3514;
  t3520 = -1.*t1582*t3501;
  t3523 = t1484*t3515;
  t3525 = t3520 + t3523;
  t3528 = t1484*t3501;
  t3537 = t1582*t3515;
  t3538 = t3528 + t3537;
  t3366 = -1.*t126;
  t3368 = 1. + t3366;
  t3370 = 0.135*t3368;
  t3371 = 0. + t3370;
  t3595 = -1.*t7*t126*t47;
  t3597 = -1.*t7*t157*t83*t195;
  t3599 = t3595 + t3597;
  t3590 = t7*t157*t126*t83;
  t3591 = -1.*t7*t47*t195;
  t3593 = t3590 + t3591;
  t3420 = -0.049*t3074;
  t3421 = 0. + t3420 + t370;
  t3609 = t121*t3593;
  t3611 = t3599*t297;
  t3613 = t3609 + t3611;
  t3602 = t121*t3599;
  t3603 = -1.*t3593*t297;
  t3606 = t3602 + t3603;
  t3643 = -1.*t7*t157*t40*t96;
  t3647 = t3613*t110;
  t3653 = t3643 + t3647;
  t3658 = t619*t3606;
  t3659 = t485*t3653;
  t3663 = t3658 + t3659;
  t3668 = t485*t3606;
  t3669 = -1.*t619*t3653;
  t3670 = t3668 + t3669;
  t3675 = -1.*t725*t3663;
  t3677 = t700*t3670;
  t3679 = t3675 + t3677;
  t3682 = t700*t3663;
  t3683 = t725*t3670;
  t3685 = t3682 + t3683;
  t3698 = t1157*t3679;
  t3699 = t1086*t3685;
  t3700 = t3698 + t3699;
  t3705 = t1086*t3679;
  t3708 = -1.*t1157*t3685;
  t3709 = t3705 + t3708;
  t3712 = -1.*t1582*t3700;
  t3715 = t1484*t3709;
  t3719 = t3712 + t3715;
  t3722 = t1484*t3700;
  t3726 = t1582*t3709;
  t3730 = t3722 + t3726;
  t3783 = t96*t92;
  t3786 = t334*t110;
  t3791 = t3783 + t3786;
  t3797 = -1.*t619*t3222;
  t3798 = -1.*t485*t3791;
  t3802 = t3797 + t3798;
  t3805 = t485*t3222;
  t3806 = -1.*t619*t3791;
  t3807 = t3805 + t3806;
  t3810 = t725*t3802;
  t3811 = t700*t3807;
  t3813 = t3810 + t3811;
  t3815 = t700*t3802;
  t3826 = -1.*t725*t3807;
  t3828 = t3815 + t3826;
  t3837 = -1.*t1157*t3813;
  t3841 = t1086*t3828;
  t3848 = t3837 + t3841;
  t3853 = t1086*t3813;
  t3855 = t1157*t3828;
  t3857 = t3853 + t3855;
  t3860 = t1582*t3848;
  t3863 = t1484*t3857;
  t3864 = t3860 + t3863;
  t3868 = t1484*t3848;
  t3869 = -1.*t1582*t3857;
  t3881 = t3868 + t3869;
  t3908 = t619*t3222;
  t3910 = t485*t3791;
  t3911 = t3908 + t3910;
  t3932 = -1.*t725*t3911;
  t3933 = t3932 + t3811;
  t3937 = -1.*t700*t3911;
  t3938 = t3937 + t3826;
  t3941 = -1.*t1157*t3933;
  t3944 = t1086*t3938;
  t3945 = t3941 + t3944;
  t3948 = t1086*t3933;
  t3949 = t1157*t3938;
  t3950 = t3948 + t3949;
  t3953 = t1582*t3945;
  t3954 = t1484*t3950;
  t3956 = t3953 + t3954;
  t3958 = t1484*t3945;
  t3960 = -1.*t1582*t3950;
  t3961 = t3958 + t3960;
  t4002 = t700*t3911;
  t4004 = t725*t3807;
  t4014 = t4002 + t4004;
  t4016 = -1.*t1086*t4014;
  t4018 = t3941 + t4016;
  t4022 = -1.*t1157*t4014;
  t4025 = t3948 + t4022;
  t4029 = t1582*t4018;
  t4030 = t1484*t4025;
  t4041 = t4029 + t4030;
  t4046 = t1484*t4018;
  t4049 = -1.*t1582*t4025;
  t4050 = t4046 + t4049;
  t4109 = t1157*t3933;
  t4112 = t1086*t4014;
  t4113 = t4109 + t4112;
  t4125 = -1.*t1582*t4113;
  t4128 = t4125 + t4030;
  t4132 = -1.*t1484*t4113;
  t4133 = t4132 + t4049;
  t4137 = -1.*t2166*t4128;
  t4171 = t1484*t4113;
  t4172 = t1582*t4025;
  t4173 = t4171 + t4172;
  t4144 = t1967*t4128;
  t3578 = -0.135*t195;
  t3586 = 0. + t3578;
  t4189 = t7*t40;
  t4190 = -1.*t76*t47*t83;
  t4192 = t4189 + t4190;
  t4207 = -1.*t157*t126*t76;
  t4208 = -1.*t4192*t195;
  t4213 = t4207 + t4208;
  t4196 = t126*t4192;
  t4199 = -1.*t157*t76*t195;
  t4201 = t4196 + t4199;
  t4230 = t121*t4201;
  t4231 = t4213*t297;
  t4234 = t4230 + t4231;
  t4238 = t40*t76*t47;
  t4239 = t7*t83;
  t4244 = t4238 + t4239;
  t4219 = t121*t4213;
  t4220 = -1.*t4201*t297;
  t4221 = t4219 + t4220;
  t4253 = t96*t4244;
  t4255 = t4234*t110;
  t4256 = t4253 + t4255;
  t4259 = t619*t4221;
  t4261 = t485*t4256;
  t4263 = t4259 + t4261;
  t4265 = t485*t4221;
  t4267 = -1.*t619*t4256;
  t4268 = t4265 + t4267;
  t4271 = -1.*t725*t4263;
  t4273 = t700*t4268;
  t4275 = t4271 + t4273;
  t4277 = t700*t4263;
  t4280 = t725*t4268;
  t4281 = t4277 + t4280;
  t4285 = t1157*t4275;
  t4288 = t1086*t4281;
  t4289 = t4285 + t4288;
  t4293 = t1086*t4275;
  t4298 = -1.*t1157*t4281;
  t4299 = t4293 + t4298;
  t4303 = -1.*t1582*t4289;
  t4306 = t1484*t4299;
  t4307 = t4303 + t4306;
  t4310 = t1484*t4289;
  t4311 = t1582*t4299;
  t4314 = t4310 + t4311;
  p_output1[0]=var2[2] + (t3371*t4192 + t2968*t4201 + t2996*t4213 + t3054*t4221 + t3091*t4234 + t3421*t4244 + t1178*t4275 + t1332*t4281 + t1691*t4289 + t1876*t4299 + t2271*t4307 + t2493*t4314 + 0.0306*(t2166*t4307 + t1967*t4314) - 1.1312*(t1967*t4307 - 1.*t2166*t4314) + t4256*t624 - 1.*t157*t3586*t76 + t4263*t867 + t4268*t951 + 0.1305*(-1.*t110*t4244 + t4234*t96))*var2[3] + (t2968*t3593 + t2996*t3599 + t3054*t3606 + t3091*t3613 + t1178*t3679 + t1332*t3685 + t1691*t3700 + t1876*t3709 + t2271*t3719 + t2493*t3730 + 0.0306*(t2166*t3719 + t1967*t3730) - 1.1312*(t1967*t3719 - 1.*t2166*t3730) + t3653*t624 - 1.*t157*t3421*t40*t7 - 1.*t3586*t47*t7 + t157*t3371*t7*t83 + t3663*t867 + t3670*t951 + 0.1305*(t110*t157*t40*t7 + t3613*t96))*var2[4] + (t126*t2968*t3387 - 1.*t195*t2996*t3387 + t3371*t3387 + t3054*t3402 + t3091*t3418 + t149*t3421 + t1178*t3477 + t1332*t3494 + t1691*t3501 + t1876*t3515 + t2271*t3525 + t2493*t3538 + 0.0306*(t2166*t3525 + t1967*t3538) - 1.1312*(t1967*t3525 - 1.*t2166*t3538) + t3448*t624 + t3458*t867 + t3466*t951 + 0.1305*(-1.*t110*t149 + t3418*t96))*var2[5] + (0.135*t149*t195 + t286*t2968 + t2980*t2996 + t3054*t3061 + t3039*t3091 + t1178*t3120 + t1332*t3127 + t1691*t3137 + t1876*t3145 + t2271*t3162 + t2493*t3170 + 0.0306*(t2166*t3162 + t1967*t3170) - 1.1312*(t1967*t3162 - 1.*t2166*t3170) + t110*t3039*t624 - 0.135*t126*t157*t7 + t3106*t867 + t3113*t951 + 0.1305*t3039*t96)*var2[6] + (-0.135*t121*t286 + 0.135*t237*t297 + t3091*t3222 + t3054*t3226 + t1178*t3268 + t1332*t3286 + t1691*t3297 + t1876*t3306 + t2271*t3315 + t2493*t3335 + 0.0306*(t2166*t3315 + t1967*t3335) - 1.1312*(t1967*t3315 - 1.*t2166*t3335) + t110*t3222*t624 + t3240*t867 + t3260*t951 + 0.1305*t3222*t96)*var2[7] + (t1178*t1211 + t1332*t1418 + t1691*t1799 + t1876*t1925 + t2271*t2318 + t2493*t2656 + 0.0306*(t2166*t2318 + t1967*t2656) - 1.1312*(t1967*t2318 - 1.*t2166*t2656) + t624*t671 + t485*t671*t867 - 1.*t619*t671*t951 + t334*(t370 + 0.049*t96) + t92*(-0.049*t110 + 0.135*t96) + 0.1305*(-1.*t110*t334 - 1.*t92*t96))*var2[8] + (t1332*t3813 + t1178*t3828 + t1876*t3848 + t1691*t3857 + t2493*t3864 + t2271*t3881 - 1.1312*(-1.*t2166*t3864 + t1967*t3881) + 0.0306*(t1967*t3864 + t2166*t3881) + t3791*(-0.09*t485 - 0.049*t619) + t3222*(0.049*t485 + t621) + t3807*t867 + t3802*t951)*var2[9] + (t1332*t3933 + t1178*t3938 + t1876*t3945 + t1691*t3950 + t2493*t3956 + t2271*t3961 - 1.1312*(-1.*t2166*t3956 + t1967*t3961) + 0.0306*(t1967*t3956 + t2166*t3961) + t3911*(-0.21*t700 - 0.049*t725) + t3807*(0.049*t700 + t761))*var2[10] + ((0.0016*t1086 + t1280)*t3933 + (-0.2707*t1086 - 0.0016*t1157)*t4014 + t1876*t4018 + t1691*t4025 + t2493*t4041 + t2271*t4050 - 1.1312*(-1.*t2166*t4041 + t1967*t4050) + 0.0306*(t1967*t4041 + t2166*t4050))*var2[11] + ((-0.0184*t1484 + t1586)*t4025 + (-0.7055*t1484 + 0.0184*t1582)*t4113 + t2493*t4128 + t2271*t4133 - 1.1312*(t1967*t4133 + t4137) + 0.0306*(t2166*t4133 + t4144))*var2[12] + ((0.0216*t1967 + t2374)*t4128 + (-1.1135*t1967 - 0.0216*t2166)*t4173 - 1.1312*(t4137 - 1.*t1967*t4173) + 0.0306*(t4144 - 1.*t2166*t4173))*var2[13];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "SwingToeVelocity_z_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void SwingToeVelocity_z_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
