/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:30:08 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t1739;
  double t1760;
  double t2734;
  double t2737;
  double t2738;
  double t2750;
  double t2753;
  double t2758;
  double t2765;
  double t2766;
  double t2770;
  double t2782;
  double t2785;
  double t2786;
  double t2790;
  double t2794;
  double t4864;
  double t4865;
  double t4880;
  double t5088;
  double t5145;
  double t5263;
  double t5293;
  double t5342;
  t1739 = -1.*var6[1];
  t1760 = var6[0] + t1739;
  t2734 = Power(t1760,-5);
  t2737 = -1. + var7[0];
  t2738 = -1. + var8[0];
  t2750 = 1/t2738;
  t2753 = -1.*var1[0];
  t2758 = t2753 + var1[1];
  t2765 = t2737*t2750*t2758;
  t2766 = t1739 + var1[0] + t2765;
  t2770 = Power(t2766,3);
  t2782 = Power(t1760,-4);
  t2785 = Power(t2766,2);
  t2786 = 1/t1760;
  t2790 = -1.*t2786*t2766;
  t2794 = 1. + t2790;
  t4864 = Power(t1760,-3);
  t4865 = Power(t2794,2);
  t4880 = Power(t1760,-2);
  t5088 = Power(t2794,3);
  t5145 = Power(t2766,4);
  t5263 = Power(t2794,4);
  t5293 = Power(t2766,5);
  t5342 = Power(t2794,5);
  p_output1[0]=var4[7] - 20.*t4880*t5088*var5[0] - 60.*t2766*t4864*t4865*var5[10] + 40.*t4880*t5088*var5[10] - 60.*t2782*t2785*t2794*var5[20] + 120.*t2766*t4864*t4865*var5[20] - 20.*t4880*t5088*var5[20] - 20.*t2734*t2770*var5[30] + 120.*t2782*t2785*t2794*var5[30] - 60.*t2766*t4864*t4865*var5[30] + 40.*t2734*t2770*var5[40] - 60.*t2782*t2785*t2794*var5[40] - 20.*t2734*t2770*var5[50] + (var2[7] - 1.*t5342*var5[0] - 5.*t2766*t2786*t5263*var5[10] - 10.*t2785*t4880*t5088*var5[20] - 10.*t2770*t4864*t4865*var5[30] - 5.*t2782*t2794*t5145*var5[40] - 1.*t2734*t5293*var5[50])*var9[0] + (var3[7] + 5.*t2786*t5263*var5[0] + 20.*t2766*t4880*t5088*var5[10] - 5.*t2786*t5263*var5[10] + 30.*t2785*t4864*t4865*var5[20] - 20.*t2766*t4880*t5088*var5[20] + 20.*t2770*t2782*t2794*var5[30] - 30.*t2785*t4864*t4865*var5[30] - 20.*t2770*t2782*t2794*var5[40] + 5.*t2734*t5145*var5[40] - 5.*t2734*t5145*var5[50])*var9[1];
  p_output1[1]=var4[8] - 20.*t4880*t5088*var5[1] - 60.*t2766*t4864*t4865*var5[11] + 40.*t4880*t5088*var5[11] - 60.*t2782*t2785*t2794*var5[21] + 120.*t2766*t4864*t4865*var5[21] - 20.*t4880*t5088*var5[21] - 20.*t2734*t2770*var5[31] + 120.*t2782*t2785*t2794*var5[31] - 60.*t2766*t4864*t4865*var5[31] + 40.*t2734*t2770*var5[41] - 60.*t2782*t2785*t2794*var5[41] - 20.*t2734*t2770*var5[51] + (var2[8] - 1.*t5342*var5[1] - 5.*t2766*t2786*t5263*var5[11] - 10.*t2785*t4880*t5088*var5[21] - 10.*t2770*t4864*t4865*var5[31] - 5.*t2782*t2794*t5145*var5[41] - 1.*t2734*t5293*var5[51])*var9[0] + (var3[8] + 5.*t2786*t5263*var5[1] + 20.*t2766*t4880*t5088*var5[11] - 5.*t2786*t5263*var5[11] + 30.*t2785*t4864*t4865*var5[21] - 20.*t2766*t4880*t5088*var5[21] + 20.*t2770*t2782*t2794*var5[31] - 30.*t2785*t4864*t4865*var5[31] - 20.*t2770*t2782*t2794*var5[41] + 5.*t2734*t5145*var5[41] - 5.*t2734*t5145*var5[51])*var9[1];
  p_output1[2]=var4[9] - 20.*t4880*t5088*var5[2] - 60.*t2766*t4864*t4865*var5[12] + 40.*t4880*t5088*var5[12] - 60.*t2782*t2785*t2794*var5[22] + 120.*t2766*t4864*t4865*var5[22] - 20.*t4880*t5088*var5[22] - 20.*t2734*t2770*var5[32] + 120.*t2782*t2785*t2794*var5[32] - 60.*t2766*t4864*t4865*var5[32] + 40.*t2734*t2770*var5[42] - 60.*t2782*t2785*t2794*var5[42] - 20.*t2734*t2770*var5[52] + (var2[9] - 1.*t5342*var5[2] - 5.*t2766*t2786*t5263*var5[12] - 10.*t2785*t4880*t5088*var5[22] - 10.*t2770*t4864*t4865*var5[32] - 5.*t2782*t2794*t5145*var5[42] - 1.*t2734*t5293*var5[52])*var9[0] + (var3[9] + 5.*t2786*t5263*var5[2] + 20.*t2766*t4880*t5088*var5[12] - 5.*t2786*t5263*var5[12] + 30.*t2785*t4864*t4865*var5[22] - 20.*t2766*t4880*t5088*var5[22] + 20.*t2770*t2782*t2794*var5[32] - 30.*t2785*t4864*t4865*var5[32] - 20.*t2770*t2782*t2794*var5[42] + 5.*t2734*t5145*var5[42] - 5.*t2734*t5145*var5[52])*var9[1];
  p_output1[3]=var4[10] - 20.*t4880*t5088*var5[3] - 60.*t2766*t4864*t4865*var5[13] + 40.*t4880*t5088*var5[13] - 60.*t2782*t2785*t2794*var5[23] + 120.*t2766*t4864*t4865*var5[23] - 20.*t4880*t5088*var5[23] - 20.*t2734*t2770*var5[33] + 120.*t2782*t2785*t2794*var5[33] - 60.*t2766*t4864*t4865*var5[33] + 40.*t2734*t2770*var5[43] - 60.*t2782*t2785*t2794*var5[43] - 20.*t2734*t2770*var5[53] + (var2[10] - 1.*t5342*var5[3] - 5.*t2766*t2786*t5263*var5[13] - 10.*t2785*t4880*t5088*var5[23] - 10.*t2770*t4864*t4865*var5[33] - 5.*t2782*t2794*t5145*var5[43] - 1.*t2734*t5293*var5[53])*var9[0] + (var3[10] + 5.*t2786*t5263*var5[3] + 20.*t2766*t4880*t5088*var5[13] - 5.*t2786*t5263*var5[13] + 30.*t2785*t4864*t4865*var5[23] - 20.*t2766*t4880*t5088*var5[23] + 20.*t2770*t2782*t2794*var5[33] - 30.*t2785*t4864*t4865*var5[33] - 20.*t2770*t2782*t2794*var5[43] + 5.*t2734*t5145*var5[43] - 5.*t2734*t5145*var5[53])*var9[1];
  p_output1[4]=var4[13] - 20.*t4880*t5088*var5[4] - 60.*t2766*t4864*t4865*var5[14] + 40.*t4880*t5088*var5[14] - 60.*t2782*t2785*t2794*var5[24] + 120.*t2766*t4864*t4865*var5[24] - 20.*t4880*t5088*var5[24] - 20.*t2734*t2770*var5[34] + 120.*t2782*t2785*t2794*var5[34] - 60.*t2766*t4864*t4865*var5[34] + 40.*t2734*t2770*var5[44] - 60.*t2782*t2785*t2794*var5[44] - 20.*t2734*t2770*var5[54] + (var2[13] - 1.*t5342*var5[4] - 5.*t2766*t2786*t5263*var5[14] - 10.*t2785*t4880*t5088*var5[24] - 10.*t2770*t4864*t4865*var5[34] - 5.*t2782*t2794*t5145*var5[44] - 1.*t2734*t5293*var5[54])*var9[0] + (var3[13] + 5.*t2786*t5263*var5[4] + 20.*t2766*t4880*t5088*var5[14] - 5.*t2786*t5263*var5[14] + 30.*t2785*t4864*t4865*var5[24] - 20.*t2766*t4880*t5088*var5[24] + 20.*t2770*t2782*t2794*var5[34] - 30.*t2785*t4864*t4865*var5[34] - 20.*t2770*t2782*t2794*var5[44] + 5.*t2734*t5145*var5[44] - 5.*t2734*t5145*var5[54])*var9[1];
  p_output1[5]=var4[15] - 20.*t4880*t5088*var5[5] - 60.*t2766*t4864*t4865*var5[15] + 40.*t4880*t5088*var5[15] - 60.*t2782*t2785*t2794*var5[25] + 120.*t2766*t4864*t4865*var5[25] - 20.*t4880*t5088*var5[25] - 20.*t2734*t2770*var5[35] + 120.*t2782*t2785*t2794*var5[35] - 60.*t2766*t4864*t4865*var5[35] + 40.*t2734*t2770*var5[45] - 60.*t2782*t2785*t2794*var5[45] - 20.*t2734*t2770*var5[55] + (var2[15] - 1.*t5342*var5[5] - 5.*t2766*t2786*t5263*var5[15] - 10.*t2785*t4880*t5088*var5[25] - 10.*t2770*t4864*t4865*var5[35] - 5.*t2782*t2794*t5145*var5[45] - 1.*t2734*t5293*var5[55])*var9[0] + (var3[15] + 5.*t2786*t5263*var5[5] + 20.*t2766*t4880*t5088*var5[15] - 5.*t2786*t5263*var5[15] + 30.*t2785*t4864*t4865*var5[25] - 20.*t2766*t4880*t5088*var5[25] + 20.*t2770*t2782*t2794*var5[35] - 30.*t2785*t4864*t4865*var5[35] - 20.*t2770*t2782*t2794*var5[45] + 5.*t2734*t5145*var5[45] - 5.*t2734*t5145*var5[55])*var9[1];
  p_output1[6]=var4[16] - 20.*t4880*t5088*var5[6] - 60.*t2766*t4864*t4865*var5[16] + 40.*t4880*t5088*var5[16] - 60.*t2782*t2785*t2794*var5[26] + 120.*t2766*t4864*t4865*var5[26] - 20.*t4880*t5088*var5[26] - 20.*t2734*t2770*var5[36] + 120.*t2782*t2785*t2794*var5[36] - 60.*t2766*t4864*t4865*var5[36] + 40.*t2734*t2770*var5[46] - 60.*t2782*t2785*t2794*var5[46] - 20.*t2734*t2770*var5[56] + (var2[16] - 1.*t5342*var5[6] - 5.*t2766*t2786*t5263*var5[16] - 10.*t2785*t4880*t5088*var5[26] - 10.*t2770*t4864*t4865*var5[36] - 5.*t2782*t2794*t5145*var5[46] - 1.*t2734*t5293*var5[56])*var9[0] + (var3[16] + 5.*t2786*t5263*var5[6] + 20.*t2766*t4880*t5088*var5[16] - 5.*t2786*t5263*var5[16] + 30.*t2785*t4864*t4865*var5[26] - 20.*t2766*t4880*t5088*var5[26] + 20.*t2770*t2782*t2794*var5[36] - 30.*t2785*t4864*t4865*var5[36] - 20.*t2770*t2782*t2794*var5[46] + 5.*t2734*t5145*var5[46] - 5.*t2734*t5145*var5[56])*var9[1];
  p_output1[7]=var4[17] - 20.*t4880*t5088*var5[7] - 60.*t2766*t4864*t4865*var5[17] + 40.*t4880*t5088*var5[17] - 60.*t2782*t2785*t2794*var5[27] + 120.*t2766*t4864*t4865*var5[27] - 20.*t4880*t5088*var5[27] - 20.*t2734*t2770*var5[37] + 120.*t2782*t2785*t2794*var5[37] - 60.*t2766*t4864*t4865*var5[37] + 40.*t2734*t2770*var5[47] - 60.*t2782*t2785*t2794*var5[47] - 20.*t2734*t2770*var5[57] + (var2[17] - 1.*t5342*var5[7] - 5.*t2766*t2786*t5263*var5[17] - 10.*t2785*t4880*t5088*var5[27] - 10.*t2770*t4864*t4865*var5[37] - 5.*t2782*t2794*t5145*var5[47] - 1.*t2734*t5293*var5[57])*var9[0] + (var3[17] + 5.*t2786*t5263*var5[7] + 20.*t2766*t4880*t5088*var5[17] - 5.*t2786*t5263*var5[17] + 30.*t2785*t4864*t4865*var5[27] - 20.*t2766*t4880*t5088*var5[27] + 20.*t2770*t2782*t2794*var5[37] - 30.*t2785*t4864*t4865*var5[37] - 20.*t2770*t2782*t2794*var5[47] + 5.*t2734*t5145*var5[47] - 5.*t2734*t5145*var5[57])*var9[1];
  p_output1[8]=var4[18] - 20.*t4880*t5088*var5[8] - 60.*t2766*t4864*t4865*var5[18] + 40.*t4880*t5088*var5[18] - 60.*t2782*t2785*t2794*var5[28] + 120.*t2766*t4864*t4865*var5[28] - 20.*t4880*t5088*var5[28] - 20.*t2734*t2770*var5[38] + 120.*t2782*t2785*t2794*var5[38] - 60.*t2766*t4864*t4865*var5[38] + 40.*t2734*t2770*var5[48] - 60.*t2782*t2785*t2794*var5[48] - 20.*t2734*t2770*var5[58] + (var2[18] - 1.*t5342*var5[8] - 5.*t2766*t2786*t5263*var5[18] - 10.*t2785*t4880*t5088*var5[28] - 10.*t2770*t4864*t4865*var5[38] - 5.*t2782*t2794*t5145*var5[48] - 1.*t2734*t5293*var5[58])*var9[0] + (var3[18] + 5.*t2786*t5263*var5[8] + 20.*t2766*t4880*t5088*var5[18] - 5.*t2786*t5263*var5[18] + 30.*t2785*t4864*t4865*var5[28] - 20.*t2766*t4880*t5088*var5[28] + 20.*t2770*t2782*t2794*var5[38] - 30.*t2785*t4864*t4865*var5[38] - 20.*t2770*t2782*t2794*var5[48] + 5.*t2734*t5145*var5[48] - 5.*t2734*t5145*var5[58])*var9[1];
  p_output1[9]=var4[21] - 20.*t4880*t5088*var5[9] - 60.*t2766*t4864*t4865*var5[19] + 40.*t4880*t5088*var5[19] - 60.*t2782*t2785*t2794*var5[29] + 120.*t2766*t4864*t4865*var5[29] - 20.*t4880*t5088*var5[29] - 20.*t2734*t2770*var5[39] + 120.*t2782*t2785*t2794*var5[39] - 60.*t2766*t4864*t4865*var5[39] + 40.*t2734*t2770*var5[49] - 60.*t2782*t2785*t2794*var5[49] - 20.*t2734*t2770*var5[59] + (var2[21] - 1.*t5342*var5[9] - 5.*t2766*t2786*t5263*var5[19] - 10.*t2785*t4880*t5088*var5[29] - 10.*t2770*t4864*t4865*var5[39] - 5.*t2782*t2794*t5145*var5[49] - 1.*t2734*t5293*var5[59])*var9[0] + (var3[21] + 5.*t2786*t5263*var5[9] + 20.*t2766*t4880*t5088*var5[19] - 5.*t2786*t5263*var5[19] + 30.*t2785*t4864*t4865*var5[29] - 20.*t2766*t4880*t5088*var5[29] + 20.*t2770*t2782*t2794*var5[39] - 30.*t2785*t4864*t4865*var5[39] - 20.*t2770*t2782*t2794*var5[49] + 5.*t2734*t5145*var5[49] - 5.*t2734*t5145*var5[59])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
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
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 60 && ncols == 1) && 
      !(mrows == 1 && ncols == 60))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "d2y_time_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void d2y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
