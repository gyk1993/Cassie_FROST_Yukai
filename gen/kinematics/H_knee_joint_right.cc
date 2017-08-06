/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:20 GMT-04:00
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
  double t2861;
  double t2827;
  double t2869;
  double t483;
  double t2871;
  double t2920;
  double t2855;
  double t2878;
  double t2898;
  double t471;
  double t2923;
  double t2925;
  double t2931;
  double t461;
  double t2966;
  double t3015;
  double t3036;
  double t3038;
  double t3040;
  double t3041;
  double t2959;
  double t2961;
  double t2983;
  double t3034;
  double t3044;
  double t3046;
  double t3049;
  double t3056;
  double t3058;
  double t3112;
  double t3149;
  double t3156;
  double t3097;
  double t3159;
  double t3168;
  double t3177;
  double t3193;
  double t3201;
  double t2911;
  double t2950;
  double t2953;
  double t2979;
  double t2985;
  double t2995;
  double t2998;
  double t3001;
  double t3002;
  double t3048;
  double t3061;
  double t3064;
  double t3066;
  double t3069;
  double t3070;
  double t3072;
  double t3074;
  double t3077;
  double t3081;
  double t3082;
  double t3086;
  double t3176;
  double t3218;
  double t3220;
  double t3228;
  double t3233;
  double t3234;
  double t3246;
  double t3250;
  double t3266;
  double t3272;
  double t3273;
  double t3275;
  double t3379;
  double t3380;
  double t3444;
  double t3447;
  double t3278;
  double t3279;
  double t3284;
  double t3385;
  double t3396;
  double t3381;
  double t3382;
  double t3383;
  double t3404;
  double t3408;
  double t3412;
  double t3420;
  double t3428;
  double t3429;
  double t3430;
  double t3433;
  double t3435;
  double t3436;
  double t3450;
  double t3453;
  double t3457;
  double t3465;
  double t3469;
  double t3470;
  double t3478;
  double t3481;
  double t3488;
  double t3288;
  double t3292;
  double t3300;
  double t3304;
  double t3316;
  double t3320;
  t2861 = Cos(var1[14]);
  t2827 = Sin(var1[4]);
  t2869 = Cos(var1[4]);
  t483 = Sin(var1[14]);
  t2871 = Sin(var1[5]);
  t2920 = Cos(var1[15]);
  t2855 = t483*t2827;
  t2878 = -1.*t2861*t2869*t2871;
  t2898 = t2855 + t2878;
  t471 = Sin(var1[15]);
  t2923 = t2861*t2827;
  t2925 = t2869*t483*t2871;
  t2931 = t2923 + t2925;
  t461 = Cos(var1[17]);
  t2966 = Cos(var1[5]);
  t3015 = Sin(var1[3]);
  t3036 = Cos(var1[3]);
  t3038 = t3036*t2966;
  t3040 = -1.*t3015*t2827*t2871;
  t3041 = t3038 + t3040;
  t2959 = Sin(var1[17]);
  t2961 = Cos(var1[16]);
  t2983 = Sin(var1[16]);
  t3034 = -1.*t2869*t483*t3015;
  t3044 = t2861*t3041;
  t3046 = t3034 + t3044;
  t3049 = -1.*t2861*t2869*t3015;
  t3056 = -1.*t483*t3041;
  t3058 = t3049 + t3056;
  t3112 = t2966*t3015;
  t3149 = t3036*t2827*t2871;
  t3156 = t3112 + t3149;
  t3097 = t3036*t2869*t483;
  t3159 = t2861*t3156;
  t3168 = t3097 + t3159;
  t3177 = t2861*t3036*t2869;
  t3193 = -1.*t483*t3156;
  t3201 = t3177 + t3193;
  t2911 = -1.*t471*t2898;
  t2950 = t2920*t2931;
  t2953 = t2911 + t2950;
  t2979 = t2961*t2869*t2966;
  t2985 = t2920*t2898;
  t2995 = t471*t2931;
  t2998 = t2985 + t2995;
  t3001 = t2983*t2998;
  t3002 = t2979 + t3001;
  t3048 = -1.*t471*t3046;
  t3061 = t2920*t3058;
  t3064 = t3048 + t3061;
  t3066 = t2966*t3015*t2827;
  t3069 = t3036*t2871;
  t3070 = t3066 + t3069;
  t3072 = t2961*t3070;
  t3074 = t2920*t3046;
  t3077 = t471*t3058;
  t3081 = t3074 + t3077;
  t3082 = t2983*t3081;
  t3086 = t3072 + t3082;
  t3176 = -1.*t471*t3168;
  t3218 = t2920*t3201;
  t3220 = t3176 + t3218;
  t3228 = -1.*t3036*t2966*t2827;
  t3233 = t3015*t2871;
  t3234 = t3228 + t3233;
  t3246 = t2961*t3234;
  t3250 = t2920*t3168;
  t3266 = t471*t3201;
  t3272 = t3250 + t3266;
  t3273 = t2983*t3272;
  t3275 = t3246 + t3273;
  t3379 = -1.*t2961;
  t3380 = 1. + t3379;
  t3444 = -1.*t461;
  t3447 = 1. + t3444;
  t3278 = t2959*t2953;
  t3279 = t461*t3002;
  t3284 = t3278 + t3279;
  t3385 = 0.135*t483;
  t3396 = 0. + t3385;
  t3381 = -0.049*t3380;
  t3382 = -0.135*t2983;
  t3383 = 0. + t3381 + t3382;
  t3404 = -1.*t2861;
  t3408 = 1. + t3404;
  t3412 = -0.135*t3408;
  t3420 = 0. + t3412;
  t3428 = -1.*t2920;
  t3429 = 1. + t3428;
  t3430 = -0.135*t3429;
  t3433 = 0. + t3430;
  t3435 = 0.135*t471;
  t3436 = 0. + t3435;
  t3450 = -0.09*t3447;
  t3453 = 0.049*t2959;
  t3457 = 0. + t3450 + t3453;
  t3465 = -0.135*t3380;
  t3469 = 0.049*t2983;
  t3470 = 0. + t3465 + t3469;
  t3478 = -0.049*t3447;
  t3481 = -0.09*t2959;
  t3488 = 0. + t3478 + t3481;
  t3288 = t2959*t3064;
  t3292 = t461*t3086;
  t3300 = t3288 + t3292;
  t3304 = t2959*t3220;
  t3316 = t461*t3275;
  t3320 = t3304 + t3316;
  p_output1[0]=t2959*t3002 - 1.*t2953*t461;
  p_output1[1]=t2959*t3086 - 1.*t3064*t461;
  p_output1[2]=t2959*t3275 - 1.*t3220*t461;
  p_output1[3]=0.;
  p_output1[4]=t3284;
  p_output1[5]=t3300;
  p_output1[6]=t3320;
  p_output1[7]=0.;
  p_output1[8]=t2869*t2966*t2983 - 1.*t2961*t2998;
  p_output1[9]=t2983*t3070 - 1.*t2961*t3081;
  p_output1[10]=t2983*t3234 - 1.*t2961*t3272;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(-1.*t2869*t2966*t2983 + t2961*t2998) - 0.049*t3284 + t2869*t2966*t3383 + t2827*t3396 - 1.*t2869*t2871*t3420 + t2898*t3433 + t2931*t3436 + t2953*t3457 + t2998*t3470 + t3002*t3488 - 0.21*(-1.*t2959*t3002 + t2953*t461) + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t2983*t3070 + t2961*t3081) - 0.049*t3300 + t3070*t3383 - 1.*t2869*t3015*t3396 + t3041*t3420 + t3046*t3433 + t3058*t3436 + t3064*t3457 + t3081*t3470 + t3086*t3488 - 0.21*(-1.*t2959*t3086 + t3064*t461) + var1[1];
  p_output1[14]=0. - 0.1305*(-1.*t2983*t3234 + t2961*t3272) - 0.049*t3320 + t3234*t3383 + t2869*t3036*t3396 + t3156*t3420 + t3168*t3433 + t3201*t3436 + t3220*t3457 + t3272*t3470 + t3275*t3488 - 0.21*(-1.*t2959*t3275 + t3220*t461) + var1[2];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "H_knee_joint_right.hh"

namespace SymExpression
{

void H_knee_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
