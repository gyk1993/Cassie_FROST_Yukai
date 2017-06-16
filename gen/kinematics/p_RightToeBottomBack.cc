/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:22 GMT-04:00
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
  double t81;
  double t1801;
  double t1833;
  double t1846;
  double t1864;
  double t1922;
  double t1896;
  double t1912;
  double t1919;
  double t1880;
  double t1941;
  double t1946;
  double t1949;
  double t1701;
  double t1702;
  double t1731;
  double t1779;
  double t1675;
  double t1994;
  double t1995;
  double t1997;
  double t1951;
  double t1958;
  double t1961;
  double t1964;
  double t1968;
  double t1974;
  double t1976;
  double t2018;
  double t2020;
  double t2022;
  double t2026;
  double t2027;
  double t2033;
  double t2040;
  double t2044;
  double t2045;
  double t2046;
  double t2057;
  double t2058;
  double t2060;
  double t2064;
  double t2065;
  double t2067;
  double t2070;
  double t2073;
  double t2074;
  double t2076;
  double t2081;
  double t2084;
  double t2085;
  double t2088;
  double t2092;
  double t2095;
  double t2098;
  double t2105;
  double t2107;
  double t2108;
  double t2118;
  double t2121;
  double t2122;
  double t2124;
  double t2125;
  double t2126;
  double t2128;
  double t2131;
  double t2132;
  double t2133;
  double t2140;
  double t2141;
  double t2142;
  double t1813;
  double t1822;
  double t1743;
  double t1782;
  double t1791;
  double t2155;
  double t1848;
  double t1851;
  double t1854;
  double t1858;
  double t2160;
  double t1885;
  double t1887;
  double t1889;
  double t1895;
  double t2164;
  double t2165;
  double t2166;
  double t1935;
  double t1938;
  double t1963;
  double t1965;
  double t1966;
  double t2170;
  double t2171;
  double t2172;
  double t2174;
  double t2175;
  double t2176;
  double t1988;
  double t1989;
  double t1993;
  double t2159;
  double t2161;
  double t2162;
  double t2182;
  double t2183;
  double t2184;
  double t2011;
  double t2012;
  double t2014;
  double t2038;
  double t2042;
  double t2043;
  double t2178;
  double t2179;
  double t2180;
  double t2190;
  double t2191;
  double t2192;
  double t2051;
  double t2053;
  double t2055;
  double t2068;
  double t2071;
  double t2072;
  double t2194;
  double t2195;
  double t2196;
  double t2198;
  double t2199;
  double t2200;
  double t2078;
  double t2079;
  double t2080;
  double t2096;
  double t2102;
  double t2104;
  double t2202;
  double t2203;
  double t2204;
  double t2206;
  double t2207;
  double t2208;
  double t2114;
  double t2116;
  double t2117;
  double t2127;
  double t2129;
  double t2130;
  double t2210;
  double t2211;
  double t2212;
  double t2214;
  double t2215;
  double t2216;
  double t2135;
  double t2136;
  double t2139;
  double t2218;
  double t2219;
  double t2220;
  double t2222;
  double t2223;
  double t2224;
  double t2240;
  double t2241;
  double t2242;
  double t2244;
  double t2245;
  double t2246;
  double t2248;
  double t2249;
  double t2250;
  double t2236;
  double t2237;
  double t2238;
  double t2256;
  double t2257;
  double t2258;
  double t2252;
  double t2253;
  double t2254;
  double t2264;
  double t2265;
  double t2266;
  double t2268;
  double t2269;
  double t2270;
  double t2272;
  double t2273;
  double t2274;
  double t2276;
  double t2277;
  double t2278;
  double t2280;
  double t2281;
  double t2282;
  double t2284;
  double t2285;
  double t2286;
  double t2288;
  double t2289;
  double t2290;
  double t2292;
  double t2293;
  double t2294;
  double t2296;
  double t2297;
  double t2298;
  t81 = Cos(var1[4]);
  t1801 = Sin(var1[14]);
  t1833 = Sin(var1[4]);
  t1846 = Cos(var1[14]);
  t1864 = Sin(var1[5]);
  t1922 = Sin(var1[15]);
  t1896 = t1801*t1833;
  t1912 = -1.*t1846*t81*t1864;
  t1919 = t1896 + t1912;
  t1880 = Cos(var1[15]);
  t1941 = t1846*t1833;
  t1946 = t81*t1801*t1864;
  t1949 = t1941 + t1946;
  t1701 = Cos(var1[16]);
  t1702 = -1.*t1701;
  t1731 = 1. + t1702;
  t1779 = Sin(var1[16]);
  t1675 = Cos(var1[5]);
  t1994 = t1880*t1919;
  t1995 = t1922*t1949;
  t1997 = t1994 + t1995;
  t1951 = Cos(var1[17]);
  t1958 = -1.*t1951;
  t1961 = 1. + t1958;
  t1964 = Sin(var1[17]);
  t1968 = -1.*t1922*t1919;
  t1974 = t1880*t1949;
  t1976 = t1968 + t1974;
  t2018 = t1701*t81*t1675;
  t2020 = -1.*t1779*t1997;
  t2022 = t2018 + t2020;
  t2026 = Cos(var1[18]);
  t2027 = -1.*t2026;
  t2033 = 1. + t2027;
  t2040 = Sin(var1[18]);
  t2044 = t1964*t1976;
  t2045 = t1951*t2022;
  t2046 = t2044 + t2045;
  t2057 = t1951*t1976;
  t2058 = -1.*t1964*t2022;
  t2060 = t2057 + t2058;
  t2064 = Cos(var1[19]);
  t2065 = -1.*t2064;
  t2067 = 1. + t2065;
  t2070 = Sin(var1[19]);
  t2073 = -1.*t2040*t2046;
  t2074 = t2026*t2060;
  t2076 = t2073 + t2074;
  t2081 = t2026*t2046;
  t2084 = t2040*t2060;
  t2085 = t2081 + t2084;
  t2088 = Cos(var1[20]);
  t2092 = -1.*t2088;
  t2095 = 1. + t2092;
  t2098 = Sin(var1[20]);
  t2105 = t2070*t2076;
  t2107 = t2064*t2085;
  t2108 = t2105 + t2107;
  t2118 = t2064*t2076;
  t2121 = -1.*t2070*t2085;
  t2122 = t2118 + t2121;
  t2124 = Cos(var1[21]);
  t2125 = -1.*t2124;
  t2126 = 1. + t2125;
  t2128 = Sin(var1[21]);
  t2131 = -1.*t2098*t2108;
  t2132 = t2088*t2122;
  t2133 = t2131 + t2132;
  t2140 = t2088*t2108;
  t2141 = t2098*t2122;
  t2142 = t2140 + t2141;
  t1813 = 0.135*t1801;
  t1822 = 0. + t1813;
  t1743 = -0.049*t1731;
  t1782 = 0.135*t1779;
  t1791 = 0. + t1743 + t1782;
  t2155 = Sin(var1[3]);
  t1848 = -1.*t1846;
  t1851 = 1. + t1848;
  t1854 = -0.135*t1851;
  t1858 = 0. + t1854;
  t2160 = Cos(var1[3]);
  t1885 = -1.*t1880;
  t1887 = 1. + t1885;
  t1889 = -0.135*t1887;
  t1895 = 0. + t1889;
  t2164 = t2160*t1675;
  t2165 = -1.*t2155*t1833*t1864;
  t2166 = t2164 + t2165;
  t1935 = 0.135*t1922;
  t1938 = 0. + t1935;
  t1963 = -0.09*t1961;
  t1965 = 0.049*t1964;
  t1966 = 0. + t1963 + t1965;
  t2170 = -1.*t81*t1801*t2155;
  t2171 = t1846*t2166;
  t2172 = t2170 + t2171;
  t2174 = -1.*t1846*t81*t2155;
  t2175 = -1.*t1801*t2166;
  t2176 = t2174 + t2175;
  t1988 = -0.135*t1731;
  t1989 = -0.049*t1779;
  t1993 = 0. + t1988 + t1989;
  t2159 = t1675*t2155*t1833;
  t2161 = t2160*t1864;
  t2162 = t2159 + t2161;
  t2182 = t1880*t2172;
  t2183 = t1922*t2176;
  t2184 = t2182 + t2183;
  t2011 = -0.049*t1961;
  t2012 = -0.09*t1964;
  t2014 = 0. + t2011 + t2012;
  t2038 = -0.049*t2033;
  t2042 = -0.21*t2040;
  t2043 = 0. + t2038 + t2042;
  t2178 = -1.*t1922*t2172;
  t2179 = t1880*t2176;
  t2180 = t2178 + t2179;
  t2190 = t1701*t2162;
  t2191 = -1.*t1779*t2184;
  t2192 = t2190 + t2191;
  t2051 = -0.21*t2033;
  t2053 = 0.049*t2040;
  t2055 = 0. + t2051 + t2053;
  t2068 = -0.2707*t2067;
  t2071 = 0.0016*t2070;
  t2072 = 0. + t2068 + t2071;
  t2194 = t1964*t2180;
  t2195 = t1951*t2192;
  t2196 = t2194 + t2195;
  t2198 = t1951*t2180;
  t2199 = -1.*t1964*t2192;
  t2200 = t2198 + t2199;
  t2078 = -0.0016*t2067;
  t2079 = -0.2707*t2070;
  t2080 = 0. + t2078 + t2079;
  t2096 = 0.0184*t2095;
  t2102 = -0.7055*t2098;
  t2104 = 0. + t2096 + t2102;
  t2202 = -1.*t2040*t2196;
  t2203 = t2026*t2200;
  t2204 = t2202 + t2203;
  t2206 = t2026*t2196;
  t2207 = t2040*t2200;
  t2208 = t2206 + t2207;
  t2114 = -0.7055*t2095;
  t2116 = -0.0184*t2098;
  t2117 = 0. + t2114 + t2116;
  t2127 = -1.1135*t2126;
  t2129 = 0.0216*t2128;
  t2130 = 0. + t2127 + t2129;
  t2210 = t2070*t2204;
  t2211 = t2064*t2208;
  t2212 = t2210 + t2211;
  t2214 = t2064*t2204;
  t2215 = -1.*t2070*t2208;
  t2216 = t2214 + t2215;
  t2135 = -0.0216*t2126;
  t2136 = -1.1135*t2128;
  t2139 = 0. + t2135 + t2136;
  t2218 = -1.*t2098*t2212;
  t2219 = t2088*t2216;
  t2220 = t2218 + t2219;
  t2222 = t2088*t2212;
  t2223 = t2098*t2216;
  t2224 = t2222 + t2223;
  t2240 = t1675*t2155;
  t2241 = t2160*t1833*t1864;
  t2242 = t2240 + t2241;
  t2244 = t2160*t81*t1801;
  t2245 = t1846*t2242;
  t2246 = t2244 + t2245;
  t2248 = t1846*t2160*t81;
  t2249 = -1.*t1801*t2242;
  t2250 = t2248 + t2249;
  t2236 = -1.*t2160*t1675*t1833;
  t2237 = t2155*t1864;
  t2238 = t2236 + t2237;
  t2256 = t1880*t2246;
  t2257 = t1922*t2250;
  t2258 = t2256 + t2257;
  t2252 = -1.*t1922*t2246;
  t2253 = t1880*t2250;
  t2254 = t2252 + t2253;
  t2264 = t1701*t2238;
  t2265 = -1.*t1779*t2258;
  t2266 = t2264 + t2265;
  t2268 = t1964*t2254;
  t2269 = t1951*t2266;
  t2270 = t2268 + t2269;
  t2272 = t1951*t2254;
  t2273 = -1.*t1964*t2266;
  t2274 = t2272 + t2273;
  t2276 = -1.*t2040*t2270;
  t2277 = t2026*t2274;
  t2278 = t2276 + t2277;
  t2280 = t2026*t2270;
  t2281 = t2040*t2274;
  t2282 = t2280 + t2281;
  t2284 = t2070*t2278;
  t2285 = t2064*t2282;
  t2286 = t2284 + t2285;
  t2288 = t2064*t2278;
  t2289 = -1.*t2070*t2282;
  t2290 = t2288 + t2289;
  t2292 = -1.*t2098*t2286;
  t2293 = t2088*t2290;
  t2294 = t2292 + t2293;
  t2296 = t2088*t2286;
  t2297 = t2098*t2290;
  t2298 = t2296 + t2297;
  p_output1[0]=0. + t1822*t1833 + t1895*t1919 + t1938*t1949 + t1966*t1976 + t1993*t1997 + t2014*t2022 + t2043*t2046 + t2055*t2060 + t2072*t2076 + t2080*t2085 + t2104*t2108 + t2117*t2122 + t2130*t2133 + t2139*t2142 - 0.0216*(t2128*t2133 + t2124*t2142) - 1.193387*(t2124*t2133 - 1.*t2128*t2142) + t1675*t1791*t81 - 1.*t1858*t1864*t81 - 0.1305*(t1701*t1997 + t1675*t1779*t81) + var1[0];
  p_output1[1]=0. + t1791*t2162 + t1858*t2166 + t1895*t2172 + t1938*t2176 + t1966*t2180 + t1993*t2184 - 0.1305*(t1779*t2162 + t1701*t2184) + t2014*t2192 + t2043*t2196 + t2055*t2200 + t2072*t2204 + t2080*t2208 + t2104*t2212 + t2117*t2216 + t2130*t2220 + t2139*t2224 - 0.0216*(t2128*t2220 + t2124*t2224) - 1.193387*(t2124*t2220 - 1.*t2128*t2224) - 1.*t1822*t2155*t81 + var1[1];
  p_output1[2]=0. + t1791*t2238 + t1858*t2242 + t1895*t2246 + t1938*t2250 + t1966*t2254 + t1993*t2258 - 0.1305*(t1779*t2238 + t1701*t2258) + t2014*t2266 + t2043*t2270 + t2055*t2274 + t2072*t2278 + t2080*t2282 + t2104*t2286 + t2117*t2290 + t2130*t2294 + t2139*t2298 - 0.0216*(t2128*t2294 + t2124*t2298) - 1.193387*(t2124*t2294 - 1.*t2128*t2298) + t1822*t2160*t81 + var1[2];
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

#include "p_RightToeBottomBack.hh"

namespace SymExpression
{

void p_RightToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
