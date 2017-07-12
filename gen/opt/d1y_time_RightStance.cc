/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:42:11 GMT-04:00
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
  double t493;
  double t643;
  double t2409;
  double t2415;
  double t2445;
  double t2446;
  double t2450;
  double t2457;
  double t2489;
  double t2490;
  double t3589;
  double t3606;
  double t3607;
  double t3608;
  double t3609;
  double t3611;
  double t3624;
  double t3628;
  double t3632;
  double t3638;
  double t3639;
  double t3680;
  t493 = -1.*var5[1];
  t643 = var5[0] + t493;
  t2409 = Power(t643,-5);
  t2415 = -1. + var6[0];
  t2445 = -1. + var7[0];
  t2446 = 1/t2445;
  t2450 = -1.*var1[0];
  t2457 = t2450 + var1[1];
  t2489 = t2415*t2446*t2457;
  t2490 = t493 + var1[0] + t2489;
  t3589 = Power(t2490,4);
  t3606 = Power(t643,-4);
  t3607 = Power(t2490,3);
  t3608 = 1/t643;
  t3609 = -1.*t3608*t2490;
  t3611 = 1. + t3609;
  t3624 = Power(t643,-3);
  t3628 = Power(t2490,2);
  t3632 = Power(t3611,2);
  t3638 = Power(t643,-2);
  t3639 = Power(t3611,3);
  t3680 = Power(t3611,4);
  p_output1[0]=var3[7] + 5.*t3608*t3680*var4[0] + 20.*t2490*t3638*t3639*var4[10] - 5.*t3608*t3680*var4[10] + 30.*t3624*t3628*t3632*var4[20] - 20.*t2490*t3638*t3639*var4[20] + 20.*t3606*t3607*t3611*var4[30] - 30.*t3624*t3628*t3632*var4[30] + 5.*t2409*t3589*var4[40] - 20.*t3606*t3607*t3611*var4[40] - 5.*t2409*t3589*var4[50];
  p_output1[1]=var3[8] + 5.*t3608*t3680*var4[1] + 20.*t2490*t3638*t3639*var4[11] - 5.*t3608*t3680*var4[11] + 30.*t3624*t3628*t3632*var4[21] - 20.*t2490*t3638*t3639*var4[21] + 20.*t3606*t3607*t3611*var4[31] - 30.*t3624*t3628*t3632*var4[31] + 5.*t2409*t3589*var4[41] - 20.*t3606*t3607*t3611*var4[41] - 5.*t2409*t3589*var4[51];
  p_output1[2]=var3[9] + 5.*t3608*t3680*var4[2] + 20.*t2490*t3638*t3639*var4[12] - 5.*t3608*t3680*var4[12] + 30.*t3624*t3628*t3632*var4[22] - 20.*t2490*t3638*t3639*var4[22] + 20.*t3606*t3607*t3611*var4[32] - 30.*t3624*t3628*t3632*var4[32] + 5.*t2409*t3589*var4[42] - 20.*t3606*t3607*t3611*var4[42] - 5.*t2409*t3589*var4[52];
  p_output1[3]=var3[10] + 5.*t3608*t3680*var4[3] + 20.*t2490*t3638*t3639*var4[13] - 5.*t3608*t3680*var4[13] + 30.*t3624*t3628*t3632*var4[23] - 20.*t2490*t3638*t3639*var4[23] + 20.*t3606*t3607*t3611*var4[33] - 30.*t3624*t3628*t3632*var4[33] + 5.*t2409*t3589*var4[43] - 20.*t3606*t3607*t3611*var4[43] - 5.*t2409*t3589*var4[53];
  p_output1[4]=var3[13] + 5.*t3608*t3680*var4[4] + 20.*t2490*t3638*t3639*var4[14] - 5.*t3608*t3680*var4[14] + 30.*t3624*t3628*t3632*var4[24] - 20.*t2490*t3638*t3639*var4[24] + 20.*t3606*t3607*t3611*var4[34] - 30.*t3624*t3628*t3632*var4[34] + 5.*t2409*t3589*var4[44] - 20.*t3606*t3607*t3611*var4[44] - 5.*t2409*t3589*var4[54];
  p_output1[5]=var3[15] + 5.*t3608*t3680*var4[5] + 20.*t2490*t3638*t3639*var4[15] - 5.*t3608*t3680*var4[15] + 30.*t3624*t3628*t3632*var4[25] - 20.*t2490*t3638*t3639*var4[25] + 20.*t3606*t3607*t3611*var4[35] - 30.*t3624*t3628*t3632*var4[35] + 5.*t2409*t3589*var4[45] - 20.*t3606*t3607*t3611*var4[45] - 5.*t2409*t3589*var4[55];
  p_output1[6]=var3[16] + 5.*t3608*t3680*var4[6] + 20.*t2490*t3638*t3639*var4[16] - 5.*t3608*t3680*var4[16] + 30.*t3624*t3628*t3632*var4[26] - 20.*t2490*t3638*t3639*var4[26] + 20.*t3606*t3607*t3611*var4[36] - 30.*t3624*t3628*t3632*var4[36] + 5.*t2409*t3589*var4[46] - 20.*t3606*t3607*t3611*var4[46] - 5.*t2409*t3589*var4[56];
  p_output1[7]=var3[17] + 5.*t3608*t3680*var4[7] + 20.*t2490*t3638*t3639*var4[17] - 5.*t3608*t3680*var4[17] + 30.*t3624*t3628*t3632*var4[27] - 20.*t2490*t3638*t3639*var4[27] + 20.*t3606*t3607*t3611*var4[37] - 30.*t3624*t3628*t3632*var4[37] + 5.*t2409*t3589*var4[47] - 20.*t3606*t3607*t3611*var4[47] - 5.*t2409*t3589*var4[57];
  p_output1[8]=var3[18] + 5.*t3608*t3680*var4[8] + 20.*t2490*t3638*t3639*var4[18] - 5.*t3608*t3680*var4[18] + 30.*t3624*t3628*t3632*var4[28] - 20.*t2490*t3638*t3639*var4[28] + 20.*t3606*t3607*t3611*var4[38] - 30.*t3624*t3628*t3632*var4[38] + 5.*t2409*t3589*var4[48] - 20.*t3606*t3607*t3611*var4[48] - 5.*t2409*t3589*var4[58];
  p_output1[9]=var3[21] + 5.*t3608*t3680*var4[9] + 20.*t2490*t3638*t3639*var4[19] - 5.*t3608*t3680*var4[19] + 30.*t3624*t3628*t3632*var4[29] - 20.*t2490*t3638*t3639*var4[29] + 20.*t3606*t3607*t3611*var4[39] - 30.*t3624*t3628*t3632*var4[39] + 5.*t2409*t3589*var4[49] - 20.*t3606*t3607*t3611*var4[49] - 5.*t2409*t3589*var4[59];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "d1y_time_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void d1y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
