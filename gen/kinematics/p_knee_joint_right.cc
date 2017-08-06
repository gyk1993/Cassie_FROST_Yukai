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
  double t2634;
  double t2870;
  double t2876;
  double t2883;
  double t2910;
  double t2934;
  double t2925;
  double t2926;
  double t2929;
  double t2915;
  double t2954;
  double t2959;
  double t2961;
  double t2812;
  double t2821;
  double t2825;
  double t2850;
  double t2804;
  double t3011;
  double t3015;
  double t3033;
  double t2967;
  double t2973;
  double t2974;
  double t2982;
  double t2987;
  double t2995;
  double t2997;
  double t3049;
  double t3056;
  double t3057;
  double t2871;
  double t2873;
  double t2827;
  double t2855;
  double t2861;
  double t3080;
  double t2885;
  double t2893;
  double t2898;
  double t2907;
  double t3085;
  double t2916;
  double t2918;
  double t2920;
  double t2923;
  double t3092;
  double t3093;
  double t3096;
  double t2950;
  double t2953;
  double t2979;
  double t2983;
  double t2985;
  double t3098;
  double t3112;
  double t3148;
  double t3154;
  double t3155;
  double t3156;
  double t3001;
  double t3002;
  double t3006;
  double t3082;
  double t3086;
  double t3088;
  double t3177;
  double t3193;
  double t3197;
  double t3044;
  double t3046;
  double t3048;
  double t3164;
  double t3168;
  double t3175;
  double t3233;
  double t3234;
  double t3242;
  double t3300;
  double t3304;
  double t3308;
  double t3320;
  double t3324;
  double t3325;
  double t3328;
  double t3329;
  double t3331;
  double t3287;
  double t3288;
  double t3289;
  double t3361;
  double t3365;
  double t3378;
  double t3333;
  double t3337;
  double t3352;
  double t3384;
  double t3385;
  double t3389;
  t2634 = Cos(var1[4]);
  t2870 = Sin(var1[14]);
  t2876 = Sin(var1[4]);
  t2883 = Cos(var1[14]);
  t2910 = Sin(var1[5]);
  t2934 = Sin(var1[15]);
  t2925 = t2870*t2876;
  t2926 = -1.*t2883*t2634*t2910;
  t2929 = t2925 + t2926;
  t2915 = Cos(var1[15]);
  t2954 = t2883*t2876;
  t2959 = t2634*t2870*t2910;
  t2961 = t2954 + t2959;
  t2812 = Cos(var1[16]);
  t2821 = -1.*t2812;
  t2825 = 1. + t2821;
  t2850 = Sin(var1[16]);
  t2804 = Cos(var1[5]);
  t3011 = t2915*t2929;
  t3015 = t2934*t2961;
  t3033 = t3011 + t3015;
  t2967 = Cos(var1[17]);
  t2973 = -1.*t2967;
  t2974 = 1. + t2973;
  t2982 = Sin(var1[17]);
  t2987 = -1.*t2934*t2929;
  t2995 = t2915*t2961;
  t2997 = t2987 + t2995;
  t3049 = t2812*t2634*t2804;
  t3056 = t2850*t3033;
  t3057 = t3049 + t3056;
  t2871 = 0.135*t2870;
  t2873 = 0. + t2871;
  t2827 = -0.049*t2825;
  t2855 = -0.135*t2850;
  t2861 = 0. + t2827 + t2855;
  t3080 = Sin(var1[3]);
  t2885 = -1.*t2883;
  t2893 = 1. + t2885;
  t2898 = -0.135*t2893;
  t2907 = 0. + t2898;
  t3085 = Cos(var1[3]);
  t2916 = -1.*t2915;
  t2918 = 1. + t2916;
  t2920 = -0.135*t2918;
  t2923 = 0. + t2920;
  t3092 = t3085*t2804;
  t3093 = -1.*t3080*t2876*t2910;
  t3096 = t3092 + t3093;
  t2950 = 0.135*t2934;
  t2953 = 0. + t2950;
  t2979 = -0.09*t2974;
  t2983 = 0.049*t2982;
  t2985 = 0. + t2979 + t2983;
  t3098 = -1.*t2634*t2870*t3080;
  t3112 = t2883*t3096;
  t3148 = t3098 + t3112;
  t3154 = -1.*t2883*t2634*t3080;
  t3155 = -1.*t2870*t3096;
  t3156 = t3154 + t3155;
  t3001 = -0.135*t2825;
  t3002 = 0.049*t2850;
  t3006 = 0. + t3001 + t3002;
  t3082 = t2804*t3080*t2876;
  t3086 = t3085*t2910;
  t3088 = t3082 + t3086;
  t3177 = t2915*t3148;
  t3193 = t2934*t3156;
  t3197 = t3177 + t3193;
  t3044 = -0.049*t2974;
  t3046 = -0.09*t2982;
  t3048 = 0. + t3044 + t3046;
  t3164 = -1.*t2934*t3148;
  t3168 = t2915*t3156;
  t3175 = t3164 + t3168;
  t3233 = t2812*t3088;
  t3234 = t2850*t3197;
  t3242 = t3233 + t3234;
  t3300 = t2804*t3080;
  t3304 = t3085*t2876*t2910;
  t3308 = t3300 + t3304;
  t3320 = t3085*t2634*t2870;
  t3324 = t2883*t3308;
  t3325 = t3320 + t3324;
  t3328 = t2883*t3085*t2634;
  t3329 = -1.*t2870*t3308;
  t3331 = t3328 + t3329;
  t3287 = -1.*t3085*t2804*t2876;
  t3288 = t3080*t2910;
  t3289 = t3287 + t3288;
  t3361 = t2915*t3325;
  t3365 = t2934*t3331;
  t3378 = t3361 + t3365;
  t3333 = -1.*t2934*t3325;
  t3337 = t2915*t3331;
  t3352 = t3333 + t3337;
  t3384 = t2812*t3289;
  t3385 = t2850*t3378;
  t3389 = t3384 + t3385;
  p_output1[0]=0. + t2634*t2804*t2861 + t2873*t2876 - 1.*t2634*t2907*t2910 + t2923*t2929 + t2953*t2961 + t2985*t2997 + t3006*t3033 - 0.1305*(-1.*t2634*t2804*t2850 + t2812*t3033) + t3048*t3057 - 0.049*(t2982*t2997 + t2967*t3057) - 0.21*(t2967*t2997 - 1.*t2982*t3057) + var1[0];
  p_output1[1]=0. - 1.*t2634*t2873*t3080 + t2861*t3088 + t2907*t3096 + t2923*t3148 + t2953*t3156 + t2985*t3175 + t3006*t3197 - 0.1305*(-1.*t2850*t3088 + t2812*t3197) + t3048*t3242 - 0.049*(t2982*t3175 + t2967*t3242) - 0.21*(t2967*t3175 - 1.*t2982*t3242) + var1[1];
  p_output1[2]=0. + t2634*t2873*t3085 + t2861*t3289 + t2907*t3308 + t2923*t3325 + t2953*t3331 + t2985*t3352 + t3006*t3378 - 0.1305*(-1.*t2850*t3289 + t2812*t3378) + t3048*t3389 - 0.049*(t2982*t3352 + t2967*t3389) - 0.21*(t2967*t3352 - 1.*t2982*t3389) + var1[2];
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

#include "p_knee_joint_right.hh"

namespace SymExpression
{

void p_knee_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
