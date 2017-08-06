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
  double t224;
  double t243;
  double t1138;
  double t1215;
  double t1226;
  double t1336;
  double t1453;
  double t1478;
  double t1480;
  double t1382;
  double t1428;
  double t1449;
  double t1483;
  double t1608;
  double t1612;
  double t1628;
  double t1652;
  double t1595;
  double t1601;
  double t1603;
  double t1692;
  double t1513;
  double t1521;
  double t1535;
  double t1553;
  double t1568;
  double t1572;
  double t1580;
  double t1751;
  double t1756;
  double t1757;
  double t1766;
  double t1769;
  double t1772;
  double t1784;
  double t1808;
  double t1811;
  double t1822;
  double t1862;
  double t1864;
  double t1874;
  double t1882;
  double t1883;
  double t1891;
  double t1893;
  double t1901;
  double t1910;
  double t1917;
  double t1932;
  double t1935;
  double t1937;
  double t245;
  double t1039;
  double t1122;
  double t1125;
  double t1977;
  double t1276;
  double t1293;
  double t1343;
  double t1348;
  double t1361;
  double t1375;
  double t1972;
  double t1976;
  double t1978;
  double t1980;
  double t1502;
  double t1508;
  double t1545;
  double t1564;
  double t1566;
  double t2026;
  double t2028;
  double t2040;
  double t2006;
  double t2008;
  double t2013;
  double t1642;
  double t1664;
  double t1671;
  double t1693;
  double t1702;
  double t1708;
  double t2059;
  double t2062;
  double t2063;
  double t2079;
  double t2080;
  double t2091;
  double t1745;
  double t1746;
  double t1747;
  double t1777;
  double t1788;
  double t1793;
  double t2046;
  double t2052;
  double t2054;
  double t2106;
  double t2107;
  double t2110;
  double t1853;
  double t1855;
  double t1857;
  double t1892;
  double t1894;
  double t1900;
  double t2115;
  double t2116;
  double t2119;
  double t2125;
  double t2140;
  double t2144;
  double t1923;
  double t1925;
  double t1929;
  double t2149;
  double t2152;
  double t2153;
  double t2156;
  double t2159;
  double t2160;
  double t2184;
  double t2191;
  double t2194;
  double t2224;
  double t2227;
  double t2229;
  double t2207;
  double t2210;
  double t2214;
  double t2241;
  double t2242;
  double t2246;
  double t2256;
  double t2257;
  double t2258;
  double t2233;
  double t2234;
  double t2239;
  double t2273;
  double t2278;
  double t2279;
  double t2295;
  double t2296;
  double t2302;
  double t2306;
  double t2310;
  double t2313;
  double t2322;
  double t2327;
  double t2328;
  double t2330;
  double t2332;
  double t2333;
  t224 = Cos(var1[4]);
  t243 = Cos(var1[6]);
  t1138 = Sin(var1[5]);
  t1215 = Sin(var1[4]);
  t1226 = Sin(var1[6]);
  t1336 = Cos(var1[7]);
  t1453 = t243*t1215;
  t1478 = t224*t1138*t1226;
  t1480 = t1453 + t1478;
  t1382 = -1.*t224*t243*t1138;
  t1428 = t1215*t1226;
  t1449 = t1382 + t1428;
  t1483 = Sin(var1[7]);
  t1608 = Cos(var1[8]);
  t1612 = -1.*t1608;
  t1628 = 1. + t1612;
  t1652 = Sin(var1[8]);
  t1595 = t1336*t1449;
  t1601 = t1480*t1483;
  t1603 = t1595 + t1601;
  t1692 = Cos(var1[5]);
  t1513 = Cos(var1[9]);
  t1521 = -1.*t1513;
  t1535 = 1. + t1521;
  t1553 = Sin(var1[9]);
  t1568 = t1336*t1480;
  t1572 = -1.*t1449*t1483;
  t1580 = t1568 + t1572;
  t1751 = t224*t1692*t1608;
  t1756 = t1603*t1652;
  t1757 = t1751 + t1756;
  t1766 = Cos(var1[10]);
  t1769 = -1.*t1766;
  t1772 = 1. + t1769;
  t1784 = Sin(var1[10]);
  t1808 = t1553*t1580;
  t1811 = t1513*t1757;
  t1822 = t1808 + t1811;
  t1862 = t1513*t1580;
  t1864 = -1.*t1553*t1757;
  t1874 = t1862 + t1864;
  t1882 = Cos(var1[11]);
  t1883 = -1.*t1882;
  t1891 = 1. + t1883;
  t1893 = Sin(var1[11]);
  t1901 = -1.*t1784*t1822;
  t1910 = t1766*t1874;
  t1917 = t1901 + t1910;
  t1932 = t1766*t1822;
  t1935 = t1784*t1874;
  t1937 = t1932 + t1935;
  t245 = -1.*t243;
  t1039 = 1. + t245;
  t1122 = 0.135*t1039;
  t1125 = 0. + t1122;
  t1977 = Sin(var1[3]);
  t1276 = -0.135*t1226;
  t1293 = 0. + t1276;
  t1343 = -1.*t1336;
  t1348 = 1. + t1343;
  t1361 = 0.135*t1348;
  t1375 = 0. + t1361;
  t1972 = Cos(var1[3]);
  t1976 = t1972*t1692;
  t1978 = -1.*t1977*t1215*t1138;
  t1980 = t1976 + t1978;
  t1502 = -0.135*t1483;
  t1508 = 0. + t1502;
  t1545 = -0.09*t1535;
  t1564 = 0.049*t1553;
  t1566 = 0. + t1545 + t1564;
  t2026 = -1.*t224*t243*t1977;
  t2028 = -1.*t1980*t1226;
  t2040 = t2026 + t2028;
  t2006 = t243*t1980;
  t2008 = -1.*t224*t1977*t1226;
  t2013 = t2006 + t2008;
  t1642 = 0.135*t1628;
  t1664 = 0.049*t1652;
  t1671 = 0. + t1642 + t1664;
  t1693 = -0.049*t1628;
  t1702 = 0.135*t1652;
  t1708 = 0. + t1693 + t1702;
  t2059 = t1336*t2013;
  t2062 = t2040*t1483;
  t2063 = t2059 + t2062;
  t2079 = t1692*t1977*t1215;
  t2080 = t1972*t1138;
  t2091 = t2079 + t2080;
  t1745 = -0.049*t1535;
  t1746 = -0.09*t1553;
  t1747 = 0. + t1745 + t1746;
  t1777 = -0.049*t1772;
  t1788 = -0.21*t1784;
  t1793 = 0. + t1777 + t1788;
  t2046 = t1336*t2040;
  t2052 = -1.*t2013*t1483;
  t2054 = t2046 + t2052;
  t2106 = t1608*t2091;
  t2107 = t2063*t1652;
  t2110 = t2106 + t2107;
  t1853 = -0.21*t1772;
  t1855 = 0.049*t1784;
  t1857 = 0. + t1853 + t1855;
  t1892 = -0.2707*t1891;
  t1894 = 0.0016*t1893;
  t1900 = 0. + t1892 + t1894;
  t2115 = t1553*t2054;
  t2116 = t1513*t2110;
  t2119 = t2115 + t2116;
  t2125 = t1513*t2054;
  t2140 = -1.*t1553*t2110;
  t2144 = t2125 + t2140;
  t1923 = -0.0016*t1891;
  t1925 = -0.2707*t1893;
  t1929 = 0. + t1923 + t1925;
  t2149 = -1.*t1784*t2119;
  t2152 = t1766*t2144;
  t2153 = t2149 + t2152;
  t2156 = t1766*t2119;
  t2159 = t1784*t2144;
  t2160 = t2156 + t2159;
  t2184 = t1692*t1977;
  t2191 = t1972*t1215*t1138;
  t2194 = t2184 + t2191;
  t2224 = t1972*t224*t243;
  t2227 = -1.*t2194*t1226;
  t2229 = t2224 + t2227;
  t2207 = t243*t2194;
  t2210 = t1972*t224*t1226;
  t2214 = t2207 + t2210;
  t2241 = t1336*t2214;
  t2242 = t2229*t1483;
  t2246 = t2241 + t2242;
  t2256 = -1.*t1972*t1692*t1215;
  t2257 = t1977*t1138;
  t2258 = t2256 + t2257;
  t2233 = t1336*t2229;
  t2234 = -1.*t2214*t1483;
  t2239 = t2233 + t2234;
  t2273 = t1608*t2258;
  t2278 = t2246*t1652;
  t2279 = t2273 + t2278;
  t2295 = t1553*t2239;
  t2296 = t1513*t2279;
  t2302 = t2295 + t2296;
  t2306 = t1513*t2239;
  t2310 = -1.*t1553*t2279;
  t2313 = t2306 + t2310;
  t2322 = -1.*t1784*t2302;
  t2327 = t1766*t2313;
  t2328 = t2322 + t2327;
  t2330 = t1766*t2302;
  t2332 = t1784*t2313;
  t2333 = t2330 + t2332;
  p_output1[0]=0. + t1215*t1293 + t1375*t1449 + t1480*t1508 + t1566*t1580 + t1603*t1671 + t1747*t1757 + t1793*t1822 + t1857*t1874 + t1900*t1917 + t1929*t1937 + 0.0184*(t1893*t1917 + t1882*t1937) - 0.7055*(t1882*t1917 - 1.*t1893*t1937) - 1.*t1125*t1138*t224 + t1692*t1708*t224 + 0.1305*(t1603*t1608 - 1.*t1652*t1692*t224) + var1[0];
  p_output1[1]=0. + t1125*t1980 + t1375*t2013 + t1508*t2040 + t1566*t2054 + t1671*t2063 + t1708*t2091 + 0.1305*(t1608*t2063 - 1.*t1652*t2091) + t1747*t2110 + t1793*t2119 + t1857*t2144 + t1900*t2153 + t1929*t2160 + 0.0184*(t1893*t2153 + t1882*t2160) - 0.7055*(t1882*t2153 - 1.*t1893*t2160) - 1.*t1293*t1977*t224 + var1[1];
  p_output1[2]=0. + t1125*t2194 + t1375*t2214 + t1508*t2229 + t1566*t2239 + t1293*t1972*t224 + t1671*t2246 + t1708*t2258 + 0.1305*(t1608*t2246 - 1.*t1652*t2258) + t1747*t2279 + t1793*t2302 + t1857*t2313 + t1900*t2328 + t1929*t2333 + 0.0184*(t1893*t2328 + t1882*t2333) - 0.7055*(t1882*t2328 - 1.*t1893*t2333) + var1[2];
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

#include "p_ankle_joint_left.hh"

namespace SymExpression
{

void p_ankle_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
