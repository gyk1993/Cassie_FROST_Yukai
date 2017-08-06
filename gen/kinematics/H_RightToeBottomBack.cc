/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:29 GMT-04:00
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
  double t1393;
  double t1369;
  double t1427;
  double t1144;
  double t1457;
  double t1679;
  double t1370;
  double t1464;
  double t1623;
  double t766;
  double t1776;
  double t4644;
  double t4676;
  double t5337;
  double t1657;
  double t4862;
  double t5006;
  double t765;
  double t5362;
  double t5383;
  double t5385;
  double t5457;
  double t5528;
  double t5550;
  double t5577;
  double t5579;
  double t5618;
  double t5710;
  double t5242;
  double t5630;
  double t5631;
  double t730;
  double t5716;
  double t5734;
  double t5745;
  double t5796;
  double t5686;
  double t5771;
  double t5787;
  double t693;
  double t5798;
  double t5800;
  double t5825;
  double t5846;
  double t5789;
  double t5832;
  double t5836;
  double t677;
  double t5851;
  double t5862;
  double t5868;
  double t3;
  double t6042;
  double t6064;
  double t6074;
  double t6076;
  double t6080;
  double t6058;
  double t6096;
  double t6098;
  double t6177;
  double t6185;
  double t6206;
  double t6149;
  double t6215;
  double t6230;
  double t6240;
  double t6251;
  double t6262;
  double t6269;
  double t6276;
  double t6291;
  double t6294;
  double t6295;
  double t6297;
  double t6235;
  double t6304;
  double t6317;
  double t6324;
  double t6329;
  double t6344;
  double t6319;
  double t6357;
  double t6359;
  double t6393;
  double t6402;
  double t6409;
  double t5894;
  double t6387;
  double t6440;
  double t6442;
  double t6448;
  double t6464;
  double t6506;
  double t6554;
  double t6558;
  double t6561;
  double t6553;
  double t6577;
  double t6581;
  double t6600;
  double t6619;
  double t6623;
  double t6583;
  double t6637;
  double t6648;
  double t6692;
  double t6714;
  double t6729;
  double t6733;
  double t6755;
  double t6756;
  double t6763;
  double t6764;
  double t6771;
  double t6683;
  double t6772;
  double t6781;
  double t6786;
  double t6787;
  double t6793;
  double t6785;
  double t6795;
  double t6801;
  double t6807;
  double t6809;
  double t6811;
  double t6805;
  double t6814;
  double t6815;
  double t6822;
  double t6823;
  double t6827;
  double t5844;
  double t5870;
  double t5876;
  double t5911;
  double t5983;
  double t6005;
  double t6447;
  double t6520;
  double t6530;
  double t6537;
  double t6543;
  double t6550;
  double t6821;
  double t6830;
  double t6832;
  double t6840;
  double t6842;
  double t6846;
  double t6947;
  double t6957;
  double t7103;
  double t7104;
  double t7179;
  double t7180;
  double t7222;
  double t7229;
  double t7250;
  double t7251;
  double t7277;
  double t7278;
  double t5883;
  double t6027;
  double t6035;
  double t7059;
  double t7062;
  double t6959;
  double t7041;
  double t7042;
  double t7067;
  double t7071;
  double t7072;
  double t7073;
  double t7076;
  double t7080;
  double t7082;
  double t7084;
  double t7087;
  double t7094;
  double t7108;
  double t7111;
  double t7112;
  double t7120;
  double t7122;
  double t7126;
  double t7159;
  double t7167;
  double t7172;
  double t7181;
  double t7183;
  double t7185;
  double t7192;
  double t7193;
  double t7194;
  double t7230;
  double t7241;
  double t7242;
  double t7245;
  double t7246;
  double t7247;
  double t7254;
  double t7257;
  double t7258;
  double t7269;
  double t7272;
  double t7273;
  double t7291;
  double t7302;
  double t7303;
  double t7314;
  double t7330;
  double t7331;
  double t6531;
  double t6551;
  double t6552;
  double t6833;
  double t6847;
  double t6856;
  t1393 = Cos(var1[14]);
  t1369 = Sin(var1[4]);
  t1427 = Cos(var1[4]);
  t1144 = Sin(var1[14]);
  t1457 = Sin(var1[5]);
  t1679 = Cos(var1[15]);
  t1370 = t1144*t1369;
  t1464 = -1.*t1393*t1427*t1457;
  t1623 = t1370 + t1464;
  t766 = Sin(var1[15]);
  t1776 = t1393*t1369;
  t4644 = t1427*t1144*t1457;
  t4676 = t1776 + t4644;
  t5337 = Cos(var1[17]);
  t1657 = -1.*t766*t1623;
  t4862 = t1679*t4676;
  t5006 = t1657 + t4862;
  t765 = Sin(var1[17]);
  t5362 = Cos(var1[16]);
  t5383 = Cos(var1[5]);
  t5385 = t5362*t1427*t5383;
  t5457 = Sin(var1[16]);
  t5528 = t1679*t1623;
  t5550 = t766*t4676;
  t5577 = t5528 + t5550;
  t5579 = t5457*t5577;
  t5618 = t5385 + t5579;
  t5710 = Cos(var1[18]);
  t5242 = t765*t5006;
  t5630 = t5337*t5618;
  t5631 = t5242 + t5630;
  t730 = Sin(var1[18]);
  t5716 = t5337*t5006;
  t5734 = -1.*t765*t5618;
  t5745 = t5716 + t5734;
  t5796 = Cos(var1[19]);
  t5686 = -1.*t730*t5631;
  t5771 = t5710*t5745;
  t5787 = t5686 + t5771;
  t693 = Sin(var1[19]);
  t5798 = t5710*t5631;
  t5800 = t730*t5745;
  t5825 = t5798 + t5800;
  t5846 = Cos(var1[20]);
  t5789 = t693*t5787;
  t5832 = t5796*t5825;
  t5836 = t5789 + t5832;
  t677 = Sin(var1[20]);
  t5851 = t5796*t5787;
  t5862 = -1.*t693*t5825;
  t5868 = t5851 + t5862;
  t3 = Sin(var1[21]);
  t6042 = Sin(var1[3]);
  t6064 = Cos(var1[3]);
  t6074 = t6064*t5383;
  t6076 = -1.*t6042*t1369*t1457;
  t6080 = t6074 + t6076;
  t6058 = -1.*t1427*t1144*t6042;
  t6096 = t1393*t6080;
  t6098 = t6058 + t6096;
  t6177 = -1.*t1393*t1427*t6042;
  t6185 = -1.*t1144*t6080;
  t6206 = t6177 + t6185;
  t6149 = -1.*t766*t6098;
  t6215 = t1679*t6206;
  t6230 = t6149 + t6215;
  t6240 = t5383*t6042*t1369;
  t6251 = t6064*t1457;
  t6262 = t6240 + t6251;
  t6269 = t5362*t6262;
  t6276 = t1679*t6098;
  t6291 = t766*t6206;
  t6294 = t6276 + t6291;
  t6295 = t5457*t6294;
  t6297 = t6269 + t6295;
  t6235 = t765*t6230;
  t6304 = t5337*t6297;
  t6317 = t6235 + t6304;
  t6324 = t5337*t6230;
  t6329 = -1.*t765*t6297;
  t6344 = t6324 + t6329;
  t6319 = -1.*t730*t6317;
  t6357 = t5710*t6344;
  t6359 = t6319 + t6357;
  t6393 = t5710*t6317;
  t6402 = t730*t6344;
  t6409 = t6393 + t6402;
  t5894 = Cos(var1[21]);
  t6387 = t693*t6359;
  t6440 = t5796*t6409;
  t6442 = t6387 + t6440;
  t6448 = t5796*t6359;
  t6464 = -1.*t693*t6409;
  t6506 = t6448 + t6464;
  t6554 = t5383*t6042;
  t6558 = t6064*t1369*t1457;
  t6561 = t6554 + t6558;
  t6553 = t6064*t1427*t1144;
  t6577 = t1393*t6561;
  t6581 = t6553 + t6577;
  t6600 = t1393*t6064*t1427;
  t6619 = -1.*t1144*t6561;
  t6623 = t6600 + t6619;
  t6583 = -1.*t766*t6581;
  t6637 = t1679*t6623;
  t6648 = t6583 + t6637;
  t6692 = -1.*t6064*t5383*t1369;
  t6714 = t6042*t1457;
  t6729 = t6692 + t6714;
  t6733 = t5362*t6729;
  t6755 = t1679*t6581;
  t6756 = t766*t6623;
  t6763 = t6755 + t6756;
  t6764 = t5457*t6763;
  t6771 = t6733 + t6764;
  t6683 = t765*t6648;
  t6772 = t5337*t6771;
  t6781 = t6683 + t6772;
  t6786 = t5337*t6648;
  t6787 = -1.*t765*t6771;
  t6793 = t6786 + t6787;
  t6785 = -1.*t730*t6781;
  t6795 = t5710*t6793;
  t6801 = t6785 + t6795;
  t6807 = t5710*t6781;
  t6809 = t730*t6793;
  t6811 = t6807 + t6809;
  t6805 = t693*t6801;
  t6814 = t5796*t6811;
  t6815 = t6805 + t6814;
  t6822 = t5796*t6801;
  t6823 = -1.*t693*t6811;
  t6827 = t6822 + t6823;
  t5844 = -1.*t677*t5836;
  t5870 = t5846*t5868;
  t5876 = t5844 + t5870;
  t5911 = t5846*t5836;
  t5983 = t677*t5868;
  t6005 = t5911 + t5983;
  t6447 = -1.*t677*t6442;
  t6520 = t5846*t6506;
  t6530 = t6447 + t6520;
  t6537 = t5846*t6442;
  t6543 = t677*t6506;
  t6550 = t6537 + t6543;
  t6821 = -1.*t677*t6815;
  t6830 = t5846*t6827;
  t6832 = t6821 + t6830;
  t6840 = t5846*t6815;
  t6842 = t677*t6827;
  t6846 = t6840 + t6842;
  t6947 = -1.*t5362;
  t6957 = 1. + t6947;
  t7103 = -1.*t5337;
  t7104 = 1. + t7103;
  t7179 = -1.*t5710;
  t7180 = 1. + t7179;
  t7222 = -1.*t5796;
  t7229 = 1. + t7222;
  t7250 = -1.*t5846;
  t7251 = 1. + t7250;
  t7277 = -1.*t5894;
  t7278 = 1. + t7277;
  t5883 = t3*t5876;
  t6027 = t5894*t6005;
  t6035 = t5883 + t6027;
  t7059 = 0.135*t1144;
  t7062 = 0. + t7059;
  t6959 = -0.049*t6957;
  t7041 = -0.135*t5457;
  t7042 = 0. + t6959 + t7041;
  t7067 = -1.*t1393;
  t7071 = 1. + t7067;
  t7072 = -0.135*t7071;
  t7073 = 0. + t7072;
  t7076 = -1.*t1679;
  t7080 = 1. + t7076;
  t7082 = -0.135*t7080;
  t7084 = 0. + t7082;
  t7087 = 0.135*t766;
  t7094 = 0. + t7087;
  t7108 = -0.09*t7104;
  t7111 = 0.049*t765;
  t7112 = 0. + t7108 + t7111;
  t7120 = -0.135*t6957;
  t7122 = 0.049*t5457;
  t7126 = 0. + t7120 + t7122;
  t7159 = -0.049*t7104;
  t7167 = -0.09*t765;
  t7172 = 0. + t7159 + t7167;
  t7181 = -0.049*t7180;
  t7183 = -0.21*t730;
  t7185 = 0. + t7181 + t7183;
  t7192 = -0.21*t7180;
  t7193 = 0.049*t730;
  t7194 = 0. + t7192 + t7193;
  t7230 = -0.2707*t7229;
  t7241 = 0.0016*t693;
  t7242 = 0. + t7230 + t7241;
  t7245 = -0.0016*t7229;
  t7246 = -0.2707*t693;
  t7247 = 0. + t7245 + t7246;
  t7254 = 0.0184*t7251;
  t7257 = -0.7055*t677;
  t7258 = 0. + t7254 + t7257;
  t7269 = -0.7055*t7251;
  t7272 = -0.0184*t677;
  t7273 = 0. + t7269 + t7272;
  t7291 = -1.1135*t7278;
  t7302 = 0.0216*t3;
  t7303 = 0. + t7291 + t7302;
  t7314 = -0.0216*t7278;
  t7330 = -1.1135*t3;
  t7331 = 0. + t7314 + t7330;
  t6531 = t3*t6530;
  t6551 = t5894*t6550;
  t6552 = t6531 + t6551;
  t6833 = t3*t6832;
  t6847 = t5894*t6846;
  t6856 = t6833 + t6847;
  p_output1[0]=t6035;
  p_output1[1]=t6552;
  p_output1[2]=t6856;
  p_output1[3]=0.;
  p_output1[4]=t1427*t5383*t5457 - 1.*t5362*t5577;
  p_output1[5]=t5457*t6262 - 1.*t5362*t6294;
  p_output1[6]=t5457*t6729 - 1.*t5362*t6763;
  p_output1[7]=0.;
  p_output1[8]=-1.*t5876*t5894 + t3*t6005;
  p_output1[9]=-1.*t5894*t6530 + t3*t6550;
  p_output1[10]=-1.*t5894*t6832 + t3*t6846;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(-1.*t1427*t5383*t5457 + t5362*t5577) - 1.193387*(t5876*t5894 - 1.*t3*t6005) - 0.0216*t6035 + t1427*t5383*t7042 + t1369*t7062 - 1.*t1427*t1457*t7073 + t1623*t7084 + t4676*t7094 + t5006*t7112 + t5577*t7126 + t5618*t7172 + t5631*t7185 + t5745*t7194 + t5787*t7242 + t5825*t7247 + t5836*t7258 + t5868*t7273 + t5876*t7303 + t6005*t7331 + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t5457*t6262 + t5362*t6294) - 1.193387*(t5894*t6530 - 1.*t3*t6550) - 0.0216*t6552 + t6262*t7042 - 1.*t1427*t6042*t7062 + t6080*t7073 + t6098*t7084 + t6206*t7094 + t6230*t7112 + t6294*t7126 + t6297*t7172 + t6317*t7185 + t6344*t7194 + t6359*t7242 + t6409*t7247 + t6442*t7258 + t6506*t7273 + t6530*t7303 + t6550*t7331 + var1[1];
  p_output1[14]=0. - 0.1305*(-1.*t5457*t6729 + t5362*t6763) - 1.193387*(t5894*t6832 - 1.*t3*t6846) - 0.0216*t6856 + t6729*t7042 + t1427*t6064*t7062 + t6561*t7073 + t6581*t7084 + t6623*t7094 + t6648*t7112 + t6763*t7126 + t6771*t7172 + t6781*t7185 + t6793*t7194 + t6801*t7242 + t6811*t7247 + t6815*t7258 + t6827*t7273 + t6832*t7303 + t6846*t7331 + var1[2];
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

#include "H_RightToeBottomBack.hh"

namespace SymExpression
{

void H_RightToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
