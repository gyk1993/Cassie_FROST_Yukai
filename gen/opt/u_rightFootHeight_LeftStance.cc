/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:11:00 GMT-04:00
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
  double t1166;
  double t2289;
  double t2467;
  double t2339;
  double t2515;
  double t1508;
  double t1538;
  double t2913;
  double t2950;
  double t3006;
  double t3018;
  double t3129;
  double t3054;
  double t3063;
  double t3065;
  double t3048;
  double t3177;
  double t3204;
  double t3256;
  double t1940;
  double t2077;
  double t2187;
  double t2207;
  double t2418;
  double t2586;
  double t2688;
  double t3812;
  double t3814;
  double t3833;
  double t3264;
  double t3284;
  double t3290;
  double t3398;
  double t3573;
  double t3628;
  double t3679;
  double t4075;
  double t4103;
  double t4113;
  double t4126;
  double t4127;
  double t4180;
  double t4243;
  double t4547;
  double t4661;
  double t4727;
  double t4821;
  double t4831;
  double t4833;
  double t4852;
  double t4967;
  double t5197;
  double t5214;
  double t5278;
  double t5556;
  double t5595;
  double t5628;
  double t5639;
  double t5662;
  double t5671;
  double t5730;
  double t5761;
  double t5796;
  double t5804;
  double t5948;
  double t6053;
  double t6133;
  double t6217;
  double t6262;
  double t6315;
  double t6392;
  double t6434;
  double t6453;
  double t6455;
  double t6497;
  double t6506;
  double t6510;
  t1166 = Cos(var1[3]);
  t2289 = Cos(var1[5]);
  t2467 = Sin(var1[3]);
  t2339 = Sin(var1[4]);
  t2515 = Sin(var1[5]);
  t1508 = Cos(var1[4]);
  t1538 = Sin(var1[14]);
  t2913 = Cos(var1[14]);
  t2950 = t2289*t2467;
  t3006 = t1166*t2339*t2515;
  t3018 = t2950 + t3006;
  t3129 = Sin(var1[15]);
  t3054 = t1166*t1508*t1538;
  t3063 = t2913*t3018;
  t3065 = t3054 + t3063;
  t3048 = Cos(var1[15]);
  t3177 = t2913*t1166*t1508;
  t3204 = -1.*t1538*t3018;
  t3256 = t3177 + t3204;
  t1940 = Cos(var1[16]);
  t2077 = -1.*t1940;
  t2187 = 1. + t2077;
  t2207 = Sin(var1[16]);
  t2418 = -1.*t1166*t2289*t2339;
  t2586 = t2467*t2515;
  t2688 = t2418 + t2586;
  t3812 = t3048*t3065;
  t3814 = t3129*t3256;
  t3833 = t3812 + t3814;
  t3264 = Cos(var1[17]);
  t3284 = -1.*t3264;
  t3290 = 1. + t3284;
  t3398 = Sin(var1[17]);
  t3573 = -1.*t3129*t3065;
  t3628 = t3048*t3256;
  t3679 = t3573 + t3628;
  t4075 = t1940*t2688;
  t4103 = -1.*t2207*t3833;
  t4113 = t4075 + t4103;
  t4126 = Cos(var1[18]);
  t4127 = -1.*t4126;
  t4180 = 1. + t4127;
  t4243 = Sin(var1[18]);
  t4547 = t3398*t3679;
  t4661 = t3264*t4113;
  t4727 = t4547 + t4661;
  t4821 = t3264*t3679;
  t4831 = -1.*t3398*t4113;
  t4833 = t4821 + t4831;
  t4852 = Cos(var1[19]);
  t4967 = Sin(var1[19]);
  t5197 = -1.*t4243*t4727;
  t5214 = t4126*t4833;
  t5278 = t5197 + t5214;
  t5556 = t4126*t4727;
  t5595 = t4243*t4833;
  t5628 = t5556 + t5595;
  t5639 = Cos(var1[20]);
  t5662 = -1.*t5639;
  t5671 = 1. + t5662;
  t5730 = Sin(var1[20]);
  t5761 = t4967*t5278;
  t5796 = t4852*t5628;
  t5804 = t5761 + t5796;
  t5948 = t4852*t5278;
  t6053 = -1.*t4967*t5628;
  t6133 = t5948 + t6053;
  t6217 = Cos(var1[21]);
  t6262 = -1.*t6217;
  t6315 = 1. + t6262;
  t6392 = Sin(var1[21]);
  t6434 = -1.*t5730*t5804;
  t6453 = t5639*t6133;
  t6455 = t6434 + t6453;
  t6497 = t5639*t5804;
  t6506 = t5730*t6133;
  t6510 = t6497 + t6506;
  p_output1[0]=0.135*t1166*t1508*t1538 + (-0.049*t2187 + 0.135*t2207)*t2688 - 0.135*(1. - 1.*t2913)*t3018 - 0.135*(1. - 1.*t3048)*t3065 + 0.135*t3129*t3256 + (-0.09*t3290 + 0.049*t3398)*t3679 + (-0.135*t2187 - 0.049*t2207)*t3833 - 0.1305*(t2207*t2688 + t1940*t3833) + (-0.049*t3290 - 0.09*t3398)*t4113 + (-0.049*t4180 - 0.21*t4243)*t4727 + (-0.21*t4180 + 0.049*t4243)*t4833 + (-0.2707*(1. - 1.*t4852) + 0.0016*t4967)*t5278 + (0.0016*(-1. + t4852) - 0.2707*t4967)*t5628 + (0.0184*t5671 - 0.7055*t5730)*t5804 + (-0.7055*t5671 - 0.0184*t5730)*t6133 + (-1.1135*t6315 + 0.0216*t6392)*t6455 + (-0.0216*t6315 - 1.1135*t6392)*t6510 + 0.0306*(t6392*t6455 + t6217*t6510) - 1.1312*(t6217*t6455 - 1.*t6392*t6510) + var1[2];
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

#include "u_rightFootHeight_LeftStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void u_rightFootHeight_LeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
