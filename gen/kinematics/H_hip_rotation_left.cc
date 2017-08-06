/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:08 GMT-04:00
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
  double t315;
  double t260;
  double t342;
  double t285;
  double t343;
  double t218;
  double t443;
  double t451;
  double t454;
  double t457;
  double t460;
  double t462;
  double t418;
  double t527;
  double t528;
  double t530;
  double t385;
  double t408;
  double t417;
  double t305;
  double t356;
  double t372;
  double t482;
  double t485;
  double t497;
  double t449;
  double t466;
  double t477;
  double t540;
  double t543;
  double t545;
  double t516;
  double t535;
  double t536;
  double t555;
  double t565;
  double t566;
  double t618;
  double t623;
  double t624;
  double t625;
  double t636;
  double t639;
  double t657;
  double t659;
  double t663;
  double t671;
  double t679;
  double t680;
  double t567;
  double t574;
  double t579;
  t315 = Cos(var1[4]);
  t260 = Cos(var1[6]);
  t342 = Sin(var1[5]);
  t285 = Sin(var1[4]);
  t343 = Sin(var1[6]);
  t218 = Cos(var1[7]);
  t443 = Sin(var1[3]);
  t451 = Cos(var1[3]);
  t454 = Cos(var1[5]);
  t457 = t451*t454;
  t460 = -1.*t443*t285*t342;
  t462 = t457 + t460;
  t418 = Sin(var1[7]);
  t527 = t454*t443;
  t528 = t451*t285*t342;
  t530 = t527 + t528;
  t385 = -1.*t315*t260*t342;
  t408 = t285*t343;
  t417 = t385 + t408;
  t305 = t260*t285;
  t356 = t315*t342*t343;
  t372 = t305 + t356;
  t482 = t260*t462;
  t485 = -1.*t315*t443*t343;
  t497 = t482 + t485;
  t449 = -1.*t315*t260*t443;
  t466 = -1.*t462*t343;
  t477 = t449 + t466;
  t540 = t260*t530;
  t543 = t451*t315*t343;
  t545 = t540 + t543;
  t516 = t451*t315*t260;
  t535 = -1.*t530*t343;
  t536 = t516 + t535;
  t555 = t454*t443*t285;
  t565 = t451*t342;
  t566 = t555 + t565;
  t618 = -1.*t260;
  t623 = 1. + t618;
  t624 = 0.135*t623;
  t625 = 0. + t624;
  t636 = -0.135*t343;
  t639 = 0. + t636;
  t657 = -1.*t218;
  t659 = 1. + t657;
  t663 = 0.135*t659;
  t671 = 0. + t663;
  t679 = -0.135*t418;
  t680 = 0. + t679;
  t567 = -1.*t451*t454*t285;
  t574 = t443*t342;
  t579 = t567 + t574;
  p_output1[0]=-1.*t218*t372 + t417*t418;
  p_output1[1]=-1.*t218*t477 + t418*t497;
  p_output1[2]=-1.*t218*t536 + t418*t545;
  p_output1[3]=0.;
  p_output1[4]=t315*t454;
  p_output1[5]=t566;
  p_output1[6]=t579;
  p_output1[7]=0.;
  p_output1[8]=-1.*t218*t417 - 1.*t372*t418;
  p_output1[9]=-1.*t418*t477 - 1.*t218*t497;
  p_output1[10]=-1.*t418*t536 - 1.*t218*t545;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.135*(t218*t417 + t372*t418) - 0.09*(t218*t372 - 1.*t417*t418) - 0.049*t315*t454 - 1.*t315*t342*t625 + t285*t639 + t417*t671 + t372*t680 + var1[0];
  p_output1[13]=0. + 0.135*(t418*t477 + t218*t497) - 0.09*(t218*t477 - 1.*t418*t497) - 0.049*t566 + t462*t625 - 1.*t315*t443*t639 + t497*t671 + t477*t680 + var1[1];
  p_output1[14]=0. + 0.135*(t418*t536 + t218*t545) - 0.09*(t218*t536 - 1.*t418*t545) - 0.049*t579 + t530*t625 + t315*t451*t639 + t545*t671 + t536*t680 + var1[2];
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

#include "H_hip_rotation_left.hh"

namespace SymExpression
{

void H_hip_rotation_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
