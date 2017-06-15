/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:10:18 GMT-04:00
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
  double t30;
  double t41;
  double t54;
  double t59;
  double t60;
  double t65;
  double t74;
  double t75;
  double t78;
  double t70;
  double t71;
  double t72;
  double t80;
  double t37;
  double t45;
  double t46;
  double t52;
  double t53;
  double t96;
  double t94;
  double t61;
  double t63;
  double t66;
  double t67;
  double t68;
  double t69;
  double t100;
  double t101;
  double t102;
  double t81;
  double t83;
  double t109;
  double t110;
  double t111;
  double t105;
  double t106;
  double t107;
  double t126;
  double t127;
  double t128;
  double t135;
  double t136;
  double t137;
  double t131;
  double t132;
  double t133;
  t30 = Cos(var1[4]);
  t41 = Cos(var1[6]);
  t54 = Sin(var1[5]);
  t59 = Sin(var1[4]);
  t60 = Sin(var1[6]);
  t65 = Cos(var1[7]);
  t74 = t41*t59;
  t75 = t30*t54*t60;
  t78 = t74 + t75;
  t70 = -1.*t30*t41*t54;
  t71 = t59*t60;
  t72 = t70 + t71;
  t80 = Sin(var1[7]);
  t37 = Cos(var1[5]);
  t45 = -1.*t41;
  t46 = 1. + t45;
  t52 = 0.135*t46;
  t53 = 0. + t52;
  t96 = Cos(var1[3]);
  t94 = Sin(var1[3]);
  t61 = -0.135*t60;
  t63 = 0. + t61;
  t66 = -1.*t65;
  t67 = 1. + t66;
  t68 = 0.135*t67;
  t69 = 0. + t68;
  t100 = t96*t37;
  t101 = -1.*t94*t59*t54;
  t102 = t100 + t101;
  t81 = -0.135*t80;
  t83 = 0. + t81;
  t109 = -1.*t30*t41*t94;
  t110 = -1.*t102*t60;
  t111 = t109 + t110;
  t105 = t41*t102;
  t106 = -1.*t30*t94*t60;
  t107 = t105 + t106;
  t126 = t37*t94;
  t127 = t96*t59*t54;
  t128 = t126 + t127;
  t135 = t96*t30*t41;
  t136 = -1.*t128*t60;
  t137 = t135 + t136;
  t131 = t41*t128;
  t132 = t96*t30*t60;
  t133 = t131 + t132;
  p_output1[0]=0. - 0.049*t30*t37 - 1.*t30*t53*t54 + t59*t63 + t69*t72 - 0.09*(t65*t78 - 1.*t72*t80) + 0.135*(t65*t72 + t78*t80) + t78*t83 + var1[0];
  p_output1[1]=0. + t102*t53 + t107*t69 - 0.09*(t111*t65 - 1.*t107*t80) + 0.135*(t107*t65 + t111*t80) + t111*t83 - 1.*t30*t63*t94 - 0.049*(t37*t59*t94 + t54*t96) + var1[1];
  p_output1[2]=0. + t128*t53 + t133*t69 - 0.09*(t137*t65 - 1.*t133*t80) + 0.135*(t133*t65 + t137*t80) + t137*t83 + t30*t63*t96 - 0.049*(t54*t94 - 1.*t37*t59*t96) + var1[2];
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
