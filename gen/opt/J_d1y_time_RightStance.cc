/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:30:06 GMT-04:00
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
  double t2676;
  double t2548;
  double t2590;
  double t2647;
  double t2657;
  double t2674;
  double t2684;
  double t2686;
  double t2696;
  double t2700;
  double t2729;
  double t2730;
  double t2733;
  double t2741;
  double t2742;
  double t2745;
  double t2746;
  double t2749;
  double t2761;
  double t2762;
  double t2773;
  double t2774;
  double t4884;
  double t5079;
  double t5087;
  double t5295;
  double t5298;
  double t4892;
  double t4896;
  double t4911;
  double t4921;
  double t4922;
  double t4967;
  double t4981;
  double t4989;
  double t4991;
  double t5072;
  double t5080;
  double t5081;
  double t5083;
  double t5085;
  t2676 = -1.*var5[1];
  t2548 = -1. + var6[0];
  t2590 = -1. + var7[0];
  t2647 = 1/t2590;
  t2657 = -1.*t2548*t2647;
  t2674 = 1. + t2657;
  t2684 = var5[0] + t2676;
  t2686 = Power(t2684,-5);
  t2696 = -1.*var1[0];
  t2700 = t2696 + var1[1];
  t2729 = t2548*t2647*t2700;
  t2730 = t2676 + var1[0] + t2729;
  t2733 = Power(t2730,3);
  t2741 = Power(t2684,-4);
  t2742 = Power(t2730,2);
  t2745 = 1/t2684;
  t2746 = -1.*t2745*t2730;
  t2749 = 1. + t2746;
  t2761 = Power(t2684,-3);
  t2762 = Power(t2749,2);
  t2773 = Power(t2684,-2);
  t2774 = Power(t2749,3);
  t4884 = Power(t2749,4);
  t5079 = Power(t2730,4);
  t5087 = Power(t2684,-6);
  t5295 = -1.*t2773*t2730;
  t5298 = t2745 + t5295;
  t4892 = 5.*t2745*t4884;
  t4896 = 20.*t2773*t2730*t2774;
  t4911 = -5.*t2745*t4884;
  t4921 = t4896 + t4911;
  t4922 = 30.*t2761*t2742*t2762;
  t4967 = -20.*t2773*t2730*t2774;
  t4981 = t4922 + t4967;
  t4989 = 20.*t2741*t2733*t2749;
  t4991 = -30.*t2761*t2742*t2762;
  t5072 = t4989 + t4991;
  t5080 = 5.*t2686*t5079;
  t5081 = -20.*t2741*t2733*t2749;
  t5083 = t5080 + t5081;
  t5085 = -5.*t2686*t5079;
  p_output1[0]=-20.*t2674*t2773*t2774*var4[0] - 60.*t2674*t2730*t2761*t2762*var4[10] + 40.*t2674*t2773*t2774*var4[10] - 60.*t2674*t2741*t2742*t2749*var4[20] + 120.*t2674*t2730*t2761*t2762*var4[20] - 20.*t2674*t2773*t2774*var4[20] - 20.*t2674*t2686*t2733*var4[30] + 120.*t2674*t2741*t2742*t2749*var4[30] - 60.*t2674*t2730*t2761*t2762*var4[30] + 40.*t2674*t2686*t2733*var4[40] - 60.*t2674*t2741*t2742*t2749*var4[40] - 20.*t2674*t2686*t2733*var4[50];
  p_output1[1]=-20.*t2548*t2647*t2773*t2774*var4[0] - 60.*t2548*t2647*t2730*t2761*t2762*var4[10] + 40.*t2548*t2647*t2773*t2774*var4[10] - 60.*t2548*t2647*t2741*t2742*t2749*var4[20] + 120.*t2548*t2647*t2730*t2761*t2762*var4[20] - 20.*t2548*t2647*t2773*t2774*var4[20] - 20.*t2548*t2647*t2686*t2733*var4[30] + 120.*t2548*t2647*t2741*t2742*t2749*var4[30] - 60.*t2548*t2647*t2730*t2761*t2762*var4[30] + 40.*t2548*t2647*t2686*t2733*var4[40] - 60.*t2548*t2647*t2741*t2742*t2749*var4[40] - 20.*t2548*t2647*t2686*t2733*var4[50];
  p_output1[2]=1.;
  p_output1[3]=t4892;
  p_output1[4]=t4921;
  p_output1[5]=t4981;
  p_output1[6]=t5072;
  p_output1[7]=t5083;
  p_output1[8]=t5085;
  p_output1[9]=20.*t2730*t2761*t2774*var4[0] - 5.*t2773*t4884*var4[0] + 60.*t2741*t2742*t2762*var4[10] - 60.*t2730*t2761*t2774*var4[10] + 5.*t2773*t4884*var4[10] + 60.*t2686*t2733*t2749*var4[20] - 150.*t2741*t2742*t2762*var4[20] + 40.*t2730*t2761*t2774*var4[20] - 140.*t2686*t2733*t2749*var4[30] + 90.*t2741*t2742*t2762*var4[30] + 20.*t5079*t5087*var4[30] + 80.*t2686*t2733*t2749*var4[40] - 45.*t5079*t5087*var4[40] + 25.*t5079*t5087*var4[50];
  p_output1[10]=5.*t2773*t4884*var4[0] + 20.*t2745*t2774*t5298*var4[0] + 40.*t2730*t2761*t2774*var4[10] - 20.*t2773*t2774*var4[10] - 5.*t2773*t4884*var4[10] + 60.*t2730*t2762*t2773*t5298*var4[10] - 20.*t2745*t2774*t5298*var4[10] + 90.*t2741*t2742*t2762*var4[20] - 60.*t2730*t2761*t2762*var4[20] - 40.*t2730*t2761*t2774*var4[20] + 20.*t2773*t2774*var4[20] + 60.*t2742*t2749*t2761*t5298*var4[20] - 60.*t2730*t2762*t2773*t5298*var4[20] + 80.*t2686*t2733*t2749*var4[30] - 60.*t2741*t2742*t2749*var4[30] - 90.*t2741*t2742*t2762*var4[30] + 60.*t2730*t2761*t2762*var4[30] + 20.*t2733*t2741*t5298*var4[30] - 60.*t2742*t2749*t2761*t5298*var4[30] - 20.*t2686*t2733*var4[40] - 80.*t2686*t2733*t2749*var4[40] + 60.*t2741*t2742*t2749*var4[40] + 25.*t5079*t5087*var4[40] - 20.*t2733*t2741*t5298*var4[40] + 20.*t2686*t2733*var4[50] - 25.*t5079*t5087*var4[50];
  p_output1[11]=-20.*t2674*t2773*t2774*var4[1] - 60.*t2674*t2730*t2761*t2762*var4[11] + 40.*t2674*t2773*t2774*var4[11] - 60.*t2674*t2741*t2742*t2749*var4[21] + 120.*t2674*t2730*t2761*t2762*var4[21] - 20.*t2674*t2773*t2774*var4[21] - 20.*t2674*t2686*t2733*var4[31] + 120.*t2674*t2741*t2742*t2749*var4[31] - 60.*t2674*t2730*t2761*t2762*var4[31] + 40.*t2674*t2686*t2733*var4[41] - 60.*t2674*t2741*t2742*t2749*var4[41] - 20.*t2674*t2686*t2733*var4[51];
  p_output1[12]=-20.*t2548*t2647*t2773*t2774*var4[1] - 60.*t2548*t2647*t2730*t2761*t2762*var4[11] + 40.*t2548*t2647*t2773*t2774*var4[11] - 60.*t2548*t2647*t2741*t2742*t2749*var4[21] + 120.*t2548*t2647*t2730*t2761*t2762*var4[21] - 20.*t2548*t2647*t2773*t2774*var4[21] - 20.*t2548*t2647*t2686*t2733*var4[31] + 120.*t2548*t2647*t2741*t2742*t2749*var4[31] - 60.*t2548*t2647*t2730*t2761*t2762*var4[31] + 40.*t2548*t2647*t2686*t2733*var4[41] - 60.*t2548*t2647*t2741*t2742*t2749*var4[41] - 20.*t2548*t2647*t2686*t2733*var4[51];
  p_output1[13]=1.;
  p_output1[14]=t4892;
  p_output1[15]=t4921;
  p_output1[16]=t4981;
  p_output1[17]=t5072;
  p_output1[18]=t5083;
  p_output1[19]=t5085;
  p_output1[20]=20.*t2730*t2761*t2774*var4[1] - 5.*t2773*t4884*var4[1] + 60.*t2741*t2742*t2762*var4[11] - 60.*t2730*t2761*t2774*var4[11] + 5.*t2773*t4884*var4[11] + 60.*t2686*t2733*t2749*var4[21] - 150.*t2741*t2742*t2762*var4[21] + 40.*t2730*t2761*t2774*var4[21] - 140.*t2686*t2733*t2749*var4[31] + 90.*t2741*t2742*t2762*var4[31] + 20.*t5079*t5087*var4[31] + 80.*t2686*t2733*t2749*var4[41] - 45.*t5079*t5087*var4[41] + 25.*t5079*t5087*var4[51];
  p_output1[21]=5.*t2773*t4884*var4[1] + 20.*t2745*t2774*t5298*var4[1] + 40.*t2730*t2761*t2774*var4[11] - 20.*t2773*t2774*var4[11] - 5.*t2773*t4884*var4[11] + 60.*t2730*t2762*t2773*t5298*var4[11] - 20.*t2745*t2774*t5298*var4[11] + 90.*t2741*t2742*t2762*var4[21] - 60.*t2730*t2761*t2762*var4[21] - 40.*t2730*t2761*t2774*var4[21] + 20.*t2773*t2774*var4[21] + 60.*t2742*t2749*t2761*t5298*var4[21] - 60.*t2730*t2762*t2773*t5298*var4[21] + 80.*t2686*t2733*t2749*var4[31] - 60.*t2741*t2742*t2749*var4[31] - 90.*t2741*t2742*t2762*var4[31] + 60.*t2730*t2761*t2762*var4[31] + 20.*t2733*t2741*t5298*var4[31] - 60.*t2742*t2749*t2761*t5298*var4[31] - 20.*t2686*t2733*var4[41] - 80.*t2686*t2733*t2749*var4[41] + 60.*t2741*t2742*t2749*var4[41] + 25.*t5079*t5087*var4[41] - 20.*t2733*t2741*t5298*var4[41] + 20.*t2686*t2733*var4[51] - 25.*t5079*t5087*var4[51];
  p_output1[22]=-20.*t2674*t2773*t2774*var4[2] - 60.*t2674*t2730*t2761*t2762*var4[12] + 40.*t2674*t2773*t2774*var4[12] - 60.*t2674*t2741*t2742*t2749*var4[22] + 120.*t2674*t2730*t2761*t2762*var4[22] - 20.*t2674*t2773*t2774*var4[22] - 20.*t2674*t2686*t2733*var4[32] + 120.*t2674*t2741*t2742*t2749*var4[32] - 60.*t2674*t2730*t2761*t2762*var4[32] + 40.*t2674*t2686*t2733*var4[42] - 60.*t2674*t2741*t2742*t2749*var4[42] - 20.*t2674*t2686*t2733*var4[52];
  p_output1[23]=-20.*t2548*t2647*t2773*t2774*var4[2] - 60.*t2548*t2647*t2730*t2761*t2762*var4[12] + 40.*t2548*t2647*t2773*t2774*var4[12] - 60.*t2548*t2647*t2741*t2742*t2749*var4[22] + 120.*t2548*t2647*t2730*t2761*t2762*var4[22] - 20.*t2548*t2647*t2773*t2774*var4[22] - 20.*t2548*t2647*t2686*t2733*var4[32] + 120.*t2548*t2647*t2741*t2742*t2749*var4[32] - 60.*t2548*t2647*t2730*t2761*t2762*var4[32] + 40.*t2548*t2647*t2686*t2733*var4[42] - 60.*t2548*t2647*t2741*t2742*t2749*var4[42] - 20.*t2548*t2647*t2686*t2733*var4[52];
  p_output1[24]=1.;
  p_output1[25]=t4892;
  p_output1[26]=t4921;
  p_output1[27]=t4981;
  p_output1[28]=t5072;
  p_output1[29]=t5083;
  p_output1[30]=t5085;
  p_output1[31]=20.*t2730*t2761*t2774*var4[2] - 5.*t2773*t4884*var4[2] + 60.*t2741*t2742*t2762*var4[12] - 60.*t2730*t2761*t2774*var4[12] + 5.*t2773*t4884*var4[12] + 60.*t2686*t2733*t2749*var4[22] - 150.*t2741*t2742*t2762*var4[22] + 40.*t2730*t2761*t2774*var4[22] - 140.*t2686*t2733*t2749*var4[32] + 90.*t2741*t2742*t2762*var4[32] + 20.*t5079*t5087*var4[32] + 80.*t2686*t2733*t2749*var4[42] - 45.*t5079*t5087*var4[42] + 25.*t5079*t5087*var4[52];
  p_output1[32]=5.*t2773*t4884*var4[2] + 20.*t2745*t2774*t5298*var4[2] + 40.*t2730*t2761*t2774*var4[12] - 20.*t2773*t2774*var4[12] - 5.*t2773*t4884*var4[12] + 60.*t2730*t2762*t2773*t5298*var4[12] - 20.*t2745*t2774*t5298*var4[12] + 90.*t2741*t2742*t2762*var4[22] - 60.*t2730*t2761*t2762*var4[22] - 40.*t2730*t2761*t2774*var4[22] + 20.*t2773*t2774*var4[22] + 60.*t2742*t2749*t2761*t5298*var4[22] - 60.*t2730*t2762*t2773*t5298*var4[22] + 80.*t2686*t2733*t2749*var4[32] - 60.*t2741*t2742*t2749*var4[32] - 90.*t2741*t2742*t2762*var4[32] + 60.*t2730*t2761*t2762*var4[32] + 20.*t2733*t2741*t5298*var4[32] - 60.*t2742*t2749*t2761*t5298*var4[32] - 20.*t2686*t2733*var4[42] - 80.*t2686*t2733*t2749*var4[42] + 60.*t2741*t2742*t2749*var4[42] + 25.*t5079*t5087*var4[42] - 20.*t2733*t2741*t5298*var4[42] + 20.*t2686*t2733*var4[52] - 25.*t5079*t5087*var4[52];
  p_output1[33]=-20.*t2674*t2773*t2774*var4[3] - 60.*t2674*t2730*t2761*t2762*var4[13] + 40.*t2674*t2773*t2774*var4[13] - 60.*t2674*t2741*t2742*t2749*var4[23] + 120.*t2674*t2730*t2761*t2762*var4[23] - 20.*t2674*t2773*t2774*var4[23] - 20.*t2674*t2686*t2733*var4[33] + 120.*t2674*t2741*t2742*t2749*var4[33] - 60.*t2674*t2730*t2761*t2762*var4[33] + 40.*t2674*t2686*t2733*var4[43] - 60.*t2674*t2741*t2742*t2749*var4[43] - 20.*t2674*t2686*t2733*var4[53];
  p_output1[34]=-20.*t2548*t2647*t2773*t2774*var4[3] - 60.*t2548*t2647*t2730*t2761*t2762*var4[13] + 40.*t2548*t2647*t2773*t2774*var4[13] - 60.*t2548*t2647*t2741*t2742*t2749*var4[23] + 120.*t2548*t2647*t2730*t2761*t2762*var4[23] - 20.*t2548*t2647*t2773*t2774*var4[23] - 20.*t2548*t2647*t2686*t2733*var4[33] + 120.*t2548*t2647*t2741*t2742*t2749*var4[33] - 60.*t2548*t2647*t2730*t2761*t2762*var4[33] + 40.*t2548*t2647*t2686*t2733*var4[43] - 60.*t2548*t2647*t2741*t2742*t2749*var4[43] - 20.*t2548*t2647*t2686*t2733*var4[53];
  p_output1[35]=1.;
  p_output1[36]=t4892;
  p_output1[37]=t4921;
  p_output1[38]=t4981;
  p_output1[39]=t5072;
  p_output1[40]=t5083;
  p_output1[41]=t5085;
  p_output1[42]=20.*t2730*t2761*t2774*var4[3] - 5.*t2773*t4884*var4[3] + 60.*t2741*t2742*t2762*var4[13] - 60.*t2730*t2761*t2774*var4[13] + 5.*t2773*t4884*var4[13] + 60.*t2686*t2733*t2749*var4[23] - 150.*t2741*t2742*t2762*var4[23] + 40.*t2730*t2761*t2774*var4[23] - 140.*t2686*t2733*t2749*var4[33] + 90.*t2741*t2742*t2762*var4[33] + 20.*t5079*t5087*var4[33] + 80.*t2686*t2733*t2749*var4[43] - 45.*t5079*t5087*var4[43] + 25.*t5079*t5087*var4[53];
  p_output1[43]=5.*t2773*t4884*var4[3] + 20.*t2745*t2774*t5298*var4[3] + 40.*t2730*t2761*t2774*var4[13] - 20.*t2773*t2774*var4[13] - 5.*t2773*t4884*var4[13] + 60.*t2730*t2762*t2773*t5298*var4[13] - 20.*t2745*t2774*t5298*var4[13] + 90.*t2741*t2742*t2762*var4[23] - 60.*t2730*t2761*t2762*var4[23] - 40.*t2730*t2761*t2774*var4[23] + 20.*t2773*t2774*var4[23] + 60.*t2742*t2749*t2761*t5298*var4[23] - 60.*t2730*t2762*t2773*t5298*var4[23] + 80.*t2686*t2733*t2749*var4[33] - 60.*t2741*t2742*t2749*var4[33] - 90.*t2741*t2742*t2762*var4[33] + 60.*t2730*t2761*t2762*var4[33] + 20.*t2733*t2741*t5298*var4[33] - 60.*t2742*t2749*t2761*t5298*var4[33] - 20.*t2686*t2733*var4[43] - 80.*t2686*t2733*t2749*var4[43] + 60.*t2741*t2742*t2749*var4[43] + 25.*t5079*t5087*var4[43] - 20.*t2733*t2741*t5298*var4[43] + 20.*t2686*t2733*var4[53] - 25.*t5079*t5087*var4[53];
  p_output1[44]=-20.*t2674*t2773*t2774*var4[4] - 60.*t2674*t2730*t2761*t2762*var4[14] + 40.*t2674*t2773*t2774*var4[14] - 60.*t2674*t2741*t2742*t2749*var4[24] + 120.*t2674*t2730*t2761*t2762*var4[24] - 20.*t2674*t2773*t2774*var4[24] - 20.*t2674*t2686*t2733*var4[34] + 120.*t2674*t2741*t2742*t2749*var4[34] - 60.*t2674*t2730*t2761*t2762*var4[34] + 40.*t2674*t2686*t2733*var4[44] - 60.*t2674*t2741*t2742*t2749*var4[44] - 20.*t2674*t2686*t2733*var4[54];
  p_output1[45]=-20.*t2548*t2647*t2773*t2774*var4[4] - 60.*t2548*t2647*t2730*t2761*t2762*var4[14] + 40.*t2548*t2647*t2773*t2774*var4[14] - 60.*t2548*t2647*t2741*t2742*t2749*var4[24] + 120.*t2548*t2647*t2730*t2761*t2762*var4[24] - 20.*t2548*t2647*t2773*t2774*var4[24] - 20.*t2548*t2647*t2686*t2733*var4[34] + 120.*t2548*t2647*t2741*t2742*t2749*var4[34] - 60.*t2548*t2647*t2730*t2761*t2762*var4[34] + 40.*t2548*t2647*t2686*t2733*var4[44] - 60.*t2548*t2647*t2741*t2742*t2749*var4[44] - 20.*t2548*t2647*t2686*t2733*var4[54];
  p_output1[46]=1.;
  p_output1[47]=t4892;
  p_output1[48]=t4921;
  p_output1[49]=t4981;
  p_output1[50]=t5072;
  p_output1[51]=t5083;
  p_output1[52]=t5085;
  p_output1[53]=20.*t2730*t2761*t2774*var4[4] - 5.*t2773*t4884*var4[4] + 60.*t2741*t2742*t2762*var4[14] - 60.*t2730*t2761*t2774*var4[14] + 5.*t2773*t4884*var4[14] + 60.*t2686*t2733*t2749*var4[24] - 150.*t2741*t2742*t2762*var4[24] + 40.*t2730*t2761*t2774*var4[24] - 140.*t2686*t2733*t2749*var4[34] + 90.*t2741*t2742*t2762*var4[34] + 20.*t5079*t5087*var4[34] + 80.*t2686*t2733*t2749*var4[44] - 45.*t5079*t5087*var4[44] + 25.*t5079*t5087*var4[54];
  p_output1[54]=5.*t2773*t4884*var4[4] + 20.*t2745*t2774*t5298*var4[4] + 40.*t2730*t2761*t2774*var4[14] - 20.*t2773*t2774*var4[14] - 5.*t2773*t4884*var4[14] + 60.*t2730*t2762*t2773*t5298*var4[14] - 20.*t2745*t2774*t5298*var4[14] + 90.*t2741*t2742*t2762*var4[24] - 60.*t2730*t2761*t2762*var4[24] - 40.*t2730*t2761*t2774*var4[24] + 20.*t2773*t2774*var4[24] + 60.*t2742*t2749*t2761*t5298*var4[24] - 60.*t2730*t2762*t2773*t5298*var4[24] + 80.*t2686*t2733*t2749*var4[34] - 60.*t2741*t2742*t2749*var4[34] - 90.*t2741*t2742*t2762*var4[34] + 60.*t2730*t2761*t2762*var4[34] + 20.*t2733*t2741*t5298*var4[34] - 60.*t2742*t2749*t2761*t5298*var4[34] - 20.*t2686*t2733*var4[44] - 80.*t2686*t2733*t2749*var4[44] + 60.*t2741*t2742*t2749*var4[44] + 25.*t5079*t5087*var4[44] - 20.*t2733*t2741*t5298*var4[44] + 20.*t2686*t2733*var4[54] - 25.*t5079*t5087*var4[54];
  p_output1[55]=-20.*t2674*t2773*t2774*var4[5] - 60.*t2674*t2730*t2761*t2762*var4[15] + 40.*t2674*t2773*t2774*var4[15] - 60.*t2674*t2741*t2742*t2749*var4[25] + 120.*t2674*t2730*t2761*t2762*var4[25] - 20.*t2674*t2773*t2774*var4[25] - 20.*t2674*t2686*t2733*var4[35] + 120.*t2674*t2741*t2742*t2749*var4[35] - 60.*t2674*t2730*t2761*t2762*var4[35] + 40.*t2674*t2686*t2733*var4[45] - 60.*t2674*t2741*t2742*t2749*var4[45] - 20.*t2674*t2686*t2733*var4[55];
  p_output1[56]=-20.*t2548*t2647*t2773*t2774*var4[5] - 60.*t2548*t2647*t2730*t2761*t2762*var4[15] + 40.*t2548*t2647*t2773*t2774*var4[15] - 60.*t2548*t2647*t2741*t2742*t2749*var4[25] + 120.*t2548*t2647*t2730*t2761*t2762*var4[25] - 20.*t2548*t2647*t2773*t2774*var4[25] - 20.*t2548*t2647*t2686*t2733*var4[35] + 120.*t2548*t2647*t2741*t2742*t2749*var4[35] - 60.*t2548*t2647*t2730*t2761*t2762*var4[35] + 40.*t2548*t2647*t2686*t2733*var4[45] - 60.*t2548*t2647*t2741*t2742*t2749*var4[45] - 20.*t2548*t2647*t2686*t2733*var4[55];
  p_output1[57]=1.;
  p_output1[58]=t4892;
  p_output1[59]=t4921;
  p_output1[60]=t4981;
  p_output1[61]=t5072;
  p_output1[62]=t5083;
  p_output1[63]=t5085;
  p_output1[64]=20.*t2730*t2761*t2774*var4[5] - 5.*t2773*t4884*var4[5] + 60.*t2741*t2742*t2762*var4[15] - 60.*t2730*t2761*t2774*var4[15] + 5.*t2773*t4884*var4[15] + 60.*t2686*t2733*t2749*var4[25] - 150.*t2741*t2742*t2762*var4[25] + 40.*t2730*t2761*t2774*var4[25] - 140.*t2686*t2733*t2749*var4[35] + 90.*t2741*t2742*t2762*var4[35] + 20.*t5079*t5087*var4[35] + 80.*t2686*t2733*t2749*var4[45] - 45.*t5079*t5087*var4[45] + 25.*t5079*t5087*var4[55];
  p_output1[65]=5.*t2773*t4884*var4[5] + 20.*t2745*t2774*t5298*var4[5] + 40.*t2730*t2761*t2774*var4[15] - 20.*t2773*t2774*var4[15] - 5.*t2773*t4884*var4[15] + 60.*t2730*t2762*t2773*t5298*var4[15] - 20.*t2745*t2774*t5298*var4[15] + 90.*t2741*t2742*t2762*var4[25] - 60.*t2730*t2761*t2762*var4[25] - 40.*t2730*t2761*t2774*var4[25] + 20.*t2773*t2774*var4[25] + 60.*t2742*t2749*t2761*t5298*var4[25] - 60.*t2730*t2762*t2773*t5298*var4[25] + 80.*t2686*t2733*t2749*var4[35] - 60.*t2741*t2742*t2749*var4[35] - 90.*t2741*t2742*t2762*var4[35] + 60.*t2730*t2761*t2762*var4[35] + 20.*t2733*t2741*t5298*var4[35] - 60.*t2742*t2749*t2761*t5298*var4[35] - 20.*t2686*t2733*var4[45] - 80.*t2686*t2733*t2749*var4[45] + 60.*t2741*t2742*t2749*var4[45] + 25.*t5079*t5087*var4[45] - 20.*t2733*t2741*t5298*var4[45] + 20.*t2686*t2733*var4[55] - 25.*t5079*t5087*var4[55];
  p_output1[66]=-20.*t2674*t2773*t2774*var4[6] - 60.*t2674*t2730*t2761*t2762*var4[16] + 40.*t2674*t2773*t2774*var4[16] - 60.*t2674*t2741*t2742*t2749*var4[26] + 120.*t2674*t2730*t2761*t2762*var4[26] - 20.*t2674*t2773*t2774*var4[26] - 20.*t2674*t2686*t2733*var4[36] + 120.*t2674*t2741*t2742*t2749*var4[36] - 60.*t2674*t2730*t2761*t2762*var4[36] + 40.*t2674*t2686*t2733*var4[46] - 60.*t2674*t2741*t2742*t2749*var4[46] - 20.*t2674*t2686*t2733*var4[56];
  p_output1[67]=-20.*t2548*t2647*t2773*t2774*var4[6] - 60.*t2548*t2647*t2730*t2761*t2762*var4[16] + 40.*t2548*t2647*t2773*t2774*var4[16] - 60.*t2548*t2647*t2741*t2742*t2749*var4[26] + 120.*t2548*t2647*t2730*t2761*t2762*var4[26] - 20.*t2548*t2647*t2773*t2774*var4[26] - 20.*t2548*t2647*t2686*t2733*var4[36] + 120.*t2548*t2647*t2741*t2742*t2749*var4[36] - 60.*t2548*t2647*t2730*t2761*t2762*var4[36] + 40.*t2548*t2647*t2686*t2733*var4[46] - 60.*t2548*t2647*t2741*t2742*t2749*var4[46] - 20.*t2548*t2647*t2686*t2733*var4[56];
  p_output1[68]=1.;
  p_output1[69]=t4892;
  p_output1[70]=t4921;
  p_output1[71]=t4981;
  p_output1[72]=t5072;
  p_output1[73]=t5083;
  p_output1[74]=t5085;
  p_output1[75]=20.*t2730*t2761*t2774*var4[6] - 5.*t2773*t4884*var4[6] + 60.*t2741*t2742*t2762*var4[16] - 60.*t2730*t2761*t2774*var4[16] + 5.*t2773*t4884*var4[16] + 60.*t2686*t2733*t2749*var4[26] - 150.*t2741*t2742*t2762*var4[26] + 40.*t2730*t2761*t2774*var4[26] - 140.*t2686*t2733*t2749*var4[36] + 90.*t2741*t2742*t2762*var4[36] + 20.*t5079*t5087*var4[36] + 80.*t2686*t2733*t2749*var4[46] - 45.*t5079*t5087*var4[46] + 25.*t5079*t5087*var4[56];
  p_output1[76]=5.*t2773*t4884*var4[6] + 20.*t2745*t2774*t5298*var4[6] + 40.*t2730*t2761*t2774*var4[16] - 20.*t2773*t2774*var4[16] - 5.*t2773*t4884*var4[16] + 60.*t2730*t2762*t2773*t5298*var4[16] - 20.*t2745*t2774*t5298*var4[16] + 90.*t2741*t2742*t2762*var4[26] - 60.*t2730*t2761*t2762*var4[26] - 40.*t2730*t2761*t2774*var4[26] + 20.*t2773*t2774*var4[26] + 60.*t2742*t2749*t2761*t5298*var4[26] - 60.*t2730*t2762*t2773*t5298*var4[26] + 80.*t2686*t2733*t2749*var4[36] - 60.*t2741*t2742*t2749*var4[36] - 90.*t2741*t2742*t2762*var4[36] + 60.*t2730*t2761*t2762*var4[36] + 20.*t2733*t2741*t5298*var4[36] - 60.*t2742*t2749*t2761*t5298*var4[36] - 20.*t2686*t2733*var4[46] - 80.*t2686*t2733*t2749*var4[46] + 60.*t2741*t2742*t2749*var4[46] + 25.*t5079*t5087*var4[46] - 20.*t2733*t2741*t5298*var4[46] + 20.*t2686*t2733*var4[56] - 25.*t5079*t5087*var4[56];
  p_output1[77]=-20.*t2674*t2773*t2774*var4[7] - 60.*t2674*t2730*t2761*t2762*var4[17] + 40.*t2674*t2773*t2774*var4[17] - 60.*t2674*t2741*t2742*t2749*var4[27] + 120.*t2674*t2730*t2761*t2762*var4[27] - 20.*t2674*t2773*t2774*var4[27] - 20.*t2674*t2686*t2733*var4[37] + 120.*t2674*t2741*t2742*t2749*var4[37] - 60.*t2674*t2730*t2761*t2762*var4[37] + 40.*t2674*t2686*t2733*var4[47] - 60.*t2674*t2741*t2742*t2749*var4[47] - 20.*t2674*t2686*t2733*var4[57];
  p_output1[78]=-20.*t2548*t2647*t2773*t2774*var4[7] - 60.*t2548*t2647*t2730*t2761*t2762*var4[17] + 40.*t2548*t2647*t2773*t2774*var4[17] - 60.*t2548*t2647*t2741*t2742*t2749*var4[27] + 120.*t2548*t2647*t2730*t2761*t2762*var4[27] - 20.*t2548*t2647*t2773*t2774*var4[27] - 20.*t2548*t2647*t2686*t2733*var4[37] + 120.*t2548*t2647*t2741*t2742*t2749*var4[37] - 60.*t2548*t2647*t2730*t2761*t2762*var4[37] + 40.*t2548*t2647*t2686*t2733*var4[47] - 60.*t2548*t2647*t2741*t2742*t2749*var4[47] - 20.*t2548*t2647*t2686*t2733*var4[57];
  p_output1[79]=1.;
  p_output1[80]=t4892;
  p_output1[81]=t4921;
  p_output1[82]=t4981;
  p_output1[83]=t5072;
  p_output1[84]=t5083;
  p_output1[85]=t5085;
  p_output1[86]=20.*t2730*t2761*t2774*var4[7] - 5.*t2773*t4884*var4[7] + 60.*t2741*t2742*t2762*var4[17] - 60.*t2730*t2761*t2774*var4[17] + 5.*t2773*t4884*var4[17] + 60.*t2686*t2733*t2749*var4[27] - 150.*t2741*t2742*t2762*var4[27] + 40.*t2730*t2761*t2774*var4[27] - 140.*t2686*t2733*t2749*var4[37] + 90.*t2741*t2742*t2762*var4[37] + 20.*t5079*t5087*var4[37] + 80.*t2686*t2733*t2749*var4[47] - 45.*t5079*t5087*var4[47] + 25.*t5079*t5087*var4[57];
  p_output1[87]=5.*t2773*t4884*var4[7] + 20.*t2745*t2774*t5298*var4[7] + 40.*t2730*t2761*t2774*var4[17] - 20.*t2773*t2774*var4[17] - 5.*t2773*t4884*var4[17] + 60.*t2730*t2762*t2773*t5298*var4[17] - 20.*t2745*t2774*t5298*var4[17] + 90.*t2741*t2742*t2762*var4[27] - 60.*t2730*t2761*t2762*var4[27] - 40.*t2730*t2761*t2774*var4[27] + 20.*t2773*t2774*var4[27] + 60.*t2742*t2749*t2761*t5298*var4[27] - 60.*t2730*t2762*t2773*t5298*var4[27] + 80.*t2686*t2733*t2749*var4[37] - 60.*t2741*t2742*t2749*var4[37] - 90.*t2741*t2742*t2762*var4[37] + 60.*t2730*t2761*t2762*var4[37] + 20.*t2733*t2741*t5298*var4[37] - 60.*t2742*t2749*t2761*t5298*var4[37] - 20.*t2686*t2733*var4[47] - 80.*t2686*t2733*t2749*var4[47] + 60.*t2741*t2742*t2749*var4[47] + 25.*t5079*t5087*var4[47] - 20.*t2733*t2741*t5298*var4[47] + 20.*t2686*t2733*var4[57] - 25.*t5079*t5087*var4[57];
  p_output1[88]=-20.*t2674*t2773*t2774*var4[8] - 60.*t2674*t2730*t2761*t2762*var4[18] + 40.*t2674*t2773*t2774*var4[18] - 60.*t2674*t2741*t2742*t2749*var4[28] + 120.*t2674*t2730*t2761*t2762*var4[28] - 20.*t2674*t2773*t2774*var4[28] - 20.*t2674*t2686*t2733*var4[38] + 120.*t2674*t2741*t2742*t2749*var4[38] - 60.*t2674*t2730*t2761*t2762*var4[38] + 40.*t2674*t2686*t2733*var4[48] - 60.*t2674*t2741*t2742*t2749*var4[48] - 20.*t2674*t2686*t2733*var4[58];
  p_output1[89]=-20.*t2548*t2647*t2773*t2774*var4[8] - 60.*t2548*t2647*t2730*t2761*t2762*var4[18] + 40.*t2548*t2647*t2773*t2774*var4[18] - 60.*t2548*t2647*t2741*t2742*t2749*var4[28] + 120.*t2548*t2647*t2730*t2761*t2762*var4[28] - 20.*t2548*t2647*t2773*t2774*var4[28] - 20.*t2548*t2647*t2686*t2733*var4[38] + 120.*t2548*t2647*t2741*t2742*t2749*var4[38] - 60.*t2548*t2647*t2730*t2761*t2762*var4[38] + 40.*t2548*t2647*t2686*t2733*var4[48] - 60.*t2548*t2647*t2741*t2742*t2749*var4[48] - 20.*t2548*t2647*t2686*t2733*var4[58];
  p_output1[90]=1.;
  p_output1[91]=t4892;
  p_output1[92]=t4921;
  p_output1[93]=t4981;
  p_output1[94]=t5072;
  p_output1[95]=t5083;
  p_output1[96]=t5085;
  p_output1[97]=20.*t2730*t2761*t2774*var4[8] - 5.*t2773*t4884*var4[8] + 60.*t2741*t2742*t2762*var4[18] - 60.*t2730*t2761*t2774*var4[18] + 5.*t2773*t4884*var4[18] + 60.*t2686*t2733*t2749*var4[28] - 150.*t2741*t2742*t2762*var4[28] + 40.*t2730*t2761*t2774*var4[28] - 140.*t2686*t2733*t2749*var4[38] + 90.*t2741*t2742*t2762*var4[38] + 20.*t5079*t5087*var4[38] + 80.*t2686*t2733*t2749*var4[48] - 45.*t5079*t5087*var4[48] + 25.*t5079*t5087*var4[58];
  p_output1[98]=5.*t2773*t4884*var4[8] + 20.*t2745*t2774*t5298*var4[8] + 40.*t2730*t2761*t2774*var4[18] - 20.*t2773*t2774*var4[18] - 5.*t2773*t4884*var4[18] + 60.*t2730*t2762*t2773*t5298*var4[18] - 20.*t2745*t2774*t5298*var4[18] + 90.*t2741*t2742*t2762*var4[28] - 60.*t2730*t2761*t2762*var4[28] - 40.*t2730*t2761*t2774*var4[28] + 20.*t2773*t2774*var4[28] + 60.*t2742*t2749*t2761*t5298*var4[28] - 60.*t2730*t2762*t2773*t5298*var4[28] + 80.*t2686*t2733*t2749*var4[38] - 60.*t2741*t2742*t2749*var4[38] - 90.*t2741*t2742*t2762*var4[38] + 60.*t2730*t2761*t2762*var4[38] + 20.*t2733*t2741*t5298*var4[38] - 60.*t2742*t2749*t2761*t5298*var4[38] - 20.*t2686*t2733*var4[48] - 80.*t2686*t2733*t2749*var4[48] + 60.*t2741*t2742*t2749*var4[48] + 25.*t5079*t5087*var4[48] - 20.*t2733*t2741*t5298*var4[48] + 20.*t2686*t2733*var4[58] - 25.*t5079*t5087*var4[58];
  p_output1[99]=-20.*t2674*t2773*t2774*var4[9] - 60.*t2674*t2730*t2761*t2762*var4[19] + 40.*t2674*t2773*t2774*var4[19] - 60.*t2674*t2741*t2742*t2749*var4[29] + 120.*t2674*t2730*t2761*t2762*var4[29] - 20.*t2674*t2773*t2774*var4[29] - 20.*t2674*t2686*t2733*var4[39] + 120.*t2674*t2741*t2742*t2749*var4[39] - 60.*t2674*t2730*t2761*t2762*var4[39] + 40.*t2674*t2686*t2733*var4[49] - 60.*t2674*t2741*t2742*t2749*var4[49] - 20.*t2674*t2686*t2733*var4[59];
  p_output1[100]=-20.*t2548*t2647*t2773*t2774*var4[9] - 60.*t2548*t2647*t2730*t2761*t2762*var4[19] + 40.*t2548*t2647*t2773*t2774*var4[19] - 60.*t2548*t2647*t2741*t2742*t2749*var4[29] + 120.*t2548*t2647*t2730*t2761*t2762*var4[29] - 20.*t2548*t2647*t2773*t2774*var4[29] - 20.*t2548*t2647*t2686*t2733*var4[39] + 120.*t2548*t2647*t2741*t2742*t2749*var4[39] - 60.*t2548*t2647*t2730*t2761*t2762*var4[39] + 40.*t2548*t2647*t2686*t2733*var4[49] - 60.*t2548*t2647*t2741*t2742*t2749*var4[49] - 20.*t2548*t2647*t2686*t2733*var4[59];
  p_output1[101]=1.;
  p_output1[102]=t4892;
  p_output1[103]=t4921;
  p_output1[104]=t4981;
  p_output1[105]=t5072;
  p_output1[106]=t5083;
  p_output1[107]=t5085;
  p_output1[108]=20.*t2730*t2761*t2774*var4[9] - 5.*t2773*t4884*var4[9] + 60.*t2741*t2742*t2762*var4[19] - 60.*t2730*t2761*t2774*var4[19] + 5.*t2773*t4884*var4[19] + 60.*t2686*t2733*t2749*var4[29] - 150.*t2741*t2742*t2762*var4[29] + 40.*t2730*t2761*t2774*var4[29] - 140.*t2686*t2733*t2749*var4[39] + 90.*t2741*t2742*t2762*var4[39] + 20.*t5079*t5087*var4[39] + 80.*t2686*t2733*t2749*var4[49] - 45.*t5079*t5087*var4[49] + 25.*t5079*t5087*var4[59];
  p_output1[109]=5.*t2773*t4884*var4[9] + 20.*t2745*t2774*t5298*var4[9] + 40.*t2730*t2761*t2774*var4[19] - 20.*t2773*t2774*var4[19] - 5.*t2773*t4884*var4[19] + 60.*t2730*t2762*t2773*t5298*var4[19] - 20.*t2745*t2774*t5298*var4[19] + 90.*t2741*t2742*t2762*var4[29] - 60.*t2730*t2761*t2762*var4[29] - 40.*t2730*t2761*t2774*var4[29] + 20.*t2773*t2774*var4[29] + 60.*t2742*t2749*t2761*t5298*var4[29] - 60.*t2730*t2762*t2773*t5298*var4[29] + 80.*t2686*t2733*t2749*var4[39] - 60.*t2741*t2742*t2749*var4[39] - 90.*t2741*t2742*t2762*var4[39] + 60.*t2730*t2761*t2762*var4[39] + 20.*t2733*t2741*t5298*var4[39] - 60.*t2742*t2749*t2761*t5298*var4[39] - 20.*t2686*t2733*var4[49] - 80.*t2686*t2733*t2749*var4[49] + 60.*t2741*t2742*t2749*var4[49] + 25.*t5079*t5087*var4[49] - 20.*t2733*t2741*t5298*var4[49] + 20.*t2686*t2733*var4[59] - 25.*t5079*t5087*var4[59];
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
