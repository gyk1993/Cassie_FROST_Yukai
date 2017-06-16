/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:24 GMT-04:00
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
  double t2078;
  double t2063;
  double t2079;
  double t2072;
  double t2084;
  double t2048;
  double t2132;
  double t2135;
  double t2136;
  double t2076;
  double t2104;
  double t2110;
  double t2144;
  double t2169;
  double t2129;
  double t2149;
  double t2156;
  double t2045;
  double t2173;
  double t2176;
  double t2179;
  double t2181;
  double t2183;
  double t2185;
  double t2186;
  double t2187;
  double t2188;
  double t2200;
  double t2162;
  double t2190;
  double t2195;
  double t2024;
  double t2201;
  double t2203;
  double t2209;
  double t2228;
  double t2198;
  double t2223;
  double t2226;
  double t2005;
  double t2229;
  double t2234;
  double t2237;
  double t2245;
  double t2227;
  double t2238;
  double t2240;
  double t1989;
  double t2247;
  double t2253;
  double t2255;
  double t1965;
  double t2271;
  double t2283;
  double t2287;
  double t2290;
  double t2295;
  double t2301;
  double t2304;
  double t2306;
  double t2279;
  double t2297;
  double t2299;
  double t2300;
  double t2307;
  double t2311;
  double t2314;
  double t2316;
  double t2318;
  double t2319;
  double t2322;
  double t2323;
  double t2324;
  double t2325;
  double t2327;
  double t2313;
  double t2328;
  double t2329;
  double t2333;
  double t2334;
  double t2335;
  double t2332;
  double t2336;
  double t2337;
  double t2342;
  double t2346;
  double t2347;
  double t2261;
  double t2338;
  double t2348;
  double t2353;
  double t2357;
  double t2358;
  double t2360;
  double t2371;
  double t2372;
  double t2373;
  double t2379;
  double t2381;
  double t2382;
  double t2370;
  double t2374;
  double t2377;
  double t2378;
  double t2384;
  double t2385;
  double t2388;
  double t2389;
  double t2390;
  double t2391;
  double t2393;
  double t2394;
  double t2395;
  double t2397;
  double t2398;
  double t2387;
  double t2400;
  double t2401;
  double t2405;
  double t2406;
  double t2407;
  double t2403;
  double t2409;
  double t2410;
  double t2412;
  double t2413;
  double t2414;
  double t2411;
  double t2415;
  double t2416;
  double t2418;
  double t2419;
  double t2420;
  double t2241;
  double t2256;
  double t2259;
  double t2262;
  double t2263;
  double t2264;
  double t2356;
  double t2361;
  double t2362;
  double t2364;
  double t2365;
  double t2366;
  double t2417;
  double t2422;
  double t2423;
  double t2425;
  double t2427;
  double t2428;
  double t2486;
  double t2487;
  double t2479;
  double t2480;
  double t2504;
  double t2505;
  double t2514;
  double t2515;
  double t2524;
  double t2525;
  double t2534;
  double t2535;
  double t2260;
  double t2267;
  double t2268;
  double t2456;
  double t2458;
  double t2459;
  double t2461;
  double t2463;
  double t2464;
  double t2467;
  double t2468;
  double t2469;
  double t2471;
  double t2474;
  double t2475;
  double t2481;
  double t2483;
  double t2484;
  double t2488;
  double t2489;
  double t2490;
  double t2492;
  double t2493;
  double t2494;
  double t2500;
  double t2501;
  double t2502;
  double t2506;
  double t2507;
  double t2508;
  double t2510;
  double t2511;
  double t2512;
  double t2516;
  double t2517;
  double t2518;
  double t2520;
  double t2521;
  double t2522;
  double t2526;
  double t2527;
  double t2528;
  double t2530;
  double t2531;
  double t2532;
  double t2536;
  double t2537;
  double t2538;
  double t2540;
  double t2541;
  double t2542;
  double t2363;
  double t2367;
  double t2369;
  double t2424;
  double t2430;
  double t2431;
  t2078 = Cos(var1[4]);
  t2063 = Cos(var1[6]);
  t2079 = Sin(var1[5]);
  t2072 = Sin(var1[4]);
  t2084 = Sin(var1[6]);
  t2048 = Cos(var1[7]);
  t2132 = -1.*t2078*t2063*t2079;
  t2135 = t2072*t2084;
  t2136 = t2132 + t2135;
  t2076 = t2063*t2072;
  t2104 = t2078*t2079*t2084;
  t2110 = t2076 + t2104;
  t2144 = Sin(var1[7]);
  t2169 = Cos(var1[9]);
  t2129 = t2048*t2110;
  t2149 = -1.*t2136*t2144;
  t2156 = t2129 + t2149;
  t2045 = Sin(var1[9]);
  t2173 = Cos(var1[5]);
  t2176 = Cos(var1[8]);
  t2179 = t2078*t2173*t2176;
  t2181 = t2048*t2136;
  t2183 = t2110*t2144;
  t2185 = t2181 + t2183;
  t2186 = Sin(var1[8]);
  t2187 = -1.*t2185*t2186;
  t2188 = t2179 + t2187;
  t2200 = Cos(var1[10]);
  t2162 = t2045*t2156;
  t2190 = t2169*t2188;
  t2195 = t2162 + t2190;
  t2024 = Sin(var1[10]);
  t2201 = t2169*t2156;
  t2203 = -1.*t2045*t2188;
  t2209 = t2201 + t2203;
  t2228 = Cos(var1[11]);
  t2198 = -1.*t2024*t2195;
  t2223 = t2200*t2209;
  t2226 = t2198 + t2223;
  t2005 = Sin(var1[11]);
  t2229 = t2200*t2195;
  t2234 = t2024*t2209;
  t2237 = t2229 + t2234;
  t2245 = Cos(var1[12]);
  t2227 = t2005*t2226;
  t2238 = t2228*t2237;
  t2240 = t2227 + t2238;
  t1989 = Sin(var1[12]);
  t2247 = t2228*t2226;
  t2253 = -1.*t2005*t2237;
  t2255 = t2247 + t2253;
  t1965 = Sin(var1[13]);
  t2271 = Sin(var1[3]);
  t2283 = Cos(var1[3]);
  t2287 = t2283*t2173;
  t2290 = -1.*t2271*t2072*t2079;
  t2295 = t2287 + t2290;
  t2301 = t2063*t2295;
  t2304 = -1.*t2078*t2271*t2084;
  t2306 = t2301 + t2304;
  t2279 = -1.*t2078*t2063*t2271;
  t2297 = -1.*t2295*t2084;
  t2299 = t2279 + t2297;
  t2300 = t2048*t2299;
  t2307 = -1.*t2306*t2144;
  t2311 = t2300 + t2307;
  t2314 = t2173*t2271*t2072;
  t2316 = t2283*t2079;
  t2318 = t2314 + t2316;
  t2319 = t2176*t2318;
  t2322 = t2048*t2306;
  t2323 = t2299*t2144;
  t2324 = t2322 + t2323;
  t2325 = -1.*t2324*t2186;
  t2327 = t2319 + t2325;
  t2313 = t2045*t2311;
  t2328 = t2169*t2327;
  t2329 = t2313 + t2328;
  t2333 = t2169*t2311;
  t2334 = -1.*t2045*t2327;
  t2335 = t2333 + t2334;
  t2332 = -1.*t2024*t2329;
  t2336 = t2200*t2335;
  t2337 = t2332 + t2336;
  t2342 = t2200*t2329;
  t2346 = t2024*t2335;
  t2347 = t2342 + t2346;
  t2261 = Cos(var1[13]);
  t2338 = t2005*t2337;
  t2348 = t2228*t2347;
  t2353 = t2338 + t2348;
  t2357 = t2228*t2337;
  t2358 = -1.*t2005*t2347;
  t2360 = t2357 + t2358;
  t2371 = t2173*t2271;
  t2372 = t2283*t2072*t2079;
  t2373 = t2371 + t2372;
  t2379 = t2063*t2373;
  t2381 = t2283*t2078*t2084;
  t2382 = t2379 + t2381;
  t2370 = t2283*t2078*t2063;
  t2374 = -1.*t2373*t2084;
  t2377 = t2370 + t2374;
  t2378 = t2048*t2377;
  t2384 = -1.*t2382*t2144;
  t2385 = t2378 + t2384;
  t2388 = -1.*t2283*t2173*t2072;
  t2389 = t2271*t2079;
  t2390 = t2388 + t2389;
  t2391 = t2176*t2390;
  t2393 = t2048*t2382;
  t2394 = t2377*t2144;
  t2395 = t2393 + t2394;
  t2397 = -1.*t2395*t2186;
  t2398 = t2391 + t2397;
  t2387 = t2045*t2385;
  t2400 = t2169*t2398;
  t2401 = t2387 + t2400;
  t2405 = t2169*t2385;
  t2406 = -1.*t2045*t2398;
  t2407 = t2405 + t2406;
  t2403 = -1.*t2024*t2401;
  t2409 = t2200*t2407;
  t2410 = t2403 + t2409;
  t2412 = t2200*t2401;
  t2413 = t2024*t2407;
  t2414 = t2412 + t2413;
  t2411 = t2005*t2410;
  t2415 = t2228*t2414;
  t2416 = t2411 + t2415;
  t2418 = t2228*t2410;
  t2419 = -1.*t2005*t2414;
  t2420 = t2418 + t2419;
  t2241 = -1.*t1989*t2240;
  t2256 = t2245*t2255;
  t2259 = t2241 + t2256;
  t2262 = t2245*t2240;
  t2263 = t1989*t2255;
  t2264 = t2262 + t2263;
  t2356 = -1.*t1989*t2353;
  t2361 = t2245*t2360;
  t2362 = t2356 + t2361;
  t2364 = t2245*t2353;
  t2365 = t1989*t2360;
  t2366 = t2364 + t2365;
  t2417 = -1.*t1989*t2416;
  t2422 = t2245*t2420;
  t2423 = t2417 + t2422;
  t2425 = t2245*t2416;
  t2427 = t1989*t2420;
  t2428 = t2425 + t2427;
  t2486 = -1.*t2176;
  t2487 = 1. + t2486;
  t2479 = -1.*t2169;
  t2480 = 1. + t2479;
  t2504 = -1.*t2200;
  t2505 = 1. + t2504;
  t2514 = -1.*t2228;
  t2515 = 1. + t2514;
  t2524 = -1.*t2245;
  t2525 = 1. + t2524;
  t2534 = -1.*t2261;
  t2535 = 1. + t2534;
  t2260 = t1965*t2259;
  t2267 = t2261*t2264;
  t2268 = t2260 + t2267;
  t2456 = -1.*t2063;
  t2458 = 1. + t2456;
  t2459 = 0.135*t2458;
  t2461 = 0. + t2459;
  t2463 = -0.135*t2084;
  t2464 = 0. + t2463;
  t2467 = -1.*t2048;
  t2468 = 1. + t2467;
  t2469 = 0.135*t2468;
  t2471 = 0. + t2469;
  t2474 = -0.135*t2144;
  t2475 = 0. + t2474;
  t2481 = -0.09*t2480;
  t2483 = 0.049*t2045;
  t2484 = 0. + t2481 + t2483;
  t2488 = -0.049*t2487;
  t2489 = -0.135*t2186;
  t2490 = 0. + t2488 + t2489;
  t2492 = 0.135*t2487;
  t2493 = -0.049*t2186;
  t2494 = 0. + t2492 + t2493;
  t2500 = -0.049*t2480;
  t2501 = -0.09*t2045;
  t2502 = 0. + t2500 + t2501;
  t2506 = -0.049*t2505;
  t2507 = -0.21*t2024;
  t2508 = 0. + t2506 + t2507;
  t2510 = -0.21*t2505;
  t2511 = 0.049*t2024;
  t2512 = 0. + t2510 + t2511;
  t2516 = -0.2707*t2515;
  t2517 = 0.0016*t2005;
  t2518 = 0. + t2516 + t2517;
  t2520 = -0.0016*t2515;
  t2521 = -0.2707*t2005;
  t2522 = 0. + t2520 + t2521;
  t2526 = 0.0184*t2525;
  t2527 = -0.7055*t1989;
  t2528 = 0. + t2526 + t2527;
  t2530 = -0.7055*t2525;
  t2531 = -0.0184*t1989;
  t2532 = 0. + t2530 + t2531;
  t2536 = -1.1135*t2535;
  t2537 = 0.0216*t1965;
  t2538 = 0. + t2536 + t2537;
  t2540 = -0.0216*t2535;
  t2541 = -1.1135*t1965;
  t2542 = 0. + t2540 + t2541;
  t2363 = t1965*t2362;
  t2367 = t2261*t2366;
  t2369 = t2363 + t2367;
  t2424 = t1965*t2423;
  t2430 = t2261*t2428;
  t2431 = t2424 + t2430;
  p_output1[0]=t2268;
  p_output1[1]=t2369;
  p_output1[2]=t2431;
  p_output1[3]=0.;
  p_output1[4]=-1.*t2176*t2185 - 1.*t2078*t2173*t2186;
  p_output1[5]=-1.*t2186*t2318 - 1.*t2176*t2324;
  p_output1[6]=-1.*t2186*t2390 - 1.*t2176*t2395;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2259*t2261 + t1965*t2264;
  p_output1[9]=-1.*t2261*t2362 + t1965*t2366;
  p_output1[10]=-1.*t2261*t2423 + t1965*t2428;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t2176*t2185 + t2078*t2173*t2186) - 1.1135*(t2259*t2261 - 1.*t1965*t2264) + 0.058287*t2268 - 1.*t2078*t2079*t2461 + t2072*t2464 + t2136*t2471 + t2110*t2475 + t2156*t2484 + t2078*t2173*t2490 + t2185*t2494 + t2188*t2502 + t2195*t2508 + t2209*t2512 + t2226*t2518 + t2237*t2522 + t2240*t2528 + t2255*t2532 + t2259*t2538 + t2264*t2542 + var1[0];
  p_output1[13]=0. + 0.1305*(t2186*t2318 + t2176*t2324) - 1.1135*(t2261*t2362 - 1.*t1965*t2366) + 0.058287*t2369 + t2295*t2461 - 1.*t2078*t2271*t2464 + t2306*t2471 + t2299*t2475 + t2311*t2484 + t2318*t2490 + t2324*t2494 + t2327*t2502 + t2329*t2508 + t2335*t2512 + t2337*t2518 + t2347*t2522 + t2353*t2528 + t2360*t2532 + t2362*t2538 + t2366*t2542 + var1[1];
  p_output1[14]=0. + 0.1305*(t2186*t2390 + t2176*t2395) - 1.1135*(t2261*t2423 - 1.*t1965*t2428) + 0.058287*t2431 + t2373*t2461 + t2078*t2283*t2464 + t2382*t2471 + t2377*t2475 + t2385*t2484 + t2390*t2490 + t2395*t2494 + t2398*t2502 + t2401*t2508 + t2407*t2512 + t2410*t2518 + t2414*t2522 + t2416*t2528 + t2420*t2532 + t2423*t2538 + t2428*t2542 + var1[2];
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

#include "H_LeftToeBottomFront.hh"

namespace SymExpression
{

void H_LeftToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
