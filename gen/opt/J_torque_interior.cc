/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:30 GMT-04:00
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
  double t181;
  double t2405;
  double t2409;
  double t2415;
  double t2420;
  double t2430;
  double t2438;
  double t2439;
  double t2443;
  double t2445;
  double t2446;
  double t2448;
  double t2451;
  double t2489;
  double t2490;
  t181 = -1. + var3[0];
  t2405 = 1/t181;
  t2409 = Power(var2[9],2);
  t2415 = Power(var2[0],2);
  t2420 = Power(var2[1],2);
  t2430 = Power(var2[2],2);
  t2438 = Power(var2[3],2);
  t2439 = Power(var2[4],2);
  t2443 = Power(var2[5],2);
  t2445 = Power(var2[6],2);
  t2446 = Power(var2[7],2);
  t2448 = Power(var2[8],2);
  t2451 = t2409 + t2415 + t2420 + t2430 + t2438 + t2439 + t2443 + t2445 + t2446 + t2448;
  t2489 = -1.*var1[0];
  t2490 = t2489 + var1[1];
  p_output1[0]=-0.666666666666667*t2405*t2451;
  p_output1[1]=0.666666666666667*t2405*t2451;
  p_output1[2]=1.33333333333333*t2405*t2490*var2[0];
  p_output1[3]=1.33333333333333*t2405*t2490*var2[1];
  p_output1[4]=1.33333333333333*t2405*t2490*var2[2];
  p_output1[5]=1.33333333333333*t2405*t2490*var2[3];
  p_output1[6]=1.33333333333333*t2405*t2490*var2[4];
  p_output1[7]=1.33333333333333*t2405*t2490*var2[5];
  p_output1[8]=1.33333333333333*t2405*t2490*var2[6];
  p_output1[9]=1.33333333333333*t2405*t2490*var2[7];
  p_output1[10]=1.33333333333333*t2405*t2490*var2[8];
  p_output1[11]=1.33333333333333*t2405*t2490*var2[9];
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

#include "J_torque_interior.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void J_torque_interior_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
