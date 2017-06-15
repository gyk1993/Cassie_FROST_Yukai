/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:10:44 GMT-04:00
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
  double t5;
  double t6;
  double t9;
  double t17;
  double t26;
  double t27;
  double t32;
  double t36;
  double t38;
  double t60;
  double t62;
  double t69;
  double t7;
  double t39;
  double t44;
  double t47;
  double t79;
  double t91;
  double t97;
  double t103;
  double t106;
  double t132;
  double t135;
  double t167;
  t5 = -1.*var4[1];
  t6 = var4[0] + t5;
  t9 = -1. + var5[0];
  t17 = -1. + var6[0];
  t26 = 1/t17;
  t27 = -1.*var1[0];
  t32 = t27 + var1[1];
  t36 = t9*t26*t32;
  t38 = t5 + var1[0] + t36;
  t60 = 1/t6;
  t62 = -1.*t60*t38;
  t69 = 1. + t62;
  t7 = Power(t6,-5);
  t39 = Power(t38,5);
  t44 = Power(t6,-4);
  t47 = Power(t38,4);
  t79 = Power(t6,-3);
  t91 = Power(t38,3);
  t97 = Power(t69,2);
  t103 = Power(t6,-2);
  t106 = Power(t38,2);
  t132 = Power(t69,3);
  t135 = Power(t69,4);
  t167 = Power(t69,5);
  p_output1[0]=var2[7] - 1.*t167*var3[0] - 5.*t135*t38*t60*var3[10] - 10.*t103*t106*t132*var3[20] - 10.*t79*t91*t97*var3[30] - 5.*t44*t47*t69*var3[40] - 1.*t39*t7*var3[50];
  p_output1[1]=var2[8] - 1.*t167*var3[1] - 5.*t135*t38*t60*var3[11] - 10.*t103*t106*t132*var3[21] - 10.*t79*t91*t97*var3[31] - 5.*t44*t47*t69*var3[41] - 1.*t39*t7*var3[51];
  p_output1[2]=var2[9] - 1.*t167*var3[2] - 5.*t135*t38*t60*var3[12] - 10.*t103*t106*t132*var3[22] - 10.*t79*t91*t97*var3[32] - 5.*t44*t47*t69*var3[42] - 1.*t39*t7*var3[52];
  p_output1[3]=var2[10] - 1.*t167*var3[3] - 5.*t135*t38*t60*var3[13] - 10.*t103*t106*t132*var3[23] - 10.*t79*t91*t97*var3[33] - 5.*t44*t47*t69*var3[43] - 1.*t39*t7*var3[53];
  p_output1[4]=var2[13] - 1.*t167*var3[4] - 5.*t135*t38*t60*var3[14] - 10.*t103*t106*t132*var3[24] - 10.*t79*t91*t97*var3[34] - 5.*t44*t47*t69*var3[44] - 1.*t39*t7*var3[54];
  p_output1[5]=var2[15] - 1.*t167*var3[5] - 5.*t135*t38*t60*var3[15] - 10.*t103*t106*t132*var3[25] - 10.*t79*t91*t97*var3[35] - 5.*t44*t47*t69*var3[45] - 1.*t39*t7*var3[55];
  p_output1[6]=var2[16] - 1.*t167*var3[6] - 5.*t135*t38*t60*var3[16] - 10.*t103*t106*t132*var3[26] - 10.*t79*t91*t97*var3[36] - 5.*t44*t47*t69*var3[46] - 1.*t39*t7*var3[56];
  p_output1[7]=var2[17] - 1.*t167*var3[7] - 5.*t135*t38*t60*var3[17] - 10.*t103*t106*t132*var3[27] - 10.*t79*t91*t97*var3[37] - 5.*t44*t47*t69*var3[47] - 1.*t39*t7*var3[57];
  p_output1[8]=var2[18] - 1.*t167*var3[8] - 5.*t135*t38*t60*var3[18] - 10.*t103*t106*t132*var3[28] - 10.*t79*t91*t97*var3[38] - 5.*t44*t47*t69*var3[48] - 1.*t39*t7*var3[58];
  p_output1[9]=var2[21] - 1.*t167*var3[9] - 5.*t135*t38*t60*var3[19] - 10.*t103*t106*t132*var3[29] - 10.*t79*t91*t97*var3[39] - 5.*t44*t47*t69*var3[49] - 1.*t39*t7*var3[59];
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

#include "y_time_LeftStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void y_time_LeftStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
