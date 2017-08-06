/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:13 GMT-04:00
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
  double t1452;
  double t1361;
  double t1453;
  double t1375;
  double t1478;
  double t1296;
  double t1512;
  double t1545;
  double t1564;
  double t1428;
  double t1480;
  double t1502;
  double t1566;
  double t1595;
  double t1508;
  double t1568;
  double t1580;
  double t1276;
  double t1601;
  double t1642;
  double t1664;
  double t1671;
  double t1684;
  double t1693;
  double t1702;
  double t1708;
  double t1710;
  double t1737;
  double t1591;
  double t1718;
  double t1724;
  double t1159;
  double t1745;
  double t1746;
  double t1747;
  double t1122;
  double t1853;
  double t1857;
  double t1862;
  double t1874;
  double t1877;
  double t1910;
  double t1920;
  double t1923;
  double t1855;
  double t1892;
  double t1894;
  double t1900;
  double t1925;
  double t1929;
  double t1935;
  double t1938;
  double t1958;
  double t1959;
  double t1960;
  double t1963;
  double t1964;
  double t1965;
  double t1968;
  double t1777;
  double t1932;
  double t1970;
  double t1971;
  double t1985;
  double t1990;
  double t2006;
  double t2079;
  double t2080;
  double t2083;
  double t2098;
  double t2101;
  double t2102;
  double t2066;
  double t2092;
  double t2094;
  double t2095;
  double t2106;
  double t2107;
  double t2115;
  double t2116;
  double t2121;
  double t2125;
  double t2144;
  double t2147;
  double t2152;
  double t2155;
  double t2156;
  double t2113;
  double t2159;
  double t2162;
  double t2168;
  double t2170;
  double t2171;
  double t1734;
  double t1751;
  double t1756;
  double t1788;
  double t1793;
  double t1808;
  double t1976;
  double t2024;
  double t2040;
  double t2046;
  double t2054;
  double t2056;
  double t2164;
  double t2174;
  double t2176;
  double t2181;
  double t2182;
  double t2184;
  double t2355;
  double t2356;
  double t2344;
  double t2345;
  double t2392;
  double t2395;
  double t2416;
  double t2417;
  double t2204;
  double t2207;
  double t2210;
  double t2272;
  double t2273;
  double t2278;
  double t2292;
  double t2296;
  double t2305;
  double t2313;
  double t2318;
  double t2327;
  double t2329;
  double t2332;
  double t2334;
  double t2346;
  double t2347;
  double t2353;
  double t2357;
  double t2360;
  double t2361;
  double t2363;
  double t2365;
  double t2366;
  double t2380;
  double t2382;
  double t2384;
  double t2396;
  double t2400;
  double t2402;
  double t2404;
  double t2406;
  double t2407;
  double t2418;
  double t2420;
  double t2422;
  double t2427;
  double t2428;
  double t2430;
  double t2215;
  double t2224;
  double t2229;
  double t2232;
  double t2233;
  double t2239;
  t1452 = Cos(var1[4]);
  t1361 = Cos(var1[6]);
  t1453 = Sin(var1[5]);
  t1375 = Sin(var1[4]);
  t1478 = Sin(var1[6]);
  t1296 = Cos(var1[7]);
  t1512 = -1.*t1452*t1361*t1453;
  t1545 = t1375*t1478;
  t1564 = t1512 + t1545;
  t1428 = t1361*t1375;
  t1480 = t1452*t1453*t1478;
  t1502 = t1428 + t1480;
  t1566 = Sin(var1[7]);
  t1595 = Cos(var1[9]);
  t1508 = t1296*t1502;
  t1568 = -1.*t1564*t1566;
  t1580 = t1508 + t1568;
  t1276 = Sin(var1[9]);
  t1601 = Cos(var1[5]);
  t1642 = Cos(var1[8]);
  t1664 = t1452*t1601*t1642;
  t1671 = t1296*t1564;
  t1684 = t1502*t1566;
  t1693 = t1671 + t1684;
  t1702 = Sin(var1[8]);
  t1708 = t1693*t1702;
  t1710 = t1664 + t1708;
  t1737 = Cos(var1[10]);
  t1591 = t1276*t1580;
  t1718 = t1595*t1710;
  t1724 = t1591 + t1718;
  t1159 = Sin(var1[10]);
  t1745 = t1595*t1580;
  t1746 = -1.*t1276*t1710;
  t1747 = t1745 + t1746;
  t1122 = Cos(var1[11]);
  t1853 = Sin(var1[3]);
  t1857 = Cos(var1[3]);
  t1862 = t1857*t1601;
  t1874 = -1.*t1853*t1375*t1453;
  t1877 = t1862 + t1874;
  t1910 = t1361*t1877;
  t1920 = -1.*t1452*t1853*t1478;
  t1923 = t1910 + t1920;
  t1855 = -1.*t1452*t1361*t1853;
  t1892 = -1.*t1877*t1478;
  t1894 = t1855 + t1892;
  t1900 = t1296*t1894;
  t1925 = -1.*t1923*t1566;
  t1929 = t1900 + t1925;
  t1935 = t1601*t1853*t1375;
  t1938 = t1857*t1453;
  t1958 = t1935 + t1938;
  t1959 = t1642*t1958;
  t1960 = t1296*t1923;
  t1963 = t1894*t1566;
  t1964 = t1960 + t1963;
  t1965 = t1964*t1702;
  t1968 = t1959 + t1965;
  t1777 = Sin(var1[11]);
  t1932 = t1276*t1929;
  t1970 = t1595*t1968;
  t1971 = t1932 + t1970;
  t1985 = t1595*t1929;
  t1990 = -1.*t1276*t1968;
  t2006 = t1985 + t1990;
  t2079 = t1601*t1853;
  t2080 = t1857*t1375*t1453;
  t2083 = t2079 + t2080;
  t2098 = t1361*t2083;
  t2101 = t1857*t1452*t1478;
  t2102 = t2098 + t2101;
  t2066 = t1857*t1452*t1361;
  t2092 = -1.*t2083*t1478;
  t2094 = t2066 + t2092;
  t2095 = t1296*t2094;
  t2106 = -1.*t2102*t1566;
  t2107 = t2095 + t2106;
  t2115 = -1.*t1857*t1601*t1375;
  t2116 = t1853*t1453;
  t2121 = t2115 + t2116;
  t2125 = t1642*t2121;
  t2144 = t1296*t2102;
  t2147 = t2094*t1566;
  t2152 = t2144 + t2147;
  t2155 = t2152*t1702;
  t2156 = t2125 + t2155;
  t2113 = t1276*t2107;
  t2159 = t1595*t2156;
  t2162 = t2113 + t2159;
  t2168 = t1595*t2107;
  t2170 = -1.*t1276*t2156;
  t2171 = t2168 + t2170;
  t1734 = -1.*t1159*t1724;
  t1751 = t1737*t1747;
  t1756 = t1734 + t1751;
  t1788 = t1737*t1724;
  t1793 = t1159*t1747;
  t1808 = t1788 + t1793;
  t1976 = -1.*t1159*t1971;
  t2024 = t1737*t2006;
  t2040 = t1976 + t2024;
  t2046 = t1737*t1971;
  t2054 = t1159*t2006;
  t2056 = t2046 + t2054;
  t2164 = -1.*t1159*t2162;
  t2174 = t1737*t2171;
  t2176 = t2164 + t2174;
  t2181 = t1737*t2162;
  t2182 = t1159*t2171;
  t2184 = t2181 + t2182;
  t2355 = -1.*t1642;
  t2356 = 1. + t2355;
  t2344 = -1.*t1595;
  t2345 = 1. + t2344;
  t2392 = -1.*t1737;
  t2395 = 1. + t2392;
  t2416 = -1.*t1122;
  t2417 = 1. + t2416;
  t2204 = t1777*t1756;
  t2207 = t1122*t1808;
  t2210 = t2204 + t2207;
  t2272 = -1.*t1361;
  t2273 = 1. + t2272;
  t2278 = 0.135*t2273;
  t2292 = 0. + t2278;
  t2296 = -0.135*t1478;
  t2305 = 0. + t2296;
  t2313 = -1.*t1296;
  t2318 = 1. + t2313;
  t2327 = 0.135*t2318;
  t2329 = 0. + t2327;
  t2332 = -0.135*t1566;
  t2334 = 0. + t2332;
  t2346 = -0.09*t2345;
  t2347 = 0.049*t1276;
  t2353 = 0. + t2346 + t2347;
  t2357 = 0.135*t2356;
  t2360 = 0.049*t1702;
  t2361 = 0. + t2357 + t2360;
  t2363 = -0.049*t2356;
  t2365 = 0.135*t1702;
  t2366 = 0. + t2363 + t2365;
  t2380 = -0.049*t2345;
  t2382 = -0.09*t1276;
  t2384 = 0. + t2380 + t2382;
  t2396 = -0.049*t2395;
  t2400 = -0.21*t1159;
  t2402 = 0. + t2396 + t2400;
  t2404 = -0.21*t2395;
  t2406 = 0.049*t1159;
  t2407 = 0. + t2404 + t2406;
  t2418 = -0.2707*t2417;
  t2420 = 0.0016*t1777;
  t2422 = 0. + t2418 + t2420;
  t2427 = -0.0016*t2417;
  t2428 = -0.2707*t1777;
  t2430 = 0. + t2427 + t2428;
  t2215 = t1777*t2040;
  t2224 = t1122*t2056;
  t2229 = t2215 + t2224;
  t2232 = t1777*t2176;
  t2233 = t1122*t2184;
  t2239 = t2232 + t2233;
  p_output1[0]=-1.*t1122*t1756 + t1777*t1808;
  p_output1[1]=-1.*t1122*t2040 + t1777*t2056;
  p_output1[2]=-1.*t1122*t2176 + t1777*t2184;
  p_output1[3]=0.;
  p_output1[4]=t2210;
  p_output1[5]=t2229;
  p_output1[6]=t2239;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1642*t1693 + t1452*t1601*t1702;
  p_output1[9]=t1702*t1958 - 1.*t1642*t1964;
  p_output1[10]=t1702*t2121 - 1.*t1642*t2152;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1642*t1693 - 1.*t1452*t1601*t1702) - 0.7055*(t1122*t1756 - 1.*t1777*t1808) + 0.0184*t2210 - 1.*t1452*t1453*t2292 + t1375*t2305 + t1564*t2329 + t1502*t2334 + t1580*t2353 + t1693*t2361 + t1452*t1601*t2366 + t1710*t2384 + t1724*t2402 + t1747*t2407 + t1756*t2422 + t1808*t2430 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t1702*t1958 + t1642*t1964) - 0.7055*(t1122*t2040 - 1.*t1777*t2056) + 0.0184*t2229 + t1877*t2292 - 1.*t1452*t1853*t2305 + t1923*t2329 + t1894*t2334 + t1929*t2353 + t1964*t2361 + t1958*t2366 + t1968*t2384 + t1971*t2402 + t2006*t2407 + t2040*t2422 + t2056*t2430 + var1[1];
  p_output1[14]=0. + 0.1305*(-1.*t1702*t2121 + t1642*t2152) - 0.7055*(t1122*t2176 - 1.*t1777*t2184) + 0.0184*t2239 + t2083*t2292 + t1452*t1857*t2305 + t2102*t2329 + t2094*t2334 + t2107*t2353 + t2152*t2361 + t2121*t2366 + t2156*t2384 + t2162*t2402 + t2171*t2407 + t2176*t2422 + t2184*t2430 + var1[2];
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

#include "H_ankle_joint_left.hh"

namespace SymExpression
{

void H_ankle_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
