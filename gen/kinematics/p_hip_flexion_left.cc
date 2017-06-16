/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:00 GMT-04:00
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
  double t61;
  double t71;
  double t91;
  double t99;
  double t104;
  double t113;
  double t126;
  double t129;
  double t130;
  double t122;
  double t123;
  double t124;
  double t131;
  double t143;
  double t146;
  double t148;
  double t151;
  double t157;
  double t158;
  double t159;
  double t142;
  double t74;
  double t81;
  double t85;
  double t86;
  double t175;
  double t105;
  double t108;
  double t117;
  double t118;
  double t119;
  double t121;
  double t173;
  double t174;
  double t176;
  double t177;
  double t132;
  double t134;
  double t184;
  double t185;
  double t186;
  double t180;
  double t181;
  double t182;
  double t149;
  double t154;
  double t155;
  double t160;
  double t161;
  double t162;
  double t196;
  double t197;
  double t198;
  double t192;
  double t193;
  double t194;
  double t209;
  double t210;
  double t211;
  double t218;
  double t219;
  double t220;
  double t214;
  double t215;
  double t216;
  double t230;
  double t231;
  double t232;
  double t226;
  double t227;
  double t228;
  t61 = Cos(var1[4]);
  t71 = Cos(var1[6]);
  t91 = Sin(var1[5]);
  t99 = Sin(var1[4]);
  t104 = Sin(var1[6]);
  t113 = Cos(var1[7]);
  t126 = t71*t99;
  t129 = t61*t91*t104;
  t130 = t126 + t129;
  t122 = -1.*t61*t71*t91;
  t123 = t99*t104;
  t124 = t122 + t123;
  t131 = Sin(var1[7]);
  t143 = Cos(var1[8]);
  t146 = -1.*t143;
  t148 = 1. + t146;
  t151 = Sin(var1[8]);
  t157 = t113*t124;
  t158 = t130*t131;
  t159 = t157 + t158;
  t142 = Cos(var1[5]);
  t74 = -1.*t71;
  t81 = 1. + t74;
  t85 = 0.135*t81;
  t86 = 0. + t85;
  t175 = Sin(var1[3]);
  t105 = -0.135*t104;
  t108 = 0. + t105;
  t117 = -1.*t113;
  t118 = 1. + t117;
  t119 = 0.135*t118;
  t121 = 0. + t119;
  t173 = Cos(var1[3]);
  t174 = t173*t142;
  t176 = -1.*t175*t99*t91;
  t177 = t174 + t176;
  t132 = -0.135*t131;
  t134 = 0. + t132;
  t184 = -1.*t61*t71*t175;
  t185 = -1.*t177*t104;
  t186 = t184 + t185;
  t180 = t71*t177;
  t181 = -1.*t61*t175*t104;
  t182 = t180 + t181;
  t149 = -0.049*t148;
  t154 = -0.135*t151;
  t155 = 0. + t149 + t154;
  t160 = 0.135*t148;
  t161 = -0.049*t151;
  t162 = 0. + t160 + t161;
  t196 = t113*t182;
  t197 = t186*t131;
  t198 = t196 + t197;
  t192 = t142*t175*t99;
  t193 = t173*t91;
  t194 = t192 + t193;
  t209 = t142*t175;
  t210 = t173*t99*t91;
  t211 = t209 + t210;
  t218 = t173*t61*t71;
  t219 = -1.*t211*t104;
  t220 = t218 + t219;
  t214 = t71*t211;
  t215 = t173*t61*t104;
  t216 = t214 + t215;
  t230 = t113*t216;
  t231 = t220*t131;
  t232 = t230 + t231;
  t226 = -1.*t173*t142*t99;
  t227 = t175*t91;
  t228 = t226 + t227;
  p_output1[0]=0. + t121*t124 - 0.09*(t113*t130 - 1.*t124*t131) + t130*t134 + t159*t162 + t142*t155*t61 - 0.049*(-1.*t151*t159 + t142*t143*t61) + 0.135*(t143*t159 + t142*t151*t61) - 1.*t61*t86*t91 + t108*t99 + var1[0];
  p_output1[1]=0. + t121*t182 + t134*t186 - 0.09*(-1.*t131*t182 + t113*t186) + t155*t194 + t162*t198 + 0.135*(t151*t194 + t143*t198) - 0.049*(t143*t194 - 1.*t151*t198) - 1.*t108*t175*t61 + t177*t86 + var1[1];
  p_output1[2]=0. + t121*t216 + t134*t220 - 0.09*(-1.*t131*t216 + t113*t220) + t155*t228 + t162*t232 + 0.135*(t151*t228 + t143*t232) - 0.049*(t143*t228 - 1.*t151*t232) + t108*t173*t61 + t211*t86 + var1[2];
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

#include "p_hip_flexion_left.hh"

namespace SymExpression
{

void p_hip_flexion_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
