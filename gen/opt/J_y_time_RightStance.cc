/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:30:04 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t2502;
  double t1858;
  double t2249;
  double t2409;
  double t2477;
  double t2489;
  double t2506;
  double t2518;
  double t2520;
  double t2521;
  double t2523;
  double t2526;
  double t2536;
  double t2553;
  double t2555;
  double t2568;
  double t2574;
  double t2577;
  double t2596;
  double t2601;
  double t2610;
  double t2624;
  double t2628;
  double t2638;
  double t2721;
  double t2726;
  double t2754;
  double t2757;
  double t2703;
  double t2704;
  double t2710;
  double t2713;
  double t2714;
  double t2716;
  double t2722;
  t2502 = -1.*var4[1];
  t1858 = -1. + var5[0];
  t2249 = -1. + var6[0];
  t2409 = 1/t2249;
  t2477 = -1.*t1858*t2409;
  t2489 = 1. + t2477;
  t2506 = var4[0] + t2502;
  t2518 = Power(t2506,-5);
  t2520 = -1.*var1[0];
  t2521 = t2520 + var1[1];
  t2523 = t1858*t2409*t2521;
  t2526 = t2502 + var1[0] + t2523;
  t2536 = Power(t2526,4);
  t2553 = Power(t2506,-4);
  t2555 = Power(t2526,3);
  t2568 = 1/t2506;
  t2574 = -1.*t2568*t2526;
  t2577 = 1. + t2574;
  t2596 = Power(t2506,-3);
  t2601 = Power(t2526,2);
  t2610 = Power(t2577,2);
  t2624 = Power(t2506,-2);
  t2628 = Power(t2577,3);
  t2638 = Power(t2577,4);
  t2721 = Power(t2526,5);
  t2726 = Power(t2506,-6);
  t2754 = -1.*t2624*t2526;
  t2757 = t2568 + t2754;
  t2703 = Power(t2577,5);
  t2704 = -1.*t2703;
  t2710 = -5.*t2568*t2526*t2638;
  t2713 = -10.*t2624*t2601*t2628;
  t2714 = -10.*t2596*t2555*t2610;
  t2716 = -5.*t2553*t2536*t2577;
  t2722 = -1.*t2518*t2721;
  p_output1[0]=5.*t2489*t2568*t2638*var3[0] + 20.*t2489*t2526*t2624*t2628*var3[10] - 5.*t2489*t2568*t2638*var3[10] + 30.*t2489*t2596*t2601*t2610*var3[20] - 20.*t2489*t2526*t2624*t2628*var3[20] + 20.*t2489*t2553*t2555*t2577*var3[30] - 30.*t2489*t2596*t2601*t2610*var3[30] + 5.*t2489*t2518*t2536*var3[40] - 20.*t2489*t2553*t2555*t2577*var3[40] - 5.*t2489*t2518*t2536*var3[50];
  p_output1[1]=5.*t1858*t2409*t2568*t2638*var3[0] + 20.*t1858*t2409*t2526*t2624*t2628*var3[10] - 5.*t1858*t2409*t2568*t2638*var3[10] + 30.*t1858*t2409*t2596*t2601*t2610*var3[20] - 20.*t1858*t2409*t2526*t2624*t2628*var3[20] + 20.*t1858*t2409*t2553*t2555*t2577*var3[30] - 30.*t1858*t2409*t2596*t2601*t2610*var3[30] + 5.*t1858*t2409*t2518*t2536*var3[40] - 20.*t1858*t2409*t2553*t2555*t2577*var3[40] - 5.*t1858*t2409*t2518*t2536*var3[50];
  p_output1[2]=1.;
  p_output1[3]=t2704;
  p_output1[4]=t2710;
  p_output1[5]=t2713;
  p_output1[6]=t2714;
  p_output1[7]=t2716;
  p_output1[8]=t2722;
  p_output1[9]=-5.*t2526*t2624*t2638*var3[0] - 20.*t2596*t2601*t2628*var3[10] + 5.*t2526*t2624*t2638*var3[10] - 30.*t2553*t2555*t2610*var3[20] + 20.*t2596*t2601*t2628*var3[20] - 20.*t2518*t2536*t2577*var3[30] + 30.*t2553*t2555*t2610*var3[30] + 20.*t2518*t2536*t2577*var3[40] - 5.*t2721*t2726*var3[40] + 5.*t2721*t2726*var3[50];
  p_output1[10]=-5.*t2638*t2757*var3[0] + 5.*t2568*t2638*var3[10] - 5.*t2526*t2624*t2638*var3[10] - 20.*t2526*t2568*t2628*t2757*var3[10] - 20.*t2596*t2601*t2628*var3[20] + 20.*t2526*t2624*t2628*var3[20] - 30.*t2601*t2610*t2624*t2757*var3[20] - 30.*t2553*t2555*t2610*var3[30] + 30.*t2596*t2601*t2610*var3[30] - 20.*t2555*t2577*t2596*t2757*var3[30] - 20.*t2518*t2536*t2577*var3[40] + 20.*t2553*t2555*t2577*var3[40] - 5.*t2536*t2553*t2757*var3[40] + 5.*t2518*t2536*var3[50] - 5.*t2721*t2726*var3[50];
  p_output1[11]=5.*t2489*t2568*t2638*var3[1] + 20.*t2489*t2526*t2624*t2628*var3[11] - 5.*t2489*t2568*t2638*var3[11] + 30.*t2489*t2596*t2601*t2610*var3[21] - 20.*t2489*t2526*t2624*t2628*var3[21] + 20.*t2489*t2553*t2555*t2577*var3[31] - 30.*t2489*t2596*t2601*t2610*var3[31] + 5.*t2489*t2518*t2536*var3[41] - 20.*t2489*t2553*t2555*t2577*var3[41] - 5.*t2489*t2518*t2536*var3[51];
  p_output1[12]=5.*t1858*t2409*t2568*t2638*var3[1] + 20.*t1858*t2409*t2526*t2624*t2628*var3[11] - 5.*t1858*t2409*t2568*t2638*var3[11] + 30.*t1858*t2409*t2596*t2601*t2610*var3[21] - 20.*t1858*t2409*t2526*t2624*t2628*var3[21] + 20.*t1858*t2409*t2553*t2555*t2577*var3[31] - 30.*t1858*t2409*t2596*t2601*t2610*var3[31] + 5.*t1858*t2409*t2518*t2536*var3[41] - 20.*t1858*t2409*t2553*t2555*t2577*var3[41] - 5.*t1858*t2409*t2518*t2536*var3[51];
  p_output1[13]=1.;
  p_output1[14]=t2704;
  p_output1[15]=t2710;
  p_output1[16]=t2713;
  p_output1[17]=t2714;
  p_output1[18]=t2716;
  p_output1[19]=t2722;
  p_output1[20]=-5.*t2526*t2624*t2638*var3[1] - 20.*t2596*t2601*t2628*var3[11] + 5.*t2526*t2624*t2638*var3[11] - 30.*t2553*t2555*t2610*var3[21] + 20.*t2596*t2601*t2628*var3[21] - 20.*t2518*t2536*t2577*var3[31] + 30.*t2553*t2555*t2610*var3[31] + 20.*t2518*t2536*t2577*var3[41] - 5.*t2721*t2726*var3[41] + 5.*t2721*t2726*var3[51];
  p_output1[21]=-5.*t2638*t2757*var3[1] + 5.*t2568*t2638*var3[11] - 5.*t2526*t2624*t2638*var3[11] - 20.*t2526*t2568*t2628*t2757*var3[11] - 20.*t2596*t2601*t2628*var3[21] + 20.*t2526*t2624*t2628*var3[21] - 30.*t2601*t2610*t2624*t2757*var3[21] - 30.*t2553*t2555*t2610*var3[31] + 30.*t2596*t2601*t2610*var3[31] - 20.*t2555*t2577*t2596*t2757*var3[31] - 20.*t2518*t2536*t2577*var3[41] + 20.*t2553*t2555*t2577*var3[41] - 5.*t2536*t2553*t2757*var3[41] + 5.*t2518*t2536*var3[51] - 5.*t2721*t2726*var3[51];
  p_output1[22]=5.*t2489*t2568*t2638*var3[2] + 20.*t2489*t2526*t2624*t2628*var3[12] - 5.*t2489*t2568*t2638*var3[12] + 30.*t2489*t2596*t2601*t2610*var3[22] - 20.*t2489*t2526*t2624*t2628*var3[22] + 20.*t2489*t2553*t2555*t2577*var3[32] - 30.*t2489*t2596*t2601*t2610*var3[32] + 5.*t2489*t2518*t2536*var3[42] - 20.*t2489*t2553*t2555*t2577*var3[42] - 5.*t2489*t2518*t2536*var3[52];
  p_output1[23]=5.*t1858*t2409*t2568*t2638*var3[2] + 20.*t1858*t2409*t2526*t2624*t2628*var3[12] - 5.*t1858*t2409*t2568*t2638*var3[12] + 30.*t1858*t2409*t2596*t2601*t2610*var3[22] - 20.*t1858*t2409*t2526*t2624*t2628*var3[22] + 20.*t1858*t2409*t2553*t2555*t2577*var3[32] - 30.*t1858*t2409*t2596*t2601*t2610*var3[32] + 5.*t1858*t2409*t2518*t2536*var3[42] - 20.*t1858*t2409*t2553*t2555*t2577*var3[42] - 5.*t1858*t2409*t2518*t2536*var3[52];
  p_output1[24]=1.;
  p_output1[25]=t2704;
  p_output1[26]=t2710;
  p_output1[27]=t2713;
  p_output1[28]=t2714;
  p_output1[29]=t2716;
  p_output1[30]=t2722;
  p_output1[31]=-5.*t2526*t2624*t2638*var3[2] - 20.*t2596*t2601*t2628*var3[12] + 5.*t2526*t2624*t2638*var3[12] - 30.*t2553*t2555*t2610*var3[22] + 20.*t2596*t2601*t2628*var3[22] - 20.*t2518*t2536*t2577*var3[32] + 30.*t2553*t2555*t2610*var3[32] + 20.*t2518*t2536*t2577*var3[42] - 5.*t2721*t2726*var3[42] + 5.*t2721*t2726*var3[52];
  p_output1[32]=-5.*t2638*t2757*var3[2] + 5.*t2568*t2638*var3[12] - 5.*t2526*t2624*t2638*var3[12] - 20.*t2526*t2568*t2628*t2757*var3[12] - 20.*t2596*t2601*t2628*var3[22] + 20.*t2526*t2624*t2628*var3[22] - 30.*t2601*t2610*t2624*t2757*var3[22] - 30.*t2553*t2555*t2610*var3[32] + 30.*t2596*t2601*t2610*var3[32] - 20.*t2555*t2577*t2596*t2757*var3[32] - 20.*t2518*t2536*t2577*var3[42] + 20.*t2553*t2555*t2577*var3[42] - 5.*t2536*t2553*t2757*var3[42] + 5.*t2518*t2536*var3[52] - 5.*t2721*t2726*var3[52];
  p_output1[33]=5.*t2489*t2568*t2638*var3[3] + 20.*t2489*t2526*t2624*t2628*var3[13] - 5.*t2489*t2568*t2638*var3[13] + 30.*t2489*t2596*t2601*t2610*var3[23] - 20.*t2489*t2526*t2624*t2628*var3[23] + 20.*t2489*t2553*t2555*t2577*var3[33] - 30.*t2489*t2596*t2601*t2610*var3[33] + 5.*t2489*t2518*t2536*var3[43] - 20.*t2489*t2553*t2555*t2577*var3[43] - 5.*t2489*t2518*t2536*var3[53];
  p_output1[34]=5.*t1858*t2409*t2568*t2638*var3[3] + 20.*t1858*t2409*t2526*t2624*t2628*var3[13] - 5.*t1858*t2409*t2568*t2638*var3[13] + 30.*t1858*t2409*t2596*t2601*t2610*var3[23] - 20.*t1858*t2409*t2526*t2624*t2628*var3[23] + 20.*t1858*t2409*t2553*t2555*t2577*var3[33] - 30.*t1858*t2409*t2596*t2601*t2610*var3[33] + 5.*t1858*t2409*t2518*t2536*var3[43] - 20.*t1858*t2409*t2553*t2555*t2577*var3[43] - 5.*t1858*t2409*t2518*t2536*var3[53];
  p_output1[35]=1.;
  p_output1[36]=t2704;
  p_output1[37]=t2710;
  p_output1[38]=t2713;
  p_output1[39]=t2714;
  p_output1[40]=t2716;
  p_output1[41]=t2722;
  p_output1[42]=-5.*t2526*t2624*t2638*var3[3] - 20.*t2596*t2601*t2628*var3[13] + 5.*t2526*t2624*t2638*var3[13] - 30.*t2553*t2555*t2610*var3[23] + 20.*t2596*t2601*t2628*var3[23] - 20.*t2518*t2536*t2577*var3[33] + 30.*t2553*t2555*t2610*var3[33] + 20.*t2518*t2536*t2577*var3[43] - 5.*t2721*t2726*var3[43] + 5.*t2721*t2726*var3[53];
  p_output1[43]=-5.*t2638*t2757*var3[3] + 5.*t2568*t2638*var3[13] - 5.*t2526*t2624*t2638*var3[13] - 20.*t2526*t2568*t2628*t2757*var3[13] - 20.*t2596*t2601*t2628*var3[23] + 20.*t2526*t2624*t2628*var3[23] - 30.*t2601*t2610*t2624*t2757*var3[23] - 30.*t2553*t2555*t2610*var3[33] + 30.*t2596*t2601*t2610*var3[33] - 20.*t2555*t2577*t2596*t2757*var3[33] - 20.*t2518*t2536*t2577*var3[43] + 20.*t2553*t2555*t2577*var3[43] - 5.*t2536*t2553*t2757*var3[43] + 5.*t2518*t2536*var3[53] - 5.*t2721*t2726*var3[53];
  p_output1[44]=5.*t2489*t2568*t2638*var3[4] + 20.*t2489*t2526*t2624*t2628*var3[14] - 5.*t2489*t2568*t2638*var3[14] + 30.*t2489*t2596*t2601*t2610*var3[24] - 20.*t2489*t2526*t2624*t2628*var3[24] + 20.*t2489*t2553*t2555*t2577*var3[34] - 30.*t2489*t2596*t2601*t2610*var3[34] + 5.*t2489*t2518*t2536*var3[44] - 20.*t2489*t2553*t2555*t2577*var3[44] - 5.*t2489*t2518*t2536*var3[54];
  p_output1[45]=5.*t1858*t2409*t2568*t2638*var3[4] + 20.*t1858*t2409*t2526*t2624*t2628*var3[14] - 5.*t1858*t2409*t2568*t2638*var3[14] + 30.*t1858*t2409*t2596*t2601*t2610*var3[24] - 20.*t1858*t2409*t2526*t2624*t2628*var3[24] + 20.*t1858*t2409*t2553*t2555*t2577*var3[34] - 30.*t1858*t2409*t2596*t2601*t2610*var3[34] + 5.*t1858*t2409*t2518*t2536*var3[44] - 20.*t1858*t2409*t2553*t2555*t2577*var3[44] - 5.*t1858*t2409*t2518*t2536*var3[54];
  p_output1[46]=1.;
  p_output1[47]=t2704;
  p_output1[48]=t2710;
  p_output1[49]=t2713;
  p_output1[50]=t2714;
  p_output1[51]=t2716;
  p_output1[52]=t2722;
  p_output1[53]=-5.*t2526*t2624*t2638*var3[4] - 20.*t2596*t2601*t2628*var3[14] + 5.*t2526*t2624*t2638*var3[14] - 30.*t2553*t2555*t2610*var3[24] + 20.*t2596*t2601*t2628*var3[24] - 20.*t2518*t2536*t2577*var3[34] + 30.*t2553*t2555*t2610*var3[34] + 20.*t2518*t2536*t2577*var3[44] - 5.*t2721*t2726*var3[44] + 5.*t2721*t2726*var3[54];
  p_output1[54]=-5.*t2638*t2757*var3[4] + 5.*t2568*t2638*var3[14] - 5.*t2526*t2624*t2638*var3[14] - 20.*t2526*t2568*t2628*t2757*var3[14] - 20.*t2596*t2601*t2628*var3[24] + 20.*t2526*t2624*t2628*var3[24] - 30.*t2601*t2610*t2624*t2757*var3[24] - 30.*t2553*t2555*t2610*var3[34] + 30.*t2596*t2601*t2610*var3[34] - 20.*t2555*t2577*t2596*t2757*var3[34] - 20.*t2518*t2536*t2577*var3[44] + 20.*t2553*t2555*t2577*var3[44] - 5.*t2536*t2553*t2757*var3[44] + 5.*t2518*t2536*var3[54] - 5.*t2721*t2726*var3[54];
  p_output1[55]=5.*t2489*t2568*t2638*var3[5] + 20.*t2489*t2526*t2624*t2628*var3[15] - 5.*t2489*t2568*t2638*var3[15] + 30.*t2489*t2596*t2601*t2610*var3[25] - 20.*t2489*t2526*t2624*t2628*var3[25] + 20.*t2489*t2553*t2555*t2577*var3[35] - 30.*t2489*t2596*t2601*t2610*var3[35] + 5.*t2489*t2518*t2536*var3[45] - 20.*t2489*t2553*t2555*t2577*var3[45] - 5.*t2489*t2518*t2536*var3[55];
  p_output1[56]=5.*t1858*t2409*t2568*t2638*var3[5] + 20.*t1858*t2409*t2526*t2624*t2628*var3[15] - 5.*t1858*t2409*t2568*t2638*var3[15] + 30.*t1858*t2409*t2596*t2601*t2610*var3[25] - 20.*t1858*t2409*t2526*t2624*t2628*var3[25] + 20.*t1858*t2409*t2553*t2555*t2577*var3[35] - 30.*t1858*t2409*t2596*t2601*t2610*var3[35] + 5.*t1858*t2409*t2518*t2536*var3[45] - 20.*t1858*t2409*t2553*t2555*t2577*var3[45] - 5.*t1858*t2409*t2518*t2536*var3[55];
  p_output1[57]=1.;
  p_output1[58]=t2704;
  p_output1[59]=t2710;
  p_output1[60]=t2713;
  p_output1[61]=t2714;
  p_output1[62]=t2716;
  p_output1[63]=t2722;
  p_output1[64]=-5.*t2526*t2624*t2638*var3[5] - 20.*t2596*t2601*t2628*var3[15] + 5.*t2526*t2624*t2638*var3[15] - 30.*t2553*t2555*t2610*var3[25] + 20.*t2596*t2601*t2628*var3[25] - 20.*t2518*t2536*t2577*var3[35] + 30.*t2553*t2555*t2610*var3[35] + 20.*t2518*t2536*t2577*var3[45] - 5.*t2721*t2726*var3[45] + 5.*t2721*t2726*var3[55];
  p_output1[65]=-5.*t2638*t2757*var3[5] + 5.*t2568*t2638*var3[15] - 5.*t2526*t2624*t2638*var3[15] - 20.*t2526*t2568*t2628*t2757*var3[15] - 20.*t2596*t2601*t2628*var3[25] + 20.*t2526*t2624*t2628*var3[25] - 30.*t2601*t2610*t2624*t2757*var3[25] - 30.*t2553*t2555*t2610*var3[35] + 30.*t2596*t2601*t2610*var3[35] - 20.*t2555*t2577*t2596*t2757*var3[35] - 20.*t2518*t2536*t2577*var3[45] + 20.*t2553*t2555*t2577*var3[45] - 5.*t2536*t2553*t2757*var3[45] + 5.*t2518*t2536*var3[55] - 5.*t2721*t2726*var3[55];
  p_output1[66]=5.*t2489*t2568*t2638*var3[6] + 20.*t2489*t2526*t2624*t2628*var3[16] - 5.*t2489*t2568*t2638*var3[16] + 30.*t2489*t2596*t2601*t2610*var3[26] - 20.*t2489*t2526*t2624*t2628*var3[26] + 20.*t2489*t2553*t2555*t2577*var3[36] - 30.*t2489*t2596*t2601*t2610*var3[36] + 5.*t2489*t2518*t2536*var3[46] - 20.*t2489*t2553*t2555*t2577*var3[46] - 5.*t2489*t2518*t2536*var3[56];
  p_output1[67]=5.*t1858*t2409*t2568*t2638*var3[6] + 20.*t1858*t2409*t2526*t2624*t2628*var3[16] - 5.*t1858*t2409*t2568*t2638*var3[16] + 30.*t1858*t2409*t2596*t2601*t2610*var3[26] - 20.*t1858*t2409*t2526*t2624*t2628*var3[26] + 20.*t1858*t2409*t2553*t2555*t2577*var3[36] - 30.*t1858*t2409*t2596*t2601*t2610*var3[36] + 5.*t1858*t2409*t2518*t2536*var3[46] - 20.*t1858*t2409*t2553*t2555*t2577*var3[46] - 5.*t1858*t2409*t2518*t2536*var3[56];
  p_output1[68]=1.;
  p_output1[69]=t2704;
  p_output1[70]=t2710;
  p_output1[71]=t2713;
  p_output1[72]=t2714;
  p_output1[73]=t2716;
  p_output1[74]=t2722;
  p_output1[75]=-5.*t2526*t2624*t2638*var3[6] - 20.*t2596*t2601*t2628*var3[16] + 5.*t2526*t2624*t2638*var3[16] - 30.*t2553*t2555*t2610*var3[26] + 20.*t2596*t2601*t2628*var3[26] - 20.*t2518*t2536*t2577*var3[36] + 30.*t2553*t2555*t2610*var3[36] + 20.*t2518*t2536*t2577*var3[46] - 5.*t2721*t2726*var3[46] + 5.*t2721*t2726*var3[56];
  p_output1[76]=-5.*t2638*t2757*var3[6] + 5.*t2568*t2638*var3[16] - 5.*t2526*t2624*t2638*var3[16] - 20.*t2526*t2568*t2628*t2757*var3[16] - 20.*t2596*t2601*t2628*var3[26] + 20.*t2526*t2624*t2628*var3[26] - 30.*t2601*t2610*t2624*t2757*var3[26] - 30.*t2553*t2555*t2610*var3[36] + 30.*t2596*t2601*t2610*var3[36] - 20.*t2555*t2577*t2596*t2757*var3[36] - 20.*t2518*t2536*t2577*var3[46] + 20.*t2553*t2555*t2577*var3[46] - 5.*t2536*t2553*t2757*var3[46] + 5.*t2518*t2536*var3[56] - 5.*t2721*t2726*var3[56];
  p_output1[77]=5.*t2489*t2568*t2638*var3[7] + 20.*t2489*t2526*t2624*t2628*var3[17] - 5.*t2489*t2568*t2638*var3[17] + 30.*t2489*t2596*t2601*t2610*var3[27] - 20.*t2489*t2526*t2624*t2628*var3[27] + 20.*t2489*t2553*t2555*t2577*var3[37] - 30.*t2489*t2596*t2601*t2610*var3[37] + 5.*t2489*t2518*t2536*var3[47] - 20.*t2489*t2553*t2555*t2577*var3[47] - 5.*t2489*t2518*t2536*var3[57];
  p_output1[78]=5.*t1858*t2409*t2568*t2638*var3[7] + 20.*t1858*t2409*t2526*t2624*t2628*var3[17] - 5.*t1858*t2409*t2568*t2638*var3[17] + 30.*t1858*t2409*t2596*t2601*t2610*var3[27] - 20.*t1858*t2409*t2526*t2624*t2628*var3[27] + 20.*t1858*t2409*t2553*t2555*t2577*var3[37] - 30.*t1858*t2409*t2596*t2601*t2610*var3[37] + 5.*t1858*t2409*t2518*t2536*var3[47] - 20.*t1858*t2409*t2553*t2555*t2577*var3[47] - 5.*t1858*t2409*t2518*t2536*var3[57];
  p_output1[79]=1.;
  p_output1[80]=t2704;
  p_output1[81]=t2710;
  p_output1[82]=t2713;
  p_output1[83]=t2714;
  p_output1[84]=t2716;
  p_output1[85]=t2722;
  p_output1[86]=-5.*t2526*t2624*t2638*var3[7] - 20.*t2596*t2601*t2628*var3[17] + 5.*t2526*t2624*t2638*var3[17] - 30.*t2553*t2555*t2610*var3[27] + 20.*t2596*t2601*t2628*var3[27] - 20.*t2518*t2536*t2577*var3[37] + 30.*t2553*t2555*t2610*var3[37] + 20.*t2518*t2536*t2577*var3[47] - 5.*t2721*t2726*var3[47] + 5.*t2721*t2726*var3[57];
  p_output1[87]=-5.*t2638*t2757*var3[7] + 5.*t2568*t2638*var3[17] - 5.*t2526*t2624*t2638*var3[17] - 20.*t2526*t2568*t2628*t2757*var3[17] - 20.*t2596*t2601*t2628*var3[27] + 20.*t2526*t2624*t2628*var3[27] - 30.*t2601*t2610*t2624*t2757*var3[27] - 30.*t2553*t2555*t2610*var3[37] + 30.*t2596*t2601*t2610*var3[37] - 20.*t2555*t2577*t2596*t2757*var3[37] - 20.*t2518*t2536*t2577*var3[47] + 20.*t2553*t2555*t2577*var3[47] - 5.*t2536*t2553*t2757*var3[47] + 5.*t2518*t2536*var3[57] - 5.*t2721*t2726*var3[57];
  p_output1[88]=5.*t2489*t2568*t2638*var3[8] + 20.*t2489*t2526*t2624*t2628*var3[18] - 5.*t2489*t2568*t2638*var3[18] + 30.*t2489*t2596*t2601*t2610*var3[28] - 20.*t2489*t2526*t2624*t2628*var3[28] + 20.*t2489*t2553*t2555*t2577*var3[38] - 30.*t2489*t2596*t2601*t2610*var3[38] + 5.*t2489*t2518*t2536*var3[48] - 20.*t2489*t2553*t2555*t2577*var3[48] - 5.*t2489*t2518*t2536*var3[58];
  p_output1[89]=5.*t1858*t2409*t2568*t2638*var3[8] + 20.*t1858*t2409*t2526*t2624*t2628*var3[18] - 5.*t1858*t2409*t2568*t2638*var3[18] + 30.*t1858*t2409*t2596*t2601*t2610*var3[28] - 20.*t1858*t2409*t2526*t2624*t2628*var3[28] + 20.*t1858*t2409*t2553*t2555*t2577*var3[38] - 30.*t1858*t2409*t2596*t2601*t2610*var3[38] + 5.*t1858*t2409*t2518*t2536*var3[48] - 20.*t1858*t2409*t2553*t2555*t2577*var3[48] - 5.*t1858*t2409*t2518*t2536*var3[58];
  p_output1[90]=1.;
  p_output1[91]=t2704;
  p_output1[92]=t2710;
  p_output1[93]=t2713;
  p_output1[94]=t2714;
  p_output1[95]=t2716;
  p_output1[96]=t2722;
  p_output1[97]=-5.*t2526*t2624*t2638*var3[8] - 20.*t2596*t2601*t2628*var3[18] + 5.*t2526*t2624*t2638*var3[18] - 30.*t2553*t2555*t2610*var3[28] + 20.*t2596*t2601*t2628*var3[28] - 20.*t2518*t2536*t2577*var3[38] + 30.*t2553*t2555*t2610*var3[38] + 20.*t2518*t2536*t2577*var3[48] - 5.*t2721*t2726*var3[48] + 5.*t2721*t2726*var3[58];
  p_output1[98]=-5.*t2638*t2757*var3[8] + 5.*t2568*t2638*var3[18] - 5.*t2526*t2624*t2638*var3[18] - 20.*t2526*t2568*t2628*t2757*var3[18] - 20.*t2596*t2601*t2628*var3[28] + 20.*t2526*t2624*t2628*var3[28] - 30.*t2601*t2610*t2624*t2757*var3[28] - 30.*t2553*t2555*t2610*var3[38] + 30.*t2596*t2601*t2610*var3[38] - 20.*t2555*t2577*t2596*t2757*var3[38] - 20.*t2518*t2536*t2577*var3[48] + 20.*t2553*t2555*t2577*var3[48] - 5.*t2536*t2553*t2757*var3[48] + 5.*t2518*t2536*var3[58] - 5.*t2721*t2726*var3[58];
  p_output1[99]=5.*t2489*t2568*t2638*var3[9] + 20.*t2489*t2526*t2624*t2628*var3[19] - 5.*t2489*t2568*t2638*var3[19] + 30.*t2489*t2596*t2601*t2610*var3[29] - 20.*t2489*t2526*t2624*t2628*var3[29] + 20.*t2489*t2553*t2555*t2577*var3[39] - 30.*t2489*t2596*t2601*t2610*var3[39] + 5.*t2489*t2518*t2536*var3[49] - 20.*t2489*t2553*t2555*t2577*var3[49] - 5.*t2489*t2518*t2536*var3[59];
  p_output1[100]=5.*t1858*t2409*t2568*t2638*var3[9] + 20.*t1858*t2409*t2526*t2624*t2628*var3[19] - 5.*t1858*t2409*t2568*t2638*var3[19] + 30.*t1858*t2409*t2596*t2601*t2610*var3[29] - 20.*t1858*t2409*t2526*t2624*t2628*var3[29] + 20.*t1858*t2409*t2553*t2555*t2577*var3[39] - 30.*t1858*t2409*t2596*t2601*t2610*var3[39] + 5.*t1858*t2409*t2518*t2536*var3[49] - 20.*t1858*t2409*t2553*t2555*t2577*var3[49] - 5.*t1858*t2409*t2518*t2536*var3[59];
  p_output1[101]=1.;
  p_output1[102]=t2704;
  p_output1[103]=t2710;
  p_output1[104]=t2713;
  p_output1[105]=t2714;
  p_output1[106]=t2716;
  p_output1[107]=t2722;
  p_output1[108]=-5.*t2526*t2624*t2638*var3[9] - 20.*t2596*t2601*t2628*var3[19] + 5.*t2526*t2624*t2638*var3[19] - 30.*t2553*t2555*t2610*var3[29] + 20.*t2596*t2601*t2628*var3[29] - 20.*t2518*t2536*t2577*var3[39] + 30.*t2553*t2555*t2610*var3[39] + 20.*t2518*t2536*t2577*var3[49] - 5.*t2721*t2726*var3[49] + 5.*t2721*t2726*var3[59];
  p_output1[109]=-5.*t2638*t2757*var3[9] + 5.*t2568*t2638*var3[19] - 5.*t2526*t2624*t2638*var3[19] - 20.*t2526*t2568*t2628*t2757*var3[19] - 20.*t2596*t2601*t2628*var3[29] + 20.*t2526*t2624*t2628*var3[29] - 30.*t2601*t2610*t2624*t2757*var3[29] - 30.*t2553*t2555*t2610*var3[39] + 30.*t2596*t2601*t2610*var3[39] - 20.*t2555*t2577*t2596*t2757*var3[39] - 20.*t2518*t2536*t2577*var3[49] + 20.*t2553*t2555*t2577*var3[49] - 5.*t2536*t2553*t2757*var3[49] + 5.*t2518*t2536*var3[59] - 5.*t2721*t2726*var3[59];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 60 && ncols == 1) && 
      !(mrows == 1 && ncols == 60))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 110, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void J_y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
