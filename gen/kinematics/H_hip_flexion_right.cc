/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:10:31 GMT-04:00
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
  double t821;
  double t800;
  double t834;
  double t795;
  double t841;
  double t784;
  double t874;
  double t855;
  double t879;
  double t880;
  double t881;
  double t882;
  double t883;
  double t894;
  double t895;
  double t896;
  double t816;
  double t844;
  double t852;
  double t862;
  double t864;
  double t865;
  double t912;
  double t917;
  double t876;
  double t884;
  double t885;
  double t888;
  double t889;
  double t890;
  double t893;
  double t897;
  double t899;
  double t902;
  double t904;
  double t905;
  double t918;
  double t919;
  double t920;
  double t924;
  double t925;
  double t926;
  double t928;
  double t929;
  double t930;
  double t933;
  double t934;
  double t936;
  double t939;
  double t940;
  double t942;
  double t958;
  double t959;
  double t916;
  double t921;
  double t922;
  double t964;
  double t965;
  double t960;
  double t961;
  double t962;
  double t967;
  double t968;
  double t969;
  double t970;
  double t972;
  double t973;
  double t974;
  double t975;
  double t977;
  double t978;
  double t984;
  double t985;
  double t986;
  double t927;
  double t931;
  double t932;
  double t938;
  double t943;
  double t944;
  t821 = Cos(var1[14]);
  t800 = Sin(var1[4]);
  t834 = Cos(var1[4]);
  t795 = Sin(var1[14]);
  t841 = Sin(var1[5]);
  t784 = Sin(var1[15]);
  t874 = Sin(var1[3]);
  t855 = Cos(var1[15]);
  t879 = Cos(var1[3]);
  t880 = Cos(var1[5]);
  t881 = t879*t880;
  t882 = -1.*t874*t800*t841;
  t883 = t881 + t882;
  t894 = t880*t874;
  t895 = t879*t800*t841;
  t896 = t894 + t895;
  t816 = t795*t800;
  t844 = -1.*t821*t834*t841;
  t852 = t816 + t844;
  t862 = t821*t800;
  t864 = t834*t795*t841;
  t865 = t862 + t864;
  t912 = Cos(var1[16]);
  t917 = Sin(var1[16]);
  t876 = -1.*t834*t795*t874;
  t884 = t821*t883;
  t885 = t876 + t884;
  t888 = -1.*t821*t834*t874;
  t889 = -1.*t795*t883;
  t890 = t888 + t889;
  t893 = t879*t834*t795;
  t897 = t821*t896;
  t899 = t893 + t897;
  t902 = t821*t879*t834;
  t904 = -1.*t795*t896;
  t905 = t902 + t904;
  t918 = t855*t852;
  t919 = t784*t865;
  t920 = t918 + t919;
  t924 = t880*t874*t800;
  t925 = t879*t841;
  t926 = t924 + t925;
  t928 = t855*t885;
  t929 = t784*t890;
  t930 = t928 + t929;
  t933 = -1.*t879*t880*t800;
  t934 = t874*t841;
  t936 = t933 + t934;
  t939 = t855*t899;
  t940 = t784*t905;
  t942 = t939 + t940;
  t958 = -1.*t912;
  t959 = 1. + t958;
  t916 = t912*t834*t880;
  t921 = -1.*t917*t920;
  t922 = t916 + t921;
  t964 = 0.135*t795;
  t965 = 0. + t964;
  t960 = -0.049*t959;
  t961 = 0.135*t917;
  t962 = 0. + t960 + t961;
  t967 = -1.*t821;
  t968 = 1. + t967;
  t969 = -0.135*t968;
  t970 = 0. + t969;
  t972 = -1.*t855;
  t973 = 1. + t972;
  t974 = -0.135*t973;
  t975 = 0. + t974;
  t977 = 0.135*t784;
  t978 = 0. + t977;
  t984 = -0.135*t959;
  t985 = -0.049*t917;
  t986 = 0. + t984 + t985;
  t927 = t912*t926;
  t931 = -1.*t917*t930;
  t932 = t927 + t931;
  t938 = t912*t936;
  t943 = -1.*t917*t942;
  t944 = t938 + t943;
  p_output1[0]=t784*t852 - 1.*t855*t865;
  p_output1[1]=t784*t885 - 1.*t855*t890;
  p_output1[2]=t784*t899 - 1.*t855*t905;
  p_output1[3]=0.;
  p_output1[4]=t922;
  p_output1[5]=t932;
  p_output1[6]=t944;
  p_output1[7]=0.;
  p_output1[8]=-1.*t834*t880*t917 - 1.*t912*t920;
  p_output1[9]=-1.*t917*t926 - 1.*t912*t930;
  p_output1[10]=-1.*t917*t936 - 1.*t912*t942;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(-1.*t784*t852 + t855*t865) - 0.135*(t834*t880*t917 + t912*t920) - 0.049*t922 + t834*t880*t962 + t800*t965 - 1.*t834*t841*t970 + t852*t975 + t865*t978 + t920*t986 + var1[0];
  p_output1[13]=0. - 0.09*(-1.*t784*t885 + t855*t890) - 0.135*(t917*t926 + t912*t930) - 0.049*t932 + t926*t962 - 1.*t834*t874*t965 + t883*t970 + t885*t975 + t890*t978 + t930*t986 + var1[1];
  p_output1[14]=0. - 0.09*(-1.*t784*t899 + t855*t905) - 0.135*(t917*t936 + t912*t942) - 0.049*t944 + t936*t962 + t834*t879*t965 + t896*t970 + t899*t975 + t905*t978 + t942*t986 + var1[2];
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

#include "H_hip_flexion_right.hh"

namespace SymExpression
{

void H_hip_flexion_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
