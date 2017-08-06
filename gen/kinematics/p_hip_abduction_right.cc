/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:16 GMT-04:00
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
  double t301;
  double t1985;
  double t2116;
  double t2168;
  double t2224;
  double t2059;
  double t2098;
  double t1318;
  double t2353;
  double t2174;
  double t2179;
  double t2181;
  double t2182;
  double t2370;
  double t2388;
  double t2396;
  double t2400;
  double t2466;
  double t2477;
  double t2481;
  t301 = Cos(var1[4]);
  t1985 = Sin(var1[14]);
  t2116 = Sin(var1[4]);
  t2168 = Cos(var1[14]);
  t2224 = Sin(var1[5]);
  t2059 = 0.135*t1985;
  t2098 = 0. + t2059;
  t1318 = Cos(var1[5]);
  t2353 = Sin(var1[3]);
  t2174 = -1.*t2168;
  t2179 = 1. + t2174;
  t2181 = -0.135*t2179;
  t2182 = 0. + t2181;
  t2370 = Cos(var1[3]);
  t2388 = t2370*t1318;
  t2396 = -1.*t2353*t2116*t2224;
  t2400 = t2388 + t2396;
  t2466 = t1318*t2353;
  t2477 = t2370*t2116*t2224;
  t2481 = t2466 + t2477;
  p_output1[0]=0. + t2098*t2116 - 0.049*t1318*t301 - 1.*t2182*t2224*t301 - 0.135*(t1985*t2116 - 1.*t2168*t2224*t301) + var1[0];
  p_output1[1]=0. - 0.049*(t1318*t2116*t2353 + t2224*t2370) + t2182*t2400 - 1.*t2098*t2353*t301 - 0.135*(t2168*t2400 - 1.*t1985*t2353*t301) + var1[1];
  p_output1[2]=0. - 0.049*(t2224*t2353 - 1.*t1318*t2116*t2370) + t2182*t2481 + t2098*t2370*t301 - 0.135*(t2168*t2481 + t1985*t2370*t301) + var1[2];
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
