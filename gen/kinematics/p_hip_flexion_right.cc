/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:10 GMT-04:00
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
  double t731;
  double t818;
  double t830;
  double t836;
  double t843;
  double t863;
  double t855;
  double t856;
  double t861;
  double t845;
  double t866;
  double t867;
  double t871;
  double t771;
  double t777;
  double t783;
  double t790;
  double t765;
  double t885;
  double t886;
  double t887;
  double t821;
  double t829;
  double t784;
  double t795;
  double t800;
  double t898;
  double t837;
  double t840;
  double t841;
  double t842;
  double t901;
  double t847;
  double t851;
  double t852;
  double t853;
  double t905;
  double t906;
  double t907;
  double t864;
  double t865;
  double t909;
  double t910;
  double t911;
  double t913;
  double t914;
  double t915;
  double t882;
  double t883;
  double t884;
  double t900;
  double t902;
  double t903;
  double t921;
  double t922;
  double t923;
  double t939;
  double t940;
  double t941;
  double t943;
  double t944;
  double t945;
  double t947;
  double t948;
  double t949;
  double t935;
  double t936;
  double t937;
  double t955;
  double t956;
  double t957;
  t731 = Cos(var1[4]);
  t818 = Sin(var1[14]);
  t830 = Sin(var1[4]);
  t836 = Cos(var1[14]);
  t843 = Sin(var1[5]);
  t863 = Sin(var1[15]);
  t855 = t818*t830;
  t856 = -1.*t836*t731*t843;
  t861 = t855 + t856;
  t845 = Cos(var1[15]);
  t866 = t836*t830;
  t867 = t731*t818*t843;
  t871 = t866 + t867;
  t771 = Cos(var1[16]);
  t777 = -1.*t771;
  t783 = 1. + t777;
  t790 = Sin(var1[16]);
  t765 = Cos(var1[5]);
  t885 = t845*t861;
  t886 = t863*t871;
  t887 = t885 + t886;
  t821 = 0.135*t818;
  t829 = 0. + t821;
  t784 = -0.049*t783;
  t795 = 0.135*t790;
  t800 = 0. + t784 + t795;
  t898 = Sin(var1[3]);
  t837 = -1.*t836;
  t840 = 1. + t837;
  t841 = -0.135*t840;
  t842 = 0. + t841;
  t901 = Cos(var1[3]);
  t847 = -1.*t845;
  t851 = 1. + t847;
  t852 = -0.135*t851;
  t853 = 0. + t852;
  t905 = t901*t765;
  t906 = -1.*t898*t830*t843;
  t907 = t905 + t906;
  t864 = 0.135*t863;
  t865 = 0. + t864;
  t909 = -1.*t731*t818*t898;
  t910 = t836*t907;
  t911 = t909 + t910;
  t913 = -1.*t836*t731*t898;
  t914 = -1.*t818*t907;
  t915 = t913 + t914;
  t882 = -0.135*t783;
  t883 = -0.049*t790;
  t884 = 0. + t882 + t883;
  t900 = t765*t898*t830;
  t902 = t901*t843;
  t903 = t900 + t902;
  t921 = t845*t911;
  t922 = t863*t915;
  t923 = t921 + t922;
  t939 = t765*t898;
  t940 = t901*t830*t843;
  t941 = t939 + t940;
  t943 = t901*t731*t818;
  t944 = t836*t941;
  t945 = t943 + t944;
  t947 = t836*t901*t731;
  t948 = -1.*t818*t941;
  t949 = t947 + t948;
  t935 = -1.*t901*t765*t830;
  t936 = t898*t843;
  t937 = t935 + t936;
  t955 = t845*t945;
  t956 = t863*t949;
  t957 = t955 + t956;
  p_output1[0]=0. + t731*t765*t800 + t829*t830 - 1.*t731*t842*t843 + t853*t861 + t865*t871 - 0.09*(-1.*t861*t863 + t845*t871) + t884*t887 - 0.135*(t731*t765*t790 + t771*t887) - 0.049*(t731*t765*t771 - 1.*t790*t887) + var1[0];
  p_output1[1]=0. - 1.*t731*t829*t898 + t800*t903 + t842*t907 + t853*t911 + t865*t915 - 0.09*(-1.*t863*t911 + t845*t915) + t884*t923 - 0.135*(t790*t903 + t771*t923) - 0.049*(t771*t903 - 1.*t790*t923) + var1[1];
  p_output1[2]=0. + t731*t829*t901 + t800*t937 + t842*t941 + t853*t945 + t865*t949 - 0.09*(-1.*t863*t945 + t845*t949) + t884*t957 - 0.135*(t790*t937 + t771*t957) - 0.049*(t771*t937 - 1.*t790*t957) + var1[2];
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

#include "p_hip_flexion_right.hh"

namespace SymExpression
{

void p_hip_flexion_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
