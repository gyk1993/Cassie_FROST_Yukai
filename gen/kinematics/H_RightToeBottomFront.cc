/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:26 GMT-04:00
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
  double t2267;
  double t2255;
  double t2268;
  double t2234;
  double t2300;
  double t2316;
  double t2263;
  double t2311;
  double t2313;
  double t2223;
  double t2319;
  double t2322;
  double t2335;
  double t2348;
  double t2314;
  double t2337;
  double t2338;
  double t2190;
  double t2357;
  double t2360;
  double t2361;
  double t2363;
  double t2364;
  double t2365;
  double t2369;
  double t2370;
  double t2371;
  double t2379;
  double t2346;
  double t2372;
  double t2377;
  double t2181;
  double t2381;
  double t2385;
  double t2391;
  double t2411;
  double t2378;
  double t2405;
  double t2409;
  double t2179;
  double t2412;
  double t2415;
  double t2418;
  double t2427;
  double t2410;
  double t2420;
  double t2422;
  double t2162;
  double t2430;
  double t2435;
  double t2438;
  double t2135;
  double t2453;
  double t2469;
  double t2471;
  double t2472;
  double t2474;
  double t2463;
  double t2477;
  double t2481;
  double t2484;
  double t2485;
  double t2489;
  double t2483;
  double t2490;
  double t2494;
  double t2497;
  double t2499;
  double t2501;
  double t2502;
  double t2503;
  double t2506;
  double t2507;
  double t2508;
  double t2510;
  double t2496;
  double t2511;
  double t2512;
  double t2516;
  double t2517;
  double t2518;
  double t2513;
  double t2519;
  double t2520;
  double t2523;
  double t2526;
  double t2528;
  double t2444;
  double t2521;
  double t2529;
  double t2530;
  double t2536;
  double t2538;
  double t2540;
  double t2554;
  double t2555;
  double t2556;
  double t2553;
  double t2557;
  double t2560;
  double t2562;
  double t2564;
  double t2565;
  double t2561;
  double t2567;
  double t2568;
  double t2571;
  double t2572;
  double t2573;
  double t2574;
  double t2576;
  double t2577;
  double t2578;
  double t2580;
  double t2581;
  double t2570;
  double t2583;
  double t2584;
  double t2588;
  double t2589;
  double t2590;
  double t2586;
  double t2592;
  double t2593;
  double t2595;
  double t2596;
  double t2597;
  double t2594;
  double t2598;
  double t2599;
  double t2601;
  double t2602;
  double t2604;
  double t2424;
  double t2439;
  double t2441;
  double t2445;
  double t2446;
  double t2447;
  double t2531;
  double t2543;
  double t2544;
  double t2547;
  double t2548;
  double t2549;
  double t2600;
  double t2605;
  double t2606;
  double t2608;
  double t2610;
  double t2611;
  double t2639;
  double t2641;
  double t2669;
  double t2670;
  double t2687;
  double t2688;
  double t2697;
  double t2698;
  double t2707;
  double t2708;
  double t2717;
  double t2718;
  double t2443;
  double t2448;
  double t2451;
  double t2647;
  double t2648;
  double t2642;
  double t2644;
  double t2645;
  double t2651;
  double t2652;
  double t2654;
  double t2655;
  double t2658;
  double t2660;
  double t2662;
  double t2663;
  double t2666;
  double t2667;
  double t2671;
  double t2672;
  double t2673;
  double t2675;
  double t2676;
  double t2677;
  double t2683;
  double t2684;
  double t2685;
  double t2689;
  double t2690;
  double t2691;
  double t2693;
  double t2694;
  double t2695;
  double t2699;
  double t2700;
  double t2701;
  double t2703;
  double t2704;
  double t2705;
  double t2709;
  double t2710;
  double t2711;
  double t2713;
  double t2714;
  double t2715;
  double t2719;
  double t2720;
  double t2721;
  double t2723;
  double t2724;
  double t2725;
  double t2546;
  double t2550;
  double t2552;
  double t2607;
  double t2612;
  double t2614;
  t2267 = Cos(var1[14]);
  t2255 = Sin(var1[4]);
  t2268 = Cos(var1[4]);
  t2234 = Sin(var1[14]);
  t2300 = Sin(var1[5]);
  t2316 = Cos(var1[15]);
  t2263 = t2234*t2255;
  t2311 = -1.*t2267*t2268*t2300;
  t2313 = t2263 + t2311;
  t2223 = Sin(var1[15]);
  t2319 = t2267*t2255;
  t2322 = t2268*t2234*t2300;
  t2335 = t2319 + t2322;
  t2348 = Cos(var1[17]);
  t2314 = -1.*t2223*t2313;
  t2337 = t2316*t2335;
  t2338 = t2314 + t2337;
  t2190 = Sin(var1[17]);
  t2357 = Cos(var1[16]);
  t2360 = Cos(var1[5]);
  t2361 = t2357*t2268*t2360;
  t2363 = Sin(var1[16]);
  t2364 = t2316*t2313;
  t2365 = t2223*t2335;
  t2369 = t2364 + t2365;
  t2370 = -1.*t2363*t2369;
  t2371 = t2361 + t2370;
  t2379 = Cos(var1[18]);
  t2346 = t2190*t2338;
  t2372 = t2348*t2371;
  t2377 = t2346 + t2372;
  t2181 = Sin(var1[18]);
  t2381 = t2348*t2338;
  t2385 = -1.*t2190*t2371;
  t2391 = t2381 + t2385;
  t2411 = Cos(var1[19]);
  t2378 = -1.*t2181*t2377;
  t2405 = t2379*t2391;
  t2409 = t2378 + t2405;
  t2179 = Sin(var1[19]);
  t2412 = t2379*t2377;
  t2415 = t2181*t2391;
  t2418 = t2412 + t2415;
  t2427 = Cos(var1[20]);
  t2410 = t2179*t2409;
  t2420 = t2411*t2418;
  t2422 = t2410 + t2420;
  t2162 = Sin(var1[20]);
  t2430 = t2411*t2409;
  t2435 = -1.*t2179*t2418;
  t2438 = t2430 + t2435;
  t2135 = Sin(var1[21]);
  t2453 = Sin(var1[3]);
  t2469 = Cos(var1[3]);
  t2471 = t2469*t2360;
  t2472 = -1.*t2453*t2255*t2300;
  t2474 = t2471 + t2472;
  t2463 = -1.*t2268*t2234*t2453;
  t2477 = t2267*t2474;
  t2481 = t2463 + t2477;
  t2484 = -1.*t2267*t2268*t2453;
  t2485 = -1.*t2234*t2474;
  t2489 = t2484 + t2485;
  t2483 = -1.*t2223*t2481;
  t2490 = t2316*t2489;
  t2494 = t2483 + t2490;
  t2497 = t2360*t2453*t2255;
  t2499 = t2469*t2300;
  t2501 = t2497 + t2499;
  t2502 = t2357*t2501;
  t2503 = t2316*t2481;
  t2506 = t2223*t2489;
  t2507 = t2503 + t2506;
  t2508 = -1.*t2363*t2507;
  t2510 = t2502 + t2508;
  t2496 = t2190*t2494;
  t2511 = t2348*t2510;
  t2512 = t2496 + t2511;
  t2516 = t2348*t2494;
  t2517 = -1.*t2190*t2510;
  t2518 = t2516 + t2517;
  t2513 = -1.*t2181*t2512;
  t2519 = t2379*t2518;
  t2520 = t2513 + t2519;
  t2523 = t2379*t2512;
  t2526 = t2181*t2518;
  t2528 = t2523 + t2526;
  t2444 = Cos(var1[21]);
  t2521 = t2179*t2520;
  t2529 = t2411*t2528;
  t2530 = t2521 + t2529;
  t2536 = t2411*t2520;
  t2538 = -1.*t2179*t2528;
  t2540 = t2536 + t2538;
  t2554 = t2360*t2453;
  t2555 = t2469*t2255*t2300;
  t2556 = t2554 + t2555;
  t2553 = t2469*t2268*t2234;
  t2557 = t2267*t2556;
  t2560 = t2553 + t2557;
  t2562 = t2267*t2469*t2268;
  t2564 = -1.*t2234*t2556;
  t2565 = t2562 + t2564;
  t2561 = -1.*t2223*t2560;
  t2567 = t2316*t2565;
  t2568 = t2561 + t2567;
  t2571 = -1.*t2469*t2360*t2255;
  t2572 = t2453*t2300;
  t2573 = t2571 + t2572;
  t2574 = t2357*t2573;
  t2576 = t2316*t2560;
  t2577 = t2223*t2565;
  t2578 = t2576 + t2577;
  t2580 = -1.*t2363*t2578;
  t2581 = t2574 + t2580;
  t2570 = t2190*t2568;
  t2583 = t2348*t2581;
  t2584 = t2570 + t2583;
  t2588 = t2348*t2568;
  t2589 = -1.*t2190*t2581;
  t2590 = t2588 + t2589;
  t2586 = -1.*t2181*t2584;
  t2592 = t2379*t2590;
  t2593 = t2586 + t2592;
  t2595 = t2379*t2584;
  t2596 = t2181*t2590;
  t2597 = t2595 + t2596;
  t2594 = t2179*t2593;
  t2598 = t2411*t2597;
  t2599 = t2594 + t2598;
  t2601 = t2411*t2593;
  t2602 = -1.*t2179*t2597;
  t2604 = t2601 + t2602;
  t2424 = -1.*t2162*t2422;
  t2439 = t2427*t2438;
  t2441 = t2424 + t2439;
  t2445 = t2427*t2422;
  t2446 = t2162*t2438;
  t2447 = t2445 + t2446;
  t2531 = -1.*t2162*t2530;
  t2543 = t2427*t2540;
  t2544 = t2531 + t2543;
  t2547 = t2427*t2530;
  t2548 = t2162*t2540;
  t2549 = t2547 + t2548;
  t2600 = -1.*t2162*t2599;
  t2605 = t2427*t2604;
  t2606 = t2600 + t2605;
  t2608 = t2427*t2599;
  t2610 = t2162*t2604;
  t2611 = t2608 + t2610;
  t2639 = -1.*t2357;
  t2641 = 1. + t2639;
  t2669 = -1.*t2348;
  t2670 = 1. + t2669;
  t2687 = -1.*t2379;
  t2688 = 1. + t2687;
  t2697 = -1.*t2411;
  t2698 = 1. + t2697;
  t2707 = -1.*t2427;
  t2708 = 1. + t2707;
  t2717 = -1.*t2444;
  t2718 = 1. + t2717;
  t2443 = t2135*t2441;
  t2448 = t2444*t2447;
  t2451 = t2443 + t2448;
  t2647 = 0.135*t2234;
  t2648 = 0. + t2647;
  t2642 = -0.049*t2641;
  t2644 = 0.135*t2363;
  t2645 = 0. + t2642 + t2644;
  t2651 = -1.*t2267;
  t2652 = 1. + t2651;
  t2654 = -0.135*t2652;
  t2655 = 0. + t2654;
  t2658 = -1.*t2316;
  t2660 = 1. + t2658;
  t2662 = -0.135*t2660;
  t2663 = 0. + t2662;
  t2666 = 0.135*t2223;
  t2667 = 0. + t2666;
  t2671 = -0.09*t2670;
  t2672 = 0.049*t2190;
  t2673 = 0. + t2671 + t2672;
  t2675 = -0.135*t2641;
  t2676 = -0.049*t2363;
  t2677 = 0. + t2675 + t2676;
  t2683 = -0.049*t2670;
  t2684 = -0.09*t2190;
  t2685 = 0. + t2683 + t2684;
  t2689 = -0.049*t2688;
  t2690 = -0.21*t2181;
  t2691 = 0. + t2689 + t2690;
  t2693 = -0.21*t2688;
  t2694 = 0.049*t2181;
  t2695 = 0. + t2693 + t2694;
  t2699 = -0.2707*t2698;
  t2700 = 0.0016*t2179;
  t2701 = 0. + t2699 + t2700;
  t2703 = -0.0016*t2698;
  t2704 = -0.2707*t2179;
  t2705 = 0. + t2703 + t2704;
  t2709 = 0.0184*t2708;
  t2710 = -0.7055*t2162;
  t2711 = 0. + t2709 + t2710;
  t2713 = -0.7055*t2708;
  t2714 = -0.0184*t2162;
  t2715 = 0. + t2713 + t2714;
  t2719 = -1.1135*t2718;
  t2720 = 0.0216*t2135;
  t2721 = 0. + t2719 + t2720;
  t2723 = -0.0216*t2718;
  t2724 = -1.1135*t2135;
  t2725 = 0. + t2723 + t2724;
  t2546 = t2135*t2544;
  t2550 = t2444*t2549;
  t2552 = t2546 + t2550;
  t2607 = t2135*t2606;
  t2612 = t2444*t2611;
  t2614 = t2607 + t2612;
  p_output1[0]=t2451;
  p_output1[1]=t2552;
  p_output1[2]=t2614;
  p_output1[3]=0.;
  p_output1[4]=-1.*t2268*t2360*t2363 - 1.*t2357*t2369;
  p_output1[5]=-1.*t2363*t2501 - 1.*t2357*t2507;
  p_output1[6]=-1.*t2363*t2573 - 1.*t2357*t2578;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2441*t2444 + t2135*t2447;
  p_output1[9]=-1.*t2444*t2544 + t2135*t2549;
  p_output1[10]=-1.*t2444*t2606 + t2135*t2611;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(t2268*t2360*t2363 + t2357*t2369) - 1.1135*(t2441*t2444 - 1.*t2135*t2447) + 0.058287*t2451 + t2268*t2360*t2645 + t2255*t2648 - 1.*t2268*t2300*t2655 + t2313*t2663 + t2335*t2667 + t2338*t2673 + t2369*t2677 + t2371*t2685 + t2377*t2691 + t2391*t2695 + t2409*t2701 + t2418*t2705 + t2422*t2711 + t2438*t2715 + t2441*t2721 + t2447*t2725 + var1[0];
  p_output1[13]=0. - 0.1305*(t2363*t2501 + t2357*t2507) - 1.1135*(t2444*t2544 - 1.*t2135*t2549) + 0.058287*t2552 + t2501*t2645 - 1.*t2268*t2453*t2648 + t2474*t2655 + t2481*t2663 + t2489*t2667 + t2494*t2673 + t2507*t2677 + t2510*t2685 + t2512*t2691 + t2518*t2695 + t2520*t2701 + t2528*t2705 + t2530*t2711 + t2540*t2715 + t2544*t2721 + t2549*t2725 + var1[1];
  p_output1[14]=0. - 0.1305*(t2363*t2573 + t2357*t2578) - 1.1135*(t2444*t2606 - 1.*t2135*t2611) + 0.058287*t2614 + t2573*t2645 + t2268*t2469*t2648 + t2556*t2655 + t2560*t2663 + t2565*t2667 + t2568*t2673 + t2578*t2677 + t2581*t2685 + t2584*t2691 + t2590*t2695 + t2593*t2701 + t2597*t2705 + t2599*t2711 + t2604*t2715 + t2606*t2721 + t2611*t2725 + var1[2];
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

#include "H_RightToeBottomFront.hh"

namespace SymExpression
{

void H_RightToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
