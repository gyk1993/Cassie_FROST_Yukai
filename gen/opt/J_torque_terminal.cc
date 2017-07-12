/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:25 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t2263;
  double t2319;
  double t2322;
  double t2335;
  double t2337;
  double t2338;
  double t2346;
  double t2361;
  double t2364;
  double t2365;
  double t2372;
  double t2381;
  double t2391;
  double t2410;
  double t2412;
  t2263 = -1. + var3[0];
  t2319 = 1/t2263;
  t2322 = Power(var2[9],2);
  t2335 = Power(var2[0],2);
  t2337 = Power(var2[1],2);
  t2338 = Power(var2[2],2);
  t2346 = Power(var2[3],2);
  t2361 = Power(var2[4],2);
  t2364 = Power(var2[5],2);
  t2365 = Power(var2[6],2);
  t2372 = Power(var2[7],2);
  t2381 = Power(var2[8],2);
  t2391 = t2322 + t2335 + t2337 + t2338 + t2346 + t2361 + t2364 + t2365 + t2372 + t2381;
  t2410 = -1.*var1[0];
  t2412 = t2410 + var1[1];
  p_output1[0]=-0.166666666666667*t2319*t2391;
  p_output1[1]=0.166666666666667*t2319*t2391;
  p_output1[2]=0.333333333333333*t2319*t2412*var2[0];
  p_output1[3]=0.333333333333333*t2319*t2412*var2[1];
  p_output1[4]=0.333333333333333*t2319*t2412*var2[2];
  p_output1[5]=0.333333333333333*t2319*t2412*var2[3];
  p_output1[6]=0.333333333333333*t2319*t2412*var2[4];
  p_output1[7]=0.333333333333333*t2319*t2412*var2[5];
  p_output1[8]=0.333333333333333*t2319*t2412*var2[6];
  p_output1[9]=0.333333333333333*t2319*t2412*var2[7];
  p_output1[10]=0.333333333333333*t2319*t2412*var2[8];
  p_output1[11]=0.333333333333333*t2319*t2412*var2[9];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 10 && ncols == 1) && 
      !(mrows == 1 && ncols == 10))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "J_torque_terminal.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void J_torque_terminal_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
