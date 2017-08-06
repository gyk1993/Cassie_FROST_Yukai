/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:21 GMT-04:00
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
  double t1037;
  double t2979;
  double t3001;
  double t3011;
  double t3065;
  double t3149;
  double t3090;
  double t3092;
  double t3097;
  double t3069;
  double t3201;
  double t3218;
  double t3224;
  double t1210;
  double t1742;
  double t2855;
  double t2925;
  double t1209;
  double t3320;
  double t3324;
  double t3327;
  double t3246;
  double t3250;
  double t3266;
  double t3276;
  double t3279;
  double t3284;
  double t3288;
  double t3382;
  double t3383;
  double t3384;
  double t3400;
  double t3412;
  double t3424;
  double t3433;
  double t3436;
  double t3437;
  double t3450;
  double t3469;
  double t3470;
  double t3472;
  double t2985;
  double t2995;
  double t2923;
  double t2931;
  double t2950;
  double t3503;
  double t3038;
  double t3044;
  double t3058;
  double t3061;
  double t3506;
  double t3072;
  double t3074;
  double t3077;
  double t3082;
  double t3511;
  double t3518;
  double t3521;
  double t3159;
  double t3177;
  double t3273;
  double t3277;
  double t3278;
  double t3527;
  double t3529;
  double t3530;
  double t3534;
  double t3535;
  double t3536;
  double t3300;
  double t3304;
  double t3316;
  double t3505;
  double t3507;
  double t3508;
  double t3552;
  double t3553;
  double t3555;
  double t3361;
  double t3365;
  double t3381;
  double t3430;
  double t3434;
  double t3435;
  double t3547;
  double t3548;
  double t3549;
  double t3582;
  double t3583;
  double t3584;
  double t3457;
  double t3461;
  double t3465;
  double t3592;
  double t3596;
  double t3600;
  double t3621;
  double t3622;
  double t3625;
  double t3676;
  double t3680;
  double t3684;
  double t3689;
  double t3690;
  double t3694;
  double t3696;
  double t3697;
  double t3701;
  double t3656;
  double t3660;
  double t3668;
  double t3717;
  double t3718;
  double t3719;
  double t3703;
  double t3707;
  double t3711;
  double t3751;
  double t3755;
  double t3756;
  double t3759;
  double t3760;
  double t3761;
  double t3763;
  double t3764;
  double t3765;
  t1037 = Cos(var1[4]);
  t2979 = Sin(var1[14]);
  t3001 = Sin(var1[4]);
  t3011 = Cos(var1[14]);
  t3065 = Sin(var1[5]);
  t3149 = Sin(var1[15]);
  t3090 = t2979*t3001;
  t3092 = -1.*t3011*t1037*t3065;
  t3097 = t3090 + t3092;
  t3069 = Cos(var1[15]);
  t3201 = t3011*t3001;
  t3218 = t1037*t2979*t3065;
  t3224 = t3201 + t3218;
  t1210 = Cos(var1[16]);
  t1742 = -1.*t1210;
  t2855 = 1. + t1742;
  t2925 = Sin(var1[16]);
  t1209 = Cos(var1[5]);
  t3320 = t3069*t3097;
  t3324 = t3149*t3224;
  t3327 = t3320 + t3324;
  t3246 = Cos(var1[17]);
  t3250 = -1.*t3246;
  t3266 = 1. + t3250;
  t3276 = Sin(var1[17]);
  t3279 = -1.*t3149*t3097;
  t3284 = t3069*t3224;
  t3288 = t3279 + t3284;
  t3382 = t1210*t1037*t1209;
  t3383 = t2925*t3327;
  t3384 = t3382 + t3383;
  t3400 = Cos(var1[18]);
  t3412 = -1.*t3400;
  t3424 = 1. + t3412;
  t3433 = Sin(var1[18]);
  t3436 = t3276*t3288;
  t3437 = t3246*t3384;
  t3450 = t3436 + t3437;
  t3469 = t3246*t3288;
  t3470 = -1.*t3276*t3384;
  t3472 = t3469 + t3470;
  t2985 = 0.135*t2979;
  t2995 = 0. + t2985;
  t2923 = -0.049*t2855;
  t2931 = -0.135*t2925;
  t2950 = 0. + t2923 + t2931;
  t3503 = Sin(var1[3]);
  t3038 = -1.*t3011;
  t3044 = 1. + t3038;
  t3058 = -0.135*t3044;
  t3061 = 0. + t3058;
  t3506 = Cos(var1[3]);
  t3072 = -1.*t3069;
  t3074 = 1. + t3072;
  t3077 = -0.135*t3074;
  t3082 = 0. + t3077;
  t3511 = t3506*t1209;
  t3518 = -1.*t3503*t3001*t3065;
  t3521 = t3511 + t3518;
  t3159 = 0.135*t3149;
  t3177 = 0. + t3159;
  t3273 = -0.09*t3266;
  t3277 = 0.049*t3276;
  t3278 = 0. + t3273 + t3277;
  t3527 = -1.*t1037*t2979*t3503;
  t3529 = t3011*t3521;
  t3530 = t3527 + t3529;
  t3534 = -1.*t3011*t1037*t3503;
  t3535 = -1.*t2979*t3521;
  t3536 = t3534 + t3535;
  t3300 = -0.135*t2855;
  t3304 = 0.049*t2925;
  t3316 = 0. + t3300 + t3304;
  t3505 = t1209*t3503*t3001;
  t3507 = t3506*t3065;
  t3508 = t3505 + t3507;
  t3552 = t3069*t3530;
  t3553 = t3149*t3536;
  t3555 = t3552 + t3553;
  t3361 = -0.049*t3266;
  t3365 = -0.09*t3276;
  t3381 = 0. + t3361 + t3365;
  t3430 = -0.049*t3424;
  t3434 = -0.21*t3433;
  t3435 = 0. + t3430 + t3434;
  t3547 = -1.*t3149*t3530;
  t3548 = t3069*t3536;
  t3549 = t3547 + t3548;
  t3582 = t1210*t3508;
  t3583 = t2925*t3555;
  t3584 = t3582 + t3583;
  t3457 = -0.21*t3424;
  t3461 = 0.049*t3433;
  t3465 = 0. + t3457 + t3461;
  t3592 = t3276*t3549;
  t3596 = t3246*t3584;
  t3600 = t3592 + t3596;
  t3621 = t3246*t3549;
  t3622 = -1.*t3276*t3584;
  t3625 = t3621 + t3622;
  t3676 = t1209*t3503;
  t3680 = t3506*t3001*t3065;
  t3684 = t3676 + t3680;
  t3689 = t3506*t1037*t2979;
  t3690 = t3011*t3684;
  t3694 = t3689 + t3690;
  t3696 = t3011*t3506*t1037;
  t3697 = -1.*t2979*t3684;
  t3701 = t3696 + t3697;
  t3656 = -1.*t3506*t1209*t3001;
  t3660 = t3503*t3065;
  t3668 = t3656 + t3660;
  t3717 = t3069*t3694;
  t3718 = t3149*t3701;
  t3719 = t3717 + t3718;
  t3703 = -1.*t3149*t3694;
  t3707 = t3069*t3701;
  t3711 = t3703 + t3707;
  t3751 = t1210*t3668;
  t3755 = t2925*t3719;
  t3756 = t3751 + t3755;
  t3759 = t3276*t3711;
  t3760 = t3246*t3756;
  t3761 = t3759 + t3760;
  t3763 = t3246*t3711;
  t3764 = -1.*t3276*t3756;
  t3765 = t3763 + t3764;
  p_output1[0]=0. + t1037*t1209*t2950 + t2995*t3001 - 1.*t1037*t3061*t3065 + t3082*t3097 + t3177*t3224 + t3278*t3288 + t3316*t3327 - 0.1305*(-1.*t1037*t1209*t2925 + t1210*t3327) + t3381*t3384 + t3435*t3450 + t3465*t3472 - 0.2707*(-1.*t3433*t3450 + t3400*t3472) - 0.0016*(t3400*t3450 + t3433*t3472) + var1[0];
  p_output1[1]=0. - 1.*t1037*t2995*t3503 + t2950*t3508 + t3061*t3521 + t3082*t3530 + t3177*t3536 + t3278*t3549 + t3316*t3555 - 0.1305*(-1.*t2925*t3508 + t1210*t3555) + t3381*t3584 + t3435*t3600 + t3465*t3625 - 0.2707*(-1.*t3433*t3600 + t3400*t3625) - 0.0016*(t3400*t3600 + t3433*t3625) + var1[1];
  p_output1[2]=0. + t1037*t2995*t3506 + t2950*t3668 + t3061*t3684 + t3082*t3694 + t3177*t3701 + t3278*t3711 + t3316*t3719 - 0.1305*(-1.*t2925*t3668 + t1210*t3719) + t3381*t3756 + t3435*t3761 + t3465*t3765 - 0.2707*(-1.*t3433*t3761 + t3400*t3765) - 0.0016*(t3400*t3761 + t3433*t3765) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_fixed_knee_to_shin_right.hh"

namespace SymExpression
{

void p_fixed_knee_to_shin_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
