/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:11 GMT-04:00
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
  double t753;
  double t799;
  double t942;
  double t957;
  double t989;
  double t1021;
  double t1084;
  double t1122;
  double t1125;
  double t1046;
  double t1062;
  double t1069;
  double t1137;
  double t1261;
  double t1263;
  double t1270;
  double t1287;
  double t1234;
  double t1246;
  double t1252;
  double t1320;
  double t1161;
  double t1163;
  double t1165;
  double t1192;
  double t1215;
  double t1224;
  double t1226;
  double t1382;
  double t1384;
  double t1389;
  double t1399;
  double t1411;
  double t1415;
  double t1421;
  double t1434;
  double t1438;
  double t1440;
  double t1460;
  double t1466;
  double t1473;
  double t811;
  double t815;
  double t831;
  double t903;
  double t1522;
  double t992;
  double t996;
  double t1027;
  double t1028;
  double t1038;
  double t1039;
  double t1517;
  double t1521;
  double t1523;
  double t1530;
  double t1138;
  double t1143;
  double t1176;
  double t1201;
  double t1202;
  double t1547;
  double t1548;
  double t1553;
  double t1538;
  double t1539;
  double t1540;
  double t1276;
  double t1293;
  double t1296;
  double t1330;
  double t1336;
  double t1340;
  double t1568;
  double t1572;
  double t1575;
  double t1582;
  double t1586;
  double t1589;
  double t1362;
  double t1366;
  double t1375;
  double t1418;
  double t1428;
  double t1429;
  double t1562;
  double t1563;
  double t1564;
  double t1606;
  double t1608;
  double t1611;
  double t1452;
  double t1453;
  double t1454;
  double t1625;
  double t1628;
  double t1635;
  double t1642;
  double t1646;
  double t1650;
  double t1700;
  double t1702;
  double t1703;
  double t1737;
  double t1739;
  double t1745;
  double t1718;
  double t1724;
  double t1727;
  double t1757;
  double t1760;
  double t1765;
  double t1768;
  double t1769;
  double t1771;
  double t1747;
  double t1748;
  double t1751;
  double t1790;
  double t1793;
  double t1794;
  double t1808;
  double t1811;
  double t1820;
  double t1822;
  double t1825;
  double t1826;
  t753 = Cos(var1[4]);
  t799 = Cos(var1[6]);
  t942 = Sin(var1[5]);
  t957 = Sin(var1[4]);
  t989 = Sin(var1[6]);
  t1021 = Cos(var1[7]);
  t1084 = t799*t957;
  t1122 = t753*t942*t989;
  t1125 = t1084 + t1122;
  t1046 = -1.*t753*t799*t942;
  t1062 = t957*t989;
  t1069 = t1046 + t1062;
  t1137 = Sin(var1[7]);
  t1261 = Cos(var1[8]);
  t1263 = -1.*t1261;
  t1270 = 1. + t1263;
  t1287 = Sin(var1[8]);
  t1234 = t1021*t1069;
  t1246 = t1125*t1137;
  t1252 = t1234 + t1246;
  t1320 = Cos(var1[5]);
  t1161 = Cos(var1[9]);
  t1163 = -1.*t1161;
  t1165 = 1. + t1163;
  t1192 = Sin(var1[9]);
  t1215 = t1021*t1125;
  t1224 = -1.*t1069*t1137;
  t1226 = t1215 + t1224;
  t1382 = t753*t1320*t1261;
  t1384 = t1252*t1287;
  t1389 = t1382 + t1384;
  t1399 = Cos(var1[10]);
  t1411 = -1.*t1399;
  t1415 = 1. + t1411;
  t1421 = Sin(var1[10]);
  t1434 = t1192*t1226;
  t1438 = t1161*t1389;
  t1440 = t1434 + t1438;
  t1460 = t1161*t1226;
  t1466 = -1.*t1192*t1389;
  t1473 = t1460 + t1466;
  t811 = -1.*t799;
  t815 = 1. + t811;
  t831 = 0.135*t815;
  t903 = 0. + t831;
  t1522 = Sin(var1[3]);
  t992 = -0.135*t989;
  t996 = 0. + t992;
  t1027 = -1.*t1021;
  t1028 = 1. + t1027;
  t1038 = 0.135*t1028;
  t1039 = 0. + t1038;
  t1517 = Cos(var1[3]);
  t1521 = t1517*t1320;
  t1523 = -1.*t1522*t957*t942;
  t1530 = t1521 + t1523;
  t1138 = -0.135*t1137;
  t1143 = 0. + t1138;
  t1176 = -0.09*t1165;
  t1201 = 0.049*t1192;
  t1202 = 0. + t1176 + t1201;
  t1547 = -1.*t753*t799*t1522;
  t1548 = -1.*t1530*t989;
  t1553 = t1547 + t1548;
  t1538 = t799*t1530;
  t1539 = -1.*t753*t1522*t989;
  t1540 = t1538 + t1539;
  t1276 = 0.135*t1270;
  t1293 = 0.049*t1287;
  t1296 = 0. + t1276 + t1293;
  t1330 = -0.049*t1270;
  t1336 = 0.135*t1287;
  t1340 = 0. + t1330 + t1336;
  t1568 = t1021*t1540;
  t1572 = t1553*t1137;
  t1575 = t1568 + t1572;
  t1582 = t1320*t1522*t957;
  t1586 = t1517*t942;
  t1589 = t1582 + t1586;
  t1362 = -0.049*t1165;
  t1366 = -0.09*t1192;
  t1375 = 0. + t1362 + t1366;
  t1418 = -0.049*t1415;
  t1428 = -0.21*t1421;
  t1429 = 0. + t1418 + t1428;
  t1562 = t1021*t1553;
  t1563 = -1.*t1540*t1137;
  t1564 = t1562 + t1563;
  t1606 = t1261*t1589;
  t1608 = t1575*t1287;
  t1611 = t1606 + t1608;
  t1452 = -0.21*t1415;
  t1453 = 0.049*t1421;
  t1454 = 0. + t1452 + t1453;
  t1625 = t1192*t1564;
  t1628 = t1161*t1611;
  t1635 = t1625 + t1628;
  t1642 = t1161*t1564;
  t1646 = -1.*t1192*t1611;
  t1650 = t1642 + t1646;
  t1700 = t1320*t1522;
  t1702 = t1517*t957*t942;
  t1703 = t1700 + t1702;
  t1737 = t1517*t753*t799;
  t1739 = -1.*t1703*t989;
  t1745 = t1737 + t1739;
  t1718 = t799*t1703;
  t1724 = t1517*t753*t989;
  t1727 = t1718 + t1724;
  t1757 = t1021*t1727;
  t1760 = t1745*t1137;
  t1765 = t1757 + t1760;
  t1768 = -1.*t1517*t1320*t957;
  t1769 = t1522*t942;
  t1771 = t1768 + t1769;
  t1747 = t1021*t1745;
  t1748 = -1.*t1727*t1137;
  t1751 = t1747 + t1748;
  t1790 = t1261*t1771;
  t1793 = t1765*t1287;
  t1794 = t1790 + t1793;
  t1808 = t1192*t1751;
  t1811 = t1161*t1794;
  t1820 = t1808 + t1811;
  t1822 = t1161*t1751;
  t1825 = -1.*t1192*t1794;
  t1826 = t1822 + t1825;
  p_output1[0]=0. + t1039*t1069 + t1125*t1143 + t1202*t1226 + t1252*t1296 + t1375*t1389 + t1429*t1440 + t1454*t1473 - 0.2707*(-1.*t1421*t1440 + t1399*t1473) - 0.0016*(t1399*t1440 + t1421*t1473) + t1320*t1340*t753 + 0.1305*(t1252*t1261 - 1.*t1287*t1320*t753) - 1.*t753*t903*t942 + t957*t996 + var1[0];
  p_output1[1]=0. + t1039*t1540 + t1143*t1553 + t1202*t1564 + t1296*t1575 + t1340*t1589 + 0.1305*(t1261*t1575 - 1.*t1287*t1589) + t1375*t1611 + t1429*t1635 + t1454*t1650 - 0.2707*(-1.*t1421*t1635 + t1399*t1650) - 0.0016*(t1399*t1635 + t1421*t1650) + t1530*t903 - 1.*t1522*t753*t996 + var1[1];
  p_output1[2]=0. + t1039*t1727 + t1143*t1745 + t1202*t1751 + t1296*t1765 + t1340*t1771 + 0.1305*(t1261*t1765 - 1.*t1287*t1771) + t1375*t1794 + t1429*t1820 + t1454*t1826 - 0.2707*(-1.*t1421*t1820 + t1399*t1826) - 0.0016*(t1399*t1820 + t1421*t1826) + t1703*t903 + t1517*t753*t996 + var1[2];
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

#include "p_fixed_knee_to_shin_left.hh"

namespace SymExpression
{

void p_fixed_knee_to_shin_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
