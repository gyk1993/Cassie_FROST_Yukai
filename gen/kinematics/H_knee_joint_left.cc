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
  double t774;
  double t701;
  double t782;
  double t715;
  double t786;
  double t686;
  double t825;
  double t831;
  double t835;
  double t753;
  double t799;
  double t811;
  double t872;
  double t605;
  double t913;
  double t997;
  double t999;
  double t1005;
  double t1007;
  double t1010;
  double t912;
  double t915;
  double t1028;
  double t1030;
  double t1031;
  double t998;
  double t1020;
  double t1021;
  double t985;
  double t1138;
  double t1143;
  double t1154;
  double t1163;
  double t1165;
  double t1166;
  double t1137;
  double t1156;
  double t1159;
  double t815;
  double t892;
  double t902;
  double t942;
  double t953;
  double t957;
  double t978;
  double t989;
  double t990;
  double t1027;
  double t1032;
  double t1035;
  double t1039;
  double t1046;
  double t1048;
  double t1062;
  double t1069;
  double t1071;
  double t1072;
  double t1084;
  double t1110;
  double t1161;
  double t1171;
  double t1172;
  double t1191;
  double t1192;
  double t1198;
  double t1201;
  double t1202;
  double t1215;
  double t1216;
  double t1224;
  double t1225;
  double t1422;
  double t1423;
  double t1401;
  double t1406;
  double t1234;
  double t1246;
  double t1252;
  double t1351;
  double t1352;
  double t1354;
  double t1357;
  double t1362;
  double t1363;
  double t1367;
  double t1374;
  double t1375;
  double t1382;
  double t1389;
  double t1394;
  double t1411;
  double t1415;
  double t1418;
  double t1428;
  double t1429;
  double t1434;
  double t1440;
  double t1449;
  double t1452;
  double t1477;
  double t1478;
  double t1480;
  double t1261;
  double t1263;
  double t1270;
  double t1276;
  double t1287;
  double t1293;
  t774 = Cos(var1[4]);
  t701 = Cos(var1[6]);
  t782 = Sin(var1[5]);
  t715 = Sin(var1[4]);
  t786 = Sin(var1[6]);
  t686 = Cos(var1[7]);
  t825 = -1.*t774*t701*t782;
  t831 = t715*t786;
  t835 = t825 + t831;
  t753 = t701*t715;
  t799 = t774*t782*t786;
  t811 = t753 + t799;
  t872 = Sin(var1[7]);
  t605 = Cos(var1[9]);
  t913 = Cos(var1[5]);
  t997 = Sin(var1[3]);
  t999 = Cos(var1[3]);
  t1005 = t999*t913;
  t1007 = -1.*t997*t715*t782;
  t1010 = t1005 + t1007;
  t912 = Sin(var1[9]);
  t915 = Cos(var1[8]);
  t1028 = t701*t1010;
  t1030 = -1.*t774*t997*t786;
  t1031 = t1028 + t1030;
  t998 = -1.*t774*t701*t997;
  t1020 = -1.*t1010*t786;
  t1021 = t998 + t1020;
  t985 = Sin(var1[8]);
  t1138 = t913*t997;
  t1143 = t999*t715*t782;
  t1154 = t1138 + t1143;
  t1163 = t701*t1154;
  t1165 = t999*t774*t786;
  t1166 = t1163 + t1165;
  t1137 = t999*t774*t701;
  t1156 = -1.*t1154*t786;
  t1159 = t1137 + t1156;
  t815 = t686*t811;
  t892 = -1.*t835*t872;
  t902 = t815 + t892;
  t942 = t774*t913*t915;
  t953 = t686*t835;
  t957 = t811*t872;
  t978 = t953 + t957;
  t989 = t978*t985;
  t990 = t942 + t989;
  t1027 = t686*t1021;
  t1032 = -1.*t1031*t872;
  t1035 = t1027 + t1032;
  t1039 = t913*t997*t715;
  t1046 = t999*t782;
  t1048 = t1039 + t1046;
  t1062 = t915*t1048;
  t1069 = t686*t1031;
  t1071 = t1021*t872;
  t1072 = t1069 + t1071;
  t1084 = t1072*t985;
  t1110 = t1062 + t1084;
  t1161 = t686*t1159;
  t1171 = -1.*t1166*t872;
  t1172 = t1161 + t1171;
  t1191 = -1.*t999*t913*t715;
  t1192 = t997*t782;
  t1198 = t1191 + t1192;
  t1201 = t915*t1198;
  t1202 = t686*t1166;
  t1215 = t1159*t872;
  t1216 = t1202 + t1215;
  t1224 = t1216*t985;
  t1225 = t1201 + t1224;
  t1422 = -1.*t915;
  t1423 = 1. + t1422;
  t1401 = -1.*t605;
  t1406 = 1. + t1401;
  t1234 = t912*t902;
  t1246 = t605*t990;
  t1252 = t1234 + t1246;
  t1351 = -1.*t701;
  t1352 = 1. + t1351;
  t1354 = 0.135*t1352;
  t1357 = 0. + t1354;
  t1362 = -0.135*t786;
  t1363 = 0. + t1362;
  t1367 = -1.*t686;
  t1374 = 1. + t1367;
  t1375 = 0.135*t1374;
  t1382 = 0. + t1375;
  t1389 = -0.135*t872;
  t1394 = 0. + t1389;
  t1411 = -0.09*t1406;
  t1415 = 0.049*t912;
  t1418 = 0. + t1411 + t1415;
  t1428 = 0.135*t1423;
  t1429 = 0.049*t985;
  t1434 = 0. + t1428 + t1429;
  t1440 = -0.049*t1423;
  t1449 = 0.135*t985;
  t1452 = 0. + t1440 + t1449;
  t1477 = -0.049*t1406;
  t1478 = -0.09*t912;
  t1480 = 0. + t1477 + t1478;
  t1261 = t912*t1035;
  t1263 = t605*t1110;
  t1270 = t1261 + t1263;
  t1276 = t912*t1172;
  t1287 = t605*t1225;
  t1293 = t1276 + t1287;
  p_output1[0]=-1.*t605*t902 + t912*t990;
  p_output1[1]=-1.*t1035*t605 + t1110*t912;
  p_output1[2]=-1.*t1172*t605 + t1225*t912;
  p_output1[3]=0.;
  p_output1[4]=t1252;
  p_output1[5]=t1270;
  p_output1[6]=t1293;
  p_output1[7]=0.;
  p_output1[8]=-1.*t915*t978 + t774*t913*t985;
  p_output1[9]=-1.*t1072*t915 + t1048*t985;
  p_output1[10]=-1.*t1216*t915 + t1198*t985;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t1252 + t1363*t715 - 1.*t1357*t774*t782 + t1394*t811 + t1382*t835 + t1418*t902 + t1452*t774*t913 + t1434*t978 + 0.1305*(t915*t978 - 1.*t774*t913*t985) + t1480*t990 - 0.21*(t605*t902 - 1.*t912*t990) + var1[0];
  p_output1[13]=0. - 0.049*t1270 + t1010*t1357 + t1031*t1382 + t1021*t1394 + t1035*t1418 + t1072*t1434 + t1048*t1452 + t1110*t1480 - 0.21*(t1035*t605 - 1.*t1110*t912) + 0.1305*(t1072*t915 - 1.*t1048*t985) - 1.*t1363*t774*t997 + var1[1];
  p_output1[14]=0. - 0.049*t1293 + t1154*t1357 + t1166*t1382 + t1159*t1394 + t1172*t1418 + t1216*t1434 + t1198*t1452 + t1225*t1480 - 0.21*(t1172*t605 - 1.*t1225*t912) + 0.1305*(t1216*t915 - 1.*t1198*t985) + t1363*t774*t999 + var1[2];
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

#include "H_knee_joint_left.hh"

namespace SymExpression
{

void H_knee_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
