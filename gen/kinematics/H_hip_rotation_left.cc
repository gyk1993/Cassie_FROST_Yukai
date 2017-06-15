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
  double t64;
  double t52;
  double t68;
  double t57;
  double t69;
  double t40;
  double t87;
  double t89;
  double t90;
  double t91;
  double t92;
  double t93;
  double t84;
  double t112;
  double t113;
  double t114;
  double t75;
  double t81;
  double t83;
  double t61;
  double t71;
  double t73;
  double t99;
  double t100;
  double t103;
  double t88;
  double t95;
  double t97;
  double t118;
  double t119;
  double t120;
  double t108;
  double t115;
  double t116;
  double t124;
  double t125;
  double t126;
  double t144;
  double t145;
  double t146;
  double t147;
  double t149;
  double t150;
  double t152;
  double t153;
  double t154;
  double t155;
  double t157;
  double t158;
  double t127;
  double t129;
  double t130;
  t64 = Cos(var1[4]);
  t52 = Cos(var1[6]);
  t68 = Sin(var1[5]);
  t57 = Sin(var1[4]);
  t69 = Sin(var1[6]);
  t40 = Cos(var1[7]);
  t87 = Sin(var1[3]);
  t89 = Cos(var1[3]);
  t90 = Cos(var1[5]);
  t91 = t89*t90;
  t92 = -1.*t87*t57*t68;
  t93 = t91 + t92;
  t84 = Sin(var1[7]);
  t112 = t90*t87;
  t113 = t89*t57*t68;
  t114 = t112 + t113;
  t75 = -1.*t64*t52*t68;
  t81 = t57*t69;
  t83 = t75 + t81;
  t61 = t52*t57;
  t71 = t64*t68*t69;
  t73 = t61 + t71;
  t99 = t52*t93;
  t100 = -1.*t64*t87*t69;
  t103 = t99 + t100;
  t88 = -1.*t64*t52*t87;
  t95 = -1.*t93*t69;
  t97 = t88 + t95;
  t118 = t52*t114;
  t119 = t89*t64*t69;
  t120 = t118 + t119;
  t108 = t89*t64*t52;
  t115 = -1.*t114*t69;
  t116 = t108 + t115;
  t124 = t90*t87*t57;
  t125 = t89*t68;
  t126 = t124 + t125;
  t144 = -1.*t52;
  t145 = 1. + t144;
  t146 = 0.135*t145;
  t147 = 0. + t146;
  t149 = -0.135*t69;
  t150 = 0. + t149;
  t152 = -1.*t40;
  t153 = 1. + t152;
  t154 = 0.135*t153;
  t155 = 0. + t154;
  t157 = -0.135*t84;
  t158 = 0. + t157;
  t127 = -1.*t89*t90*t57;
  t129 = t87*t68;
  t130 = t127 + t129;
  p_output1[0]=-1.*t40*t73 + t83*t84;
  p_output1[1]=t103*t84 - 1.*t40*t97;
  p_output1[2]=-1.*t116*t40 + t120*t84;
  p_output1[3]=0.;
  p_output1[4]=t64*t90;
  p_output1[5]=t126;
  p_output1[6]=t130;
  p_output1[7]=0.;
  p_output1[8]=-1.*t40*t83 - 1.*t73*t84;
  p_output1[9]=-1.*t103*t40 - 1.*t84*t97;
  p_output1[10]=-1.*t120*t40 - 1.*t116*t84;
  p_output1[11]=0.;
  p_output1[12]=0. + t150*t57 - 1.*t147*t64*t68 + t158*t73 + t155*t83 + 0.135*(t40*t83 + t73*t84) - 0.09*(t40*t73 - 1.*t83*t84) - 0.049*t64*t90 + var1[0];
  p_output1[13]=0. - 0.049*t126 + t103*t155 - 1.*t150*t64*t87 + t147*t93 + t158*t97 - 0.09*(-1.*t103*t84 + t40*t97) + 0.135*(t103*t40 + t84*t97) + var1[1];
  p_output1[14]=0. - 0.049*t130 + t114*t147 + t120*t155 + t116*t158 + 0.135*(t120*t40 + t116*t84) - 0.09*(t116*t40 - 1.*t120*t84) + t150*t64*t89 + var1[2];
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

#include "H_hip_rotation_left.hh"

namespace SymExpression
{

void H_hip_rotation_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
