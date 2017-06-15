/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:05:21 GMT-04:00
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
  double t5519;
  double t3476;
  double t4686;
  double t4710;
  double t5306;
  double t5636;
  double t5762;
  double t5790;
  double t5794;
  double t5826;
  double t5930;
  double t6148;
  double t6601;
  double t6603;
  double t6607;
  double t6460;
  double t6497;
  double t6569;
  double t6610;
  double t6807;
  double t6817;
  double t6846;
  double t6897;
  double t7001;
  double t7018;
  double t7041;
  double t6785;
  double t6792;
  double t6797;
  double t6619;
  double t6626;
  double t6634;
  double t6639;
  double t6690;
  double t6724;
  double t6726;
  double t7170;
  double t7183;
  double t7252;
  double t7306;
  double t7309;
  double t7325;
  double t7329;
  double t7486;
  double t7532;
  double t7651;
  double t7830;
  double t7837;
  double t7842;
  double t7847;
  double t7855;
  double t7927;
  double t7948;
  double t7993;
  double t8108;
  double t8189;
  double t8254;
  double t8365;
  double t8404;
  double t8472;
  double t8533;
  double t8582;
  double t8584;
  double t8585;
  double t8716;
  double t8721;
  double t8728;
  double t8745;
  double t8796;
  double t8805;
  double t8844;
  double t8898;
  double t8920;
  double t8921;
  double t8990;
  double t9034;
  double t9049;
  t5519 = Cos(var1[3]);
  t3476 = Cos(var1[6]);
  t4686 = Cos(var1[5]);
  t4710 = Sin(var1[3]);
  t5306 = t4686*t4710;
  t5636 = Sin(var1[4]);
  t5762 = Sin(var1[5]);
  t5790 = t5519*t5636*t5762;
  t5794 = t5306 + t5790;
  t5826 = Cos(var1[4]);
  t5930 = Sin(var1[6]);
  t6148 = Cos(var1[7]);
  t6601 = t5519*t5826*t3476;
  t6603 = -1.*t5794*t5930;
  t6607 = t6601 + t6603;
  t6460 = t3476*t5794;
  t6497 = t5519*t5826*t5930;
  t6569 = t6460 + t6497;
  t6610 = Sin(var1[7]);
  t6807 = Cos(var1[8]);
  t6817 = -1.*t6807;
  t6846 = 1. + t6817;
  t6897 = Sin(var1[8]);
  t7001 = t6148*t6569;
  t7018 = t6607*t6610;
  t7041 = t7001 + t7018;
  t6785 = -1.*t5519*t4686*t5636;
  t6792 = t4710*t5762;
  t6797 = t6785 + t6792;
  t6619 = Cos(var1[9]);
  t6626 = -1.*t6619;
  t6634 = 1. + t6626;
  t6639 = Sin(var1[9]);
  t6690 = t6148*t6607;
  t6724 = -1.*t6569*t6610;
  t6726 = t6690 + t6724;
  t7170 = t6807*t6797;
  t7183 = -1.*t7041*t6897;
  t7252 = t7170 + t7183;
  t7306 = Cos(var1[10]);
  t7309 = -1.*t7306;
  t7325 = 1. + t7309;
  t7329 = Sin(var1[10]);
  t7486 = t6639*t6726;
  t7532 = t6619*t7252;
  t7651 = t7486 + t7532;
  t7830 = t6619*t6726;
  t7837 = -1.*t6639*t7252;
  t7842 = t7830 + t7837;
  t7847 = Cos(var1[11]);
  t7855 = Sin(var1[11]);
  t7927 = -1.*t7329*t7651;
  t7948 = t7306*t7842;
  t7993 = t7927 + t7948;
  t8108 = t7306*t7651;
  t8189 = t7329*t7842;
  t8254 = t8108 + t8189;
  t8365 = Cos(var1[12]);
  t8404 = -1.*t8365;
  t8472 = 1. + t8404;
  t8533 = Sin(var1[12]);
  t8582 = t7855*t7993;
  t8584 = t7847*t8254;
  t8585 = t8582 + t8584;
  t8716 = t7847*t7993;
  t8721 = -1.*t7855*t8254;
  t8728 = t8716 + t8721;
  t8745 = Cos(var1[13]);
  t8796 = -1.*t8745;
  t8805 = 1. + t8796;
  t8844 = Sin(var1[13]);
  t8898 = -1.*t8533*t8585;
  t8920 = t8365*t8728;
  t8921 = t8898 + t8920;
  t8990 = t8365*t8585;
  t9034 = t8533*t8728;
  t9049 = t8990 + t9034;
  p_output1[0]=0.135*(1. - 1.*t3476)*t5794 - 0.135*t5519*t5826*t5930 + 0.135*(1. - 1.*t6148)*t6569 - 0.135*t6607*t6610 + (-0.09*t6634 + 0.049*t6639)*t6726 + t6797*(-0.049*t6846 - 0.135*t6897) + (0.135*t6846 - 0.049*t6897)*t7041 + 0.1305*(t6797*t6897 + t6807*t7041) + (-0.049*t6634 - 0.09*t6639)*t7252 + (-0.049*t7325 - 0.21*t7329)*t7651 + (-0.21*t7325 + 0.049*t7329)*t7842 + (-0.2707*(1. - 1.*t7847) + 0.0016*t7855)*t7993 + (0.0016*(-1. + t7847) - 0.2707*t7855)*t8254 + (0.0184*t8472 - 0.7055*t8533)*t8585 + (-0.7055*t8472 - 0.0184*t8533)*t8728 + (-1.1135*t8805 + 0.0216*t8844)*t8921 + (-0.0216*t8805 - 1.1135*t8844)*t9049 + 0.0306*(t8844*t8921 + t8745*t9049) - 1.1312*(t8745*t8921 - 1.*t8844*t9049) + var1[2];
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

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
