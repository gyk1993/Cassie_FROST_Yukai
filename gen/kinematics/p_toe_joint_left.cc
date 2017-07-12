/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:05 GMT-04:00
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
  double t388;
  double t394;
  double t431;
  double t453;
  double t454;
  double t472;
  double t519;
  double t525;
  double t526;
  double t500;
  double t507;
  double t515;
  double t528;
  double t562;
  double t566;
  double t567;
  double t569;
  double t582;
  double t584;
  double t585;
  double t561;
  double t533;
  double t537;
  double t544;
  double t551;
  double t556;
  double t558;
  double t559;
  double t609;
  double t610;
  double t611;
  double t614;
  double t616;
  double t617;
  double t619;
  double t623;
  double t624;
  double t625;
  double t637;
  double t640;
  double t644;
  double t647;
  double t648;
  double t649;
  double t653;
  double t656;
  double t659;
  double t660;
  double t665;
  double t666;
  double t667;
  double t669;
  double t670;
  double t671;
  double t673;
  double t678;
  double t679;
  double t680;
  double t687;
  double t688;
  double t689;
  double t403;
  double t409;
  double t417;
  double t430;
  double t702;
  double t463;
  double t468;
  double t488;
  double t493;
  double t494;
  double t499;
  double t700;
  double t701;
  double t703;
  double t704;
  double t529;
  double t531;
  double t548;
  double t553;
  double t555;
  double t711;
  double t712;
  double t713;
  double t707;
  double t708;
  double t709;
  double t568;
  double t574;
  double t576;
  double t590;
  double t593;
  double t595;
  double t723;
  double t724;
  double t725;
  double t719;
  double t720;
  double t721;
  double t604;
  double t606;
  double t607;
  double t618;
  double t620;
  double t622;
  double t715;
  double t716;
  double t717;
  double t731;
  double t732;
  double t733;
  double t627;
  double t632;
  double t635;
  double t650;
  double t654;
  double t655;
  double t735;
  double t736;
  double t737;
  double t739;
  double t740;
  double t741;
  double t662;
  double t663;
  double t664;
  double t672;
  double t674;
  double t677;
  double t743;
  double t744;
  double t745;
  double t747;
  double t748;
  double t749;
  double t682;
  double t683;
  double t684;
  double t751;
  double t752;
  double t753;
  double t755;
  double t756;
  double t757;
  double t768;
  double t769;
  double t770;
  double t777;
  double t778;
  double t779;
  double t773;
  double t774;
  double t775;
  double t789;
  double t790;
  double t791;
  double t785;
  double t786;
  double t787;
  double t781;
  double t782;
  double t783;
  double t797;
  double t798;
  double t799;
  double t801;
  double t802;
  double t803;
  double t805;
  double t806;
  double t807;
  double t809;
  double t810;
  double t811;
  double t813;
  double t814;
  double t815;
  double t817;
  double t818;
  double t819;
  double t821;
  double t822;
  double t823;
  t388 = Cos(var1[4]);
  t394 = Cos(var1[6]);
  t431 = Sin(var1[5]);
  t453 = Sin(var1[4]);
  t454 = Sin(var1[6]);
  t472 = Cos(var1[7]);
  t519 = t394*t453;
  t525 = t388*t431*t454;
  t526 = t519 + t525;
  t500 = -1.*t388*t394*t431;
  t507 = t453*t454;
  t515 = t500 + t507;
  t528 = Sin(var1[7]);
  t562 = Cos(var1[8]);
  t566 = -1.*t562;
  t567 = 1. + t566;
  t569 = Sin(var1[8]);
  t582 = t472*t515;
  t584 = t526*t528;
  t585 = t582 + t584;
  t561 = Cos(var1[5]);
  t533 = Cos(var1[9]);
  t537 = -1.*t533;
  t544 = 1. + t537;
  t551 = Sin(var1[9]);
  t556 = t472*t526;
  t558 = -1.*t515*t528;
  t559 = t556 + t558;
  t609 = t388*t561*t562;
  t610 = -1.*t585*t569;
  t611 = t609 + t610;
  t614 = Cos(var1[10]);
  t616 = -1.*t614;
  t617 = 1. + t616;
  t619 = Sin(var1[10]);
  t623 = t551*t559;
  t624 = t533*t611;
  t625 = t623 + t624;
  t637 = t533*t559;
  t640 = -1.*t551*t611;
  t644 = t637 + t640;
  t647 = Cos(var1[11]);
  t648 = -1.*t647;
  t649 = 1. + t648;
  t653 = Sin(var1[11]);
  t656 = -1.*t619*t625;
  t659 = t614*t644;
  t660 = t656 + t659;
  t665 = t614*t625;
  t666 = t619*t644;
  t667 = t665 + t666;
  t669 = Cos(var1[12]);
  t670 = -1.*t669;
  t671 = 1. + t670;
  t673 = Sin(var1[12]);
  t678 = t653*t660;
  t679 = t647*t667;
  t680 = t678 + t679;
  t687 = t647*t660;
  t688 = -1.*t653*t667;
  t689 = t687 + t688;
  t403 = -1.*t394;
  t409 = 1. + t403;
  t417 = 0.135*t409;
  t430 = 0. + t417;
  t702 = Sin(var1[3]);
  t463 = -0.135*t454;
  t468 = 0. + t463;
  t488 = -1.*t472;
  t493 = 1. + t488;
  t494 = 0.135*t493;
  t499 = 0. + t494;
  t700 = Cos(var1[3]);
  t701 = t700*t561;
  t703 = -1.*t702*t453*t431;
  t704 = t701 + t703;
  t529 = -0.135*t528;
  t531 = 0. + t529;
  t548 = -0.09*t544;
  t553 = 0.049*t551;
  t555 = 0. + t548 + t553;
  t711 = -1.*t388*t394*t702;
  t712 = -1.*t704*t454;
  t713 = t711 + t712;
  t707 = t394*t704;
  t708 = -1.*t388*t702*t454;
  t709 = t707 + t708;
  t568 = -0.049*t567;
  t574 = -0.135*t569;
  t576 = 0. + t568 + t574;
  t590 = 0.135*t567;
  t593 = -0.049*t569;
  t595 = 0. + t590 + t593;
  t723 = t472*t709;
  t724 = t713*t528;
  t725 = t723 + t724;
  t719 = t561*t702*t453;
  t720 = t700*t431;
  t721 = t719 + t720;
  t604 = -0.049*t544;
  t606 = -0.09*t551;
  t607 = 0. + t604 + t606;
  t618 = -0.049*t617;
  t620 = -0.21*t619;
  t622 = 0. + t618 + t620;
  t715 = t472*t713;
  t716 = -1.*t709*t528;
  t717 = t715 + t716;
  t731 = t562*t721;
  t732 = -1.*t725*t569;
  t733 = t731 + t732;
  t627 = -0.21*t617;
  t632 = 0.049*t619;
  t635 = 0. + t627 + t632;
  t650 = -0.2707*t649;
  t654 = 0.0016*t653;
  t655 = 0. + t650 + t654;
  t735 = t551*t717;
  t736 = t533*t733;
  t737 = t735 + t736;
  t739 = t533*t717;
  t740 = -1.*t551*t733;
  t741 = t739 + t740;
  t662 = -0.0016*t649;
  t663 = -0.2707*t653;
  t664 = 0. + t662 + t663;
  t672 = 0.0184*t671;
  t674 = -0.7055*t673;
  t677 = 0. + t672 + t674;
  t743 = -1.*t619*t737;
  t744 = t614*t741;
  t745 = t743 + t744;
  t747 = t614*t737;
  t748 = t619*t741;
  t749 = t747 + t748;
  t682 = -0.7055*t671;
  t683 = -0.0184*t673;
  t684 = 0. + t682 + t683;
  t751 = t653*t745;
  t752 = t647*t749;
  t753 = t751 + t752;
  t755 = t647*t745;
  t756 = -1.*t653*t749;
  t757 = t755 + t756;
  t768 = t561*t702;
  t769 = t700*t453*t431;
  t770 = t768 + t769;
  t777 = t700*t388*t394;
  t778 = -1.*t770*t454;
  t779 = t777 + t778;
  t773 = t394*t770;
  t774 = t700*t388*t454;
  t775 = t773 + t774;
  t789 = t472*t775;
  t790 = t779*t528;
  t791 = t789 + t790;
  t785 = -1.*t700*t561*t453;
  t786 = t702*t431;
  t787 = t785 + t786;
  t781 = t472*t779;
  t782 = -1.*t775*t528;
  t783 = t781 + t782;
  t797 = t562*t787;
  t798 = -1.*t791*t569;
  t799 = t797 + t798;
  t801 = t551*t783;
  t802 = t533*t799;
  t803 = t801 + t802;
  t805 = t533*t783;
  t806 = -1.*t551*t799;
  t807 = t805 + t806;
  t809 = -1.*t619*t803;
  t810 = t614*t807;
  t811 = t809 + t810;
  t813 = t614*t803;
  t814 = t619*t807;
  t815 = t813 + t814;
  t817 = t653*t811;
  t818 = t647*t815;
  t819 = t817 + t818;
  t821 = t647*t811;
  t822 = -1.*t653*t815;
  t823 = t821 + t822;
  p_output1[0]=0. - 1.*t388*t430*t431 + t453*t468 + t499*t515 + t526*t531 + t555*t559 + t388*t561*t576 + 0.1305*(t388*t561*t569 + t562*t585) + t585*t595 + t607*t611 + t622*t625 + t635*t644 + t655*t660 + t664*t667 + t677*t680 + t684*t689 - 1.1135*(-1.*t673*t680 + t669*t689) - 0.0216*(t669*t680 + t673*t689) + var1[0];
  p_output1[1]=0. - 1.*t388*t468*t702 + t430*t704 + t499*t709 + t531*t713 + t555*t717 + t576*t721 + t595*t725 + 0.1305*(t569*t721 + t562*t725) + t607*t733 + t622*t737 + t635*t741 + t655*t745 + t664*t749 + t677*t753 + t684*t757 - 1.1135*(-1.*t673*t753 + t669*t757) - 0.0216*(t669*t753 + t673*t757) + var1[1];
  p_output1[2]=0. + t388*t468*t700 + t430*t770 + t499*t775 + t531*t779 + t555*t783 + t576*t787 + t595*t791 + 0.1305*(t569*t787 + t562*t791) + t607*t799 + t622*t803 + t635*t807 + t655*t811 + t664*t815 + t677*t819 + t684*t823 - 1.1135*(-1.*t673*t819 + t669*t823) - 0.0216*(t669*t819 + t673*t823) + var1[2];
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

#include "p_toe_joint_left.hh"

namespace SymExpression
{

void p_toe_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
