/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:14 GMT-04:00
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
  double t15;
  double t16;
  double t44;
  double t57;
  double t82;
  double t87;
  double t93;
  double t99;
  double t101;
  double t128;
  double t131;
  double t132;
  double t23;
  double t107;
  double t118;
  double t123;
  double t164;
  double t166;
  double t168;
  double t176;
  double t186;
  double t188;
  double t210;
  double t215;
  t15 = -1.*var4[1];
  t16 = var4[0] + t15;
  t44 = -1. + var5[0];
  t57 = -1. + var6[0];
  t82 = 1/t57;
  t87 = -1.*var1[0];
  t93 = t87 + var1[1];
  t99 = t44*t82*t93;
  t101 = t15 + var1[0] + t99;
  t128 = 1/t16;
  t131 = -1.*t128*t101;
  t132 = 1. + t131;
  t23 = Power(t16,-5);
  t107 = Power(t101,5);
  t118 = Power(t16,-4);
  t123 = Power(t101,4);
  t164 = Power(t16,-3);
  t166 = Power(t101,3);
  t168 = Power(t132,2);
  t176 = Power(t16,-2);
  t186 = Power(t101,2);
  t188 = Power(t132,3);
  t210 = Power(t132,4);
  t215 = Power(t132,5);
  p_output1[0]=var2[7] - 1.*t215*var3[0] - 5.*t101*t128*t210*var3[10] - 10.*t176*t186*t188*var3[20] - 10.*t164*t166*t168*var3[30] - 5.*t118*t123*t132*var3[40] - 1.*t107*t23*var3[50];
  p_output1[1]=var2[8] - 1.*t215*var3[1] - 5.*t101*t128*t210*var3[11] - 10.*t176*t186*t188*var3[21] - 10.*t164*t166*t168*var3[31] - 5.*t118*t123*t132*var3[41] - 1.*t107*t23*var3[51];
  p_output1[2]=var2[9] - 1.*t215*var3[2] - 5.*t101*t128*t210*var3[12] - 10.*t176*t186*t188*var3[22] - 10.*t164*t166*t168*var3[32] - 5.*t118*t123*t132*var3[42] - 1.*t107*t23*var3[52];
  p_output1[3]=var2[10] - 1.*t215*var3[3] - 5.*t101*t128*t210*var3[13] - 10.*t176*t186*t188*var3[23] - 10.*t164*t166*t168*var3[33] - 5.*t118*t123*t132*var3[43] - 1.*t107*t23*var3[53];
  p_output1[4]=var2[13] - 1.*t215*var3[4] - 5.*t101*t128*t210*var3[14] - 10.*t176*t186*t188*var3[24] - 10.*t164*t166*t168*var3[34] - 5.*t118*t123*t132*var3[44] - 1.*t107*t23*var3[54];
  p_output1[5]=var2[15] - 1.*t215*var3[5] - 5.*t101*t128*t210*var3[15] - 10.*t176*t186*t188*var3[25] - 10.*t164*t166*t168*var3[35] - 5.*t118*t123*t132*var3[45] - 1.*t107*t23*var3[55];
  p_output1[6]=var2[16] - 1.*t215*var3[6] - 5.*t101*t128*t210*var3[16] - 10.*t176*t186*t188*var3[26] - 10.*t164*t166*t168*var3[36] - 5.*t118*t123*t132*var3[46] - 1.*t107*t23*var3[56];
  p_output1[7]=var2[17] - 1.*t215*var3[7] - 5.*t101*t128*t210*var3[17] - 10.*t176*t186*t188*var3[27] - 10.*t164*t166*t168*var3[37] - 5.*t118*t123*t132*var3[47] - 1.*t107*t23*var3[57];
  p_output1[8]=var2[18] - 1.*t215*var3[8] - 5.*t101*t128*t210*var3[18] - 10.*t176*t186*t188*var3[28] - 10.*t164*t166*t168*var3[38] - 5.*t118*t123*t132*var3[48] - 1.*t107*t23*var3[58];
  p_output1[9]=var2[21] - 1.*t215*var3[9] - 5.*t101*t128*t210*var3[19] - 10.*t176*t186*t188*var3[29] - 10.*t164*t166*t168*var3[39] - 5.*t118*t123*t132*var3[49] - 1.*t107*t23*var3[59];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "y_time_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
