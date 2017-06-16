/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:30:24 GMT-04:00
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
  double t2218;
  double t211;
  double t604;
  double t1269;
  double t2212;
  double t2445;
  double t2587;
  double t2591;
  double t2613;
  double t2725;
  double t4867;
  double t4990;
  double t6942;
  double t7264;
  double t7363;
  double t5294;
  double t5340;
  double t6671;
  double t7436;
  double t7778;
  double t7810;
  double t7812;
  double t7899;
  double t7910;
  double t7921;
  double t7929;
  double t7750;
  double t7762;
  double t7774;
  double t7531;
  double t7538;
  double t7542;
  double t7624;
  double t7678;
  double t7688;
  double t7706;
  double t7989;
  double t8003;
  double t8012;
  double t8018;
  double t8019;
  double t8022;
  double t8026;
  double t8030;
  double t8033;
  double t8039;
  double t8066;
  double t8074;
  double t8087;
  double t8102;
  double t8114;
  double t8139;
  double t8141;
  double t8147;
  double t8181;
  double t8184;
  double t8189;
  double t8214;
  double t8217;
  double t8222;
  double t8238;
  double t8243;
  double t8244;
  double t8245;
  double t8279;
  double t8281;
  double t8282;
  double t8294;
  double t8303;
  double t8312;
  double t8323;
  double t8352;
  double t8363;
  double t8378;
  double t8402;
  double t8404;
  double t8406;
  t2218 = Cos(var1[3]);
  t211 = Cos(var1[6]);
  t604 = Cos(var1[5]);
  t1269 = Sin(var1[3]);
  t2212 = t604*t1269;
  t2445 = Sin(var1[4]);
  t2587 = Sin(var1[5]);
  t2591 = t2218*t2445*t2587;
  t2613 = t2212 + t2591;
  t2725 = Cos(var1[4]);
  t4867 = Sin(var1[6]);
  t4990 = Cos(var1[7]);
  t6942 = t2218*t2725*t211;
  t7264 = -1.*t2613*t4867;
  t7363 = t6942 + t7264;
  t5294 = t211*t2613;
  t5340 = t2218*t2725*t4867;
  t6671 = t5294 + t5340;
  t7436 = Sin(var1[7]);
  t7778 = Cos(var1[8]);
  t7810 = -1.*t7778;
  t7812 = 1. + t7810;
  t7899 = Sin(var1[8]);
  t7910 = t4990*t6671;
  t7921 = t7363*t7436;
  t7929 = t7910 + t7921;
  t7750 = -1.*t2218*t604*t2445;
  t7762 = t1269*t2587;
  t7774 = t7750 + t7762;
  t7531 = Cos(var1[9]);
  t7538 = -1.*t7531;
  t7542 = 1. + t7538;
  t7624 = Sin(var1[9]);
  t7678 = t4990*t7363;
  t7688 = -1.*t6671*t7436;
  t7706 = t7678 + t7688;
  t7989 = t7778*t7774;
  t8003 = -1.*t7929*t7899;
  t8012 = t7989 + t8003;
  t8018 = Cos(var1[10]);
  t8019 = -1.*t8018;
  t8022 = 1. + t8019;
  t8026 = Sin(var1[10]);
  t8030 = t7624*t7706;
  t8033 = t7531*t8012;
  t8039 = t8030 + t8033;
  t8066 = t7531*t7706;
  t8074 = -1.*t7624*t8012;
  t8087 = t8066 + t8074;
  t8102 = Cos(var1[11]);
  t8114 = Sin(var1[11]);
  t8139 = -1.*t8026*t8039;
  t8141 = t8018*t8087;
  t8147 = t8139 + t8141;
  t8181 = t8018*t8039;
  t8184 = t8026*t8087;
  t8189 = t8181 + t8184;
  t8214 = Cos(var1[12]);
  t8217 = -1.*t8214;
  t8222 = 1. + t8217;
  t8238 = Sin(var1[12]);
  t8243 = t8114*t8147;
  t8244 = t8102*t8189;
  t8245 = t8243 + t8244;
  t8279 = t8102*t8147;
  t8281 = -1.*t8114*t8189;
  t8282 = t8279 + t8281;
  t8294 = Cos(var1[13]);
  t8303 = -1.*t8294;
  t8312 = 1. + t8303;
  t8323 = Sin(var1[13]);
  t8352 = -1.*t8238*t8245;
  t8363 = t8214*t8282;
  t8378 = t8352 + t8363;
  t8402 = t8214*t8245;
  t8404 = t8238*t8282;
  t8406 = t8402 + t8404;
  p_output1[0]=0.135*(1. - 1.*t211)*t2613 - 0.135*t2218*t2725*t4867 + 0.135*(1. - 1.*t4990)*t6671 - 0.135*t7363*t7436 + (-0.09*t7542 + 0.049*t7624)*t7706 + t7774*(-0.049*t7812 - 0.135*t7899) + (0.135*t7812 - 0.049*t7899)*t7929 + 0.1305*(t7774*t7899 + t7778*t7929) + (-0.049*t7542 - 0.09*t7624)*t8012 + (-0.049*t8022 - 0.21*t8026)*t8039 + (-0.21*t8022 + 0.049*t8026)*t8087 + (-0.2707*(1. - 1.*t8102) + 0.0016*t8114)*t8147 + (0.0016*(-1. + t8102) - 0.2707*t8114)*t8189 + (0.0184*t8222 - 0.7055*t8238)*t8245 + (-0.7055*t8222 - 0.0184*t8238)*t8282 + (-1.1135*t8312 + 0.0216*t8323)*t8378 + (-0.0216*t8312 - 1.1135*t8323)*t8406 + 0.0306*(t8323*t8378 + t8294*t8406) - 1.1312*(t8294*t8378 - 1.*t8323*t8406) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "u_leftFootHeight_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
