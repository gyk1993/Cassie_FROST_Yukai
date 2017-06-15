/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:10:24 GMT-04:00
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
  double t390;
  double t380;
  double t391;
  double t381;
  double t393;
  double t357;
  double t410;
  double t417;
  double t422;
  double t388;
  double t394;
  double t403;
  double t423;
  double t444;
  double t409;
  double t424;
  double t430;
  double t347;
  double t447;
  double t451;
  double t452;
  double t453;
  double t454;
  double t457;
  double t459;
  double t460;
  double t461;
  double t467;
  double t431;
  double t463;
  double t464;
  double t336;
  double t468;
  double t469;
  double t470;
  double t301;
  double t501;
  double t505;
  double t507;
  double t508;
  double t512;
  double t519;
  double t520;
  double t523;
  double t502;
  double t514;
  double t515;
  double t517;
  double t524;
  double t525;
  double t528;
  double t529;
  double t530;
  double t531;
  double t532;
  double t533;
  double t534;
  double t535;
  double t536;
  double t492;
  double t526;
  double t537;
  double t539;
  double t544;
  double t545;
  double t548;
  double t561;
  double t562;
  double t564;
  double t568;
  double t569;
  double t572;
  double t560;
  double t565;
  double t566;
  double t567;
  double t573;
  double t574;
  double t577;
  double t579;
  double t580;
  double t582;
  double t584;
  double t585;
  double t586;
  double t588;
  double t589;
  double t576;
  double t590;
  double t591;
  double t593;
  double t594;
  double t595;
  double t466;
  double t472;
  double t475;
  double t493;
  double t494;
  double t495;
  double t543;
  double t551;
  double t552;
  double t555;
  double t556;
  double t557;
  double t592;
  double t596;
  double t597;
  double t599;
  double t601;
  double t602;
  double t657;
  double t658;
  double t651;
  double t652;
  double t675;
  double t676;
  double t685;
  double t686;
  double t606;
  double t607;
  double t609;
  double t630;
  double t631;
  double t632;
  double t634;
  double t637;
  double t638;
  double t642;
  double t643;
  double t644;
  double t646;
  double t648;
  double t649;
  double t653;
  double t654;
  double t655;
  double t659;
  double t660;
  double t661;
  double t663;
  double t664;
  double t665;
  double t671;
  double t672;
  double t673;
  double t677;
  double t678;
  double t679;
  double t681;
  double t682;
  double t683;
  double t687;
  double t688;
  double t689;
  double t691;
  double t692;
  double t693;
  double t610;
  double t611;
  double t613;
  double t614;
  double t616;
  double t617;
  t390 = Cos(var1[4]);
  t380 = Cos(var1[6]);
  t391 = Sin(var1[5]);
  t381 = Sin(var1[4]);
  t393 = Sin(var1[6]);
  t357 = Cos(var1[7]);
  t410 = -1.*t390*t380*t391;
  t417 = t381*t393;
  t422 = t410 + t417;
  t388 = t380*t381;
  t394 = t390*t391*t393;
  t403 = t388 + t394;
  t423 = Sin(var1[7]);
  t444 = Cos(var1[9]);
  t409 = t357*t403;
  t424 = -1.*t422*t423;
  t430 = t409 + t424;
  t347 = Sin(var1[9]);
  t447 = Cos(var1[5]);
  t451 = Cos(var1[8]);
  t452 = t390*t447*t451;
  t453 = t357*t422;
  t454 = t403*t423;
  t457 = t453 + t454;
  t459 = Sin(var1[8]);
  t460 = -1.*t457*t459;
  t461 = t452 + t460;
  t467 = Cos(var1[10]);
  t431 = t347*t430;
  t463 = t444*t461;
  t464 = t431 + t463;
  t336 = Sin(var1[10]);
  t468 = t444*t430;
  t469 = -1.*t347*t461;
  t470 = t468 + t469;
  t301 = Cos(var1[11]);
  t501 = Sin(var1[3]);
  t505 = Cos(var1[3]);
  t507 = t505*t447;
  t508 = -1.*t501*t381*t391;
  t512 = t507 + t508;
  t519 = t380*t512;
  t520 = -1.*t390*t501*t393;
  t523 = t519 + t520;
  t502 = -1.*t390*t380*t501;
  t514 = -1.*t512*t393;
  t515 = t502 + t514;
  t517 = t357*t515;
  t524 = -1.*t523*t423;
  t525 = t517 + t524;
  t528 = t447*t501*t381;
  t529 = t505*t391;
  t530 = t528 + t529;
  t531 = t451*t530;
  t532 = t357*t523;
  t533 = t515*t423;
  t534 = t532 + t533;
  t535 = -1.*t534*t459;
  t536 = t531 + t535;
  t492 = Sin(var1[11]);
  t526 = t347*t525;
  t537 = t444*t536;
  t539 = t526 + t537;
  t544 = t444*t525;
  t545 = -1.*t347*t536;
  t548 = t544 + t545;
  t561 = t447*t501;
  t562 = t505*t381*t391;
  t564 = t561 + t562;
  t568 = t380*t564;
  t569 = t505*t390*t393;
  t572 = t568 + t569;
  t560 = t505*t390*t380;
  t565 = -1.*t564*t393;
  t566 = t560 + t565;
  t567 = t357*t566;
  t573 = -1.*t572*t423;
  t574 = t567 + t573;
  t577 = -1.*t505*t447*t381;
  t579 = t501*t391;
  t580 = t577 + t579;
  t582 = t451*t580;
  t584 = t357*t572;
  t585 = t566*t423;
  t586 = t584 + t585;
  t588 = -1.*t586*t459;
  t589 = t582 + t588;
  t576 = t347*t574;
  t590 = t444*t589;
  t591 = t576 + t590;
  t593 = t444*t574;
  t594 = -1.*t347*t589;
  t595 = t593 + t594;
  t466 = -1.*t336*t464;
  t472 = t467*t470;
  t475 = t466 + t472;
  t493 = t467*t464;
  t494 = t336*t470;
  t495 = t493 + t494;
  t543 = -1.*t336*t539;
  t551 = t467*t548;
  t552 = t543 + t551;
  t555 = t467*t539;
  t556 = t336*t548;
  t557 = t555 + t556;
  t592 = -1.*t336*t591;
  t596 = t467*t595;
  t597 = t592 + t596;
  t599 = t467*t591;
  t601 = t336*t595;
  t602 = t599 + t601;
  t657 = -1.*t451;
  t658 = 1. + t657;
  t651 = -1.*t444;
  t652 = 1. + t651;
  t675 = -1.*t467;
  t676 = 1. + t675;
  t685 = -1.*t301;
  t686 = 1. + t685;
  t606 = t492*t475;
  t607 = t301*t495;
  t609 = t606 + t607;
  t630 = -1.*t380;
  t631 = 1. + t630;
  t632 = 0.135*t631;
  t634 = 0. + t632;
  t637 = -0.135*t393;
  t638 = 0. + t637;
  t642 = -1.*t357;
  t643 = 1. + t642;
  t644 = 0.135*t643;
  t646 = 0. + t644;
  t648 = -0.135*t423;
  t649 = 0. + t648;
  t653 = -0.09*t652;
  t654 = 0.049*t347;
  t655 = 0. + t653 + t654;
  t659 = -0.049*t658;
  t660 = -0.135*t459;
  t661 = 0. + t659 + t660;
  t663 = 0.135*t658;
  t664 = -0.049*t459;
  t665 = 0. + t663 + t664;
  t671 = -0.049*t652;
  t672 = -0.09*t347;
  t673 = 0. + t671 + t672;
  t677 = -0.049*t676;
  t678 = -0.21*t336;
  t679 = 0. + t677 + t678;
  t681 = -0.21*t676;
  t682 = 0.049*t336;
  t683 = 0. + t681 + t682;
  t687 = -0.2707*t686;
  t688 = 0.0016*t492;
  t689 = 0. + t687 + t688;
  t691 = -0.0016*t686;
  t692 = -0.2707*t492;
  t693 = 0. + t691 + t692;
  t610 = t492*t552;
  t611 = t301*t557;
  t613 = t610 + t611;
  t614 = t492*t597;
  t616 = t301*t602;
  t617 = t614 + t616;
  p_output1[0]=-1.*t301*t475 + t492*t495;
  p_output1[1]=-1.*t301*t552 + t492*t557;
  p_output1[2]=-1.*t301*t597 + t492*t602;
  p_output1[3]=0.;
  p_output1[4]=t609;
  p_output1[5]=t613;
  p_output1[6]=t617;
  p_output1[7]=0.;
  p_output1[8]=-1.*t451*t457 - 1.*t390*t447*t459;
  p_output1[9]=-1.*t459*t530 - 1.*t451*t534;
  p_output1[10]=-1.*t459*t580 - 1.*t451*t586;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t451*t457 + t390*t447*t459) - 0.7055*(t301*t475 - 1.*t492*t495) + 0.0184*t609 - 1.*t390*t391*t634 + t381*t638 + t422*t646 + t403*t649 + t430*t655 + t390*t447*t661 + t457*t665 + t461*t673 + t464*t679 + t470*t683 + t475*t689 + t495*t693 + var1[0];
  p_output1[13]=0. + 0.1305*(t459*t530 + t451*t534) - 0.7055*(t301*t552 - 1.*t492*t557) + 0.0184*t613 + t512*t634 - 1.*t390*t501*t638 + t523*t646 + t515*t649 + t525*t655 + t530*t661 + t534*t665 + t536*t673 + t539*t679 + t548*t683 + t552*t689 + t557*t693 + var1[1];
  p_output1[14]=0. + 0.1305*(t459*t580 + t451*t586) - 0.7055*(t301*t597 - 1.*t492*t602) + 0.0184*t617 + t564*t634 + t390*t505*t638 + t572*t646 + t566*t649 + t574*t655 + t580*t661 + t586*t665 + t589*t673 + t591*t679 + t595*t683 + t597*t689 + t602*t693 + var1[2];
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

#include "H_ankle_joint_left.hh"

namespace SymExpression
{

void H_ankle_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
