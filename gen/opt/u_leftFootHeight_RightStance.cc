/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:44 GMT-04:00
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
  double t146;
  double t21;
  double t106;
  double t112;
  double t134;
  double t151;
  double t159;
  double t189;
  double t197;
  double t226;
  double t253;
  double t260;
  double t480;
  double t482;
  double t550;
  double t374;
  double t385;
  double t443;
  double t551;
  double t684;
  double t702;
  double t778;
  double t791;
  double t667;
  double t668;
  double t676;
  double t867;
  double t869;
  double t914;
  double t561;
  double t562;
  double t569;
  double t583;
  double t635;
  double t637;
  double t655;
  double t1098;
  double t1112;
  double t1143;
  double t1153;
  double t1167;
  double t1178;
  double t1223;
  double t1237;
  double t1240;
  double t1245;
  double t1312;
  double t1319;
  double t1329;
  double t1359;
  double t1404;
  double t1448;
  double t1460;
  double t1477;
  double t1577;
  double t1584;
  double t1585;
  double t1597;
  double t1611;
  double t1621;
  double t1644;
  double t1667;
  double t1670;
  double t1696;
  double t1741;
  double t1754;
  double t1824;
  double t1837;
  double t1838;
  double t1842;
  double t1867;
  double t1902;
  double t1911;
  double t1912;
  double t2030;
  double t2071;
  double t2172;
  t146 = Cos(var1[3]);
  t21 = Cos(var1[6]);
  t106 = Cos(var1[5]);
  t112 = Sin(var1[3]);
  t134 = t106*t112;
  t151 = Sin(var1[4]);
  t159 = Sin(var1[5]);
  t189 = t146*t151*t159;
  t197 = t134 + t189;
  t226 = Cos(var1[4]);
  t253 = Sin(var1[6]);
  t260 = Cos(var1[7]);
  t480 = t146*t226*t21;
  t482 = -1.*t197*t253;
  t550 = t480 + t482;
  t374 = t21*t197;
  t385 = t146*t226*t253;
  t443 = t374 + t385;
  t551 = Sin(var1[7]);
  t684 = Cos(var1[8]);
  t702 = -1.*t684;
  t778 = 1. + t702;
  t791 = Sin(var1[8]);
  t667 = t260*t443;
  t668 = t550*t551;
  t676 = t667 + t668;
  t867 = -1.*t146*t106*t151;
  t869 = t112*t159;
  t914 = t867 + t869;
  t561 = Cos(var1[9]);
  t562 = -1.*t561;
  t569 = 1. + t562;
  t583 = Sin(var1[9]);
  t635 = t260*t550;
  t637 = -1.*t443*t551;
  t655 = t635 + t637;
  t1098 = t684*t914;
  t1112 = t676*t791;
  t1143 = t1098 + t1112;
  t1153 = Cos(var1[10]);
  t1167 = -1.*t1153;
  t1178 = 1. + t1167;
  t1223 = Sin(var1[10]);
  t1237 = t583*t655;
  t1240 = t561*t1143;
  t1245 = t1237 + t1240;
  t1312 = t561*t655;
  t1319 = -1.*t583*t1143;
  t1329 = t1312 + t1319;
  t1359 = Cos(var1[11]);
  t1404 = Sin(var1[11]);
  t1448 = -1.*t1223*t1245;
  t1460 = t1153*t1329;
  t1477 = t1448 + t1460;
  t1577 = t1153*t1245;
  t1584 = t1223*t1329;
  t1585 = t1577 + t1584;
  t1597 = Cos(var1[12]);
  t1611 = -1.*t1597;
  t1621 = 1. + t1611;
  t1644 = Sin(var1[12]);
  t1667 = t1404*t1477;
  t1670 = t1359*t1585;
  t1696 = t1667 + t1670;
  t1741 = t1359*t1477;
  t1754 = -1.*t1404*t1585;
  t1824 = t1741 + t1754;
  t1837 = Cos(var1[13]);
  t1838 = -1.*t1837;
  t1842 = 1. + t1838;
  t1867 = Sin(var1[13]);
  t1902 = -1.*t1644*t1696;
  t1911 = t1597*t1824;
  t1912 = t1902 + t1911;
  t2030 = t1597*t1696;
  t2071 = t1644*t1824;
  t2172 = t2030 + t2071;
  p_output1[0]=(-0.049*t1178 - 0.21*t1223)*t1245 + (-0.21*t1178 + 0.049*t1223)*t1329 + (-0.2707*(1. - 1.*t1359) + 0.0016*t1404)*t1477 + (0.0016*(-1. + t1359) - 0.2707*t1404)*t1585 + (0.0184*t1621 - 0.7055*t1644)*t1696 + (-0.7055*t1621 - 0.0184*t1644)*t1824 + (-1.1135*t1842 + 0.0216*t1867)*t1912 + 0.135*t197*(1. - 1.*t21) + (-0.0216*t1842 - 1.1135*t1867)*t2172 + 0.0306*(t1867*t1912 + t1837*t2172) - 1.1312*(t1837*t1912 - 1.*t1867*t2172) - 0.135*t146*t226*t253 + 0.135*(1. - 1.*t260)*t443 - 0.135*t550*t551 + t1143*(-0.049*t569 - 0.09*t583) + (-0.09*t569 + 0.049*t583)*t655 + t676*(0.135*t778 + 0.049*t791) + (-0.049*t778 + 0.135*t791)*t914 + 0.1305*(t676*t684 - 1.*t791*t914) + var1[2];
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
