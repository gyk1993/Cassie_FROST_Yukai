/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:10 GMT-04:00
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
  double t527;
  double t565;
  double t672;
  double t688;
  double t698;
  double t720;
  double t799;
  double t811;
  double t815;
  double t775;
  double t782;
  double t785;
  double t819;
  double t922;
  double t925;
  double t929;
  double t951;
  double t913;
  double t915;
  double t916;
  double t984;
  double t839;
  double t840;
  double t850;
  double t882;
  double t903;
  double t908;
  double t909;
  double t1020;
  double t1021;
  double t1023;
  double t574;
  double t590;
  double t605;
  double t606;
  double t1063;
  double t701;
  double t709;
  double t745;
  double t748;
  double t753;
  double t774;
  double t1052;
  double t1062;
  double t1064;
  double t1065;
  double t825;
  double t831;
  double t872;
  double t892;
  double t902;
  double t1085;
  double t1102;
  double t1110;
  double t1072;
  double t1076;
  double t1083;
  double t942;
  double t953;
  double t957;
  double t985;
  double t989;
  double t990;
  double t1138;
  double t1143;
  double t1147;
  double t1156;
  double t1159;
  double t1160;
  double t1005;
  double t1007;
  double t1010;
  double t1125;
  double t1126;
  double t1130;
  double t1172;
  double t1176;
  double t1184;
  double t1228;
  double t1234;
  double t1242;
  double t1276;
  double t1283;
  double t1287;
  double t1261;
  double t1263;
  double t1265;
  double t1320;
  double t1330;
  double t1332;
  double t1339;
  double t1340;
  double t1342;
  double t1296;
  double t1298;
  double t1302;
  double t1354;
  double t1357;
  double t1358;
  t527 = Cos(var1[4]);
  t565 = Cos(var1[6]);
  t672 = Sin(var1[5]);
  t688 = Sin(var1[4]);
  t698 = Sin(var1[6]);
  t720 = Cos(var1[7]);
  t799 = t565*t688;
  t811 = t527*t672*t698;
  t815 = t799 + t811;
  t775 = -1.*t527*t565*t672;
  t782 = t688*t698;
  t785 = t775 + t782;
  t819 = Sin(var1[7]);
  t922 = Cos(var1[8]);
  t925 = -1.*t922;
  t929 = 1. + t925;
  t951 = Sin(var1[8]);
  t913 = t720*t785;
  t915 = t815*t819;
  t916 = t913 + t915;
  t984 = Cos(var1[5]);
  t839 = Cos(var1[9]);
  t840 = -1.*t839;
  t850 = 1. + t840;
  t882 = Sin(var1[9]);
  t903 = t720*t815;
  t908 = -1.*t785*t819;
  t909 = t903 + t908;
  t1020 = t527*t984*t922;
  t1021 = t916*t951;
  t1023 = t1020 + t1021;
  t574 = -1.*t565;
  t590 = 1. + t574;
  t605 = 0.135*t590;
  t606 = 0. + t605;
  t1063 = Sin(var1[3]);
  t701 = -0.135*t698;
  t709 = 0. + t701;
  t745 = -1.*t720;
  t748 = 1. + t745;
  t753 = 0.135*t748;
  t774 = 0. + t753;
  t1052 = Cos(var1[3]);
  t1062 = t1052*t984;
  t1064 = -1.*t1063*t688*t672;
  t1065 = t1062 + t1064;
  t825 = -0.135*t819;
  t831 = 0. + t825;
  t872 = -0.09*t850;
  t892 = 0.049*t882;
  t902 = 0. + t872 + t892;
  t1085 = -1.*t527*t565*t1063;
  t1102 = -1.*t1065*t698;
  t1110 = t1085 + t1102;
  t1072 = t565*t1065;
  t1076 = -1.*t527*t1063*t698;
  t1083 = t1072 + t1076;
  t942 = 0.135*t929;
  t953 = 0.049*t951;
  t957 = 0. + t942 + t953;
  t985 = -0.049*t929;
  t989 = 0.135*t951;
  t990 = 0. + t985 + t989;
  t1138 = t720*t1083;
  t1143 = t1110*t819;
  t1147 = t1138 + t1143;
  t1156 = t984*t1063*t688;
  t1159 = t1052*t672;
  t1160 = t1156 + t1159;
  t1005 = -0.049*t850;
  t1007 = -0.09*t882;
  t1010 = 0. + t1005 + t1007;
  t1125 = t720*t1110;
  t1126 = -1.*t1083*t819;
  t1130 = t1125 + t1126;
  t1172 = t922*t1160;
  t1176 = t1147*t951;
  t1184 = t1172 + t1176;
  t1228 = t984*t1063;
  t1234 = t1052*t688*t672;
  t1242 = t1228 + t1234;
  t1276 = t1052*t527*t565;
  t1283 = -1.*t1242*t698;
  t1287 = t1276 + t1283;
  t1261 = t565*t1242;
  t1263 = t1052*t527*t698;
  t1265 = t1261 + t1263;
  t1320 = t720*t1265;
  t1330 = t1287*t819;
  t1332 = t1320 + t1330;
  t1339 = -1.*t1052*t984*t688;
  t1340 = t1063*t672;
  t1342 = t1339 + t1340;
  t1296 = t720*t1287;
  t1298 = -1.*t1265*t819;
  t1302 = t1296 + t1298;
  t1354 = t922*t1342;
  t1357 = t1332*t951;
  t1358 = t1354 + t1357;
  p_output1[0]=0. + t1010*t1023 - 1.*t527*t606*t672 + t688*t709 + t774*t785 + t815*t831 + t902*t909 - 0.21*(-1.*t1023*t882 + t839*t909) - 0.049*(t1023*t839 + t882*t909) + t916*t957 + 0.1305*(t916*t922 - 1.*t527*t951*t984) + t527*t984*t990 + var1[0];
  p_output1[1]=0. + t1010*t1184 + t1065*t606 - 1.*t1063*t527*t709 + t1083*t774 + t1110*t831 - 0.049*(t1184*t839 + t1130*t882) - 0.21*(t1130*t839 - 1.*t1184*t882) + t1130*t902 + 0.1305*(t1147*t922 - 1.*t1160*t951) + t1147*t957 + t1160*t990 + var1[1];
  p_output1[2]=0. + t1010*t1358 + t1242*t606 + t1052*t527*t709 + t1265*t774 + t1287*t831 - 0.049*(t1358*t839 + t1302*t882) - 0.21*(t1302*t839 - 1.*t1358*t882) + t1302*t902 + 0.1305*(t1332*t922 - 1.*t1342*t951) + t1332*t957 + t1342*t990 + var1[2];
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

#include "p_knee_joint_left.hh"

namespace SymExpression
{

void p_knee_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
