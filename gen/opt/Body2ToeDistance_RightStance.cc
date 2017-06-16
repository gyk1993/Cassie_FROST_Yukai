/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:30:19 GMT-04:00
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
  double t1558;
  double t6338;
  double t6387;
  double t6449;
  double t6603;
  double t6672;
  double t6665;
  double t6666;
  double t6667;
  double t6643;
  double t6802;
  double t6818;
  double t6823;
  double t5713;
  double t5738;
  double t5754;
  double t6300;
  double t5555;
  double t6942;
  double t6944;
  double t6945;
  double t6829;
  double t6830;
  double t6831;
  double t6837;
  double t6857;
  double t6863;
  double t6869;
  double t7084;
  double t7095;
  double t7106;
  double t7108;
  double t7117;
  double t7118;
  double t7131;
  double t7172;
  double t7179;
  double t7193;
  double t7226;
  double t7234;
  double t7239;
  double t7245;
  double t7249;
  double t7255;
  double t7260;
  double t7283;
  double t7289;
  double t7290;
  double t7363;
  double t7383;
  double t7392;
  double t7409;
  double t7411;
  double t7413;
  double t7420;
  double t7425;
  double t7429;
  double t7435;
  double t7451;
  double t7453;
  double t7464;
  double t7476;
  double t7488;
  double t7494;
  double t7504;
  double t7515;
  double t7516;
  double t7518;
  double t7524;
  double t7532;
  double t7533;
  double t6342;
  double t6384;
  double t6165;
  double t6327;
  double t6330;
  double t7588;
  double t6482;
  double t6556;
  double t6570;
  double t6585;
  double t7608;
  double t6647;
  double t6655;
  double t6659;
  double t6663;
  double t7617;
  double t7619;
  double t7621;
  double t6673;
  double t6677;
  double t6833;
  double t6842;
  double t6851;
  double t7623;
  double t7624;
  double t7626;
  double t7628;
  double t7630;
  double t7631;
  double t6910;
  double t6929;
  double t6938;
  double t7600;
  double t7609;
  double t7611;
  double t7659;
  double t7668;
  double t7673;
  double t7059;
  double t7070;
  double t7077;
  double t7126;
  double t7141;
  double t7146;
  double t7633;
  double t7641;
  double t7647;
  double t7698;
  double t7701;
  double t7702;
  double t7211;
  double t7212;
  double t7213;
  double t7258;
  double t7264;
  double t7274;
  double t7706;
  double t7707;
  double t7709;
  double t7711;
  double t7716;
  double t7720;
  double t7313;
  double t7322;
  double t7349;
  double t7415;
  double t7422;
  double t7423;
  double t7723;
  double t7728;
  double t7732;
  double t7743;
  double t7748;
  double t7756;
  double t7442;
  double t7446;
  double t7450;
  double t7498;
  double t7513;
  double t7514;
  double t7759;
  double t7760;
  double t7761;
  double t7763;
  double t7764;
  double t7766;
  double t7520;
  double t7521;
  double t7522;
  double t7770;
  double t7772;
  double t7773;
  double t7776;
  double t7778;
  double t7784;
  double t7825;
  double t7832;
  double t7833;
  double t7837;
  double t7841;
  double t7846;
  double t7851;
  double t7852;
  double t7855;
  double t7820;
  double t7821;
  double t7823;
  double t7864;
  double t7865;
  double t7867;
  double t7858;
  double t7859;
  double t7861;
  double t7880;
  double t7883;
  double t7886;
  double t7890;
  double t7894;
  double t7895;
  double t7897;
  double t7898;
  double t7899;
  double t7901;
  double t7902;
  double t7903;
  double t7905;
  double t7906;
  double t7907;
  double t7909;
  double t7910;
  double t7913;
  double t7918;
  double t7920;
  double t7921;
  double t7923;
  double t7924;
  double t7925;
  double t7928;
  double t7929;
  double t7930;
  t1558 = Cos(var1[4]);
  t6338 = Sin(var1[14]);
  t6387 = Sin(var1[4]);
  t6449 = Cos(var1[14]);
  t6603 = Sin(var1[5]);
  t6672 = Sin(var1[15]);
  t6665 = t6338*t6387;
  t6666 = -1.*t6449*t1558*t6603;
  t6667 = t6665 + t6666;
  t6643 = Cos(var1[15]);
  t6802 = t6449*t6387;
  t6818 = t1558*t6338*t6603;
  t6823 = t6802 + t6818;
  t5713 = Cos(var1[16]);
  t5738 = -1.*t5713;
  t5754 = 1. + t5738;
  t6300 = Sin(var1[16]);
  t5555 = Cos(var1[5]);
  t6942 = t6643*t6667;
  t6944 = t6672*t6823;
  t6945 = t6942 + t6944;
  t6829 = Cos(var1[17]);
  t6830 = -1.*t6829;
  t6831 = 1. + t6830;
  t6837 = Sin(var1[17]);
  t6857 = -1.*t6672*t6667;
  t6863 = t6643*t6823;
  t6869 = t6857 + t6863;
  t7084 = t5713*t1558*t5555;
  t7095 = -1.*t6300*t6945;
  t7106 = t7084 + t7095;
  t7108 = Cos(var1[18]);
  t7117 = -1.*t7108;
  t7118 = 1. + t7117;
  t7131 = Sin(var1[18]);
  t7172 = t6837*t6869;
  t7179 = t6829*t7106;
  t7193 = t7172 + t7179;
  t7226 = t6829*t6869;
  t7234 = -1.*t6837*t7106;
  t7239 = t7226 + t7234;
  t7245 = Cos(var1[19]);
  t7249 = -1.*t7245;
  t7255 = 1. + t7249;
  t7260 = Sin(var1[19]);
  t7283 = -1.*t7131*t7193;
  t7289 = t7108*t7239;
  t7290 = t7283 + t7289;
  t7363 = t7108*t7193;
  t7383 = t7131*t7239;
  t7392 = t7363 + t7383;
  t7409 = Cos(var1[20]);
  t7411 = -1.*t7409;
  t7413 = 1. + t7411;
  t7420 = Sin(var1[20]);
  t7425 = t7260*t7290;
  t7429 = t7245*t7392;
  t7435 = t7425 + t7429;
  t7451 = t7245*t7290;
  t7453 = -1.*t7260*t7392;
  t7464 = t7451 + t7453;
  t7476 = Cos(var1[21]);
  t7488 = -1.*t7476;
  t7494 = 1. + t7488;
  t7504 = Sin(var1[21]);
  t7515 = -1.*t7420*t7435;
  t7516 = t7409*t7464;
  t7518 = t7515 + t7516;
  t7524 = t7409*t7435;
  t7532 = t7420*t7464;
  t7533 = t7524 + t7532;
  t6342 = 0.135*t6338;
  t6384 = 0. + t6342;
  t6165 = -0.049*t5754;
  t6327 = 0.135*t6300;
  t6330 = 0. + t6165 + t6327;
  t7588 = Cos(var1[3]);
  t6482 = -1.*t6449;
  t6556 = 1. + t6482;
  t6570 = -0.135*t6556;
  t6585 = 0. + t6570;
  t7608 = Sin(var1[3]);
  t6647 = -1.*t6643;
  t6655 = 1. + t6647;
  t6659 = -0.135*t6655;
  t6663 = 0. + t6659;
  t7617 = t5555*t7608;
  t7619 = t7588*t6387*t6603;
  t7621 = t7617 + t7619;
  t6673 = 0.135*t6672;
  t6677 = 0. + t6673;
  t6833 = -0.09*t6831;
  t6842 = 0.049*t6837;
  t6851 = 0. + t6833 + t6842;
  t7623 = t7588*t1558*t6338;
  t7624 = t6449*t7621;
  t7626 = t7623 + t7624;
  t7628 = t6449*t7588*t1558;
  t7630 = -1.*t6338*t7621;
  t7631 = t7628 + t7630;
  t6910 = -0.135*t5754;
  t6929 = -0.049*t6300;
  t6938 = 0. + t6910 + t6929;
  t7600 = -1.*t7588*t5555*t6387;
  t7609 = t7608*t6603;
  t7611 = t7600 + t7609;
  t7659 = t6643*t7626;
  t7668 = t6672*t7631;
  t7673 = t7659 + t7668;
  t7059 = -0.049*t6831;
  t7070 = -0.09*t6837;
  t7077 = 0. + t7059 + t7070;
  t7126 = -0.049*t7118;
  t7141 = -0.21*t7131;
  t7146 = 0. + t7126 + t7141;
  t7633 = -1.*t6672*t7626;
  t7641 = t6643*t7631;
  t7647 = t7633 + t7641;
  t7698 = t5713*t7611;
  t7701 = -1.*t6300*t7673;
  t7702 = t7698 + t7701;
  t7211 = -0.21*t7118;
  t7212 = 0.049*t7131;
  t7213 = 0. + t7211 + t7212;
  t7258 = -0.2707*t7255;
  t7264 = 0.0016*t7260;
  t7274 = 0. + t7258 + t7264;
  t7706 = t6837*t7647;
  t7707 = t6829*t7702;
  t7709 = t7706 + t7707;
  t7711 = t6829*t7647;
  t7716 = -1.*t6837*t7702;
  t7720 = t7711 + t7716;
  t7313 = -0.0016*t7255;
  t7322 = -0.2707*t7260;
  t7349 = 0. + t7313 + t7322;
  t7415 = 0.0184*t7413;
  t7422 = -0.7055*t7420;
  t7423 = 0. + t7415 + t7422;
  t7723 = -1.*t7131*t7709;
  t7728 = t7108*t7720;
  t7732 = t7723 + t7728;
  t7743 = t7108*t7709;
  t7748 = t7131*t7720;
  t7756 = t7743 + t7748;
  t7442 = -0.7055*t7413;
  t7446 = -0.0184*t7420;
  t7450 = 0. + t7442 + t7446;
  t7498 = -1.1135*t7494;
  t7513 = 0.0216*t7504;
  t7514 = 0. + t7498 + t7513;
  t7759 = t7260*t7732;
  t7760 = t7245*t7756;
  t7761 = t7759 + t7760;
  t7763 = t7245*t7732;
  t7764 = -1.*t7260*t7756;
  t7766 = t7763 + t7764;
  t7520 = -0.0216*t7494;
  t7521 = -1.1135*t7504;
  t7522 = 0. + t7520 + t7521;
  t7770 = -1.*t7420*t7761;
  t7772 = t7409*t7766;
  t7773 = t7770 + t7772;
  t7776 = t7409*t7761;
  t7778 = t7420*t7766;
  t7784 = t7776 + t7778;
  t7825 = t7588*t5555;
  t7832 = -1.*t7608*t6387*t6603;
  t7833 = t7825 + t7832;
  t7837 = -1.*t1558*t6338*t7608;
  t7841 = t6449*t7833;
  t7846 = t7837 + t7841;
  t7851 = -1.*t6449*t1558*t7608;
  t7852 = -1.*t6338*t7833;
  t7855 = t7851 + t7852;
  t7820 = t5555*t7608*t6387;
  t7821 = t7588*t6603;
  t7823 = t7820 + t7821;
  t7864 = t6643*t7846;
  t7865 = t6672*t7855;
  t7867 = t7864 + t7865;
  t7858 = -1.*t6672*t7846;
  t7859 = t6643*t7855;
  t7861 = t7858 + t7859;
  t7880 = t5713*t7823;
  t7883 = -1.*t6300*t7867;
  t7886 = t7880 + t7883;
  t7890 = t6837*t7861;
  t7894 = t6829*t7886;
  t7895 = t7890 + t7894;
  t7897 = t6829*t7861;
  t7898 = -1.*t6837*t7886;
  t7899 = t7897 + t7898;
  t7901 = -1.*t7131*t7895;
  t7902 = t7108*t7899;
  t7903 = t7901 + t7902;
  t7905 = t7108*t7895;
  t7906 = t7131*t7899;
  t7907 = t7905 + t7906;
  t7909 = t7260*t7903;
  t7910 = t7245*t7907;
  t7913 = t7909 + t7910;
  t7918 = t7245*t7903;
  t7920 = -1.*t7260*t7907;
  t7921 = t7918 + t7920;
  t7923 = -1.*t7420*t7913;
  t7924 = t7409*t7921;
  t7925 = t7923 + t7924;
  t7928 = t7409*t7913;
  t7929 = t7420*t7921;
  t7930 = t7928 + t7929;
  p_output1[0]=Sqrt(Power(0. + t1558*t5555*t6330 + t6384*t6387 - 1.*t1558*t6585*t6603 + t6663*t6667 + t6677*t6823 + t6851*t6869 + t6938*t6945 - 0.1305*(t1558*t5555*t6300 + t5713*t6945) + t7077*t7106 + t7146*t7193 + t7213*t7239 + t7274*t7290 + t7349*t7392 + t7423*t7435 + t7450*t7464 + t7514*t7518 + t7522*t7533 + 0.0306*(t7504*t7518 + t7476*t7533) - 1.1312*(t7476*t7518 - 1.*t7504*t7533),2) + Power(0. + t1558*t6384*t7588 + t6330*t7611 + t6585*t7621 + t6663*t7626 + t6677*t7631 + t6851*t7647 + t6938*t7673 - 0.1305*(t6300*t7611 + t5713*t7673) + t7077*t7702 + t7146*t7709 + t7213*t7720 + t7274*t7732 + t7349*t7756 + t7423*t7761 + t7450*t7766 + t7514*t7773 + t7522*t7784 + 0.0306*(t7504*t7773 + t7476*t7784) - 1.1312*(t7476*t7773 - 1.*t7504*t7784),2) + Power(0. - 1.*t1558*t6384*t7608 + t6330*t7823 + t6585*t7833 + t6663*t7846 + t6677*t7855 + t6851*t7861 + t6938*t7867 - 0.1305*(t6300*t7823 + t5713*t7867) + t7077*t7886 + t7146*t7895 + t7213*t7899 + t7274*t7903 + t7349*t7907 + t7423*t7913 + t7450*t7921 + t7514*t7925 + t7522*t7930 + 0.0306*(t7504*t7925 + t7476*t7930) - 1.1312*(t7476*t7925 - 1.*t7504*t7930),2));
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

#include "Body2ToeDistance_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void Body2ToeDistance_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
