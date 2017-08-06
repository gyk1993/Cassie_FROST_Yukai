/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:18 GMT-04:00
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
  double t584;
  double t2641;
  double t2683;
  double t2718;
  double t2778;
  double t2817;
  double t2806;
  double t2808;
  double t2810;
  double t2791;
  double t2825;
  double t2827;
  double t2831;
  double t2435;
  double t2524;
  double t2531;
  double t2590;
  double t586;
  double t2856;
  double t2861;
  double t2863;
  double t2660;
  double t2670;
  double t2536;
  double t2591;
  double t2610;
  double t2879;
  double t2730;
  double t2758;
  double t2762;
  double t2777;
  double t2884;
  double t2792;
  double t2794;
  double t2802;
  double t2804;
  double t2890;
  double t2891;
  double t2892;
  double t2821;
  double t2824;
  double t2896;
  double t2898;
  double t2899;
  double t2902;
  double t2904;
  double t2905;
  double t2852;
  double t2854;
  double t2855;
  double t2883;
  double t2885;
  double t2886;
  double t2915;
  double t2916;
  double t2917;
  double t2953;
  double t2954;
  double t2955;
  double t2959;
  double t2961;
  double t2963;
  double t2967;
  double t2969;
  double t2971;
  double t2936;
  double t2937;
  double t2938;
  double t2985;
  double t2987;
  double t2989;
  t584 = Cos(var1[4]);
  t2641 = Sin(var1[14]);
  t2683 = Sin(var1[4]);
  t2718 = Cos(var1[14]);
  t2778 = Sin(var1[5]);
  t2817 = Sin(var1[15]);
  t2806 = t2641*t2683;
  t2808 = -1.*t2718*t584*t2778;
  t2810 = t2806 + t2808;
  t2791 = Cos(var1[15]);
  t2825 = t2718*t2683;
  t2827 = t584*t2641*t2778;
  t2831 = t2825 + t2827;
  t2435 = Cos(var1[16]);
  t2524 = -1.*t2435;
  t2531 = 1. + t2524;
  t2590 = Sin(var1[16]);
  t586 = Cos(var1[5]);
  t2856 = t2791*t2810;
  t2861 = t2817*t2831;
  t2863 = t2856 + t2861;
  t2660 = 0.135*t2641;
  t2670 = 0. + t2660;
  t2536 = -0.049*t2531;
  t2591 = -0.135*t2590;
  t2610 = 0. + t2536 + t2591;
  t2879 = Sin(var1[3]);
  t2730 = -1.*t2718;
  t2758 = 1. + t2730;
  t2762 = -0.135*t2758;
  t2777 = 0. + t2762;
  t2884 = Cos(var1[3]);
  t2792 = -1.*t2791;
  t2794 = 1. + t2792;
  t2802 = -0.135*t2794;
  t2804 = 0. + t2802;
  t2890 = t2884*t586;
  t2891 = -1.*t2879*t2683*t2778;
  t2892 = t2890 + t2891;
  t2821 = 0.135*t2817;
  t2824 = 0. + t2821;
  t2896 = -1.*t584*t2641*t2879;
  t2898 = t2718*t2892;
  t2899 = t2896 + t2898;
  t2902 = -1.*t2718*t584*t2879;
  t2904 = -1.*t2641*t2892;
  t2905 = t2902 + t2904;
  t2852 = -0.135*t2531;
  t2854 = 0.049*t2590;
  t2855 = 0. + t2852 + t2854;
  t2883 = t586*t2879*t2683;
  t2885 = t2884*t2778;
  t2886 = t2883 + t2885;
  t2915 = t2791*t2899;
  t2916 = t2817*t2905;
  t2917 = t2915 + t2916;
  t2953 = t586*t2879;
  t2954 = t2884*t2683*t2778;
  t2955 = t2953 + t2954;
  t2959 = t2884*t584*t2641;
  t2961 = t2718*t2955;
  t2963 = t2959 + t2961;
  t2967 = t2718*t2884*t584;
  t2969 = -1.*t2641*t2955;
  t2971 = t2967 + t2969;
  t2936 = -1.*t2884*t586*t2683;
  t2937 = t2879*t2778;
  t2938 = t2936 + t2937;
  t2985 = t2791*t2963;
  t2987 = t2817*t2971;
  t2989 = t2985 + t2987;
  p_output1[0]=0. + t2670*t2683 + t2804*t2810 + t2824*t2831 - 0.09*(-1.*t2810*t2817 + t2791*t2831) + t2855*t2863 - 1.*t2777*t2778*t584 + t2610*t584*t586 - 0.049*(t2590*t2863 + t2435*t584*t586) - 0.135*(t2435*t2863 - 1.*t2590*t584*t586) + var1[0];
  p_output1[1]=0. + t2610*t2886 + t2777*t2892 + t2804*t2899 + t2824*t2905 - 0.09*(-1.*t2817*t2899 + t2791*t2905) + t2855*t2917 - 0.135*(-1.*t2590*t2886 + t2435*t2917) - 0.049*(t2435*t2886 + t2590*t2917) - 1.*t2670*t2879*t584 + var1[1];
  p_output1[2]=0. + t2610*t2938 + t2777*t2955 + t2804*t2963 + t2824*t2971 - 0.09*(-1.*t2817*t2963 + t2791*t2971) + t2855*t2989 - 0.135*(-1.*t2590*t2938 + t2435*t2989) - 0.049*(t2435*t2938 + t2590*t2989) + t2670*t2884*t584 + var1[2];
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

#include "p_hip_flexion_right.hh"

namespace SymExpression
{

void p_hip_flexion_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
