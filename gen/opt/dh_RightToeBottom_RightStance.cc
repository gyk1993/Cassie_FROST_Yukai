/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:41:14 GMT-04:00
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
  double t3007;
  double t3063;
  double t3076;
  double t3038;
  double t3067;
  double t3071;
  double t3002;
  double t3083;
  double t3112;
  double t3134;
  double t3189;
  double t3075;
  double t3163;
  double t3171;
  double t2973;
  double t3200;
  double t3207;
  double t3208;
  double t3212;
  double t3182;
  double t3209;
  double t3210;
  double t2895;
  double t3213;
  double t3214;
  double t3215;
  double t3219;
  double t3211;
  double t3216;
  double t3217;
  double t2739;
  double t3223;
  double t3227;
  double t3228;
  double t3235;
  double t768;
  double t3218;
  double t3232;
  double t3233;
  double t333;
  double t3236;
  double t3240;
  double t3244;
  double t149;
  double t3273;
  double t3274;
  double t3275;
  double t3272;
  double t3276;
  double t3277;
  double t3279;
  double t3283;
  double t3278;
  double t3287;
  double t3291;
  double t3293;
  double t3297;
  double t3301;
  double t3292;
  double t3305;
  double t3309;
  double t3317;
  double t3321;
  double t3325;
  double t3260;
  double t3313;
  double t3329;
  double t3330;
  double t3332;
  double t3333;
  double t3334;
  double t3363;
  double t3416;
  double t3420;
  double t3406;
  double t3407;
  double t3424;
  double t3428;
  double t3432;
  double t3436;
  double t3438;
  double t3439;
  double t3440;
  double t3441;
  double t3408;
  double t3412;
  double t3437;
  double t3442;
  double t3443;
  double t3445;
  double t3448;
  double t3452;
  double t3456;
  double t3460;
  double t3388;
  double t3389;
  double t3392;
  double t3395;
  double t3402;
  double t3444;
  double t3464;
  double t3468;
  double t3476;
  double t3480;
  double t3484;
  double t3485;
  double t3486;
  double t3487;
  double t3488;
  double t3384;
  double t3385;
  double t3390;
  double t3391;
  double t3472;
  double t3489;
  double t3490;
  double t3492;
  double t3493;
  double t3500;
  double t3503;
  double t3506;
  double t3367;
  double t3371;
  double t3375;
  double t3379;
  double t3383;
  double t3386;
  double t3387;
  double t3491;
  double t3509;
  double t3513;
  double t3517;
  double t3521;
  double t3526;
  double t3527;
  double t3528;
  double t3529;
  double t3530;
  double t3331;
  double t3335;
  double t3336;
  double t3338;
  double t3342;
  double t3343;
  double t3359;
  double t3525;
  double t3531;
  double t3532;
  double t3534;
  double t3537;
  double t3544;
  double t3547;
  double t3550;
  double t3554;
  double t3561;
  double t3562;
  double t3563;
  double t3348;
  double t3351;
  double t3355;
  double t3533;
  double t3558;
  double t3559;
  double t3234;
  double t3248;
  double t3252;
  double t3264;
  double t3268;
  double t3269;
  double t3564;
  double t3565;
  double t3566;
  double t3567;
  double t3256;
  double t3270;
  double t3271;
  double t3577;
  double t3580;
  double t3583;
  double t3585;
  double t3603;
  double t3586;
  double t3640;
  double t3656;
  double t3696;
  double t3704;
  double t3705;
  double t3706;
  double t3707;
  double t3692;
  double t3684;
  double t3685;
  double t3686;
  double t3687;
  double t3700;
  double t3708;
  double t3712;
  double t3745;
  double t3732;
  double t3736;
  double t3740;
  double t3728;
  double t3746;
  double t3747;
  double t3748;
  double t3590;
  double t3591;
  double t3592;
  double t3574;
  double t3337;
  double t3346;
  double t3347;
  double t3799;
  double t3803;
  double t3807;
  double t3602;
  double t3774;
  double t3775;
  double t3779;
  double t3787;
  double t3791;
  double t3795;
  double t3759;
  double t3763;
  double t3767;
  double t3814;
  double t3815;
  double t3816;
  double t3811;
  double t3771;
  double t3772;
  double t3773;
  double t3835;
  double t3836;
  double t3840;
  double t3818;
  double t3844;
  double t3848;
  double t3852;
  double t3826;
  double t3830;
  double t3834;
  double t3872;
  double t3873;
  double t3874;
  double t3927;
  double t3910;
  double t3879;
  double t3880;
  double t3881;
  double t3906;
  double t3926;
  double t4064;
  double t3688;
  double t3716;
  double t3720;
  double t4073;
  double t3860;
  double t3864;
  double t3868;
  double t4114;
  double t4108;
  double t4107;
  double t4113;
  double t4258;
  double t4274;
  t3007 = Cos(var1[21]);
  t3063 = Sin(var1[21]);
  t3076 = Cos(var1[20]);
  t3038 = 0.642788*t3007;
  t3067 = -0.766044*t3063;
  t3071 = t3038 + t3067;
  t3002 = Sin(var1[20]);
  t3083 = 0.766044*t3007;
  t3112 = 0.642788*t3063;
  t3134 = t3083 + t3112;
  t3189 = Cos(var1[19]);
  t3075 = t3002*t3071;
  t3163 = t3076*t3134;
  t3171 = t3075 + t3163;
  t2973 = Sin(var1[19]);
  t3200 = t3076*t3071;
  t3207 = -1.*t3002*t3134;
  t3208 = t3200 + t3207;
  t3212 = Cos(var1[18]);
  t3182 = -1.*t2973*t3171;
  t3209 = t3189*t3208;
  t3210 = t3182 + t3209;
  t2895 = Sin(var1[18]);
  t3213 = t3189*t3171;
  t3214 = t2973*t3208;
  t3215 = t3213 + t3214;
  t3219 = Cos(var1[17]);
  t3211 = t2895*t3210;
  t3216 = t3212*t3215;
  t3217 = t3211 + t3216;
  t2739 = Sin(var1[17]);
  t3223 = t3212*t3210;
  t3227 = -1.*t2895*t3215;
  t3228 = t3223 + t3227;
  t3235 = Cos(var1[15]);
  t768 = Sin(var1[16]);
  t3218 = -1.*t2739*t3217;
  t3232 = t3219*t3228;
  t3233 = t3218 + t3232;
  t333 = Sin(var1[15]);
  t3236 = t3219*t3217;
  t3240 = t2739*t3228;
  t3244 = t3236 + t3240;
  t149 = Cos(var1[14]);
  t3273 = -0.766044*t3007;
  t3274 = -0.642788*t3063;
  t3275 = t3273 + t3274;
  t3272 = -1.*t3002*t3071;
  t3276 = t3076*t3275;
  t3277 = t3272 + t3276;
  t3279 = t3002*t3275;
  t3283 = t3200 + t3279;
  t3278 = t2973*t3277;
  t3287 = t3189*t3283;
  t3291 = t3278 + t3287;
  t3293 = t3189*t3277;
  t3297 = -1.*t2973*t3283;
  t3301 = t3293 + t3297;
  t3292 = -1.*t2895*t3291;
  t3305 = t3212*t3301;
  t3309 = t3292 + t3305;
  t3317 = t3212*t3291;
  t3321 = t2895*t3301;
  t3325 = t3317 + t3321;
  t3260 = Sin(var1[14]);
  t3313 = t2739*t3309;
  t3329 = t3219*t3325;
  t3330 = t3313 + t3329;
  t3332 = t3219*t3309;
  t3333 = -1.*t2739*t3325;
  t3334 = t3332 + t3333;
  t3363 = Cos(var1[16]);
  t3416 = -1.*t3007;
  t3420 = 1. + t3416;
  t3406 = -1.*t3076;
  t3407 = 1. + t3406;
  t3424 = -0.0216*t3420;
  t3428 = 0.0306*t3007;
  t3432 = 0.0177*t3063;
  t3436 = t3424 + t3428 + t3432;
  t3438 = -1.1135*t3420;
  t3439 = -1.1312*t3007;
  t3440 = 0.0522*t3063;
  t3441 = t3438 + t3439 + t3440;
  t3408 = -0.7055*t3407;
  t3412 = -0.0184*t3002;
  t3437 = t3002*t3436;
  t3442 = t3076*t3441;
  t3443 = t3408 + t3412 + t3437 + t3442;
  t3445 = 0.0184*t3407;
  t3448 = -0.7055*t3002;
  t3452 = t3076*t3436;
  t3456 = -1.*t3002*t3441;
  t3460 = t3445 + t3448 + t3452 + t3456;
  t3388 = -1.*t3212;
  t3389 = 1. + t3388;
  t3392 = -1. + t3189;
  t3395 = 0.0016*t3392;
  t3402 = -0.2707*t2973;
  t3444 = -1.*t2973*t3443;
  t3464 = t3189*t3460;
  t3468 = t3395 + t3402 + t3444 + t3464;
  t3476 = -1.*t3189;
  t3480 = 1. + t3476;
  t3484 = -0.2707*t3480;
  t3485 = 0.0016*t2973;
  t3486 = t3189*t3443;
  t3487 = t2973*t3460;
  t3488 = t3484 + t3485 + t3486 + t3487;
  t3384 = -1.*t3219;
  t3385 = 1. + t3384;
  t3390 = -0.21*t3389;
  t3391 = 0.049*t2895;
  t3472 = t2895*t3468;
  t3489 = t3212*t3488;
  t3490 = t3390 + t3391 + t3472 + t3489;
  t3492 = -0.049*t3389;
  t3493 = -0.21*t2895;
  t3500 = t3212*t3468;
  t3503 = -1.*t2895*t3488;
  t3506 = t3492 + t3493 + t3500 + t3503;
  t3367 = -1.*t3363;
  t3371 = 1. + t3367;
  t3375 = -0.135*t3371;
  t3379 = -0.1305*t3363;
  t3383 = -0.049*t768;
  t3386 = -0.049*t3385;
  t3387 = -0.09*t2739;
  t3491 = -1.*t2739*t3490;
  t3509 = t3219*t3506;
  t3513 = t3386 + t3387 + t3491 + t3509;
  t3517 = -1.*t768*t3513;
  t3521 = t3375 + t3379 + t3383 + t3517;
  t3526 = -0.09*t3385;
  t3527 = 0.049*t2739;
  t3528 = t3219*t3490;
  t3529 = t2739*t3506;
  t3530 = t3526 + t3527 + t3528 + t3529;
  t3331 = -1.*t333*t3330;
  t3335 = -1.*t3235*t768*t3334;
  t3336 = t3331 + t3335;
  t3338 = t3235*t3330;
  t3342 = -1.*t333*t768*t3334;
  t3343 = t3338 + t3342;
  t3359 = 0.135*t333;
  t3525 = t333*t3521;
  t3531 = t3235*t3530;
  t3532 = t3359 + t3525 + t3531;
  t3534 = -1.*t3235;
  t3537 = 1. + t3534;
  t3544 = -0.135*t3537;
  t3547 = t3235*t3521;
  t3550 = -1.*t333*t3530;
  t3554 = t3544 + t3547 + t3550;
  t3561 = t3260*t3336;
  t3562 = t149*t3343;
  t3563 = t3561 + t3562;
  t3348 = -1.*t149;
  t3351 = 1. + t3348;
  t3355 = -0.135*t3351;
  t3533 = -1.*t3260*t3532;
  t3558 = t149*t3554;
  t3559 = t3355 + t3533 + t3558;
  t3234 = -1.*t333*t768*t3233;
  t3248 = t3235*t3244;
  t3252 = t3234 + t3248;
  t3264 = -1.*t3235*t768*t3233;
  t3268 = -1.*t333*t3244;
  t3269 = t3264 + t3268;
  t3564 = 0.135*t3260;
  t3565 = t149*t3532;
  t3566 = t3260*t3554;
  t3567 = t3564 + t3565 + t3566;
  t3256 = t149*t3252;
  t3270 = t3260*t3269;
  t3271 = t3256 + t3270;
  t3577 = -0.049*t3371;
  t3580 = 0.0045*t768;
  t3583 = t3363*t3513;
  t3585 = t3577 + t3580 + t3583;
  t3603 = -1.*t3363*t3585*t3233;
  t3586 = t3363*t3585*t3334;
  t3640 = -1.*t3530*t3244;
  t3656 = t3330*t3530;
  t3696 = Cos(var1[5]);
  t3704 = -1.*t149*t3235*t3363;
  t3705 = t3363*t3260*t333;
  t3706 = t3704 + t3705;
  t3707 = Sin(var1[5]);
  t3692 = Cos(var1[4]);
  t3684 = -1.*t3235*t3363*t3260;
  t3685 = -1.*t149*t3363*t333;
  t3686 = t3684 + t3685;
  t3687 = Sin(var1[4]);
  t3700 = -1.*t3696*t768;
  t3708 = -1.*t3706*t3707;
  t3712 = t3700 + t3708;
  t3745 = Cos(var1[3]);
  t3732 = t3696*t3706;
  t3736 = -1.*t768*t3707;
  t3740 = t3732 + t3736;
  t3728 = Sin(var1[3]);
  t3746 = t3692*t3686;
  t3747 = -1.*t3687*t3712;
  t3748 = t3746 + t3747;
  t3590 = -1.*t3260*t3252;
  t3591 = t149*t3269;
  t3592 = t3590 + t3591;
  t3574 = t3563*t3567;
  t3337 = t149*t3336;
  t3346 = -1.*t3260*t3343;
  t3347 = t3337 + t3346;
  t3799 = t3696*t3347;
  t3803 = t3363*t3334*t3707;
  t3807 = t3799 + t3803;
  t3602 = -1.*t3567*t3271;
  t3774 = t3696*t3585;
  t3775 = -1.*t3559*t3707;
  t3779 = t3774 + t3775;
  t3787 = t3696*t3559;
  t3791 = t3585*t3707;
  t3795 = t3787 + t3791;
  t3759 = t3696*t3592;
  t3763 = t3363*t3233*t3707;
  t3767 = t3759 + t3763;
  t3814 = t3363*t3696*t3233;
  t3815 = -1.*t3592*t3707;
  t3816 = t3814 + t3815;
  t3811 = t3795*t3807;
  t3771 = t3363*t3696*t3334;
  t3772 = -1.*t3347*t3707;
  t3773 = t3771 + t3772;
  t3835 = t3563*t3687;
  t3836 = t3692*t3773;
  t3840 = t3835 + t3836;
  t3818 = -1.*t3795*t3767;
  t3844 = t3567*t3687;
  t3848 = t3692*t3779;
  t3852 = t3844 + t3848;
  t3826 = t3271*t3687;
  t3830 = t3692*t3816;
  t3834 = t3826 + t3830;
  t3872 = t3692*t3567;
  t3873 = -1.*t3687*t3779;
  t3874 = t3872 + t3873;
  t3927 = -1.*t3363*t3585*t3334;
  t3910 = -1.*t768*t3585;
  t3879 = t3692*t3271;
  t3880 = -1.*t3687*t3816;
  t3881 = t3879 + t3880;
  t3906 = t3686*t3567;
  t3926 = -1.*t3563*t3567;
  t4064 = t3740*t3795;
  t3688 = t3686*t3687;
  t3716 = t3692*t3712;
  t3720 = t3688 + t3716;
  t4073 = -1.*t3795*t3807;
  t3860 = t3692*t3563;
  t3864 = -1.*t3687*t3773;
  t3868 = t3860 + t3864;
  t4114 = t3363*t3585*t3233;
  t4108 = t768*t3585;
  t4107 = -1.*t3686*t3567;
  t4113 = t3567*t3271;
  t4258 = -1.*t3740*t3795;
  t4274 = t3795*t3767;
  p_output1[0]=t3720*var2[0] + (t3740*t3745 - 1.*t3728*t3748)*var2[1] + (t3728*t3740 + t3745*t3748)*var2[2] + (t3834*(t3811 + t3840*t3852 + t3868*t3874) + t3840*(t3818 - 1.*t3834*t3852 - 1.*t3874*t3881))*var2[3] + (t3767*(t3574 + t3773*t3779 + t3811) + t3807*(t3602 - 1.*t3779*t3816 + t3818))*var2[4] + (t3271*(t3347*t3559 + t3574 + t3586) + t3563*(-1.*t3559*t3592 + t3602 + t3603))*var2[5] + (-0.135*t333*t3363 + t3233*t3363*(t3343*t3532 + t3336*t3554 + t3586) + t3334*t3363*(-1.*t3252*t3532 - 1.*t3269*t3554 + t3603))*var2[14] + (t3334*t3363*(t3603 + t3640 + t3233*t3521*t768) + t3233*t3363*(t3586 + t3656 - 1.*t3334*t3521*t768))*var2[15] + (0.049 - 1.*t3330*(-1.*t3233*t3513 + t3640) - 1.*t3244*(t3334*t3513 + t3656))*var2[16];
  p_output1[1]=t3834*var2[0] + (t3745*t3767 - 1.*t3728*t3881)*var2[1] + (t3728*t3767 + t3745*t3881)*var2[2] + (t3840*(t3720*t3852 + t3748*t3874 + t4064) + t3720*(-1.*t3840*t3852 - 1.*t3868*t3874 + t4073))*var2[3] + (t3807*(t3712*t3779 + t3906 + t4064) + t3740*(-1.*t3773*t3779 + t3926 + t4073))*var2[4] + (t3563*(t3559*t3706 + t3906 + t3910) + t3686*(-1.*t3347*t3559 + t3926 + t3927))*var2[5] + (0.135*t3252 + t3334*t3363*(-1.*t333*t3363*t3532 - 1.*t3235*t3363*t3554 + t3910) - 1.*(-1.*t3343*t3532 - 1.*t3336*t3554 + t3927)*t768)*var2[14] + (0.135*t3244 + t3334*t3363*(-1.*t3363*t3521 + t3910) - 1.*t768*(-1.*t3330*t3530 + t3927 + t3334*t3521*t768))*var2[15] + (0.135*t3233 - 0.1305*t3330)*var2[16] + (0.049*t3217 - 0.09*t3228 - 1.*t3325*t3490 - 1.*t3309*t3506)*var2[17] + (-0.21*t3210 + 0.049*t3215 - 1.*t3301*t3468 - 1.*t3291*t3488)*var2[18] + (0.0016*t3171 - 0.2707*t3208 - 1.*t3283*t3443 - 1.*t3277*t3460)*var2[19] + (-0.7055*t3071 - 0.0184*t3134 - 1.*t3275*t3436 - 1.*t3071*t3441)*var2[20] + 0.0513648444*var2[21];
  p_output1[2]=t3840*var2[0] + (t3745*t3807 - 1.*t3728*t3868)*var2[1] + (t3728*t3807 + t3745*t3868)*var2[2] + (t3834*(-1.*t3720*t3852 - 1.*t3748*t3874 + t4258) + t3720*(t3834*t3852 + t3874*t3881 + t4274))*var2[3] + (t3767*(-1.*t3712*t3779 + t4107 + t4258) + t3740*(t3779*t3816 + t4113 + t4274))*var2[4] + (t3271*(-1.*t3559*t3706 + t4107 + t4108) + t3686*(t3559*t3592 + t4113 + t4114))*var2[5] + (0.135*t3343 + t3233*t3363*(t333*t3363*t3532 + t3235*t3363*t3554 + t4108) - 1.*(t3252*t3532 + t3269*t3554 + t4114)*t768)*var2[14] + (0.135*t3330 + t3233*t3363*(t3363*t3521 + t4108) - 1.*t768*(t3244*t3530 + t4114 - 1.*t3233*t3521*t768))*var2[15] + (0.1305*t3244 + 0.135*t3334)*var2[16] + (-0.09*t3309 + 0.049*t3325 + t3217*t3490 + t3228*t3506)*var2[17] + (0.049*t3291 - 0.21*t3301 + t3210*t3468 + t3215*t3488)*var2[18] + (-0.2707*t3277 + 0.0016*t3283 + t3171*t3443 + t3208*t3460)*var2[19] + (-0.0184*t3071 - 0.7055*t3275 + t3071*t3436 + t3134*t3441)*var2[20] + 0.0199945548*var2[21];
  p_output1[3]=t3720*var2[3] + t3740*var2[4] + t3686*var2[5] - 1.*t768*var2[14] - 1.*t768*var2[15] + var2[17] + var2[18] + var2[19] + var2[20] + var2[21];
  p_output1[4]=t3840*var2[3] + t3807*var2[4] + t3563*var2[5] + t3334*t3363*var2[14] + t3334*t3363*var2[15] + (-1.*t2739*t3309 - 1.*t3219*t3325)*var2[16];
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
