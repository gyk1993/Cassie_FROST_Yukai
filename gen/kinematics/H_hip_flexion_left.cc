/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:01 GMT-04:00
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
  double t119;
  double t98;
  double t121;
  double t105;
  double t123;
  double t85;
  double t141;
  double t154;
  double t155;
  double t156;
  double t157;
  double t158;
  double t138;
  double t169;
  double t170;
  double t171;
  double t132;
  double t134;
  double t135;
  double t112;
  double t125;
  double t126;
  double t189;
  double t163;
  double t164;
  double t165;
  double t149;
  double t160;
  double t161;
  double t195;
  double t179;
  double t180;
  double t183;
  double t168;
  double t172;
  double t174;
  double t191;
  double t192;
  double t193;
  double t203;
  double t204;
  double t205;
  double t199;
  double t200;
  double t201;
  double t213;
  double t214;
  double t215;
  double t208;
  double t209;
  double t210;
  double t253;
  double t254;
  double t190;
  double t196;
  double t197;
  double t233;
  double t234;
  double t235;
  double t236;
  double t238;
  double t239;
  double t241;
  double t242;
  double t243;
  double t244;
  double t246;
  double t247;
  double t255;
  double t256;
  double t257;
  double t259;
  double t260;
  double t261;
  double t202;
  double t206;
  double t207;
  double t212;
  double t217;
  double t218;
  t119 = Cos(var1[4]);
  t98 = Cos(var1[6]);
  t121 = Sin(var1[5]);
  t105 = Sin(var1[4]);
  t123 = Sin(var1[6]);
  t85 = Cos(var1[7]);
  t141 = Sin(var1[3]);
  t154 = Cos(var1[3]);
  t155 = Cos(var1[5]);
  t156 = t154*t155;
  t157 = -1.*t141*t105*t121;
  t158 = t156 + t157;
  t138 = Sin(var1[7]);
  t169 = t155*t141;
  t170 = t154*t105*t121;
  t171 = t169 + t170;
  t132 = -1.*t119*t98*t121;
  t134 = t105*t123;
  t135 = t132 + t134;
  t112 = t98*t105;
  t125 = t119*t121*t123;
  t126 = t112 + t125;
  t189 = Cos(var1[8]);
  t163 = t98*t158;
  t164 = -1.*t119*t141*t123;
  t165 = t163 + t164;
  t149 = -1.*t119*t98*t141;
  t160 = -1.*t158*t123;
  t161 = t149 + t160;
  t195 = Sin(var1[8]);
  t179 = t98*t171;
  t180 = t154*t119*t123;
  t183 = t179 + t180;
  t168 = t154*t119*t98;
  t172 = -1.*t171*t123;
  t174 = t168 + t172;
  t191 = t85*t135;
  t192 = t126*t138;
  t193 = t191 + t192;
  t203 = t85*t165;
  t204 = t161*t138;
  t205 = t203 + t204;
  t199 = t155*t141*t105;
  t200 = t154*t121;
  t201 = t199 + t200;
  t213 = t85*t183;
  t214 = t174*t138;
  t215 = t213 + t214;
  t208 = -1.*t154*t155*t105;
  t209 = t141*t121;
  t210 = t208 + t209;
  t253 = -1.*t189;
  t254 = 1. + t253;
  t190 = t119*t155*t189;
  t196 = -1.*t193*t195;
  t197 = t190 + t196;
  t233 = -1.*t98;
  t234 = 1. + t233;
  t235 = 0.135*t234;
  t236 = 0. + t235;
  t238 = -0.135*t123;
  t239 = 0. + t238;
  t241 = -1.*t85;
  t242 = 1. + t241;
  t243 = 0.135*t242;
  t244 = 0. + t243;
  t246 = -0.135*t138;
  t247 = 0. + t246;
  t255 = -0.049*t254;
  t256 = -0.135*t195;
  t257 = 0. + t255 + t256;
  t259 = 0.135*t254;
  t260 = -0.049*t195;
  t261 = 0. + t259 + t260;
  t202 = t189*t201;
  t206 = -1.*t205*t195;
  t207 = t202 + t206;
  t212 = t189*t210;
  t217 = -1.*t215*t195;
  t218 = t212 + t217;
  p_output1[0]=t135*t138 - 1.*t126*t85;
  p_output1[1]=t138*t165 - 1.*t161*t85;
  p_output1[2]=t138*t183 - 1.*t174*t85;
  p_output1[3]=0.;
  p_output1[4]=t197;
  p_output1[5]=t207;
  p_output1[6]=t218;
  p_output1[7]=0.;
  p_output1[8]=-1.*t189*t193 - 1.*t119*t155*t195;
  p_output1[9]=-1.*t195*t201 - 1.*t189*t205;
  p_output1[10]=-1.*t195*t210 - 1.*t189*t215;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.135*(t189*t193 + t119*t155*t195) - 0.049*t197 - 1.*t119*t121*t236 + t105*t239 + t135*t244 + t126*t247 + t119*t155*t257 + t193*t261 - 0.09*(-1.*t135*t138 + t126*t85) + var1[0];
  p_output1[13]=0. + 0.135*(t195*t201 + t189*t205) - 0.049*t207 + t158*t236 - 1.*t119*t141*t239 + t165*t244 + t161*t247 + t201*t257 + t205*t261 - 0.09*(-1.*t138*t165 + t161*t85) + var1[1];
  p_output1[14]=0. + 0.135*(t195*t210 + t189*t215) - 0.049*t218 + t171*t236 + t119*t154*t239 + t183*t244 + t174*t247 + t210*t257 + t215*t261 - 0.09*(-1.*t138*t183 + t174*t85) + var1[2];
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

#include "H_hip_flexion_left.hh"

namespace SymExpression
{

void H_hip_flexion_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
