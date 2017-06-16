/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:02 GMT-04:00
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
  double t112;
  double t125;
  double t156;
  double t163;
  double t166;
  double t170;
  double t197;
  double t199;
  double t200;
  double t188;
  double t190;
  double t191;
  double t202;
  double t230;
  double t231;
  double t235;
  double t238;
  double t245;
  double t246;
  double t247;
  double t229;
  double t209;
  double t212;
  double t213;
  double t218;
  double t223;
  double t224;
  double t225;
  double t261;
  double t262;
  double t263;
  double t129;
  double t134;
  double t139;
  double t140;
  double t276;
  double t167;
  double t168;
  double t178;
  double t179;
  double t180;
  double t187;
  double t274;
  double t275;
  double t277;
  double t278;
  double t203;
  double t204;
  double t214;
  double t221;
  double t222;
  double t285;
  double t286;
  double t287;
  double t281;
  double t282;
  double t283;
  double t237;
  double t240;
  double t243;
  double t248;
  double t249;
  double t250;
  double t297;
  double t298;
  double t299;
  double t293;
  double t294;
  double t295;
  double t258;
  double t259;
  double t260;
  double t289;
  double t290;
  double t291;
  double t305;
  double t306;
  double t307;
  double t318;
  double t319;
  double t320;
  double t327;
  double t328;
  double t329;
  double t323;
  double t324;
  double t325;
  double t339;
  double t340;
  double t341;
  double t335;
  double t336;
  double t337;
  double t331;
  double t332;
  double t333;
  double t347;
  double t348;
  double t349;
  t112 = Cos(var1[4]);
  t125 = Cos(var1[6]);
  t156 = Sin(var1[5]);
  t163 = Sin(var1[4]);
  t166 = Sin(var1[6]);
  t170 = Cos(var1[7]);
  t197 = t125*t163;
  t199 = t112*t156*t166;
  t200 = t197 + t199;
  t188 = -1.*t112*t125*t156;
  t190 = t163*t166;
  t191 = t188 + t190;
  t202 = Sin(var1[7]);
  t230 = Cos(var1[8]);
  t231 = -1.*t230;
  t235 = 1. + t231;
  t238 = Sin(var1[8]);
  t245 = t170*t191;
  t246 = t200*t202;
  t247 = t245 + t246;
  t229 = Cos(var1[5]);
  t209 = Cos(var1[9]);
  t212 = -1.*t209;
  t213 = 1. + t212;
  t218 = Sin(var1[9]);
  t223 = t170*t200;
  t224 = -1.*t191*t202;
  t225 = t223 + t224;
  t261 = t112*t229*t230;
  t262 = -1.*t247*t238;
  t263 = t261 + t262;
  t129 = -1.*t125;
  t134 = 1. + t129;
  t139 = 0.135*t134;
  t140 = 0. + t139;
  t276 = Sin(var1[3]);
  t167 = -0.135*t166;
  t168 = 0. + t167;
  t178 = -1.*t170;
  t179 = 1. + t178;
  t180 = 0.135*t179;
  t187 = 0. + t180;
  t274 = Cos(var1[3]);
  t275 = t274*t229;
  t277 = -1.*t276*t163*t156;
  t278 = t275 + t277;
  t203 = -0.135*t202;
  t204 = 0. + t203;
  t214 = -0.09*t213;
  t221 = 0.049*t218;
  t222 = 0. + t214 + t221;
  t285 = -1.*t112*t125*t276;
  t286 = -1.*t278*t166;
  t287 = t285 + t286;
  t281 = t125*t278;
  t282 = -1.*t112*t276*t166;
  t283 = t281 + t282;
  t237 = -0.049*t235;
  t240 = -0.135*t238;
  t243 = 0. + t237 + t240;
  t248 = 0.135*t235;
  t249 = -0.049*t238;
  t250 = 0. + t248 + t249;
  t297 = t170*t283;
  t298 = t287*t202;
  t299 = t297 + t298;
  t293 = t229*t276*t163;
  t294 = t274*t156;
  t295 = t293 + t294;
  t258 = -0.049*t213;
  t259 = -0.09*t218;
  t260 = 0. + t258 + t259;
  t289 = t170*t287;
  t290 = -1.*t283*t202;
  t291 = t289 + t290;
  t305 = t230*t295;
  t306 = -1.*t299*t238;
  t307 = t305 + t306;
  t318 = t229*t276;
  t319 = t274*t163*t156;
  t320 = t318 + t319;
  t327 = t274*t112*t125;
  t328 = -1.*t320*t166;
  t329 = t327 + t328;
  t323 = t125*t320;
  t324 = t274*t112*t166;
  t325 = t323 + t324;
  t339 = t170*t325;
  t340 = t329*t202;
  t341 = t339 + t340;
  t335 = -1.*t274*t229*t163;
  t336 = t276*t156;
  t337 = t335 + t336;
  t331 = t170*t329;
  t332 = -1.*t325*t202;
  t333 = t331 + t332;
  t347 = t230*t337;
  t348 = -1.*t341*t238;
  t349 = t347 + t348;
  p_output1[0]=0. - 1.*t112*t140*t156 + t163*t168 + t187*t191 + t200*t204 + t222*t225 + t112*t229*t243 + 0.1305*(t112*t229*t238 + t230*t247) + t247*t250 + t260*t263 - 0.049*(t218*t225 + t209*t263) - 0.21*(t209*t225 - 1.*t218*t263) + var1[0];
  p_output1[1]=0. - 1.*t112*t168*t276 + t140*t278 + t187*t283 + t204*t287 + t222*t291 + t243*t295 + t250*t299 + 0.1305*(t238*t295 + t230*t299) + t260*t307 - 0.049*(t218*t291 + t209*t307) - 0.21*(t209*t291 - 1.*t218*t307) + var1[1];
  p_output1[2]=0. + t112*t168*t274 + t140*t320 + t187*t325 + t204*t329 + t222*t333 + t243*t337 + t250*t341 + 0.1305*(t238*t337 + t230*t341) + t260*t349 - 0.049*(t218*t333 + t209*t349) - 0.21*(t209*t333 - 1.*t218*t349) + var1[2];
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

#include "p_knee_joint_left.hh"

namespace SymExpression
{

void p_knee_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
