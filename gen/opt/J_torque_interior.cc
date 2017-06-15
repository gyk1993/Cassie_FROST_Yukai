/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 16:45:56 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t1980;
  double t1981;
  double t2053;
  double t2099;
  double t2100;
  double t2101;
  double t2106;
  double t2174;
  double t2204;
  double t2233;
  double t2245;
  double t2259;
  double t2285;
  double t2425;
  double t2429;
  t1980 = -1. + var3[0];
  t1981 = 1/t1980;
  t2053 = Power(var2[9],2);
  t2099 = Power(var2[0],2);
  t2100 = Power(var2[1],2);
  t2101 = Power(var2[2],2);
  t2106 = Power(var2[3],2);
  t2174 = Power(var2[4],2);
  t2204 = Power(var2[5],2);
  t2233 = Power(var2[6],2);
  t2245 = Power(var2[7],2);
  t2259 = Power(var2[8],2);
  t2285 = t2053 + t2099 + t2100 + t2101 + t2106 + t2174 + t2204 + t2233 + t2245 + t2259;
  t2425 = -1.*var1[0];
  t2429 = t2425 + var1[1];
  p_output1[0]=-0.666666666666667*t1981*t2285;
  p_output1[1]=0.666666666666667*t1981*t2285;
  p_output1[2]=1.33333333333333*t1981*t2429*var2[0];
  p_output1[3]=1.33333333333333*t1981*t2429*var2[1];
  p_output1[4]=1.33333333333333*t1981*t2429*var2[2];
  p_output1[5]=1.33333333333333*t1981*t2429*var2[3];
  p_output1[6]=1.33333333333333*t1981*t2429*var2[4];
  p_output1[7]=1.33333333333333*t1981*t2429*var2[5];
  p_output1[8]=1.33333333333333*t1981*t2429*var2[6];
  p_output1[9]=1.33333333333333*t1981*t2429*var2[7];
  p_output1[10]=1.33333333333333*t1981*t2429*var2[8];
  p_output1[11]=1.33333333333333*t1981*t2429*var2[9];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
    ( !(mrows == 10 && ncols == 1) && 
      !(mrows == 1 && ncols == 10))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "J_torque_interior.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void J_torque_interior_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE