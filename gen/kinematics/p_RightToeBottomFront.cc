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
  double t499;
  double t2074;
  double t2248;
  double t2415;
  double t4877;
  double t6123;
  double t5789;
  double t5800;
  double t5883;
  double t5104;
  double t6206;
  double t6235;
  double t6240;
  double t1238;
  double t1258;
  double t1373;
  double t1592;
  double t500;
  double t6809;
  double t6814;
  double t6822;
  double t6304;
  double t6344;
  double t6357;
  double t6446;
  double t6551;
  double t6552;
  double t6600;
  double t6932;
  double t6946;
  double t7041;
  double t7059;
  double t7075;
  double t7086;
  double t7108;
  double t7120;
  double t7126;
  double t7127;
  double t7194;
  double t7206;
  double t7230;
  double t7246;
  double t7254;
  double t7268;
  double t7272;
  double t7330;
  double t7341;
  double t7345;
  double t7386;
  double t7391;
  double t7408;
  double t7423;
  double t7429;
  double t7439;
  double t7464;
  double t7473;
  double t7474;
  double t7476;
  double t7489;
  double t7490;
  double t7495;
  double t7498;
  double t7499;
  double t7503;
  double t7507;
  double t7518;
  double t7520;
  double t7532;
  double t7561;
  double t7567;
  double t7583;
  double t2078;
  double t2244;
  double t1426;
  double t2012;
  double t2019;
  double t7625;
  double t2439;
  double t2541;
  double t2542;
  double t4354;
  double t7631;
  double t5385;
  double t5550;
  double t5579;
  double t5653;
  double t7639;
  double t7641;
  double t7645;
  double t6180;
  double t6186;
  double t6387;
  double t6520;
  double t6537;
  double t7655;
  double t7657;
  double t7658;
  double t7664;
  double t7668;
  double t7675;
  double t6772;
  double t6786;
  double t6807;
  double t7629;
  double t7634;
  double t7636;
  double t7690;
  double t7692;
  double t7700;
  double t6894;
  double t6917;
  double t6920;
  double t7099;
  double t7112;
  double t7118;
  double t7678;
  double t7683;
  double t7685;
  double t7707;
  double t7708;
  double t7713;
  double t7150;
  double t7172;
  double t7186;
  double t7269;
  double t7274;
  double t7302;
  double t7720;
  double t7724;
  double t7725;
  double t7734;
  double t7737;
  double t7738;
  double t7372;
  double t7378;
  double t7379;
  double t7444;
  double t7465;
  double t7472;
  double t7740;
  double t7741;
  double t7742;
  double t7745;
  double t7748;
  double t7756;
  double t7481;
  double t7482;
  double t7484;
  double t7504;
  double t7508;
  double t7514;
  double t7761;
  double t7764;
  double t7765;
  double t7769;
  double t7773;
  double t7776;
  double t7549;
  double t7551;
  double t7553;
  double t7780;
  double t7782;
  double t7783;
  double t7786;
  double t7787;
  double t7788;
  double t7816;
  double t7818;
  double t7820;
  double t7827;
  double t7831;
  double t7832;
  double t7836;
  double t7837;
  double t7838;
  double t7807;
  double t7809;
  double t7811;
  double t7855;
  double t7856;
  double t7858;
  double t7844;
  double t7847;
  double t7849;
  double t7879;
  double t7882;
  double t7883;
  double t7887;
  double t7888;
  double t7889;
  double t7892;
  double t7893;
  double t7895;
  double t7900;
  double t7902;
  double t7903;
  double t7906;
  double t7907;
  double t7909;
  double t7912;
  double t7915;
  double t7916;
  double t7924;
  double t7927;
  double t7929;
  double t7933;
  double t7934;
  double t7936;
  double t7939;
  double t7941;
  double t7942;
  t499 = Cos(var1[4]);
  t2074 = Sin(var1[14]);
  t2248 = Sin(var1[4]);
  t2415 = Cos(var1[14]);
  t4877 = Sin(var1[5]);
  t6123 = Sin(var1[15]);
  t5789 = t2074*t2248;
  t5800 = -1.*t2415*t499*t4877;
  t5883 = t5789 + t5800;
  t5104 = Cos(var1[15]);
  t6206 = t2415*t2248;
  t6235 = t499*t2074*t4877;
  t6240 = t6206 + t6235;
  t1238 = Cos(var1[16]);
  t1258 = -1.*t1238;
  t1373 = 1. + t1258;
  t1592 = Sin(var1[16]);
  t500 = Cos(var1[5]);
  t6809 = t5104*t5883;
  t6814 = t6123*t6240;
  t6822 = t6809 + t6814;
  t6304 = Cos(var1[17]);
  t6344 = -1.*t6304;
  t6357 = 1. + t6344;
  t6446 = Sin(var1[17]);
  t6551 = -1.*t6123*t5883;
  t6552 = t5104*t6240;
  t6600 = t6551 + t6552;
  t6932 = t1238*t499*t500;
  t6946 = t1592*t6822;
  t7041 = t6932 + t6946;
  t7059 = Cos(var1[18]);
  t7075 = -1.*t7059;
  t7086 = 1. + t7075;
  t7108 = Sin(var1[18]);
  t7120 = t6446*t6600;
  t7126 = t6304*t7041;
  t7127 = t7120 + t7126;
  t7194 = t6304*t6600;
  t7206 = -1.*t6446*t7041;
  t7230 = t7194 + t7206;
  t7246 = Cos(var1[19]);
  t7254 = -1.*t7246;
  t7268 = 1. + t7254;
  t7272 = Sin(var1[19]);
  t7330 = -1.*t7108*t7127;
  t7341 = t7059*t7230;
  t7345 = t7330 + t7341;
  t7386 = t7059*t7127;
  t7391 = t7108*t7230;
  t7408 = t7386 + t7391;
  t7423 = Cos(var1[20]);
  t7429 = -1.*t7423;
  t7439 = 1. + t7429;
  t7464 = Sin(var1[20]);
  t7473 = t7272*t7345;
  t7474 = t7246*t7408;
  t7476 = t7473 + t7474;
  t7489 = t7246*t7345;
  t7490 = -1.*t7272*t7408;
  t7495 = t7489 + t7490;
  t7498 = Cos(var1[21]);
  t7499 = -1.*t7498;
  t7503 = 1. + t7499;
  t7507 = Sin(var1[21]);
  t7518 = -1.*t7464*t7476;
  t7520 = t7423*t7495;
  t7532 = t7518 + t7520;
  t7561 = t7423*t7476;
  t7567 = t7464*t7495;
  t7583 = t7561 + t7567;
  t2078 = 0.135*t2074;
  t2244 = 0. + t2078;
  t1426 = -0.049*t1373;
  t2012 = -0.135*t1592;
  t2019 = 0. + t1426 + t2012;
  t7625 = Sin(var1[3]);
  t2439 = -1.*t2415;
  t2541 = 1. + t2439;
  t2542 = -0.135*t2541;
  t4354 = 0. + t2542;
  t7631 = Cos(var1[3]);
  t5385 = -1.*t5104;
  t5550 = 1. + t5385;
  t5579 = -0.135*t5550;
  t5653 = 0. + t5579;
  t7639 = t7631*t500;
  t7641 = -1.*t7625*t2248*t4877;
  t7645 = t7639 + t7641;
  t6180 = 0.135*t6123;
  t6186 = 0. + t6180;
  t6387 = -0.09*t6357;
  t6520 = 0.049*t6446;
  t6537 = 0. + t6387 + t6520;
  t7655 = -1.*t499*t2074*t7625;
  t7657 = t2415*t7645;
  t7658 = t7655 + t7657;
  t7664 = -1.*t2415*t499*t7625;
  t7668 = -1.*t2074*t7645;
  t7675 = t7664 + t7668;
  t6772 = -0.135*t1373;
  t6786 = 0.049*t1592;
  t6807 = 0. + t6772 + t6786;
  t7629 = t500*t7625*t2248;
  t7634 = t7631*t4877;
  t7636 = t7629 + t7634;
  t7690 = t5104*t7658;
  t7692 = t6123*t7675;
  t7700 = t7690 + t7692;
  t6894 = -0.049*t6357;
  t6917 = -0.09*t6446;
  t6920 = 0. + t6894 + t6917;
  t7099 = -0.049*t7086;
  t7112 = -0.21*t7108;
  t7118 = 0. + t7099 + t7112;
  t7678 = -1.*t6123*t7658;
  t7683 = t5104*t7675;
  t7685 = t7678 + t7683;
  t7707 = t1238*t7636;
  t7708 = t1592*t7700;
  t7713 = t7707 + t7708;
  t7150 = -0.21*t7086;
  t7172 = 0.049*t7108;
  t7186 = 0. + t7150 + t7172;
  t7269 = -0.2707*t7268;
  t7274 = 0.0016*t7272;
  t7302 = 0. + t7269 + t7274;
  t7720 = t6446*t7685;
  t7724 = t6304*t7713;
  t7725 = t7720 + t7724;
  t7734 = t6304*t7685;
  t7737 = -1.*t6446*t7713;
  t7738 = t7734 + t7737;
  t7372 = -0.0016*t7268;
  t7378 = -0.2707*t7272;
  t7379 = 0. + t7372 + t7378;
  t7444 = 0.0184*t7439;
  t7465 = -0.7055*t7464;
  t7472 = 0. + t7444 + t7465;
  t7740 = -1.*t7108*t7725;
  t7741 = t7059*t7738;
  t7742 = t7740 + t7741;
  t7745 = t7059*t7725;
  t7748 = t7108*t7738;
  t7756 = t7745 + t7748;
  t7481 = -0.7055*t7439;
  t7482 = -0.0184*t7464;
  t7484 = 0. + t7481 + t7482;
  t7504 = -1.1135*t7503;
  t7508 = 0.0216*t7507;
  t7514 = 0. + t7504 + t7508;
  t7761 = t7272*t7742;
  t7764 = t7246*t7756;
  t7765 = t7761 + t7764;
  t7769 = t7246*t7742;
  t7773 = -1.*t7272*t7756;
  t7776 = t7769 + t7773;
  t7549 = -0.0216*t7503;
  t7551 = -1.1135*t7507;
  t7553 = 0. + t7549 + t7551;
  t7780 = -1.*t7464*t7765;
  t7782 = t7423*t7776;
  t7783 = t7780 + t7782;
  t7786 = t7423*t7765;
  t7787 = t7464*t7776;
  t7788 = t7786 + t7787;
  t7816 = t500*t7625;
  t7818 = t7631*t2248*t4877;
  t7820 = t7816 + t7818;
  t7827 = t7631*t499*t2074;
  t7831 = t2415*t7820;
  t7832 = t7827 + t7831;
  t7836 = t2415*t7631*t499;
  t7837 = -1.*t2074*t7820;
  t7838 = t7836 + t7837;
  t7807 = -1.*t7631*t500*t2248;
  t7809 = t7625*t4877;
  t7811 = t7807 + t7809;
  t7855 = t5104*t7832;
  t7856 = t6123*t7838;
  t7858 = t7855 + t7856;
  t7844 = -1.*t6123*t7832;
  t7847 = t5104*t7838;
  t7849 = t7844 + t7847;
  t7879 = t1238*t7811;
  t7882 = t1592*t7858;
  t7883 = t7879 + t7882;
  t7887 = t6446*t7849;
  t7888 = t6304*t7883;
  t7889 = t7887 + t7888;
  t7892 = t6304*t7849;
  t7893 = -1.*t6446*t7883;
  t7895 = t7892 + t7893;
  t7900 = -1.*t7108*t7889;
  t7902 = t7059*t7895;
  t7903 = t7900 + t7902;
  t7906 = t7059*t7889;
  t7907 = t7108*t7895;
  t7909 = t7906 + t7907;
  t7912 = t7272*t7903;
  t7915 = t7246*t7909;
  t7916 = t7912 + t7915;
  t7924 = t7246*t7903;
  t7927 = -1.*t7272*t7909;
  t7929 = t7924 + t7927;
  t7933 = -1.*t7464*t7916;
  t7934 = t7423*t7929;
  t7936 = t7933 + t7934;
  t7939 = t7423*t7916;
  t7941 = t7464*t7929;
  t7942 = t7939 + t7941;
  p_output1[0]=0. + t2244*t2248 - 1.*t4354*t4877*t499 + t2019*t499*t500 + t5653*t5883 + t6186*t6240 + t6537*t6600 + t6807*t6822 - 0.1305*(-1.*t1592*t499*t500 + t1238*t6822) + t6920*t7041 + t7118*t7127 + t7186*t7230 + t7302*t7345 + t7379*t7408 + t7472*t7476 + t7484*t7495 + t7514*t7532 + t7553*t7583 + 0.058287*(t7507*t7532 + t7498*t7583) - 1.1135*(t7498*t7532 - 1.*t7507*t7583) + var1[0];
  p_output1[1]=0. - 1.*t2244*t499*t7625 + t2019*t7636 + t4354*t7645 + t5653*t7658 + t6186*t7675 + t6537*t7685 + t6807*t7700 - 0.1305*(-1.*t1592*t7636 + t1238*t7700) + t6920*t7713 + t7118*t7725 + t7186*t7738 + t7302*t7742 + t7379*t7756 + t7472*t7765 + t7484*t7776 + t7514*t7783 + t7553*t7788 + 0.058287*(t7507*t7783 + t7498*t7788) - 1.1135*(t7498*t7783 - 1.*t7507*t7788) + var1[1];
  p_output1[2]=0. + t2244*t499*t7631 + t2019*t7811 + t4354*t7820 + t5653*t7832 + t6186*t7838 + t6537*t7849 + t6807*t7858 - 0.1305*(-1.*t1592*t7811 + t1238*t7858) + t6920*t7883 + t7118*t7889 + t7186*t7895 + t7302*t7903 + t7379*t7909 + t7472*t7916 + t7484*t7929 + t7514*t7936 + t7553*t7942 + 0.058287*(t7507*t7936 + t7498*t7942) - 1.1135*(t7498*t7936 - 1.*t7507*t7942) + var1[2];
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

#include "p_RightToeBottomFront.hh"

namespace SymExpression
{

void p_RightToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
