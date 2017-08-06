/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:09 GMT-04:00
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
  double t543;
  double t481;
  double t546;
  double t505;
  double t552;
  double t421;
  double t609;
  double t613;
  double t663;
  double t672;
  double t679;
  double t680;
  double t604;
  double t715;
  double t720;
  double t721;
  double t581;
  double t590;
  double t598;
  double t527;
  double t565;
  double t566;
  double t779;
  double t688;
  double t694;
  double t695;
  double t610;
  double t682;
  double t685;
  double t795;
  double t748;
  double t753;
  double t758;
  double t709;
  double t724;
  double t731;
  double t785;
  double t786;
  double t790;
  double t831;
  double t835;
  double t837;
  double t815;
  double t819;
  double t821;
  double t882;
  double t892;
  double t896;
  double t849;
  double t850;
  double t852;
  double t1001;
  double t1004;
  double t782;
  double t799;
  double t811;
  double t937;
  double t940;
  double t942;
  double t946;
  double t953;
  double t954;
  double t962;
  double t966;
  double t978;
  double t984;
  double t989;
  double t990;
  double t1005;
  double t1007;
  double t1010;
  double t1021;
  double t1023;
  double t1027;
  double t825;
  double t839;
  double t840;
  double t872;
  double t902;
  double t903;
  t543 = Cos(var1[4]);
  t481 = Cos(var1[6]);
  t546 = Sin(var1[5]);
  t505 = Sin(var1[4]);
  t552 = Sin(var1[6]);
  t421 = Cos(var1[7]);
  t609 = Sin(var1[3]);
  t613 = Cos(var1[3]);
  t663 = Cos(var1[5]);
  t672 = t613*t663;
  t679 = -1.*t609*t505*t546;
  t680 = t672 + t679;
  t604 = Sin(var1[7]);
  t715 = t663*t609;
  t720 = t613*t505*t546;
  t721 = t715 + t720;
  t581 = -1.*t543*t481*t546;
  t590 = t505*t552;
  t598 = t581 + t590;
  t527 = t481*t505;
  t565 = t543*t546*t552;
  t566 = t527 + t565;
  t779 = Cos(var1[8]);
  t688 = t481*t680;
  t694 = -1.*t543*t609*t552;
  t695 = t688 + t694;
  t610 = -1.*t543*t481*t609;
  t682 = -1.*t680*t552;
  t685 = t610 + t682;
  t795 = Sin(var1[8]);
  t748 = t481*t721;
  t753 = t613*t543*t552;
  t758 = t748 + t753;
  t709 = t613*t543*t481;
  t724 = -1.*t721*t552;
  t731 = t709 + t724;
  t785 = t421*t598;
  t786 = t566*t604;
  t790 = t785 + t786;
  t831 = t421*t695;
  t835 = t685*t604;
  t837 = t831 + t835;
  t815 = t663*t609*t505;
  t819 = t613*t546;
  t821 = t815 + t819;
  t882 = t421*t758;
  t892 = t731*t604;
  t896 = t882 + t892;
  t849 = -1.*t613*t663*t505;
  t850 = t609*t546;
  t852 = t849 + t850;
  t1001 = -1.*t779;
  t1004 = 1. + t1001;
  t782 = t543*t663*t779;
  t799 = t790*t795;
  t811 = t782 + t799;
  t937 = -1.*t481;
  t940 = 1. + t937;
  t942 = 0.135*t940;
  t946 = 0. + t942;
  t953 = -0.135*t552;
  t954 = 0. + t953;
  t962 = -1.*t421;
  t966 = 1. + t962;
  t978 = 0.135*t966;
  t984 = 0. + t978;
  t989 = -0.135*t604;
  t990 = 0. + t989;
  t1005 = 0.135*t1004;
  t1007 = 0.049*t795;
  t1010 = 0. + t1005 + t1007;
  t1021 = -0.049*t1004;
  t1023 = 0.135*t795;
  t1027 = 0. + t1021 + t1023;
  t825 = t779*t821;
  t839 = t837*t795;
  t840 = t825 + t839;
  t872 = t779*t852;
  t902 = t896*t795;
  t903 = t872 + t902;
  p_output1[0]=-1.*t421*t566 + t598*t604;
  p_output1[1]=-1.*t421*t685 + t604*t695;
  p_output1[2]=-1.*t421*t731 + t604*t758;
  p_output1[3]=0.;
  p_output1[4]=t811;
  p_output1[5]=t840;
  p_output1[6]=t903;
  p_output1[7]=0.;
  p_output1[8]=-1.*t779*t790 + t543*t663*t795;
  p_output1[9]=t795*t821 - 1.*t779*t837;
  p_output1[10]=t795*t852 - 1.*t779*t896;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t421*t566 - 1.*t598*t604) + t1027*t543*t663 + t1010*t790 + 0.135*(t779*t790 - 1.*t543*t663*t795) - 0.049*t811 - 1.*t543*t546*t946 + t505*t954 + t598*t984 + t566*t990 + var1[0];
  p_output1[13]=0. - 0.09*(t421*t685 - 1.*t604*t695) + t1027*t821 + t1010*t837 + 0.135*(-1.*t795*t821 + t779*t837) - 0.049*t840 + t680*t946 - 1.*t543*t609*t954 + t695*t984 + t685*t990 + var1[1];
  p_output1[14]=0. - 0.09*(t421*t731 - 1.*t604*t758) + t1027*t852 + t1010*t896 + 0.135*(-1.*t795*t852 + t779*t896) - 0.049*t903 + t721*t946 + t543*t613*t954 + t758*t984 + t731*t990 + var1[2];
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
