/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:42:22 GMT-04:00
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
  double t4000;
  double t2030;
  double t3983;
  double t3984;
  double t3992;
  double t4004;
  double t4008;
  double t4021;
  double t4024;
  double t4026;
  double t4029;
  double t4034;
  double t4059;
  double t4060;
  double t4061;
  double t4044;
  double t4048;
  double t4052;
  double t4062;
  double t4098;
  double t4101;
  double t4104;
  double t4110;
  double t4119;
  double t4120;
  double t4121;
  double t4092;
  double t4093;
  double t4097;
  double t4066;
  double t4070;
  double t4076;
  double t4084;
  double t4087;
  double t4089;
  double t4090;
  double t4138;
  double t4139;
  double t4140;
  double t4142;
  double t4143;
  double t4144;
  double t4149;
  double t4152;
  double t4153;
  double t4154;
  double t4297;
  double t4298;
  double t4302;
  double t4310;
  double t4326;
  double t4338;
  double t4342;
  double t4343;
  double t4356;
  double t4360;
  double t4364;
  double t4372;
  double t4376;
  double t4380;
  double t4388;
  double t4397;
  double t4401;
  double t4405;
  double t4419;
  double t4423;
  double t4427;
  double t4435;
  double t4439;
  double t4443;
  double t4448;
  double t4462;
  double t4466;
  double t4470;
  double t4490;
  double t4491;
  double t4495;
  t4000 = Cos(var1[3]);
  t2030 = Cos(var1[6]);
  t3983 = Cos(var1[5]);
  t3984 = Sin(var1[3]);
  t3992 = t3983*t3984;
  t4004 = Sin(var1[4]);
  t4008 = Sin(var1[5]);
  t4021 = t4000*t4004*t4008;
  t4024 = t3992 + t4021;
  t4026 = Cos(var1[4]);
  t4029 = Sin(var1[6]);
  t4034 = Cos(var1[7]);
  t4059 = t4000*t4026*t2030;
  t4060 = -1.*t4024*t4029;
  t4061 = t4059 + t4060;
  t4044 = t2030*t4024;
  t4048 = t4000*t4026*t4029;
  t4052 = t4044 + t4048;
  t4062 = Sin(var1[7]);
  t4098 = Cos(var1[8]);
  t4101 = -1.*t4098;
  t4104 = 1. + t4101;
  t4110 = Sin(var1[8]);
  t4119 = t4034*t4052;
  t4120 = t4061*t4062;
  t4121 = t4119 + t4120;
  t4092 = -1.*t4000*t3983*t4004;
  t4093 = t3984*t4008;
  t4097 = t4092 + t4093;
  t4066 = Cos(var1[9]);
  t4070 = -1.*t4066;
  t4076 = 1. + t4070;
  t4084 = Sin(var1[9]);
  t4087 = t4034*t4061;
  t4089 = -1.*t4052*t4062;
  t4090 = t4087 + t4089;
  t4138 = t4098*t4097;
  t4139 = -1.*t4121*t4110;
  t4140 = t4138 + t4139;
  t4142 = Cos(var1[10]);
  t4143 = -1.*t4142;
  t4144 = 1. + t4143;
  t4149 = Sin(var1[10]);
  t4152 = t4084*t4090;
  t4153 = t4066*t4140;
  t4154 = t4152 + t4153;
  t4297 = t4066*t4090;
  t4298 = -1.*t4084*t4140;
  t4302 = t4297 + t4298;
  t4310 = Cos(var1[11]);
  t4326 = Sin(var1[11]);
  t4338 = -1.*t4149*t4154;
  t4342 = t4142*t4302;
  t4343 = t4338 + t4342;
  t4356 = t4142*t4154;
  t4360 = t4149*t4302;
  t4364 = t4356 + t4360;
  t4372 = Cos(var1[12]);
  t4376 = -1.*t4372;
  t4380 = 1. + t4376;
  t4388 = Sin(var1[12]);
  t4397 = t4326*t4343;
  t4401 = t4310*t4364;
  t4405 = t4397 + t4401;
  t4419 = t4310*t4343;
  t4423 = -1.*t4326*t4364;
  t4427 = t4419 + t4423;
  t4435 = Cos(var1[13]);
  t4439 = -1.*t4435;
  t4443 = 1. + t4439;
  t4448 = Sin(var1[13]);
  t4462 = -1.*t4388*t4405;
  t4466 = t4372*t4427;
  t4470 = t4462 + t4466;
  t4490 = t4372*t4405;
  t4491 = t4388*t4427;
  t4495 = t4490 + t4491;
  p_output1[0]=0.135*(1. - 1.*t2030)*t4024 - 0.135*t4000*t4026*t4029 + 0.135*(1. - 1.*t4034)*t4052 - 0.135*t4061*t4062 + (-0.09*t4076 + 0.049*t4084)*t4090 + t4097*(-0.049*t4104 - 0.135*t4110) + (0.135*t4104 - 0.049*t4110)*t4121 + 0.1305*(t4097*t4110 + t4098*t4121) + (-0.049*t4076 - 0.09*t4084)*t4140 + (-0.049*t4144 - 0.21*t4149)*t4154 + (-0.21*t4144 + 0.049*t4149)*t4302 + (-0.2707*(1. - 1.*t4310) + 0.0016*t4326)*t4343 + (0.0016*(-1. + t4310) - 0.2707*t4326)*t4364 + (0.0184*t4380 - 0.7055*t4388)*t4405 + (-0.7055*t4380 - 0.0184*t4388)*t4427 + (-1.1135*t4443 + 0.0216*t4448)*t4470 + (-0.0216*t4443 - 1.1135*t4448)*t4495 + 0.0306*(t4448*t4470 + t4435*t4495) - 1.1312*(t4435*t4470 - 1.*t4448*t4495) + var1[2];
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

#include "swingFootClearance_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void swingFootClearance_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
