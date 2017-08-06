/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:06 GMT-04:00
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
  double t95;
  double t132;
  double t160;
  double t168;
  double t173;
  double t113;
  double t136;
  double t144;
  double t145;
  double t158;
  double t238;
  double t222;
  double t175;
  double t191;
  double t246;
  double t247;
  double t251;
  double t309;
  double t312;
  double t315;
  t95 = Cos(var1[4]);
  t132 = Cos(var1[6]);
  t160 = Sin(var1[5]);
  t168 = Sin(var1[4]);
  t173 = Sin(var1[6]);
  t113 = Cos(var1[5]);
  t136 = -1.*t132;
  t144 = 1. + t136;
  t145 = 0.135*t144;
  t158 = 0. + t145;
  t238 = Cos(var1[3]);
  t222 = Sin(var1[3]);
  t175 = -0.135*t173;
  t191 = 0. + t175;
  t246 = t238*t113;
  t247 = -1.*t222*t168*t160;
  t251 = t246 + t247;
  t309 = t113*t222;
  t312 = t238*t168*t160;
  t315 = t309 + t312;
  p_output1[0]=0. + t168*t191 - 0.049*t113*t95 - 1.*t158*t160*t95 + 0.135*(t168*t173 - 1.*t132*t160*t95) + var1[0];
  p_output1[1]=0. - 0.049*(t113*t168*t222 + t160*t238) + t158*t251 - 1.*t191*t222*t95 + 0.135*(t132*t251 - 1.*t173*t222*t95) + var1[1];
  p_output1[2]=0. - 0.049*(t160*t222 - 1.*t113*t168*t238) + t158*t315 + t191*t238*t95 + 0.135*(t132*t315 + t173*t238*t95) + var1[2];
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

#include "p_hip_abduction_left.hh"

namespace SymExpression
{

void p_hip_abduction_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
