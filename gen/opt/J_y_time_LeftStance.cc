/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:10:45 GMT-04:00
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
  double t137;
  double t30;
  double t43;
  double t77;
  double t100;
  double t133;
  double t207;
  double t212;
  double t213;
  double t221;
  double t222;
  double t227;
  double t245;
  double t256;
  double t258;
  double t281;
  double t283;
  double t290;
  double t306;
  double t317;
  double t321;
  double t341;
  double t348;
  double t360;
  double t462;
  double t471;
  double t560;
  double t564;
  double t430;
  double t439;
  double t440;
  double t446;
  double t455;
  double t456;
  double t465;
  t137 = -1.*var4[1];
  t30 = -1. + var5[0];
  t43 = -1. + var6[0];
  t77 = 1/t43;
  t100 = -1.*t30*t77;
  t133 = 1. + t100;
  t207 = var4[0] + t137;
  t212 = Power(t207,-5);
  t213 = -1.*var1[0];
  t221 = t213 + var1[1];
  t222 = t30*t77*t221;
  t227 = t137 + var1[0] + t222;
  t245 = Power(t227,4);
  t256 = Power(t207,-4);
  t258 = Power(t227,3);
  t281 = 1/t207;
  t283 = -1.*t281*t227;
  t290 = 1. + t283;
  t306 = Power(t207,-3);
  t317 = Power(t227,2);
  t321 = Power(t290,2);
  t341 = Power(t207,-2);
  t348 = Power(t290,3);
  t360 = Power(t290,4);
  t462 = Power(t227,5);
  t471 = Power(t207,-6);
  t560 = -1.*t341*t227;
  t564 = t281 + t560;
  t430 = Power(t290,5);
  t439 = -1.*t430;
  t440 = -5.*t281*t227*t360;
  t446 = -10.*t341*t317*t348;
  t455 = -10.*t306*t258*t321;
  t456 = -5.*t256*t245*t290;
  t465 = -1.*t212*t462;
  p_output1[0]=5.*t133*t281*t360*var3[0] + 20.*t133*t227*t341*t348*var3[10] - 5.*t133*t281*t360*var3[10] + 30.*t133*t306*t317*t321*var3[20] - 20.*t133*t227*t341*t348*var3[20] + 20.*t133*t256*t258*t290*var3[30] - 30.*t133*t306*t317*t321*var3[30] + 5.*t133*t212*t245*var3[40] - 20.*t133*t256*t258*t290*var3[40] - 5.*t133*t212*t245*var3[50];
  p_output1[1]=5.*t281*t30*t360*t77*var3[0] + 20.*t227*t30*t341*t348*t77*var3[10] - 5.*t281*t30*t360*t77*var3[10] + 30.*t30*t306*t317*t321*t77*var3[20] - 20.*t227*t30*t341*t348*t77*var3[20] + 20.*t256*t258*t290*t30*t77*var3[30] - 30.*t30*t306*t317*t321*t77*var3[30] + 5.*t212*t245*t30*t77*var3[40] - 20.*t256*t258*t290*t30*t77*var3[40] - 5.*t212*t245*t30*t77*var3[50];
  p_output1[2]=1.;
  p_output1[3]=t439;
  p_output1[4]=t440;
  p_output1[5]=t446;
  p_output1[6]=t455;
  p_output1[7]=t456;
  p_output1[8]=t465;
  p_output1[9]=-5.*t227*t341*t360*var3[0] - 20.*t306*t317*t348*var3[10] + 5.*t227*t341*t360*var3[10] - 30.*t256*t258*t321*var3[20] + 20.*t306*t317*t348*var3[20] - 20.*t212*t245*t290*var3[30] + 30.*t256*t258*t321*var3[30] + 20.*t212*t245*t290*var3[40] - 5.*t462*t471*var3[40] + 5.*t462*t471*var3[50];
  p_output1[10]=-5.*t360*t564*var3[0] + 5.*t281*t360*var3[10] - 5.*t227*t341*t360*var3[10] - 20.*t227*t281*t348*t564*var3[10] - 20.*t306*t317*t348*var3[20] + 20.*t227*t341*t348*var3[20] - 30.*t317*t321*t341*t564*var3[20] - 30.*t256*t258*t321*var3[30] + 30.*t306*t317*t321*var3[30] - 20.*t258*t290*t306*t564*var3[30] - 20.*t212*t245*t290*var3[40] + 20.*t256*t258*t290*var3[40] - 5.*t245*t256*t564*var3[40] + 5.*t212*t245*var3[50] - 5.*t462*t471*var3[50];
  p_output1[11]=5.*t133*t281*t360*var3[1] + 20.*t133*t227*t341*t348*var3[11] - 5.*t133*t281*t360*var3[11] + 30.*t133*t306*t317*t321*var3[21] - 20.*t133*t227*t341*t348*var3[21] + 20.*t133*t256*t258*t290*var3[31] - 30.*t133*t306*t317*t321*var3[31] + 5.*t133*t212*t245*var3[41] - 20.*t133*t256*t258*t290*var3[41] - 5.*t133*t212*t245*var3[51];
  p_output1[12]=5.*t281*t30*t360*t77*var3[1] + 20.*t227*t30*t341*t348*t77*var3[11] - 5.*t281*t30*t360*t77*var3[11] + 30.*t30*t306*t317*t321*t77*var3[21] - 20.*t227*t30*t341*t348*t77*var3[21] + 20.*t256*t258*t290*t30*t77*var3[31] - 30.*t30*t306*t317*t321*t77*var3[31] + 5.*t212*t245*t30*t77*var3[41] - 20.*t256*t258*t290*t30*t77*var3[41] - 5.*t212*t245*t30*t77*var3[51];
  p_output1[13]=1.;
  p_output1[14]=t439;
  p_output1[15]=t440;
  p_output1[16]=t446;
  p_output1[17]=t455;
  p_output1[18]=t456;
  p_output1[19]=t465;
  p_output1[20]=-5.*t227*t341*t360*var3[1] - 20.*t306*t317*t348*var3[11] + 5.*t227*t341*t360*var3[11] - 30.*t256*t258*t321*var3[21] + 20.*t306*t317*t348*var3[21] - 20.*t212*t245*t290*var3[31] + 30.*t256*t258*t321*var3[31] + 20.*t212*t245*t290*var3[41] - 5.*t462*t471*var3[41] + 5.*t462*t471*var3[51];
  p_output1[21]=-5.*t360*t564*var3[1] + 5.*t281*t360*var3[11] - 5.*t227*t341*t360*var3[11] - 20.*t227*t281*t348*t564*var3[11] - 20.*t306*t317*t348*var3[21] + 20.*t227*t341*t348*var3[21] - 30.*t317*t321*t341*t564*var3[21] - 30.*t256*t258*t321*var3[31] + 30.*t306*t317*t321*var3[31] - 20.*t258*t290*t306*t564*var3[31] - 20.*t212*t245*t290*var3[41] + 20.*t256*t258*t290*var3[41] - 5.*t245*t256*t564*var3[41] + 5.*t212*t245*var3[51] - 5.*t462*t471*var3[51];
  p_output1[22]=5.*t133*t281*t360*var3[2] + 20.*t133*t227*t341*t348*var3[12] - 5.*t133*t281*t360*var3[12] + 30.*t133*t306*t317*t321*var3[22] - 20.*t133*t227*t341*t348*var3[22] + 20.*t133*t256*t258*t290*var3[32] - 30.*t133*t306*t317*t321*var3[32] + 5.*t133*t212*t245*var3[42] - 20.*t133*t256*t258*t290*var3[42] - 5.*t133*t212*t245*var3[52];
  p_output1[23]=5.*t281*t30*t360*t77*var3[2] + 20.*t227*t30*t341*t348*t77*var3[12] - 5.*t281*t30*t360*t77*var3[12] + 30.*t30*t306*t317*t321*t77*var3[22] - 20.*t227*t30*t341*t348*t77*var3[22] + 20.*t256*t258*t290*t30*t77*var3[32] - 30.*t30*t306*t317*t321*t77*var3[32] + 5.*t212*t245*t30*t77*var3[42] - 20.*t256*t258*t290*t30*t77*var3[42] - 5.*t212*t245*t30*t77*var3[52];
  p_output1[24]=1.;
  p_output1[25]=t439;
  p_output1[26]=t440;
  p_output1[27]=t446;
  p_output1[28]=t455;
  p_output1[29]=t456;
  p_output1[30]=t465;
  p_output1[31]=-5.*t227*t341*t360*var3[2] - 20.*t306*t317*t348*var3[12] + 5.*t227*t341*t360*var3[12] - 30.*t256*t258*t321*var3[22] + 20.*t306*t317*t348*var3[22] - 20.*t212*t245*t290*var3[32] + 30.*t256*t258*t321*var3[32] + 20.*t212*t245*t290*var3[42] - 5.*t462*t471*var3[42] + 5.*t462*t471*var3[52];
  p_output1[32]=-5.*t360*t564*var3[2] + 5.*t281*t360*var3[12] - 5.*t227*t341*t360*var3[12] - 20.*t227*t281*t348*t564*var3[12] - 20.*t306*t317*t348*var3[22] + 20.*t227*t341*t348*var3[22] - 30.*t317*t321*t341*t564*var3[22] - 30.*t256*t258*t321*var3[32] + 30.*t306*t317*t321*var3[32] - 20.*t258*t290*t306*t564*var3[32] - 20.*t212*t245*t290*var3[42] + 20.*t256*t258*t290*var3[42] - 5.*t245*t256*t564*var3[42] + 5.*t212*t245*var3[52] - 5.*t462*t471*var3[52];
  p_output1[33]=5.*t133*t281*t360*var3[3] + 20.*t133*t227*t341*t348*var3[13] - 5.*t133*t281*t360*var3[13] + 30.*t133*t306*t317*t321*var3[23] - 20.*t133*t227*t341*t348*var3[23] + 20.*t133*t256*t258*t290*var3[33] - 30.*t133*t306*t317*t321*var3[33] + 5.*t133*t212*t245*var3[43] - 20.*t133*t256*t258*t290*var3[43] - 5.*t133*t212*t245*var3[53];
  p_output1[34]=5.*t281*t30*t360*t77*var3[3] + 20.*t227*t30*t341*t348*t77*var3[13] - 5.*t281*t30*t360*t77*var3[13] + 30.*t30*t306*t317*t321*t77*var3[23] - 20.*t227*t30*t341*t348*t77*var3[23] + 20.*t256*t258*t290*t30*t77*var3[33] - 30.*t30*t306*t317*t321*t77*var3[33] + 5.*t212*t245*t30*t77*var3[43] - 20.*t256*t258*t290*t30*t77*var3[43] - 5.*t212*t245*t30*t77*var3[53];
  p_output1[35]=1.;
  p_output1[36]=t439;
  p_output1[37]=t440;
  p_output1[38]=t446;
  p_output1[39]=t455;
  p_output1[40]=t456;
  p_output1[41]=t465;
  p_output1[42]=-5.*t227*t341*t360*var3[3] - 20.*t306*t317*t348*var3[13] + 5.*t227*t341*t360*var3[13] - 30.*t256*t258*t321*var3[23] + 20.*t306*t317*t348*var3[23] - 20.*t212*t245*t290*var3[33] + 30.*t256*t258*t321*var3[33] + 20.*t212*t245*t290*var3[43] - 5.*t462*t471*var3[43] + 5.*t462*t471*var3[53];
  p_output1[43]=-5.*t360*t564*var3[3] + 5.*t281*t360*var3[13] - 5.*t227*t341*t360*var3[13] - 20.*t227*t281*t348*t564*var3[13] - 20.*t306*t317*t348*var3[23] + 20.*t227*t341*t348*var3[23] - 30.*t317*t321*t341*t564*var3[23] - 30.*t256*t258*t321*var3[33] + 30.*t306*t317*t321*var3[33] - 20.*t258*t290*t306*t564*var3[33] - 20.*t212*t245*t290*var3[43] + 20.*t256*t258*t290*var3[43] - 5.*t245*t256*t564*var3[43] + 5.*t212*t245*var3[53] - 5.*t462*t471*var3[53];
  p_output1[44]=5.*t133*t281*t360*var3[4] + 20.*t133*t227*t341*t348*var3[14] - 5.*t133*t281*t360*var3[14] + 30.*t133*t306*t317*t321*var3[24] - 20.*t133*t227*t341*t348*var3[24] + 20.*t133*t256*t258*t290*var3[34] - 30.*t133*t306*t317*t321*var3[34] + 5.*t133*t212*t245*var3[44] - 20.*t133*t256*t258*t290*var3[44] - 5.*t133*t212*t245*var3[54];
  p_output1[45]=5.*t281*t30*t360*t77*var3[4] + 20.*t227*t30*t341*t348*t77*var3[14] - 5.*t281*t30*t360*t77*var3[14] + 30.*t30*t306*t317*t321*t77*var3[24] - 20.*t227*t30*t341*t348*t77*var3[24] + 20.*t256*t258*t290*t30*t77*var3[34] - 30.*t30*t306*t317*t321*t77*var3[34] + 5.*t212*t245*t30*t77*var3[44] - 20.*t256*t258*t290*t30*t77*var3[44] - 5.*t212*t245*t30*t77*var3[54];
  p_output1[46]=1.;
  p_output1[47]=t439;
  p_output1[48]=t440;
  p_output1[49]=t446;
  p_output1[50]=t455;
  p_output1[51]=t456;
  p_output1[52]=t465;
  p_output1[53]=-5.*t227*t341*t360*var3[4] - 20.*t306*t317*t348*var3[14] + 5.*t227*t341*t360*var3[14] - 30.*t256*t258*t321*var3[24] + 20.*t306*t317*t348*var3[24] - 20.*t212*t245*t290*var3[34] + 30.*t256*t258*t321*var3[34] + 20.*t212*t245*t290*var3[44] - 5.*t462*t471*var3[44] + 5.*t462*t471*var3[54];
  p_output1[54]=-5.*t360*t564*var3[4] + 5.*t281*t360*var3[14] - 5.*t227*t341*t360*var3[14] - 20.*t227*t281*t348*t564*var3[14] - 20.*t306*t317*t348*var3[24] + 20.*t227*t341*t348*var3[24] - 30.*t317*t321*t341*t564*var3[24] - 30.*t256*t258*t321*var3[34] + 30.*t306*t317*t321*var3[34] - 20.*t258*t290*t306*t564*var3[34] - 20.*t212*t245*t290*var3[44] + 20.*t256*t258*t290*var3[44] - 5.*t245*t256*t564*var3[44] + 5.*t212*t245*var3[54] - 5.*t462*t471*var3[54];
  p_output1[55]=5.*t133*t281*t360*var3[5] + 20.*t133*t227*t341*t348*var3[15] - 5.*t133*t281*t360*var3[15] + 30.*t133*t306*t317*t321*var3[25] - 20.*t133*t227*t341*t348*var3[25] + 20.*t133*t256*t258*t290*var3[35] - 30.*t133*t306*t317*t321*var3[35] + 5.*t133*t212*t245*var3[45] - 20.*t133*t256*t258*t290*var3[45] - 5.*t133*t212*t245*var3[55];
  p_output1[56]=5.*t281*t30*t360*t77*var3[5] + 20.*t227*t30*t341*t348*t77*var3[15] - 5.*t281*t30*t360*t77*var3[15] + 30.*t30*t306*t317*t321*t77*var3[25] - 20.*t227*t30*t341*t348*t77*var3[25] + 20.*t256*t258*t290*t30*t77*var3[35] - 30.*t30*t306*t317*t321*t77*var3[35] + 5.*t212*t245*t30*t77*var3[45] - 20.*t256*t258*t290*t30*t77*var3[45] - 5.*t212*t245*t30*t77*var3[55];
  p_output1[57]=1.;
  p_output1[58]=t439;
  p_output1[59]=t440;
  p_output1[60]=t446;
  p_output1[61]=t455;
  p_output1[62]=t456;
  p_output1[63]=t465;
  p_output1[64]=-5.*t227*t341*t360*var3[5] - 20.*t306*t317*t348*var3[15] + 5.*t227*t341*t360*var3[15] - 30.*t256*t258*t321*var3[25] + 20.*t306*t317*t348*var3[25] - 20.*t212*t245*t290*var3[35] + 30.*t256*t258*t321*var3[35] + 20.*t212*t245*t290*var3[45] - 5.*t462*t471*var3[45] + 5.*t462*t471*var3[55];
  p_output1[65]=-5.*t360*t564*var3[5] + 5.*t281*t360*var3[15] - 5.*t227*t341*t360*var3[15] - 20.*t227*t281*t348*t564*var3[15] - 20.*t306*t317*t348*var3[25] + 20.*t227*t341*t348*var3[25] - 30.*t317*t321*t341*t564*var3[25] - 30.*t256*t258*t321*var3[35] + 30.*t306*t317*t321*var3[35] - 20.*t258*t290*t306*t564*var3[35] - 20.*t212*t245*t290*var3[45] + 20.*t256*t258*t290*var3[45] - 5.*t245*t256*t564*var3[45] + 5.*t212*t245*var3[55] - 5.*t462*t471*var3[55];
  p_output1[66]=5.*t133*t281*t360*var3[6] + 20.*t133*t227*t341*t348*var3[16] - 5.*t133*t281*t360*var3[16] + 30.*t133*t306*t317*t321*var3[26] - 20.*t133*t227*t341*t348*var3[26] + 20.*t133*t256*t258*t290*var3[36] - 30.*t133*t306*t317*t321*var3[36] + 5.*t133*t212*t245*var3[46] - 20.*t133*t256*t258*t290*var3[46] - 5.*t133*t212*t245*var3[56];
  p_output1[67]=5.*t281*t30*t360*t77*var3[6] + 20.*t227*t30*t341*t348*t77*var3[16] - 5.*t281*t30*t360*t77*var3[16] + 30.*t30*t306*t317*t321*t77*var3[26] - 20.*t227*t30*t341*t348*t77*var3[26] + 20.*t256*t258*t290*t30*t77*var3[36] - 30.*t30*t306*t317*t321*t77*var3[36] + 5.*t212*t245*t30*t77*var3[46] - 20.*t256*t258*t290*t30*t77*var3[46] - 5.*t212*t245*t30*t77*var3[56];
  p_output1[68]=1.;
  p_output1[69]=t439;
  p_output1[70]=t440;
  p_output1[71]=t446;
  p_output1[72]=t455;
  p_output1[73]=t456;
  p_output1[74]=t465;
  p_output1[75]=-5.*t227*t341*t360*var3[6] - 20.*t306*t317*t348*var3[16] + 5.*t227*t341*t360*var3[16] - 30.*t256*t258*t321*var3[26] + 20.*t306*t317*t348*var3[26] - 20.*t212*t245*t290*var3[36] + 30.*t256*t258*t321*var3[36] + 20.*t212*t245*t290*var3[46] - 5.*t462*t471*var3[46] + 5.*t462*t471*var3[56];
  p_output1[76]=-5.*t360*t564*var3[6] + 5.*t281*t360*var3[16] - 5.*t227*t341*t360*var3[16] - 20.*t227*t281*t348*t564*var3[16] - 20.*t306*t317*t348*var3[26] + 20.*t227*t341*t348*var3[26] - 30.*t317*t321*t341*t564*var3[26] - 30.*t256*t258*t321*var3[36] + 30.*t306*t317*t321*var3[36] - 20.*t258*t290*t306*t564*var3[36] - 20.*t212*t245*t290*var3[46] + 20.*t256*t258*t290*var3[46] - 5.*t245*t256*t564*var3[46] + 5.*t212*t245*var3[56] - 5.*t462*t471*var3[56];
  p_output1[77]=5.*t133*t281*t360*var3[7] + 20.*t133*t227*t341*t348*var3[17] - 5.*t133*t281*t360*var3[17] + 30.*t133*t306*t317*t321*var3[27] - 20.*t133*t227*t341*t348*var3[27] + 20.*t133*t256*t258*t290*var3[37] - 30.*t133*t306*t317*t321*var3[37] + 5.*t133*t212*t245*var3[47] - 20.*t133*t256*t258*t290*var3[47] - 5.*t133*t212*t245*var3[57];
  p_output1[78]=5.*t281*t30*t360*t77*var3[7] + 20.*t227*t30*t341*t348*t77*var3[17] - 5.*t281*t30*t360*t77*var3[17] + 30.*t30*t306*t317*t321*t77*var3[27] - 20.*t227*t30*t341*t348*t77*var3[27] + 20.*t256*t258*t290*t30*t77*var3[37] - 30.*t30*t306*t317*t321*t77*var3[37] + 5.*t212*t245*t30*t77*var3[47] - 20.*t256*t258*t290*t30*t77*var3[47] - 5.*t212*t245*t30*t77*var3[57];
  p_output1[79]=1.;
  p_output1[80]=t439;
  p_output1[81]=t440;
  p_output1[82]=t446;
  p_output1[83]=t455;
  p_output1[84]=t456;
  p_output1[85]=t465;
  p_output1[86]=-5.*t227*t341*t360*var3[7] - 20.*t306*t317*t348*var3[17] + 5.*t227*t341*t360*var3[17] - 30.*t256*t258*t321*var3[27] + 20.*t306*t317*t348*var3[27] - 20.*t212*t245*t290*var3[37] + 30.*t256*t258*t321*var3[37] + 20.*t212*t245*t290*var3[47] - 5.*t462*t471*var3[47] + 5.*t462*t471*var3[57];
  p_output1[87]=-5.*t360*t564*var3[7] + 5.*t281*t360*var3[17] - 5.*t227*t341*t360*var3[17] - 20.*t227*t281*t348*t564*var3[17] - 20.*t306*t317*t348*var3[27] + 20.*t227*t341*t348*var3[27] - 30.*t317*t321*t341*t564*var3[27] - 30.*t256*t258*t321*var3[37] + 30.*t306*t317*t321*var3[37] - 20.*t258*t290*t306*t564*var3[37] - 20.*t212*t245*t290*var3[47] + 20.*t256*t258*t290*var3[47] - 5.*t245*t256*t564*var3[47] + 5.*t212*t245*var3[57] - 5.*t462*t471*var3[57];
  p_output1[88]=5.*t133*t281*t360*var3[8] + 20.*t133*t227*t341*t348*var3[18] - 5.*t133*t281*t360*var3[18] + 30.*t133*t306*t317*t321*var3[28] - 20.*t133*t227*t341*t348*var3[28] + 20.*t133*t256*t258*t290*var3[38] - 30.*t133*t306*t317*t321*var3[38] + 5.*t133*t212*t245*var3[48] - 20.*t133*t256*t258*t290*var3[48] - 5.*t133*t212*t245*var3[58];
  p_output1[89]=5.*t281*t30*t360*t77*var3[8] + 20.*t227*t30*t341*t348*t77*var3[18] - 5.*t281*t30*t360*t77*var3[18] + 30.*t30*t306*t317*t321*t77*var3[28] - 20.*t227*t30*t341*t348*t77*var3[28] + 20.*t256*t258*t290*t30*t77*var3[38] - 30.*t30*t306*t317*t321*t77*var3[38] + 5.*t212*t245*t30*t77*var3[48] - 20.*t256*t258*t290*t30*t77*var3[48] - 5.*t212*t245*t30*t77*var3[58];
  p_output1[90]=1.;
  p_output1[91]=t439;
  p_output1[92]=t440;
  p_output1[93]=t446;
  p_output1[94]=t455;
  p_output1[95]=t456;
  p_output1[96]=t465;
  p_output1[97]=-5.*t227*t341*t360*var3[8] - 20.*t306*t317*t348*var3[18] + 5.*t227*t341*t360*var3[18] - 30.*t256*t258*t321*var3[28] + 20.*t306*t317*t348*var3[28] - 20.*t212*t245*t290*var3[38] + 30.*t256*t258*t321*var3[38] + 20.*t212*t245*t290*var3[48] - 5.*t462*t471*var3[48] + 5.*t462*t471*var3[58];
  p_output1[98]=-5.*t360*t564*var3[8] + 5.*t281*t360*var3[18] - 5.*t227*t341*t360*var3[18] - 20.*t227*t281*t348*t564*var3[18] - 20.*t306*t317*t348*var3[28] + 20.*t227*t341*t348*var3[28] - 30.*t317*t321*t341*t564*var3[28] - 30.*t256*t258*t321*var3[38] + 30.*t306*t317*t321*var3[38] - 20.*t258*t290*t306*t564*var3[38] - 20.*t212*t245*t290*var3[48] + 20.*t256*t258*t290*var3[48] - 5.*t245*t256*t564*var3[48] + 5.*t212*t245*var3[58] - 5.*t462*t471*var3[58];
  p_output1[99]=5.*t133*t281*t360*var3[9] + 20.*t133*t227*t341*t348*var3[19] - 5.*t133*t281*t360*var3[19] + 30.*t133*t306*t317*t321*var3[29] - 20.*t133*t227*t341*t348*var3[29] + 20.*t133*t256*t258*t290*var3[39] - 30.*t133*t306*t317*t321*var3[39] + 5.*t133*t212*t245*var3[49] - 20.*t133*t256*t258*t290*var3[49] - 5.*t133*t212*t245*var3[59];
  p_output1[100]=5.*t281*t30*t360*t77*var3[9] + 20.*t227*t30*t341*t348*t77*var3[19] - 5.*t281*t30*t360*t77*var3[19] + 30.*t30*t306*t317*t321*t77*var3[29] - 20.*t227*t30*t341*t348*t77*var3[29] + 20.*t256*t258*t290*t30*t77*var3[39] - 30.*t30*t306*t317*t321*t77*var3[39] + 5.*t212*t245*t30*t77*var3[49] - 20.*t256*t258*t290*t30*t77*var3[49] - 5.*t212*t245*t30*t77*var3[59];
  p_output1[101]=1.;
  p_output1[102]=t439;
  p_output1[103]=t440;
  p_output1[104]=t446;
  p_output1[105]=t455;
  p_output1[106]=t456;
  p_output1[107]=t465;
  p_output1[108]=-5.*t227*t341*t360*var3[9] - 20.*t306*t317*t348*var3[19] + 5.*t227*t341*t360*var3[19] - 30.*t256*t258*t321*var3[29] + 20.*t306*t317*t348*var3[29] - 20.*t212*t245*t290*var3[39] + 30.*t256*t258*t321*var3[39] + 20.*t212*t245*t290*var3[49] - 5.*t462*t471*var3[49] + 5.*t462*t471*var3[59];
  p_output1[109]=-5.*t360*t564*var3[9] + 5.*t281*t360*var3[19] - 5.*t227*t341*t360*var3[19] - 20.*t227*t281*t348*t564*var3[19] - 20.*t306*t317*t348*var3[29] + 20.*t227*t341*t348*var3[29] - 30.*t317*t321*t341*t564*var3[29] - 30.*t256*t258*t321*var3[39] + 30.*t306*t317*t321*var3[39] - 20.*t258*t290*t306*t564*var3[39] - 20.*t212*t245*t290*var3[49] + 20.*t256*t258*t290*var3[49] - 5.*t245*t256*t564*var3[49] + 5.*t212*t245*var3[59] - 5.*t462*t471*var3[59];
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

#include "J_y_time_LeftStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void J_y_time_LeftStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
