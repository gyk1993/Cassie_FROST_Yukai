/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:42:09 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t375;
  double t382;
  double t520;
  double t927;
  double t1142;
  double t1207;
  double t1269;
  double t1270;
  double t1293;
  double t1624;
  double t1705;
  double t1709;
  double t512;
  double t1334;
  double t1418;
  double t1621;
  double t1757;
  double t1819;
  double t1858;
  double t2031;
  double t2039;
  double t2064;
  double t2229;
  double t2235;
  t375 = -1.*var4[1];
  t382 = var4[0] + t375;
  t520 = -1. + var5[0];
  t927 = -1. + var6[0];
  t1142 = 1/t927;
  t1207 = -1.*var1[0];
  t1269 = t1207 + var1[1];
  t1270 = t520*t1142*t1269;
  t1293 = t375 + var1[0] + t1270;
  t1624 = 1/t382;
  t1705 = -1.*t1624*t1293;
  t1709 = 1. + t1705;
  t512 = Power(t382,-5);
  t1334 = Power(t1293,5);
  t1418 = Power(t382,-4);
  t1621 = Power(t1293,4);
  t1757 = Power(t382,-3);
  t1819 = Power(t1293,3);
  t1858 = Power(t1709,2);
  t2031 = Power(t382,-2);
  t2039 = Power(t1293,2);
  t2064 = Power(t1709,3);
  t2229 = Power(t1709,4);
  t2235 = Power(t1709,5);
  p_output1[0]=var2[7] - 1.*t2235*var3[0] - 5.*t1293*t1624*t2229*var3[10] - 10.*t2031*t2039*t2064*var3[20] - 10.*t1757*t1819*t1858*var3[30] - 5.*t1418*t1621*t1709*var3[40] - 1.*t1334*t512*var3[50];
  p_output1[1]=var2[8] - 1.*t2235*var3[1] - 5.*t1293*t1624*t2229*var3[11] - 10.*t2031*t2039*t2064*var3[21] - 10.*t1757*t1819*t1858*var3[31] - 5.*t1418*t1621*t1709*var3[41] - 1.*t1334*t512*var3[51];
  p_output1[2]=var2[9] - 1.*t2235*var3[2] - 5.*t1293*t1624*t2229*var3[12] - 10.*t2031*t2039*t2064*var3[22] - 10.*t1757*t1819*t1858*var3[32] - 5.*t1418*t1621*t1709*var3[42] - 1.*t1334*t512*var3[52];
  p_output1[3]=var2[10] - 1.*t2235*var3[3] - 5.*t1293*t1624*t2229*var3[13] - 10.*t2031*t2039*t2064*var3[23] - 10.*t1757*t1819*t1858*var3[33] - 5.*t1418*t1621*t1709*var3[43] - 1.*t1334*t512*var3[53];
  p_output1[4]=var2[13] - 1.*t2235*var3[4] - 5.*t1293*t1624*t2229*var3[14] - 10.*t2031*t2039*t2064*var3[24] - 10.*t1757*t1819*t1858*var3[34] - 5.*t1418*t1621*t1709*var3[44] - 1.*t1334*t512*var3[54];
  p_output1[5]=var2[15] - 1.*t2235*var3[5] - 5.*t1293*t1624*t2229*var3[15] - 10.*t2031*t2039*t2064*var3[25] - 10.*t1757*t1819*t1858*var3[35] - 5.*t1418*t1621*t1709*var3[45] - 1.*t1334*t512*var3[55];
  p_output1[6]=var2[16] - 1.*t2235*var3[6] - 5.*t1293*t1624*t2229*var3[16] - 10.*t2031*t2039*t2064*var3[26] - 10.*t1757*t1819*t1858*var3[36] - 5.*t1418*t1621*t1709*var3[46] - 1.*t1334*t512*var3[56];
  p_output1[7]=var2[17] - 1.*t2235*var3[7] - 5.*t1293*t1624*t2229*var3[17] - 10.*t2031*t2039*t2064*var3[27] - 10.*t1757*t1819*t1858*var3[37] - 5.*t1418*t1621*t1709*var3[47] - 1.*t1334*t512*var3[57];
  p_output1[8]=var2[18] - 1.*t2235*var3[8] - 5.*t1293*t1624*t2229*var3[18] - 10.*t2031*t2039*t2064*var3[28] - 10.*t1757*t1819*t1858*var3[38] - 5.*t1418*t1621*t1709*var3[48] - 1.*t1334*t512*var3[58];
  p_output1[9]=var2[21] - 1.*t2235*var3[9] - 5.*t1293*t1624*t2229*var3[19] - 10.*t2031*t2039*t2064*var3[29] - 10.*t1757*t1819*t1858*var3[39] - 5.*t1418*t1621*t1709*var3[49] - 1.*t1334*t512*var3[59];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 60 && ncols == 1) && 
      !(mrows == 1 && ncols == 60))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 10, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "y_time_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
