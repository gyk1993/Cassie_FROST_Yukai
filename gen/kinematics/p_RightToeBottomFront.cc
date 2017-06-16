/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:25 GMT-04:00
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
  double t67;
  double t2183;
  double t2209;
  double t2226;
  double t2247;
  double t2301;
  double t2268;
  double t2287;
  double t2299;
  double t2256;
  double t2314;
  double t2316;
  double t2319;
  double t2104;
  double t2110;
  double t2129;
  double t2156;
  double t2076;
  double t2364;
  double t2365;
  double t2367;
  double t2323;
  double t2328;
  double t2333;
  double t2336;
  double t2342;
  double t2346;
  double t2348;
  double t2385;
  double t2387;
  double t2389;
  double t2393;
  double t2394;
  double t2400;
  double t2407;
  double t2411;
  double t2412;
  double t2413;
  double t2424;
  double t2425;
  double t2427;
  double t2431;
  double t2432;
  double t2434;
  double t2437;
  double t2440;
  double t2441;
  double t2443;
  double t2448;
  double t2451;
  double t2452;
  double t2455;
  double t2459;
  double t2462;
  double t2465;
  double t2472;
  double t2474;
  double t2475;
  double t2485;
  double t2488;
  double t2489;
  double t2491;
  double t2492;
  double t2493;
  double t2495;
  double t2498;
  double t2499;
  double t2500;
  double t2507;
  double t2508;
  double t2509;
  double t2190;
  double t2201;
  double t2135;
  double t2162;
  double t2179;
  double t2522;
  double t2227;
  double t2229;
  double t2234;
  double t2238;
  double t2527;
  double t2260;
  double t2262;
  double t2263;
  double t2267;
  double t2531;
  double t2532;
  double t2533;
  double t2311;
  double t2313;
  double t2335;
  double t2337;
  double t2338;
  double t2537;
  double t2538;
  double t2539;
  double t2541;
  double t2542;
  double t2543;
  double t2360;
  double t2361;
  double t2363;
  double t2526;
  double t2528;
  double t2529;
  double t2549;
  double t2550;
  double t2551;
  double t2378;
  double t2379;
  double t2381;
  double t2405;
  double t2409;
  double t2410;
  double t2545;
  double t2546;
  double t2547;
  double t2557;
  double t2558;
  double t2559;
  double t2418;
  double t2420;
  double t2422;
  double t2435;
  double t2438;
  double t2439;
  double t2561;
  double t2562;
  double t2563;
  double t2565;
  double t2566;
  double t2567;
  double t2445;
  double t2446;
  double t2447;
  double t2463;
  double t2469;
  double t2471;
  double t2569;
  double t2570;
  double t2571;
  double t2573;
  double t2574;
  double t2575;
  double t2481;
  double t2483;
  double t2484;
  double t2494;
  double t2496;
  double t2497;
  double t2577;
  double t2578;
  double t2579;
  double t2581;
  double t2582;
  double t2583;
  double t2502;
  double t2503;
  double t2506;
  double t2585;
  double t2586;
  double t2587;
  double t2589;
  double t2590;
  double t2591;
  double t2607;
  double t2608;
  double t2609;
  double t2611;
  double t2612;
  double t2613;
  double t2615;
  double t2616;
  double t2617;
  double t2603;
  double t2604;
  double t2605;
  double t2623;
  double t2624;
  double t2625;
  double t2619;
  double t2620;
  double t2621;
  double t2631;
  double t2632;
  double t2633;
  double t2635;
  double t2636;
  double t2637;
  double t2639;
  double t2640;
  double t2641;
  double t2643;
  double t2644;
  double t2645;
  double t2647;
  double t2648;
  double t2649;
  double t2651;
  double t2652;
  double t2653;
  double t2655;
  double t2656;
  double t2657;
  double t2659;
  double t2660;
  double t2661;
  double t2663;
  double t2664;
  double t2665;
  t67 = Cos(var1[4]);
  t2183 = Sin(var1[14]);
  t2209 = Sin(var1[4]);
  t2226 = Cos(var1[14]);
  t2247 = Sin(var1[5]);
  t2301 = Sin(var1[15]);
  t2268 = t2183*t2209;
  t2287 = -1.*t2226*t67*t2247;
  t2299 = t2268 + t2287;
  t2256 = Cos(var1[15]);
  t2314 = t2226*t2209;
  t2316 = t67*t2183*t2247;
  t2319 = t2314 + t2316;
  t2104 = Cos(var1[16]);
  t2110 = -1.*t2104;
  t2129 = 1. + t2110;
  t2156 = Sin(var1[16]);
  t2076 = Cos(var1[5]);
  t2364 = t2256*t2299;
  t2365 = t2301*t2319;
  t2367 = t2364 + t2365;
  t2323 = Cos(var1[17]);
  t2328 = -1.*t2323;
  t2333 = 1. + t2328;
  t2336 = Sin(var1[17]);
  t2342 = -1.*t2301*t2299;
  t2346 = t2256*t2319;
  t2348 = t2342 + t2346;
  t2385 = t2104*t67*t2076;
  t2387 = -1.*t2156*t2367;
  t2389 = t2385 + t2387;
  t2393 = Cos(var1[18]);
  t2394 = -1.*t2393;
  t2400 = 1. + t2394;
  t2407 = Sin(var1[18]);
  t2411 = t2336*t2348;
  t2412 = t2323*t2389;
  t2413 = t2411 + t2412;
  t2424 = t2323*t2348;
  t2425 = -1.*t2336*t2389;
  t2427 = t2424 + t2425;
  t2431 = Cos(var1[19]);
  t2432 = -1.*t2431;
  t2434 = 1. + t2432;
  t2437 = Sin(var1[19]);
  t2440 = -1.*t2407*t2413;
  t2441 = t2393*t2427;
  t2443 = t2440 + t2441;
  t2448 = t2393*t2413;
  t2451 = t2407*t2427;
  t2452 = t2448 + t2451;
  t2455 = Cos(var1[20]);
  t2459 = -1.*t2455;
  t2462 = 1. + t2459;
  t2465 = Sin(var1[20]);
  t2472 = t2437*t2443;
  t2474 = t2431*t2452;
  t2475 = t2472 + t2474;
  t2485 = t2431*t2443;
  t2488 = -1.*t2437*t2452;
  t2489 = t2485 + t2488;
  t2491 = Cos(var1[21]);
  t2492 = -1.*t2491;
  t2493 = 1. + t2492;
  t2495 = Sin(var1[21]);
  t2498 = -1.*t2465*t2475;
  t2499 = t2455*t2489;
  t2500 = t2498 + t2499;
  t2507 = t2455*t2475;
  t2508 = t2465*t2489;
  t2509 = t2507 + t2508;
  t2190 = 0.135*t2183;
  t2201 = 0. + t2190;
  t2135 = -0.049*t2129;
  t2162 = 0.135*t2156;
  t2179 = 0. + t2135 + t2162;
  t2522 = Sin(var1[3]);
  t2227 = -1.*t2226;
  t2229 = 1. + t2227;
  t2234 = -0.135*t2229;
  t2238 = 0. + t2234;
  t2527 = Cos(var1[3]);
  t2260 = -1.*t2256;
  t2262 = 1. + t2260;
  t2263 = -0.135*t2262;
  t2267 = 0. + t2263;
  t2531 = t2527*t2076;
  t2532 = -1.*t2522*t2209*t2247;
  t2533 = t2531 + t2532;
  t2311 = 0.135*t2301;
  t2313 = 0. + t2311;
  t2335 = -0.09*t2333;
  t2337 = 0.049*t2336;
  t2338 = 0. + t2335 + t2337;
  t2537 = -1.*t67*t2183*t2522;
  t2538 = t2226*t2533;
  t2539 = t2537 + t2538;
  t2541 = -1.*t2226*t67*t2522;
  t2542 = -1.*t2183*t2533;
  t2543 = t2541 + t2542;
  t2360 = -0.135*t2129;
  t2361 = -0.049*t2156;
  t2363 = 0. + t2360 + t2361;
  t2526 = t2076*t2522*t2209;
  t2528 = t2527*t2247;
  t2529 = t2526 + t2528;
  t2549 = t2256*t2539;
  t2550 = t2301*t2543;
  t2551 = t2549 + t2550;
  t2378 = -0.049*t2333;
  t2379 = -0.09*t2336;
  t2381 = 0. + t2378 + t2379;
  t2405 = -0.049*t2400;
  t2409 = -0.21*t2407;
  t2410 = 0. + t2405 + t2409;
  t2545 = -1.*t2301*t2539;
  t2546 = t2256*t2543;
  t2547 = t2545 + t2546;
  t2557 = t2104*t2529;
  t2558 = -1.*t2156*t2551;
  t2559 = t2557 + t2558;
  t2418 = -0.21*t2400;
  t2420 = 0.049*t2407;
  t2422 = 0. + t2418 + t2420;
  t2435 = -0.2707*t2434;
  t2438 = 0.0016*t2437;
  t2439 = 0. + t2435 + t2438;
  t2561 = t2336*t2547;
  t2562 = t2323*t2559;
  t2563 = t2561 + t2562;
  t2565 = t2323*t2547;
  t2566 = -1.*t2336*t2559;
  t2567 = t2565 + t2566;
  t2445 = -0.0016*t2434;
  t2446 = -0.2707*t2437;
  t2447 = 0. + t2445 + t2446;
  t2463 = 0.0184*t2462;
  t2469 = -0.7055*t2465;
  t2471 = 0. + t2463 + t2469;
  t2569 = -1.*t2407*t2563;
  t2570 = t2393*t2567;
  t2571 = t2569 + t2570;
  t2573 = t2393*t2563;
  t2574 = t2407*t2567;
  t2575 = t2573 + t2574;
  t2481 = -0.7055*t2462;
  t2483 = -0.0184*t2465;
  t2484 = 0. + t2481 + t2483;
  t2494 = -1.1135*t2493;
  t2496 = 0.0216*t2495;
  t2497 = 0. + t2494 + t2496;
  t2577 = t2437*t2571;
  t2578 = t2431*t2575;
  t2579 = t2577 + t2578;
  t2581 = t2431*t2571;
  t2582 = -1.*t2437*t2575;
  t2583 = t2581 + t2582;
  t2502 = -0.0216*t2493;
  t2503 = -1.1135*t2495;
  t2506 = 0. + t2502 + t2503;
  t2585 = -1.*t2465*t2579;
  t2586 = t2455*t2583;
  t2587 = t2585 + t2586;
  t2589 = t2455*t2579;
  t2590 = t2465*t2583;
  t2591 = t2589 + t2590;
  t2607 = t2076*t2522;
  t2608 = t2527*t2209*t2247;
  t2609 = t2607 + t2608;
  t2611 = t2527*t67*t2183;
  t2612 = t2226*t2609;
  t2613 = t2611 + t2612;
  t2615 = t2226*t2527*t67;
  t2616 = -1.*t2183*t2609;
  t2617 = t2615 + t2616;
  t2603 = -1.*t2527*t2076*t2209;
  t2604 = t2522*t2247;
  t2605 = t2603 + t2604;
  t2623 = t2256*t2613;
  t2624 = t2301*t2617;
  t2625 = t2623 + t2624;
  t2619 = -1.*t2301*t2613;
  t2620 = t2256*t2617;
  t2621 = t2619 + t2620;
  t2631 = t2104*t2605;
  t2632 = -1.*t2156*t2625;
  t2633 = t2631 + t2632;
  t2635 = t2336*t2621;
  t2636 = t2323*t2633;
  t2637 = t2635 + t2636;
  t2639 = t2323*t2621;
  t2640 = -1.*t2336*t2633;
  t2641 = t2639 + t2640;
  t2643 = -1.*t2407*t2637;
  t2644 = t2393*t2641;
  t2645 = t2643 + t2644;
  t2647 = t2393*t2637;
  t2648 = t2407*t2641;
  t2649 = t2647 + t2648;
  t2651 = t2437*t2645;
  t2652 = t2431*t2649;
  t2653 = t2651 + t2652;
  t2655 = t2431*t2645;
  t2656 = -1.*t2437*t2649;
  t2657 = t2655 + t2656;
  t2659 = -1.*t2465*t2653;
  t2660 = t2455*t2657;
  t2661 = t2659 + t2660;
  t2663 = t2455*t2653;
  t2664 = t2465*t2657;
  t2665 = t2663 + t2664;
  p_output1[0]=0. + t2201*t2209 + t2267*t2299 + t2313*t2319 + t2338*t2348 + t2363*t2367 + t2381*t2389 + t2410*t2413 + t2422*t2427 + t2439*t2443 + t2447*t2452 + t2471*t2475 + t2484*t2489 + t2497*t2500 + t2506*t2509 + 0.058287*(t2495*t2500 + t2491*t2509) - 1.1135*(t2491*t2500 - 1.*t2495*t2509) + t2076*t2179*t67 - 1.*t2238*t2247*t67 - 0.1305*(t2104*t2367 + t2076*t2156*t67) + var1[0];
  p_output1[1]=0. + t2179*t2529 + t2238*t2533 + t2267*t2539 + t2313*t2543 + t2338*t2547 + t2363*t2551 - 0.1305*(t2156*t2529 + t2104*t2551) + t2381*t2559 + t2410*t2563 + t2422*t2567 + t2439*t2571 + t2447*t2575 + t2471*t2579 + t2484*t2583 + t2497*t2587 + t2506*t2591 + 0.058287*(t2495*t2587 + t2491*t2591) - 1.1135*(t2491*t2587 - 1.*t2495*t2591) - 1.*t2201*t2522*t67 + var1[1];
  p_output1[2]=0. + t2179*t2605 + t2238*t2609 + t2267*t2613 + t2313*t2617 + t2338*t2621 + t2363*t2625 - 0.1305*(t2156*t2605 + t2104*t2625) + t2381*t2633 + t2410*t2637 + t2422*t2641 + t2439*t2645 + t2447*t2649 + t2471*t2653 + t2484*t2657 + t2497*t2661 + t2506*t2665 + 0.058287*(t2495*t2661 + t2491*t2665) - 1.1135*(t2491*t2661 - 1.*t2495*t2665) + t2201*t2527*t67 + var1[2];
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

#include "p_RightToeBottomFront.hh"

namespace SymExpression
{

void p_RightToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
