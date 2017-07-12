/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:03 GMT-04:00
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
  double t280;
  double t264;
  double t289;
  double t272;
  double t292;
  double t252;
  double t300;
  double t301;
  double t312;
  double t273;
  double t293;
  double t294;
  double t314;
  double t323;
  double t298;
  double t318;
  double t319;
  double t244;
  double t330;
  double t334;
  double t336;
  double t337;
  double t338;
  double t339;
  double t342;
  double t343;
  double t344;
  double t204;
  double t366;
  double t374;
  double t375;
  double t376;
  double t377;
  double t382;
  double t383;
  double t386;
  double t372;
  double t379;
  double t380;
  double t354;
  double t381;
  double t387;
  double t388;
  double t390;
  double t391;
  double t392;
  double t393;
  double t394;
  double t395;
  double t397;
  double t401;
  double t402;
  double t417;
  double t418;
  double t419;
  double t424;
  double t425;
  double t426;
  double t416;
  double t420;
  double t422;
  double t423;
  double t427;
  double t430;
  double t432;
  double t434;
  double t435;
  double t438;
  double t439;
  double t440;
  double t441;
  double t442;
  double t443;
  double t322;
  double t347;
  double t351;
  double t357;
  double t358;
  double t359;
  double t389;
  double t403;
  double t406;
  double t410;
  double t411;
  double t413;
  double t431;
  double t444;
  double t445;
  double t447;
  double t448;
  double t449;
  double t503;
  double t504;
  double t497;
  double t498;
  double t521;
  double t522;
  double t453;
  double t454;
  double t456;
  double t476;
  double t477;
  double t480;
  double t481;
  double t484;
  double t485;
  double t489;
  double t490;
  double t491;
  double t492;
  double t494;
  double t495;
  double t499;
  double t500;
  double t501;
  double t505;
  double t506;
  double t507;
  double t509;
  double t510;
  double t511;
  double t517;
  double t518;
  double t519;
  double t523;
  double t524;
  double t525;
  double t527;
  double t528;
  double t529;
  double t457;
  double t459;
  double t460;
  double t461;
  double t463;
  double t464;
  t280 = Cos(var1[4]);
  t264 = Cos(var1[6]);
  t289 = Sin(var1[5]);
  t272 = Sin(var1[4]);
  t292 = Sin(var1[6]);
  t252 = Cos(var1[7]);
  t300 = -1.*t280*t264*t289;
  t301 = t272*t292;
  t312 = t300 + t301;
  t273 = t264*t272;
  t293 = t280*t289*t292;
  t294 = t273 + t293;
  t314 = Sin(var1[7]);
  t323 = Cos(var1[9]);
  t298 = t252*t294;
  t318 = -1.*t312*t314;
  t319 = t298 + t318;
  t244 = Sin(var1[9]);
  t330 = Cos(var1[5]);
  t334 = Cos(var1[8]);
  t336 = t280*t330*t334;
  t337 = t252*t312;
  t338 = t294*t314;
  t339 = t337 + t338;
  t342 = Sin(var1[8]);
  t343 = -1.*t339*t342;
  t344 = t336 + t343;
  t204 = Sin(var1[10]);
  t366 = Sin(var1[3]);
  t374 = Cos(var1[3]);
  t375 = t374*t330;
  t376 = -1.*t366*t272*t289;
  t377 = t375 + t376;
  t382 = t264*t377;
  t383 = -1.*t280*t366*t292;
  t386 = t382 + t383;
  t372 = -1.*t280*t264*t366;
  t379 = -1.*t377*t292;
  t380 = t372 + t379;
  t354 = Cos(var1[10]);
  t381 = t252*t380;
  t387 = -1.*t386*t314;
  t388 = t381 + t387;
  t390 = t330*t366*t272;
  t391 = t374*t289;
  t392 = t390 + t391;
  t393 = t334*t392;
  t394 = t252*t386;
  t395 = t380*t314;
  t397 = t394 + t395;
  t401 = -1.*t397*t342;
  t402 = t393 + t401;
  t417 = t330*t366;
  t418 = t374*t272*t289;
  t419 = t417 + t418;
  t424 = t264*t419;
  t425 = t374*t280*t292;
  t426 = t424 + t425;
  t416 = t374*t280*t264;
  t420 = -1.*t419*t292;
  t422 = t416 + t420;
  t423 = t252*t422;
  t427 = -1.*t426*t314;
  t430 = t423 + t427;
  t432 = -1.*t374*t330*t272;
  t434 = t366*t289;
  t435 = t432 + t434;
  t438 = t334*t435;
  t439 = t252*t426;
  t440 = t422*t314;
  t441 = t439 + t440;
  t442 = -1.*t441*t342;
  t443 = t438 + t442;
  t322 = t244*t319;
  t347 = t323*t344;
  t351 = t322 + t347;
  t357 = t323*t319;
  t358 = -1.*t244*t344;
  t359 = t357 + t358;
  t389 = t244*t388;
  t403 = t323*t402;
  t406 = t389 + t403;
  t410 = t323*t388;
  t411 = -1.*t244*t402;
  t413 = t410 + t411;
  t431 = t244*t430;
  t444 = t323*t443;
  t445 = t431 + t444;
  t447 = t323*t430;
  t448 = -1.*t244*t443;
  t449 = t447 + t448;
  t503 = -1.*t334;
  t504 = 1. + t503;
  t497 = -1.*t323;
  t498 = 1. + t497;
  t521 = -1.*t354;
  t522 = 1. + t521;
  t453 = t354*t351;
  t454 = t204*t359;
  t456 = t453 + t454;
  t476 = -1.*t264;
  t477 = 1. + t476;
  t480 = 0.135*t477;
  t481 = 0. + t480;
  t484 = -0.135*t292;
  t485 = 0. + t484;
  t489 = -1.*t252;
  t490 = 1. + t489;
  t491 = 0.135*t490;
  t492 = 0. + t491;
  t494 = -0.135*t314;
  t495 = 0. + t494;
  t499 = -0.09*t498;
  t500 = 0.049*t244;
  t501 = 0. + t499 + t500;
  t505 = -0.049*t504;
  t506 = -0.135*t342;
  t507 = 0. + t505 + t506;
  t509 = 0.135*t504;
  t510 = -0.049*t342;
  t511 = 0. + t509 + t510;
  t517 = -0.049*t498;
  t518 = -0.09*t244;
  t519 = 0. + t517 + t518;
  t523 = -0.049*t522;
  t524 = -0.21*t204;
  t525 = 0. + t523 + t524;
  t527 = -0.21*t522;
  t528 = 0.049*t204;
  t529 = 0. + t527 + t528;
  t457 = t354*t406;
  t459 = t204*t413;
  t460 = t457 + t459;
  t461 = t354*t445;
  t463 = t204*t449;
  t464 = t461 + t463;
  p_output1[0]=t204*t351 - 1.*t354*t359;
  p_output1[1]=t204*t406 - 1.*t354*t413;
  p_output1[2]=t204*t445 - 1.*t354*t449;
  p_output1[3]=0.;
  p_output1[4]=t456;
  p_output1[5]=t460;
  p_output1[6]=t464;
  p_output1[7]=0.;
  p_output1[8]=-1.*t334*t339 - 1.*t280*t330*t342;
  p_output1[9]=-1.*t342*t392 - 1.*t334*t397;
  p_output1[10]=-1.*t342*t435 - 1.*t334*t441;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t334*t339 + t280*t330*t342) - 0.2707*(-1.*t204*t351 + t354*t359) - 0.0016*t456 - 1.*t280*t289*t481 + t272*t485 + t312*t492 + t294*t495 + t319*t501 + t280*t330*t507 + t339*t511 + t344*t519 + t351*t525 + t359*t529 + var1[0];
  p_output1[13]=0. + 0.1305*(t342*t392 + t334*t397) - 0.2707*(-1.*t204*t406 + t354*t413) - 0.0016*t460 + t377*t481 - 1.*t280*t366*t485 + t386*t492 + t380*t495 + t388*t501 + t392*t507 + t397*t511 + t402*t519 + t406*t525 + t413*t529 + var1[1];
  p_output1[14]=0. + 0.1305*(t342*t435 + t334*t441) - 0.2707*(-1.*t204*t445 + t354*t449) - 0.0016*t464 + t419*t481 + t280*t374*t485 + t426*t492 + t422*t495 + t430*t501 + t435*t507 + t441*t511 + t443*t519 + t445*t525 + t449*t529 + var1[2];
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

#include "H_fixed_knee_to_shin_left.hh"

namespace SymExpression
{

void H_fixed_knee_to_shin_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
