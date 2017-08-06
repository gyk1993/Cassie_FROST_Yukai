/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:30 GMT-04:00
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
  double t800;
  double t1370;
  double t2408;
  double t2433;
  double t2437;
  double t2448;
  double t5236;
  double t5242;
  double t5385;
  double t4881;
  double t5006;
  double t5152;
  double t5528;
  double t5983;
  double t6027;
  double t6035;
  double t6096;
  double t5870;
  double t5883;
  double t5911;
  double t6230;
  double t5685;
  double t5716;
  double t5745;
  double t5787;
  double t5800;
  double t5832;
  double t5851;
  double t6359;
  double t6387;
  double t6393;
  double t6440;
  double t6448;
  double t6506;
  double t6531;
  double t6551;
  double t6552;
  double t6553;
  double t6623;
  double t6637;
  double t6648;
  double t6714;
  double t6733;
  double t6755;
  double t6764;
  double t6793;
  double t6795;
  double t6801;
  double t6822;
  double t6827;
  double t6830;
  double t6840;
  double t6842;
  double t6847;
  double t6864;
  double t6879;
  double t6884;
  double t6886;
  double t6909;
  double t6919;
  double t6920;
  double t6937;
  double t6938;
  double t6940;
  double t6959;
  double t7053;
  double t7059;
  double t7065;
  double t7086;
  double t7087;
  double t7094;
  double t1776;
  double t1952;
  double t2359;
  double t2364;
  double t7158;
  double t2439;
  double t2440;
  double t4644;
  double t4676;
  double t4862;
  double t4877;
  double t7141;
  double t7150;
  double t7159;
  double t7167;
  double t5550;
  double t5579;
  double t5771;
  double t5789;
  double t5798;
  double t7192;
  double t7193;
  double t7194;
  double t7181;
  double t7183;
  double t7185;
  double t6074;
  double t6186;
  double t6206;
  double t6235;
  double t6240;
  double t6251;
  double t7245;
  double t7246;
  double t7247;
  double t7254;
  double t7257;
  double t7258;
  double t6324;
  double t6344;
  double t6357;
  double t6520;
  double t6537;
  double t6543;
  double t7230;
  double t7241;
  double t7242;
  double t7291;
  double t7302;
  double t7303;
  double t6558;
  double t6577;
  double t6600;
  double t6756;
  double t6772;
  double t6786;
  double t7314;
  double t7330;
  double t7331;
  double t7341;
  double t7344;
  double t7345;
  double t6807;
  double t6809;
  double t6814;
  double t6856;
  double t6875;
  double t6878;
  double t7364;
  double t7372;
  double t7378;
  double t7382;
  double t7391;
  double t7393;
  double t6892;
  double t6893;
  double t6894;
  double t6946;
  double t7041;
  double t7042;
  double t7406;
  double t7408;
  double t7409;
  double t7418;
  double t7422;
  double t7423;
  double t7075;
  double t7082;
  double t7084;
  double t7428;
  double t7429;
  double t7435;
  double t7444;
  double t7449;
  double t7458;
  double t7489;
  double t7490;
  double t7494;
  double t7504;
  double t7505;
  double t7507;
  double t7498;
  double t7499;
  double t7502;
  double t7517;
  double t7518;
  double t7519;
  double t7522;
  double t7526;
  double t7527;
  double t7509;
  double t7510;
  double t7512;
  double t7551;
  double t7553;
  double t7554;
  double t7567;
  double t7569;
  double t7570;
  double t7583;
  double t7585;
  double t7586;
  double t7590;
  double t7594;
  double t7598;
  double t7601;
  double t7602;
  double t7603;
  double t7605;
  double t7612;
  double t7613;
  double t7619;
  double t7622;
  double t7625;
  double t7628;
  double t7629;
  double t7630;
  double t7634;
  double t7636;
  double t7637;
  t800 = Cos(var1[4]);
  t1370 = Cos(var1[6]);
  t2408 = Sin(var1[5]);
  t2433 = Sin(var1[4]);
  t2437 = Sin(var1[6]);
  t2448 = Cos(var1[7]);
  t5236 = t1370*t2433;
  t5242 = t800*t2408*t2437;
  t5385 = t5236 + t5242;
  t4881 = -1.*t800*t1370*t2408;
  t5006 = t2433*t2437;
  t5152 = t4881 + t5006;
  t5528 = Sin(var1[7]);
  t5983 = Cos(var1[8]);
  t6027 = -1.*t5983;
  t6035 = 1. + t6027;
  t6096 = Sin(var1[8]);
  t5870 = t2448*t5152;
  t5883 = t5385*t5528;
  t5911 = t5870 + t5883;
  t6230 = Cos(var1[5]);
  t5685 = Cos(var1[9]);
  t5716 = -1.*t5685;
  t5745 = 1. + t5716;
  t5787 = Sin(var1[9]);
  t5800 = t2448*t5385;
  t5832 = -1.*t5152*t5528;
  t5851 = t5800 + t5832;
  t6359 = t800*t6230*t5983;
  t6387 = t5911*t6096;
  t6393 = t6359 + t6387;
  t6440 = Cos(var1[10]);
  t6448 = -1.*t6440;
  t6506 = 1. + t6448;
  t6531 = Sin(var1[10]);
  t6551 = t5787*t5851;
  t6552 = t5685*t6393;
  t6553 = t6551 + t6552;
  t6623 = t5685*t5851;
  t6637 = -1.*t5787*t6393;
  t6648 = t6623 + t6637;
  t6714 = Cos(var1[11]);
  t6733 = -1.*t6714;
  t6755 = 1. + t6733;
  t6764 = Sin(var1[11]);
  t6793 = -1.*t6531*t6553;
  t6795 = t6440*t6648;
  t6801 = t6793 + t6795;
  t6822 = t6440*t6553;
  t6827 = t6531*t6648;
  t6830 = t6822 + t6827;
  t6840 = Cos(var1[12]);
  t6842 = -1.*t6840;
  t6847 = 1. + t6842;
  t6864 = Sin(var1[12]);
  t6879 = t6764*t6801;
  t6884 = t6714*t6830;
  t6886 = t6879 + t6884;
  t6909 = t6714*t6801;
  t6919 = -1.*t6764*t6830;
  t6920 = t6909 + t6919;
  t6937 = Cos(var1[13]);
  t6938 = -1.*t6937;
  t6940 = 1. + t6938;
  t6959 = Sin(var1[13]);
  t7053 = -1.*t6864*t6886;
  t7059 = t6840*t6920;
  t7065 = t7053 + t7059;
  t7086 = t6840*t6886;
  t7087 = t6864*t6920;
  t7094 = t7086 + t7087;
  t1776 = -1.*t1370;
  t1952 = 1. + t1776;
  t2359 = 0.135*t1952;
  t2364 = 0. + t2359;
  t7158 = Sin(var1[3]);
  t2439 = -0.135*t2437;
  t2440 = 0. + t2439;
  t4644 = -1.*t2448;
  t4676 = 1. + t4644;
  t4862 = 0.135*t4676;
  t4877 = 0. + t4862;
  t7141 = Cos(var1[3]);
  t7150 = t7141*t6230;
  t7159 = -1.*t7158*t2433*t2408;
  t7167 = t7150 + t7159;
  t5550 = -0.135*t5528;
  t5579 = 0. + t5550;
  t5771 = -0.09*t5745;
  t5789 = 0.049*t5787;
  t5798 = 0. + t5771 + t5789;
  t7192 = -1.*t800*t1370*t7158;
  t7193 = -1.*t7167*t2437;
  t7194 = t7192 + t7193;
  t7181 = t1370*t7167;
  t7183 = -1.*t800*t7158*t2437;
  t7185 = t7181 + t7183;
  t6074 = 0.135*t6035;
  t6186 = 0.049*t6096;
  t6206 = 0. + t6074 + t6186;
  t6235 = -0.049*t6035;
  t6240 = 0.135*t6096;
  t6251 = 0. + t6235 + t6240;
  t7245 = t2448*t7185;
  t7246 = t7194*t5528;
  t7247 = t7245 + t7246;
  t7254 = t6230*t7158*t2433;
  t7257 = t7141*t2408;
  t7258 = t7254 + t7257;
  t6324 = -0.049*t5745;
  t6344 = -0.09*t5787;
  t6357 = 0. + t6324 + t6344;
  t6520 = -0.049*t6506;
  t6537 = -0.21*t6531;
  t6543 = 0. + t6520 + t6537;
  t7230 = t2448*t7194;
  t7241 = -1.*t7185*t5528;
  t7242 = t7230 + t7241;
  t7291 = t5983*t7258;
  t7302 = t7247*t6096;
  t7303 = t7291 + t7302;
  t6558 = -0.21*t6506;
  t6577 = 0.049*t6531;
  t6600 = 0. + t6558 + t6577;
  t6756 = -0.2707*t6755;
  t6772 = 0.0016*t6764;
  t6786 = 0. + t6756 + t6772;
  t7314 = t5787*t7242;
  t7330 = t5685*t7303;
  t7331 = t7314 + t7330;
  t7341 = t5685*t7242;
  t7344 = -1.*t5787*t7303;
  t7345 = t7341 + t7344;
  t6807 = -0.0016*t6755;
  t6809 = -0.2707*t6764;
  t6814 = 0. + t6807 + t6809;
  t6856 = 0.0184*t6847;
  t6875 = -0.7055*t6864;
  t6878 = 0. + t6856 + t6875;
  t7364 = -1.*t6531*t7331;
  t7372 = t6440*t7345;
  t7378 = t7364 + t7372;
  t7382 = t6440*t7331;
  t7391 = t6531*t7345;
  t7393 = t7382 + t7391;
  t6892 = -0.7055*t6847;
  t6893 = -0.0184*t6864;
  t6894 = 0. + t6892 + t6893;
  t6946 = -1.1135*t6940;
  t7041 = 0.0216*t6959;
  t7042 = 0. + t6946 + t7041;
  t7406 = t6764*t7378;
  t7408 = t6714*t7393;
  t7409 = t7406 + t7408;
  t7418 = t6714*t7378;
  t7422 = -1.*t6764*t7393;
  t7423 = t7418 + t7422;
  t7075 = -0.0216*t6940;
  t7082 = -1.1135*t6959;
  t7084 = 0. + t7075 + t7082;
  t7428 = -1.*t6864*t7409;
  t7429 = t6840*t7423;
  t7435 = t7428 + t7429;
  t7444 = t6840*t7409;
  t7449 = t6864*t7423;
  t7458 = t7444 + t7449;
  t7489 = t6230*t7158;
  t7490 = t7141*t2433*t2408;
  t7494 = t7489 + t7490;
  t7504 = t7141*t800*t1370;
  t7505 = -1.*t7494*t2437;
  t7507 = t7504 + t7505;
  t7498 = t1370*t7494;
  t7499 = t7141*t800*t2437;
  t7502 = t7498 + t7499;
  t7517 = t2448*t7502;
  t7518 = t7507*t5528;
  t7519 = t7517 + t7518;
  t7522 = -1.*t7141*t6230*t2433;
  t7526 = t7158*t2408;
  t7527 = t7522 + t7526;
  t7509 = t2448*t7507;
  t7510 = -1.*t7502*t5528;
  t7512 = t7509 + t7510;
  t7551 = t5983*t7527;
  t7553 = t7519*t6096;
  t7554 = t7551 + t7553;
  t7567 = t5787*t7512;
  t7569 = t5685*t7554;
  t7570 = t7567 + t7569;
  t7583 = t5685*t7512;
  t7585 = -1.*t5787*t7554;
  t7586 = t7583 + t7585;
  t7590 = -1.*t6531*t7570;
  t7594 = t6440*t7586;
  t7598 = t7590 + t7594;
  t7601 = t6440*t7570;
  t7602 = t6531*t7586;
  t7603 = t7601 + t7602;
  t7605 = t6764*t7598;
  t7612 = t6714*t7603;
  t7613 = t7605 + t7612;
  t7619 = t6714*t7598;
  t7622 = -1.*t6764*t7603;
  t7625 = t7619 + t7622;
  t7628 = -1.*t6864*t7613;
  t7629 = t6840*t7625;
  t7630 = t7628 + t7629;
  t7634 = t6840*t7613;
  t7636 = t6864*t7625;
  t7637 = t7634 + t7636;
  p_output1[0]=0. + t2433*t2440 + t4877*t5152 + t5385*t5579 + t5798*t5851 + t5911*t6206 + t6357*t6393 + t6543*t6553 + t6600*t6648 + t6786*t6801 + t6814*t6830 + t6878*t6886 + t6894*t6920 + t7042*t7065 + t7084*t7094 + 0.058287*(t6959*t7065 + t6937*t7094) - 1.1135*(t6937*t7065 - 1.*t6959*t7094) - 1.*t2364*t2408*t800 + t6230*t6251*t800 + 0.1305*(t5911*t5983 - 1.*t6096*t6230*t800) + var1[0];
  p_output1[1]=0. + t2364*t7167 + t4877*t7185 + t5579*t7194 + t5798*t7242 + t6206*t7247 + t6251*t7258 + 0.1305*(t5983*t7247 - 1.*t6096*t7258) + t6357*t7303 + t6543*t7331 + t6600*t7345 + t6786*t7378 + t6814*t7393 + t6878*t7409 + t6894*t7423 + t7042*t7435 + t7084*t7458 + 0.058287*(t6959*t7435 + t6937*t7458) - 1.1135*(t6937*t7435 - 1.*t6959*t7458) - 1.*t2440*t7158*t800 + var1[1];
  p_output1[2]=0. + t2364*t7494 + t4877*t7502 + t5579*t7507 + t5798*t7512 + t6206*t7519 + t6251*t7527 + 0.1305*(t5983*t7519 - 1.*t6096*t7527) + t6357*t7554 + t6543*t7570 + t6600*t7586 + t6786*t7598 + t6814*t7603 + t6878*t7613 + t6894*t7625 + t7042*t7630 + t7084*t7637 + 0.058287*(t6959*t7630 + t6937*t7637) - 1.1135*(t6937*t7630 - 1.*t6959*t7637) + t2440*t7141*t800 + var1[2];
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

#include "p_LeftToeBottomFront.hh"

namespace SymExpression
{

void p_LeftToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
