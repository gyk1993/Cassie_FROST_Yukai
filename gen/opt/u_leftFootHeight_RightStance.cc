/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:42:31 GMT-04:00
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
  double t2329;
  double t438;
  double t1505;
  double t2246;
  double t2252;
  double t2332;
  double t2575;
  double t2582;
  double t4725;
  double t4838;
  double t4859;
  double t4929;
  double t5093;
  double t5095;
  double t5103;
  double t5024;
  double t5027;
  double t5058;
  double t5107;
  double t5224;
  double t5227;
  double t5228;
  double t5240;
  double t5256;
  double t5257;
  double t5260;
  double t5212;
  double t5220;
  double t5222;
  double t5169;
  double t5176;
  double t5181;
  double t5185;
  double t5197;
  double t5205;
  double t5209;
  double t5314;
  double t5318;
  double t5321;
  double t5325;
  double t5330;
  double t5339;
  double t5345;
  double t5359;
  double t5361;
  double t5362;
  double t5383;
  double t5386;
  double t5388;
  double t5397;
  double t5413;
  double t5424;
  double t5429;
  double t5431;
  double t5443;
  double t5449;
  double t5452;
  double t5459;
  double t5466;
  double t5477;
  double t5493;
  double t5502;
  double t5510;
  double t5512;
  double t5525;
  double t5528;
  double t5530;
  double t5532;
  double t5536;
  double t5537;
  double t5544;
  double t5562;
  double t5565;
  double t5567;
  double t5584;
  double t5592;
  double t5594;
  t2329 = Cos(var1[3]);
  t438 = Cos(var1[6]);
  t1505 = Cos(var1[5]);
  t2246 = Sin(var1[3]);
  t2252 = t1505*t2246;
  t2332 = Sin(var1[4]);
  t2575 = Sin(var1[5]);
  t2582 = t2329*t2332*t2575;
  t4725 = t2252 + t2582;
  t4838 = Cos(var1[4]);
  t4859 = Sin(var1[6]);
  t4929 = Cos(var1[7]);
  t5093 = t2329*t4838*t438;
  t5095 = -1.*t4725*t4859;
  t5103 = t5093 + t5095;
  t5024 = t438*t4725;
  t5027 = t2329*t4838*t4859;
  t5058 = t5024 + t5027;
  t5107 = Sin(var1[7]);
  t5224 = Cos(var1[8]);
  t5227 = -1.*t5224;
  t5228 = 1. + t5227;
  t5240 = Sin(var1[8]);
  t5256 = t4929*t5058;
  t5257 = t5103*t5107;
  t5260 = t5256 + t5257;
  t5212 = -1.*t2329*t1505*t2332;
  t5220 = t2246*t2575;
  t5222 = t5212 + t5220;
  t5169 = Cos(var1[9]);
  t5176 = -1.*t5169;
  t5181 = 1. + t5176;
  t5185 = Sin(var1[9]);
  t5197 = t4929*t5103;
  t5205 = -1.*t5058*t5107;
  t5209 = t5197 + t5205;
  t5314 = t5224*t5222;
  t5318 = -1.*t5260*t5240;
  t5321 = t5314 + t5318;
  t5325 = Cos(var1[10]);
  t5330 = -1.*t5325;
  t5339 = 1. + t5330;
  t5345 = Sin(var1[10]);
  t5359 = t5185*t5209;
  t5361 = t5169*t5321;
  t5362 = t5359 + t5361;
  t5383 = t5169*t5209;
  t5386 = -1.*t5185*t5321;
  t5388 = t5383 + t5386;
  t5397 = Cos(var1[11]);
  t5413 = Sin(var1[11]);
  t5424 = -1.*t5345*t5362;
  t5429 = t5325*t5388;
  t5431 = t5424 + t5429;
  t5443 = t5325*t5362;
  t5449 = t5345*t5388;
  t5452 = t5443 + t5449;
  t5459 = Cos(var1[12]);
  t5466 = -1.*t5459;
  t5477 = 1. + t5466;
  t5493 = Sin(var1[12]);
  t5502 = t5413*t5431;
  t5510 = t5397*t5452;
  t5512 = t5502 + t5510;
  t5525 = t5397*t5431;
  t5528 = -1.*t5413*t5452;
  t5530 = t5525 + t5528;
  t5532 = Cos(var1[13]);
  t5536 = -1.*t5532;
  t5537 = 1. + t5536;
  t5544 = Sin(var1[13]);
  t5562 = -1.*t5493*t5512;
  t5565 = t5459*t5530;
  t5567 = t5562 + t5565;
  t5584 = t5459*t5512;
  t5592 = t5493*t5530;
  t5594 = t5584 + t5592;
  p_output1[0]=0.135*(1. - 1.*t438)*t4725 - 0.135*t2329*t4838*t4859 + 0.135*(1. - 1.*t4929)*t5058 - 0.135*t5103*t5107 + (-0.09*t5181 + 0.049*t5185)*t5209 + t5222*(-0.049*t5228 - 0.135*t5240) + (0.135*t5228 - 0.049*t5240)*t5260 + 0.1305*(t5222*t5240 + t5224*t5260) + (-0.049*t5181 - 0.09*t5185)*t5321 + (-0.049*t5339 - 0.21*t5345)*t5362 + (-0.21*t5339 + 0.049*t5345)*t5388 + (-0.2707*(1. - 1.*t5397) + 0.0016*t5413)*t5431 + (0.0016*(-1. + t5397) - 0.2707*t5413)*t5452 + (0.0184*t5477 - 0.7055*t5493)*t5512 + (-0.7055*t5477 - 0.0184*t5493)*t5530 + (-1.1135*t5537 + 0.0216*t5544)*t5567 + (-0.0216*t5537 - 1.1135*t5544)*t5594 + 0.0306*(t5544*t5567 + t5532*t5594) - 1.1312*(t5532*t5567 - 1.*t5544*t5594) + var1[2];
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
