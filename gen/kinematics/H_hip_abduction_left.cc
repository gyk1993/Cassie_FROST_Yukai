/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:27:58 GMT-04:00
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
  double t27;
  double t38;
  double t36;
  double t33;
  double t39;
  double t20;
  double t47;
  double t51;
  double t54;
  double t55;
  double t56;
  double t60;
  double t61;
  double t62;
  double t48;
  double t52;
  double t53;
  double t37;
  double t40;
  double t41;
  double t76;
  double t77;
  double t78;
  double t79;
  double t81;
  double t82;
  double t57;
  double t58;
  double t59;
  double t43;
  double t45;
  double t46;
  double t63;
  double t64;
  double t65;
  t27 = Cos(var1[5]);
  t38 = Cos(var1[3]);
  t36 = Sin(var1[4]);
  t33 = Sin(var1[3]);
  t39 = Sin(var1[5]);
  t20 = Cos(var1[4]);
  t47 = Cos(var1[6]);
  t51 = Sin(var1[6]);
  t54 = t38*t27;
  t55 = -1.*t33*t36*t39;
  t56 = t54 + t55;
  t60 = t27*t33;
  t61 = t38*t36*t39;
  t62 = t60 + t61;
  t48 = -1.*t20*t47*t39;
  t52 = t36*t51;
  t53 = t48 + t52;
  t37 = t27*t33*t36;
  t40 = t38*t39;
  t41 = t37 + t40;
  t76 = -1.*t47;
  t77 = 1. + t76;
  t78 = 0.135*t77;
  t79 = 0. + t78;
  t81 = -0.135*t51;
  t82 = 0. + t81;
  t57 = t47*t56;
  t58 = -1.*t20*t33*t51;
  t59 = t57 + t58;
  t43 = -1.*t38*t27*t36;
  t45 = t33*t39;
  t46 = t43 + t45;
  t63 = t47*t62;
  t64 = t38*t20*t51;
  t65 = t63 + t64;
  p_output1[0]=t20*t27;
  p_output1[1]=t41;
  p_output1[2]=t46;
  p_output1[3]=0.;
  p_output1[4]=t53;
  p_output1[5]=t59;
  p_output1[6]=t65;
  p_output1[7]=0.;
  p_output1[8]=t36*t47 + t20*t39*t51;
  p_output1[9]=-1.*t20*t33*t47 - 1.*t51*t56;
  p_output1[10]=t20*t38*t47 - 1.*t51*t62;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t20*t27 + 0.135*t53 - 1.*t20*t39*t79 + t36*t82 + var1[0];
  p_output1[13]=0. - 0.049*t41 + 0.135*t59 + t56*t79 - 1.*t20*t33*t82 + var1[1];
  p_output1[14]=0. - 0.049*t46 + 0.135*t65 + t62*t79 + t20*t38*t82 + var1[2];
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

#include "H_hip_abduction_left.hh"

namespace SymExpression
{

void H_hip_abduction_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
