/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:10:43 GMT-04:00
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
  double t1895;
  double t1877;
  double t1896;
  double t1854;
  double t1920;
  double t1946;
  double t1889;
  double t1935;
  double t1938;
  double t1839;
  double t1949;
  double t1950;
  double t1963;
  double t1976;
  double t1941;
  double t1965;
  double t1966;
  double t1813;
  double t1985;
  double t1988;
  double t1989;
  double t1993;
  double t1994;
  double t1995;
  double t1999;
  double t2003;
  double t2004;
  double t2012;
  double t1974;
  double t2005;
  double t2010;
  double t1799;
  double t2014;
  double t2018;
  double t2024;
  double t2044;
  double t2011;
  double t2038;
  double t2042;
  double t1791;
  double t2045;
  double t2048;
  double t2051;
  double t2060;
  double t2043;
  double t2053;
  double t2055;
  double t1782;
  double t2063;
  double t2068;
  double t2071;
  double t1743;
  double t2086;
  double t2102;
  double t2104;
  double t2105;
  double t2107;
  double t2096;
  double t2110;
  double t2114;
  double t2117;
  double t2118;
  double t2122;
  double t2116;
  double t2123;
  double t2127;
  double t2130;
  double t2132;
  double t2134;
  double t2135;
  double t2136;
  double t2139;
  double t2140;
  double t2141;
  double t2143;
  double t2129;
  double t2144;
  double t2145;
  double t2149;
  double t2150;
  double t2151;
  double t2146;
  double t2152;
  double t2153;
  double t2156;
  double t2159;
  double t2161;
  double t2077;
  double t2154;
  double t2162;
  double t2163;
  double t2169;
  double t2171;
  double t2173;
  double t2187;
  double t2188;
  double t2189;
  double t2186;
  double t2190;
  double t2193;
  double t2195;
  double t2197;
  double t2198;
  double t2194;
  double t2200;
  double t2201;
  double t2204;
  double t2205;
  double t2206;
  double t2207;
  double t2209;
  double t2210;
  double t2211;
  double t2213;
  double t2214;
  double t2203;
  double t2216;
  double t2217;
  double t2221;
  double t2222;
  double t2223;
  double t2219;
  double t2225;
  double t2226;
  double t2228;
  double t2229;
  double t2230;
  double t2227;
  double t2231;
  double t2232;
  double t2234;
  double t2235;
  double t2237;
  double t2057;
  double t2072;
  double t2074;
  double t2078;
  double t2079;
  double t2080;
  double t2164;
  double t2176;
  double t2177;
  double t2180;
  double t2181;
  double t2182;
  double t2233;
  double t2238;
  double t2239;
  double t2241;
  double t2243;
  double t2244;
  double t2272;
  double t2274;
  double t2302;
  double t2303;
  double t2320;
  double t2321;
  double t2330;
  double t2331;
  double t2340;
  double t2341;
  double t2350;
  double t2351;
  double t2076;
  double t2081;
  double t2084;
  double t2280;
  double t2281;
  double t2275;
  double t2277;
  double t2278;
  double t2284;
  double t2285;
  double t2287;
  double t2288;
  double t2291;
  double t2293;
  double t2295;
  double t2296;
  double t2299;
  double t2300;
  double t2304;
  double t2305;
  double t2306;
  double t2308;
  double t2309;
  double t2310;
  double t2316;
  double t2317;
  double t2318;
  double t2322;
  double t2323;
  double t2324;
  double t2326;
  double t2327;
  double t2328;
  double t2332;
  double t2333;
  double t2334;
  double t2336;
  double t2337;
  double t2338;
  double t2342;
  double t2343;
  double t2344;
  double t2346;
  double t2347;
  double t2348;
  double t2352;
  double t2353;
  double t2354;
  double t2356;
  double t2357;
  double t2358;
  double t2179;
  double t2183;
  double t2185;
  double t2240;
  double t2245;
  double t2247;
  t1895 = Cos(var1[14]);
  t1877 = Sin(var1[4]);
  t1896 = Cos(var1[4]);
  t1854 = Sin(var1[14]);
  t1920 = Sin(var1[5]);
  t1946 = Cos(var1[15]);
  t1889 = t1854*t1877;
  t1935 = -1.*t1895*t1896*t1920;
  t1938 = t1889 + t1935;
  t1839 = Sin(var1[15]);
  t1949 = t1895*t1877;
  t1950 = t1896*t1854*t1920;
  t1963 = t1949 + t1950;
  t1976 = Cos(var1[17]);
  t1941 = -1.*t1839*t1938;
  t1965 = t1946*t1963;
  t1966 = t1941 + t1965;
  t1813 = Sin(var1[17]);
  t1985 = Cos(var1[16]);
  t1988 = Cos(var1[5]);
  t1989 = t1985*t1896*t1988;
  t1993 = Sin(var1[16]);
  t1994 = t1946*t1938;
  t1995 = t1839*t1963;
  t1999 = t1994 + t1995;
  t2003 = -1.*t1993*t1999;
  t2004 = t1989 + t2003;
  t2012 = Cos(var1[18]);
  t1974 = t1813*t1966;
  t2005 = t1976*t2004;
  t2010 = t1974 + t2005;
  t1799 = Sin(var1[18]);
  t2014 = t1976*t1966;
  t2018 = -1.*t1813*t2004;
  t2024 = t2014 + t2018;
  t2044 = Cos(var1[19]);
  t2011 = -1.*t1799*t2010;
  t2038 = t2012*t2024;
  t2042 = t2011 + t2038;
  t1791 = Sin(var1[19]);
  t2045 = t2012*t2010;
  t2048 = t1799*t2024;
  t2051 = t2045 + t2048;
  t2060 = Cos(var1[20]);
  t2043 = t1791*t2042;
  t2053 = t2044*t2051;
  t2055 = t2043 + t2053;
  t1782 = Sin(var1[20]);
  t2063 = t2044*t2042;
  t2068 = -1.*t1791*t2051;
  t2071 = t2063 + t2068;
  t1743 = Sin(var1[21]);
  t2086 = Sin(var1[3]);
  t2102 = Cos(var1[3]);
  t2104 = t2102*t1988;
  t2105 = -1.*t2086*t1877*t1920;
  t2107 = t2104 + t2105;
  t2096 = -1.*t1896*t1854*t2086;
  t2110 = t1895*t2107;
  t2114 = t2096 + t2110;
  t2117 = -1.*t1895*t1896*t2086;
  t2118 = -1.*t1854*t2107;
  t2122 = t2117 + t2118;
  t2116 = -1.*t1839*t2114;
  t2123 = t1946*t2122;
  t2127 = t2116 + t2123;
  t2130 = t1988*t2086*t1877;
  t2132 = t2102*t1920;
  t2134 = t2130 + t2132;
  t2135 = t1985*t2134;
  t2136 = t1946*t2114;
  t2139 = t1839*t2122;
  t2140 = t2136 + t2139;
  t2141 = -1.*t1993*t2140;
  t2143 = t2135 + t2141;
  t2129 = t1813*t2127;
  t2144 = t1976*t2143;
  t2145 = t2129 + t2144;
  t2149 = t1976*t2127;
  t2150 = -1.*t1813*t2143;
  t2151 = t2149 + t2150;
  t2146 = -1.*t1799*t2145;
  t2152 = t2012*t2151;
  t2153 = t2146 + t2152;
  t2156 = t2012*t2145;
  t2159 = t1799*t2151;
  t2161 = t2156 + t2159;
  t2077 = Cos(var1[21]);
  t2154 = t1791*t2153;
  t2162 = t2044*t2161;
  t2163 = t2154 + t2162;
  t2169 = t2044*t2153;
  t2171 = -1.*t1791*t2161;
  t2173 = t2169 + t2171;
  t2187 = t1988*t2086;
  t2188 = t2102*t1877*t1920;
  t2189 = t2187 + t2188;
  t2186 = t2102*t1896*t1854;
  t2190 = t1895*t2189;
  t2193 = t2186 + t2190;
  t2195 = t1895*t2102*t1896;
  t2197 = -1.*t1854*t2189;
  t2198 = t2195 + t2197;
  t2194 = -1.*t1839*t2193;
  t2200 = t1946*t2198;
  t2201 = t2194 + t2200;
  t2204 = -1.*t2102*t1988*t1877;
  t2205 = t2086*t1920;
  t2206 = t2204 + t2205;
  t2207 = t1985*t2206;
  t2209 = t1946*t2193;
  t2210 = t1839*t2198;
  t2211 = t2209 + t2210;
  t2213 = -1.*t1993*t2211;
  t2214 = t2207 + t2213;
  t2203 = t1813*t2201;
  t2216 = t1976*t2214;
  t2217 = t2203 + t2216;
  t2221 = t1976*t2201;
  t2222 = -1.*t1813*t2214;
  t2223 = t2221 + t2222;
  t2219 = -1.*t1799*t2217;
  t2225 = t2012*t2223;
  t2226 = t2219 + t2225;
  t2228 = t2012*t2217;
  t2229 = t1799*t2223;
  t2230 = t2228 + t2229;
  t2227 = t1791*t2226;
  t2231 = t2044*t2230;
  t2232 = t2227 + t2231;
  t2234 = t2044*t2226;
  t2235 = -1.*t1791*t2230;
  t2237 = t2234 + t2235;
  t2057 = -1.*t1782*t2055;
  t2072 = t2060*t2071;
  t2074 = t2057 + t2072;
  t2078 = t2060*t2055;
  t2079 = t1782*t2071;
  t2080 = t2078 + t2079;
  t2164 = -1.*t1782*t2163;
  t2176 = t2060*t2173;
  t2177 = t2164 + t2176;
  t2180 = t2060*t2163;
  t2181 = t1782*t2173;
  t2182 = t2180 + t2181;
  t2233 = -1.*t1782*t2232;
  t2238 = t2060*t2237;
  t2239 = t2233 + t2238;
  t2241 = t2060*t2232;
  t2243 = t1782*t2237;
  t2244 = t2241 + t2243;
  t2272 = -1.*t1985;
  t2274 = 1. + t2272;
  t2302 = -1.*t1976;
  t2303 = 1. + t2302;
  t2320 = -1.*t2012;
  t2321 = 1. + t2320;
  t2330 = -1.*t2044;
  t2331 = 1. + t2330;
  t2340 = -1.*t2060;
  t2341 = 1. + t2340;
  t2350 = -1.*t2077;
  t2351 = 1. + t2350;
  t2076 = t1743*t2074;
  t2081 = t2077*t2080;
  t2084 = t2076 + t2081;
  t2280 = 0.135*t1854;
  t2281 = 0. + t2280;
  t2275 = -0.049*t2274;
  t2277 = 0.135*t1993;
  t2278 = 0. + t2275 + t2277;
  t2284 = -1.*t1895;
  t2285 = 1. + t2284;
  t2287 = -0.135*t2285;
  t2288 = 0. + t2287;
  t2291 = -1.*t1946;
  t2293 = 1. + t2291;
  t2295 = -0.135*t2293;
  t2296 = 0. + t2295;
  t2299 = 0.135*t1839;
  t2300 = 0. + t2299;
  t2304 = -0.09*t2303;
  t2305 = 0.049*t1813;
  t2306 = 0. + t2304 + t2305;
  t2308 = -0.135*t2274;
  t2309 = -0.049*t1993;
  t2310 = 0. + t2308 + t2309;
  t2316 = -0.049*t2303;
  t2317 = -0.09*t1813;
  t2318 = 0. + t2316 + t2317;
  t2322 = -0.049*t2321;
  t2323 = -0.21*t1799;
  t2324 = 0. + t2322 + t2323;
  t2326 = -0.21*t2321;
  t2327 = 0.049*t1799;
  t2328 = 0. + t2326 + t2327;
  t2332 = -0.2707*t2331;
  t2333 = 0.0016*t1791;
  t2334 = 0. + t2332 + t2333;
  t2336 = -0.0016*t2331;
  t2337 = -0.2707*t1791;
  t2338 = 0. + t2336 + t2337;
  t2342 = 0.0184*t2341;
  t2343 = -0.7055*t1782;
  t2344 = 0. + t2342 + t2343;
  t2346 = -0.7055*t2341;
  t2347 = -0.0184*t1782;
  t2348 = 0. + t2346 + t2347;
  t2352 = -1.1135*t2351;
  t2353 = 0.0216*t1743;
  t2354 = 0. + t2352 + t2353;
  t2356 = -0.0216*t2351;
  t2357 = -1.1135*t1743;
  t2358 = 0. + t2356 + t2357;
  t2179 = t1743*t2177;
  t2183 = t2077*t2182;
  t2185 = t2179 + t2183;
  t2240 = t1743*t2239;
  t2245 = t2077*t2244;
  t2247 = t2240 + t2245;
  p_output1[0]=t2084;
  p_output1[1]=t2185;
  p_output1[2]=t2247;
  p_output1[3]=0.;
  p_output1[4]=-1.*t1896*t1988*t1993 - 1.*t1985*t1999;
  p_output1[5]=-1.*t1993*t2134 - 1.*t1985*t2140;
  p_output1[6]=-1.*t1993*t2206 - 1.*t1985*t2211;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2074*t2077 + t1743*t2080;
  p_output1[9]=-1.*t2077*t2177 + t1743*t2182;
  p_output1[10]=-1.*t2077*t2239 + t1743*t2244;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(t1896*t1988*t1993 + t1985*t1999) - 1.193387*(t2074*t2077 - 1.*t1743*t2080) - 0.0216*t2084 + t1896*t1988*t2278 + t1877*t2281 - 1.*t1896*t1920*t2288 + t1938*t2296 + t1963*t2300 + t1966*t2306 + t1999*t2310 + t2004*t2318 + t2010*t2324 + t2024*t2328 + t2042*t2334 + t2051*t2338 + t2055*t2344 + t2071*t2348 + t2074*t2354 + t2080*t2358 + var1[0];
  p_output1[13]=0. - 0.1305*(t1993*t2134 + t1985*t2140) - 1.193387*(t2077*t2177 - 1.*t1743*t2182) - 0.0216*t2185 + t2134*t2278 - 1.*t1896*t2086*t2281 + t2107*t2288 + t2114*t2296 + t2122*t2300 + t2127*t2306 + t2140*t2310 + t2143*t2318 + t2145*t2324 + t2151*t2328 + t2153*t2334 + t2161*t2338 + t2163*t2344 + t2173*t2348 + t2177*t2354 + t2182*t2358 + var1[1];
  p_output1[14]=0. - 0.1305*(t1993*t2206 + t1985*t2211) - 1.193387*(t2077*t2239 - 1.*t1743*t2244) - 0.0216*t2247 + t2206*t2278 + t1896*t2102*t2281 + t2189*t2288 + t2193*t2296 + t2198*t2300 + t2201*t2306 + t2211*t2310 + t2214*t2318 + t2217*t2324 + t2223*t2328 + t2226*t2334 + t2230*t2338 + t2232*t2344 + t2237*t2348 + t2239*t2354 + t2244*t2358 + var1[2];
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

#include "H_RightToeBottomBack.hh"

namespace SymExpression
{

void H_RightToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
