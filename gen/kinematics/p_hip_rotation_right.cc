/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:17 GMT-04:00
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
  double t459;
  double t2240;
  double t2357;
  double t2380;
  double t2447;
  double t2514;
  double t2493;
  double t2506;
  double t2509;
  double t2464;
  double t2531;
  double t2536;
  double t2563;
  double t2268;
  double t2332;
  double t465;
  double t2631;
  double t2413;
  double t2427;
  double t2435;
  double t2441;
  double t2640;
  double t2477;
  double t2481;
  double t2483;
  double t2489;
  double t2650;
  double t2655;
  double t2657;
  double t2524;
  double t2526;
  double t2664;
  double t2670;
  double t2675;
  double t2688;
  double t2693;
  double t2698;
  double t2799;
  double t2802;
  double t2803;
  double t2806;
  double t2808;
  double t2809;
  double t2812;
  double t2813;
  double t2814;
  t459 = Cos(var1[4]);
  t2240 = Sin(var1[14]);
  t2357 = Sin(var1[4]);
  t2380 = Cos(var1[14]);
  t2447 = Sin(var1[5]);
  t2514 = Sin(var1[15]);
  t2493 = t2240*t2357;
  t2506 = -1.*t2380*t459*t2447;
  t2509 = t2493 + t2506;
  t2464 = Cos(var1[15]);
  t2531 = t2380*t2357;
  t2536 = t459*t2240*t2447;
  t2563 = t2531 + t2536;
  t2268 = 0.135*t2240;
  t2332 = 0. + t2268;
  t465 = Cos(var1[5]);
  t2631 = Sin(var1[3]);
  t2413 = -1.*t2380;
  t2427 = 1. + t2413;
  t2435 = -0.135*t2427;
  t2441 = 0. + t2435;
  t2640 = Cos(var1[3]);
  t2477 = -1.*t2464;
  t2481 = 1. + t2477;
  t2483 = -0.135*t2481;
  t2489 = 0. + t2483;
  t2650 = t2640*t465;
  t2655 = -1.*t2631*t2357*t2447;
  t2657 = t2650 + t2655;
  t2524 = 0.135*t2514;
  t2526 = 0. + t2524;
  t2664 = -1.*t459*t2240*t2631;
  t2670 = t2380*t2657;
  t2675 = t2664 + t2670;
  t2688 = -1.*t2380*t459*t2631;
  t2693 = -1.*t2240*t2657;
  t2698 = t2688 + t2693;
  t2799 = t465*t2631;
  t2802 = t2640*t2357*t2447;
  t2803 = t2799 + t2802;
  t2806 = t2640*t459*t2240;
  t2808 = t2380*t2803;
  t2809 = t2806 + t2808;
  t2812 = t2380*t2640*t459;
  t2813 = -1.*t2240*t2803;
  t2814 = t2812 + t2813;
  p_output1[0]=0. + t2332*t2357 + t2489*t2509 + t2526*t2563 - 0.09*(-1.*t2509*t2514 + t2464*t2563) - 0.135*(t2464*t2509 + t2514*t2563) - 1.*t2441*t2447*t459 - 0.049*t459*t465 + var1[0];
  p_output1[1]=0. + t2441*t2657 + t2489*t2675 + t2526*t2698 - 0.09*(-1.*t2514*t2675 + t2464*t2698) - 0.135*(t2464*t2675 + t2514*t2698) - 1.*t2332*t2631*t459 - 0.049*(t2447*t2640 + t2357*t2631*t465) + var1[1];
  p_output1[2]=0. + t2441*t2803 + t2489*t2809 + t2526*t2814 - 0.09*(-1.*t2514*t2809 + t2464*t2814) - 0.135*(t2464*t2809 + t2514*t2814) + t2332*t2640*t459 - 0.049*(t2447*t2631 - 1.*t2357*t2640*t465) + var1[2];
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

#include "p_hip_rotation_right.hh"

namespace SymExpression
{

void p_hip_rotation_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
