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
  double t2456;
  double t2377;
  double t2483;
  double t2268;
  double t2489;
  double t2144;
  double t2592;
  double t2526;
  double t2598;
  double t2603;
  double t2610;
  double t2614;
  double t2629;
  double t2701;
  double t2718;
  double t2725;
  double t2435;
  double t2493;
  double t2512;
  double t2531;
  double t2536;
  double t2578;
  double t2594;
  double t2634;
  double t2636;
  double t2646;
  double t2649;
  double t2650;
  double t2683;
  double t2730;
  double t2742;
  double t2762;
  double t2769;
  double t2773;
  double t2833;
  double t2834;
  double t2791;
  double t2792;
  double t2794;
  double t2837;
  double t2839;
  double t2840;
  double t2842;
  double t2848;
  double t2849;
  double t2850;
  double t2852;
  double t2855;
  double t2856;
  double t2799;
  double t2802;
  double t2804;
  t2456 = Cos(var1[14]);
  t2377 = Sin(var1[4]);
  t2483 = Cos(var1[4]);
  t2268 = Sin(var1[14]);
  t2489 = Sin(var1[5]);
  t2144 = Sin(var1[15]);
  t2592 = Sin(var1[3]);
  t2526 = Cos(var1[15]);
  t2598 = Cos(var1[3]);
  t2603 = Cos(var1[5]);
  t2610 = t2598*t2603;
  t2614 = -1.*t2592*t2377*t2489;
  t2629 = t2610 + t2614;
  t2701 = t2603*t2592;
  t2718 = t2598*t2377*t2489;
  t2725 = t2701 + t2718;
  t2435 = t2268*t2377;
  t2493 = -1.*t2456*t2483*t2489;
  t2512 = t2435 + t2493;
  t2531 = t2456*t2377;
  t2536 = t2483*t2268*t2489;
  t2578 = t2531 + t2536;
  t2594 = -1.*t2483*t2268*t2592;
  t2634 = t2456*t2629;
  t2636 = t2594 + t2634;
  t2646 = -1.*t2456*t2483*t2592;
  t2649 = -1.*t2268*t2629;
  t2650 = t2646 + t2649;
  t2683 = t2598*t2483*t2268;
  t2730 = t2456*t2725;
  t2742 = t2683 + t2730;
  t2762 = t2456*t2598*t2483;
  t2769 = -1.*t2268*t2725;
  t2773 = t2762 + t2769;
  t2833 = 0.135*t2268;
  t2834 = 0. + t2833;
  t2791 = t2603*t2592*t2377;
  t2792 = t2598*t2489;
  t2794 = t2791 + t2792;
  t2837 = -1.*t2456;
  t2839 = 1. + t2837;
  t2840 = -0.135*t2839;
  t2842 = 0. + t2840;
  t2848 = -1.*t2526;
  t2849 = 1. + t2848;
  t2850 = -0.135*t2849;
  t2852 = 0. + t2850;
  t2855 = 0.135*t2144;
  t2856 = 0. + t2855;
  t2799 = -1.*t2598*t2603*t2377;
  t2802 = t2592*t2489;
  t2804 = t2799 + t2802;
  p_output1[0]=t2144*t2512 - 1.*t2526*t2578;
  p_output1[1]=t2144*t2636 - 1.*t2526*t2650;
  p_output1[2]=t2144*t2742 - 1.*t2526*t2773;
  p_output1[3]=0.;
  p_output1[4]=t2483*t2603;
  p_output1[5]=t2794;
  p_output1[6]=t2804;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2512*t2526 - 1.*t2144*t2578;
  p_output1[9]=-1.*t2526*t2636 - 1.*t2144*t2650;
  p_output1[10]=-1.*t2526*t2742 - 1.*t2144*t2773;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*(t2512*t2526 + t2144*t2578) - 0.09*(-1.*t2144*t2512 + t2526*t2578) - 0.049*t2483*t2603 + t2377*t2834 - 1.*t2483*t2489*t2842 + t2512*t2852 + t2578*t2856 + var1[0];
  p_output1[13]=0. - 0.135*(t2526*t2636 + t2144*t2650) - 0.09*(-1.*t2144*t2636 + t2526*t2650) - 0.049*t2794 - 1.*t2483*t2592*t2834 + t2629*t2842 + t2636*t2852 + t2650*t2856 + var1[1];
  p_output1[14]=0. - 0.135*(t2526*t2742 + t2144*t2773) - 0.09*(-1.*t2144*t2742 + t2526*t2773) - 0.049*t2804 + t2483*t2598*t2834 + t2725*t2842 + t2742*t2852 + t2773*t2856 + var1[2];
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

#include "H_hip_rotation_right.hh"

namespace SymExpression
{

void H_hip_rotation_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
