/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:39 GMT-04:00
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
  double t225;
  double t97;
  double t162;
  double t209;
  double t241;
  double t494;
  double t424;
  double t447;
  double t476;
  double t477;
  double t495;
  double t280;
  double t283;
  double t386;
  double t485;
  double t497;
  double t508;
  double t522;
  double t573;
  double t594;
  double t597;
  double t601;
  double t612;
  double t623;
  double t217;
  double t246;
  double t254;
  double t739;
  double t881;
  double t900;
  double t906;
  double t748;
  double t933;
  double t949;
  double t972;
  double t987;
  double t1331;
  double t1400;
  double t1407;
  double t1419;
  double t1498;
  double t1509;
  double t1533;
  double t1590;
  double t1788;
  double t1861;
  double t1921;
  double t1968;
  double t1974;
  double t2187;
  double t2342;
  double t2348;
  double t2452;
  double t2749;
  double t2770;
  double t2800;
  double t2818;
  double t2819;
  double t2822;
  double t2859;
  double t2903;
  double t2921;
  double t2927;
  double t2942;
  double t2944;
  double t2945;
  double t740;
  double t743;
  double t2984;
  double t2988;
  double t2992;
  double t745;
  double t761;
  double t848;
  double t973;
  double t1017;
  double t1145;
  double t3020;
  double t3021;
  double t3022;
  double t1167;
  double t1178;
  double t1185;
  double t1418;
  double t1425;
  double t1484;
  double t3047;
  double t3051;
  double t3052;
  double t3055;
  double t3059;
  double t3061;
  double t1542;
  double t1546;
  double t1551;
  double t2172;
  double t2288;
  double t2318;
  double t3067;
  double t3071;
  double t3074;
  double t3079;
  double t3083;
  double t3087;
  double t2665;
  double t2682;
  double t2710;
  double t2823;
  double t2874;
  double t2895;
  double t3095;
  double t3099;
  double t3100;
  double t3102;
  double t3103;
  double t3105;
  double t2939;
  double t2940;
  double t2941;
  double t3107;
  double t3108;
  double t3109;
  double t3111;
  double t3113;
  double t3114;
  double t3135;
  double t3136;
  double t3137;
  double t3000;
  double t3018;
  double t3019;
  double t3142;
  double t3143;
  double t3025;
  double t3026;
  double t3027;
  double t3031;
  double t3035;
  double t3145;
  double t3146;
  double t3163;
  double t3165;
  double t3166;
  double t3170;
  double t3171;
  double t3172;
  double t3179;
  double t3180;
  double t3182;
  double t3184;
  double t3186;
  double t3187;
  double t3190;
  double t3191;
  double t3192;
  double t3195;
  double t3196;
  double t3198;
  double t3200;
  double t3202;
  double t3203;
  double t3206;
  double t3207;
  double t3208;
  double t3129;
  double t3131;
  double t3132;
  double t3133;
  double t3243;
  double t3244;
  double t3245;
  double t3138;
  double t3139;
  double t706;
  double t3256;
  double t3257;
  double t3259;
  double t3251;
  double t3252;
  double t3253;
  double t3280;
  double t3281;
  double t3282;
  double t3286;
  double t3290;
  double t3291;
  double t3294;
  double t3295;
  double t3297;
  double t3299;
  double t3301;
  double t3302;
  double t3305;
  double t3306;
  double t3307;
  double t3310;
  double t3311;
  double t3313;
  double t3315;
  double t3317;
  double t3318;
  double t3321;
  double t3322;
  double t3323;
  double t3335;
  double t3336;
  double t3338;
  double t3237;
  double t3239;
  double t3240;
  double t3241;
  double t3370;
  double t3371;
  double t3372;
  double t3364;
  double t3366;
  double t3367;
  double t3261;
  double t3263;
  double t3390;
  double t3391;
  double t3392;
  double t3375;
  double t3376;
  double t3387;
  double t3401;
  double t3402;
  double t3403;
  double t3406;
  double t3407;
  double t3409;
  double t3411;
  double t3413;
  double t3414;
  double t3417;
  double t3418;
  double t3419;
  double t3422;
  double t3423;
  double t3425;
  double t3427;
  double t3438;
  double t3439;
  double t3441;
  double t3442;
  double t3443;
  double t3446;
  double t3448;
  double t3449;
  double t3452;
  double t3454;
  double t3455;
  double t3360;
  double t3362;
  double t3479;
  double t3480;
  double t3482;
  double t3490;
  double t3492;
  double t3493;
  double t3485;
  double t3486;
  double t3487;
  double t3501;
  double t3512;
  double t3513;
  double t3515;
  double t3516;
  double t3517;
  double t3496;
  double t3497;
  double t3499;
  double t3526;
  double t3528;
  double t3532;
  double t3538;
  double t3540;
  double t3541;
  double t3543;
  double t3544;
  double t3545;
  double t3556;
  double t3557;
  double t3558;
  double t3561;
  double t3562;
  double t3563;
  double t3566;
  double t3567;
  double t3569;
  double t3571;
  double t3573;
  double t3574;
  double t3577;
  double t3578;
  double t3579;
  double t3586;
  double t3587;
  double t3589;
  double t3613;
  double t3614;
  double t3615;
  double t3618;
  double t3619;
  double t3632;
  double t3634;
  double t3635;
  double t3637;
  double t3639;
  double t3641;
  double t3642;
  double t3645;
  double t3646;
  double t3647;
  double t3654;
  double t3655;
  double t3657;
  double t3659;
  double t3661;
  double t3662;
  double t3665;
  double t3666;
  double t3667;
  double t3670;
  double t3671;
  double t3673;
  double t3704;
  double t3705;
  double t3706;
  double t3713;
  double t3714;
  double t3720;
  double t3721;
  double t3724;
  double t3725;
  double t3726;
  double t3729;
  double t3730;
  double t3732;
  double t3734;
  double t3736;
  double t3737;
  double t3740;
  double t3741;
  double t3742;
  double t3777;
  double t3781;
  double t3782;
  double t3785;
  double t3786;
  double t3789;
  double t3790;
  double t3793;
  double t3794;
  double t3795;
  double t3798;
  double t3799;
  double t3801;
  double t3831;
  double t3832;
  double t3836;
  double t3843;
  double t3844;
  double t3847;
  double t3848;
  double t3851;
  double t3881;
  double t3882;
  double t3884;
  double t3856;
  t225 = Cos(var1[3]);
  t97 = Cos(var1[5]);
  t162 = Sin(var1[3]);
  t209 = Sin(var1[4]);
  t241 = Sin(var1[5]);
  t494 = Cos(var1[4]);
  t424 = Cos(var1[6]);
  t447 = t225*t97;
  t476 = -1.*t162*t209*t241;
  t477 = t447 + t476;
  t495 = Sin(var1[6]);
  t280 = Cos(var1[8]);
  t283 = Sin(var1[8]);
  t386 = Cos(var1[7]);
  t485 = t424*t477;
  t497 = -1.*t494*t162*t495;
  t508 = t485 + t497;
  t522 = t386*t508;
  t573 = -1.*t494*t424*t162;
  t594 = -1.*t477*t495;
  t597 = t573 + t594;
  t601 = Sin(var1[7]);
  t612 = t597*t601;
  t623 = t522 + t612;
  t217 = t97*t162*t209;
  t246 = t225*t241;
  t254 = t217 + t246;
  t739 = Cos(var1[9]);
  t881 = t280*t623;
  t900 = -1.*t254*t283;
  t906 = t881 + t900;
  t748 = Sin(var1[9]);
  t933 = Cos(var1[10]);
  t949 = -1.*t933;
  t972 = 1. + t949;
  t987 = Sin(var1[10]);
  t1331 = Cos(var1[11]);
  t1400 = -1.*t1331;
  t1407 = 1. + t1400;
  t1419 = Sin(var1[11]);
  t1498 = -1.*t933*t748*t906;
  t1509 = -1.*t739*t987*t906;
  t1533 = t1498 + t1509;
  t1590 = t739*t933*t906;
  t1788 = -1.*t748*t987*t906;
  t1861 = t1590 + t1788;
  t1921 = Cos(var1[12]);
  t1968 = -1.*t1921;
  t1974 = 1. + t1968;
  t2187 = Sin(var1[12]);
  t2342 = t1419*t1533;
  t2348 = t1331*t1861;
  t2452 = t2342 + t2348;
  t2749 = t1331*t1533;
  t2770 = -1.*t1419*t1861;
  t2800 = t2749 + t2770;
  t2818 = Cos(var1[13]);
  t2819 = -1.*t2818;
  t2822 = 1. + t2819;
  t2859 = Sin(var1[13]);
  t2903 = -1.*t2187*t2452;
  t2921 = t1921*t2800;
  t2927 = t2903 + t2921;
  t2942 = t1921*t2452;
  t2944 = t2187*t2800;
  t2945 = t2942 + t2944;
  t740 = -1.*t739;
  t743 = 1. + t740;
  t2984 = t386*t597;
  t2988 = -1.*t508*t601;
  t2992 = t2984 + t2988;
  t745 = -0.049*t743;
  t761 = -0.09*t748;
  t848 = 0. + t745 + t761;
  t973 = -0.049*t972;
  t1017 = -0.21*t987;
  t1145 = 0. + t973 + t1017;
  t3020 = -1.*t386*t508;
  t3021 = -1.*t597*t601;
  t3022 = t3020 + t3021;
  t1167 = -0.21*t972;
  t1178 = 0.049*t987;
  t1185 = 0. + t1167 + t1178;
  t1418 = -0.2707*t1407;
  t1425 = 0.0016*t1419;
  t1484 = 0. + t1418 + t1425;
  t3047 = t748*t3022;
  t3051 = t739*t2992*t283;
  t3052 = t3047 + t3051;
  t3055 = t739*t3022;
  t3059 = -1.*t748*t2992*t283;
  t3061 = t3055 + t3059;
  t1542 = -0.0016*t1407;
  t1546 = -0.2707*t1419;
  t1551 = 0. + t1542 + t1546;
  t2172 = 0.0184*t1974;
  t2288 = -0.7055*t2187;
  t2318 = 0. + t2172 + t2288;
  t3067 = -1.*t987*t3052;
  t3071 = t933*t3061;
  t3074 = t3067 + t3071;
  t3079 = t933*t3052;
  t3083 = t987*t3061;
  t3087 = t3079 + t3083;
  t2665 = -0.7055*t1974;
  t2682 = -0.0184*t2187;
  t2710 = 0. + t2665 + t2682;
  t2823 = -1.1135*t2822;
  t2874 = 0.0216*t2859;
  t2895 = 0. + t2823 + t2874;
  t3095 = t1419*t3074;
  t3099 = t1331*t3087;
  t3100 = t3095 + t3099;
  t3102 = t1331*t3074;
  t3103 = -1.*t1419*t3087;
  t3105 = t3102 + t3103;
  t2939 = -0.0216*t2822;
  t2940 = -1.1135*t2859;
  t2941 = 0. + t2939 + t2940;
  t3107 = -1.*t2187*t3100;
  t3108 = t1921*t3105;
  t3109 = t3107 + t3108;
  t3111 = t1921*t3100;
  t3113 = t2187*t3105;
  t3114 = t3111 + t3113;
  t3135 = -1.*t424*t477;
  t3136 = t494*t162*t495;
  t3137 = t3135 + t3136;
  t3000 = -0.09*t743;
  t3018 = 0.049*t748;
  t3019 = 0. + t3000 + t3018;
  t3142 = t3137*t601;
  t3143 = t2984 + t3142;
  t3025 = -1.*t280;
  t3026 = 1. + t3025;
  t3027 = 0.135*t3026;
  t3031 = 0.049*t283;
  t3035 = 0. + t3027 + t3031;
  t3145 = t386*t3137;
  t3146 = t3145 + t3021;
  t3163 = t748*t3146;
  t3165 = t739*t3143*t283;
  t3166 = t3163 + t3165;
  t3170 = t739*t3146;
  t3171 = -1.*t748*t3143*t283;
  t3172 = t3170 + t3171;
  t3179 = -1.*t987*t3166;
  t3180 = t933*t3172;
  t3182 = t3179 + t3180;
  t3184 = t933*t3166;
  t3186 = t987*t3172;
  t3187 = t3184 + t3186;
  t3190 = t1419*t3182;
  t3191 = t1331*t3187;
  t3192 = t3190 + t3191;
  t3195 = t1331*t3182;
  t3196 = -1.*t1419*t3187;
  t3198 = t3195 + t3196;
  t3200 = -1.*t2187*t3192;
  t3202 = t1921*t3198;
  t3203 = t3200 + t3202;
  t3206 = t1921*t3192;
  t3207 = t2187*t3198;
  t3208 = t3206 + t3207;
  t3129 = -1.*t386;
  t3131 = 1. + t3129;
  t3132 = 0.135*t3131;
  t3133 = 0. + t3132;
  t3243 = -1.*t97*t162*t209;
  t3244 = -1.*t225*t241;
  t3245 = t3243 + t3244;
  t3138 = -0.135*t601;
  t3139 = 0. + t3138;
  t706 = 0.135*t283;
  t3256 = t424*t386*t3245;
  t3257 = -1.*t3245*t495*t601;
  t3259 = t3256 + t3257;
  t3251 = -1.*t386*t3245*t495;
  t3252 = -1.*t424*t3245*t601;
  t3253 = t3251 + t3252;
  t3280 = t280*t477;
  t3281 = t3259*t283;
  t3282 = t3280 + t3281;
  t3286 = t748*t3253;
  t3290 = t739*t3282;
  t3291 = t3286 + t3290;
  t3294 = t739*t3253;
  t3295 = -1.*t748*t3282;
  t3297 = t3294 + t3295;
  t3299 = -1.*t987*t3291;
  t3301 = t933*t3297;
  t3302 = t3299 + t3301;
  t3305 = t933*t3291;
  t3306 = t987*t3297;
  t3307 = t3305 + t3306;
  t3310 = t1419*t3302;
  t3311 = t1331*t3307;
  t3313 = t3310 + t3311;
  t3315 = t1331*t3302;
  t3317 = -1.*t1419*t3307;
  t3318 = t3315 + t3317;
  t3321 = -1.*t2187*t3313;
  t3322 = t1921*t3318;
  t3323 = t3321 + t3322;
  t3335 = t1921*t3313;
  t3336 = t2187*t3318;
  t3338 = t3335 + t3336;
  t3237 = -1.*t424;
  t3239 = 1. + t3237;
  t3240 = 0.135*t3239;
  t3241 = 0. + t3240;
  t3370 = t424*t162*t209;
  t3371 = t494*t162*t241*t495;
  t3372 = t3370 + t3371;
  t3364 = -1.*t494*t424*t162*t241;
  t3366 = t162*t209*t495;
  t3367 = t3364 + t3366;
  t3261 = -0.049*t3026;
  t3263 = 0. + t3261 + t706;
  t3390 = t386*t3367;
  t3391 = t3372*t601;
  t3392 = t3390 + t3391;
  t3375 = t386*t3372;
  t3376 = -1.*t3367*t601;
  t3387 = t3375 + t3376;
  t3401 = t494*t97*t280*t162;
  t3402 = t3392*t283;
  t3403 = t3401 + t3402;
  t3406 = t748*t3387;
  t3407 = t739*t3403;
  t3409 = t3406 + t3407;
  t3411 = t739*t3387;
  t3413 = -1.*t748*t3403;
  t3414 = t3411 + t3413;
  t3417 = -1.*t987*t3409;
  t3418 = t933*t3414;
  t3419 = t3417 + t3418;
  t3422 = t933*t3409;
  t3423 = t987*t3414;
  t3425 = t3422 + t3423;
  t3427 = t1419*t3419;
  t3438 = t1331*t3425;
  t3439 = t3427 + t3438;
  t3441 = t1331*t3419;
  t3442 = -1.*t1419*t3425;
  t3443 = t3441 + t3442;
  t3446 = -1.*t2187*t3439;
  t3448 = t1921*t3443;
  t3449 = t3446 + t3448;
  t3452 = t1921*t3439;
  t3454 = t2187*t3443;
  t3455 = t3452 + t3454;
  t3360 = -0.135*t495;
  t3362 = 0. + t3360;
  t3479 = -1.*t97*t162;
  t3480 = -1.*t225*t209*t241;
  t3482 = t3479 + t3480;
  t3490 = -1.*t225*t494*t424;
  t3492 = -1.*t3482*t495;
  t3493 = t3490 + t3492;
  t3485 = t424*t3482;
  t3486 = -1.*t225*t494*t495;
  t3487 = t3485 + t3486;
  t3501 = t386*t3487;
  t3512 = t3493*t601;
  t3513 = t3501 + t3512;
  t3515 = t225*t97*t209;
  t3516 = -1.*t162*t241;
  t3517 = t3515 + t3516;
  t3496 = t386*t3493;
  t3497 = -1.*t3487*t601;
  t3499 = t3496 + t3497;
  t3526 = t280*t3517;
  t3528 = t3513*t283;
  t3532 = t3526 + t3528;
  t3538 = t748*t3499;
  t3540 = t739*t3532;
  t3541 = t3538 + t3540;
  t3543 = t739*t3499;
  t3544 = -1.*t748*t3532;
  t3545 = t3543 + t3544;
  t3556 = -1.*t987*t3541;
  t3557 = t933*t3545;
  t3558 = t3556 + t3557;
  t3561 = t933*t3541;
  t3562 = t987*t3545;
  t3563 = t3561 + t3562;
  t3566 = t1419*t3558;
  t3567 = t1331*t3563;
  t3569 = t3566 + t3567;
  t3571 = t1331*t3558;
  t3573 = -1.*t1419*t3563;
  t3574 = t3571 + t3573;
  t3577 = -1.*t2187*t3569;
  t3578 = t1921*t3574;
  t3579 = t3577 + t3578;
  t3586 = t1921*t3569;
  t3587 = t2187*t3574;
  t3589 = t3586 + t3587;
  t3613 = t280*t254;
  t3614 = t623*t283;
  t3615 = t3613 + t3614;
  t3618 = -1.*t748*t2992;
  t3619 = -1.*t739*t3615;
  t3632 = t3618 + t3619;
  t3634 = t739*t2992;
  t3635 = -1.*t748*t3615;
  t3637 = t3634 + t3635;
  t3639 = t987*t3632;
  t3641 = t933*t3637;
  t3642 = t3639 + t3641;
  t3645 = t933*t3632;
  t3646 = -1.*t987*t3637;
  t3647 = t3645 + t3646;
  t3654 = -1.*t1419*t3642;
  t3655 = t1331*t3647;
  t3657 = t3654 + t3655;
  t3659 = t1331*t3642;
  t3661 = t1419*t3647;
  t3662 = t3659 + t3661;
  t3665 = t2187*t3657;
  t3666 = t1921*t3662;
  t3667 = t3665 + t3666;
  t3670 = t1921*t3657;
  t3671 = -1.*t2187*t3662;
  t3673 = t3670 + t3671;
  t3704 = t748*t2992;
  t3705 = t739*t3615;
  t3706 = t3704 + t3705;
  t3713 = -1.*t987*t3706;
  t3714 = t3713 + t3641;
  t3720 = -1.*t933*t3706;
  t3721 = t3720 + t3646;
  t3724 = -1.*t1419*t3714;
  t3725 = t1331*t3721;
  t3726 = t3724 + t3725;
  t3729 = t1331*t3714;
  t3730 = t1419*t3721;
  t3732 = t3729 + t3730;
  t3734 = t2187*t3726;
  t3736 = t1921*t3732;
  t3737 = t3734 + t3736;
  t3740 = t1921*t3726;
  t3741 = -1.*t2187*t3732;
  t3742 = t3740 + t3741;
  t3777 = t933*t3706;
  t3781 = t987*t3637;
  t3782 = t3777 + t3781;
  t3785 = -1.*t1331*t3782;
  t3786 = t3724 + t3785;
  t3789 = -1.*t1419*t3782;
  t3790 = t3729 + t3789;
  t3793 = t2187*t3786;
  t3794 = t1921*t3790;
  t3795 = t3793 + t3794;
  t3798 = t1921*t3786;
  t3799 = -1.*t2187*t3790;
  t3801 = t3798 + t3799;
  t3831 = t1419*t3714;
  t3832 = t1331*t3782;
  t3836 = t3831 + t3832;
  t3843 = -1.*t2187*t3836;
  t3844 = t3843 + t3794;
  t3847 = -1.*t1921*t3836;
  t3848 = t3847 + t3799;
  t3851 = -1.*t2859*t3844;
  t3881 = t1921*t3836;
  t3882 = t2187*t3790;
  t3884 = t3881 + t3882;
  t3856 = t2818*t3844;
  p_output1[0]=var2[1] + (t3241*t3482 + t3133*t3487 + t3139*t3493 + t3019*t3499 + t3035*t3513 + t3263*t3517 + 0.1305*(t280*t3513 - 1.*t283*t3517) + t1145*t3541 + t1185*t3545 + t1484*t3558 + t1551*t3563 + t2318*t3569 + t2710*t3574 + t2895*t3579 + t2941*t3589 + 0.0306*(t2859*t3579 + t2818*t3589) - 1.1312*(t2818*t3579 - 1.*t2859*t3589) - 1.*t225*t3362*t494 + t3532*t848)*var2[3] + (t162*t209*t3362 + t3133*t3367 + t3139*t3372 + t3019*t3387 + t3035*t3392 + t1145*t3409 + t1185*t3414 + t1484*t3419 + t1551*t3425 + t2318*t3439 + t2710*t3443 + t2895*t3449 + t2941*t3455 + 0.0306*(t2859*t3449 + t2818*t3455) - 1.1312*(t2818*t3449 - 1.*t2859*t3455) - 1.*t162*t241*t3241*t494 + t3403*t848 + t162*t3263*t494*t97 + 0.1305*(t280*t3392 - 1.*t162*t283*t494*t97))*var2[4] + (t3241*t3245 + t3019*t3253 + t3035*t3259 + t1145*t3291 + t1185*t3297 + t1484*t3302 + t1551*t3307 + t2318*t3313 + t2710*t3318 + t2895*t3323 + t2941*t3338 + 0.0306*(t2859*t3323 + t2818*t3338) - 1.1312*(t2818*t3323 - 1.*t2859*t3338) + t3133*t3245*t424 + t3263*t477 + 0.1305*(t280*t3259 - 1.*t283*t477) - 1.*t3139*t3245*t495 + t3282*t848)*var2[5] + (t3137*t3139 + 0.1305*t280*t3143 + t3035*t3143 + t3019*t3146 + t1145*t3166 + t1185*t3172 + t1484*t3182 + t1551*t3187 + t2318*t3192 + t2710*t3198 + t2895*t3203 + t2941*t3208 + 0.0306*(t2859*t3203 + t2818*t3208) - 1.1312*(t2818*t3203 - 1.*t2859*t3208) + 0.135*t162*t424*t494 + 0.135*t477*t495 + t3133*t597 + t283*t3143*t848)*var2[6] + (0.1305*t280*t2992 + t3019*t3022 + t2992*t3035 + t1145*t3052 + t1185*t3061 + t1484*t3074 + t1551*t3087 + t2318*t3100 + t2710*t3105 + t2895*t3109 + t2941*t3114 + 0.0306*(t2859*t3109 + t2818*t3114) - 1.1312*(t2818*t3109 - 1.*t2859*t3114) - 0.135*t386*t597 + 0.135*t508*t601 + t283*t2992*t848)*var2[7] + (t1484*t1533 + t1551*t1861 + t2318*t2452 + t2710*t2800 + t254*(0.135*t280 - 0.049*t283) + t2895*t2927 + t2941*t2945 + 0.0306*(t2859*t2927 + t2818*t2945) - 1.1312*(t2818*t2927 - 1.*t2859*t2945) + 0.1305*(-1.*t254*t280 - 1.*t283*t623) + t623*(0.049*t280 + t706) + t1145*t739*t906 - 1.*t1185*t748*t906 + t848*t906)*var2[8] + (t1185*t3632 + t1145*t3637 + t1551*t3642 + t1484*t3647 + t2710*t3657 + t2318*t3662 + t2941*t3667 + t2895*t3673 - 1.1312*(-1.*t2859*t3667 + t2818*t3673) + 0.0306*(t2818*t3667 + t2859*t3673) + t3615*(-0.09*t739 - 0.049*t748) + t2992*(0.049*t739 + t761))*var2[9] + (t1551*t3714 + t1484*t3721 + t2710*t3726 + t2318*t3732 + t2941*t3737 + t2895*t3742 - 1.1312*(-1.*t2859*t3737 + t2818*t3742) + 0.0306*(t2818*t3737 + t2859*t3742) + t3637*(t1017 + 0.049*t933) + t3706*(-0.21*t933 - 0.049*t987))*var2[10] + ((0.0016*t1331 + t1546)*t3714 + (-0.2707*t1331 - 0.0016*t1419)*t3782 + t2710*t3786 + t2318*t3790 + t2941*t3795 + t2895*t3801 - 1.1312*(-1.*t2859*t3795 + t2818*t3801) + 0.0306*(t2818*t3795 + t2859*t3801))*var2[11] + ((-0.0184*t1921 + t2288)*t3790 + (-0.7055*t1921 + 0.0184*t2187)*t3836 + t2941*t3844 + t2895*t3848 - 1.1312*(t2818*t3848 + t3851) + 0.0306*(t2859*t3848 + t3856))*var2[12] + ((0.0216*t2818 + t2940)*t3844 + (-1.1135*t2818 - 0.0216*t2859)*t3884 - 1.1312*(t3851 - 1.*t2818*t3884) + 0.0306*(t3856 - 1.*t2859*t3884))*var2[13];
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

#include "SwingToeVelocity_y_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void SwingToeVelocity_y_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
