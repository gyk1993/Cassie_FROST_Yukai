/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 16:45:54 GMT-04:00
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
  double t1423;
  double t1430;
  double t1569;
  double t1818;
  double t1873;
  double t1904;
  double t1911;
  double t1927;
  double t1946;
  double t1949;
  double t1959;
  double t1960;
  double t1974;
  double t1985;
  double t2030;
  t1423 = -1. + var3[0];
  t1430 = 1/t1423;
  t1569 = Power(var2[9],2);
  t1818 = Power(var2[0],2);
  t1873 = Power(var2[1],2);
  t1904 = Power(var2[2],2);
  t1911 = Power(var2[3],2);
  t1927 = Power(var2[4],2);
  t1946 = Power(var2[5],2);
  t1949 = Power(var2[6],2);
  t1959 = Power(var2[7],2);
  t1960 = Power(var2[8],2);
  t1974 = t1569 + t1818 + t1873 + t1904 + t1911 + t1927 + t1946 + t1949 + t1959 + t1960;
  t1985 = -1.*var1[0];
  t2030 = t1985 + var1[1];
  p_output1[0]=-0.166666666666667*t1430*t1974;
  p_output1[1]=0.166666666666667*t1430*t1974;
  p_output1[2]=0.333333333333333*t1430*t2030*var2[0];
  p_output1[3]=0.333333333333333*t1430*t2030*var2[1];
  p_output1[4]=0.333333333333333*t1430*t2030*var2[2];
  p_output1[5]=0.333333333333333*t1430*t2030*var2[3];
  p_output1[6]=0.333333333333333*t1430*t2030*var2[4];
  p_output1[7]=0.333333333333333*t1430*t2030*var2[5];
  p_output1[8]=0.333333333333333*t1430*t2030*var2[6];
  p_output1[9]=0.333333333333333*t1430*t2030*var2[7];
  p_output1[10]=0.333333333333333*t1430*t2030*var2[8];
  p_output1[11]=0.333333333333333*t1430*t2030*var2[9];
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

#include "J_torque_terminal.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void J_torque_terminal_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
