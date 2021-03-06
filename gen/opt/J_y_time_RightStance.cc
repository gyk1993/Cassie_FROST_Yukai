/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:15 GMT-04:00
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
  double t217;
  double t113;
  double t162;
  double t173;
  double t209;
  double t214;
  double t225;
  double t230;
  double t238;
  double t241;
  double t246;
  double t249;
  double t251;
  double t269;
  double t270;
  double t275;
  double t283;
  double t290;
  double t314;
  double t317;
  double t325;
  double t338;
  double t340;
  double t357;
  double t500;
  double t518;
  double t623;
  double t626;
  double t476;
  double t477;
  double t480;
  double t482;
  double t494;
  double t497;
  double t508;
  t217 = -1.*var4[1];
  t113 = -1. + var5[0];
  t162 = -1. + var6[0];
  t173 = 1/t162;
  t209 = -1.*t113*t173;
  t214 = 1. + t209;
  t225 = var4[0] + t217;
  t230 = Power(t225,-5);
  t238 = -1.*var1[0];
  t241 = t238 + var1[1];
  t246 = t113*t173*t241;
  t249 = t217 + var1[0] + t246;
  t251 = Power(t249,4);
  t269 = Power(t225,-4);
  t270 = Power(t249,3);
  t275 = 1/t225;
  t283 = -1.*t275*t249;
  t290 = 1. + t283;
  t314 = Power(t225,-3);
  t317 = Power(t249,2);
  t325 = Power(t290,2);
  t338 = Power(t225,-2);
  t340 = Power(t290,3);
  t357 = Power(t290,4);
  t500 = Power(t249,5);
  t518 = Power(t225,-6);
  t623 = -1.*t338*t249;
  t626 = t275 + t623;
  t476 = Power(t290,5);
  t477 = -1.*t476;
  t480 = -5.*t275*t249*t357;
  t482 = -10.*t338*t317*t340;
  t494 = -10.*t314*t270*t325;
  t497 = -5.*t269*t251*t290;
  t508 = -1.*t230*t500;
  p_output1[0]=5.*t214*t275*t357*var3[0] + 20.*t214*t249*t338*t340*var3[10] - 5.*t214*t275*t357*var3[10] + 30.*t214*t314*t317*t325*var3[20] - 20.*t214*t249*t338*t340*var3[20] + 20.*t214*t269*t270*t290*var3[30] - 30.*t214*t314*t317*t325*var3[30] + 5.*t214*t230*t251*var3[40] - 20.*t214*t269*t270*t290*var3[40] - 5.*t214*t230*t251*var3[50];
  p_output1[1]=5.*t113*t173*t275*t357*var3[0] + 20.*t113*t173*t249*t338*t340*var3[10] - 5.*t113*t173*t275*t357*var3[10] + 30.*t113*t173*t314*t317*t325*var3[20] - 20.*t113*t173*t249*t338*t340*var3[20] + 20.*t113*t173*t269*t270*t290*var3[30] - 30.*t113*t173*t314*t317*t325*var3[30] + 5.*t113*t173*t230*t251*var3[40] - 20.*t113*t173*t269*t270*t290*var3[40] - 5.*t113*t173*t230*t251*var3[50];
  p_output1[2]=1.;
  p_output1[3]=t477;
  p_output1[4]=t480;
  p_output1[5]=t482;
  p_output1[6]=t494;
  p_output1[7]=t497;
  p_output1[8]=t508;
  p_output1[9]=-5.*t249*t338*t357*var3[0] - 20.*t314*t317*t340*var3[10] + 5.*t249*t338*t357*var3[10] - 30.*t269*t270*t325*var3[20] + 20.*t314*t317*t340*var3[20] - 20.*t230*t251*t290*var3[30] + 30.*t269*t270*t325*var3[30] + 20.*t230*t251*t290*var3[40] - 5.*t500*t518*var3[40] + 5.*t500*t518*var3[50];
  p_output1[10]=-5.*t357*t626*var3[0] + 5.*t275*t357*var3[10] - 5.*t249*t338*t357*var3[10] - 20.*t249*t275*t340*t626*var3[10] - 20.*t314*t317*t340*var3[20] + 20.*t249*t338*t340*var3[20] - 30.*t317*t325*t338*t626*var3[20] - 30.*t269*t270*t325*var3[30] + 30.*t314*t317*t325*var3[30] - 20.*t270*t290*t314*t626*var3[30] - 20.*t230*t251*t290*var3[40] + 20.*t269*t270*t290*var3[40] - 5.*t251*t269*t626*var3[40] + 5.*t230*t251*var3[50] - 5.*t500*t518*var3[50];
  p_output1[11]=5.*t214*t275*t357*var3[1] + 20.*t214*t249*t338*t340*var3[11] - 5.*t214*t275*t357*var3[11] + 30.*t214*t314*t317*t325*var3[21] - 20.*t214*t249*t338*t340*var3[21] + 20.*t214*t269*t270*t290*var3[31] - 30.*t214*t314*t317*t325*var3[31] + 5.*t214*t230*t251*var3[41] - 20.*t214*t269*t270*t290*var3[41] - 5.*t214*t230*t251*var3[51];
  p_output1[12]=5.*t113*t173*t275*t357*var3[1] + 20.*t113*t173*t249*t338*t340*var3[11] - 5.*t113*t173*t275*t357*var3[11] + 30.*t113*t173*t314*t317*t325*var3[21] - 20.*t113*t173*t249*t338*t340*var3[21] + 20.*t113*t173*t269*t270*t290*var3[31] - 30.*t113*t173*t314*t317*t325*var3[31] + 5.*t113*t173*t230*t251*var3[41] - 20.*t113*t173*t269*t270*t290*var3[41] - 5.*t113*t173*t230*t251*var3[51];
  p_output1[13]=1.;
  p_output1[14]=t477;
  p_output1[15]=t480;
  p_output1[16]=t482;
  p_output1[17]=t494;
  p_output1[18]=t497;
  p_output1[19]=t508;
  p_output1[20]=-5.*t249*t338*t357*var3[1] - 20.*t314*t317*t340*var3[11] + 5.*t249*t338*t357*var3[11] - 30.*t269*t270*t325*var3[21] + 20.*t314*t317*t340*var3[21] - 20.*t230*t251*t290*var3[31] + 30.*t269*t270*t325*var3[31] + 20.*t230*t251*t290*var3[41] - 5.*t500*t518*var3[41] + 5.*t500*t518*var3[51];
  p_output1[21]=-5.*t357*t626*var3[1] + 5.*t275*t357*var3[11] - 5.*t249*t338*t357*var3[11] - 20.*t249*t275*t340*t626*var3[11] - 20.*t314*t317*t340*var3[21] + 20.*t249*t338*t340*var3[21] - 30.*t317*t325*t338*t626*var3[21] - 30.*t269*t270*t325*var3[31] + 30.*t314*t317*t325*var3[31] - 20.*t270*t290*t314*t626*var3[31] - 20.*t230*t251*t290*var3[41] + 20.*t269*t270*t290*var3[41] - 5.*t251*t269*t626*var3[41] + 5.*t230*t251*var3[51] - 5.*t500*t518*var3[51];
  p_output1[22]=5.*t214*t275*t357*var3[2] + 20.*t214*t249*t338*t340*var3[12] - 5.*t214*t275*t357*var3[12] + 30.*t214*t314*t317*t325*var3[22] - 20.*t214*t249*t338*t340*var3[22] + 20.*t214*t269*t270*t290*var3[32] - 30.*t214*t314*t317*t325*var3[32] + 5.*t214*t230*t251*var3[42] - 20.*t214*t269*t270*t290*var3[42] - 5.*t214*t230*t251*var3[52];
  p_output1[23]=5.*t113*t173*t275*t357*var3[2] + 20.*t113*t173*t249*t338*t340*var3[12] - 5.*t113*t173*t275*t357*var3[12] + 30.*t113*t173*t314*t317*t325*var3[22] - 20.*t113*t173*t249*t338*t340*var3[22] + 20.*t113*t173*t269*t270*t290*var3[32] - 30.*t113*t173*t314*t317*t325*var3[32] + 5.*t113*t173*t230*t251*var3[42] - 20.*t113*t173*t269*t270*t290*var3[42] - 5.*t113*t173*t230*t251*var3[52];
  p_output1[24]=1.;
  p_output1[25]=t477;
  p_output1[26]=t480;
  p_output1[27]=t482;
  p_output1[28]=t494;
  p_output1[29]=t497;
  p_output1[30]=t508;
  p_output1[31]=-5.*t249*t338*t357*var3[2] - 20.*t314*t317*t340*var3[12] + 5.*t249*t338*t357*var3[12] - 30.*t269*t270*t325*var3[22] + 20.*t314*t317*t340*var3[22] - 20.*t230*t251*t290*var3[32] + 30.*t269*t270*t325*var3[32] + 20.*t230*t251*t290*var3[42] - 5.*t500*t518*var3[42] + 5.*t500*t518*var3[52];
  p_output1[32]=-5.*t357*t626*var3[2] + 5.*t275*t357*var3[12] - 5.*t249*t338*t357*var3[12] - 20.*t249*t275*t340*t626*var3[12] - 20.*t314*t317*t340*var3[22] + 20.*t249*t338*t340*var3[22] - 30.*t317*t325*t338*t626*var3[22] - 30.*t269*t270*t325*var3[32] + 30.*t314*t317*t325*var3[32] - 20.*t270*t290*t314*t626*var3[32] - 20.*t230*t251*t290*var3[42] + 20.*t269*t270*t290*var3[42] - 5.*t251*t269*t626*var3[42] + 5.*t230*t251*var3[52] - 5.*t500*t518*var3[52];
  p_output1[33]=5.*t214*t275*t357*var3[3] + 20.*t214*t249*t338*t340*var3[13] - 5.*t214*t275*t357*var3[13] + 30.*t214*t314*t317*t325*var3[23] - 20.*t214*t249*t338*t340*var3[23] + 20.*t214*t269*t270*t290*var3[33] - 30.*t214*t314*t317*t325*var3[33] + 5.*t214*t230*t251*var3[43] - 20.*t214*t269*t270*t290*var3[43] - 5.*t214*t230*t251*var3[53];
  p_output1[34]=5.*t113*t173*t275*t357*var3[3] + 20.*t113*t173*t249*t338*t340*var3[13] - 5.*t113*t173*t275*t357*var3[13] + 30.*t113*t173*t314*t317*t325*var3[23] - 20.*t113*t173*t249*t338*t340*var3[23] + 20.*t113*t173*t269*t270*t290*var3[33] - 30.*t113*t173*t314*t317*t325*var3[33] + 5.*t113*t173*t230*t251*var3[43] - 20.*t113*t173*t269*t270*t290*var3[43] - 5.*t113*t173*t230*t251*var3[53];
  p_output1[35]=1.;
  p_output1[36]=t477;
  p_output1[37]=t480;
  p_output1[38]=t482;
  p_output1[39]=t494;
  p_output1[40]=t497;
  p_output1[41]=t508;
  p_output1[42]=-5.*t249*t338*t357*var3[3] - 20.*t314*t317*t340*var3[13] + 5.*t249*t338*t357*var3[13] - 30.*t269*t270*t325*var3[23] + 20.*t314*t317*t340*var3[23] - 20.*t230*t251*t290*var3[33] + 30.*t269*t270*t325*var3[33] + 20.*t230*t251*t290*var3[43] - 5.*t500*t518*var3[43] + 5.*t500*t518*var3[53];
  p_output1[43]=-5.*t357*t626*var3[3] + 5.*t275*t357*var3[13] - 5.*t249*t338*t357*var3[13] - 20.*t249*t275*t340*t626*var3[13] - 20.*t314*t317*t340*var3[23] + 20.*t249*t338*t340*var3[23] - 30.*t317*t325*t338*t626*var3[23] - 30.*t269*t270*t325*var3[33] + 30.*t314*t317*t325*var3[33] - 20.*t270*t290*t314*t626*var3[33] - 20.*t230*t251*t290*var3[43] + 20.*t269*t270*t290*var3[43] - 5.*t251*t269*t626*var3[43] + 5.*t230*t251*var3[53] - 5.*t500*t518*var3[53];
  p_output1[44]=5.*t214*t275*t357*var3[4] + 20.*t214*t249*t338*t340*var3[14] - 5.*t214*t275*t357*var3[14] + 30.*t214*t314*t317*t325*var3[24] - 20.*t214*t249*t338*t340*var3[24] + 20.*t214*t269*t270*t290*var3[34] - 30.*t214*t314*t317*t325*var3[34] + 5.*t214*t230*t251*var3[44] - 20.*t214*t269*t270*t290*var3[44] - 5.*t214*t230*t251*var3[54];
  p_output1[45]=5.*t113*t173*t275*t357*var3[4] + 20.*t113*t173*t249*t338*t340*var3[14] - 5.*t113*t173*t275*t357*var3[14] + 30.*t113*t173*t314*t317*t325*var3[24] - 20.*t113*t173*t249*t338*t340*var3[24] + 20.*t113*t173*t269*t270*t290*var3[34] - 30.*t113*t173*t314*t317*t325*var3[34] + 5.*t113*t173*t230*t251*var3[44] - 20.*t113*t173*t269*t270*t290*var3[44] - 5.*t113*t173*t230*t251*var3[54];
  p_output1[46]=1.;
  p_output1[47]=t477;
  p_output1[48]=t480;
  p_output1[49]=t482;
  p_output1[50]=t494;
  p_output1[51]=t497;
  p_output1[52]=t508;
  p_output1[53]=-5.*t249*t338*t357*var3[4] - 20.*t314*t317*t340*var3[14] + 5.*t249*t338*t357*var3[14] - 30.*t269*t270*t325*var3[24] + 20.*t314*t317*t340*var3[24] - 20.*t230*t251*t290*var3[34] + 30.*t269*t270*t325*var3[34] + 20.*t230*t251*t290*var3[44] - 5.*t500*t518*var3[44] + 5.*t500*t518*var3[54];
  p_output1[54]=-5.*t357*t626*var3[4] + 5.*t275*t357*var3[14] - 5.*t249*t338*t357*var3[14] - 20.*t249*t275*t340*t626*var3[14] - 20.*t314*t317*t340*var3[24] + 20.*t249*t338*t340*var3[24] - 30.*t317*t325*t338*t626*var3[24] - 30.*t269*t270*t325*var3[34] + 30.*t314*t317*t325*var3[34] - 20.*t270*t290*t314*t626*var3[34] - 20.*t230*t251*t290*var3[44] + 20.*t269*t270*t290*var3[44] - 5.*t251*t269*t626*var3[44] + 5.*t230*t251*var3[54] - 5.*t500*t518*var3[54];
  p_output1[55]=5.*t214*t275*t357*var3[5] + 20.*t214*t249*t338*t340*var3[15] - 5.*t214*t275*t357*var3[15] + 30.*t214*t314*t317*t325*var3[25] - 20.*t214*t249*t338*t340*var3[25] + 20.*t214*t269*t270*t290*var3[35] - 30.*t214*t314*t317*t325*var3[35] + 5.*t214*t230*t251*var3[45] - 20.*t214*t269*t270*t290*var3[45] - 5.*t214*t230*t251*var3[55];
  p_output1[56]=5.*t113*t173*t275*t357*var3[5] + 20.*t113*t173*t249*t338*t340*var3[15] - 5.*t113*t173*t275*t357*var3[15] + 30.*t113*t173*t314*t317*t325*var3[25] - 20.*t113*t173*t249*t338*t340*var3[25] + 20.*t113*t173*t269*t270*t290*var3[35] - 30.*t113*t173*t314*t317*t325*var3[35] + 5.*t113*t173*t230*t251*var3[45] - 20.*t113*t173*t269*t270*t290*var3[45] - 5.*t113*t173*t230*t251*var3[55];
  p_output1[57]=1.;
  p_output1[58]=t477;
  p_output1[59]=t480;
  p_output1[60]=t482;
  p_output1[61]=t494;
  p_output1[62]=t497;
  p_output1[63]=t508;
  p_output1[64]=-5.*t249*t338*t357*var3[5] - 20.*t314*t317*t340*var3[15] + 5.*t249*t338*t357*var3[15] - 30.*t269*t270*t325*var3[25] + 20.*t314*t317*t340*var3[25] - 20.*t230*t251*t290*var3[35] + 30.*t269*t270*t325*var3[35] + 20.*t230*t251*t290*var3[45] - 5.*t500*t518*var3[45] + 5.*t500*t518*var3[55];
  p_output1[65]=-5.*t357*t626*var3[5] + 5.*t275*t357*var3[15] - 5.*t249*t338*t357*var3[15] - 20.*t249*t275*t340*t626*var3[15] - 20.*t314*t317*t340*var3[25] + 20.*t249*t338*t340*var3[25] - 30.*t317*t325*t338*t626*var3[25] - 30.*t269*t270*t325*var3[35] + 30.*t314*t317*t325*var3[35] - 20.*t270*t290*t314*t626*var3[35] - 20.*t230*t251*t290*var3[45] + 20.*t269*t270*t290*var3[45] - 5.*t251*t269*t626*var3[45] + 5.*t230*t251*var3[55] - 5.*t500*t518*var3[55];
  p_output1[66]=5.*t214*t275*t357*var3[6] + 20.*t214*t249*t338*t340*var3[16] - 5.*t214*t275*t357*var3[16] + 30.*t214*t314*t317*t325*var3[26] - 20.*t214*t249*t338*t340*var3[26] + 20.*t214*t269*t270*t290*var3[36] - 30.*t214*t314*t317*t325*var3[36] + 5.*t214*t230*t251*var3[46] - 20.*t214*t269*t270*t290*var3[46] - 5.*t214*t230*t251*var3[56];
  p_output1[67]=5.*t113*t173*t275*t357*var3[6] + 20.*t113*t173*t249*t338*t340*var3[16] - 5.*t113*t173*t275*t357*var3[16] + 30.*t113*t173*t314*t317*t325*var3[26] - 20.*t113*t173*t249*t338*t340*var3[26] + 20.*t113*t173*t269*t270*t290*var3[36] - 30.*t113*t173*t314*t317*t325*var3[36] + 5.*t113*t173*t230*t251*var3[46] - 20.*t113*t173*t269*t270*t290*var3[46] - 5.*t113*t173*t230*t251*var3[56];
  p_output1[68]=1.;
  p_output1[69]=t477;
  p_output1[70]=t480;
  p_output1[71]=t482;
  p_output1[72]=t494;
  p_output1[73]=t497;
  p_output1[74]=t508;
  p_output1[75]=-5.*t249*t338*t357*var3[6] - 20.*t314*t317*t340*var3[16] + 5.*t249*t338*t357*var3[16] - 30.*t269*t270*t325*var3[26] + 20.*t314*t317*t340*var3[26] - 20.*t230*t251*t290*var3[36] + 30.*t269*t270*t325*var3[36] + 20.*t230*t251*t290*var3[46] - 5.*t500*t518*var3[46] + 5.*t500*t518*var3[56];
  p_output1[76]=-5.*t357*t626*var3[6] + 5.*t275*t357*var3[16] - 5.*t249*t338*t357*var3[16] - 20.*t249*t275*t340*t626*var3[16] - 20.*t314*t317*t340*var3[26] + 20.*t249*t338*t340*var3[26] - 30.*t317*t325*t338*t626*var3[26] - 30.*t269*t270*t325*var3[36] + 30.*t314*t317*t325*var3[36] - 20.*t270*t290*t314*t626*var3[36] - 20.*t230*t251*t290*var3[46] + 20.*t269*t270*t290*var3[46] - 5.*t251*t269*t626*var3[46] + 5.*t230*t251*var3[56] - 5.*t500*t518*var3[56];
  p_output1[77]=5.*t214*t275*t357*var3[7] + 20.*t214*t249*t338*t340*var3[17] - 5.*t214*t275*t357*var3[17] + 30.*t214*t314*t317*t325*var3[27] - 20.*t214*t249*t338*t340*var3[27] + 20.*t214*t269*t270*t290*var3[37] - 30.*t214*t314*t317*t325*var3[37] + 5.*t214*t230*t251*var3[47] - 20.*t214*t269*t270*t290*var3[47] - 5.*t214*t230*t251*var3[57];
  p_output1[78]=5.*t113*t173*t275*t357*var3[7] + 20.*t113*t173*t249*t338*t340*var3[17] - 5.*t113*t173*t275*t357*var3[17] + 30.*t113*t173*t314*t317*t325*var3[27] - 20.*t113*t173*t249*t338*t340*var3[27] + 20.*t113*t173*t269*t270*t290*var3[37] - 30.*t113*t173*t314*t317*t325*var3[37] + 5.*t113*t173*t230*t251*var3[47] - 20.*t113*t173*t269*t270*t290*var3[47] - 5.*t113*t173*t230*t251*var3[57];
  p_output1[79]=1.;
  p_output1[80]=t477;
  p_output1[81]=t480;
  p_output1[82]=t482;
  p_output1[83]=t494;
  p_output1[84]=t497;
  p_output1[85]=t508;
  p_output1[86]=-5.*t249*t338*t357*var3[7] - 20.*t314*t317*t340*var3[17] + 5.*t249*t338*t357*var3[17] - 30.*t269*t270*t325*var3[27] + 20.*t314*t317*t340*var3[27] - 20.*t230*t251*t290*var3[37] + 30.*t269*t270*t325*var3[37] + 20.*t230*t251*t290*var3[47] - 5.*t500*t518*var3[47] + 5.*t500*t518*var3[57];
  p_output1[87]=-5.*t357*t626*var3[7] + 5.*t275*t357*var3[17] - 5.*t249*t338*t357*var3[17] - 20.*t249*t275*t340*t626*var3[17] - 20.*t314*t317*t340*var3[27] + 20.*t249*t338*t340*var3[27] - 30.*t317*t325*t338*t626*var3[27] - 30.*t269*t270*t325*var3[37] + 30.*t314*t317*t325*var3[37] - 20.*t270*t290*t314*t626*var3[37] - 20.*t230*t251*t290*var3[47] + 20.*t269*t270*t290*var3[47] - 5.*t251*t269*t626*var3[47] + 5.*t230*t251*var3[57] - 5.*t500*t518*var3[57];
  p_output1[88]=5.*t214*t275*t357*var3[8] + 20.*t214*t249*t338*t340*var3[18] - 5.*t214*t275*t357*var3[18] + 30.*t214*t314*t317*t325*var3[28] - 20.*t214*t249*t338*t340*var3[28] + 20.*t214*t269*t270*t290*var3[38] - 30.*t214*t314*t317*t325*var3[38] + 5.*t214*t230*t251*var3[48] - 20.*t214*t269*t270*t290*var3[48] - 5.*t214*t230*t251*var3[58];
  p_output1[89]=5.*t113*t173*t275*t357*var3[8] + 20.*t113*t173*t249*t338*t340*var3[18] - 5.*t113*t173*t275*t357*var3[18] + 30.*t113*t173*t314*t317*t325*var3[28] - 20.*t113*t173*t249*t338*t340*var3[28] + 20.*t113*t173*t269*t270*t290*var3[38] - 30.*t113*t173*t314*t317*t325*var3[38] + 5.*t113*t173*t230*t251*var3[48] - 20.*t113*t173*t269*t270*t290*var3[48] - 5.*t113*t173*t230*t251*var3[58];
  p_output1[90]=1.;
  p_output1[91]=t477;
  p_output1[92]=t480;
  p_output1[93]=t482;
  p_output1[94]=t494;
  p_output1[95]=t497;
  p_output1[96]=t508;
  p_output1[97]=-5.*t249*t338*t357*var3[8] - 20.*t314*t317*t340*var3[18] + 5.*t249*t338*t357*var3[18] - 30.*t269*t270*t325*var3[28] + 20.*t314*t317*t340*var3[28] - 20.*t230*t251*t290*var3[38] + 30.*t269*t270*t325*var3[38] + 20.*t230*t251*t290*var3[48] - 5.*t500*t518*var3[48] + 5.*t500*t518*var3[58];
  p_output1[98]=-5.*t357*t626*var3[8] + 5.*t275*t357*var3[18] - 5.*t249*t338*t357*var3[18] - 20.*t249*t275*t340*t626*var3[18] - 20.*t314*t317*t340*var3[28] + 20.*t249*t338*t340*var3[28] - 30.*t317*t325*t338*t626*var3[28] - 30.*t269*t270*t325*var3[38] + 30.*t314*t317*t325*var3[38] - 20.*t270*t290*t314*t626*var3[38] - 20.*t230*t251*t290*var3[48] + 20.*t269*t270*t290*var3[48] - 5.*t251*t269*t626*var3[48] + 5.*t230*t251*var3[58] - 5.*t500*t518*var3[58];
  p_output1[99]=5.*t214*t275*t357*var3[9] + 20.*t214*t249*t338*t340*var3[19] - 5.*t214*t275*t357*var3[19] + 30.*t214*t314*t317*t325*var3[29] - 20.*t214*t249*t338*t340*var3[29] + 20.*t214*t269*t270*t290*var3[39] - 30.*t214*t314*t317*t325*var3[39] + 5.*t214*t230*t251*var3[49] - 20.*t214*t269*t270*t290*var3[49] - 5.*t214*t230*t251*var3[59];
  p_output1[100]=5.*t113*t173*t275*t357*var3[9] + 20.*t113*t173*t249*t338*t340*var3[19] - 5.*t113*t173*t275*t357*var3[19] + 30.*t113*t173*t314*t317*t325*var3[29] - 20.*t113*t173*t249*t338*t340*var3[29] + 20.*t113*t173*t269*t270*t290*var3[39] - 30.*t113*t173*t314*t317*t325*var3[39] + 5.*t113*t173*t230*t251*var3[49] - 20.*t113*t173*t269*t270*t290*var3[49] - 5.*t113*t173*t230*t251*var3[59];
  p_output1[101]=1.;
  p_output1[102]=t477;
  p_output1[103]=t480;
  p_output1[104]=t482;
  p_output1[105]=t494;
  p_output1[106]=t497;
  p_output1[107]=t508;
  p_output1[108]=-5.*t249*t338*t357*var3[9] - 20.*t314*t317*t340*var3[19] + 5.*t249*t338*t357*var3[19] - 30.*t269*t270*t325*var3[29] + 20.*t314*t317*t340*var3[29] - 20.*t230*t251*t290*var3[39] + 30.*t269*t270*t325*var3[39] + 20.*t230*t251*t290*var3[49] - 5.*t500*t518*var3[49] + 5.*t500*t518*var3[59];
  p_output1[109]=-5.*t357*t626*var3[9] + 5.*t275*t357*var3[19] - 5.*t249*t338*t357*var3[19] - 20.*t249*t275*t340*t626*var3[19] - 20.*t314*t317*t340*var3[29] + 20.*t249*t338*t340*var3[29] - 30.*t317*t325*t338*t626*var3[29] - 30.*t269*t270*t325*var3[39] + 30.*t314*t317*t325*var3[39] - 20.*t270*t290*t314*t626*var3[39] - 20.*t230*t251*t290*var3[49] + 20.*t269*t270*t290*var3[49] - 5.*t251*t269*t626*var3[49] + 5.*t230*t251*var3[59] - 5.*t500*t518*var3[59];
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
