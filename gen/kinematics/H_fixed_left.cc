/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:27:57 GMT-04:00
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
  double t13;
  double t19;
  double t14;
  double t8;
  double t21;
  double t23;
  double t31;
  double t32;
  double t33;
  double t24;
  double t25;
  double t26;
  double t34;
  double t35;
  double t36;
  double t27;
  double t28;
  double t29;
  t13 = Cos(var1[4]);
  t19 = Cos(var1[3]);
  t14 = Sin(var1[3]);
  t8 = Sin(var1[4]);
  t21 = Sin(var1[5]);
  t23 = Cos(var1[5]);
  t31 = t23*t14*t8;
  t32 = t19*t21;
  t33 = t31 + t32;
  t24 = t19*t23;
  t25 = -1.*t14*t8*t21;
  t26 = t24 + t25;
  t34 = -1.*t19*t23*t8;
  t35 = t14*t21;
  t36 = t34 + t35;
  t27 = t23*t14;
  t28 = t19*t8*t21;
  t29 = t27 + t28;
  p_output1[0]=-1.*t8;
  p_output1[1]=t13*t14;
  p_output1[2]=-1.*t13*t19;
  p_output1[3]=0;
  p_output1[4]=-1.*t13*t21;
  p_output1[5]=t26;
  p_output1[6]=t29;
  p_output1[7]=0;
  p_output1[8]=t13*t23;
  p_output1[9]=t33;
  p_output1[10]=t36;
  p_output1[11]=0;
  p_output1[12]=-0.135*t13*t21 + 0.021*t13*t23 + var1[0];
  p_output1[13]=0.135*t26 + 0.021*t33 + var1[1];
  p_output1[14]=0.135*t29 + 0.021*t36 + var1[2];
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

#include "H_fixed_left.hh"

namespace SymExpression
{

void H_fixed_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
