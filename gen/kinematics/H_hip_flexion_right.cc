/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:19 GMT-04:00
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
  double t2660;
  double t2610;
  double t2701;
  double t2591;
  double t2762;
  double t2536;
  double t2833;
  double t2806;
  double t2840;
  double t2846;
  double t2850;
  double t2852;
  double t2854;
  double t2873;
  double t2876;
  double t2877;
  double t2634;
  double t2786;
  double t2802;
  double t2812;
  double t2821;
  double t2824;
  double t2900;
  double t2909;
  double t2835;
  double t2855;
  double t2856;
  double t2865;
  double t2866;
  double t2867;
  double t2871;
  double t2878;
  double t2881;
  double t2885;
  double t2888;
  double t2890;
  double t2910;
  double t2911;
  double t2913;
  double t2918;
  double t2920;
  double t2922;
  double t2925;
  double t2926;
  double t2927;
  double t2933;
  double t2934;
  double t2937;
  double t2953;
  double t2954;
  double t2958;
  double t2990;
  double t2993;
  double t2907;
  double t2915;
  double t2916;
  double t3002;
  double t3003;
  double t2995;
  double t2997;
  double t2998;
  double t3009;
  double t3010;
  double t3011;
  double t3014;
  double t3028;
  double t3030;
  double t3033;
  double t3034;
  double t3038;
  double t3040;
  double t3056;
  double t3057;
  double t3058;
  double t2923;
  double t2929;
  double t2931;
  double t2950;
  double t2959;
  double t2961;
  t2660 = Cos(var1[14]);
  t2610 = Sin(var1[4]);
  t2701 = Cos(var1[4]);
  t2591 = Sin(var1[14]);
  t2762 = Sin(var1[5]);
  t2536 = Sin(var1[15]);
  t2833 = Sin(var1[3]);
  t2806 = Cos(var1[15]);
  t2840 = Cos(var1[3]);
  t2846 = Cos(var1[5]);
  t2850 = t2840*t2846;
  t2852 = -1.*t2833*t2610*t2762;
  t2854 = t2850 + t2852;
  t2873 = t2846*t2833;
  t2876 = t2840*t2610*t2762;
  t2877 = t2873 + t2876;
  t2634 = t2591*t2610;
  t2786 = -1.*t2660*t2701*t2762;
  t2802 = t2634 + t2786;
  t2812 = t2660*t2610;
  t2821 = t2701*t2591*t2762;
  t2824 = t2812 + t2821;
  t2900 = Cos(var1[16]);
  t2909 = Sin(var1[16]);
  t2835 = -1.*t2701*t2591*t2833;
  t2855 = t2660*t2854;
  t2856 = t2835 + t2855;
  t2865 = -1.*t2660*t2701*t2833;
  t2866 = -1.*t2591*t2854;
  t2867 = t2865 + t2866;
  t2871 = t2840*t2701*t2591;
  t2878 = t2660*t2877;
  t2881 = t2871 + t2878;
  t2885 = t2660*t2840*t2701;
  t2888 = -1.*t2591*t2877;
  t2890 = t2885 + t2888;
  t2910 = t2806*t2802;
  t2911 = t2536*t2824;
  t2913 = t2910 + t2911;
  t2918 = t2846*t2833*t2610;
  t2920 = t2840*t2762;
  t2922 = t2918 + t2920;
  t2925 = t2806*t2856;
  t2926 = t2536*t2867;
  t2927 = t2925 + t2926;
  t2933 = -1.*t2840*t2846*t2610;
  t2934 = t2833*t2762;
  t2937 = t2933 + t2934;
  t2953 = t2806*t2881;
  t2954 = t2536*t2890;
  t2958 = t2953 + t2954;
  t2990 = -1.*t2900;
  t2993 = 1. + t2990;
  t2907 = t2900*t2701*t2846;
  t2915 = t2909*t2913;
  t2916 = t2907 + t2915;
  t3002 = 0.135*t2591;
  t3003 = 0. + t3002;
  t2995 = -0.049*t2993;
  t2997 = -0.135*t2909;
  t2998 = 0. + t2995 + t2997;
  t3009 = -1.*t2660;
  t3010 = 1. + t3009;
  t3011 = -0.135*t3010;
  t3014 = 0. + t3011;
  t3028 = -1.*t2806;
  t3030 = 1. + t3028;
  t3033 = -0.135*t3030;
  t3034 = 0. + t3033;
  t3038 = 0.135*t2536;
  t3040 = 0. + t3038;
  t3056 = -0.135*t2993;
  t3057 = 0.049*t2909;
  t3058 = 0. + t3056 + t3057;
  t2923 = t2900*t2922;
  t2929 = t2909*t2927;
  t2931 = t2923 + t2929;
  t2950 = t2900*t2937;
  t2959 = t2909*t2958;
  t2961 = t2950 + t2959;
  p_output1[0]=t2536*t2802 - 1.*t2806*t2824;
  p_output1[1]=t2536*t2856 - 1.*t2806*t2867;
  p_output1[2]=t2536*t2881 - 1.*t2806*t2890;
  p_output1[3]=0.;
  p_output1[4]=t2916;
  p_output1[5]=t2931;
  p_output1[6]=t2961;
  p_output1[7]=0.;
  p_output1[8]=t2701*t2846*t2909 - 1.*t2900*t2913;
  p_output1[9]=t2909*t2922 - 1.*t2900*t2927;
  p_output1[10]=t2909*t2937 - 1.*t2900*t2958;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(-1.*t2536*t2802 + t2806*t2824) - 0.135*(-1.*t2701*t2846*t2909 + t2900*t2913) - 0.049*t2916 + t2701*t2846*t2998 + t2610*t3003 - 1.*t2701*t2762*t3014 + t2802*t3034 + t2824*t3040 + t2913*t3058 + var1[0];
  p_output1[13]=0. - 0.09*(-1.*t2536*t2856 + t2806*t2867) - 0.135*(-1.*t2909*t2922 + t2900*t2927) - 0.049*t2931 + t2922*t2998 - 1.*t2701*t2833*t3003 + t2854*t3014 + t2856*t3034 + t2867*t3040 + t2927*t3058 + var1[1];
  p_output1[14]=0. - 0.09*(-1.*t2536*t2881 + t2806*t2890) - 0.135*(-1.*t2909*t2937 + t2900*t2958) - 0.049*t2961 + t2937*t2998 + t2701*t2840*t3003 + t2877*t3014 + t2881*t3034 + t2890*t3040 + t2958*t3058 + var1[2];
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

#include "H_hip_flexion_right.hh"

namespace SymExpression
{

void H_hip_flexion_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
