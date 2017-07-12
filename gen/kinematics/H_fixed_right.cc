/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:07 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t553;
  double t599;
  double t560;
  double t517;
  double t609;
  double t618;
  double t655;
  double t662;
  double t666;
  double t620;
  double t623;
  double t624;
  double t668;
  double t672;
  double t679;
  double t627;
  double t635;
  double t644;
  t553 = Cos(var1[4]);
  t599 = Cos(var1[3]);
  t560 = Sin(var1[3]);
  t517 = Sin(var1[4]);
  t609 = Sin(var1[5]);
  t618 = Cos(var1[5]);
  t655 = t618*t560*t517;
  t662 = t599*t609;
  t666 = t655 + t662;
  t620 = t599*t618;
  t623 = -1.*t560*t517*t609;
  t624 = t620 + t623;
  t668 = -1.*t599*t618*t517;
  t672 = t560*t609;
  t679 = t668 + t672;
  t627 = t618*t560;
  t635 = t599*t517*t609;
  t644 = t627 + t635;
  p_output1[0]=-1.*t517;
  p_output1[1]=t553*t560;
  p_output1[2]=-1.*t553*t599;
  p_output1[3]=0;
  p_output1[4]=-1.*t553*t609;
  p_output1[5]=t624;
  p_output1[6]=t644;
  p_output1[7]=0;
  p_output1[8]=t553*t618;
  p_output1[9]=t666;
  p_output1[10]=t679;
  p_output1[11]=0;
  p_output1[12]=0.135*t553*t609 + 0.021*t553*t618 + var1[0];
  p_output1[13]=-0.135*t624 + 0.021*t666 + var1[1];
  p_output1[14]=-0.135*t644 + 0.021*t679 + var1[2];
  p_output1[15]=1.;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "H_fixed_right.hh"

namespace SymExpression
{

void H_fixed_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
