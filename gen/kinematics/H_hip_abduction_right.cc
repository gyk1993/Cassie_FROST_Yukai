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
  double t2059;
  double t2249;
  double t2233;
  double t2181;
  double t2263;
  double t1894;
  double t2379;
  double t2388;
  double t2427;
  double t2428;
  double t2430;
  double t2456;
  double t2464;
  double t2466;
  double t2380;
  double t2403;
  double t2413;
  double t2536;
  double t2545;
  double t2240;
  double t2268;
  double t2332;
  double t2566;
  double t2569;
  double t2578;
  double t2584;
  double t2422;
  double t2435;
  double t2441;
  double t2354;
  double t2357;
  double t2377;
  double t2447;
  double t2477;
  double t2481;
  t2059 = Cos(var1[5]);
  t2249 = Cos(var1[3]);
  t2233 = Sin(var1[4]);
  t2181 = Sin(var1[3]);
  t2263 = Sin(var1[5]);
  t1894 = Cos(var1[4]);
  t2379 = Sin(var1[14]);
  t2388 = Cos(var1[14]);
  t2427 = t2249*t2059;
  t2428 = -1.*t2181*t2233*t2263;
  t2430 = t2427 + t2428;
  t2456 = t2059*t2181;
  t2464 = t2249*t2233*t2263;
  t2466 = t2456 + t2464;
  t2380 = t2379*t2233;
  t2403 = -1.*t2388*t1894*t2263;
  t2413 = t2380 + t2403;
  t2536 = 0.135*t2379;
  t2545 = 0. + t2536;
  t2240 = t2059*t2181*t2233;
  t2268 = t2249*t2263;
  t2332 = t2240 + t2268;
  t2566 = -1.*t2388;
  t2569 = 1. + t2566;
  t2578 = -0.135*t2569;
  t2584 = 0. + t2578;
  t2422 = -1.*t1894*t2379*t2181;
  t2435 = t2388*t2430;
  t2441 = t2422 + t2435;
  t2354 = -1.*t2249*t2059*t2233;
  t2357 = t2181*t2263;
  t2377 = t2354 + t2357;
  t2447 = t2249*t1894*t2379;
  t2477 = t2388*t2466;
  t2481 = t2447 + t2477;
  p_output1[0]=t1894*t2059;
  p_output1[1]=t2332;
  p_output1[2]=t2377;
  p_output1[3]=0.;
  p_output1[4]=t2413;
  p_output1[5]=t2441;
  p_output1[6]=t2481;
  p_output1[7]=0.;
  p_output1[8]=t1894*t2263*t2379 + t2233*t2388;
  p_output1[9]=-1.*t1894*t2181*t2388 - 1.*t2379*t2430;
  p_output1[10]=t1894*t2249*t2388 - 1.*t2379*t2466;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t1894*t2059 - 0.135*t2413 + t2233*t2545 - 1.*t1894*t2263*t2584 + var1[0];
  p_output1[13]=0. - 0.049*t2332 - 0.135*t2441 - 1.*t1894*t2181*t2545 + t2430*t2584 + var1[1];
  p_output1[14]=0. - 0.049*t2377 - 0.135*t2481 + t1894*t2249*t2545 + t2466*t2584 + var1[2];
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

#include "H_hip_abduction_right.hh"

namespace SymExpression
{

void H_hip_abduction_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
