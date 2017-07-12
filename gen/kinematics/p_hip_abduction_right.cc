/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:07 GMT-04:00
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
  double t531;
  double t613;
  double t627;
  double t644;
  double t672;
  double t620;
  double t624;
  double t584;
  double t691;
  double t654;
  double t655;
  double t662;
  double t666;
  double t701;
  double t710;
  double t713;
  double t715;
  double t739;
  double t741;
  double t744;
  t531 = Cos(var1[4]);
  t613 = Sin(var1[14]);
  t627 = Sin(var1[4]);
  t644 = Cos(var1[14]);
  t672 = Sin(var1[5]);
  t620 = 0.135*t613;
  t624 = 0. + t620;
  t584 = Cos(var1[5]);
  t691 = Sin(var1[3]);
  t654 = -1.*t644;
  t655 = 1. + t654;
  t662 = -0.135*t655;
  t666 = 0. + t662;
  t701 = Cos(var1[3]);
  t710 = t701*t584;
  t713 = -1.*t691*t627*t672;
  t715 = t710 + t713;
  t739 = t584*t691;
  t741 = t701*t627*t672;
  t744 = t739 + t741;
  p_output1[0]=0. - 0.049*t531*t584 + t624*t627 - 1.*t531*t666*t672 - 0.135*(t613*t627 - 1.*t531*t644*t672) + var1[0];
  p_output1[1]=0. - 1.*t531*t624*t691 - 0.049*(t584*t627*t691 + t672*t701) + t666*t715 - 0.135*(-1.*t531*t613*t691 + t644*t715) + var1[1];
  p_output1[2]=0. + t531*t624*t701 - 0.049*(t672*t691 - 1.*t584*t627*t701) + t666*t744 - 0.135*(t531*t613*t701 + t644*t744) + var1[2];
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

#include "p_hip_abduction_right.hh"

namespace SymExpression
{

void p_hip_abduction_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
