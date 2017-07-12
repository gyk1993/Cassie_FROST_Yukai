/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:06 GMT-04:00
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
  double t519;
  double t499;
  double t525;
  double t507;
  double t526;
  double t494;
  double t548;
  double t553;
  double t555;
  double t517;
  double t529;
  double t531;
  double t556;
  double t574;
  double t532;
  double t559;
  double t560;
  double t470;
  double t576;
  double t579;
  double t582;
  double t584;
  double t590;
  double t593;
  double t595;
  double t596;
  double t598;
  double t604;
  double t568;
  double t599;
  double t601;
  double t463;
  double t606;
  double t607;
  double t609;
  double t622;
  double t603;
  double t613;
  double t618;
  double t452;
  double t623;
  double t624;
  double t626;
  double t417;
  double t659;
  double t661;
  double t662;
  double t663;
  double t664;
  double t672;
  double t674;
  double t677;
  double t660;
  double t665;
  double t666;
  double t668;
  double t678;
  double t679;
  double t682;
  double t683;
  double t684;
  double t687;
  double t690;
  double t691;
  double t692;
  double t693;
  double t694;
  double t681;
  double t695;
  double t696;
  double t698;
  double t699;
  double t701;
  double t637;
  double t697;
  double t705;
  double t706;
  double t710;
  double t713;
  double t714;
  double t726;
  double t727;
  double t728;
  double t734;
  double t735;
  double t736;
  double t724;
  double t729;
  double t730;
  double t731;
  double t738;
  double t739;
  double t742;
  double t744;
  double t745;
  double t746;
  double t747;
  double t748;
  double t750;
  double t751;
  double t752;
  double t741;
  double t754;
  double t755;
  double t759;
  double t760;
  double t761;
  double t758;
  double t762;
  double t763;
  double t765;
  double t766;
  double t767;
  double t620;
  double t627;
  double t632;
  double t644;
  double t646;
  double t650;
  double t707;
  double t715;
  double t717;
  double t719;
  double t720;
  double t721;
  double t764;
  double t768;
  double t769;
  double t772;
  double t773;
  double t774;
  double t831;
  double t832;
  double t825;
  double t826;
  double t849;
  double t850;
  double t859;
  double t860;
  double t869;
  double t870;
  double t779;
  double t780;
  double t781;
  double t802;
  double t804;
  double t805;
  double t807;
  double t810;
  double t811;
  double t813;
  double t814;
  double t816;
  double t817;
  double t820;
  double t821;
  double t827;
  double t828;
  double t829;
  double t833;
  double t834;
  double t835;
  double t837;
  double t838;
  double t839;
  double t845;
  double t846;
  double t847;
  double t851;
  double t852;
  double t853;
  double t855;
  double t856;
  double t857;
  double t861;
  double t862;
  double t863;
  double t865;
  double t866;
  double t867;
  double t871;
  double t872;
  double t873;
  double t875;
  double t876;
  double t877;
  double t783;
  double t784;
  double t786;
  double t787;
  double t788;
  double t789;
  t519 = Cos(var1[4]);
  t499 = Cos(var1[6]);
  t525 = Sin(var1[5]);
  t507 = Sin(var1[4]);
  t526 = Sin(var1[6]);
  t494 = Cos(var1[7]);
  t548 = -1.*t519*t499*t525;
  t553 = t507*t526;
  t555 = t548 + t553;
  t517 = t499*t507;
  t529 = t519*t525*t526;
  t531 = t517 + t529;
  t556 = Sin(var1[7]);
  t574 = Cos(var1[9]);
  t532 = t494*t531;
  t559 = -1.*t555*t556;
  t560 = t532 + t559;
  t470 = Sin(var1[9]);
  t576 = Cos(var1[5]);
  t579 = Cos(var1[8]);
  t582 = t519*t576*t579;
  t584 = t494*t555;
  t590 = t531*t556;
  t593 = t584 + t590;
  t595 = Sin(var1[8]);
  t596 = -1.*t593*t595;
  t598 = t582 + t596;
  t604 = Cos(var1[10]);
  t568 = t470*t560;
  t599 = t574*t598;
  t601 = t568 + t599;
  t463 = Sin(var1[10]);
  t606 = t574*t560;
  t607 = -1.*t470*t598;
  t609 = t606 + t607;
  t622 = Cos(var1[11]);
  t603 = -1.*t463*t601;
  t613 = t604*t609;
  t618 = t603 + t613;
  t452 = Sin(var1[11]);
  t623 = t604*t601;
  t624 = t463*t609;
  t626 = t623 + t624;
  t417 = Sin(var1[12]);
  t659 = Sin(var1[3]);
  t661 = Cos(var1[3]);
  t662 = t661*t576;
  t663 = -1.*t659*t507*t525;
  t664 = t662 + t663;
  t672 = t499*t664;
  t674 = -1.*t519*t659*t526;
  t677 = t672 + t674;
  t660 = -1.*t519*t499*t659;
  t665 = -1.*t664*t526;
  t666 = t660 + t665;
  t668 = t494*t666;
  t678 = -1.*t677*t556;
  t679 = t668 + t678;
  t682 = t576*t659*t507;
  t683 = t661*t525;
  t684 = t682 + t683;
  t687 = t579*t684;
  t690 = t494*t677;
  t691 = t666*t556;
  t692 = t690 + t691;
  t693 = -1.*t692*t595;
  t694 = t687 + t693;
  t681 = t470*t679;
  t695 = t574*t694;
  t696 = t681 + t695;
  t698 = t574*t679;
  t699 = -1.*t470*t694;
  t701 = t698 + t699;
  t637 = Cos(var1[12]);
  t697 = -1.*t463*t696;
  t705 = t604*t701;
  t706 = t697 + t705;
  t710 = t604*t696;
  t713 = t463*t701;
  t714 = t710 + t713;
  t726 = t576*t659;
  t727 = t661*t507*t525;
  t728 = t726 + t727;
  t734 = t499*t728;
  t735 = t661*t519*t526;
  t736 = t734 + t735;
  t724 = t661*t519*t499;
  t729 = -1.*t728*t526;
  t730 = t724 + t729;
  t731 = t494*t730;
  t738 = -1.*t736*t556;
  t739 = t731 + t738;
  t742 = -1.*t661*t576*t507;
  t744 = t659*t525;
  t745 = t742 + t744;
  t746 = t579*t745;
  t747 = t494*t736;
  t748 = t730*t556;
  t750 = t747 + t748;
  t751 = -1.*t750*t595;
  t752 = t746 + t751;
  t741 = t470*t739;
  t754 = t574*t752;
  t755 = t741 + t754;
  t759 = t574*t739;
  t760 = -1.*t470*t752;
  t761 = t759 + t760;
  t758 = -1.*t463*t755;
  t762 = t604*t761;
  t763 = t758 + t762;
  t765 = t604*t755;
  t766 = t463*t761;
  t767 = t765 + t766;
  t620 = t452*t618;
  t627 = t622*t626;
  t632 = t620 + t627;
  t644 = t622*t618;
  t646 = -1.*t452*t626;
  t650 = t644 + t646;
  t707 = t452*t706;
  t715 = t622*t714;
  t717 = t707 + t715;
  t719 = t622*t706;
  t720 = -1.*t452*t714;
  t721 = t719 + t720;
  t764 = t452*t763;
  t768 = t622*t767;
  t769 = t764 + t768;
  t772 = t622*t763;
  t773 = -1.*t452*t767;
  t774 = t772 + t773;
  t831 = -1.*t579;
  t832 = 1. + t831;
  t825 = -1.*t574;
  t826 = 1. + t825;
  t849 = -1.*t604;
  t850 = 1. + t849;
  t859 = -1.*t622;
  t860 = 1. + t859;
  t869 = -1.*t637;
  t870 = 1. + t869;
  t779 = t637*t632;
  t780 = t417*t650;
  t781 = t779 + t780;
  t802 = -1.*t499;
  t804 = 1. + t802;
  t805 = 0.135*t804;
  t807 = 0. + t805;
  t810 = -0.135*t526;
  t811 = 0. + t810;
  t813 = -1.*t494;
  t814 = 1. + t813;
  t816 = 0.135*t814;
  t817 = 0. + t816;
  t820 = -0.135*t556;
  t821 = 0. + t820;
  t827 = -0.09*t826;
  t828 = 0.049*t470;
  t829 = 0. + t827 + t828;
  t833 = -0.049*t832;
  t834 = -0.135*t595;
  t835 = 0. + t833 + t834;
  t837 = 0.135*t832;
  t838 = -0.049*t595;
  t839 = 0. + t837 + t838;
  t845 = -0.049*t826;
  t846 = -0.09*t470;
  t847 = 0. + t845 + t846;
  t851 = -0.049*t850;
  t852 = -0.21*t463;
  t853 = 0. + t851 + t852;
  t855 = -0.21*t850;
  t856 = 0.049*t463;
  t857 = 0. + t855 + t856;
  t861 = -0.2707*t860;
  t862 = 0.0016*t452;
  t863 = 0. + t861 + t862;
  t865 = -0.0016*t860;
  t866 = -0.2707*t452;
  t867 = 0. + t865 + t866;
  t871 = 0.0184*t870;
  t872 = -0.7055*t417;
  t873 = 0. + t871 + t872;
  t875 = -0.7055*t870;
  t876 = -0.0184*t417;
  t877 = 0. + t875 + t876;
  t783 = t637*t717;
  t784 = t417*t721;
  t786 = t783 + t784;
  t787 = t637*t769;
  t788 = t417*t774;
  t789 = t787 + t788;
  p_output1[0]=t417*t632 - 1.*t637*t650;
  p_output1[1]=t417*t717 - 1.*t637*t721;
  p_output1[2]=t417*t769 - 1.*t637*t774;
  p_output1[3]=0.;
  p_output1[4]=t781;
  p_output1[5]=t786;
  p_output1[6]=t789;
  p_output1[7]=0.;
  p_output1[8]=-1.*t579*t593 - 1.*t519*t576*t595;
  p_output1[9]=-1.*t595*t684 - 1.*t579*t692;
  p_output1[10]=-1.*t595*t745 - 1.*t579*t750;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t579*t593 + t519*t576*t595) - 1.1135*(-1.*t417*t632 + t637*t650) - 0.0216*t781 - 1.*t519*t525*t807 + t507*t811 + t555*t817 + t531*t821 + t560*t829 + t519*t576*t835 + t593*t839 + t598*t847 + t601*t853 + t609*t857 + t618*t863 + t626*t867 + t632*t873 + t650*t877 + var1[0];
  p_output1[13]=0. + 0.1305*(t595*t684 + t579*t692) - 1.1135*(-1.*t417*t717 + t637*t721) - 0.0216*t786 + t664*t807 - 1.*t519*t659*t811 + t677*t817 + t666*t821 + t679*t829 + t684*t835 + t692*t839 + t694*t847 + t696*t853 + t701*t857 + t706*t863 + t714*t867 + t717*t873 + t721*t877 + var1[1];
  p_output1[14]=0. + 0.1305*(t595*t745 + t579*t750) - 1.1135*(-1.*t417*t769 + t637*t774) - 0.0216*t789 + t728*t807 + t519*t661*t811 + t736*t817 + t730*t821 + t739*t829 + t745*t835 + t750*t839 + t752*t847 + t755*t853 + t761*t857 + t763*t863 + t767*t867 + t769*t873 + t774*t877 + var1[2];
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

#include "H_toe_joint_left.hh"

namespace SymExpression
{

void H_toe_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
