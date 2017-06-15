/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:10:58 GMT-04:00
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
  double t962;
  double t1167;
  double t1191;
  double t1184;
  double t1218;
  double t966;
  double t1039;
  double t1266;
  double t1299;
  double t1308;
  double t1332;
  double t1375;
  double t1350;
  double t1362;
  double t1371;
  double t1339;
  double t1376;
  double t1381;
  double t1390;
  double t1093;
  double t1101;
  double t1121;
  double t1156;
  double t1190;
  double t1223;
  double t1263;
  double t1516;
  double t1521;
  double t1523;
  double t1438;
  double t1440;
  double t1442;
  double t1445;
  double t1472;
  double t1474;
  double t1484;
  double t1545;
  double t1553;
  double t1560;
  double t1565;
  double t1583;
  double t1584;
  double t1589;
  double t1607;
  double t1611;
  double t1619;
  double t1910;
  double t1915;
  double t1919;
  double t1930;
  double t1942;
  double t1950;
  double t1952;
  double t1964;
  double t2002;
  double t2013;
  double t2021;
  double t2042;
  double t2049;
  double t2056;
  double t2071;
  double t2110;
  double t2116;
  double t2117;
  double t2133;
  double t2152;
  double t2153;
  double t2179;
  double t2180;
  double t2182;
  double t2192;
  double t2213;
  double t2214;
  double t2216;
  double t2265;
  double t2266;
  double t2273;
  t962 = Cos(var1[3]);
  t1167 = Cos(var1[5]);
  t1191 = Sin(var1[3]);
  t1184 = Sin(var1[4]);
  t1218 = Sin(var1[5]);
  t966 = Cos(var1[4]);
  t1039 = Sin(var1[14]);
  t1266 = Cos(var1[14]);
  t1299 = t1167*t1191;
  t1308 = t962*t1184*t1218;
  t1332 = t1299 + t1308;
  t1375 = Sin(var1[15]);
  t1350 = t962*t966*t1039;
  t1362 = t1266*t1332;
  t1371 = t1350 + t1362;
  t1339 = Cos(var1[15]);
  t1376 = t1266*t962*t966;
  t1381 = -1.*t1039*t1332;
  t1390 = t1376 + t1381;
  t1093 = Cos(var1[16]);
  t1101 = -1.*t1093;
  t1121 = 1. + t1101;
  t1156 = Sin(var1[16]);
  t1190 = -1.*t962*t1167*t1184;
  t1223 = t1191*t1218;
  t1263 = t1190 + t1223;
  t1516 = t1339*t1371;
  t1521 = t1375*t1390;
  t1523 = t1516 + t1521;
  t1438 = Cos(var1[17]);
  t1440 = -1.*t1438;
  t1442 = 1. + t1440;
  t1445 = Sin(var1[17]);
  t1472 = -1.*t1375*t1371;
  t1474 = t1339*t1390;
  t1484 = t1472 + t1474;
  t1545 = t1093*t1263;
  t1553 = -1.*t1156*t1523;
  t1560 = t1545 + t1553;
  t1565 = Cos(var1[18]);
  t1583 = -1.*t1565;
  t1584 = 1. + t1583;
  t1589 = Sin(var1[18]);
  t1607 = t1445*t1484;
  t1611 = t1438*t1560;
  t1619 = t1607 + t1611;
  t1910 = t1438*t1484;
  t1915 = -1.*t1445*t1560;
  t1919 = t1910 + t1915;
  t1930 = Cos(var1[19]);
  t1942 = Sin(var1[19]);
  t1950 = -1.*t1589*t1619;
  t1952 = t1565*t1919;
  t1964 = t1950 + t1952;
  t2002 = t1565*t1619;
  t2013 = t1589*t1919;
  t2021 = t2002 + t2013;
  t2042 = Cos(var1[20]);
  t2049 = -1.*t2042;
  t2056 = 1. + t2049;
  t2071 = Sin(var1[20]);
  t2110 = t1942*t1964;
  t2116 = t1930*t2021;
  t2117 = t2110 + t2116;
  t2133 = t1930*t1964;
  t2152 = -1.*t1942*t2021;
  t2153 = t2133 + t2152;
  t2179 = Cos(var1[21]);
  t2180 = -1.*t2179;
  t2182 = 1. + t2180;
  t2192 = Sin(var1[21]);
  t2213 = -1.*t2071*t2117;
  t2214 = t2042*t2153;
  t2216 = t2213 + t2214;
  t2265 = t2042*t2117;
  t2266 = t2071*t2153;
  t2273 = t2265 + t2266;
  p_output1[0]=(-0.049*t1121 + 0.135*t1156)*t1263 - 0.135*(1. - 1.*t1266)*t1332 - 0.135*(1. - 1.*t1339)*t1371 + 0.135*t1375*t1390 + (-0.09*t1442 + 0.049*t1445)*t1484 + (-0.135*t1121 - 0.049*t1156)*t1523 - 0.1305*(t1156*t1263 + t1093*t1523) + (-0.049*t1442 - 0.09*t1445)*t1560 + (-0.049*t1584 - 0.21*t1589)*t1619 + (-0.21*t1584 + 0.049*t1589)*t1919 + (-0.2707*(1. - 1.*t1930) + 0.0016*t1942)*t1964 + (0.0016*(-1. + t1930) - 0.2707*t1942)*t2021 + (0.0184*t2056 - 0.7055*t2071)*t2117 + (-0.7055*t2056 - 0.0184*t2071)*t2153 + (-1.1135*t2182 + 0.0216*t2192)*t2216 + (-0.0216*t2182 - 1.1135*t2192)*t2273 + 0.0306*(t2192*t2216 + t2179*t2273) - 1.1312*(t2179*t2216 - 1.*t2192*t2273) + 0.135*t1039*t962*t966 + var1[2];
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

#include "swingFootClearance_LeftStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void swingFootClearance_LeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
