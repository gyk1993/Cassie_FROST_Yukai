/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:08 GMT-04:00
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
  double t620;
  double t682;
  double t679;
  double t662;
  double t683;
  double t606;
  double t706;
  double t710;
  double t723;
  double t724;
  double t726;
  double t734;
  double t735;
  double t739;
  double t707;
  double t718;
  double t719;
  double t766;
  double t768;
  double t681;
  double t687;
  double t690;
  double t772;
  double t776;
  double t777;
  double t779;
  double t722;
  double t727;
  double t730;
  double t695;
  double t698;
  double t705;
  double t731;
  double t741;
  double t744;
  t620 = Cos(var1[5]);
  t682 = Cos(var1[3]);
  t679 = Sin(var1[4]);
  t662 = Sin(var1[3]);
  t683 = Sin(var1[5]);
  t606 = Cos(var1[4]);
  t706 = Sin(var1[14]);
  t710 = Cos(var1[14]);
  t723 = t682*t620;
  t724 = -1.*t662*t679*t683;
  t726 = t723 + t724;
  t734 = t620*t662;
  t735 = t682*t679*t683;
  t739 = t734 + t735;
  t707 = t706*t679;
  t718 = -1.*t710*t606*t683;
  t719 = t707 + t718;
  t766 = 0.135*t706;
  t768 = 0. + t766;
  t681 = t620*t662*t679;
  t687 = t682*t683;
  t690 = t681 + t687;
  t772 = -1.*t710;
  t776 = 1. + t772;
  t777 = -0.135*t776;
  t779 = 0. + t777;
  t722 = -1.*t606*t706*t662;
  t727 = t710*t726;
  t730 = t722 + t727;
  t695 = -1.*t682*t620*t679;
  t698 = t662*t683;
  t705 = t695 + t698;
  t731 = t682*t606*t706;
  t741 = t710*t739;
  t744 = t731 + t741;
  p_output1[0]=t606*t620;
  p_output1[1]=t690;
  p_output1[2]=t705;
  p_output1[3]=0.;
  p_output1[4]=t719;
  p_output1[5]=t730;
  p_output1[6]=t744;
  p_output1[7]=0.;
  p_output1[8]=t606*t683*t706 + t679*t710;
  p_output1[9]=-1.*t606*t662*t710 - 1.*t706*t726;
  p_output1[10]=t606*t682*t710 - 1.*t706*t739;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t606*t620 - 0.135*t719 + t679*t768 - 1.*t606*t683*t779 + var1[0];
  p_output1[13]=0. - 0.049*t690 - 0.135*t730 - 1.*t606*t662*t768 + t726*t779 + var1[1];
  p_output1[14]=0. - 0.049*t705 - 0.135*t744 + t606*t682*t768 + t739*t779 + var1[2];
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

#include "H_hip_abduction_right.hh"

namespace SymExpression
{

void H_hip_abduction_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
