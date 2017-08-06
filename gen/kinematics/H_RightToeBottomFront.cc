/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:32 GMT-04:00
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
  double t1680;
  double t1017;
  double t1687;
  double t1013;
  double t2012;
  double t2359;
  double t1426;
  double t2019;
  double t2051;
  double t870;
  double t2542;
  double t4766;
  double t4779;
  double t5653;
  double t2078;
  double t4800;
  double t5006;
  double t864;
  double t5789;
  double t6074;
  double t6180;
  double t6186;
  double t6206;
  double t6235;
  double t6240;
  double t6269;
  double t6387;
  double t6600;
  double t5579;
  double t6520;
  double t6537;
  double t446;
  double t6756;
  double t6772;
  double t6786;
  double t6833;
  double t6552;
  double t6807;
  double t6809;
  double t445;
  double t6856;
  double t6875;
  double t6879;
  double t6920;
  double t6814;
  double t6891;
  double t6894;
  double t434;
  double t6932;
  double t6946;
  double t7042;
  double t423;
  double t7186;
  double t7230;
  double t7245;
  double t7269;
  double t7274;
  double t7194;
  double t7302;
  double t7341;
  double t7352;
  double t7372;
  double t7378;
  double t7345;
  double t7379;
  double t7386;
  double t7418;
  double t7444;
  double t7465;
  double t7472;
  double t7473;
  double t7474;
  double t7477;
  double t7481;
  double t7482;
  double t7391;
  double t7484;
  double t7489;
  double t7496;
  double t7504;
  double t7508;
  double t7495;
  double t7514;
  double t7520;
  double t7549;
  double t7551;
  double t7553;
  double t7120;
  double t7540;
  double t7561;
  double t7567;
  double t7588;
  double t7594;
  double t7601;
  double t7638;
  double t7639;
  double t7647;
  double t7634;
  double t7657;
  double t7659;
  double t7677;
  double t7683;
  double t7685;
  double t7675;
  double t7689;
  double t7690;
  double t7701;
  double t7703;
  double t7704;
  double t7705;
  double t7706;
  double t7707;
  double t7708;
  double t7719;
  double t7720;
  double t7692;
  double t7724;
  double t7730;
  double t7738;
  double t7739;
  double t7741;
  double t7734;
  double t7742;
  double t7744;
  double t7748;
  double t7757;
  double t7761;
  double t7745;
  double t7764;
  double t7767;
  double t7776;
  double t7779;
  double t7782;
  double t6917;
  double t7099;
  double t7112;
  double t7126;
  double t7138;
  double t7150;
  double t7586;
  double t7602;
  double t7604;
  double t7612;
  double t7615;
  double t7619;
  double t7769;
  double t7784;
  double t7786;
  double t7790;
  double t7791;
  double t7796;
  double t7849;
  double t7852;
  double t7907;
  double t7911;
  double t7969;
  double t7973;
  double t7991;
  double t7992;
  double t8010;
  double t8012;
  double t8031;
  double t8033;
  double t7118;
  double t7172;
  double t7175;
  double t7864;
  double t7867;
  double t7855;
  double t7856;
  double t7860;
  double t7879;
  double t7882;
  double t7884;
  double t7887;
  double t7891;
  double t7892;
  double t7895;
  double t7899;
  double t7903;
  double t7905;
  double t7912;
  double t7915;
  double t7920;
  double t7929;
  double t7932;
  double t7934;
  double t7949;
  double t7955;
  double t7964;
  double t7974;
  double t7976;
  double t7982;
  double t7987;
  double t7988;
  double t7989;
  double t7994;
  double t7999;
  double t8001;
  double t8004;
  double t8005;
  double t8006;
  double t8013;
  double t8015;
  double t8016;
  double t8021;
  double t8025;
  double t8026;
  double t8037;
  double t8039;
  double t8040;
  double t8043;
  double t8047;
  double t8048;
  double t7605;
  double t7627;
  double t7629;
  double t7787;
  double t7799;
  double t7800;
  t1680 = Cos(var1[14]);
  t1017 = Sin(var1[4]);
  t1687 = Cos(var1[4]);
  t1013 = Sin(var1[14]);
  t2012 = Sin(var1[5]);
  t2359 = Cos(var1[15]);
  t1426 = t1013*t1017;
  t2019 = -1.*t1680*t1687*t2012;
  t2051 = t1426 + t2019;
  t870 = Sin(var1[15]);
  t2542 = t1680*t1017;
  t4766 = t1687*t1013*t2012;
  t4779 = t2542 + t4766;
  t5653 = Cos(var1[17]);
  t2078 = -1.*t870*t2051;
  t4800 = t2359*t4779;
  t5006 = t2078 + t4800;
  t864 = Sin(var1[17]);
  t5789 = Cos(var1[16]);
  t6074 = Cos(var1[5]);
  t6180 = t5789*t1687*t6074;
  t6186 = Sin(var1[16]);
  t6206 = t2359*t2051;
  t6235 = t870*t4779;
  t6240 = t6206 + t6235;
  t6269 = t6186*t6240;
  t6387 = t6180 + t6269;
  t6600 = Cos(var1[18]);
  t5579 = t864*t5006;
  t6520 = t5653*t6387;
  t6537 = t5579 + t6520;
  t446 = Sin(var1[18]);
  t6756 = t5653*t5006;
  t6772 = -1.*t864*t6387;
  t6786 = t6756 + t6772;
  t6833 = Cos(var1[19]);
  t6552 = -1.*t446*t6537;
  t6807 = t6600*t6786;
  t6809 = t6552 + t6807;
  t445 = Sin(var1[19]);
  t6856 = t6600*t6537;
  t6875 = t446*t6786;
  t6879 = t6856 + t6875;
  t6920 = Cos(var1[20]);
  t6814 = t445*t6809;
  t6891 = t6833*t6879;
  t6894 = t6814 + t6891;
  t434 = Sin(var1[20]);
  t6932 = t6833*t6809;
  t6946 = -1.*t445*t6879;
  t7042 = t6932 + t6946;
  t423 = Sin(var1[21]);
  t7186 = Sin(var1[3]);
  t7230 = Cos(var1[3]);
  t7245 = t7230*t6074;
  t7269 = -1.*t7186*t1017*t2012;
  t7274 = t7245 + t7269;
  t7194 = -1.*t1687*t1013*t7186;
  t7302 = t1680*t7274;
  t7341 = t7194 + t7302;
  t7352 = -1.*t1680*t1687*t7186;
  t7372 = -1.*t1013*t7274;
  t7378 = t7352 + t7372;
  t7345 = -1.*t870*t7341;
  t7379 = t2359*t7378;
  t7386 = t7345 + t7379;
  t7418 = t6074*t7186*t1017;
  t7444 = t7230*t2012;
  t7465 = t7418 + t7444;
  t7472 = t5789*t7465;
  t7473 = t2359*t7341;
  t7474 = t870*t7378;
  t7477 = t7473 + t7474;
  t7481 = t6186*t7477;
  t7482 = t7472 + t7481;
  t7391 = t864*t7386;
  t7484 = t5653*t7482;
  t7489 = t7391 + t7484;
  t7496 = t5653*t7386;
  t7504 = -1.*t864*t7482;
  t7508 = t7496 + t7504;
  t7495 = -1.*t446*t7489;
  t7514 = t6600*t7508;
  t7520 = t7495 + t7514;
  t7549 = t6600*t7489;
  t7551 = t446*t7508;
  t7553 = t7549 + t7551;
  t7120 = Cos(var1[21]);
  t7540 = t445*t7520;
  t7561 = t6833*t7553;
  t7567 = t7540 + t7561;
  t7588 = t6833*t7520;
  t7594 = -1.*t445*t7553;
  t7601 = t7588 + t7594;
  t7638 = t6074*t7186;
  t7639 = t7230*t1017*t2012;
  t7647 = t7638 + t7639;
  t7634 = t7230*t1687*t1013;
  t7657 = t1680*t7647;
  t7659 = t7634 + t7657;
  t7677 = t1680*t7230*t1687;
  t7683 = -1.*t1013*t7647;
  t7685 = t7677 + t7683;
  t7675 = -1.*t870*t7659;
  t7689 = t2359*t7685;
  t7690 = t7675 + t7689;
  t7701 = -1.*t7230*t6074*t1017;
  t7703 = t7186*t2012;
  t7704 = t7701 + t7703;
  t7705 = t5789*t7704;
  t7706 = t2359*t7659;
  t7707 = t870*t7685;
  t7708 = t7706 + t7707;
  t7719 = t6186*t7708;
  t7720 = t7705 + t7719;
  t7692 = t864*t7690;
  t7724 = t5653*t7720;
  t7730 = t7692 + t7724;
  t7738 = t5653*t7690;
  t7739 = -1.*t864*t7720;
  t7741 = t7738 + t7739;
  t7734 = -1.*t446*t7730;
  t7742 = t6600*t7741;
  t7744 = t7734 + t7742;
  t7748 = t6600*t7730;
  t7757 = t446*t7741;
  t7761 = t7748 + t7757;
  t7745 = t445*t7744;
  t7764 = t6833*t7761;
  t7767 = t7745 + t7764;
  t7776 = t6833*t7744;
  t7779 = -1.*t445*t7761;
  t7782 = t7776 + t7779;
  t6917 = -1.*t434*t6894;
  t7099 = t6920*t7042;
  t7112 = t6917 + t7099;
  t7126 = t6920*t6894;
  t7138 = t434*t7042;
  t7150 = t7126 + t7138;
  t7586 = -1.*t434*t7567;
  t7602 = t6920*t7601;
  t7604 = t7586 + t7602;
  t7612 = t6920*t7567;
  t7615 = t434*t7601;
  t7619 = t7612 + t7615;
  t7769 = -1.*t434*t7767;
  t7784 = t6920*t7782;
  t7786 = t7769 + t7784;
  t7790 = t6920*t7767;
  t7791 = t434*t7782;
  t7796 = t7790 + t7791;
  t7849 = -1.*t5789;
  t7852 = 1. + t7849;
  t7907 = -1.*t5653;
  t7911 = 1. + t7907;
  t7969 = -1.*t6600;
  t7973 = 1. + t7969;
  t7991 = -1.*t6833;
  t7992 = 1. + t7991;
  t8010 = -1.*t6920;
  t8012 = 1. + t8010;
  t8031 = -1.*t7120;
  t8033 = 1. + t8031;
  t7118 = t423*t7112;
  t7172 = t7120*t7150;
  t7175 = t7118 + t7172;
  t7864 = 0.135*t1013;
  t7867 = 0. + t7864;
  t7855 = -0.049*t7852;
  t7856 = -0.135*t6186;
  t7860 = 0. + t7855 + t7856;
  t7879 = -1.*t1680;
  t7882 = 1. + t7879;
  t7884 = -0.135*t7882;
  t7887 = 0. + t7884;
  t7891 = -1.*t2359;
  t7892 = 1. + t7891;
  t7895 = -0.135*t7892;
  t7899 = 0. + t7895;
  t7903 = 0.135*t870;
  t7905 = 0. + t7903;
  t7912 = -0.09*t7911;
  t7915 = 0.049*t864;
  t7920 = 0. + t7912 + t7915;
  t7929 = -0.135*t7852;
  t7932 = 0.049*t6186;
  t7934 = 0. + t7929 + t7932;
  t7949 = -0.049*t7911;
  t7955 = -0.09*t864;
  t7964 = 0. + t7949 + t7955;
  t7974 = -0.049*t7973;
  t7976 = -0.21*t446;
  t7982 = 0. + t7974 + t7976;
  t7987 = -0.21*t7973;
  t7988 = 0.049*t446;
  t7989 = 0. + t7987 + t7988;
  t7994 = -0.2707*t7992;
  t7999 = 0.0016*t445;
  t8001 = 0. + t7994 + t7999;
  t8004 = -0.0016*t7992;
  t8005 = -0.2707*t445;
  t8006 = 0. + t8004 + t8005;
  t8013 = 0.0184*t8012;
  t8015 = -0.7055*t434;
  t8016 = 0. + t8013 + t8015;
  t8021 = -0.7055*t8012;
  t8025 = -0.0184*t434;
  t8026 = 0. + t8021 + t8025;
  t8037 = -1.1135*t8033;
  t8039 = 0.0216*t423;
  t8040 = 0. + t8037 + t8039;
  t8043 = -0.0216*t8033;
  t8047 = -1.1135*t423;
  t8048 = 0. + t8043 + t8047;
  t7605 = t423*t7604;
  t7627 = t7120*t7619;
  t7629 = t7605 + t7627;
  t7787 = t423*t7786;
  t7799 = t7120*t7796;
  t7800 = t7787 + t7799;
  p_output1[0]=t7175;
  p_output1[1]=t7629;
  p_output1[2]=t7800;
  p_output1[3]=0.;
  p_output1[4]=t1687*t6074*t6186 - 1.*t5789*t6240;
  p_output1[5]=t6186*t7465 - 1.*t5789*t7477;
  p_output1[6]=t6186*t7704 - 1.*t5789*t7708;
  p_output1[7]=0.;
  p_output1[8]=-1.*t7112*t7120 + t423*t7150;
  p_output1[9]=-1.*t7120*t7604 + t423*t7619;
  p_output1[10]=-1.*t7120*t7786 + t423*t7796;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(-1.*t1687*t6074*t6186 + t5789*t6240) - 1.1135*(t7112*t7120 - 1.*t423*t7150) + 0.058287*t7175 + t1687*t6074*t7860 + t1017*t7867 - 1.*t1687*t2012*t7887 + t2051*t7899 + t4779*t7905 + t5006*t7920 + t6240*t7934 + t6387*t7964 + t6537*t7982 + t6786*t7989 + t6809*t8001 + t6879*t8006 + t6894*t8016 + t7042*t8026 + t7112*t8040 + t7150*t8048 + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t6186*t7465 + t5789*t7477) - 1.1135*(t7120*t7604 - 1.*t423*t7619) + 0.058287*t7629 + t7465*t7860 - 1.*t1687*t7186*t7867 + t7274*t7887 + t7341*t7899 + t7378*t7905 + t7386*t7920 + t7477*t7934 + t7482*t7964 + t7489*t7982 + t7508*t7989 + t7520*t8001 + t7553*t8006 + t7567*t8016 + t7601*t8026 + t7604*t8040 + t7619*t8048 + var1[1];
  p_output1[14]=0. - 0.1305*(-1.*t6186*t7704 + t5789*t7708) - 1.1135*(t7120*t7786 - 1.*t423*t7796) + 0.058287*t7800 + t7704*t7860 + t1687*t7230*t7867 + t7647*t7887 + t7659*t7899 + t7685*t7905 + t7690*t7920 + t7708*t7934 + t7720*t7964 + t7730*t7982 + t7741*t7989 + t7744*t8001 + t7761*t8006 + t7767*t8016 + t7782*t8026 + t7786*t8040 + t7796*t8048 + var1[2];
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

#include "H_RightToeBottomFront.hh"

namespace SymExpression
{

void H_RightToeBottomFront_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
