/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:07 GMT-04:00
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
  double t145;
  double t207;
  double t202;
  double t175;
  double t216;
  double t120;
  double t242;
  double t252;
  double t276;
  double t278;
  double t284;
  double t303;
  double t305;
  double t309;
  double t246;
  double t260;
  double t269;
  double t204;
  double t218;
  double t221;
  double t387;
  double t389;
  double t392;
  double t397;
  double t408;
  double t414;
  double t285;
  double t286;
  double t299;
  double t235;
  double t239;
  double t240;
  double t312;
  double t315;
  double t327;
  t145 = Cos(var1[5]);
  t207 = Cos(var1[3]);
  t202 = Sin(var1[4]);
  t175 = Sin(var1[3]);
  t216 = Sin(var1[5]);
  t120 = Cos(var1[4]);
  t242 = Cos(var1[6]);
  t252 = Sin(var1[6]);
  t276 = t207*t145;
  t278 = -1.*t175*t202*t216;
  t284 = t276 + t278;
  t303 = t145*t175;
  t305 = t207*t202*t216;
  t309 = t303 + t305;
  t246 = -1.*t120*t242*t216;
  t260 = t202*t252;
  t269 = t246 + t260;
  t204 = t145*t175*t202;
  t218 = t207*t216;
  t221 = t204 + t218;
  t387 = -1.*t242;
  t389 = 1. + t387;
  t392 = 0.135*t389;
  t397 = 0. + t392;
  t408 = -0.135*t252;
  t414 = 0. + t408;
  t285 = t242*t284;
  t286 = -1.*t120*t175*t252;
  t299 = t285 + t286;
  t235 = -1.*t207*t145*t202;
  t239 = t175*t216;
  t240 = t235 + t239;
  t312 = t242*t309;
  t315 = t207*t120*t252;
  t327 = t312 + t315;
  p_output1[0]=t120*t145;
  p_output1[1]=t221;
  p_output1[2]=t240;
  p_output1[3]=0.;
  p_output1[4]=t269;
  p_output1[5]=t299;
  p_output1[6]=t327;
  p_output1[7]=0.;
  p_output1[8]=t202*t242 + t120*t216*t252;
  p_output1[9]=-1.*t120*t175*t242 - 1.*t252*t284;
  p_output1[10]=t120*t207*t242 - 1.*t252*t309;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t120*t145 + 0.135*t269 - 1.*t120*t216*t397 + t202*t414 + var1[0];
  p_output1[13]=0. - 0.049*t221 + 0.135*t299 + t284*t397 - 1.*t120*t175*t414 + var1[1];
  p_output1[14]=0. - 0.049*t240 + 0.135*t327 + t309*t397 + t120*t207*t414 + var1[2];
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

#include "H_hip_abduction_left.hh"

namespace SymExpression
{

void H_hip_abduction_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
