/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:09 GMT-04:00
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
  double t741;
  double t719;
  double t748;
  double t698;
  double t754;
  double t687;
  double t786;
  double t766;
  double t788;
  double t789;
  double t790;
  double t792;
  double t793;
  double t829;
  double t830;
  double t833;
  double t731;
  double t759;
  double t763;
  double t771;
  double t777;
  double t781;
  double t787;
  double t795;
  double t796;
  double t801;
  double t805;
  double t808;
  double t821;
  double t834;
  double t835;
  double t837;
  double t838;
  double t839;
  double t867;
  double t868;
  double t843;
  double t844;
  double t845;
  double t872;
  double t873;
  double t874;
  double t875;
  double t877;
  double t878;
  double t879;
  double t880;
  double t882;
  double t883;
  double t846;
  double t847;
  double t851;
  t741 = Cos(var1[14]);
  t719 = Sin(var1[4]);
  t748 = Cos(var1[4]);
  t698 = Sin(var1[14]);
  t754 = Sin(var1[5]);
  t687 = Sin(var1[15]);
  t786 = Sin(var1[3]);
  t766 = Cos(var1[15]);
  t788 = Cos(var1[3]);
  t789 = Cos(var1[5]);
  t790 = t788*t789;
  t792 = -1.*t786*t719*t754;
  t793 = t790 + t792;
  t829 = t789*t786;
  t830 = t788*t719*t754;
  t833 = t829 + t830;
  t731 = t698*t719;
  t759 = -1.*t741*t748*t754;
  t763 = t731 + t759;
  t771 = t741*t719;
  t777 = t748*t698*t754;
  t781 = t771 + t777;
  t787 = -1.*t748*t698*t786;
  t795 = t741*t793;
  t796 = t787 + t795;
  t801 = -1.*t741*t748*t786;
  t805 = -1.*t698*t793;
  t808 = t801 + t805;
  t821 = t788*t748*t698;
  t834 = t741*t833;
  t835 = t821 + t834;
  t837 = t741*t788*t748;
  t838 = -1.*t698*t833;
  t839 = t837 + t838;
  t867 = 0.135*t698;
  t868 = 0. + t867;
  t843 = t789*t786*t719;
  t844 = t788*t754;
  t845 = t843 + t844;
  t872 = -1.*t741;
  t873 = 1. + t872;
  t874 = -0.135*t873;
  t875 = 0. + t874;
  t877 = -1.*t766;
  t878 = 1. + t877;
  t879 = -0.135*t878;
  t880 = 0. + t879;
  t882 = 0.135*t687;
  t883 = 0. + t882;
  t846 = -1.*t788*t789*t719;
  t847 = t786*t754;
  t851 = t846 + t847;
  p_output1[0]=t687*t763 - 1.*t766*t781;
  p_output1[1]=t687*t796 - 1.*t766*t808;
  p_output1[2]=t687*t835 - 1.*t766*t839;
  p_output1[3]=0.;
  p_output1[4]=t748*t789;
  p_output1[5]=t845;
  p_output1[6]=t851;
  p_output1[7]=0.;
  p_output1[8]=-1.*t763*t766 - 1.*t687*t781;
  p_output1[9]=-1.*t766*t796 - 1.*t687*t808;
  p_output1[10]=-1.*t766*t835 - 1.*t687*t839;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*(t763*t766 + t687*t781) - 0.09*(-1.*t687*t763 + t766*t781) - 0.049*t748*t789 + t719*t868 - 1.*t748*t754*t875 + t763*t880 + t781*t883 + var1[0];
  p_output1[13]=0. - 0.135*(t766*t796 + t687*t808) - 0.09*(-1.*t687*t796 + t766*t808) - 0.049*t845 - 1.*t748*t786*t868 + t793*t875 + t796*t880 + t808*t883 + var1[1];
  p_output1[14]=0. - 0.135*(t766*t835 + t687*t839) - 0.09*(-1.*t687*t835 + t766*t839) - 0.049*t851 + t748*t788*t868 + t833*t875 + t835*t880 + t839*t883 + var1[2];
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

#include "H_hip_rotation_right.hh"

namespace SymExpression
{

void H_hip_rotation_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
