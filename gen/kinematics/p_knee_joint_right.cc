/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:10:32 GMT-04:00
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
  double t816;
  double t892;
  double t895;
  double t900;
  double t918;
  double t939;
  double t929;
  double t932;
  double t934;
  double t922;
  double t946;
  double t947;
  double t950;
  double t862;
  double t864;
  double t866;
  double t881;
  double t853;
  double t975;
  double t976;
  double t977;
  double t952;
  double t953;
  double t954;
  double t956;
  double t962;
  double t963;
  double t964;
  double t986;
  double t987;
  double t988;
  double t893;
  double t894;
  double t867;
  double t884;
  double t886;
  double t999;
  double t902;
  double t908;
  double t910;
  double t916;
  double t1002;
  double t924;
  double t925;
  double t927;
  double t928;
  double t1006;
  double t1007;
  double t1008;
  double t940;
  double t944;
  double t955;
  double t960;
  double t961;
  double t1010;
  double t1011;
  double t1012;
  double t1014;
  double t1015;
  double t1016;
  double t969;
  double t971;
  double t974;
  double t1001;
  double t1003;
  double t1004;
  double t1022;
  double t1023;
  double t1024;
  double t983;
  double t984;
  double t985;
  double t1018;
  double t1019;
  double t1020;
  double t1030;
  double t1031;
  double t1032;
  double t1048;
  double t1049;
  double t1050;
  double t1052;
  double t1053;
  double t1054;
  double t1056;
  double t1057;
  double t1058;
  double t1044;
  double t1045;
  double t1046;
  double t1064;
  double t1065;
  double t1066;
  double t1060;
  double t1061;
  double t1062;
  double t1072;
  double t1073;
  double t1074;
  t816 = Cos(var1[4]);
  t892 = Sin(var1[14]);
  t895 = Sin(var1[4]);
  t900 = Cos(var1[14]);
  t918 = Sin(var1[5]);
  t939 = Sin(var1[15]);
  t929 = t892*t895;
  t932 = -1.*t900*t816*t918;
  t934 = t929 + t932;
  t922 = Cos(var1[15]);
  t946 = t900*t895;
  t947 = t816*t892*t918;
  t950 = t946 + t947;
  t862 = Cos(var1[16]);
  t864 = -1.*t862;
  t866 = 1. + t864;
  t881 = Sin(var1[16]);
  t853 = Cos(var1[5]);
  t975 = t922*t934;
  t976 = t939*t950;
  t977 = t975 + t976;
  t952 = Cos(var1[17]);
  t953 = -1.*t952;
  t954 = 1. + t953;
  t956 = Sin(var1[17]);
  t962 = -1.*t939*t934;
  t963 = t922*t950;
  t964 = t962 + t963;
  t986 = t862*t816*t853;
  t987 = -1.*t881*t977;
  t988 = t986 + t987;
  t893 = 0.135*t892;
  t894 = 0. + t893;
  t867 = -0.049*t866;
  t884 = 0.135*t881;
  t886 = 0. + t867 + t884;
  t999 = Sin(var1[3]);
  t902 = -1.*t900;
  t908 = 1. + t902;
  t910 = -0.135*t908;
  t916 = 0. + t910;
  t1002 = Cos(var1[3]);
  t924 = -1.*t922;
  t925 = 1. + t924;
  t927 = -0.135*t925;
  t928 = 0. + t927;
  t1006 = t1002*t853;
  t1007 = -1.*t999*t895*t918;
  t1008 = t1006 + t1007;
  t940 = 0.135*t939;
  t944 = 0. + t940;
  t955 = -0.09*t954;
  t960 = 0.049*t956;
  t961 = 0. + t955 + t960;
  t1010 = -1.*t816*t892*t999;
  t1011 = t900*t1008;
  t1012 = t1010 + t1011;
  t1014 = -1.*t900*t816*t999;
  t1015 = -1.*t892*t1008;
  t1016 = t1014 + t1015;
  t969 = -0.135*t866;
  t971 = -0.049*t881;
  t974 = 0. + t969 + t971;
  t1001 = t853*t999*t895;
  t1003 = t1002*t918;
  t1004 = t1001 + t1003;
  t1022 = t922*t1012;
  t1023 = t939*t1016;
  t1024 = t1022 + t1023;
  t983 = -0.049*t954;
  t984 = -0.09*t956;
  t985 = 0. + t983 + t984;
  t1018 = -1.*t939*t1012;
  t1019 = t922*t1016;
  t1020 = t1018 + t1019;
  t1030 = t862*t1004;
  t1031 = -1.*t881*t1024;
  t1032 = t1030 + t1031;
  t1048 = t853*t999;
  t1049 = t1002*t895*t918;
  t1050 = t1048 + t1049;
  t1052 = t1002*t816*t892;
  t1053 = t900*t1050;
  t1054 = t1052 + t1053;
  t1056 = t900*t1002*t816;
  t1057 = -1.*t892*t1050;
  t1058 = t1056 + t1057;
  t1044 = -1.*t1002*t853*t895;
  t1045 = t999*t918;
  t1046 = t1044 + t1045;
  t1064 = t922*t1054;
  t1065 = t939*t1058;
  t1066 = t1064 + t1065;
  t1060 = -1.*t939*t1054;
  t1061 = t922*t1058;
  t1062 = t1060 + t1061;
  t1072 = t862*t1046;
  t1073 = -1.*t881*t1066;
  t1074 = t1072 + t1073;
  p_output1[0]=0. + t816*t853*t886 + t894*t895 - 1.*t816*t916*t918 + t928*t934 + t944*t950 + t961*t964 + t974*t977 - 0.1305*(t816*t853*t881 + t862*t977) + t985*t988 - 0.049*(t956*t964 + t952*t988) - 0.21*(t952*t964 - 1.*t956*t988) + var1[0];
  p_output1[1]=0. - 0.1305*(t1024*t862 + t1004*t881) + t1004*t886 + t1008*t916 + t1012*t928 + t1016*t944 - 0.049*(t1032*t952 + t1020*t956) - 0.21*(t1020*t952 - 1.*t1032*t956) + t1020*t961 + t1024*t974 + t1032*t985 - 1.*t816*t894*t999 + var1[1];
  p_output1[2]=0. - 0.1305*(t1066*t862 + t1046*t881) + t1046*t886 + t1002*t816*t894 + t1050*t916 + t1054*t928 + t1058*t944 - 0.049*(t1074*t952 + t1062*t956) - 0.21*(t1062*t952 - 1.*t1074*t956) + t1062*t961 + t1066*t974 + t1074*t985 + var1[2];
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

#include "p_knee_joint_right.hh"

namespace SymExpression
{

void p_knee_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
