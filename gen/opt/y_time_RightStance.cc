/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:05:06 GMT-04:00
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
  double t170;
  double t297;
  double t390;
  double t438;
  double t457;
  double t488;
  double t517;
  double t563;
  double t574;
  double t707;
  double t735;
  double t752;
  double t377;
  double t612;
  double t681;
  double t689;
  double t767;
  double t781;
  double t794;
  double t810;
  double t825;
  double t901;
  double t994;
  double t996;
  t170 = -1.*var4[1];
  t297 = var4[0] + t170;
  t390 = -1. + var5[0];
  t438 = -1. + var6[0];
  t457 = 1/t438;
  t488 = -1.*var1[0];
  t517 = t488 + var1[1];
  t563 = t390*t457*t517;
  t574 = t170 + var1[0] + t563;
  t707 = 1/t297;
  t735 = -1.*t707*t574;
  t752 = 1. + t735;
  t377 = Power(t297,-5);
  t612 = Power(t574,5);
  t681 = Power(t297,-4);
  t689 = Power(t574,4);
  t767 = Power(t297,-3);
  t781 = Power(t574,3);
  t794 = Power(t752,2);
  t810 = Power(t297,-2);
  t825 = Power(t574,2);
  t901 = Power(t752,3);
  t994 = Power(t752,4);
  t996 = Power(t752,5);
  p_output1[0]=var2[7] - 1.*t996*var3[0] - 5.*t574*t707*t994*var3[10] - 10.*t810*t825*t901*var3[20] - 10.*t767*t781*t794*var3[30] - 5.*t681*t689*t752*var3[40] - 1.*t377*t612*var3[50];
  p_output1[1]=var2[8] - 1.*t996*var3[1] - 5.*t574*t707*t994*var3[11] - 10.*t810*t825*t901*var3[21] - 10.*t767*t781*t794*var3[31] - 5.*t681*t689*t752*var3[41] - 1.*t377*t612*var3[51];
  p_output1[2]=var2[9] - 1.*t996*var3[2] - 5.*t574*t707*t994*var3[12] - 10.*t810*t825*t901*var3[22] - 10.*t767*t781*t794*var3[32] - 5.*t681*t689*t752*var3[42] - 1.*t377*t612*var3[52];
  p_output1[3]=var2[10] - 1.*t996*var3[3] - 5.*t574*t707*t994*var3[13] - 10.*t810*t825*t901*var3[23] - 10.*t767*t781*t794*var3[33] - 5.*t681*t689*t752*var3[43] - 1.*t377*t612*var3[53];
  p_output1[4]=var2[13] - 1.*t996*var3[4] - 5.*t574*t707*t994*var3[14] - 10.*t810*t825*t901*var3[24] - 10.*t767*t781*t794*var3[34] - 5.*t681*t689*t752*var3[44] - 1.*t377*t612*var3[54];
  p_output1[5]=var2[15] - 1.*t996*var3[5] - 5.*t574*t707*t994*var3[15] - 10.*t810*t825*t901*var3[25] - 10.*t767*t781*t794*var3[35] - 5.*t681*t689*t752*var3[45] - 1.*t377*t612*var3[55];
  p_output1[6]=var2[16] - 1.*t996*var3[6] - 5.*t574*t707*t994*var3[16] - 10.*t810*t825*t901*var3[26] - 10.*t767*t781*t794*var3[36] - 5.*t681*t689*t752*var3[46] - 1.*t377*t612*var3[56];
  p_output1[7]=var2[17] - 1.*t996*var3[7] - 5.*t574*t707*t994*var3[17] - 10.*t810*t825*t901*var3[27] - 10.*t767*t781*t794*var3[37] - 5.*t681*t689*t752*var3[47] - 1.*t377*t612*var3[57];
  p_output1[8]=var2[18] - 1.*t996*var3[8] - 5.*t574*t707*t994*var3[18] - 10.*t810*t825*t901*var3[28] - 10.*t767*t781*t794*var3[38] - 5.*t681*t689*t752*var3[48] - 1.*t377*t612*var3[58];
  p_output1[9]=var2[21] - 1.*t996*var3[9] - 5.*t574*t707*t994*var3[19] - 10.*t810*t825*t901*var3[29] - 10.*t767*t781*t794*var3[39] - 5.*t681*t689*t752*var3[49] - 1.*t377*t612*var3[59];
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

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
