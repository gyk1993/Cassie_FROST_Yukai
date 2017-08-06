/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:30 GMT-04:00
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
  double t1082;
  double t1647;
  double t1766;
  double t1825;
  double t1960;
  double t1991;
  double t1979;
  double t1983;
  double t1984;
  double t1970;
  double t2039;
  double t2068;
  double t2072;
  double t1171;
  double t1202;
  double t1508;
  double t1615;
  double t1121;
  double t2210;
  double t2215;
  double t2216;
  double t2076;
  double t2080;
  double t2082;
  double t2108;
  double t2147;
  double t2159;
  double t2182;
  double t2286;
  double t2306;
  double t2310;
  double t2321;
  double t2326;
  double t2340;
  double t2372;
  double t2428;
  double t2452;
  double t2470;
  double t2517;
  double t2522;
  double t2524;
  double t2528;
  double t2541;
  double t2555;
  double t2574;
  double t2610;
  double t2611;
  double t2612;
  double t2656;
  double t2662;
  double t2667;
  double t2673;
  double t2675;
  double t2676;
  double t2678;
  double t2682;
  double t2685;
  double t2686;
  double t2705;
  double t2712;
  double t2719;
  double t2761;
  double t2772;
  double t2783;
  double t2801;
  double t2807;
  double t2808;
  double t2809;
  double t2826;
  double t2830;
  double t2832;
  double t1690;
  double t1747;
  double t1568;
  double t1622;
  double t1623;
  double t2866;
  double t1865;
  double t1868;
  double t1892;
  double t1941;
  double t2889;
  double t1971;
  double t1972;
  double t1974;
  double t1976;
  double t2919;
  double t2922;
  double t2924;
  double t1998;
  double t2026;
  double t2091;
  double t2121;
  double t2139;
  double t2927;
  double t2928;
  double t2930;
  double t2935;
  double t2936;
  double t2937;
  double t2199;
  double t2202;
  double t2203;
  double t2880;
  double t2901;
  double t2912;
  double t2991;
  double t2999;
  double t3007;
  double t2241;
  double t2245;
  double t2260;
  double t2361;
  double t2398;
  double t2404;
  double t2948;
  double t2952;
  double t2962;
  double t3082;
  double t3084;
  double t3085;
  double t2505;
  double t2513;
  double t2515;
  double t2562;
  double t2583;
  double t2603;
  double t3089;
  double t3094;
  double t3096;
  double t3154;
  double t3155;
  double t3158;
  double t2633;
  double t2640;
  double t2652;
  double t2677;
  double t2680;
  double t2681;
  double t3181;
  double t3185;
  double t3197;
  double t3296;
  double t3327;
  double t3350;
  double t2698;
  double t2703;
  double t2704;
  double t2793;
  double t2803;
  double t2805;
  double t3416;
  double t3420;
  double t3430;
  double t3434;
  double t3453;
  double t3465;
  double t2813;
  double t2814;
  double t2816;
  double t3471;
  double t3477;
  double t3498;
  double t3509;
  double t3530;
  double t3533;
  double t3692;
  double t3693;
  double t3703;
  double t3727;
  double t3731;
  double t3755;
  double t3770;
  double t3774;
  double t3778;
  double t3664;
  double t3672;
  double t3684;
  double t3895;
  double t3909;
  double t3913;
  double t3874;
  double t3876;
  double t3879;
  double t3980;
  double t3987;
  double t4003;
  double t4007;
  double t4009;
  double t4010;
  double t4017;
  double t4035;
  double t4051;
  double t4055;
  double t4057;
  double t4066;
  double t4072;
  double t4081;
  double t4088;
  double t4116;
  double t4117;
  double t4134;
  double t4150;
  double t4178;
  double t4179;
  double t4202;
  double t4210;
  double t4226;
  double t4250;
  double t4258;
  double t4274;
  t1082 = Cos(var1[4]);
  t1647 = Sin(var1[14]);
  t1766 = Sin(var1[4]);
  t1825 = Cos(var1[14]);
  t1960 = Sin(var1[5]);
  t1991 = Sin(var1[15]);
  t1979 = t1647*t1766;
  t1983 = -1.*t1825*t1082*t1960;
  t1984 = t1979 + t1983;
  t1970 = Cos(var1[15]);
  t2039 = t1825*t1766;
  t2068 = t1082*t1647*t1960;
  t2072 = t2039 + t2068;
  t1171 = Cos(var1[16]);
  t1202 = -1.*t1171;
  t1508 = 1. + t1202;
  t1615 = Sin(var1[16]);
  t1121 = Cos(var1[5]);
  t2210 = t1970*t1984;
  t2215 = t1991*t2072;
  t2216 = t2210 + t2215;
  t2076 = Cos(var1[17]);
  t2080 = -1.*t2076;
  t2082 = 1. + t2080;
  t2108 = Sin(var1[17]);
  t2147 = -1.*t1991*t1984;
  t2159 = t1970*t2072;
  t2182 = t2147 + t2159;
  t2286 = t1171*t1082*t1121;
  t2306 = t1615*t2216;
  t2310 = t2286 + t2306;
  t2321 = Cos(var1[18]);
  t2326 = -1.*t2321;
  t2340 = 1. + t2326;
  t2372 = Sin(var1[18]);
  t2428 = t2108*t2182;
  t2452 = t2076*t2310;
  t2470 = t2428 + t2452;
  t2517 = t2076*t2182;
  t2522 = -1.*t2108*t2310;
  t2524 = t2517 + t2522;
  t2528 = Cos(var1[19]);
  t2541 = -1.*t2528;
  t2555 = 1. + t2541;
  t2574 = Sin(var1[19]);
  t2610 = -1.*t2372*t2470;
  t2611 = t2321*t2524;
  t2612 = t2610 + t2611;
  t2656 = t2321*t2470;
  t2662 = t2372*t2524;
  t2667 = t2656 + t2662;
  t2673 = Cos(var1[20]);
  t2675 = -1.*t2673;
  t2676 = 1. + t2675;
  t2678 = Sin(var1[20]);
  t2682 = t2574*t2612;
  t2685 = t2528*t2667;
  t2686 = t2682 + t2685;
  t2705 = t2528*t2612;
  t2712 = -1.*t2574*t2667;
  t2719 = t2705 + t2712;
  t2761 = Cos(var1[21]);
  t2772 = -1.*t2761;
  t2783 = 1. + t2772;
  t2801 = Sin(var1[21]);
  t2807 = -1.*t2678*t2686;
  t2808 = t2673*t2719;
  t2809 = t2807 + t2808;
  t2826 = t2673*t2686;
  t2830 = t2678*t2719;
  t2832 = t2826 + t2830;
  t1690 = 0.135*t1647;
  t1747 = 0. + t1690;
  t1568 = -0.049*t1508;
  t1622 = -0.135*t1615;
  t1623 = 0. + t1568 + t1622;
  t2866 = Cos(var1[3]);
  t1865 = -1.*t1825;
  t1868 = 1. + t1865;
  t1892 = -0.135*t1868;
  t1941 = 0. + t1892;
  t2889 = Sin(var1[3]);
  t1971 = -1.*t1970;
  t1972 = 1. + t1971;
  t1974 = -0.135*t1972;
  t1976 = 0. + t1974;
  t2919 = t1121*t2889;
  t2922 = t2866*t1766*t1960;
  t2924 = t2919 + t2922;
  t1998 = 0.135*t1991;
  t2026 = 0. + t1998;
  t2091 = -0.09*t2082;
  t2121 = 0.049*t2108;
  t2139 = 0. + t2091 + t2121;
  t2927 = t2866*t1082*t1647;
  t2928 = t1825*t2924;
  t2930 = t2927 + t2928;
  t2935 = t1825*t2866*t1082;
  t2936 = -1.*t1647*t2924;
  t2937 = t2935 + t2936;
  t2199 = -0.135*t1508;
  t2202 = 0.049*t1615;
  t2203 = 0. + t2199 + t2202;
  t2880 = -1.*t2866*t1121*t1766;
  t2901 = t2889*t1960;
  t2912 = t2880 + t2901;
  t2991 = t1970*t2930;
  t2999 = t1991*t2937;
  t3007 = t2991 + t2999;
  t2241 = -0.049*t2082;
  t2245 = -0.09*t2108;
  t2260 = 0. + t2241 + t2245;
  t2361 = -0.049*t2340;
  t2398 = -0.21*t2372;
  t2404 = 0. + t2361 + t2398;
  t2948 = -1.*t1991*t2930;
  t2952 = t1970*t2937;
  t2962 = t2948 + t2952;
  t3082 = t1171*t2912;
  t3084 = t1615*t3007;
  t3085 = t3082 + t3084;
  t2505 = -0.21*t2340;
  t2513 = 0.049*t2372;
  t2515 = 0. + t2505 + t2513;
  t2562 = -0.2707*t2555;
  t2583 = 0.0016*t2574;
  t2603 = 0. + t2562 + t2583;
  t3089 = t2108*t2962;
  t3094 = t2076*t3085;
  t3096 = t3089 + t3094;
  t3154 = t2076*t2962;
  t3155 = -1.*t2108*t3085;
  t3158 = t3154 + t3155;
  t2633 = -0.0016*t2555;
  t2640 = -0.2707*t2574;
  t2652 = 0. + t2633 + t2640;
  t2677 = 0.0184*t2676;
  t2680 = -0.7055*t2678;
  t2681 = 0. + t2677 + t2680;
  t3181 = -1.*t2372*t3096;
  t3185 = t2321*t3158;
  t3197 = t3181 + t3185;
  t3296 = t2321*t3096;
  t3327 = t2372*t3158;
  t3350 = t3296 + t3327;
  t2698 = -0.7055*t2676;
  t2703 = -0.0184*t2678;
  t2704 = 0. + t2698 + t2703;
  t2793 = -1.1135*t2783;
  t2803 = 0.0216*t2801;
  t2805 = 0. + t2793 + t2803;
  t3416 = t2574*t3197;
  t3420 = t2528*t3350;
  t3430 = t3416 + t3420;
  t3434 = t2528*t3197;
  t3453 = -1.*t2574*t3350;
  t3465 = t3434 + t3453;
  t2813 = -0.0216*t2783;
  t2814 = -1.1135*t2801;
  t2816 = 0. + t2813 + t2814;
  t3471 = -1.*t2678*t3430;
  t3477 = t2673*t3465;
  t3498 = t3471 + t3477;
  t3509 = t2673*t3430;
  t3530 = t2678*t3465;
  t3533 = t3509 + t3530;
  t3692 = t2866*t1121;
  t3693 = -1.*t2889*t1766*t1960;
  t3703 = t3692 + t3693;
  t3727 = -1.*t1082*t1647*t2889;
  t3731 = t1825*t3703;
  t3755 = t3727 + t3731;
  t3770 = -1.*t1825*t1082*t2889;
  t3774 = -1.*t1647*t3703;
  t3778 = t3770 + t3774;
  t3664 = t1121*t2889*t1766;
  t3672 = t2866*t1960;
  t3684 = t3664 + t3672;
  t3895 = t1970*t3755;
  t3909 = t1991*t3778;
  t3913 = t3895 + t3909;
  t3874 = -1.*t1991*t3755;
  t3876 = t1970*t3778;
  t3879 = t3874 + t3876;
  t3980 = t1171*t3684;
  t3987 = t1615*t3913;
  t4003 = t3980 + t3987;
  t4007 = t2108*t3879;
  t4009 = t2076*t4003;
  t4010 = t4007 + t4009;
  t4017 = t2076*t3879;
  t4035 = -1.*t2108*t4003;
  t4051 = t4017 + t4035;
  t4055 = -1.*t2372*t4010;
  t4057 = t2321*t4051;
  t4066 = t4055 + t4057;
  t4072 = t2321*t4010;
  t4081 = t2372*t4051;
  t4088 = t4072 + t4081;
  t4116 = t2574*t4066;
  t4117 = t2528*t4088;
  t4134 = t4116 + t4117;
  t4150 = t2528*t4066;
  t4178 = -1.*t2574*t4088;
  t4179 = t4150 + t4178;
  t4202 = -1.*t2678*t4134;
  t4210 = t2673*t4179;
  t4226 = t4202 + t4210;
  t4250 = t2673*t4134;
  t4258 = t2678*t4179;
  t4274 = t4250 + t4258;
  p_output1[0]=Sqrt(Power(0. + t1082*t1121*t1623 + t1747*t1766 - 1.*t1082*t1941*t1960 + t1976*t1984 + t2026*t2072 + t2139*t2182 + t2203*t2216 - 0.1305*(-1.*t1082*t1121*t1615 + t1171*t2216) + t2260*t2310 + t2404*t2470 + t2515*t2524 + t2603*t2612 + t2652*t2667 + t2681*t2686 + t2704*t2719 + t2805*t2809 + t2816*t2832 + 0.0306*(t2801*t2809 + t2761*t2832) - 1.1312*(t2761*t2809 - 1.*t2801*t2832),2) + Power(0. + t1082*t1747*t2866 + t1623*t2912 + t1941*t2924 + t1976*t2930 + t2026*t2937 + t2139*t2962 + t2203*t3007 - 0.1305*(-1.*t1615*t2912 + t1171*t3007) + t2260*t3085 + t2404*t3096 + t2515*t3158 + t2603*t3197 + t2652*t3350 + t2681*t3430 + t2704*t3465 + t2805*t3498 + t2816*t3533 + 0.0306*(t2801*t3498 + t2761*t3533) - 1.1312*(t2761*t3498 - 1.*t2801*t3533),2) + Power(0. - 1.*t1082*t1747*t2889 + t1623*t3684 + t1941*t3703 + t1976*t3755 + t2026*t3778 + t2139*t3879 + t2203*t3913 - 0.1305*(-1.*t1615*t3684 + t1171*t3913) + t2260*t4003 + t2404*t4010 + t2515*t4051 + t2603*t4066 + t2652*t4088 + t2681*t4134 + t2704*t4179 + t2805*t4226 + t2816*t4274 + 0.0306*(t2801*t4226 + t2761*t4274) - 1.1312*(t2761*t4226 - 1.*t2801*t4274),2));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Body2ToeDistance_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void Body2ToeDistance_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
