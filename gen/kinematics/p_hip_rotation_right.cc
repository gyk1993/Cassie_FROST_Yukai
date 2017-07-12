/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:09 GMT-04:00
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
  double t635;
  double t690;
  double t707;
  double t723;
  double t735;
  double t764;
  double t759;
  double t761;
  double t762;
  double t744;
  double t771;
  double t777;
  double t780;
  double t698;
  double t705;
  double t681;
  double t794;
  double t727;
  double t730;
  double t731;
  double t734;
  double t797;
  double t746;
  double t747;
  double t748;
  double t754;
  double t808;
  double t810;
  double t812;
  double t765;
  double t766;
  double t817;
  double t818;
  double t820;
  double t824;
  double t827;
  double t828;
  double t846;
  double t847;
  double t848;
  double t852;
  double t853;
  double t854;
  double t856;
  double t857;
  double t858;
  t635 = Cos(var1[4]);
  t690 = Sin(var1[14]);
  t707 = Sin(var1[4]);
  t723 = Cos(var1[14]);
  t735 = Sin(var1[5]);
  t764 = Sin(var1[15]);
  t759 = t690*t707;
  t761 = -1.*t723*t635*t735;
  t762 = t759 + t761;
  t744 = Cos(var1[15]);
  t771 = t723*t707;
  t777 = t635*t690*t735;
  t780 = t771 + t777;
  t698 = 0.135*t690;
  t705 = 0. + t698;
  t681 = Cos(var1[5]);
  t794 = Sin(var1[3]);
  t727 = -1.*t723;
  t730 = 1. + t727;
  t731 = -0.135*t730;
  t734 = 0. + t731;
  t797 = Cos(var1[3]);
  t746 = -1.*t744;
  t747 = 1. + t746;
  t748 = -0.135*t747;
  t754 = 0. + t748;
  t808 = t797*t681;
  t810 = -1.*t794*t707*t735;
  t812 = t808 + t810;
  t765 = 0.135*t764;
  t766 = 0. + t765;
  t817 = -1.*t635*t690*t794;
  t818 = t723*t812;
  t820 = t817 + t818;
  t824 = -1.*t723*t635*t794;
  t827 = -1.*t690*t812;
  t828 = t824 + t827;
  t846 = t681*t794;
  t847 = t797*t707*t735;
  t848 = t846 + t847;
  t852 = t797*t635*t690;
  t853 = t723*t848;
  t854 = t852 + t853;
  t856 = t723*t797*t635;
  t857 = -1.*t690*t848;
  t858 = t856 + t857;
  p_output1[0]=0. - 0.049*t635*t681 + t705*t707 - 1.*t635*t734*t735 + t754*t762 + t766*t780 - 0.09*(-1.*t762*t764 + t744*t780) - 0.135*(t744*t762 + t764*t780) + var1[0];
  p_output1[1]=0. - 1.*t635*t705*t794 - 0.049*(t681*t707*t794 + t735*t797) + t734*t812 + t754*t820 + t766*t828 - 0.09*(-1.*t764*t820 + t744*t828) - 0.135*(t744*t820 + t764*t828) + var1[1];
  p_output1[2]=0. + t635*t705*t797 - 0.049*(t735*t794 - 1.*t681*t707*t797) + t734*t848 + t754*t854 + t766*t858 - 0.09*(-1.*t764*t854 + t744*t858) - 0.135*(t744*t854 + t764*t858) + var1[2];
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

#include "p_hip_rotation_right.hh"

namespace SymExpression
{

void p_hip_rotation_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
