/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:10:21 GMT-04:00
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
  double t187;
  double t167;
  double t190;
  double t169;
  double t192;
  double t162;
  double t203;
  double t204;
  double t207;
  double t180;
  double t197;
  double t199;
  double t214;
  double t139;
  double t237;
  double t255;
  double t257;
  double t258;
  double t259;
  double t260;
  double t227;
  double t240;
  double t266;
  double t267;
  double t268;
  double t256;
  double t261;
  double t264;
  double t248;
  double t294;
  double t295;
  double t296;
  double t301;
  double t302;
  double t303;
  double t293;
  double t297;
  double t298;
  double t200;
  double t221;
  double t222;
  double t243;
  double t244;
  double t245;
  double t246;
  double t249;
  double t250;
  double t265;
  double t269;
  double t270;
  double t272;
  double t273;
  double t275;
  double t279;
  double t280;
  double t281;
  double t284;
  double t287;
  double t288;
  double t300;
  double t304;
  double t305;
  double t309;
  double t310;
  double t311;
  double t312;
  double t313;
  double t314;
  double t315;
  double t316;
  double t317;
  double t369;
  double t370;
  double t363;
  double t364;
  double t321;
  double t322;
  double t323;
  double t345;
  double t346;
  double t347;
  double t350;
  double t352;
  double t353;
  double t355;
  double t356;
  double t357;
  double t358;
  double t360;
  double t361;
  double t365;
  double t366;
  double t367;
  double t371;
  double t372;
  double t373;
  double t375;
  double t376;
  double t377;
  double t383;
  double t384;
  double t385;
  double t324;
  double t326;
  double t327;
  double t329;
  double t330;
  double t331;
  t187 = Cos(var1[4]);
  t167 = Cos(var1[6]);
  t190 = Sin(var1[5]);
  t169 = Sin(var1[4]);
  t192 = Sin(var1[6]);
  t162 = Cos(var1[7]);
  t203 = -1.*t187*t167*t190;
  t204 = t169*t192;
  t207 = t203 + t204;
  t180 = t167*t169;
  t197 = t187*t190*t192;
  t199 = t180 + t197;
  t214 = Sin(var1[7]);
  t139 = Cos(var1[9]);
  t237 = Cos(var1[5]);
  t255 = Sin(var1[3]);
  t257 = Cos(var1[3]);
  t258 = t257*t237;
  t259 = -1.*t255*t169*t190;
  t260 = t258 + t259;
  t227 = Sin(var1[9]);
  t240 = Cos(var1[8]);
  t266 = t167*t260;
  t267 = -1.*t187*t255*t192;
  t268 = t266 + t267;
  t256 = -1.*t187*t167*t255;
  t261 = -1.*t260*t192;
  t264 = t256 + t261;
  t248 = Sin(var1[8]);
  t294 = t237*t255;
  t295 = t257*t169*t190;
  t296 = t294 + t295;
  t301 = t167*t296;
  t302 = t257*t187*t192;
  t303 = t301 + t302;
  t293 = t257*t187*t167;
  t297 = -1.*t296*t192;
  t298 = t293 + t297;
  t200 = t162*t199;
  t221 = -1.*t207*t214;
  t222 = t200 + t221;
  t243 = t187*t237*t240;
  t244 = t162*t207;
  t245 = t199*t214;
  t246 = t244 + t245;
  t249 = -1.*t246*t248;
  t250 = t243 + t249;
  t265 = t162*t264;
  t269 = -1.*t268*t214;
  t270 = t265 + t269;
  t272 = t237*t255*t169;
  t273 = t257*t190;
  t275 = t272 + t273;
  t279 = t240*t275;
  t280 = t162*t268;
  t281 = t264*t214;
  t284 = t280 + t281;
  t287 = -1.*t284*t248;
  t288 = t279 + t287;
  t300 = t162*t298;
  t304 = -1.*t303*t214;
  t305 = t300 + t304;
  t309 = -1.*t257*t237*t169;
  t310 = t255*t190;
  t311 = t309 + t310;
  t312 = t240*t311;
  t313 = t162*t303;
  t314 = t298*t214;
  t315 = t313 + t314;
  t316 = -1.*t315*t248;
  t317 = t312 + t316;
  t369 = -1.*t240;
  t370 = 1. + t369;
  t363 = -1.*t139;
  t364 = 1. + t363;
  t321 = t227*t222;
  t322 = t139*t250;
  t323 = t321 + t322;
  t345 = -1.*t167;
  t346 = 1. + t345;
  t347 = 0.135*t346;
  t350 = 0. + t347;
  t352 = -0.135*t192;
  t353 = 0. + t352;
  t355 = -1.*t162;
  t356 = 1. + t355;
  t357 = 0.135*t356;
  t358 = 0. + t357;
  t360 = -0.135*t214;
  t361 = 0. + t360;
  t365 = -0.09*t364;
  t366 = 0.049*t227;
  t367 = 0. + t365 + t366;
  t371 = -0.049*t370;
  t372 = -0.135*t248;
  t373 = 0. + t371 + t372;
  t375 = 0.135*t370;
  t376 = -0.049*t248;
  t377 = 0. + t375 + t376;
  t383 = -0.049*t364;
  t384 = -0.09*t227;
  t385 = 0. + t383 + t384;
  t324 = t227*t270;
  t326 = t139*t288;
  t327 = t324 + t326;
  t329 = t227*t305;
  t330 = t139*t317;
  t331 = t329 + t330;
  p_output1[0]=-1.*t139*t222 + t227*t250;
  p_output1[1]=-1.*t139*t270 + t227*t288;
  p_output1[2]=-1.*t139*t305 + t227*t317;
  p_output1[3]=0.;
  p_output1[4]=t323;
  p_output1[5]=t327;
  p_output1[6]=t331;
  p_output1[7]=0.;
  p_output1[8]=-1.*t240*t246 - 1.*t187*t237*t248;
  p_output1[9]=-1.*t248*t275 - 1.*t240*t284;
  p_output1[10]=-1.*t248*t311 - 1.*t240*t315;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t240*t246 + t187*t237*t248) - 0.21*(t139*t222 - 1.*t227*t250) - 0.049*t323 - 1.*t187*t190*t350 + t169*t353 + t207*t358 + t199*t361 + t222*t367 + t187*t237*t373 + t246*t377 + t250*t385 + var1[0];
  p_output1[13]=0. + 0.1305*(t248*t275 + t240*t284) - 0.21*(t139*t270 - 1.*t227*t288) - 0.049*t327 + t260*t350 - 1.*t187*t255*t353 + t268*t358 + t264*t361 + t270*t367 + t275*t373 + t284*t377 + t288*t385 + var1[1];
  p_output1[14]=0. + 0.1305*(t248*t311 + t240*t315) - 0.21*(t139*t305 - 1.*t227*t317) - 0.049*t331 + t296*t350 + t187*t257*t353 + t303*t358 + t298*t361 + t305*t367 + t311*t373 + t315*t377 + t317*t385 + var1[2];
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

#include "H_knee_joint_left.hh"

namespace SymExpression
{

void H_knee_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
