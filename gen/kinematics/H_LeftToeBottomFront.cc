/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:31 GMT-04:00
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
  double t2053;
  double t1639;
  double t2058;
  double t1640;
  double t2060;
  double t863;
  double t2446;
  double t4354;
  double t4517;
  double t2051;
  double t2359;
  double t2415;
  double t4693;
  double t5200;
  double t2439;
  double t4862;
  double t4877;
  double t822;
  double t5236;
  double t5242;
  double t5385;
  double t5550;
  double t5579;
  double t5630;
  double t5771;
  double t5789;
  double t5798;
  double t5870;
  double t5006;
  double t5800;
  double t5851;
  double t780;
  double t5883;
  double t5888;
  double t6074;
  double t6215;
  double t5868;
  double t6123;
  double t6186;
  double t641;
  double t6235;
  double t6240;
  double t6251;
  double t6295;
  double t6206;
  double t6269;
  double t6276;
  double t611;
  double t6304;
  double t6324;
  double t6344;
  double t603;
  double t6554;
  double t6577;
  double t6600;
  double t6623;
  double t6648;
  double t6786;
  double t6795;
  double t6801;
  double t6558;
  double t6683;
  double t6756;
  double t6772;
  double t6805;
  double t6807;
  double t6814;
  double t6822;
  double t6827;
  double t6833;
  double t6856;
  double t6875;
  double t6878;
  double t6879;
  double t6884;
  double t6809;
  double t6891;
  double t6892;
  double t6894;
  double t6909;
  double t6920;
  double t6893;
  double t6932;
  double t6946;
  double t7042;
  double t7059;
  double t7072;
  double t6402;
  double t7041;
  double t7075;
  double t7082;
  double t7086;
  double t7087;
  double t7099;
  double t7150;
  double t7172;
  double t7174;
  double t7206;
  double t7230;
  double t7242;
  double t7138;
  double t7181;
  double t7186;
  double t7194;
  double t7243;
  double t7245;
  double t7249;
  double t7254;
  double t7257;
  double t7268;
  double t7269;
  double t7272;
  double t7273;
  double t7274;
  double t7291;
  double t7246;
  double t7302;
  double t7313;
  double t7330;
  double t7336;
  double t7341;
  double t7314;
  double t7345;
  double t7352;
  double t7378;
  double t7379;
  double t7382;
  double t7372;
  double t7391;
  double t7395;
  double t7408;
  double t7415;
  double t7418;
  double t6291;
  double t6357;
  double t6359;
  double t6520;
  double t6537;
  double t6543;
  double t7084;
  double t7108;
  double t7111;
  double t7118;
  double t7120;
  double t7122;
  double t7406;
  double t7423;
  double t7426;
  double t7439;
  double t7444;
  double t7449;
  double t7598;
  double t7600;
  double t7569;
  double t7577;
  double t7642;
  double t7644;
  double t7669;
  double t7674;
  double t7694;
  double t7698;
  double t7710;
  double t7711;
  double t6387;
  double t6551;
  double t6552;
  double t7509;
  double t7512;
  double t7514;
  double t7517;
  double t7520;
  double t7526;
  double t7538;
  double t7539;
  double t7540;
  double t7549;
  double t7553;
  double t7561;
  double t7583;
  double t7586;
  double t7588;
  double t7601;
  double t7602;
  double t7604;
  double t7612;
  double t7615;
  double t7619;
  double t7636;
  double t7638;
  double t7639;
  double t7645;
  double t7647;
  double t7655;
  double t7658;
  double t7659;
  double t7664;
  double t7675;
  double t7677;
  double t7678;
  double t7685;
  double t7689;
  double t7690;
  double t7700;
  double t7701;
  double t7703;
  double t7705;
  double t7706;
  double t7707;
  double t7713;
  double t7719;
  double t7720;
  double t7725;
  double t7730;
  double t7734;
  double t7112;
  double t7126;
  double t7127;
  double t7429;
  double t7464;
  double t7465;
  t2053 = Cos(var1[4]);
  t1639 = Cos(var1[6]);
  t2058 = Sin(var1[5]);
  t1640 = Sin(var1[4]);
  t2060 = Sin(var1[6]);
  t863 = Cos(var1[7]);
  t2446 = -1.*t2053*t1639*t2058;
  t4354 = t1640*t2060;
  t4517 = t2446 + t4354;
  t2051 = t1639*t1640;
  t2359 = t2053*t2058*t2060;
  t2415 = t2051 + t2359;
  t4693 = Sin(var1[7]);
  t5200 = Cos(var1[9]);
  t2439 = t863*t2415;
  t4862 = -1.*t4517*t4693;
  t4877 = t2439 + t4862;
  t822 = Sin(var1[9]);
  t5236 = Cos(var1[5]);
  t5242 = Cos(var1[8]);
  t5385 = t2053*t5236*t5242;
  t5550 = t863*t4517;
  t5579 = t2415*t4693;
  t5630 = t5550 + t5579;
  t5771 = Sin(var1[8]);
  t5789 = t5630*t5771;
  t5798 = t5385 + t5789;
  t5870 = Cos(var1[10]);
  t5006 = t822*t4877;
  t5800 = t5200*t5798;
  t5851 = t5006 + t5800;
  t780 = Sin(var1[10]);
  t5883 = t5200*t4877;
  t5888 = -1.*t822*t5798;
  t6074 = t5883 + t5888;
  t6215 = Cos(var1[11]);
  t5868 = -1.*t780*t5851;
  t6123 = t5870*t6074;
  t6186 = t5868 + t6123;
  t641 = Sin(var1[11]);
  t6235 = t5870*t5851;
  t6240 = t780*t6074;
  t6251 = t6235 + t6240;
  t6295 = Cos(var1[12]);
  t6206 = t641*t6186;
  t6269 = t6215*t6251;
  t6276 = t6206 + t6269;
  t611 = Sin(var1[12]);
  t6304 = t6215*t6186;
  t6324 = -1.*t641*t6251;
  t6344 = t6304 + t6324;
  t603 = Sin(var1[13]);
  t6554 = Sin(var1[3]);
  t6577 = Cos(var1[3]);
  t6600 = t6577*t5236;
  t6623 = -1.*t6554*t1640*t2058;
  t6648 = t6600 + t6623;
  t6786 = t1639*t6648;
  t6795 = -1.*t2053*t6554*t2060;
  t6801 = t6786 + t6795;
  t6558 = -1.*t2053*t1639*t6554;
  t6683 = -1.*t6648*t2060;
  t6756 = t6558 + t6683;
  t6772 = t863*t6756;
  t6805 = -1.*t6801*t4693;
  t6807 = t6772 + t6805;
  t6814 = t5236*t6554*t1640;
  t6822 = t6577*t2058;
  t6827 = t6814 + t6822;
  t6833 = t5242*t6827;
  t6856 = t863*t6801;
  t6875 = t6756*t4693;
  t6878 = t6856 + t6875;
  t6879 = t6878*t5771;
  t6884 = t6833 + t6879;
  t6809 = t822*t6807;
  t6891 = t5200*t6884;
  t6892 = t6809 + t6891;
  t6894 = t5200*t6807;
  t6909 = -1.*t822*t6884;
  t6920 = t6894 + t6909;
  t6893 = -1.*t780*t6892;
  t6932 = t5870*t6920;
  t6946 = t6893 + t6932;
  t7042 = t5870*t6892;
  t7059 = t780*t6920;
  t7072 = t7042 + t7059;
  t6402 = Cos(var1[13]);
  t7041 = t641*t6946;
  t7075 = t6215*t7072;
  t7082 = t7041 + t7075;
  t7086 = t6215*t6946;
  t7087 = -1.*t641*t7072;
  t7099 = t7086 + t7087;
  t7150 = t5236*t6554;
  t7172 = t6577*t1640*t2058;
  t7174 = t7150 + t7172;
  t7206 = t1639*t7174;
  t7230 = t6577*t2053*t2060;
  t7242 = t7206 + t7230;
  t7138 = t6577*t2053*t1639;
  t7181 = -1.*t7174*t2060;
  t7186 = t7138 + t7181;
  t7194 = t863*t7186;
  t7243 = -1.*t7242*t4693;
  t7245 = t7194 + t7243;
  t7249 = -1.*t6577*t5236*t1640;
  t7254 = t6554*t2058;
  t7257 = t7249 + t7254;
  t7268 = t5242*t7257;
  t7269 = t863*t7242;
  t7272 = t7186*t4693;
  t7273 = t7269 + t7272;
  t7274 = t7273*t5771;
  t7291 = t7268 + t7274;
  t7246 = t822*t7245;
  t7302 = t5200*t7291;
  t7313 = t7246 + t7302;
  t7330 = t5200*t7245;
  t7336 = -1.*t822*t7291;
  t7341 = t7330 + t7336;
  t7314 = -1.*t780*t7313;
  t7345 = t5870*t7341;
  t7352 = t7314 + t7345;
  t7378 = t5870*t7313;
  t7379 = t780*t7341;
  t7382 = t7378 + t7379;
  t7372 = t641*t7352;
  t7391 = t6215*t7382;
  t7395 = t7372 + t7391;
  t7408 = t6215*t7352;
  t7415 = -1.*t641*t7382;
  t7418 = t7408 + t7415;
  t6291 = -1.*t611*t6276;
  t6357 = t6295*t6344;
  t6359 = t6291 + t6357;
  t6520 = t6295*t6276;
  t6537 = t611*t6344;
  t6543 = t6520 + t6537;
  t7084 = -1.*t611*t7082;
  t7108 = t6295*t7099;
  t7111 = t7084 + t7108;
  t7118 = t6295*t7082;
  t7120 = t611*t7099;
  t7122 = t7118 + t7120;
  t7406 = -1.*t611*t7395;
  t7423 = t6295*t7418;
  t7426 = t7406 + t7423;
  t7439 = t6295*t7395;
  t7444 = t611*t7418;
  t7449 = t7439 + t7444;
  t7598 = -1.*t5242;
  t7600 = 1. + t7598;
  t7569 = -1.*t5200;
  t7577 = 1. + t7569;
  t7642 = -1.*t5870;
  t7644 = 1. + t7642;
  t7669 = -1.*t6215;
  t7674 = 1. + t7669;
  t7694 = -1.*t6295;
  t7698 = 1. + t7694;
  t7710 = -1.*t6402;
  t7711 = 1. + t7710;
  t6387 = t603*t6359;
  t6551 = t6402*t6543;
  t6552 = t6387 + t6551;
  t7509 = -1.*t1639;
  t7512 = 1. + t7509;
  t7514 = 0.135*t7512;
  t7517 = 0. + t7514;
  t7520 = -0.135*t2060;
  t7526 = 0. + t7520;
  t7538 = -1.*t863;
  t7539 = 1. + t7538;
  t7540 = 0.135*t7539;
  t7549 = 0. + t7540;
  t7553 = -0.135*t4693;
  t7561 = 0. + t7553;
  t7583 = -0.09*t7577;
  t7586 = 0.049*t822;
  t7588 = 0. + t7583 + t7586;
  t7601 = 0.135*t7600;
  t7602 = 0.049*t5771;
  t7604 = 0. + t7601 + t7602;
  t7612 = -0.049*t7600;
  t7615 = 0.135*t5771;
  t7619 = 0. + t7612 + t7615;
  t7636 = -0.049*t7577;
  t7638 = -0.09*t822;
  t7639 = 0. + t7636 + t7638;
  t7645 = -0.049*t7644;
  t7647 = -0.21*t780;
  t7655 = 0. + t7645 + t7647;
  t7658 = -0.21*t7644;
  t7659 = 0.049*t780;
  t7664 = 0. + t7658 + t7659;
  t7675 = -0.2707*t7674;
  t7677 = 0.0016*t641;
  t7678 = 0. + t7675 + t7677;
  t7685 = -0.0016*t7674;
  t7689 = -0.2707*t641;
  t7690 = 0. + t7685 + t7689;
  t7700 = 0.0184*t7698;
  t7701 = -0.7055*t611;
  t7703 = 0. + t7700 + t7701;
  t7705 = -0.7055*t7698;
  t7706 = -0.0184*t611;
  t7707 = 0. + t7705 + t7706;
  t7713 = -1.1135*t7711;
  t7719 = 0.0216*t603;
  t7720 = 0. + t7713 + t7719;
  t7725 = -0.0216*t7711;
  t7730 = -1.1135*t603;
  t7734 = 0. + t7725 + t7730;
  t7112 = t603*t7111;
  t7126 = t6402*t7122;
  t7127 = t7112 + t7126;
  t7429 = t603*t7426;
  t7464 = t6402*t7449;
  t7465 = t7429 + t7464;
  p_output1[0]=t6552;
  p_output1[1]=t7127;
  p_output1[2]=t7465;
  p_output1[3]=0.;
  p_output1[4]=-1.*t5242*t5630 + t2053*t5236*t5771;
  p_output1[5]=t5771*t6827 - 1.*t5242*t6878;
  p_output1[6]=t5771*t7257 - 1.*t5242*t7273;
  p_output1[7]=0.;
  p_output1[8]=-1.*t6359*t6402 + t603*t6543;
  p_output1[9]=-1.*t6402*t7111 + t603*t7122;
  p_output1[10]=-1.*t6402*t7426 + t603*t7449;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t5242*t5630 - 1.*t2053*t5236*t5771) - 1.1135*(t6359*t6402 - 1.*t603*t6543) + 0.058287*t6552 - 1.*t2053*t2058*t7517 + t1640*t7526 + t4517*t7549 + t2415*t7561 + t4877*t7588 + t5630*t7604 + t2053*t5236*t7619 + t5798*t7639 + t5851*t7655 + t6074*t7664 + t6186*t7678 + t6251*t7690 + t6276*t7703 + t6344*t7707 + t6359*t7720 + t6543*t7734 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t5771*t6827 + t5242*t6878) - 1.1135*(t6402*t7111 - 1.*t603*t7122) + 0.058287*t7127 + t6648*t7517 - 1.*t2053*t6554*t7526 + t6801*t7549 + t6756*t7561 + t6807*t7588 + t6878*t7604 + t6827*t7619 + t6884*t7639 + t6892*t7655 + t6920*t7664 + t6946*t7678 + t7072*t7690 + t7082*t7703 + t7099*t7707 + t7111*t7720 + t7122*t7734 + var1[1];
  p_output1[14]=0. + 0.1305*(-1.*t5771*t7257 + t5242*t7273) - 1.1135*(t6402*t7426 - 1.*t603*t7449) + 0.058287*t7465 + t7174*t7517 + t2053*t6577*t7526 + t7242*t7549 + t7186*t7561 + t7245*t7588 + t7273*t7604 + t7257*t7619 + t7291*t7639 + t7313*t7655 + t7341*t7664 + t7352*t7678 + t7382*t7690 + t7395*t7703 + t7418*t7707 + t7426*t7720 + t7449*t7734 + var1[2];
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

#include "H_LeftToeBottomFront.hh"

namespace SymExpression
{

void H_LeftToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
