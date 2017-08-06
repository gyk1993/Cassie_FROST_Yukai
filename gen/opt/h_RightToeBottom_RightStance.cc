/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:37:18 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t293;
  double t1090;
  double t1094;
  double t1290;
  double t1481;
  double t2129;
  double t1908;
  double t1909;
  double t2090;
  double t1560;
  double t2381;
  double t2474;
  double t2539;
  double t425;
  double t491;
  double t535;
  double t652;
  double t398;
  double t5132;
  double t5141;
  double t5149;
  double t3232;
  double t3757;
  double t3821;
  double t4102;
  double t4853;
  double t4861;
  double t4878;
  double t5542;
  double t5649;
  double t5715;
  double t6049;
  double t6069;
  double t6086;
  double t6134;
  double t6268;
  double t6300;
  double t6432;
  double t6902;
  double t7191;
  double t7255;
  double t7402;
  double t7419;
  double t7427;
  double t7431;
  double t7433;
  double t7525;
  double t7528;
  double t7530;
  double t7536;
  double t7542;
  double t7552;
  double t7564;
  double t7578;
  double t7612;
  double t7620;
  double t7745;
  double t7776;
  double t7791;
  double t7821;
  double t7831;
  double t7840;
  double t7932;
  double t7974;
  double t8001;
  double t8006;
  double t8050;
  double t8062;
  double t8075;
  double t585;
  double t760;
  double t871;
  double t8176;
  double t1292;
  double t1315;
  double t8191;
  double t1626;
  double t1707;
  double t8215;
  double t8224;
  double t8226;
  double t3981;
  double t4822;
  double t4834;
  double t8238;
  double t8246;
  double t8247;
  double t8251;
  double t8256;
  double t8258;
  double t4964;
  double t5062;
  double t5072;
  double t8190;
  double t8202;
  double t8206;
  double t8296;
  double t8298;
  double t8299;
  double t5278;
  double t5467;
  double t5526;
  double t6095;
  double t6148;
  double t6150;
  double t8275;
  double t8283;
  double t8285;
  double t8314;
  double t8315;
  double t8316;
  double t6542;
  double t6656;
  double t6860;
  double t7404;
  double t7407;
  double t7411;
  double t7421;
  double t7425;
  double t8326;
  double t8329;
  double t8330;
  double t8338;
  double t8342;
  double t8345;
  double t7446;
  double t7448;
  double t7452;
  double t7454;
  double t7556;
  double t7568;
  double t7574;
  double t8351;
  double t8358;
  double t8360;
  double t8362;
  double t8363;
  double t8364;
  double t7684;
  double t7703;
  double t7736;
  double t7906;
  double t7960;
  double t7967;
  double t8374;
  double t8375;
  double t8376;
  double t8382;
  double t8385;
  double t8387;
  double t8027;
  double t8044;
  double t8046;
  double t8389;
  double t8391;
  double t8392;
  double t8396;
  double t8397;
  double t8398;
  double t8434;
  double t8435;
  double t8439;
  double t8447;
  double t8452;
  double t8455;
  double t8463;
  double t8464;
  double t8466;
  double t8423;
  double t8424;
  double t8427;
  double t8480;
  double t8482;
  double t8483;
  double t8468;
  double t8470;
  double t8477;
  double t8494;
  double t8495;
  double t8498;
  double t8501;
  double t8502;
  double t8504;
  double t8508;
  double t8511;
  double t8512;
  double t8515;
  double t8517;
  double t8519;
  double t8522;
  double t8526;
  double t8528;
  double t8530;
  double t8532;
  double t8533;
  double t8537;
  double t8538;
  double t8541;
  double t8548;
  double t8549;
  double t8558;
  double t8563;
  double t8567;
  double t8569;
  double t8586;
  double t8588;
  double t8592;
  double t8596;
  double t8600;
  double t8601;
  t293 = Cos(var1[4]);
  t1090 = Sin(var1[14]);
  t1094 = Sin(var1[4]);
  t1290 = Cos(var1[14]);
  t1481 = Sin(var1[5]);
  t2129 = Sin(var1[15]);
  t1908 = t1090*t1094;
  t1909 = -1.*t1290*t293*t1481;
  t2090 = t1908 + t1909;
  t1560 = Cos(var1[15]);
  t2381 = t1290*t1094;
  t2474 = t293*t1090*t1481;
  t2539 = t2381 + t2474;
  t425 = Cos(var1[16]);
  t491 = -1.*t425;
  t535 = 1. + t491;
  t652 = Sin(var1[16]);
  t398 = Cos(var1[5]);
  t5132 = t1560*t2090;
  t5141 = t2129*t2539;
  t5149 = t5132 + t5141;
  t3232 = Cos(var1[17]);
  t3757 = -1.*t3232;
  t3821 = 1. + t3757;
  t4102 = Sin(var1[17]);
  t4853 = -1.*t2129*t2090;
  t4861 = t1560*t2539;
  t4878 = t4853 + t4861;
  t5542 = t425*t293*t398;
  t5649 = t652*t5149;
  t5715 = t5542 + t5649;
  t6049 = Cos(var1[18]);
  t6069 = -1.*t6049;
  t6086 = 1. + t6069;
  t6134 = Sin(var1[18]);
  t6268 = t4102*t4878;
  t6300 = t3232*t5715;
  t6432 = t6268 + t6300;
  t6902 = t3232*t4878;
  t7191 = -1.*t4102*t5715;
  t7255 = t6902 + t7191;
  t7402 = Cos(var1[19]);
  t7419 = Sin(var1[19]);
  t7427 = -1.*t6134*t6432;
  t7431 = t6049*t7255;
  t7433 = t7427 + t7431;
  t7525 = t6049*t6432;
  t7528 = t6134*t7255;
  t7530 = t7525 + t7528;
  t7536 = Cos(var1[20]);
  t7542 = -1.*t7536;
  t7552 = 1. + t7542;
  t7564 = Sin(var1[20]);
  t7578 = t7419*t7433;
  t7612 = t7402*t7530;
  t7620 = t7578 + t7612;
  t7745 = t7402*t7433;
  t7776 = -1.*t7419*t7530;
  t7791 = t7745 + t7776;
  t7821 = Cos(var1[21]);
  t7831 = -1.*t7821;
  t7840 = 1. + t7831;
  t7932 = Sin(var1[21]);
  t7974 = -1.*t7564*t7620;
  t8001 = t7536*t7791;
  t8006 = t7974 + t8001;
  t8050 = t7536*t7620;
  t8062 = t7564*t7791;
  t8075 = t8050 + t8062;
  t585 = -0.049*t535;
  t760 = -0.135*t652;
  t871 = t585 + t760;
  t8176 = Sin(var1[3]);
  t1292 = -1.*t1290;
  t1315 = 1. + t1292;
  t8191 = Cos(var1[3]);
  t1626 = -1.*t1560;
  t1707 = 1. + t1626;
  t8215 = t8191*t398;
  t8224 = -1.*t8176*t1094*t1481;
  t8226 = t8215 + t8224;
  t3981 = -0.09*t3821;
  t4822 = 0.049*t4102;
  t4834 = t3981 + t4822;
  t8238 = -1.*t293*t1090*t8176;
  t8246 = t1290*t8226;
  t8247 = t8238 + t8246;
  t8251 = -1.*t1290*t293*t8176;
  t8256 = -1.*t1090*t8226;
  t8258 = t8251 + t8256;
  t4964 = -0.135*t535;
  t5062 = 0.049*t652;
  t5072 = t4964 + t5062;
  t8190 = t398*t8176*t1094;
  t8202 = t8191*t1481;
  t8206 = t8190 + t8202;
  t8296 = t1560*t8247;
  t8298 = t2129*t8258;
  t8299 = t8296 + t8298;
  t5278 = -0.049*t3821;
  t5467 = -0.09*t4102;
  t5526 = t5278 + t5467;
  t6095 = -0.049*t6086;
  t6148 = -0.21*t6134;
  t6150 = t6095 + t6148;
  t8275 = -1.*t2129*t8247;
  t8283 = t1560*t8258;
  t8285 = t8275 + t8283;
  t8314 = t425*t8206;
  t8315 = t652*t8299;
  t8316 = t8314 + t8315;
  t6542 = -0.21*t6086;
  t6656 = 0.049*t6134;
  t6860 = t6542 + t6656;
  t7404 = -1.*t7402;
  t7407 = 1. + t7404;
  t7411 = -0.2707*t7407;
  t7421 = 0.0016*t7419;
  t7425 = t7411 + t7421;
  t8326 = t4102*t8285;
  t8329 = t3232*t8316;
  t8330 = t8326 + t8329;
  t8338 = t3232*t8285;
  t8342 = -1.*t4102*t8316;
  t8345 = t8338 + t8342;
  t7446 = -1. + t7402;
  t7448 = 0.0016*t7446;
  t7452 = -0.2707*t7419;
  t7454 = t7448 + t7452;
  t7556 = 0.0184*t7552;
  t7568 = -0.7055*t7564;
  t7574 = t7556 + t7568;
  t8351 = -1.*t6134*t8330;
  t8358 = t6049*t8345;
  t8360 = t8351 + t8358;
  t8362 = t6049*t8330;
  t8363 = t6134*t8345;
  t8364 = t8362 + t8363;
  t7684 = -0.7055*t7552;
  t7703 = -0.0184*t7564;
  t7736 = t7684 + t7703;
  t7906 = -1.1135*t7840;
  t7960 = 0.0216*t7932;
  t7967 = t7906 + t7960;
  t8374 = t7419*t8360;
  t8375 = t7402*t8364;
  t8376 = t8374 + t8375;
  t8382 = t7402*t8360;
  t8385 = -1.*t7419*t8364;
  t8387 = t8382 + t8385;
  t8027 = -0.0216*t7840;
  t8044 = -1.1135*t7932;
  t8046 = t8027 + t8044;
  t8389 = -1.*t7564*t8376;
  t8391 = t7536*t8387;
  t8392 = t8389 + t8391;
  t8396 = t7536*t8376;
  t8397 = t7564*t8387;
  t8398 = t8396 + t8397;
  t8434 = t398*t8176;
  t8435 = t8191*t1094*t1481;
  t8439 = t8434 + t8435;
  t8447 = t8191*t293*t1090;
  t8452 = t1290*t8439;
  t8455 = t8447 + t8452;
  t8463 = t1290*t8191*t293;
  t8464 = -1.*t1090*t8439;
  t8466 = t8463 + t8464;
  t8423 = -1.*t8191*t398*t1094;
  t8424 = t8176*t1481;
  t8427 = t8423 + t8424;
  t8480 = t1560*t8455;
  t8482 = t2129*t8466;
  t8483 = t8480 + t8482;
  t8468 = -1.*t2129*t8455;
  t8470 = t1560*t8466;
  t8477 = t8468 + t8470;
  t8494 = t425*t8427;
  t8495 = t652*t8483;
  t8498 = t8494 + t8495;
  t8501 = t4102*t8477;
  t8502 = t3232*t8498;
  t8504 = t8501 + t8502;
  t8508 = t3232*t8477;
  t8511 = -1.*t4102*t8498;
  t8512 = t8508 + t8511;
  t8515 = -1.*t6134*t8504;
  t8517 = t6049*t8512;
  t8519 = t8515 + t8517;
  t8522 = t6049*t8504;
  t8526 = t6134*t8512;
  t8528 = t8522 + t8526;
  t8530 = t7419*t8519;
  t8532 = t7402*t8528;
  t8533 = t8530 + t8532;
  t8537 = t7402*t8519;
  t8538 = -1.*t7419*t8528;
  t8541 = t8537 + t8538;
  t8548 = -1.*t7564*t8533;
  t8549 = t7536*t8541;
  t8558 = t8548 + t8549;
  t8563 = t7536*t8533;
  t8567 = t7564*t8541;
  t8569 = t8563 + t8567;
  t8586 = t7932*t8558;
  t8588 = t7821*t8569;
  t8592 = t8586 + t8588;
  t8596 = t7821*t8558;
  t8600 = -1.*t7932*t8569;
  t8601 = t8596 + t8600;
  p_output1[0]=0.135*t1090*t1094 - 0.135*t1707*t2090 + 0.135*t2129*t2539 + 0.135*t1315*t1481*t293 + t4834*t4878 + t5072*t5149 + t5526*t5715 + t6150*t6432 - 0.1305*(t425*t5149 - 1.*t293*t398*t652) + t6860*t7255 + t7425*t7433 + t7454*t7530 + t7574*t7620 + t7736*t7791 + t7967*t8006 + t8046*t8075 + 0.0306*(t7932*t8006 + t7821*t8075) - 1.1312*(t7821*t8006 - 1.*t7932*t8075) + t293*t398*t871 + var1[0] - 1.*var2[0];
  p_output1[1]=-0.135*t1090*t293*t8176 - 0.135*t1315*t8226 - 0.135*t1707*t8247 + 0.135*t2129*t8258 + t4834*t8285 + t5072*t8299 - 0.1305*(-1.*t652*t8206 + t425*t8299) + t5526*t8316 + t6150*t8330 + t6860*t8345 + t7425*t8360 + t7454*t8364 + t7574*t8376 + t7736*t8387 + t7967*t8392 + t8046*t8398 + 0.0306*(t7932*t8392 + t7821*t8398) - 1.1312*(t7821*t8392 - 1.*t7932*t8398) + t8206*t871 + var1[1] - 1.*var2[1];
  p_output1[2]=0.135*t1090*t293*t8191 - 0.135*t1315*t8439 - 0.135*t1707*t8455 + 0.135*t2129*t8466 + t4834*t8477 + t5072*t8483 - 0.1305*(-1.*t652*t8427 + t425*t8483) + t5526*t8498 + t6150*t8504 + t6860*t8512 + t7425*t8519 + t7454*t8528 + t7574*t8533 + t7736*t8541 + t7967*t8558 + t8046*t8569 + 0.0306*t8592 - 1.1312*t8601 + t8427*t871 + var1[2] - 1.*var2[2];
  p_output1[3]=ArcTan(-0.766044*t8592 + 0.642788*t8601,0.642788*t8592 + 0.766044*t8601) - 1.*var2[3];
  p_output1[4]=ArcTan(-1.*t425*t5149 + t293*t398*t652,t652*t8206 - 1.*t425*t8299) - 1.*var2[4];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_RightToeBottom_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void h_RightToeBottom_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
