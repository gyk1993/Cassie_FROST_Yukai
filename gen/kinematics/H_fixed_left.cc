/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:05 GMT-04:00
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
  double t101;
  double t117;
  double t102;
  double t86;
  double t122;
  double t134;
  double t168;
  double t173;
  double t175;
  double t136;
  double t143;
  double t144;
  double t182;
  double t191;
  double t202;
  double t145;
  double t158;
  double t160;
  t101 = Cos(var1[4]);
  t117 = Cos(var1[3]);
  t102 = Sin(var1[3]);
  t86 = Sin(var1[4]);
  t122 = Sin(var1[5]);
  t134 = Cos(var1[5]);
  t168 = t134*t102*t86;
  t173 = t117*t122;
  t175 = t168 + t173;
  t136 = t117*t134;
  t143 = -1.*t102*t86*t122;
  t144 = t136 + t143;
  t182 = -1.*t117*t134*t86;
  t191 = t102*t122;
  t202 = t182 + t191;
  t145 = t134*t102;
  t158 = t117*t86*t122;
  t160 = t145 + t158;
  p_output1[0]=-1.*t86;
  p_output1[1]=t101*t102;
  p_output1[2]=-1.*t101*t117;
  p_output1[3]=0;
  p_output1[4]=-1.*t101*t122;
  p_output1[5]=t144;
  p_output1[6]=t160;
  p_output1[7]=0;
  p_output1[8]=t101*t134;
  p_output1[9]=t175;
  p_output1[10]=t202;
  p_output1[11]=0;
  p_output1[12]=-0.135*t101*t122 + 0.021*t101*t134 + var1[0];
  p_output1[13]=0.135*t144 + 0.021*t175 + var1[1];
  p_output1[14]=0.135*t160 + 0.021*t202 + var1[2];
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
