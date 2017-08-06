/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:07 GMT-04:00
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
  double t167;
  double t221;
  double t276;
  double t299;
  double t303;
  double t327;
  double t377;
  double t385;
  double t392;
  double t345;
  double t356;
  double t357;
  double t403;
  double t204;
  double t239;
  double t240;
  double t260;
  double t269;
  double t474;
  double t463;
  double t305;
  double t312;
  double t334;
  double t341;
  double t342;
  double t343;
  double t485;
  double t493;
  double t495;
  double t408;
  double t417;
  double t518;
  double t522;
  double t524;
  double t505;
  double t506;
  double t508;
  double t566;
  double t567;
  double t568;
  double t598;
  double t600;
  double t602;
  double t580;
  double t581;
  double t587;
  t167 = Cos(var1[4]);
  t221 = Cos(var1[6]);
  t276 = Sin(var1[5]);
  t299 = Sin(var1[4]);
  t303 = Sin(var1[6]);
  t327 = Cos(var1[7]);
  t377 = t221*t299;
  t385 = t167*t276*t303;
  t392 = t377 + t385;
  t345 = -1.*t167*t221*t276;
  t356 = t299*t303;
  t357 = t345 + t356;
  t403 = Sin(var1[7]);
  t204 = Cos(var1[5]);
  t239 = -1.*t221;
  t240 = 1. + t239;
  t260 = 0.135*t240;
  t269 = 0. + t260;
  t474 = Cos(var1[3]);
  t463 = Sin(var1[3]);
  t305 = -0.135*t303;
  t312 = 0. + t305;
  t334 = -1.*t327;
  t341 = 1. + t334;
  t342 = 0.135*t341;
  t343 = 0. + t342;
  t485 = t474*t204;
  t493 = -1.*t463*t299*t276;
  t495 = t485 + t493;
  t408 = -0.135*t403;
  t417 = 0. + t408;
  t518 = -1.*t167*t221*t463;
  t522 = -1.*t495*t303;
  t524 = t518 + t522;
  t505 = t221*t495;
  t506 = -1.*t167*t463*t303;
  t508 = t505 + t506;
  t566 = t204*t463;
  t567 = t474*t299*t276;
  t568 = t566 + t567;
  t598 = t474*t167*t221;
  t600 = -1.*t568*t303;
  t602 = t598 + t600;
  t580 = t221*t568;
  t581 = t474*t167*t303;
  t587 = t580 + t581;
  p_output1[0]=0. - 0.049*t167*t204 - 1.*t167*t269*t276 + t299*t312 + t343*t357 - 0.09*(t327*t392 - 1.*t357*t403) + 0.135*(t327*t357 + t392*t403) + t392*t417 + var1[0];
  p_output1[1]=0. - 1.*t167*t312*t463 - 0.049*(t204*t299*t463 + t276*t474) + t269*t495 + t343*t508 + t417*t524 - 0.09*(-1.*t403*t508 + t327*t524) + 0.135*(t327*t508 + t403*t524) + var1[1];
  p_output1[2]=0. + t167*t312*t474 - 0.049*(t276*t463 - 1.*t204*t299*t474) + t269*t568 + t343*t587 + t417*t602 - 0.09*(-1.*t403*t587 + t327*t602) + 0.135*(t327*t587 + t403*t602) + var1[2];
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

#include "p_hip_rotation_left.hh"

namespace SymExpression
{

void p_hip_rotation_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
