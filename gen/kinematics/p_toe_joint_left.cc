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
  double t1097;
  double t1107;
  double t1545;
  double t1591;
  double t1664;
  double t1718;
  double t1862;
  double t1894;
  double t1900;
  double t1788;
  double t1793;
  double t1811;
  double t1910;
  double t2066;
  double t2079;
  double t2080;
  double t2095;
  double t2054;
  double t2059;
  double t2062;
  double t2113;
  double t1938;
  double t1959;
  double t1960;
  double t1965;
  double t2006;
  double t2024;
  double t2044;
  double t2182;
  double t2191;
  double t2197;
  double t2207;
  double t2210;
  double t2215;
  double t2229;
  double t2239;
  double t2240;
  double t2241;
  double t2263;
  double t2266;
  double t2268;
  double t2295;
  double t2296;
  double t2306;
  double t2329;
  double t2334;
  double t2338;
  double t2346;
  double t2360;
  double t2361;
  double t2362;
  double t2365;
  double t2366;
  double t2369;
  double t2376;
  double t2380;
  double t2382;
  double t2384;
  double t2403;
  double t2404;
  double t2406;
  double t1428;
  double t1480;
  double t1502;
  double t1508;
  double t2442;
  double t1671;
  double t1684;
  double t1745;
  double t1747;
  double t1751;
  double t1760;
  double t2436;
  double t2441;
  double t2444;
  double t2445;
  double t1929;
  double t1932;
  double t1963;
  double t1970;
  double t1985;
  double t2462;
  double t2463;
  double t2464;
  double t2456;
  double t2457;
  double t2460;
  double t2094;
  double t2098;
  double t2101;
  double t2116;
  double t2125;
  double t2144;
  double t2481;
  double t2483;
  double t2486;
  double t2493;
  double t2495;
  double t2499;
  double t2174;
  double t2179;
  double t2181;
  double t2224;
  double t2232;
  double t2233;
  double t2467;
  double t2471;
  double t2475;
  double t2516;
  double t2519;
  double t2523;
  double t2249;
  double t2257;
  double t2262;
  double t2327;
  double t2330;
  double t2332;
  double t2526;
  double t2527;
  double t2528;
  double t2532;
  double t2533;
  double t2536;
  double t2353;
  double t2354;
  double t2357;
  double t2370;
  double t2377;
  double t2379;
  double t2555;
  double t2563;
  double t2565;
  double t2568;
  double t2569;
  double t2572;
  double t2396;
  double t2400;
  double t2402;
  double t2576;
  double t2578;
  double t2580;
  double t2584;
  double t2586;
  double t2587;
  double t2621;
  double t2622;
  double t2626;
  double t2641;
  double t2643;
  double t2646;
  double t2634;
  double t2636;
  double t2638;
  double t2660;
  double t2664;
  double t2669;
  double t2672;
  double t2675;
  double t2679;
  double t2650;
  double t2653;
  double t2655;
  double t2702;
  double t2709;
  double t2714;
  double t2721;
  double t2725;
  double t2729;
  double t2734;
  double t2741;
  double t2742;
  double t2753;
  double t2754;
  double t2758;
  double t2769;
  double t2773;
  double t2774;
  double t2778;
  double t2779;
  double t2782;
  double t2786;
  double t2787;
  double t2789;
  t1097 = Cos(var1[4]);
  t1107 = Cos(var1[6]);
  t1545 = Sin(var1[5]);
  t1591 = Sin(var1[4]);
  t1664 = Sin(var1[6]);
  t1718 = Cos(var1[7]);
  t1862 = t1107*t1591;
  t1894 = t1097*t1545*t1664;
  t1900 = t1862 + t1894;
  t1788 = -1.*t1097*t1107*t1545;
  t1793 = t1591*t1664;
  t1811 = t1788 + t1793;
  t1910 = Sin(var1[7]);
  t2066 = Cos(var1[8]);
  t2079 = -1.*t2066;
  t2080 = 1. + t2079;
  t2095 = Sin(var1[8]);
  t2054 = t1718*t1811;
  t2059 = t1900*t1910;
  t2062 = t2054 + t2059;
  t2113 = Cos(var1[5]);
  t1938 = Cos(var1[9]);
  t1959 = -1.*t1938;
  t1960 = 1. + t1959;
  t1965 = Sin(var1[9]);
  t2006 = t1718*t1900;
  t2024 = -1.*t1811*t1910;
  t2044 = t2006 + t2024;
  t2182 = t1097*t2113*t2066;
  t2191 = t2062*t2095;
  t2197 = t2182 + t2191;
  t2207 = Cos(var1[10]);
  t2210 = -1.*t2207;
  t2215 = 1. + t2210;
  t2229 = Sin(var1[10]);
  t2239 = t1965*t2044;
  t2240 = t1938*t2197;
  t2241 = t2239 + t2240;
  t2263 = t1938*t2044;
  t2266 = -1.*t1965*t2197;
  t2268 = t2263 + t2266;
  t2295 = Cos(var1[11]);
  t2296 = -1.*t2295;
  t2306 = 1. + t2296;
  t2329 = Sin(var1[11]);
  t2334 = -1.*t2229*t2241;
  t2338 = t2207*t2268;
  t2346 = t2334 + t2338;
  t2360 = t2207*t2241;
  t2361 = t2229*t2268;
  t2362 = t2360 + t2361;
  t2365 = Cos(var1[12]);
  t2366 = -1.*t2365;
  t2369 = 1. + t2366;
  t2376 = Sin(var1[12]);
  t2380 = t2329*t2346;
  t2382 = t2295*t2362;
  t2384 = t2380 + t2382;
  t2403 = t2295*t2346;
  t2404 = -1.*t2329*t2362;
  t2406 = t2403 + t2404;
  t1428 = -1.*t1107;
  t1480 = 1. + t1428;
  t1502 = 0.135*t1480;
  t1508 = 0. + t1502;
  t2442 = Sin(var1[3]);
  t1671 = -0.135*t1664;
  t1684 = 0. + t1671;
  t1745 = -1.*t1718;
  t1747 = 1. + t1745;
  t1751 = 0.135*t1747;
  t1760 = 0. + t1751;
  t2436 = Cos(var1[3]);
  t2441 = t2436*t2113;
  t2444 = -1.*t2442*t1591*t1545;
  t2445 = t2441 + t2444;
  t1929 = -0.135*t1910;
  t1932 = 0. + t1929;
  t1963 = -0.09*t1960;
  t1970 = 0.049*t1965;
  t1985 = 0. + t1963 + t1970;
  t2462 = -1.*t1097*t1107*t2442;
  t2463 = -1.*t2445*t1664;
  t2464 = t2462 + t2463;
  t2456 = t1107*t2445;
  t2457 = -1.*t1097*t2442*t1664;
  t2460 = t2456 + t2457;
  t2094 = 0.135*t2080;
  t2098 = 0.049*t2095;
  t2101 = 0. + t2094 + t2098;
  t2116 = -0.049*t2080;
  t2125 = 0.135*t2095;
  t2144 = 0. + t2116 + t2125;
  t2481 = t1718*t2460;
  t2483 = t2464*t1910;
  t2486 = t2481 + t2483;
  t2493 = t2113*t2442*t1591;
  t2495 = t2436*t1545;
  t2499 = t2493 + t2495;
  t2174 = -0.049*t1960;
  t2179 = -0.09*t1965;
  t2181 = 0. + t2174 + t2179;
  t2224 = -0.049*t2215;
  t2232 = -0.21*t2229;
  t2233 = 0. + t2224 + t2232;
  t2467 = t1718*t2464;
  t2471 = -1.*t2460*t1910;
  t2475 = t2467 + t2471;
  t2516 = t2066*t2499;
  t2519 = t2486*t2095;
  t2523 = t2516 + t2519;
  t2249 = -0.21*t2215;
  t2257 = 0.049*t2229;
  t2262 = 0. + t2249 + t2257;
  t2327 = -0.2707*t2306;
  t2330 = 0.0016*t2329;
  t2332 = 0. + t2327 + t2330;
  t2526 = t1965*t2475;
  t2527 = t1938*t2523;
  t2528 = t2526 + t2527;
  t2532 = t1938*t2475;
  t2533 = -1.*t1965*t2523;
  t2536 = t2532 + t2533;
  t2353 = -0.0016*t2306;
  t2354 = -0.2707*t2329;
  t2357 = 0. + t2353 + t2354;
  t2370 = 0.0184*t2369;
  t2377 = -0.7055*t2376;
  t2379 = 0. + t2370 + t2377;
  t2555 = -1.*t2229*t2528;
  t2563 = t2207*t2536;
  t2565 = t2555 + t2563;
  t2568 = t2207*t2528;
  t2569 = t2229*t2536;
  t2572 = t2568 + t2569;
  t2396 = -0.7055*t2369;
  t2400 = -0.0184*t2376;
  t2402 = 0. + t2396 + t2400;
  t2576 = t2329*t2565;
  t2578 = t2295*t2572;
  t2580 = t2576 + t2578;
  t2584 = t2295*t2565;
  t2586 = -1.*t2329*t2572;
  t2587 = t2584 + t2586;
  t2621 = t2113*t2442;
  t2622 = t2436*t1591*t1545;
  t2626 = t2621 + t2622;
  t2641 = t2436*t1097*t1107;
  t2643 = -1.*t2626*t1664;
  t2646 = t2641 + t2643;
  t2634 = t1107*t2626;
  t2636 = t2436*t1097*t1664;
  t2638 = t2634 + t2636;
  t2660 = t1718*t2638;
  t2664 = t2646*t1910;
  t2669 = t2660 + t2664;
  t2672 = -1.*t2436*t2113*t1591;
  t2675 = t2442*t1545;
  t2679 = t2672 + t2675;
  t2650 = t1718*t2646;
  t2653 = -1.*t2638*t1910;
  t2655 = t2650 + t2653;
  t2702 = t2066*t2679;
  t2709 = t2669*t2095;
  t2714 = t2702 + t2709;
  t2721 = t1965*t2655;
  t2725 = t1938*t2714;
  t2729 = t2721 + t2725;
  t2734 = t1938*t2655;
  t2741 = -1.*t1965*t2714;
  t2742 = t2734 + t2741;
  t2753 = -1.*t2229*t2729;
  t2754 = t2207*t2742;
  t2758 = t2753 + t2754;
  t2769 = t2207*t2729;
  t2773 = t2229*t2742;
  t2774 = t2769 + t2773;
  t2778 = t2329*t2758;
  t2779 = t2295*t2774;
  t2782 = t2778 + t2779;
  t2786 = t2295*t2758;
  t2787 = -1.*t2329*t2774;
  t2789 = t2786 + t2787;
  p_output1[0]=0. - 1.*t1097*t1508*t1545 + t1591*t1684 + t1760*t1811 + t1900*t1932 + t1985*t2044 + t2062*t2101 + 0.1305*(t2062*t2066 - 1.*t1097*t2095*t2113) + t1097*t2113*t2144 + t2181*t2197 + t2233*t2241 + t2262*t2268 + t2332*t2346 + t2357*t2362 + t2379*t2384 + t2402*t2406 - 1.1135*(-1.*t2376*t2384 + t2365*t2406) - 0.0216*(t2365*t2384 + t2376*t2406) + var1[0];
  p_output1[1]=0. - 1.*t1097*t1684*t2442 + t1508*t2445 + t1760*t2460 + t1932*t2464 + t1985*t2475 + t2101*t2486 + t2144*t2499 + 0.1305*(t2066*t2486 - 1.*t2095*t2499) + t2181*t2523 + t2233*t2528 + t2262*t2536 + t2332*t2565 + t2357*t2572 + t2379*t2580 + t2402*t2587 - 1.1135*(-1.*t2376*t2580 + t2365*t2587) - 0.0216*(t2365*t2580 + t2376*t2587) + var1[1];
  p_output1[2]=0. + t1097*t1684*t2436 + t1508*t2626 + t1760*t2638 + t1932*t2646 + t1985*t2655 + t2101*t2669 + t2144*t2679 + 0.1305*(t2066*t2669 - 1.*t2095*t2679) + t2181*t2714 + t2233*t2729 + t2262*t2742 + t2332*t2758 + t2357*t2774 + t2379*t2782 + t2402*t2789 - 1.1135*(-1.*t2376*t2782 + t2365*t2789) - 0.0216*(t2365*t2782 + t2376*t2789) + var1[2];
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

#include "p_toe_joint_left.hh"

namespace SymExpression
{

void p_toe_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
