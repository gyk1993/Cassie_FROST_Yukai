/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:27:57 GMT-04:00
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
  double t11;
  double t22;
  double t29;
  double t31;
  double t32;
  double t17;
  double t24;
  double t26;
  double t27;
  double t28;
  double t44;
  double t42;
  double t33;
  double t35;
  double t48;
  double t49;
  double t50;
  double t62;
  double t63;
  double t64;
  t11 = Cos(var1[4]);
  t22 = Cos(var1[6]);
  t29 = Sin(var1[5]);
  t31 = Sin(var1[4]);
  t32 = Sin(var1[6]);
  t17 = Cos(var1[5]);
  t24 = -1.*t22;
  t26 = 1. + t24;
  t27 = 0.135*t26;
  t28 = 0. + t27;
  t44 = Cos(var1[3]);
  t42 = Sin(var1[3]);
  t33 = -0.135*t32;
  t35 = 0. + t33;
  t48 = t44*t17;
  t49 = -1.*t42*t31*t29;
  t50 = t48 + t49;
  t62 = t17*t42;
  t63 = t44*t31*t29;
  t64 = t62 + t63;
  p_output1[0]=0. - 0.049*t11*t17 - 1.*t11*t28*t29 + 0.135*(-1.*t11*t22*t29 + t31*t32) + t31*t35 + var1[0];
  p_output1[1]=0. - 1.*t11*t35*t42 - 0.049*(t17*t31*t42 + t29*t44) + t28*t50 + 0.135*(-1.*t11*t32*t42 + t22*t50) + var1[1];
  p_output1[2]=0. + t11*t35*t44 - 0.049*(t29*t42 - 1.*t17*t31*t44) + t28*t64 + 0.135*(t11*t32*t44 + t22*t64) + var1[2];
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
