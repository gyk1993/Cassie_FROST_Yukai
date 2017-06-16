/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:30:17 GMT-04:00
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
  double t5285;
  double t1483;
  double t5179;
  double t5216;
  double t5284;
  double t5289;
  double t5299;
  double t5302;
  double t5313;
  double t5341;
  double t5355;
  double t5371;
  double t5486;
  double t5492;
  double t5506;
  double t5375;
  double t5377;
  double t5378;
  double t5508;
  double t5579;
  double t5584;
  double t5592;
  double t5703;
  double t5719;
  double t5721;
  double t5722;
  double t5557;
  double t5565;
  double t5574;
  double t5514;
  double t5516;
  double t5517;
  double t5522;
  double t5544;
  double t5545;
  double t5546;
  double t5758;
  double t5762;
  double t5785;
  double t5788;
  double t5792;
  double t5796;
  double t5809;
  double t5816;
  double t5817;
  double t5818;
  double t5823;
  double t5824;
  double t6155;
  double t6163;
  double t6182;
  double t6197;
  double t6201;
  double t6202;
  double t6247;
  double t6265;
  double t6275;
  double t6286;
  double t6291;
  double t6292;
  double t6295;
  double t6305;
  double t6306;
  double t6307;
  double t6314;
  double t6315;
  double t6316;
  double t6319;
  double t6321;
  double t6322;
  double t6329;
  double t6334;
  double t6335;
  double t6336;
  double t6346;
  double t6351;
  double t6362;
  t5285 = Cos(var1[3]);
  t1483 = Cos(var1[6]);
  t5179 = Cos(var1[5]);
  t5216 = Sin(var1[3]);
  t5284 = t5179*t5216;
  t5289 = Sin(var1[4]);
  t5299 = Sin(var1[5]);
  t5302 = t5285*t5289*t5299;
  t5313 = t5284 + t5302;
  t5341 = Cos(var1[4]);
  t5355 = Sin(var1[6]);
  t5371 = Cos(var1[7]);
  t5486 = t5285*t5341*t1483;
  t5492 = -1.*t5313*t5355;
  t5506 = t5486 + t5492;
  t5375 = t1483*t5313;
  t5377 = t5285*t5341*t5355;
  t5378 = t5375 + t5377;
  t5508 = Sin(var1[7]);
  t5579 = Cos(var1[8]);
  t5584 = -1.*t5579;
  t5592 = 1. + t5584;
  t5703 = Sin(var1[8]);
  t5719 = t5371*t5378;
  t5721 = t5506*t5508;
  t5722 = t5719 + t5721;
  t5557 = -1.*t5285*t5179*t5289;
  t5565 = t5216*t5299;
  t5574 = t5557 + t5565;
  t5514 = Cos(var1[9]);
  t5516 = -1.*t5514;
  t5517 = 1. + t5516;
  t5522 = Sin(var1[9]);
  t5544 = t5371*t5506;
  t5545 = -1.*t5378*t5508;
  t5546 = t5544 + t5545;
  t5758 = t5579*t5574;
  t5762 = -1.*t5722*t5703;
  t5785 = t5758 + t5762;
  t5788 = Cos(var1[10]);
  t5792 = -1.*t5788;
  t5796 = 1. + t5792;
  t5809 = Sin(var1[10]);
  t5816 = t5522*t5546;
  t5817 = t5514*t5785;
  t5818 = t5816 + t5817;
  t5823 = t5514*t5546;
  t5824 = -1.*t5522*t5785;
  t6155 = t5823 + t5824;
  t6163 = Cos(var1[11]);
  t6182 = Sin(var1[11]);
  t6197 = -1.*t5809*t5818;
  t6201 = t5788*t6155;
  t6202 = t6197 + t6201;
  t6247 = t5788*t5818;
  t6265 = t5809*t6155;
  t6275 = t6247 + t6265;
  t6286 = Cos(var1[12]);
  t6291 = -1.*t6286;
  t6292 = 1. + t6291;
  t6295 = Sin(var1[12]);
  t6305 = t6182*t6202;
  t6306 = t6163*t6275;
  t6307 = t6305 + t6306;
  t6314 = t6163*t6202;
  t6315 = -1.*t6182*t6275;
  t6316 = t6314 + t6315;
  t6319 = Cos(var1[13]);
  t6321 = -1.*t6319;
  t6322 = 1. + t6321;
  t6329 = Sin(var1[13]);
  t6334 = -1.*t6295*t6307;
  t6335 = t6286*t6316;
  t6336 = t6334 + t6335;
  t6346 = t6286*t6307;
  t6351 = t6295*t6316;
  t6362 = t6346 + t6351;
  p_output1[0]=0.135*(1. - 1.*t1483)*t5313 - 0.135*t5285*t5341*t5355 + 0.135*(1. - 1.*t5371)*t5378 - 0.135*t5506*t5508 + (-0.09*t5517 + 0.049*t5522)*t5546 + t5574*(-0.049*t5592 - 0.135*t5703) + (0.135*t5592 - 0.049*t5703)*t5722 + 0.1305*(t5574*t5703 + t5579*t5722) + (-0.049*t5517 - 0.09*t5522)*t5785 + (-0.049*t5796 - 0.21*t5809)*t5818 + (-0.21*t5796 + 0.049*t5809)*t6155 + (-0.2707*(1. - 1.*t6163) + 0.0016*t6182)*t6202 + (0.0016*(-1. + t6163) - 0.2707*t6182)*t6275 + (0.0184*t6292 - 0.7055*t6295)*t6307 + (-0.7055*t6292 - 0.0184*t6295)*t6316 + (-1.1135*t6322 + 0.0216*t6329)*t6336 + (-0.0216*t6322 - 1.1135*t6329)*t6362 + 0.0306*(t6329*t6336 + t6319*t6362) - 1.1312*(t6319*t6336 - 1.*t6329*t6362) + var1[2];
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
