/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:28 GMT-04:00
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
  double t934;
  double t646;
  double t918;
  double t928;
  double t929;
  double t956;
  double t960;
  double t961;
  double t965;
  double t981;
  double t995;
  double t998;
  double t1022;
  double t1025;
  double t1028;
  double t1014;
  double t1016;
  double t1020;
  double t1030;
  double t1104;
  double t1106;
  double t1111;
  double t1115;
  double t1083;
  double t1085;
  double t1088;
  double t1125;
  double t1126;
  double t1130;
  double t1048;
  double t1054;
  double t1055;
  double t1069;
  double t1076;
  double t1080;
  double t1081;
  double t1212;
  double t1224;
  double t1226;
  double t1228;
  double t1233;
  double t1234;
  double t1249;
  double t1262;
  double t1264;
  double t1266;
  double t1281;
  double t1282;
  double t1285;
  double t1503;
  double t1511;
  double t1521;
  double t1530;
  double t1532;
  double t1548;
  double t1550;
  double t1552;
  double t1554;
  double t1555;
  double t1557;
  double t1565;
  double t1574;
  double t1576;
  double t1578;
  double t1591;
  double t1593;
  double t1595;
  double t1600;
  double t1602;
  double t1607;
  double t1620;
  double t1625;
  double t1635;
  double t1636;
  double t1654;
  double t1657;
  double t1658;
  t934 = Cos(var1[3]);
  t646 = Cos(var1[6]);
  t918 = Cos(var1[5]);
  t928 = Sin(var1[3]);
  t929 = t918*t928;
  t956 = Sin(var1[4]);
  t960 = Sin(var1[5]);
  t961 = t934*t956*t960;
  t965 = t929 + t961;
  t981 = Cos(var1[4]);
  t995 = Sin(var1[6]);
  t998 = Cos(var1[7]);
  t1022 = t934*t981*t646;
  t1025 = -1.*t965*t995;
  t1028 = t1022 + t1025;
  t1014 = t646*t965;
  t1016 = t934*t981*t995;
  t1020 = t1014 + t1016;
  t1030 = Sin(var1[7]);
  t1104 = Cos(var1[8]);
  t1106 = -1.*t1104;
  t1111 = 1. + t1106;
  t1115 = Sin(var1[8]);
  t1083 = t998*t1020;
  t1085 = t1028*t1030;
  t1088 = t1083 + t1085;
  t1125 = -1.*t934*t918*t956;
  t1126 = t928*t960;
  t1130 = t1125 + t1126;
  t1048 = Cos(var1[9]);
  t1054 = -1.*t1048;
  t1055 = 1. + t1054;
  t1069 = Sin(var1[9]);
  t1076 = t998*t1028;
  t1080 = -1.*t1020*t1030;
  t1081 = t1076 + t1080;
  t1212 = t1104*t1130;
  t1224 = t1088*t1115;
  t1226 = t1212 + t1224;
  t1228 = Cos(var1[10]);
  t1233 = -1.*t1228;
  t1234 = 1. + t1233;
  t1249 = Sin(var1[10]);
  t1262 = t1069*t1081;
  t1264 = t1048*t1226;
  t1266 = t1262 + t1264;
  t1281 = t1048*t1081;
  t1282 = -1.*t1069*t1226;
  t1285 = t1281 + t1282;
  t1503 = Cos(var1[11]);
  t1511 = Sin(var1[11]);
  t1521 = -1.*t1249*t1266;
  t1530 = t1228*t1285;
  t1532 = t1521 + t1530;
  t1548 = t1228*t1266;
  t1550 = t1249*t1285;
  t1552 = t1548 + t1550;
  t1554 = Cos(var1[12]);
  t1555 = -1.*t1554;
  t1557 = 1. + t1555;
  t1565 = Sin(var1[12]);
  t1574 = t1511*t1532;
  t1576 = t1503*t1552;
  t1578 = t1574 + t1576;
  t1591 = t1503*t1532;
  t1593 = -1.*t1511*t1552;
  t1595 = t1591 + t1593;
  t1600 = Cos(var1[13]);
  t1602 = -1.*t1600;
  t1607 = 1. + t1602;
  t1620 = Sin(var1[13]);
  t1625 = -1.*t1565*t1578;
  t1635 = t1554*t1595;
  t1636 = t1625 + t1635;
  t1654 = t1554*t1578;
  t1657 = t1565*t1595;
  t1658 = t1654 + t1657;
  p_output1[0]=-0.135*t1028*t1030 + (-0.09*t1055 + 0.049*t1069)*t1081 + t1088*(0.135*t1111 + 0.049*t1115) + (-0.049*t1111 + 0.135*t1115)*t1130 + 0.1305*(t1088*t1104 - 1.*t1115*t1130) + (-0.049*t1055 - 0.09*t1069)*t1226 + (-0.049*t1234 - 0.21*t1249)*t1266 + (-0.21*t1234 + 0.049*t1249)*t1285 + (-0.2707*(1. - 1.*t1503) + 0.0016*t1511)*t1532 + (0.0016*(-1. + t1503) - 0.2707*t1511)*t1552 + (0.0184*t1557 - 0.7055*t1565)*t1578 + (-0.7055*t1557 - 0.0184*t1565)*t1595 + (-1.1135*t1607 + 0.0216*t1620)*t1636 + (-0.0216*t1607 - 1.1135*t1620)*t1658 + 0.0306*(t1620*t1636 + t1600*t1658) - 1.1312*(t1600*t1636 - 1.*t1620*t1658) + 0.135*(1. - 1.*t646)*t965 - 0.135*t934*t981*t995 + 0.135*t1020*(1. - 1.*t998) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "swingFootClearance_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void swingFootClearance_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
