/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:10:23 GMT-04:00
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
  double t273;
  double t293;
  double t322;
  double t337;
  double t338;
  double t360;
  double t391;
  double t393;
  double t394;
  double t382;
  double t388;
  double t389;
  double t395;
  double t438;
  double t439;
  double t440;
  double t446;
  double t453;
  double t454;
  double t456;
  double t434;
  double t414;
  double t415;
  double t416;
  double t418;
  double t424;
  double t425;
  double t430;
  double t472;
  double t473;
  double t474;
  double t480;
  double t482;
  double t484;
  double t491;
  double t494;
  double t495;
  double t496;
  double t505;
  double t506;
  double t507;
  double t509;
  double t510;
  double t511;
  double t513;
  double t516;
  double t517;
  double t518;
  double t525;
  double t526;
  double t527;
  double t294;
  double t298;
  double t301;
  double t319;
  double t540;
  double t347;
  double t352;
  double t361;
  double t375;
  double t380;
  double t381;
  double t538;
  double t539;
  double t541;
  double t542;
  double t403;
  double t409;
  double t417;
  double t422;
  double t423;
  double t549;
  double t550;
  double t551;
  double t545;
  double t546;
  double t547;
  double t444;
  double t447;
  double t451;
  double t457;
  double t459;
  double t460;
  double t561;
  double t562;
  double t563;
  double t557;
  double t558;
  double t559;
  double t468;
  double t469;
  double t470;
  double t488;
  double t492;
  double t493;
  double t553;
  double t554;
  double t555;
  double t569;
  double t570;
  double t571;
  double t500;
  double t501;
  double t502;
  double t512;
  double t514;
  double t515;
  double t573;
  double t574;
  double t575;
  double t577;
  double t578;
  double t579;
  double t520;
  double t523;
  double t524;
  double t581;
  double t582;
  double t583;
  double t585;
  double t586;
  double t587;
  double t598;
  double t599;
  double t600;
  double t607;
  double t608;
  double t609;
  double t603;
  double t604;
  double t605;
  double t619;
  double t620;
  double t621;
  double t615;
  double t616;
  double t617;
  double t611;
  double t612;
  double t613;
  double t627;
  double t628;
  double t629;
  double t631;
  double t632;
  double t633;
  double t635;
  double t636;
  double t637;
  double t639;
  double t640;
  double t641;
  double t643;
  double t644;
  double t645;
  t273 = Cos(var1[4]);
  t293 = Cos(var1[6]);
  t322 = Sin(var1[5]);
  t337 = Sin(var1[4]);
  t338 = Sin(var1[6]);
  t360 = Cos(var1[7]);
  t391 = t293*t337;
  t393 = t273*t322*t338;
  t394 = t391 + t393;
  t382 = -1.*t273*t293*t322;
  t388 = t337*t338;
  t389 = t382 + t388;
  t395 = Sin(var1[7]);
  t438 = Cos(var1[8]);
  t439 = -1.*t438;
  t440 = 1. + t439;
  t446 = Sin(var1[8]);
  t453 = t360*t389;
  t454 = t394*t395;
  t456 = t453 + t454;
  t434 = Cos(var1[5]);
  t414 = Cos(var1[9]);
  t415 = -1.*t414;
  t416 = 1. + t415;
  t418 = Sin(var1[9]);
  t424 = t360*t394;
  t425 = -1.*t389*t395;
  t430 = t424 + t425;
  t472 = t273*t434*t438;
  t473 = -1.*t456*t446;
  t474 = t472 + t473;
  t480 = Cos(var1[10]);
  t482 = -1.*t480;
  t484 = 1. + t482;
  t491 = Sin(var1[10]);
  t494 = t418*t430;
  t495 = t414*t474;
  t496 = t494 + t495;
  t505 = t414*t430;
  t506 = -1.*t418*t474;
  t507 = t505 + t506;
  t509 = Cos(var1[11]);
  t510 = -1.*t509;
  t511 = 1. + t510;
  t513 = Sin(var1[11]);
  t516 = -1.*t491*t496;
  t517 = t480*t507;
  t518 = t516 + t517;
  t525 = t480*t496;
  t526 = t491*t507;
  t527 = t525 + t526;
  t294 = -1.*t293;
  t298 = 1. + t294;
  t301 = 0.135*t298;
  t319 = 0. + t301;
  t540 = Sin(var1[3]);
  t347 = -0.135*t338;
  t352 = 0. + t347;
  t361 = -1.*t360;
  t375 = 1. + t361;
  t380 = 0.135*t375;
  t381 = 0. + t380;
  t538 = Cos(var1[3]);
  t539 = t538*t434;
  t541 = -1.*t540*t337*t322;
  t542 = t539 + t541;
  t403 = -0.135*t395;
  t409 = 0. + t403;
  t417 = -0.09*t416;
  t422 = 0.049*t418;
  t423 = 0. + t417 + t422;
  t549 = -1.*t273*t293*t540;
  t550 = -1.*t542*t338;
  t551 = t549 + t550;
  t545 = t293*t542;
  t546 = -1.*t273*t540*t338;
  t547 = t545 + t546;
  t444 = -0.049*t440;
  t447 = -0.135*t446;
  t451 = 0. + t444 + t447;
  t457 = 0.135*t440;
  t459 = -0.049*t446;
  t460 = 0. + t457 + t459;
  t561 = t360*t547;
  t562 = t551*t395;
  t563 = t561 + t562;
  t557 = t434*t540*t337;
  t558 = t538*t322;
  t559 = t557 + t558;
  t468 = -0.049*t416;
  t469 = -0.09*t418;
  t470 = 0. + t468 + t469;
  t488 = -0.049*t484;
  t492 = -0.21*t491;
  t493 = 0. + t488 + t492;
  t553 = t360*t551;
  t554 = -1.*t547*t395;
  t555 = t553 + t554;
  t569 = t438*t559;
  t570 = -1.*t563*t446;
  t571 = t569 + t570;
  t500 = -0.21*t484;
  t501 = 0.049*t491;
  t502 = 0. + t500 + t501;
  t512 = -0.2707*t511;
  t514 = 0.0016*t513;
  t515 = 0. + t512 + t514;
  t573 = t418*t555;
  t574 = t414*t571;
  t575 = t573 + t574;
  t577 = t414*t555;
  t578 = -1.*t418*t571;
  t579 = t577 + t578;
  t520 = -0.0016*t511;
  t523 = -0.2707*t513;
  t524 = 0. + t520 + t523;
  t581 = -1.*t491*t575;
  t582 = t480*t579;
  t583 = t581 + t582;
  t585 = t480*t575;
  t586 = t491*t579;
  t587 = t585 + t586;
  t598 = t434*t540;
  t599 = t538*t337*t322;
  t600 = t598 + t599;
  t607 = t538*t273*t293;
  t608 = -1.*t600*t338;
  t609 = t607 + t608;
  t603 = t293*t600;
  t604 = t538*t273*t338;
  t605 = t603 + t604;
  t619 = t360*t605;
  t620 = t609*t395;
  t621 = t619 + t620;
  t615 = -1.*t538*t434*t337;
  t616 = t540*t322;
  t617 = t615 + t616;
  t611 = t360*t609;
  t612 = -1.*t605*t395;
  t613 = t611 + t612;
  t627 = t438*t617;
  t628 = -1.*t621*t446;
  t629 = t627 + t628;
  t631 = t418*t613;
  t632 = t414*t629;
  t633 = t631 + t632;
  t635 = t414*t613;
  t636 = -1.*t418*t629;
  t637 = t635 + t636;
  t639 = -1.*t491*t633;
  t640 = t480*t637;
  t641 = t639 + t640;
  t643 = t480*t633;
  t644 = t491*t637;
  t645 = t643 + t644;
  p_output1[0]=0. - 1.*t273*t319*t322 + t337*t352 + t381*t389 + t394*t409 + t423*t430 + t273*t434*t451 + 0.1305*(t273*t434*t446 + t438*t456) + t456*t460 + t470*t474 + t493*t496 + t502*t507 + t515*t518 + t524*t527 + 0.0184*(t513*t518 + t509*t527) - 0.7055*(t509*t518 - 1.*t513*t527) + var1[0];
  p_output1[1]=0. - 1.*t273*t352*t540 + t319*t542 + t381*t547 + t409*t551 + t423*t555 + t451*t559 + t460*t563 + 0.1305*(t446*t559 + t438*t563) + t470*t571 + t493*t575 + t502*t579 + t515*t583 + t524*t587 + 0.0184*(t513*t583 + t509*t587) - 0.7055*(t509*t583 - 1.*t513*t587) + var1[1];
  p_output1[2]=0. + t273*t352*t538 + t319*t600 + t381*t605 + t409*t609 + t423*t613 + t451*t617 + t460*t621 + 0.1305*(t446*t617 + t438*t621) + t470*t629 + t493*t633 + t502*t637 + t515*t641 + t524*t645 + 0.0184*(t513*t641 + t509*t645) - 0.7055*(t509*t641 - 1.*t513*t645) + var1[2];
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

#include "p_ankle_joint_left.hh"

namespace SymExpression
{

void p_ankle_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
