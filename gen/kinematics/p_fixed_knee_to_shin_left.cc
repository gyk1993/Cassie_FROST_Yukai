/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:10:22 GMT-04:00
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
  double t180;
  double t197;
  double t243;
  double t245;
  double t251;
  double t265;
  double t292;
  double t293;
  double t294;
  double t279;
  double t280;
  double t281;
  double t295;
  double t326;
  double t327;
  double t329;
  double t331;
  double t338;
  double t339;
  double t340;
  double t324;
  double t302;
  double t308;
  double t310;
  double t313;
  double t319;
  double t321;
  double t322;
  double t361;
  double t362;
  double t365;
  double t367;
  double t368;
  double t371;
  double t373;
  double t376;
  double t377;
  double t378;
  double t383;
  double t384;
  double t385;
  double t199;
  double t200;
  double t204;
  double t223;
  double t398;
  double t252;
  double t258;
  double t266;
  double t271;
  double t272;
  double t273;
  double t396;
  double t397;
  double t399;
  double t400;
  double t298;
  double t300;
  double t312;
  double t314;
  double t318;
  double t407;
  double t408;
  double t409;
  double t403;
  double t404;
  double t405;
  double t330;
  double t334;
  double t336;
  double t342;
  double t343;
  double t344;
  double t419;
  double t420;
  double t421;
  double t415;
  double t416;
  double t417;
  double t358;
  double t359;
  double t360;
  double t372;
  double t374;
  double t375;
  double t411;
  double t412;
  double t413;
  double t427;
  double t428;
  double t429;
  double t380;
  double t381;
  double t382;
  double t431;
  double t432;
  double t433;
  double t435;
  double t436;
  double t437;
  double t448;
  double t449;
  double t450;
  double t457;
  double t458;
  double t459;
  double t453;
  double t454;
  double t455;
  double t469;
  double t470;
  double t471;
  double t465;
  double t466;
  double t467;
  double t461;
  double t462;
  double t463;
  double t477;
  double t478;
  double t479;
  double t481;
  double t482;
  double t483;
  double t485;
  double t486;
  double t487;
  t180 = Cos(var1[4]);
  t197 = Cos(var1[6]);
  t243 = Sin(var1[5]);
  t245 = Sin(var1[4]);
  t251 = Sin(var1[6]);
  t265 = Cos(var1[7]);
  t292 = t197*t245;
  t293 = t180*t243*t251;
  t294 = t292 + t293;
  t279 = -1.*t180*t197*t243;
  t280 = t245*t251;
  t281 = t279 + t280;
  t295 = Sin(var1[7]);
  t326 = Cos(var1[8]);
  t327 = -1.*t326;
  t329 = 1. + t327;
  t331 = Sin(var1[8]);
  t338 = t265*t281;
  t339 = t294*t295;
  t340 = t338 + t339;
  t324 = Cos(var1[5]);
  t302 = Cos(var1[9]);
  t308 = -1.*t302;
  t310 = 1. + t308;
  t313 = Sin(var1[9]);
  t319 = t265*t294;
  t321 = -1.*t281*t295;
  t322 = t319 + t321;
  t361 = t180*t324*t326;
  t362 = -1.*t340*t331;
  t365 = t361 + t362;
  t367 = Cos(var1[10]);
  t368 = -1.*t367;
  t371 = 1. + t368;
  t373 = Sin(var1[10]);
  t376 = t313*t322;
  t377 = t302*t365;
  t378 = t376 + t377;
  t383 = t302*t322;
  t384 = -1.*t313*t365;
  t385 = t383 + t384;
  t199 = -1.*t197;
  t200 = 1. + t199;
  t204 = 0.135*t200;
  t223 = 0. + t204;
  t398 = Sin(var1[3]);
  t252 = -0.135*t251;
  t258 = 0. + t252;
  t266 = -1.*t265;
  t271 = 1. + t266;
  t272 = 0.135*t271;
  t273 = 0. + t272;
  t396 = Cos(var1[3]);
  t397 = t396*t324;
  t399 = -1.*t398*t245*t243;
  t400 = t397 + t399;
  t298 = -0.135*t295;
  t300 = 0. + t298;
  t312 = -0.09*t310;
  t314 = 0.049*t313;
  t318 = 0. + t312 + t314;
  t407 = -1.*t180*t197*t398;
  t408 = -1.*t400*t251;
  t409 = t407 + t408;
  t403 = t197*t400;
  t404 = -1.*t180*t398*t251;
  t405 = t403 + t404;
  t330 = -0.049*t329;
  t334 = -0.135*t331;
  t336 = 0. + t330 + t334;
  t342 = 0.135*t329;
  t343 = -0.049*t331;
  t344 = 0. + t342 + t343;
  t419 = t265*t405;
  t420 = t409*t295;
  t421 = t419 + t420;
  t415 = t324*t398*t245;
  t416 = t396*t243;
  t417 = t415 + t416;
  t358 = -0.049*t310;
  t359 = -0.09*t313;
  t360 = 0. + t358 + t359;
  t372 = -0.049*t371;
  t374 = -0.21*t373;
  t375 = 0. + t372 + t374;
  t411 = t265*t409;
  t412 = -1.*t405*t295;
  t413 = t411 + t412;
  t427 = t326*t417;
  t428 = -1.*t421*t331;
  t429 = t427 + t428;
  t380 = -0.21*t371;
  t381 = 0.049*t373;
  t382 = 0. + t380 + t381;
  t431 = t313*t413;
  t432 = t302*t429;
  t433 = t431 + t432;
  t435 = t302*t413;
  t436 = -1.*t313*t429;
  t437 = t435 + t436;
  t448 = t324*t398;
  t449 = t396*t245*t243;
  t450 = t448 + t449;
  t457 = t396*t180*t197;
  t458 = -1.*t450*t251;
  t459 = t457 + t458;
  t453 = t197*t450;
  t454 = t396*t180*t251;
  t455 = t453 + t454;
  t469 = t265*t455;
  t470 = t459*t295;
  t471 = t469 + t470;
  t465 = -1.*t396*t324*t245;
  t466 = t398*t243;
  t467 = t465 + t466;
  t461 = t265*t459;
  t462 = -1.*t455*t295;
  t463 = t461 + t462;
  t477 = t326*t467;
  t478 = -1.*t471*t331;
  t479 = t477 + t478;
  t481 = t313*t463;
  t482 = t302*t479;
  t483 = t481 + t482;
  t485 = t302*t463;
  t486 = -1.*t313*t479;
  t487 = t485 + t486;
  p_output1[0]=0. - 1.*t180*t223*t243 + t245*t258 + t273*t281 + t294*t300 + t318*t322 + t180*t324*t336 + 0.1305*(t180*t324*t331 + t326*t340) + t340*t344 + t360*t365 + t375*t378 + t382*t385 - 0.2707*(-1.*t373*t378 + t367*t385) - 0.0016*(t367*t378 + t373*t385) + var1[0];
  p_output1[1]=0. - 1.*t180*t258*t398 + t223*t400 + t273*t405 + t300*t409 + t318*t413 + t336*t417 + t344*t421 + 0.1305*(t331*t417 + t326*t421) + t360*t429 + t375*t433 + t382*t437 - 0.2707*(-1.*t373*t433 + t367*t437) - 0.0016*(t367*t433 + t373*t437) + var1[1];
  p_output1[2]=0. + t180*t258*t396 + t223*t450 + t273*t455 + t300*t459 + t318*t463 + t336*t467 + t344*t471 + 0.1305*(t331*t467 + t326*t471) + t360*t479 + t375*t483 + t382*t487 - 0.2707*(-1.*t373*t483 + t367*t487) - 0.0016*(t367*t483 + t373*t487) + var1[2];
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

#include "p_fixed_knee_to_shin_left.hh"

namespace SymExpression
{

void p_fixed_knee_to_shin_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
