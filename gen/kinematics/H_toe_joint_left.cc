/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:14 GMT-04:00
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
  double t1760;
  double t1671;
  double t1793;
  double t1708;
  double t1852;
  double t1580;
  double t1929;
  double t1932;
  double t1935;
  double t1751;
  double t1862;
  double t1894;
  double t1963;
  double t2044;
  double t1900;
  double t1970;
  double t1985;
  double t1502;
  double t2046;
  double t2054;
  double t2059;
  double t2094;
  double t2098;
  double t2101;
  double t2107;
  double t2116;
  double t2125;
  double t2159;
  double t2006;
  double t2144;
  double t2147;
  double t256;
  double t2168;
  double t2171;
  double t2174;
  double t2191;
  double t2155;
  double t2179;
  double t2181;
  double t190;
  double t2204;
  double t2224;
  double t2232;
  double t169;
  double t2278;
  double t2330;
  double t2332;
  double t2338;
  double t2346;
  double t2357;
  double t2360;
  double t2361;
  double t2327;
  double t2347;
  double t2353;
  double t2354;
  double t2363;
  double t2370;
  double t2379;
  double t2380;
  double t2382;
  double t2388;
  double t2396;
  double t2400;
  double t2402;
  double t2403;
  double t2407;
  double t2377;
  double t2413;
  double t2418;
  double t2422;
  double t2424;
  double t2427;
  double t2242;
  double t2420;
  double t2428;
  double t2430;
  double t2441;
  double t2447;
  double t2453;
  double t2489;
  double t2493;
  double t2495;
  double t2512;
  double t2514;
  double t2516;
  double t2483;
  double t2502;
  double t2506;
  double t2509;
  double t2519;
  double t2524;
  double t2527;
  double t2531;
  double t2532;
  double t2536;
  double t2545;
  double t2563;
  double t2565;
  double t2566;
  double t2568;
  double t2526;
  double t2569;
  double t2574;
  double t2578;
  double t2582;
  double t2584;
  double t2576;
  double t2590;
  double t2591;
  double t2594;
  double t2598;
  double t2599;
  double t2182;
  double t2233;
  double t2239;
  double t2249;
  double t2257;
  double t2262;
  double t2435;
  double t2456;
  double t2461;
  double t2466;
  double t2467;
  double t2475;
  double t2592;
  double t2603;
  double t2606;
  double t2614;
  double t2621;
  double t2622;
  double t2797;
  double t2798;
  double t2779;
  double t2784;
  double t2828;
  double t2829;
  double t2844;
  double t2845;
  double t2858;
  double t2860;
  double t2634;
  double t2636;
  double t2640;
  double t2702;
  double t2709;
  double t2718;
  double t2721;
  double t2730;
  double t2734;
  double t2745;
  double t2754;
  double t2758;
  double t2762;
  double t2773;
  double t2777;
  double t2786;
  double t2791;
  double t2792;
  double t2799;
  double t2802;
  double t2803;
  double t2806;
  double t2808;
  double t2809;
  double t2821;
  double t2824;
  double t2825;
  double t2831;
  double t2833;
  double t2834;
  double t2837;
  double t2839;
  double t2840;
  double t2846;
  double t2848;
  double t2849;
  double t2852;
  double t2854;
  double t2855;
  double t2861;
  double t2863;
  double t2865;
  double t2867;
  double t2869;
  double t2870;
  double t2641;
  double t2646;
  double t2649;
  double t2650;
  double t2655;
  double t2657;
  t1760 = Cos(var1[4]);
  t1671 = Cos(var1[6]);
  t1793 = Sin(var1[5]);
  t1708 = Sin(var1[4]);
  t1852 = Sin(var1[6]);
  t1580 = Cos(var1[7]);
  t1929 = -1.*t1760*t1671*t1793;
  t1932 = t1708*t1852;
  t1935 = t1929 + t1932;
  t1751 = t1671*t1708;
  t1862 = t1760*t1793*t1852;
  t1894 = t1751 + t1862;
  t1963 = Sin(var1[7]);
  t2044 = Cos(var1[9]);
  t1900 = t1580*t1894;
  t1970 = -1.*t1935*t1963;
  t1985 = t1900 + t1970;
  t1502 = Sin(var1[9]);
  t2046 = Cos(var1[5]);
  t2054 = Cos(var1[8]);
  t2059 = t1760*t2046*t2054;
  t2094 = t1580*t1935;
  t2098 = t1894*t1963;
  t2101 = t2094 + t2098;
  t2107 = Sin(var1[8]);
  t2116 = t2101*t2107;
  t2125 = t2059 + t2116;
  t2159 = Cos(var1[10]);
  t2006 = t1502*t1985;
  t2144 = t2044*t2125;
  t2147 = t2006 + t2144;
  t256 = Sin(var1[10]);
  t2168 = t2044*t1985;
  t2171 = -1.*t1502*t2125;
  t2174 = t2168 + t2171;
  t2191 = Cos(var1[11]);
  t2155 = -1.*t256*t2147;
  t2179 = t2159*t2174;
  t2181 = t2155 + t2179;
  t190 = Sin(var1[11]);
  t2204 = t2159*t2147;
  t2224 = t256*t2174;
  t2232 = t2204 + t2224;
  t169 = Sin(var1[12]);
  t2278 = Sin(var1[3]);
  t2330 = Cos(var1[3]);
  t2332 = t2330*t2046;
  t2338 = -1.*t2278*t1708*t1793;
  t2346 = t2332 + t2338;
  t2357 = t1671*t2346;
  t2360 = -1.*t1760*t2278*t1852;
  t2361 = t2357 + t2360;
  t2327 = -1.*t1760*t1671*t2278;
  t2347 = -1.*t2346*t1852;
  t2353 = t2327 + t2347;
  t2354 = t1580*t2353;
  t2363 = -1.*t2361*t1963;
  t2370 = t2354 + t2363;
  t2379 = t2046*t2278*t1708;
  t2380 = t2330*t1793;
  t2382 = t2379 + t2380;
  t2388 = t2054*t2382;
  t2396 = t1580*t2361;
  t2400 = t2353*t1963;
  t2402 = t2396 + t2400;
  t2403 = t2402*t2107;
  t2407 = t2388 + t2403;
  t2377 = t1502*t2370;
  t2413 = t2044*t2407;
  t2418 = t2377 + t2413;
  t2422 = t2044*t2370;
  t2424 = -1.*t1502*t2407;
  t2427 = t2422 + t2424;
  t2242 = Cos(var1[12]);
  t2420 = -1.*t256*t2418;
  t2428 = t2159*t2427;
  t2430 = t2420 + t2428;
  t2441 = t2159*t2418;
  t2447 = t256*t2427;
  t2453 = t2441 + t2447;
  t2489 = t2046*t2278;
  t2493 = t2330*t1708*t1793;
  t2495 = t2489 + t2493;
  t2512 = t1671*t2495;
  t2514 = t2330*t1760*t1852;
  t2516 = t2512 + t2514;
  t2483 = t2330*t1760*t1671;
  t2502 = -1.*t2495*t1852;
  t2506 = t2483 + t2502;
  t2509 = t1580*t2506;
  t2519 = -1.*t2516*t1963;
  t2524 = t2509 + t2519;
  t2527 = -1.*t2330*t2046*t1708;
  t2531 = t2278*t1793;
  t2532 = t2527 + t2531;
  t2536 = t2054*t2532;
  t2545 = t1580*t2516;
  t2563 = t2506*t1963;
  t2565 = t2545 + t2563;
  t2566 = t2565*t2107;
  t2568 = t2536 + t2566;
  t2526 = t1502*t2524;
  t2569 = t2044*t2568;
  t2574 = t2526 + t2569;
  t2578 = t2044*t2524;
  t2582 = -1.*t1502*t2568;
  t2584 = t2578 + t2582;
  t2576 = -1.*t256*t2574;
  t2590 = t2159*t2584;
  t2591 = t2576 + t2590;
  t2594 = t2159*t2574;
  t2598 = t256*t2584;
  t2599 = t2594 + t2598;
  t2182 = t190*t2181;
  t2233 = t2191*t2232;
  t2239 = t2182 + t2233;
  t2249 = t2191*t2181;
  t2257 = -1.*t190*t2232;
  t2262 = t2249 + t2257;
  t2435 = t190*t2430;
  t2456 = t2191*t2453;
  t2461 = t2435 + t2456;
  t2466 = t2191*t2430;
  t2467 = -1.*t190*t2453;
  t2475 = t2466 + t2467;
  t2592 = t190*t2591;
  t2603 = t2191*t2599;
  t2606 = t2592 + t2603;
  t2614 = t2191*t2591;
  t2621 = -1.*t190*t2599;
  t2622 = t2614 + t2621;
  t2797 = -1.*t2054;
  t2798 = 1. + t2797;
  t2779 = -1.*t2044;
  t2784 = 1. + t2779;
  t2828 = -1.*t2159;
  t2829 = 1. + t2828;
  t2844 = -1.*t2191;
  t2845 = 1. + t2844;
  t2858 = -1.*t2242;
  t2860 = 1. + t2858;
  t2634 = t2242*t2239;
  t2636 = t169*t2262;
  t2640 = t2634 + t2636;
  t2702 = -1.*t1671;
  t2709 = 1. + t2702;
  t2718 = 0.135*t2709;
  t2721 = 0. + t2718;
  t2730 = -0.135*t1852;
  t2734 = 0. + t2730;
  t2745 = -1.*t1580;
  t2754 = 1. + t2745;
  t2758 = 0.135*t2754;
  t2762 = 0. + t2758;
  t2773 = -0.135*t1963;
  t2777 = 0. + t2773;
  t2786 = -0.09*t2784;
  t2791 = 0.049*t1502;
  t2792 = 0. + t2786 + t2791;
  t2799 = 0.135*t2798;
  t2802 = 0.049*t2107;
  t2803 = 0. + t2799 + t2802;
  t2806 = -0.049*t2798;
  t2808 = 0.135*t2107;
  t2809 = 0. + t2806 + t2808;
  t2821 = -0.049*t2784;
  t2824 = -0.09*t1502;
  t2825 = 0. + t2821 + t2824;
  t2831 = -0.049*t2829;
  t2833 = -0.21*t256;
  t2834 = 0. + t2831 + t2833;
  t2837 = -0.21*t2829;
  t2839 = 0.049*t256;
  t2840 = 0. + t2837 + t2839;
  t2846 = -0.2707*t2845;
  t2848 = 0.0016*t190;
  t2849 = 0. + t2846 + t2848;
  t2852 = -0.0016*t2845;
  t2854 = -0.2707*t190;
  t2855 = 0. + t2852 + t2854;
  t2861 = 0.0184*t2860;
  t2863 = -0.7055*t169;
  t2865 = 0. + t2861 + t2863;
  t2867 = -0.7055*t2860;
  t2869 = -0.0184*t169;
  t2870 = 0. + t2867 + t2869;
  t2641 = t2242*t2461;
  t2646 = t169*t2475;
  t2649 = t2641 + t2646;
  t2650 = t2242*t2606;
  t2655 = t169*t2622;
  t2657 = t2650 + t2655;
  p_output1[0]=t169*t2239 - 1.*t2242*t2262;
  p_output1[1]=t169*t2461 - 1.*t2242*t2475;
  p_output1[2]=t169*t2606 - 1.*t2242*t2622;
  p_output1[3]=0.;
  p_output1[4]=t2640;
  p_output1[5]=t2649;
  p_output1[6]=t2657;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2054*t2101 + t1760*t2046*t2107;
  p_output1[9]=t2107*t2382 - 1.*t2054*t2402;
  p_output1[10]=t2107*t2532 - 1.*t2054*t2565;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t2054*t2101 - 1.*t1760*t2046*t2107) - 1.1135*(-1.*t169*t2239 + t2242*t2262) - 0.0216*t2640 - 1.*t1760*t1793*t2721 + t1708*t2734 + t1935*t2762 + t1894*t2777 + t1985*t2792 + t2101*t2803 + t1760*t2046*t2809 + t2125*t2825 + t2147*t2834 + t2174*t2840 + t2181*t2849 + t2232*t2855 + t2239*t2865 + t2262*t2870 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t2107*t2382 + t2054*t2402) - 1.1135*(-1.*t169*t2461 + t2242*t2475) - 0.0216*t2649 + t2346*t2721 - 1.*t1760*t2278*t2734 + t2361*t2762 + t2353*t2777 + t2370*t2792 + t2402*t2803 + t2382*t2809 + t2407*t2825 + t2418*t2834 + t2427*t2840 + t2430*t2849 + t2453*t2855 + t2461*t2865 + t2475*t2870 + var1[1];
  p_output1[14]=0. + 0.1305*(-1.*t2107*t2532 + t2054*t2565) - 1.1135*(-1.*t169*t2606 + t2242*t2622) - 0.0216*t2657 + t2495*t2721 + t1760*t2330*t2734 + t2516*t2762 + t2506*t2777 + t2524*t2792 + t2565*t2803 + t2532*t2809 + t2568*t2825 + t2574*t2834 + t2584*t2840 + t2591*t2849 + t2599*t2855 + t2606*t2865 + t2622*t2870 + var1[2];
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

#include "H_toe_joint_left.hh"

namespace SymExpression
{

void H_toe_joint_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
