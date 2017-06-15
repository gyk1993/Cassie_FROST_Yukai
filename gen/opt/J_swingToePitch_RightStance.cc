/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 13:24:51 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t6;
  double t7;
  double t9;
  double t91;
  double t5;
  double t27;
  double t39;
  double t47;
  double t103;
  double t132;
  double t191;
  double t477;
  double t497;
  double t534;
  double t565;
  double t568;
  double t569;
  double t585;
  double t614;
  double t625;
  double t626;
  double t3;
  double t890;
  double t923;
  double t934;
  double t461;
  double t954;
  double t1061;
  double t1067;
  double t1068;
  double t1106;
  double t1109;
  double t1122;
  double t1245;
  double t1259;
  double t1283;
  double t1349;
  double t1377;
  double t1389;
  double t60;
  double t250;
  double t365;
  double t634;
  t6 = Cos(var1[8]);
  t7 = -1.*t6;
  t9 = 0. + t7;
  t91 = Cos(var1[6]);
  t5 = Cos(var1[7]);
  t27 = t5*t9;
  t39 = 0. + t27;
  t47 = Sin(var1[6]);
  t103 = Sin(var1[7]);
  t132 = t9*t103;
  t191 = 0. + t132;
  t477 = Sin(var1[5]);
  t497 = t91*t39;
  t534 = -1.*t47*t191;
  t565 = 0. + t497 + t534;
  t568 = -1.*t477*t565;
  t569 = Cos(var1[5]);
  t585 = Sin(var1[8]);
  t614 = -1.*t585;
  t625 = 0. + t614;
  t626 = t569*t625;
  t3 = Cos(var1[4]);
  t890 = -1.*t39*t47;
  t923 = -1.*t91*t191;
  t934 = t890 + t923;
  t461 = Sin(var1[4]);
  t954 = t497 + t534;
  t1061 = -1.*t5*t9*t47;
  t1067 = -1.*t91*t9*t103;
  t1068 = t1061 + t1067;
  t1106 = t91*t5*t9;
  t1109 = -1.*t9*t47*t103;
  t1122 = t1106 + t1109;
  t1245 = t5*t47*t585;
  t1259 = t91*t103*t585;
  t1283 = t1245 + t1259;
  t1349 = t91*t5*t585;
  t1377 = -1.*t47*t103*t585;
  t1389 = t1349 + t1377;
  t60 = t39*t47;
  t250 = t91*t191;
  t365 = 0. + t60 + t250;
  t634 = 0. + t568 + t626;
  p_output1[0]=(t3*t365 - 1.*t461*t634)*var2[3];
  p_output1[1]=t3*(-1.*t565*t569 - 1.*t477*t625)*var2[3] + (t568 + t626)*var2[4];
  p_output1[2]=(-1.*t3*t477*t934 + t461*t954)*var2[3] + t569*t934*var2[4] + t954*var2[5];
  p_output1[3]=(t1122*t461 - 1.*t1068*t3*t477)*var2[3] + t1068*t569*var2[4] + t1122*var2[5];
  p_output1[4]=(t1283*t461 + t3*(-1.*t1389*t477 - 1.*t569*t6))*var2[3] + (t1389*t569 - 1.*t477*t6)*var2[4] + t1283*var2[5] - 1.*t6*var2[6] - 1.*t6*var2[7];
  p_output1[5]=0. + t365*t461 + t3*t634;
  p_output1[6]=0. + t565*t569 + t477*t625;
  p_output1[7]=t365;
  p_output1[8]=t625;
  p_output1[9]=t625;
  p_output1[10]=1.;
  p_output1[11]=1.;
  p_output1[12]=1.;
  p_output1[13]=1.;
  p_output1[14]=1.;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 15, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_swingToePitch_RightStance.hh"

namespace RightStance
{

void J_swingToePitch_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
