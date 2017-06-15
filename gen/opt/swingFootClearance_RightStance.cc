/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:05:19 GMT-04:00
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
  double t3441;
  double t3160;
  double t3373;
  double t3391;
  double t3439;
  double t3467;
  double t3487;
  double t3496;
  double t3513;
  double t3574;
  double t3640;
  double t3678;
  double t4007;
  double t4066;
  double t4068;
  double t3756;
  double t3764;
  double t3843;
  double t4074;
  double t4476;
  double t4520;
  double t4523;
  double t4558;
  double t4613;
  double t4616;
  double t4633;
  double t4402;
  double t4419;
  double t4450;
  double t4168;
  double t4198;
  double t4210;
  double t4255;
  double t4354;
  double t4356;
  double t4382;
  double t4719;
  double t4723;
  double t4726;
  double t4748;
  double t4749;
  double t4750;
  double t4755;
  double t4763;
  double t4780;
  double t4782;
  double t5276;
  double t5281;
  double t5282;
  double t5297;
  double t5352;
  double t5395;
  double t5409;
  double t5421;
  double t5537;
  double t5555;
  double t5580;
  double t5608;
  double t5630;
  double t5633;
  double t5650;
  double t5676;
  double t5695;
  double t5698;
  double t5746;
  double t5751;
  double t5760;
  double t5763;
  double t5768;
  double t5784;
  double t5791;
  double t5818;
  double t5819;
  double t5823;
  double t5861;
  double t5881;
  double t5901;
  t3441 = Cos(var1[3]);
  t3160 = Cos(var1[6]);
  t3373 = Cos(var1[5]);
  t3391 = Sin(var1[3]);
  t3439 = t3373*t3391;
  t3467 = Sin(var1[4]);
  t3487 = Sin(var1[5]);
  t3496 = t3441*t3467*t3487;
  t3513 = t3439 + t3496;
  t3574 = Cos(var1[4]);
  t3640 = Sin(var1[6]);
  t3678 = Cos(var1[7]);
  t4007 = t3441*t3574*t3160;
  t4066 = -1.*t3513*t3640;
  t4068 = t4007 + t4066;
  t3756 = t3160*t3513;
  t3764 = t3441*t3574*t3640;
  t3843 = t3756 + t3764;
  t4074 = Sin(var1[7]);
  t4476 = Cos(var1[8]);
  t4520 = -1.*t4476;
  t4523 = 1. + t4520;
  t4558 = Sin(var1[8]);
  t4613 = t3678*t3843;
  t4616 = t4068*t4074;
  t4633 = t4613 + t4616;
  t4402 = -1.*t3441*t3373*t3467;
  t4419 = t3391*t3487;
  t4450 = t4402 + t4419;
  t4168 = Cos(var1[9]);
  t4198 = -1.*t4168;
  t4210 = 1. + t4198;
  t4255 = Sin(var1[9]);
  t4354 = t3678*t4068;
  t4356 = -1.*t3843*t4074;
  t4382 = t4354 + t4356;
  t4719 = t4476*t4450;
  t4723 = -1.*t4633*t4558;
  t4726 = t4719 + t4723;
  t4748 = Cos(var1[10]);
  t4749 = -1.*t4748;
  t4750 = 1. + t4749;
  t4755 = Sin(var1[10]);
  t4763 = t4255*t4382;
  t4780 = t4168*t4726;
  t4782 = t4763 + t4780;
  t5276 = t4168*t4382;
  t5281 = -1.*t4255*t4726;
  t5282 = t5276 + t5281;
  t5297 = Cos(var1[11]);
  t5352 = Sin(var1[11]);
  t5395 = -1.*t4755*t4782;
  t5409 = t4748*t5282;
  t5421 = t5395 + t5409;
  t5537 = t4748*t4782;
  t5555 = t4755*t5282;
  t5580 = t5537 + t5555;
  t5608 = Cos(var1[12]);
  t5630 = -1.*t5608;
  t5633 = 1. + t5630;
  t5650 = Sin(var1[12]);
  t5676 = t5352*t5421;
  t5695 = t5297*t5580;
  t5698 = t5676 + t5695;
  t5746 = t5297*t5421;
  t5751 = -1.*t5352*t5580;
  t5760 = t5746 + t5751;
  t5763 = Cos(var1[13]);
  t5768 = -1.*t5763;
  t5784 = 1. + t5768;
  t5791 = Sin(var1[13]);
  t5818 = -1.*t5650*t5698;
  t5819 = t5608*t5760;
  t5823 = t5818 + t5819;
  t5861 = t5608*t5698;
  t5881 = t5650*t5760;
  t5901 = t5861 + t5881;
  p_output1[0]=0.135*(1. - 1.*t3160)*t3513 - 0.135*t3441*t3574*t3640 + 0.135*(1. - 1.*t3678)*t3843 - 0.135*t4068*t4074 + (-0.09*t4210 + 0.049*t4255)*t4382 + t4450*(-0.049*t4523 - 0.135*t4558) + (0.135*t4523 - 0.049*t4558)*t4633 + 0.1305*(t4450*t4558 + t4476*t4633) + (-0.049*t4210 - 0.09*t4255)*t4726 + (-0.049*t4750 - 0.21*t4755)*t4782 + (-0.21*t4750 + 0.049*t4755)*t5282 + (-0.2707*(1. - 1.*t5297) + 0.0016*t5352)*t5421 + (0.0016*(-1. + t5297) - 0.2707*t5352)*t5580 + (0.0184*t5633 - 0.7055*t5650)*t5698 + (-0.7055*t5633 - 0.0184*t5650)*t5760 + (-1.1135*t5784 + 0.0216*t5791)*t5823 + (-0.0216*t5784 - 1.1135*t5791)*t5901 + 0.0306*(t5791*t5823 + t5763*t5901) - 1.1312*(t5763*t5823 - 1.*t5791*t5901) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "swingFootClearance_RightStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void swingFootClearance_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
