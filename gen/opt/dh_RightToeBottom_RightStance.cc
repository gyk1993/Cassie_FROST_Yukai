/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:29:09 GMT-04:00
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
  double t2865;
  double t2970;
  double t3035;
  double t2941;
  double t2975;
  double t3006;
  double t2712;
  double t3039;
  double t3043;
  double t3044;
  double t3131;
  double t3031;
  double t3051;
  double t3080;
  double t1041;
  double t3139;
  double t3150;
  double t3157;
  double t3177;
  double t3102;
  double t3168;
  double t3175;
  double t927;
  double t3178;
  double t3179;
  double t3180;
  double t3184;
  double t3176;
  double t3181;
  double t3182;
  double t724;
  double t3185;
  double t3186;
  double t3187;
  double t3200;
  double t375;
  double t3183;
  double t3191;
  double t3195;
  double t206;
  double t3201;
  double t3202;
  double t3203;
  double t109;
  double t3238;
  double t3239;
  double t3240;
  double t3237;
  double t3241;
  double t3242;
  double t3244;
  double t3245;
  double t3243;
  double t3246;
  double t3247;
  double t3255;
  double t3259;
  double t3260;
  double t3251;
  double t3261;
  double t3265;
  double t3273;
  double t3277;
  double t3281;
  double t3216;
  double t3269;
  double t3285;
  double t3289;
  double t3297;
  double t3298;
  double t3299;
  double t3319;
  double t3375;
  double t3376;
  double t3360;
  double t3363;
  double t3380;
  double t3384;
  double t3388;
  double t3392;
  double t3400;
  double t3404;
  double t3405;
  double t3406;
  double t3370;
  double t3374;
  double t3396;
  double t3407;
  double t3408;
  double t3410;
  double t3411;
  double t3412;
  double t3413;
  double t3416;
  double t3353;
  double t3354;
  double t3357;
  double t3358;
  double t3359;
  double t3409;
  double t3420;
  double t3424;
  double t3432;
  double t3436;
  double t3440;
  double t3444;
  double t3448;
  double t3452;
  double t3453;
  double t3343;
  double t3347;
  double t3355;
  double t3356;
  double t3428;
  double t3454;
  double t3455;
  double t3457;
  double t3458;
  double t3459;
  double t3460;
  double t3461;
  double t3323;
  double t3327;
  double t3331;
  double t3335;
  double t3339;
  double t3351;
  double t3352;
  double t3456;
  double t3468;
  double t3471;
  double t3474;
  double t3477;
  double t3485;
  double t3489;
  double t3493;
  double t3494;
  double t3495;
  double t3293;
  double t3300;
  double t3301;
  double t3303;
  double t3304;
  double t3305;
  double t3316;
  double t3481;
  double t3496;
  double t3497;
  double t3499;
  double t3500;
  double t3501;
  double t3502;
  double t3505;
  double t3512;
  double t3526;
  double t3527;
  double t3528;
  double t3311;
  double t3314;
  double t3315;
  double t3498;
  double t3515;
  double t3518;
  double t3196;
  double t3204;
  double t3208;
  double t3220;
  double t3224;
  double t3228;
  double t3529;
  double t3530;
  double t3531;
  double t3532;
  double t3212;
  double t3232;
  double t3236;
  double t3534;
  double t3535;
  double t3542;
  double t3545;
  double t3560;
  double t3548;
  double t3605;
  double t3612;
  double t3655;
  double t3660;
  double t3664;
  double t3668;
  double t3672;
  double t3654;
  double t3649;
  double t3650;
  double t3651;
  double t3652;
  double t3656;
  double t3673;
  double t3674;
  double t3704;
  double t3688;
  double t3692;
  double t3696;
  double t3684;
  double t3708;
  double t3712;
  double t3713;
  double t3554;
  double t3555;
  double t3557;
  double t3533;
  double t3302;
  double t3306;
  double t3310;
  double t3755;
  double t3759;
  double t3763;
  double t3559;
  double t3739;
  double t3740;
  double t3741;
  double t3743;
  double t3747;
  double t3751;
  double t3721;
  double t3725;
  double t3726;
  double t3779;
  double t3780;
  double t3781;
  double t3767;
  double t3727;
  double t3731;
  double t3735;
  double t3794;
  double t3798;
  double t3802;
  double t3783;
  double t3803;
  double t3804;
  double t3808;
  double t3788;
  double t3789;
  double t3790;
  double t3828;
  double t3832;
  double t3836;
  double t3886;
  double t3866;
  double t3844;
  double t3845;
  double t3846;
  double t3862;
  double t3882;
  double t4029;
  double t3653;
  double t3675;
  double t3676;
  double t4033;
  double t3816;
  double t3820;
  double t3824;
  double t4079;
  double t4072;
  double t4069;
  double t4078;
  double t4214;
  double t4230;
  t2865 = Cos(var1[21]);
  t2970 = Sin(var1[21]);
  t3035 = Cos(var1[20]);
  t2941 = 0.642788*t2865;
  t2975 = -0.766044*t2970;
  t3006 = t2941 + t2975;
  t2712 = Sin(var1[20]);
  t3039 = 0.766044*t2865;
  t3043 = 0.642788*t2970;
  t3044 = t3039 + t3043;
  t3131 = Cos(var1[19]);
  t3031 = t2712*t3006;
  t3051 = t3035*t3044;
  t3080 = t3031 + t3051;
  t1041 = Sin(var1[19]);
  t3139 = t3035*t3006;
  t3150 = -1.*t2712*t3044;
  t3157 = t3139 + t3150;
  t3177 = Cos(var1[18]);
  t3102 = -1.*t1041*t3080;
  t3168 = t3131*t3157;
  t3175 = t3102 + t3168;
  t927 = Sin(var1[18]);
  t3178 = t3131*t3080;
  t3179 = t1041*t3157;
  t3180 = t3178 + t3179;
  t3184 = Cos(var1[17]);
  t3176 = t927*t3175;
  t3181 = t3177*t3180;
  t3182 = t3176 + t3181;
  t724 = Sin(var1[17]);
  t3185 = t3177*t3175;
  t3186 = -1.*t927*t3180;
  t3187 = t3185 + t3186;
  t3200 = Cos(var1[15]);
  t375 = Sin(var1[16]);
  t3183 = -1.*t724*t3182;
  t3191 = t3184*t3187;
  t3195 = t3183 + t3191;
  t206 = Sin(var1[15]);
  t3201 = t3184*t3182;
  t3202 = t724*t3187;
  t3203 = t3201 + t3202;
  t109 = Cos(var1[14]);
  t3238 = -0.766044*t2865;
  t3239 = -0.642788*t2970;
  t3240 = t3238 + t3239;
  t3237 = -1.*t2712*t3006;
  t3241 = t3035*t3240;
  t3242 = t3237 + t3241;
  t3244 = t2712*t3240;
  t3245 = t3139 + t3244;
  t3243 = t1041*t3242;
  t3246 = t3131*t3245;
  t3247 = t3243 + t3246;
  t3255 = t3131*t3242;
  t3259 = -1.*t1041*t3245;
  t3260 = t3255 + t3259;
  t3251 = -1.*t927*t3247;
  t3261 = t3177*t3260;
  t3265 = t3251 + t3261;
  t3273 = t3177*t3247;
  t3277 = t927*t3260;
  t3281 = t3273 + t3277;
  t3216 = Sin(var1[14]);
  t3269 = t724*t3265;
  t3285 = t3184*t3281;
  t3289 = t3269 + t3285;
  t3297 = t3184*t3265;
  t3298 = -1.*t724*t3281;
  t3299 = t3297 + t3298;
  t3319 = Cos(var1[16]);
  t3375 = -1.*t2865;
  t3376 = 1. + t3375;
  t3360 = -1.*t3035;
  t3363 = 1. + t3360;
  t3380 = -0.0216*t3376;
  t3384 = 0.0306*t2865;
  t3388 = 0.0177*t2970;
  t3392 = t3380 + t3384 + t3388;
  t3400 = -1.1135*t3376;
  t3404 = -1.1312*t2865;
  t3405 = 0.0522*t2970;
  t3406 = t3400 + t3404 + t3405;
  t3370 = -0.7055*t3363;
  t3374 = -0.0184*t2712;
  t3396 = t2712*t3392;
  t3407 = t3035*t3406;
  t3408 = t3370 + t3374 + t3396 + t3407;
  t3410 = 0.0184*t3363;
  t3411 = -0.7055*t2712;
  t3412 = t3035*t3392;
  t3413 = -1.*t2712*t3406;
  t3416 = t3410 + t3411 + t3412 + t3413;
  t3353 = -1.*t3177;
  t3354 = 1. + t3353;
  t3357 = -1. + t3131;
  t3358 = 0.0016*t3357;
  t3359 = -0.2707*t1041;
  t3409 = -1.*t1041*t3408;
  t3420 = t3131*t3416;
  t3424 = t3358 + t3359 + t3409 + t3420;
  t3432 = -1.*t3131;
  t3436 = 1. + t3432;
  t3440 = -0.2707*t3436;
  t3444 = 0.0016*t1041;
  t3448 = t3131*t3408;
  t3452 = t1041*t3416;
  t3453 = t3440 + t3444 + t3448 + t3452;
  t3343 = -1.*t3184;
  t3347 = 1. + t3343;
  t3355 = -0.21*t3354;
  t3356 = 0.049*t927;
  t3428 = t927*t3424;
  t3454 = t3177*t3453;
  t3455 = t3355 + t3356 + t3428 + t3454;
  t3457 = -0.049*t3354;
  t3458 = -0.21*t927;
  t3459 = t3177*t3424;
  t3460 = -1.*t927*t3453;
  t3461 = t3457 + t3458 + t3459 + t3460;
  t3323 = -1.*t3319;
  t3327 = 1. + t3323;
  t3331 = -0.135*t3327;
  t3335 = -0.1305*t3319;
  t3339 = -0.049*t375;
  t3351 = -0.049*t3347;
  t3352 = -0.09*t724;
  t3456 = -1.*t724*t3455;
  t3468 = t3184*t3461;
  t3471 = t3351 + t3352 + t3456 + t3468;
  t3474 = -1.*t375*t3471;
  t3477 = t3331 + t3335 + t3339 + t3474;
  t3485 = -0.09*t3347;
  t3489 = 0.049*t724;
  t3493 = t3184*t3455;
  t3494 = t724*t3461;
  t3495 = t3485 + t3489 + t3493 + t3494;
  t3293 = -1.*t206*t3289;
  t3300 = -1.*t3200*t375*t3299;
  t3301 = t3293 + t3300;
  t3303 = t3200*t3289;
  t3304 = -1.*t206*t375*t3299;
  t3305 = t3303 + t3304;
  t3316 = 0.135*t206;
  t3481 = t206*t3477;
  t3496 = t3200*t3495;
  t3497 = t3316 + t3481 + t3496;
  t3499 = -1.*t3200;
  t3500 = 1. + t3499;
  t3501 = -0.135*t3500;
  t3502 = t3200*t3477;
  t3505 = -1.*t206*t3495;
  t3512 = t3501 + t3502 + t3505;
  t3526 = t3216*t3301;
  t3527 = t109*t3305;
  t3528 = t3526 + t3527;
  t3311 = -1.*t109;
  t3314 = 1. + t3311;
  t3315 = -0.135*t3314;
  t3498 = -1.*t3216*t3497;
  t3515 = t109*t3512;
  t3518 = t3315 + t3498 + t3515;
  t3196 = -1.*t206*t375*t3195;
  t3204 = t3200*t3203;
  t3208 = t3196 + t3204;
  t3220 = -1.*t3200*t375*t3195;
  t3224 = -1.*t206*t3203;
  t3228 = t3220 + t3224;
  t3529 = 0.135*t3216;
  t3530 = t109*t3497;
  t3531 = t3216*t3512;
  t3532 = t3529 + t3530 + t3531;
  t3212 = t109*t3208;
  t3232 = t3216*t3228;
  t3236 = t3212 + t3232;
  t3534 = -0.049*t3327;
  t3535 = 0.0045*t375;
  t3542 = t3319*t3471;
  t3545 = t3534 + t3535 + t3542;
  t3560 = -1.*t3319*t3545*t3195;
  t3548 = t3319*t3545*t3299;
  t3605 = -1.*t3495*t3203;
  t3612 = t3289*t3495;
  t3655 = Cos(var1[5]);
  t3660 = -1.*t109*t3200*t3319;
  t3664 = t3319*t3216*t206;
  t3668 = t3660 + t3664;
  t3672 = Sin(var1[5]);
  t3654 = Cos(var1[4]);
  t3649 = -1.*t3200*t3319*t3216;
  t3650 = -1.*t109*t3319*t206;
  t3651 = t3649 + t3650;
  t3652 = Sin(var1[4]);
  t3656 = -1.*t3655*t375;
  t3673 = -1.*t3668*t3672;
  t3674 = t3656 + t3673;
  t3704 = Cos(var1[3]);
  t3688 = t3655*t3668;
  t3692 = -1.*t375*t3672;
  t3696 = t3688 + t3692;
  t3684 = Sin(var1[3]);
  t3708 = t3654*t3651;
  t3712 = -1.*t3652*t3674;
  t3713 = t3708 + t3712;
  t3554 = -1.*t3216*t3208;
  t3555 = t109*t3228;
  t3557 = t3554 + t3555;
  t3533 = t3528*t3532;
  t3302 = t109*t3301;
  t3306 = -1.*t3216*t3305;
  t3310 = t3302 + t3306;
  t3755 = t3655*t3310;
  t3759 = t3319*t3299*t3672;
  t3763 = t3755 + t3759;
  t3559 = -1.*t3532*t3236;
  t3739 = t3655*t3545;
  t3740 = -1.*t3518*t3672;
  t3741 = t3739 + t3740;
  t3743 = t3655*t3518;
  t3747 = t3545*t3672;
  t3751 = t3743 + t3747;
  t3721 = t3655*t3557;
  t3725 = t3319*t3195*t3672;
  t3726 = t3721 + t3725;
  t3779 = t3319*t3655*t3195;
  t3780 = -1.*t3557*t3672;
  t3781 = t3779 + t3780;
  t3767 = t3751*t3763;
  t3727 = t3319*t3655*t3299;
  t3731 = -1.*t3310*t3672;
  t3735 = t3727 + t3731;
  t3794 = t3528*t3652;
  t3798 = t3654*t3735;
  t3802 = t3794 + t3798;
  t3783 = -1.*t3751*t3726;
  t3803 = t3532*t3652;
  t3804 = t3654*t3741;
  t3808 = t3803 + t3804;
  t3788 = t3236*t3652;
  t3789 = t3654*t3781;
  t3790 = t3788 + t3789;
  t3828 = t3654*t3532;
  t3832 = -1.*t3652*t3741;
  t3836 = t3828 + t3832;
  t3886 = -1.*t3319*t3545*t3299;
  t3866 = -1.*t375*t3545;
  t3844 = t3654*t3236;
  t3845 = -1.*t3652*t3781;
  t3846 = t3844 + t3845;
  t3862 = t3651*t3532;
  t3882 = -1.*t3528*t3532;
  t4029 = t3696*t3751;
  t3653 = t3651*t3652;
  t3675 = t3654*t3674;
  t3676 = t3653 + t3675;
  t4033 = -1.*t3751*t3763;
  t3816 = t3654*t3528;
  t3820 = -1.*t3652*t3735;
  t3824 = t3816 + t3820;
  t4079 = t3319*t3545*t3195;
  t4072 = t375*t3545;
  t4069 = -1.*t3651*t3532;
  t4078 = t3532*t3236;
  t4214 = -1.*t3696*t3751;
  t4230 = t3751*t3726;
  p_output1[0]=t3676*var2[0] + (t3696*t3704 - 1.*t3684*t3713)*var2[1] + (t3684*t3696 + t3704*t3713)*var2[2] + (t3790*(t3767 + t3802*t3808 + t3824*t3836) + t3802*(t3783 - 1.*t3790*t3808 - 1.*t3836*t3846))*var2[3] + (t3726*(t3533 + t3735*t3741 + t3767) + t3763*(t3559 - 1.*t3741*t3781 + t3783))*var2[4] + (t3236*(t3310*t3518 + t3533 + t3548) + t3528*(-1.*t3518*t3557 + t3559 + t3560))*var2[5] + (-0.135*t206*t3319 + t3195*t3319*(t3305*t3497 + t3301*t3512 + t3548) + t3299*t3319*(-1.*t3208*t3497 - 1.*t3228*t3512 + t3560))*var2[14] + (t3299*t3319*(t3560 + t3605 + t3195*t3477*t375) + t3195*t3319*(t3548 + t3612 - 1.*t3299*t3477*t375))*var2[15] + (0.049 - 1.*t3289*(-1.*t3195*t3471 + t3605) - 1.*t3203*(t3299*t3471 + t3612))*var2[16];
  p_output1[1]=t3790*var2[0] + (t3704*t3726 - 1.*t3684*t3846)*var2[1] + (t3684*t3726 + t3704*t3846)*var2[2] + (t3802*(t3676*t3808 + t3713*t3836 + t4029) + t3676*(-1.*t3802*t3808 - 1.*t3824*t3836 + t4033))*var2[3] + (t3763*(t3674*t3741 + t3862 + t4029) + t3696*(-1.*t3735*t3741 + t3882 + t4033))*var2[4] + (t3528*(t3518*t3668 + t3862 + t3866) + t3651*(-1.*t3310*t3518 + t3882 + t3886))*var2[5] + (0.135*t3208 + t3299*t3319*(-1.*t206*t3319*t3497 - 1.*t3200*t3319*t3512 + t3866) - 1.*t375*(-1.*t3305*t3497 - 1.*t3301*t3512 + t3886))*var2[14] + (0.135*t3203 + t3299*t3319*(-1.*t3319*t3477 + t3866) - 1.*t375*(-1.*t3289*t3495 + t3299*t3477*t375 + t3886))*var2[15] + (0.135*t3195 - 0.1305*t3289)*var2[16] + (0.049*t3182 - 0.09*t3187 - 1.*t3281*t3455 - 1.*t3265*t3461)*var2[17] + (-0.21*t3175 + 0.049*t3180 - 1.*t3260*t3424 - 1.*t3247*t3453)*var2[18] + (0.0016*t3080 - 0.2707*t3157 - 1.*t3245*t3408 - 1.*t3242*t3416)*var2[19] + (-0.7055*t3006 - 0.0184*t3044 - 1.*t3240*t3392 - 1.*t3006*t3406)*var2[20] + 0.0513648444*var2[21];
  p_output1[2]=t3802*var2[0] + (t3704*t3763 - 1.*t3684*t3824)*var2[1] + (t3684*t3763 + t3704*t3824)*var2[2] + (t3790*(-1.*t3676*t3808 - 1.*t3713*t3836 + t4214) + t3676*(t3790*t3808 + t3836*t3846 + t4230))*var2[3] + (t3726*(-1.*t3674*t3741 + t4069 + t4214) + t3696*(t3741*t3781 + t4078 + t4230))*var2[4] + (t3236*(-1.*t3518*t3668 + t4069 + t4072) + t3651*(t3518*t3557 + t4078 + t4079))*var2[5] + (0.135*t3305 + t3195*t3319*(t206*t3319*t3497 + t3200*t3319*t3512 + t4072) - 1.*t375*(t3208*t3497 + t3228*t3512 + t4079))*var2[14] + (0.135*t3289 + t3195*t3319*(t3319*t3477 + t4072) - 1.*t375*(t3203*t3495 - 1.*t3195*t3477*t375 + t4079))*var2[15] + (0.1305*t3203 + 0.135*t3299)*var2[16] + (-0.09*t3265 + 0.049*t3281 + t3182*t3455 + t3187*t3461)*var2[17] + (0.049*t3247 - 0.21*t3260 + t3175*t3424 + t3180*t3453)*var2[18] + (-0.2707*t3242 + 0.0016*t3245 + t3080*t3408 + t3157*t3416)*var2[19] + (-0.0184*t3006 - 0.7055*t3240 + t3006*t3392 + t3044*t3406)*var2[20] + 0.0199945548*var2[21];
  p_output1[3]=t3676*var2[3] + t3696*var2[4] + t3651*var2[5] - 1.*t375*var2[14] - 1.*t375*var2[15] + var2[17] + var2[18] + var2[19] + var2[20] + var2[21];
  p_output1[4]=t3802*var2[3] + t3763*var2[4] + t3528*var2[5] + t3299*t3319*var2[14] + t3299*t3319*var2[15] + (-1.*t3184*t3281 - 1.*t3265*t724)*var2[16];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightToeBottom_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void dh_RightToeBottom_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
