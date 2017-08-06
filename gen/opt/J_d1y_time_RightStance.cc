/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:17 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t530;
  double t410;
  double t417;
  double t464;
  double t465;
  double t526;
  double t560;
  double t564;
  double t588;
  double t589;
  double t599;
  double t608;
  double t609;
  double t644;
  double t661;
  double t664;
  double t665;
  double t673;
  double t694;
  double t696;
  double t720;
  double t721;
  double t805;
  double t846;
  double t885;
  double t991;
  double t994;
  double t810;
  double t811;
  double t812;
  double t821;
  double t823;
  double t824;
  double t825;
  double t835;
  double t837;
  double t844;
  double t865;
  double t868;
  double t876;
  double t877;
  t530 = -1.*var5[1];
  t410 = -1. + var6[0];
  t417 = -1. + var7[0];
  t464 = 1/t417;
  t465 = -1.*t410*t464;
  t526 = 1. + t465;
  t560 = var5[0] + t530;
  t564 = Power(t560,-5);
  t588 = -1.*var1[0];
  t589 = t588 + var1[1];
  t599 = t410*t464*t589;
  t608 = t530 + var1[0] + t599;
  t609 = Power(t608,3);
  t644 = Power(t560,-4);
  t661 = Power(t608,2);
  t664 = 1/t560;
  t665 = -1.*t664*t608;
  t673 = 1. + t665;
  t694 = Power(t560,-3);
  t696 = Power(t673,2);
  t720 = Power(t560,-2);
  t721 = Power(t673,3);
  t805 = Power(t673,4);
  t846 = Power(t608,4);
  t885 = Power(t560,-6);
  t991 = -1.*t720*t608;
  t994 = t664 + t991;
  t810 = 5.*t664*t805;
  t811 = 20.*t720*t608*t721;
  t812 = -5.*t664*t805;
  t821 = t811 + t812;
  t823 = 30.*t694*t661*t696;
  t824 = -20.*t720*t608*t721;
  t825 = t823 + t824;
  t835 = 20.*t644*t609*t673;
  t837 = -30.*t694*t661*t696;
  t844 = t835 + t837;
  t865 = 5.*t564*t846;
  t868 = -20.*t644*t609*t673;
  t876 = t865 + t868;
  t877 = -5.*t564*t846;
  p_output1[0]=-20.*t526*t720*t721*var4[0] - 60.*t526*t608*t694*t696*var4[10] + 40.*t526*t720*t721*var4[10] - 60.*t526*t644*t661*t673*var4[20] + 120.*t526*t608*t694*t696*var4[20] - 20.*t526*t720*t721*var4[20] - 20.*t526*t564*t609*var4[30] + 120.*t526*t644*t661*t673*var4[30] - 60.*t526*t608*t694*t696*var4[30] + 40.*t526*t564*t609*var4[40] - 60.*t526*t644*t661*t673*var4[40] - 20.*t526*t564*t609*var4[50];
  p_output1[1]=-20.*t410*t464*t720*t721*var4[0] - 60.*t410*t464*t608*t694*t696*var4[10] + 40.*t410*t464*t720*t721*var4[10] - 60.*t410*t464*t644*t661*t673*var4[20] + 120.*t410*t464*t608*t694*t696*var4[20] - 20.*t410*t464*t720*t721*var4[20] - 20.*t410*t464*t564*t609*var4[30] + 120.*t410*t464*t644*t661*t673*var4[30] - 60.*t410*t464*t608*t694*t696*var4[30] + 40.*t410*t464*t564*t609*var4[40] - 60.*t410*t464*t644*t661*t673*var4[40] - 20.*t410*t464*t564*t609*var4[50];
  p_output1[2]=1.;
  p_output1[3]=t810;
  p_output1[4]=t821;
  p_output1[5]=t825;
  p_output1[6]=t844;
  p_output1[7]=t876;
  p_output1[8]=t877;
  p_output1[9]=20.*t608*t694*t721*var4[0] - 5.*t720*t805*var4[0] + 60.*t644*t661*t696*var4[10] - 60.*t608*t694*t721*var4[10] + 5.*t720*t805*var4[10] + 60.*t564*t609*t673*var4[20] - 150.*t644*t661*t696*var4[20] + 40.*t608*t694*t721*var4[20] - 140.*t564*t609*t673*var4[30] + 90.*t644*t661*t696*var4[30] + 20.*t846*t885*var4[30] + 80.*t564*t609*t673*var4[40] - 45.*t846*t885*var4[40] + 25.*t846*t885*var4[50];
  p_output1[10]=5.*t720*t805*var4[0] + 20.*t664*t721*t994*var4[0] + 40.*t608*t694*t721*var4[10] - 20.*t720*t721*var4[10] - 5.*t720*t805*var4[10] + 60.*t608*t696*t720*t994*var4[10] - 20.*t664*t721*t994*var4[10] + 90.*t644*t661*t696*var4[20] - 60.*t608*t694*t696*var4[20] - 40.*t608*t694*t721*var4[20] + 20.*t720*t721*var4[20] + 60.*t661*t673*t694*t994*var4[20] - 60.*t608*t696*t720*t994*var4[20] + 80.*t564*t609*t673*var4[30] - 60.*t644*t661*t673*var4[30] - 90.*t644*t661*t696*var4[30] + 60.*t608*t694*t696*var4[30] + 20.*t609*t644*t994*var4[30] - 60.*t661*t673*t694*t994*var4[30] - 20.*t564*t609*var4[40] - 80.*t564*t609*t673*var4[40] + 60.*t644*t661*t673*var4[40] + 25.*t846*t885*var4[40] - 20.*t609*t644*t994*var4[40] + 20.*t564*t609*var4[50] - 25.*t846*t885*var4[50];
  p_output1[11]=-20.*t526*t720*t721*var4[1] - 60.*t526*t608*t694*t696*var4[11] + 40.*t526*t720*t721*var4[11] - 60.*t526*t644*t661*t673*var4[21] + 120.*t526*t608*t694*t696*var4[21] - 20.*t526*t720*t721*var4[21] - 20.*t526*t564*t609*var4[31] + 120.*t526*t644*t661*t673*var4[31] - 60.*t526*t608*t694*t696*var4[31] + 40.*t526*t564*t609*var4[41] - 60.*t526*t644*t661*t673*var4[41] - 20.*t526*t564*t609*var4[51];
  p_output1[12]=-20.*t410*t464*t720*t721*var4[1] - 60.*t410*t464*t608*t694*t696*var4[11] + 40.*t410*t464*t720*t721*var4[11] - 60.*t410*t464*t644*t661*t673*var4[21] + 120.*t410*t464*t608*t694*t696*var4[21] - 20.*t410*t464*t720*t721*var4[21] - 20.*t410*t464*t564*t609*var4[31] + 120.*t410*t464*t644*t661*t673*var4[31] - 60.*t410*t464*t608*t694*t696*var4[31] + 40.*t410*t464*t564*t609*var4[41] - 60.*t410*t464*t644*t661*t673*var4[41] - 20.*t410*t464*t564*t609*var4[51];
  p_output1[13]=1.;
  p_output1[14]=t810;
  p_output1[15]=t821;
  p_output1[16]=t825;
  p_output1[17]=t844;
  p_output1[18]=t876;
  p_output1[19]=t877;
  p_output1[20]=20.*t608*t694*t721*var4[1] - 5.*t720*t805*var4[1] + 60.*t644*t661*t696*var4[11] - 60.*t608*t694*t721*var4[11] + 5.*t720*t805*var4[11] + 60.*t564*t609*t673*var4[21] - 150.*t644*t661*t696*var4[21] + 40.*t608*t694*t721*var4[21] - 140.*t564*t609*t673*var4[31] + 90.*t644*t661*t696*var4[31] + 20.*t846*t885*var4[31] + 80.*t564*t609*t673*var4[41] - 45.*t846*t885*var4[41] + 25.*t846*t885*var4[51];
  p_output1[21]=5.*t720*t805*var4[1] + 20.*t664*t721*t994*var4[1] + 40.*t608*t694*t721*var4[11] - 20.*t720*t721*var4[11] - 5.*t720*t805*var4[11] + 60.*t608*t696*t720*t994*var4[11] - 20.*t664*t721*t994*var4[11] + 90.*t644*t661*t696*var4[21] - 60.*t608*t694*t696*var4[21] - 40.*t608*t694*t721*var4[21] + 20.*t720*t721*var4[21] + 60.*t661*t673*t694*t994*var4[21] - 60.*t608*t696*t720*t994*var4[21] + 80.*t564*t609*t673*var4[31] - 60.*t644*t661*t673*var4[31] - 90.*t644*t661*t696*var4[31] + 60.*t608*t694*t696*var4[31] + 20.*t609*t644*t994*var4[31] - 60.*t661*t673*t694*t994*var4[31] - 20.*t564*t609*var4[41] - 80.*t564*t609*t673*var4[41] + 60.*t644*t661*t673*var4[41] + 25.*t846*t885*var4[41] - 20.*t609*t644*t994*var4[41] + 20.*t564*t609*var4[51] - 25.*t846*t885*var4[51];
  p_output1[22]=-20.*t526*t720*t721*var4[2] - 60.*t526*t608*t694*t696*var4[12] + 40.*t526*t720*t721*var4[12] - 60.*t526*t644*t661*t673*var4[22] + 120.*t526*t608*t694*t696*var4[22] - 20.*t526*t720*t721*var4[22] - 20.*t526*t564*t609*var4[32] + 120.*t526*t644*t661*t673*var4[32] - 60.*t526*t608*t694*t696*var4[32] + 40.*t526*t564*t609*var4[42] - 60.*t526*t644*t661*t673*var4[42] - 20.*t526*t564*t609*var4[52];
  p_output1[23]=-20.*t410*t464*t720*t721*var4[2] - 60.*t410*t464*t608*t694*t696*var4[12] + 40.*t410*t464*t720*t721*var4[12] - 60.*t410*t464*t644*t661*t673*var4[22] + 120.*t410*t464*t608*t694*t696*var4[22] - 20.*t410*t464*t720*t721*var4[22] - 20.*t410*t464*t564*t609*var4[32] + 120.*t410*t464*t644*t661*t673*var4[32] - 60.*t410*t464*t608*t694*t696*var4[32] + 40.*t410*t464*t564*t609*var4[42] - 60.*t410*t464*t644*t661*t673*var4[42] - 20.*t410*t464*t564*t609*var4[52];
  p_output1[24]=1.;
  p_output1[25]=t810;
  p_output1[26]=t821;
  p_output1[27]=t825;
  p_output1[28]=t844;
  p_output1[29]=t876;
  p_output1[30]=t877;
  p_output1[31]=20.*t608*t694*t721*var4[2] - 5.*t720*t805*var4[2] + 60.*t644*t661*t696*var4[12] - 60.*t608*t694*t721*var4[12] + 5.*t720*t805*var4[12] + 60.*t564*t609*t673*var4[22] - 150.*t644*t661*t696*var4[22] + 40.*t608*t694*t721*var4[22] - 140.*t564*t609*t673*var4[32] + 90.*t644*t661*t696*var4[32] + 20.*t846*t885*var4[32] + 80.*t564*t609*t673*var4[42] - 45.*t846*t885*var4[42] + 25.*t846*t885*var4[52];
  p_output1[32]=5.*t720*t805*var4[2] + 20.*t664*t721*t994*var4[2] + 40.*t608*t694*t721*var4[12] - 20.*t720*t721*var4[12] - 5.*t720*t805*var4[12] + 60.*t608*t696*t720*t994*var4[12] - 20.*t664*t721*t994*var4[12] + 90.*t644*t661*t696*var4[22] - 60.*t608*t694*t696*var4[22] - 40.*t608*t694*t721*var4[22] + 20.*t720*t721*var4[22] + 60.*t661*t673*t694*t994*var4[22] - 60.*t608*t696*t720*t994*var4[22] + 80.*t564*t609*t673*var4[32] - 60.*t644*t661*t673*var4[32] - 90.*t644*t661*t696*var4[32] + 60.*t608*t694*t696*var4[32] + 20.*t609*t644*t994*var4[32] - 60.*t661*t673*t694*t994*var4[32] - 20.*t564*t609*var4[42] - 80.*t564*t609*t673*var4[42] + 60.*t644*t661*t673*var4[42] + 25.*t846*t885*var4[42] - 20.*t609*t644*t994*var4[42] + 20.*t564*t609*var4[52] - 25.*t846*t885*var4[52];
  p_output1[33]=-20.*t526*t720*t721*var4[3] - 60.*t526*t608*t694*t696*var4[13] + 40.*t526*t720*t721*var4[13] - 60.*t526*t644*t661*t673*var4[23] + 120.*t526*t608*t694*t696*var4[23] - 20.*t526*t720*t721*var4[23] - 20.*t526*t564*t609*var4[33] + 120.*t526*t644*t661*t673*var4[33] - 60.*t526*t608*t694*t696*var4[33] + 40.*t526*t564*t609*var4[43] - 60.*t526*t644*t661*t673*var4[43] - 20.*t526*t564*t609*var4[53];
  p_output1[34]=-20.*t410*t464*t720*t721*var4[3] - 60.*t410*t464*t608*t694*t696*var4[13] + 40.*t410*t464*t720*t721*var4[13] - 60.*t410*t464*t644*t661*t673*var4[23] + 120.*t410*t464*t608*t694*t696*var4[23] - 20.*t410*t464*t720*t721*var4[23] - 20.*t410*t464*t564*t609*var4[33] + 120.*t410*t464*t644*t661*t673*var4[33] - 60.*t410*t464*t608*t694*t696*var4[33] + 40.*t410*t464*t564*t609*var4[43] - 60.*t410*t464*t644*t661*t673*var4[43] - 20.*t410*t464*t564*t609*var4[53];
  p_output1[35]=1.;
  p_output1[36]=t810;
  p_output1[37]=t821;
  p_output1[38]=t825;
  p_output1[39]=t844;
  p_output1[40]=t876;
  p_output1[41]=t877;
  p_output1[42]=20.*t608*t694*t721*var4[3] - 5.*t720*t805*var4[3] + 60.*t644*t661*t696*var4[13] - 60.*t608*t694*t721*var4[13] + 5.*t720*t805*var4[13] + 60.*t564*t609*t673*var4[23] - 150.*t644*t661*t696*var4[23] + 40.*t608*t694*t721*var4[23] - 140.*t564*t609*t673*var4[33] + 90.*t644*t661*t696*var4[33] + 20.*t846*t885*var4[33] + 80.*t564*t609*t673*var4[43] - 45.*t846*t885*var4[43] + 25.*t846*t885*var4[53];
  p_output1[43]=5.*t720*t805*var4[3] + 20.*t664*t721*t994*var4[3] + 40.*t608*t694*t721*var4[13] - 20.*t720*t721*var4[13] - 5.*t720*t805*var4[13] + 60.*t608*t696*t720*t994*var4[13] - 20.*t664*t721*t994*var4[13] + 90.*t644*t661*t696*var4[23] - 60.*t608*t694*t696*var4[23] - 40.*t608*t694*t721*var4[23] + 20.*t720*t721*var4[23] + 60.*t661*t673*t694*t994*var4[23] - 60.*t608*t696*t720*t994*var4[23] + 80.*t564*t609*t673*var4[33] - 60.*t644*t661*t673*var4[33] - 90.*t644*t661*t696*var4[33] + 60.*t608*t694*t696*var4[33] + 20.*t609*t644*t994*var4[33] - 60.*t661*t673*t694*t994*var4[33] - 20.*t564*t609*var4[43] - 80.*t564*t609*t673*var4[43] + 60.*t644*t661*t673*var4[43] + 25.*t846*t885*var4[43] - 20.*t609*t644*t994*var4[43] + 20.*t564*t609*var4[53] - 25.*t846*t885*var4[53];
  p_output1[44]=-20.*t526*t720*t721*var4[4] - 60.*t526*t608*t694*t696*var4[14] + 40.*t526*t720*t721*var4[14] - 60.*t526*t644*t661*t673*var4[24] + 120.*t526*t608*t694*t696*var4[24] - 20.*t526*t720*t721*var4[24] - 20.*t526*t564*t609*var4[34] + 120.*t526*t644*t661*t673*var4[34] - 60.*t526*t608*t694*t696*var4[34] + 40.*t526*t564*t609*var4[44] - 60.*t526*t644*t661*t673*var4[44] - 20.*t526*t564*t609*var4[54];
  p_output1[45]=-20.*t410*t464*t720*t721*var4[4] - 60.*t410*t464*t608*t694*t696*var4[14] + 40.*t410*t464*t720*t721*var4[14] - 60.*t410*t464*t644*t661*t673*var4[24] + 120.*t410*t464*t608*t694*t696*var4[24] - 20.*t410*t464*t720*t721*var4[24] - 20.*t410*t464*t564*t609*var4[34] + 120.*t410*t464*t644*t661*t673*var4[34] - 60.*t410*t464*t608*t694*t696*var4[34] + 40.*t410*t464*t564*t609*var4[44] - 60.*t410*t464*t644*t661*t673*var4[44] - 20.*t410*t464*t564*t609*var4[54];
  p_output1[46]=1.;
  p_output1[47]=t810;
  p_output1[48]=t821;
  p_output1[49]=t825;
  p_output1[50]=t844;
  p_output1[51]=t876;
  p_output1[52]=t877;
  p_output1[53]=20.*t608*t694*t721*var4[4] - 5.*t720*t805*var4[4] + 60.*t644*t661*t696*var4[14] - 60.*t608*t694*t721*var4[14] + 5.*t720*t805*var4[14] + 60.*t564*t609*t673*var4[24] - 150.*t644*t661*t696*var4[24] + 40.*t608*t694*t721*var4[24] - 140.*t564*t609*t673*var4[34] + 90.*t644*t661*t696*var4[34] + 20.*t846*t885*var4[34] + 80.*t564*t609*t673*var4[44] - 45.*t846*t885*var4[44] + 25.*t846*t885*var4[54];
  p_output1[54]=5.*t720*t805*var4[4] + 20.*t664*t721*t994*var4[4] + 40.*t608*t694*t721*var4[14] - 20.*t720*t721*var4[14] - 5.*t720*t805*var4[14] + 60.*t608*t696*t720*t994*var4[14] - 20.*t664*t721*t994*var4[14] + 90.*t644*t661*t696*var4[24] - 60.*t608*t694*t696*var4[24] - 40.*t608*t694*t721*var4[24] + 20.*t720*t721*var4[24] + 60.*t661*t673*t694*t994*var4[24] - 60.*t608*t696*t720*t994*var4[24] + 80.*t564*t609*t673*var4[34] - 60.*t644*t661*t673*var4[34] - 90.*t644*t661*t696*var4[34] + 60.*t608*t694*t696*var4[34] + 20.*t609*t644*t994*var4[34] - 60.*t661*t673*t694*t994*var4[34] - 20.*t564*t609*var4[44] - 80.*t564*t609*t673*var4[44] + 60.*t644*t661*t673*var4[44] + 25.*t846*t885*var4[44] - 20.*t609*t644*t994*var4[44] + 20.*t564*t609*var4[54] - 25.*t846*t885*var4[54];
  p_output1[55]=-20.*t526*t720*t721*var4[5] - 60.*t526*t608*t694*t696*var4[15] + 40.*t526*t720*t721*var4[15] - 60.*t526*t644*t661*t673*var4[25] + 120.*t526*t608*t694*t696*var4[25] - 20.*t526*t720*t721*var4[25] - 20.*t526*t564*t609*var4[35] + 120.*t526*t644*t661*t673*var4[35] - 60.*t526*t608*t694*t696*var4[35] + 40.*t526*t564*t609*var4[45] - 60.*t526*t644*t661*t673*var4[45] - 20.*t526*t564*t609*var4[55];
  p_output1[56]=-20.*t410*t464*t720*t721*var4[5] - 60.*t410*t464*t608*t694*t696*var4[15] + 40.*t410*t464*t720*t721*var4[15] - 60.*t410*t464*t644*t661*t673*var4[25] + 120.*t410*t464*t608*t694*t696*var4[25] - 20.*t410*t464*t720*t721*var4[25] - 20.*t410*t464*t564*t609*var4[35] + 120.*t410*t464*t644*t661*t673*var4[35] - 60.*t410*t464*t608*t694*t696*var4[35] + 40.*t410*t464*t564*t609*var4[45] - 60.*t410*t464*t644*t661*t673*var4[45] - 20.*t410*t464*t564*t609*var4[55];
  p_output1[57]=1.;
  p_output1[58]=t810;
  p_output1[59]=t821;
  p_output1[60]=t825;
  p_output1[61]=t844;
  p_output1[62]=t876;
  p_output1[63]=t877;
  p_output1[64]=20.*t608*t694*t721*var4[5] - 5.*t720*t805*var4[5] + 60.*t644*t661*t696*var4[15] - 60.*t608*t694*t721*var4[15] + 5.*t720*t805*var4[15] + 60.*t564*t609*t673*var4[25] - 150.*t644*t661*t696*var4[25] + 40.*t608*t694*t721*var4[25] - 140.*t564*t609*t673*var4[35] + 90.*t644*t661*t696*var4[35] + 20.*t846*t885*var4[35] + 80.*t564*t609*t673*var4[45] - 45.*t846*t885*var4[45] + 25.*t846*t885*var4[55];
  p_output1[65]=5.*t720*t805*var4[5] + 20.*t664*t721*t994*var4[5] + 40.*t608*t694*t721*var4[15] - 20.*t720*t721*var4[15] - 5.*t720*t805*var4[15] + 60.*t608*t696*t720*t994*var4[15] - 20.*t664*t721*t994*var4[15] + 90.*t644*t661*t696*var4[25] - 60.*t608*t694*t696*var4[25] - 40.*t608*t694*t721*var4[25] + 20.*t720*t721*var4[25] + 60.*t661*t673*t694*t994*var4[25] - 60.*t608*t696*t720*t994*var4[25] + 80.*t564*t609*t673*var4[35] - 60.*t644*t661*t673*var4[35] - 90.*t644*t661*t696*var4[35] + 60.*t608*t694*t696*var4[35] + 20.*t609*t644*t994*var4[35] - 60.*t661*t673*t694*t994*var4[35] - 20.*t564*t609*var4[45] - 80.*t564*t609*t673*var4[45] + 60.*t644*t661*t673*var4[45] + 25.*t846*t885*var4[45] - 20.*t609*t644*t994*var4[45] + 20.*t564*t609*var4[55] - 25.*t846*t885*var4[55];
  p_output1[66]=-20.*t526*t720*t721*var4[6] - 60.*t526*t608*t694*t696*var4[16] + 40.*t526*t720*t721*var4[16] - 60.*t526*t644*t661*t673*var4[26] + 120.*t526*t608*t694*t696*var4[26] - 20.*t526*t720*t721*var4[26] - 20.*t526*t564*t609*var4[36] + 120.*t526*t644*t661*t673*var4[36] - 60.*t526*t608*t694*t696*var4[36] + 40.*t526*t564*t609*var4[46] - 60.*t526*t644*t661*t673*var4[46] - 20.*t526*t564*t609*var4[56];
  p_output1[67]=-20.*t410*t464*t720*t721*var4[6] - 60.*t410*t464*t608*t694*t696*var4[16] + 40.*t410*t464*t720*t721*var4[16] - 60.*t410*t464*t644*t661*t673*var4[26] + 120.*t410*t464*t608*t694*t696*var4[26] - 20.*t410*t464*t720*t721*var4[26] - 20.*t410*t464*t564*t609*var4[36] + 120.*t410*t464*t644*t661*t673*var4[36] - 60.*t410*t464*t608*t694*t696*var4[36] + 40.*t410*t464*t564*t609*var4[46] - 60.*t410*t464*t644*t661*t673*var4[46] - 20.*t410*t464*t564*t609*var4[56];
  p_output1[68]=1.;
  p_output1[69]=t810;
  p_output1[70]=t821;
  p_output1[71]=t825;
  p_output1[72]=t844;
  p_output1[73]=t876;
  p_output1[74]=t877;
  p_output1[75]=20.*t608*t694*t721*var4[6] - 5.*t720*t805*var4[6] + 60.*t644*t661*t696*var4[16] - 60.*t608*t694*t721*var4[16] + 5.*t720*t805*var4[16] + 60.*t564*t609*t673*var4[26] - 150.*t644*t661*t696*var4[26] + 40.*t608*t694*t721*var4[26] - 140.*t564*t609*t673*var4[36] + 90.*t644*t661*t696*var4[36] + 20.*t846*t885*var4[36] + 80.*t564*t609*t673*var4[46] - 45.*t846*t885*var4[46] + 25.*t846*t885*var4[56];
  p_output1[76]=5.*t720*t805*var4[6] + 20.*t664*t721*t994*var4[6] + 40.*t608*t694*t721*var4[16] - 20.*t720*t721*var4[16] - 5.*t720*t805*var4[16] + 60.*t608*t696*t720*t994*var4[16] - 20.*t664*t721*t994*var4[16] + 90.*t644*t661*t696*var4[26] - 60.*t608*t694*t696*var4[26] - 40.*t608*t694*t721*var4[26] + 20.*t720*t721*var4[26] + 60.*t661*t673*t694*t994*var4[26] - 60.*t608*t696*t720*t994*var4[26] + 80.*t564*t609*t673*var4[36] - 60.*t644*t661*t673*var4[36] - 90.*t644*t661*t696*var4[36] + 60.*t608*t694*t696*var4[36] + 20.*t609*t644*t994*var4[36] - 60.*t661*t673*t694*t994*var4[36] - 20.*t564*t609*var4[46] - 80.*t564*t609*t673*var4[46] + 60.*t644*t661*t673*var4[46] + 25.*t846*t885*var4[46] - 20.*t609*t644*t994*var4[46] + 20.*t564*t609*var4[56] - 25.*t846*t885*var4[56];
  p_output1[77]=-20.*t526*t720*t721*var4[7] - 60.*t526*t608*t694*t696*var4[17] + 40.*t526*t720*t721*var4[17] - 60.*t526*t644*t661*t673*var4[27] + 120.*t526*t608*t694*t696*var4[27] - 20.*t526*t720*t721*var4[27] - 20.*t526*t564*t609*var4[37] + 120.*t526*t644*t661*t673*var4[37] - 60.*t526*t608*t694*t696*var4[37] + 40.*t526*t564*t609*var4[47] - 60.*t526*t644*t661*t673*var4[47] - 20.*t526*t564*t609*var4[57];
  p_output1[78]=-20.*t410*t464*t720*t721*var4[7] - 60.*t410*t464*t608*t694*t696*var4[17] + 40.*t410*t464*t720*t721*var4[17] - 60.*t410*t464*t644*t661*t673*var4[27] + 120.*t410*t464*t608*t694*t696*var4[27] - 20.*t410*t464*t720*t721*var4[27] - 20.*t410*t464*t564*t609*var4[37] + 120.*t410*t464*t644*t661*t673*var4[37] - 60.*t410*t464*t608*t694*t696*var4[37] + 40.*t410*t464*t564*t609*var4[47] - 60.*t410*t464*t644*t661*t673*var4[47] - 20.*t410*t464*t564*t609*var4[57];
  p_output1[79]=1.;
  p_output1[80]=t810;
  p_output1[81]=t821;
  p_output1[82]=t825;
  p_output1[83]=t844;
  p_output1[84]=t876;
  p_output1[85]=t877;
  p_output1[86]=20.*t608*t694*t721*var4[7] - 5.*t720*t805*var4[7] + 60.*t644*t661*t696*var4[17] - 60.*t608*t694*t721*var4[17] + 5.*t720*t805*var4[17] + 60.*t564*t609*t673*var4[27] - 150.*t644*t661*t696*var4[27] + 40.*t608*t694*t721*var4[27] - 140.*t564*t609*t673*var4[37] + 90.*t644*t661*t696*var4[37] + 20.*t846*t885*var4[37] + 80.*t564*t609*t673*var4[47] - 45.*t846*t885*var4[47] + 25.*t846*t885*var4[57];
  p_output1[87]=5.*t720*t805*var4[7] + 20.*t664*t721*t994*var4[7] + 40.*t608*t694*t721*var4[17] - 20.*t720*t721*var4[17] - 5.*t720*t805*var4[17] + 60.*t608*t696*t720*t994*var4[17] - 20.*t664*t721*t994*var4[17] + 90.*t644*t661*t696*var4[27] - 60.*t608*t694*t696*var4[27] - 40.*t608*t694*t721*var4[27] + 20.*t720*t721*var4[27] + 60.*t661*t673*t694*t994*var4[27] - 60.*t608*t696*t720*t994*var4[27] + 80.*t564*t609*t673*var4[37] - 60.*t644*t661*t673*var4[37] - 90.*t644*t661*t696*var4[37] + 60.*t608*t694*t696*var4[37] + 20.*t609*t644*t994*var4[37] - 60.*t661*t673*t694*t994*var4[37] - 20.*t564*t609*var4[47] - 80.*t564*t609*t673*var4[47] + 60.*t644*t661*t673*var4[47] + 25.*t846*t885*var4[47] - 20.*t609*t644*t994*var4[47] + 20.*t564*t609*var4[57] - 25.*t846*t885*var4[57];
  p_output1[88]=-20.*t526*t720*t721*var4[8] - 60.*t526*t608*t694*t696*var4[18] + 40.*t526*t720*t721*var4[18] - 60.*t526*t644*t661*t673*var4[28] + 120.*t526*t608*t694*t696*var4[28] - 20.*t526*t720*t721*var4[28] - 20.*t526*t564*t609*var4[38] + 120.*t526*t644*t661*t673*var4[38] - 60.*t526*t608*t694*t696*var4[38] + 40.*t526*t564*t609*var4[48] - 60.*t526*t644*t661*t673*var4[48] - 20.*t526*t564*t609*var4[58];
  p_output1[89]=-20.*t410*t464*t720*t721*var4[8] - 60.*t410*t464*t608*t694*t696*var4[18] + 40.*t410*t464*t720*t721*var4[18] - 60.*t410*t464*t644*t661*t673*var4[28] + 120.*t410*t464*t608*t694*t696*var4[28] - 20.*t410*t464*t720*t721*var4[28] - 20.*t410*t464*t564*t609*var4[38] + 120.*t410*t464*t644*t661*t673*var4[38] - 60.*t410*t464*t608*t694*t696*var4[38] + 40.*t410*t464*t564*t609*var4[48] - 60.*t410*t464*t644*t661*t673*var4[48] - 20.*t410*t464*t564*t609*var4[58];
  p_output1[90]=1.;
  p_output1[91]=t810;
  p_output1[92]=t821;
  p_output1[93]=t825;
  p_output1[94]=t844;
  p_output1[95]=t876;
  p_output1[96]=t877;
  p_output1[97]=20.*t608*t694*t721*var4[8] - 5.*t720*t805*var4[8] + 60.*t644*t661*t696*var4[18] - 60.*t608*t694*t721*var4[18] + 5.*t720*t805*var4[18] + 60.*t564*t609*t673*var4[28] - 150.*t644*t661*t696*var4[28] + 40.*t608*t694*t721*var4[28] - 140.*t564*t609*t673*var4[38] + 90.*t644*t661*t696*var4[38] + 20.*t846*t885*var4[38] + 80.*t564*t609*t673*var4[48] - 45.*t846*t885*var4[48] + 25.*t846*t885*var4[58];
  p_output1[98]=5.*t720*t805*var4[8] + 20.*t664*t721*t994*var4[8] + 40.*t608*t694*t721*var4[18] - 20.*t720*t721*var4[18] - 5.*t720*t805*var4[18] + 60.*t608*t696*t720*t994*var4[18] - 20.*t664*t721*t994*var4[18] + 90.*t644*t661*t696*var4[28] - 60.*t608*t694*t696*var4[28] - 40.*t608*t694*t721*var4[28] + 20.*t720*t721*var4[28] + 60.*t661*t673*t694*t994*var4[28] - 60.*t608*t696*t720*t994*var4[28] + 80.*t564*t609*t673*var4[38] - 60.*t644*t661*t673*var4[38] - 90.*t644*t661*t696*var4[38] + 60.*t608*t694*t696*var4[38] + 20.*t609*t644*t994*var4[38] - 60.*t661*t673*t694*t994*var4[38] - 20.*t564*t609*var4[48] - 80.*t564*t609*t673*var4[48] + 60.*t644*t661*t673*var4[48] + 25.*t846*t885*var4[48] - 20.*t609*t644*t994*var4[48] + 20.*t564*t609*var4[58] - 25.*t846*t885*var4[58];
  p_output1[99]=-20.*t526*t720*t721*var4[9] - 60.*t526*t608*t694*t696*var4[19] + 40.*t526*t720*t721*var4[19] - 60.*t526*t644*t661*t673*var4[29] + 120.*t526*t608*t694*t696*var4[29] - 20.*t526*t720*t721*var4[29] - 20.*t526*t564*t609*var4[39] + 120.*t526*t644*t661*t673*var4[39] - 60.*t526*t608*t694*t696*var4[39] + 40.*t526*t564*t609*var4[49] - 60.*t526*t644*t661*t673*var4[49] - 20.*t526*t564*t609*var4[59];
  p_output1[100]=-20.*t410*t464*t720*t721*var4[9] - 60.*t410*t464*t608*t694*t696*var4[19] + 40.*t410*t464*t720*t721*var4[19] - 60.*t410*t464*t644*t661*t673*var4[29] + 120.*t410*t464*t608*t694*t696*var4[29] - 20.*t410*t464*t720*t721*var4[29] - 20.*t410*t464*t564*t609*var4[39] + 120.*t410*t464*t644*t661*t673*var4[39] - 60.*t410*t464*t608*t694*t696*var4[39] + 40.*t410*t464*t564*t609*var4[49] - 60.*t410*t464*t644*t661*t673*var4[49] - 20.*t410*t464*t564*t609*var4[59];
  p_output1[101]=1.;
  p_output1[102]=t810;
  p_output1[103]=t821;
  p_output1[104]=t825;
  p_output1[105]=t844;
  p_output1[106]=t876;
  p_output1[107]=t877;
  p_output1[108]=20.*t608*t694*t721*var4[9] - 5.*t720*t805*var4[9] + 60.*t644*t661*t696*var4[19] - 60.*t608*t694*t721*var4[19] + 5.*t720*t805*var4[19] + 60.*t564*t609*t673*var4[29] - 150.*t644*t661*t696*var4[29] + 40.*t608*t694*t721*var4[29] - 140.*t564*t609*t673*var4[39] + 90.*t644*t661*t696*var4[39] + 20.*t846*t885*var4[39] + 80.*t564*t609*t673*var4[49] - 45.*t846*t885*var4[49] + 25.*t846*t885*var4[59];
  p_output1[109]=5.*t720*t805*var4[9] + 20.*t664*t721*t994*var4[9] + 40.*t608*t694*t721*var4[19] - 20.*t720*t721*var4[19] - 5.*t720*t805*var4[19] + 60.*t608*t696*t720*t994*var4[19] - 20.*t664*t721*t994*var4[19] + 90.*t644*t661*t696*var4[29] - 60.*t608*t694*t696*var4[29] - 40.*t608*t694*t721*var4[29] + 20.*t720*t721*var4[29] + 60.*t661*t673*t694*t994*var4[29] - 60.*t608*t696*t720*t994*var4[29] + 80.*t564*t609*t673*var4[39] - 60.*t644*t661*t673*var4[39] - 90.*t644*t661*t696*var4[39] + 60.*t608*t694*t696*var4[39] + 20.*t609*t644*t994*var4[39] - 60.*t661*t673*t694*t994*var4[39] - 20.*t564*t609*var4[49] - 80.*t564*t609*t673*var4[49] + 60.*t644*t661*t673*var4[49] + 25.*t846*t885*var4[49] - 20.*t609*t644*t994*var4[49] + 20.*t564*t609*var4[59] - 25.*t846*t885*var4[59];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 60 && ncols == 1) && 
      !(mrows == 1 && ncols == 60))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 110, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_time_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void J_d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
