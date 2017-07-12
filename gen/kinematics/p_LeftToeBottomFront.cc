/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:21 GMT-04:00
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
  double t1889;
  double t1949;
  double t1974;
  double t1994;
  double t1995;
  double t2038;
  double t2076;
  double t2078;
  double t2079;
  double t2053;
  double t2063;
  double t2071;
  double t2081;
  double t2152;
  double t2153;
  double t2154;
  double t2159;
  double t2176;
  double t2179;
  double t2180;
  double t2151;
  double t2122;
  double t2123;
  double t2127;
  double t2130;
  double t2136;
  double t2139;
  double t2144;
  double t2203;
  double t2205;
  double t2207;
  double t2210;
  double t2216;
  double t2221;
  double t2225;
  double t2228;
  double t2229;
  double t2231;
  double t2241;
  double t2243;
  double t2245;
  double t2248;
  double t2250;
  double t2251;
  double t2254;
  double t2257;
  double t2259;
  double t2260;
  double t2267;
  double t2268;
  double t2269;
  double t2275;
  double t2277;
  double t2278;
  double t2280;
  double t2290;
  double t2295;
  double t2296;
  double t2304;
  double t2305;
  double t2306;
  double t2308;
  double t2309;
  double t2310;
  double t2312;
  double t2315;
  double t2316;
  double t2317;
  double t2324;
  double t2325;
  double t2326;
  double t1950;
  double t1963;
  double t1965;
  double t1966;
  double t2343;
  double t2005;
  double t2014;
  double t2042;
  double t2043;
  double t2045;
  double t2048;
  double t2339;
  double t2342;
  double t2344;
  double t2345;
  double t2084;
  double t2104;
  double t2129;
  double t2132;
  double t2135;
  double t2354;
  double t2355;
  double t2356;
  double t2348;
  double t2349;
  double t2352;
  double t2156;
  double t2162;
  double t2169;
  double t2181;
  double t2183;
  double t2185;
  double t2366;
  double t2367;
  double t2368;
  double t2362;
  double t2363;
  double t2364;
  double t2198;
  double t2200;
  double t2201;
  double t2223;
  double t2226;
  double t2227;
  double t2358;
  double t2359;
  double t2360;
  double t2374;
  double t2375;
  double t2376;
  double t2237;
  double t2238;
  double t2240;
  double t2253;
  double t2255;
  double t2256;
  double t2378;
  double t2379;
  double t2380;
  double t2382;
  double t2383;
  double t2384;
  double t2262;
  double t2263;
  double t2264;
  double t2279;
  double t2283;
  double t2287;
  double t2386;
  double t2387;
  double t2388;
  double t2390;
  double t2391;
  double t2392;
  double t2299;
  double t2300;
  double t2301;
  double t2311;
  double t2313;
  double t2314;
  double t2394;
  double t2395;
  double t2396;
  double t2398;
  double t2399;
  double t2400;
  double t2319;
  double t2322;
  double t2323;
  double t2402;
  double t2403;
  double t2404;
  double t2406;
  double t2407;
  double t2408;
  double t2419;
  double t2420;
  double t2421;
  double t2428;
  double t2429;
  double t2430;
  double t2424;
  double t2425;
  double t2426;
  double t2440;
  double t2441;
  double t2442;
  double t2436;
  double t2437;
  double t2438;
  double t2432;
  double t2433;
  double t2434;
  double t2448;
  double t2449;
  double t2450;
  double t2452;
  double t2453;
  double t2454;
  double t2456;
  double t2457;
  double t2458;
  double t2460;
  double t2461;
  double t2462;
  double t2464;
  double t2465;
  double t2466;
  double t2468;
  double t2469;
  double t2470;
  double t2472;
  double t2473;
  double t2474;
  double t2476;
  double t2477;
  double t2478;
  double t2480;
  double t2481;
  double t2482;
  t1889 = Cos(var1[4]);
  t1949 = Cos(var1[6]);
  t1974 = Sin(var1[5]);
  t1994 = Sin(var1[4]);
  t1995 = Sin(var1[6]);
  t2038 = Cos(var1[7]);
  t2076 = t1949*t1994;
  t2078 = t1889*t1974*t1995;
  t2079 = t2076 + t2078;
  t2053 = -1.*t1889*t1949*t1974;
  t2063 = t1994*t1995;
  t2071 = t2053 + t2063;
  t2081 = Sin(var1[7]);
  t2152 = Cos(var1[8]);
  t2153 = -1.*t2152;
  t2154 = 1. + t2153;
  t2159 = Sin(var1[8]);
  t2176 = t2038*t2071;
  t2179 = t2079*t2081;
  t2180 = t2176 + t2179;
  t2151 = Cos(var1[5]);
  t2122 = Cos(var1[9]);
  t2123 = -1.*t2122;
  t2127 = 1. + t2123;
  t2130 = Sin(var1[9]);
  t2136 = t2038*t2079;
  t2139 = -1.*t2071*t2081;
  t2144 = t2136 + t2139;
  t2203 = t1889*t2151*t2152;
  t2205 = -1.*t2180*t2159;
  t2207 = t2203 + t2205;
  t2210 = Cos(var1[10]);
  t2216 = -1.*t2210;
  t2221 = 1. + t2216;
  t2225 = Sin(var1[10]);
  t2228 = t2130*t2144;
  t2229 = t2122*t2207;
  t2231 = t2228 + t2229;
  t2241 = t2122*t2144;
  t2243 = -1.*t2130*t2207;
  t2245 = t2241 + t2243;
  t2248 = Cos(var1[11]);
  t2250 = -1.*t2248;
  t2251 = 1. + t2250;
  t2254 = Sin(var1[11]);
  t2257 = -1.*t2225*t2231;
  t2259 = t2210*t2245;
  t2260 = t2257 + t2259;
  t2267 = t2210*t2231;
  t2268 = t2225*t2245;
  t2269 = t2267 + t2268;
  t2275 = Cos(var1[12]);
  t2277 = -1.*t2275;
  t2278 = 1. + t2277;
  t2280 = Sin(var1[12]);
  t2290 = t2254*t2260;
  t2295 = t2248*t2269;
  t2296 = t2290 + t2295;
  t2304 = t2248*t2260;
  t2305 = -1.*t2254*t2269;
  t2306 = t2304 + t2305;
  t2308 = Cos(var1[13]);
  t2309 = -1.*t2308;
  t2310 = 1. + t2309;
  t2312 = Sin(var1[13]);
  t2315 = -1.*t2280*t2296;
  t2316 = t2275*t2306;
  t2317 = t2315 + t2316;
  t2324 = t2275*t2296;
  t2325 = t2280*t2306;
  t2326 = t2324 + t2325;
  t1950 = -1.*t1949;
  t1963 = 1. + t1950;
  t1965 = 0.135*t1963;
  t1966 = 0. + t1965;
  t2343 = Sin(var1[3]);
  t2005 = -0.135*t1995;
  t2014 = 0. + t2005;
  t2042 = -1.*t2038;
  t2043 = 1. + t2042;
  t2045 = 0.135*t2043;
  t2048 = 0. + t2045;
  t2339 = Cos(var1[3]);
  t2342 = t2339*t2151;
  t2344 = -1.*t2343*t1994*t1974;
  t2345 = t2342 + t2344;
  t2084 = -0.135*t2081;
  t2104 = 0. + t2084;
  t2129 = -0.09*t2127;
  t2132 = 0.049*t2130;
  t2135 = 0. + t2129 + t2132;
  t2354 = -1.*t1889*t1949*t2343;
  t2355 = -1.*t2345*t1995;
  t2356 = t2354 + t2355;
  t2348 = t1949*t2345;
  t2349 = -1.*t1889*t2343*t1995;
  t2352 = t2348 + t2349;
  t2156 = -0.049*t2154;
  t2162 = -0.135*t2159;
  t2169 = 0. + t2156 + t2162;
  t2181 = 0.135*t2154;
  t2183 = -0.049*t2159;
  t2185 = 0. + t2181 + t2183;
  t2366 = t2038*t2352;
  t2367 = t2356*t2081;
  t2368 = t2366 + t2367;
  t2362 = t2151*t2343*t1994;
  t2363 = t2339*t1974;
  t2364 = t2362 + t2363;
  t2198 = -0.049*t2127;
  t2200 = -0.09*t2130;
  t2201 = 0. + t2198 + t2200;
  t2223 = -0.049*t2221;
  t2226 = -0.21*t2225;
  t2227 = 0. + t2223 + t2226;
  t2358 = t2038*t2356;
  t2359 = -1.*t2352*t2081;
  t2360 = t2358 + t2359;
  t2374 = t2152*t2364;
  t2375 = -1.*t2368*t2159;
  t2376 = t2374 + t2375;
  t2237 = -0.21*t2221;
  t2238 = 0.049*t2225;
  t2240 = 0. + t2237 + t2238;
  t2253 = -0.2707*t2251;
  t2255 = 0.0016*t2254;
  t2256 = 0. + t2253 + t2255;
  t2378 = t2130*t2360;
  t2379 = t2122*t2376;
  t2380 = t2378 + t2379;
  t2382 = t2122*t2360;
  t2383 = -1.*t2130*t2376;
  t2384 = t2382 + t2383;
  t2262 = -0.0016*t2251;
  t2263 = -0.2707*t2254;
  t2264 = 0. + t2262 + t2263;
  t2279 = 0.0184*t2278;
  t2283 = -0.7055*t2280;
  t2287 = 0. + t2279 + t2283;
  t2386 = -1.*t2225*t2380;
  t2387 = t2210*t2384;
  t2388 = t2386 + t2387;
  t2390 = t2210*t2380;
  t2391 = t2225*t2384;
  t2392 = t2390 + t2391;
  t2299 = -0.7055*t2278;
  t2300 = -0.0184*t2280;
  t2301 = 0. + t2299 + t2300;
  t2311 = -1.1135*t2310;
  t2313 = 0.0216*t2312;
  t2314 = 0. + t2311 + t2313;
  t2394 = t2254*t2388;
  t2395 = t2248*t2392;
  t2396 = t2394 + t2395;
  t2398 = t2248*t2388;
  t2399 = -1.*t2254*t2392;
  t2400 = t2398 + t2399;
  t2319 = -0.0216*t2310;
  t2322 = -1.1135*t2312;
  t2323 = 0. + t2319 + t2322;
  t2402 = -1.*t2280*t2396;
  t2403 = t2275*t2400;
  t2404 = t2402 + t2403;
  t2406 = t2275*t2396;
  t2407 = t2280*t2400;
  t2408 = t2406 + t2407;
  t2419 = t2151*t2343;
  t2420 = t2339*t1994*t1974;
  t2421 = t2419 + t2420;
  t2428 = t2339*t1889*t1949;
  t2429 = -1.*t2421*t1995;
  t2430 = t2428 + t2429;
  t2424 = t1949*t2421;
  t2425 = t2339*t1889*t1995;
  t2426 = t2424 + t2425;
  t2440 = t2038*t2426;
  t2441 = t2430*t2081;
  t2442 = t2440 + t2441;
  t2436 = -1.*t2339*t2151*t1994;
  t2437 = t2343*t1974;
  t2438 = t2436 + t2437;
  t2432 = t2038*t2430;
  t2433 = -1.*t2426*t2081;
  t2434 = t2432 + t2433;
  t2448 = t2152*t2438;
  t2449 = -1.*t2442*t2159;
  t2450 = t2448 + t2449;
  t2452 = t2130*t2434;
  t2453 = t2122*t2450;
  t2454 = t2452 + t2453;
  t2456 = t2122*t2434;
  t2457 = -1.*t2130*t2450;
  t2458 = t2456 + t2457;
  t2460 = -1.*t2225*t2454;
  t2461 = t2210*t2458;
  t2462 = t2460 + t2461;
  t2464 = t2210*t2454;
  t2465 = t2225*t2458;
  t2466 = t2464 + t2465;
  t2468 = t2254*t2462;
  t2469 = t2248*t2466;
  t2470 = t2468 + t2469;
  t2472 = t2248*t2462;
  t2473 = -1.*t2254*t2466;
  t2474 = t2472 + t2473;
  t2476 = -1.*t2280*t2470;
  t2477 = t2275*t2474;
  t2478 = t2476 + t2477;
  t2480 = t2275*t2470;
  t2481 = t2280*t2474;
  t2482 = t2480 + t2481;
  p_output1[0]=0. - 1.*t1889*t1966*t1974 + t1994*t2014 + t2048*t2071 + t2079*t2104 + t2135*t2144 + t1889*t2151*t2169 + 0.1305*(t1889*t2151*t2159 + t2152*t2180) + t2180*t2185 + t2201*t2207 + t2227*t2231 + t2240*t2245 + t2256*t2260 + t2264*t2269 + t2287*t2296 + t2301*t2306 + t2314*t2317 + t2323*t2326 + 0.058287*(t2312*t2317 + t2308*t2326) - 1.1135*(t2308*t2317 - 1.*t2312*t2326) + var1[0];
  p_output1[1]=0. - 1.*t1889*t2014*t2343 + t1966*t2345 + t2048*t2352 + t2104*t2356 + t2135*t2360 + t2169*t2364 + t2185*t2368 + 0.1305*(t2159*t2364 + t2152*t2368) + t2201*t2376 + t2227*t2380 + t2240*t2384 + t2256*t2388 + t2264*t2392 + t2287*t2396 + t2301*t2400 + t2314*t2404 + t2323*t2408 + 0.058287*(t2312*t2404 + t2308*t2408) - 1.1135*(t2308*t2404 - 1.*t2312*t2408) + var1[1];
  p_output1[2]=0. + t1889*t2014*t2339 + t1966*t2421 + t2048*t2426 + t2104*t2430 + t2135*t2434 + t2169*t2438 + t2185*t2442 + 0.1305*(t2159*t2438 + t2152*t2442) + t2201*t2450 + t2227*t2454 + t2240*t2458 + t2256*t2462 + t2264*t2466 + t2287*t2470 + t2301*t2474 + t2314*t2478 + t2323*t2482 + 0.058287*(t2312*t2478 + t2308*t2482) - 1.1135*(t2308*t2478 - 1.*t2312*t2482) + var1[2];
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

#include "p_LeftToeBottomFront.hh"

namespace SymExpression
{

void p_LeftToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
