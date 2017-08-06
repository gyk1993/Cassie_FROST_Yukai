/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:09 GMT-04:00
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
  double t305;
  double t356;
  double t457;
  double t482;
  double t501;
  double t528;
  double t566;
  double t574;
  double t579;
  double t548;
  double t552;
  double t555;
  double t580;
  double t629;
  double t636;
  double t644;
  double t671;
  double t610;
  double t613;
  double t624;
  double t681;
  double t377;
  double t408;
  double t421;
  double t439;
  double t732;
  double t505;
  double t516;
  double t539;
  double t540;
  double t543;
  double t546;
  double t727;
  double t731;
  double t736;
  double t737;
  double t581;
  double t590;
  double t759;
  double t762;
  double t772;
  double t753;
  double t755;
  double t756;
  double t663;
  double t672;
  double t679;
  double t682;
  double t685;
  double t686;
  double t786;
  double t790;
  double t793;
  double t799;
  double t811;
  double t812;
  double t850;
  double t852;
  double t866;
  double t903;
  double t905;
  double t906;
  double t892;
  double t896;
  double t900;
  double t916;
  double t922;
  double t924;
  double t928;
  double t929;
  double t934;
  t305 = Cos(var1[4]);
  t356 = Cos(var1[6]);
  t457 = Sin(var1[5]);
  t482 = Sin(var1[4]);
  t501 = Sin(var1[6]);
  t528 = Cos(var1[7]);
  t566 = t356*t482;
  t574 = t305*t457*t501;
  t579 = t566 + t574;
  t548 = -1.*t305*t356*t457;
  t552 = t482*t501;
  t555 = t548 + t552;
  t580 = Sin(var1[7]);
  t629 = Cos(var1[8]);
  t636 = -1.*t629;
  t644 = 1. + t636;
  t671 = Sin(var1[8]);
  t610 = t528*t555;
  t613 = t579*t580;
  t624 = t610 + t613;
  t681 = Cos(var1[5]);
  t377 = -1.*t356;
  t408 = 1. + t377;
  t421 = 0.135*t408;
  t439 = 0. + t421;
  t732 = Sin(var1[3]);
  t505 = -0.135*t501;
  t516 = 0. + t505;
  t539 = -1.*t528;
  t540 = 1. + t539;
  t543 = 0.135*t540;
  t546 = 0. + t543;
  t727 = Cos(var1[3]);
  t731 = t727*t681;
  t736 = -1.*t732*t482*t457;
  t737 = t731 + t736;
  t581 = -0.135*t580;
  t590 = 0. + t581;
  t759 = -1.*t305*t356*t732;
  t762 = -1.*t737*t501;
  t772 = t759 + t762;
  t753 = t356*t737;
  t755 = -1.*t305*t732*t501;
  t756 = t753 + t755;
  t663 = 0.135*t644;
  t672 = 0.049*t671;
  t679 = 0. + t663 + t672;
  t682 = -0.049*t644;
  t685 = 0.135*t671;
  t686 = 0. + t682 + t685;
  t786 = t528*t756;
  t790 = t772*t580;
  t793 = t786 + t790;
  t799 = t681*t732*t482;
  t811 = t727*t457;
  t812 = t799 + t811;
  t850 = t681*t732;
  t852 = t727*t482*t457;
  t866 = t850 + t852;
  t903 = t727*t305*t356;
  t905 = -1.*t866*t501;
  t906 = t903 + t905;
  t892 = t356*t866;
  t896 = t727*t305*t501;
  t900 = t892 + t896;
  t916 = t528*t900;
  t922 = t906*t580;
  t924 = t916 + t922;
  t928 = -1.*t727*t681*t482;
  t929 = t732*t457;
  t934 = t928 + t929;
  p_output1[0]=0. - 1.*t305*t439*t457 + t482*t516 + t546*t555 - 0.09*(t528*t579 - 1.*t555*t580) + t579*t590 + t624*t679 - 0.049*(t624*t671 + t305*t629*t681) + 0.135*(t624*t629 - 1.*t305*t671*t681) + t305*t681*t686 + var1[0];
  p_output1[1]=0. - 1.*t305*t516*t732 + t439*t737 + t546*t756 + t590*t772 - 0.09*(-1.*t580*t756 + t528*t772) + t679*t793 + t686*t812 - 0.049*(t671*t793 + t629*t812) + 0.135*(t629*t793 - 1.*t671*t812) + var1[1];
  p_output1[2]=0. + t305*t516*t727 + t439*t866 + t546*t900 + t590*t906 - 0.09*(-1.*t580*t900 + t528*t906) + t679*t924 + t686*t934 - 0.049*(t671*t924 + t629*t934) + 0.135*(t629*t924 - 1.*t671*t934) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_hip_flexion_left.hh"

namespace SymExpression
{

void p_hip_flexion_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
