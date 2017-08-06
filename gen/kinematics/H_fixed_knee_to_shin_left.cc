/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:12 GMT-04:00
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
  double t1062;
  double t1005;
  double t1071;
  double t1038;
  double t1084;
  double t992;
  double t1143;
  double t1159;
  double t1176;
  double t1039;
  double t1122;
  double t1125;
  double t1201;
  double t1228;
  double t1138;
  double t1202;
  double t1215;
  double t953;
  double t1234;
  double t1246;
  double t1276;
  double t1293;
  double t1296;
  double t1316;
  double t1330;
  double t1336;
  double t1340;
  double t831;
  double t1384;
  double t1418;
  double t1428;
  double t1429;
  double t1434;
  double t1453;
  double t1454;
  double t1460;
  double t1394;
  double t1438;
  double t1449;
  double t1354;
  double t1452;
  double t1477;
  double t1478;
  double t1483;
  double t1502;
  double t1507;
  double t1508;
  double t1512;
  double t1513;
  double t1514;
  double t1521;
  double t1532;
  double t1572;
  double t1580;
  double t1582;
  double t1601;
  double t1603;
  double t1605;
  double t1568;
  double t1586;
  double t1591;
  double t1595;
  double t1606;
  double t1608;
  double t1625;
  double t1628;
  double t1641;
  double t1642;
  double t1652;
  double t1664;
  double t1665;
  double t1671;
  double t1675;
  double t1226;
  double t1343;
  double t1347;
  double t1361;
  double t1362;
  double t1366;
  double t1480;
  double t1535;
  double t1538;
  double t1553;
  double t1554;
  double t1562;
  double t1612;
  double t1684;
  double t1689;
  double t1693;
  double t1694;
  double t1700;
  double t1884;
  double t1887;
  double t1866;
  double t1868;
  double t1948;
  double t1955;
  double t1710;
  double t1718;
  double t1724;
  double t1789;
  double t1790;
  double t1793;
  double t1800;
  double t1811;
  double t1821;
  double t1831;
  double t1845;
  double t1852;
  double t1853;
  double t1857;
  double t1862;
  double t1874;
  double t1877;
  double t1882;
  double t1891;
  double t1892;
  double t1893;
  double t1900;
  double t1901;
  double t1910;
  double t1932;
  double t1935;
  double t1937;
  double t1958;
  double t1959;
  double t1960;
  double t1964;
  double t1965;
  double t1968;
  double t1734;
  double t1737;
  double t1745;
  double t1746;
  double t1747;
  double t1751;
  t1062 = Cos(var1[4]);
  t1005 = Cos(var1[6]);
  t1071 = Sin(var1[5]);
  t1038 = Sin(var1[4]);
  t1084 = Sin(var1[6]);
  t992 = Cos(var1[7]);
  t1143 = -1.*t1062*t1005*t1071;
  t1159 = t1038*t1084;
  t1176 = t1143 + t1159;
  t1039 = t1005*t1038;
  t1122 = t1062*t1071*t1084;
  t1125 = t1039 + t1122;
  t1201 = Sin(var1[7]);
  t1228 = Cos(var1[9]);
  t1138 = t992*t1125;
  t1202 = -1.*t1176*t1201;
  t1215 = t1138 + t1202;
  t953 = Sin(var1[9]);
  t1234 = Cos(var1[5]);
  t1246 = Cos(var1[8]);
  t1276 = t1062*t1234*t1246;
  t1293 = t992*t1176;
  t1296 = t1125*t1201;
  t1316 = t1293 + t1296;
  t1330 = Sin(var1[8]);
  t1336 = t1316*t1330;
  t1340 = t1276 + t1336;
  t831 = Sin(var1[10]);
  t1384 = Sin(var1[3]);
  t1418 = Cos(var1[3]);
  t1428 = t1418*t1234;
  t1429 = -1.*t1384*t1038*t1071;
  t1434 = t1428 + t1429;
  t1453 = t1005*t1434;
  t1454 = -1.*t1062*t1384*t1084;
  t1460 = t1453 + t1454;
  t1394 = -1.*t1062*t1005*t1384;
  t1438 = -1.*t1434*t1084;
  t1449 = t1394 + t1438;
  t1354 = Cos(var1[10]);
  t1452 = t992*t1449;
  t1477 = -1.*t1460*t1201;
  t1478 = t1452 + t1477;
  t1483 = t1234*t1384*t1038;
  t1502 = t1418*t1071;
  t1507 = t1483 + t1502;
  t1508 = t1246*t1507;
  t1512 = t992*t1460;
  t1513 = t1449*t1201;
  t1514 = t1512 + t1513;
  t1521 = t1514*t1330;
  t1532 = t1508 + t1521;
  t1572 = t1234*t1384;
  t1580 = t1418*t1038*t1071;
  t1582 = t1572 + t1580;
  t1601 = t1005*t1582;
  t1603 = t1418*t1062*t1084;
  t1605 = t1601 + t1603;
  t1568 = t1418*t1062*t1005;
  t1586 = -1.*t1582*t1084;
  t1591 = t1568 + t1586;
  t1595 = t992*t1591;
  t1606 = -1.*t1605*t1201;
  t1608 = t1595 + t1606;
  t1625 = -1.*t1418*t1234*t1038;
  t1628 = t1384*t1071;
  t1641 = t1625 + t1628;
  t1642 = t1246*t1641;
  t1652 = t992*t1605;
  t1664 = t1591*t1201;
  t1665 = t1652 + t1664;
  t1671 = t1665*t1330;
  t1675 = t1642 + t1671;
  t1226 = t953*t1215;
  t1343 = t1228*t1340;
  t1347 = t1226 + t1343;
  t1361 = t1228*t1215;
  t1362 = -1.*t953*t1340;
  t1366 = t1361 + t1362;
  t1480 = t953*t1478;
  t1535 = t1228*t1532;
  t1538 = t1480 + t1535;
  t1553 = t1228*t1478;
  t1554 = -1.*t953*t1532;
  t1562 = t1553 + t1554;
  t1612 = t953*t1608;
  t1684 = t1228*t1675;
  t1689 = t1612 + t1684;
  t1693 = t1228*t1608;
  t1694 = -1.*t953*t1675;
  t1700 = t1693 + t1694;
  t1884 = -1.*t1246;
  t1887 = 1. + t1884;
  t1866 = -1.*t1228;
  t1868 = 1. + t1866;
  t1948 = -1.*t1354;
  t1955 = 1. + t1948;
  t1710 = t1354*t1347;
  t1718 = t831*t1366;
  t1724 = t1710 + t1718;
  t1789 = -1.*t1005;
  t1790 = 1. + t1789;
  t1793 = 0.135*t1790;
  t1800 = 0. + t1793;
  t1811 = -0.135*t1084;
  t1821 = 0. + t1811;
  t1831 = -1.*t992;
  t1845 = 1. + t1831;
  t1852 = 0.135*t1845;
  t1853 = 0. + t1852;
  t1857 = -0.135*t1201;
  t1862 = 0. + t1857;
  t1874 = -0.09*t1868;
  t1877 = 0.049*t953;
  t1882 = 0. + t1874 + t1877;
  t1891 = 0.135*t1887;
  t1892 = 0.049*t1330;
  t1893 = 0. + t1891 + t1892;
  t1900 = -0.049*t1887;
  t1901 = 0.135*t1330;
  t1910 = 0. + t1900 + t1901;
  t1932 = -0.049*t1868;
  t1935 = -0.09*t953;
  t1937 = 0. + t1932 + t1935;
  t1958 = -0.049*t1955;
  t1959 = -0.21*t831;
  t1960 = 0. + t1958 + t1959;
  t1964 = -0.21*t1955;
  t1965 = 0.049*t831;
  t1968 = 0. + t1964 + t1965;
  t1734 = t1354*t1538;
  t1737 = t831*t1562;
  t1745 = t1734 + t1737;
  t1746 = t1354*t1689;
  t1747 = t831*t1700;
  t1751 = t1746 + t1747;
  p_output1[0]=-1.*t1354*t1366 + t1347*t831;
  p_output1[1]=-1.*t1354*t1562 + t1538*t831;
  p_output1[2]=-1.*t1354*t1700 + t1689*t831;
  p_output1[3]=0.;
  p_output1[4]=t1724;
  p_output1[5]=t1745;
  p_output1[6]=t1751;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1246*t1316 + t1062*t1234*t1330;
  p_output1[9]=t1330*t1507 - 1.*t1246*t1514;
  p_output1[10]=t1330*t1641 - 1.*t1246*t1665;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1246*t1316 - 1.*t1062*t1234*t1330) - 0.0016*t1724 - 1.*t1062*t1071*t1800 + t1038*t1821 + t1176*t1853 + t1125*t1862 + t1215*t1882 + t1316*t1893 + t1062*t1234*t1910 + t1340*t1937 + t1347*t1960 + t1366*t1968 - 0.2707*(t1354*t1366 - 1.*t1347*t831) + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1330*t1507 + t1246*t1514) - 0.0016*t1745 + t1434*t1800 - 1.*t1062*t1384*t1821 + t1460*t1853 + t1449*t1862 + t1478*t1882 + t1514*t1893 + t1507*t1910 + t1532*t1937 + t1538*t1960 + t1562*t1968 - 0.2707*(t1354*t1562 - 1.*t1538*t831) + var1[1];
  p_output1[14]=0. + 0.1305*(-1.*t1330*t1641 + t1246*t1665) - 0.0016*t1751 + t1582*t1800 + t1062*t1418*t1821 + t1605*t1853 + t1591*t1862 + t1608*t1882 + t1665*t1893 + t1641*t1910 + t1675*t1937 + t1689*t1960 + t1700*t1968 - 0.2707*(t1354*t1700 - 1.*t1689*t831) + var1[2];
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

#include "H_fixed_knee_to_shin_left.hh"

namespace SymExpression
{

void H_fixed_knee_to_shin_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
