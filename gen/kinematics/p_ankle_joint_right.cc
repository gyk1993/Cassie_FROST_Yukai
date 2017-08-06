/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:22 GMT-04:00
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
  double t2425;
  double t3288;
  double t3324;
  double t3357;
  double t3461;
  double t3507;
  double t3481;
  double t3491;
  double t3502;
  double t3469;
  double t3531;
  double t3536;
  double t3546;
  double t3090;
  double t3112;
  double t3159;
  double t3201;
  double t2950;
  double t3650;
  double t3652;
  double t3660;
  double t3553;
  double t3568;
  double t3572;
  double t3581;
  double t3596;
  double t3620;
  double t3626;
  double t3701;
  double t3702;
  double t3707;
  double t3716;
  double t3717;
  double t3718;
  double t3743;
  double t3755;
  double t3758;
  double t3760;
  double t3792;
  double t3796;
  double t3804;
  double t3817;
  double t3818;
  double t3820;
  double t3823;
  double t3829;
  double t3830;
  double t3833;
  double t3846;
  double t3850;
  double t3870;
  double t3300;
  double t3316;
  double t3177;
  double t3218;
  double t3277;
  double t3887;
  double t3361;
  double t3383;
  double t3434;
  double t3457;
  double t3893;
  double t3473;
  double t3474;
  double t3477;
  double t3478;
  double t3901;
  double t3905;
  double t3909;
  double t3524;
  double t3529;
  double t3576;
  double t3583;
  double t3592;
  double t3917;
  double t3921;
  double t3922;
  double t3924;
  double t3926;
  double t3927;
  double t3632;
  double t3636;
  double t3649;
  double t3892;
  double t3894;
  double t3895;
  double t3943;
  double t3947;
  double t3951;
  double t3690;
  double t3695;
  double t3696;
  double t3723;
  double t3747;
  double t3751;
  double t3929;
  double t3930;
  double t3931;
  double t3969;
  double t3971;
  double t3972;
  double t3774;
  double t3784;
  double t3788;
  double t3822;
  double t3824;
  double t3825;
  double t3975;
  double t3976;
  double t3980;
  double t3987;
  double t3991;
  double t3995;
  double t3835;
  double t3838;
  double t3842;
  double t4003;
  double t4004;
  double t4005;
  double t4009;
  double t4010;
  double t4011;
  double t4045;
  double t4048;
  double t4051;
  double t4058;
  double t4059;
  double t4060;
  double t4071;
  double t4072;
  double t4073;
  double t4037;
  double t4038;
  double t4040;
  double t4081;
  double t4082;
  double t4084;
  double t4076;
  double t4077;
  double t4078;
  double t4098;
  double t4106;
  double t4110;
  double t4115;
  double t4116;
  double t4117;
  double t4126;
  double t4130;
  double t4134;
  double t4146;
  double t4150;
  double t4158;
  double t4163;
  double t4165;
  double t4170;
  t2425 = Cos(var1[4]);
  t3288 = Sin(var1[14]);
  t3324 = Sin(var1[4]);
  t3357 = Cos(var1[14]);
  t3461 = Sin(var1[5]);
  t3507 = Sin(var1[15]);
  t3481 = t3288*t3324;
  t3491 = -1.*t3357*t2425*t3461;
  t3502 = t3481 + t3491;
  t3469 = Cos(var1[15]);
  t3531 = t3357*t3324;
  t3536 = t2425*t3288*t3461;
  t3546 = t3531 + t3536;
  t3090 = Cos(var1[16]);
  t3112 = -1.*t3090;
  t3159 = 1. + t3112;
  t3201 = Sin(var1[16]);
  t2950 = Cos(var1[5]);
  t3650 = t3469*t3502;
  t3652 = t3507*t3546;
  t3660 = t3650 + t3652;
  t3553 = Cos(var1[17]);
  t3568 = -1.*t3553;
  t3572 = 1. + t3568;
  t3581 = Sin(var1[17]);
  t3596 = -1.*t3507*t3502;
  t3620 = t3469*t3546;
  t3626 = t3596 + t3620;
  t3701 = t3090*t2425*t2950;
  t3702 = t3201*t3660;
  t3707 = t3701 + t3702;
  t3716 = Cos(var1[18]);
  t3717 = -1.*t3716;
  t3718 = 1. + t3717;
  t3743 = Sin(var1[18]);
  t3755 = t3581*t3626;
  t3758 = t3553*t3707;
  t3760 = t3755 + t3758;
  t3792 = t3553*t3626;
  t3796 = -1.*t3581*t3707;
  t3804 = t3792 + t3796;
  t3817 = Cos(var1[19]);
  t3818 = -1.*t3817;
  t3820 = 1. + t3818;
  t3823 = Sin(var1[19]);
  t3829 = -1.*t3743*t3760;
  t3830 = t3716*t3804;
  t3833 = t3829 + t3830;
  t3846 = t3716*t3760;
  t3850 = t3743*t3804;
  t3870 = t3846 + t3850;
  t3300 = 0.135*t3288;
  t3316 = 0. + t3300;
  t3177 = -0.049*t3159;
  t3218 = -0.135*t3201;
  t3277 = 0. + t3177 + t3218;
  t3887 = Sin(var1[3]);
  t3361 = -1.*t3357;
  t3383 = 1. + t3361;
  t3434 = -0.135*t3383;
  t3457 = 0. + t3434;
  t3893 = Cos(var1[3]);
  t3473 = -1.*t3469;
  t3474 = 1. + t3473;
  t3477 = -0.135*t3474;
  t3478 = 0. + t3477;
  t3901 = t3893*t2950;
  t3905 = -1.*t3887*t3324*t3461;
  t3909 = t3901 + t3905;
  t3524 = 0.135*t3507;
  t3529 = 0. + t3524;
  t3576 = -0.09*t3572;
  t3583 = 0.049*t3581;
  t3592 = 0. + t3576 + t3583;
  t3917 = -1.*t2425*t3288*t3887;
  t3921 = t3357*t3909;
  t3922 = t3917 + t3921;
  t3924 = -1.*t3357*t2425*t3887;
  t3926 = -1.*t3288*t3909;
  t3927 = t3924 + t3926;
  t3632 = -0.135*t3159;
  t3636 = 0.049*t3201;
  t3649 = 0. + t3632 + t3636;
  t3892 = t2950*t3887*t3324;
  t3894 = t3893*t3461;
  t3895 = t3892 + t3894;
  t3943 = t3469*t3922;
  t3947 = t3507*t3927;
  t3951 = t3943 + t3947;
  t3690 = -0.049*t3572;
  t3695 = -0.09*t3581;
  t3696 = 0. + t3690 + t3695;
  t3723 = -0.049*t3718;
  t3747 = -0.21*t3743;
  t3751 = 0. + t3723 + t3747;
  t3929 = -1.*t3507*t3922;
  t3930 = t3469*t3927;
  t3931 = t3929 + t3930;
  t3969 = t3090*t3895;
  t3971 = t3201*t3951;
  t3972 = t3969 + t3971;
  t3774 = -0.21*t3718;
  t3784 = 0.049*t3743;
  t3788 = 0. + t3774 + t3784;
  t3822 = -0.2707*t3820;
  t3824 = 0.0016*t3823;
  t3825 = 0. + t3822 + t3824;
  t3975 = t3581*t3931;
  t3976 = t3553*t3972;
  t3980 = t3975 + t3976;
  t3987 = t3553*t3931;
  t3991 = -1.*t3581*t3972;
  t3995 = t3987 + t3991;
  t3835 = -0.0016*t3820;
  t3838 = -0.2707*t3823;
  t3842 = 0. + t3835 + t3838;
  t4003 = -1.*t3743*t3980;
  t4004 = t3716*t3995;
  t4005 = t4003 + t4004;
  t4009 = t3716*t3980;
  t4010 = t3743*t3995;
  t4011 = t4009 + t4010;
  t4045 = t2950*t3887;
  t4048 = t3893*t3324*t3461;
  t4051 = t4045 + t4048;
  t4058 = t3893*t2425*t3288;
  t4059 = t3357*t4051;
  t4060 = t4058 + t4059;
  t4071 = t3357*t3893*t2425;
  t4072 = -1.*t3288*t4051;
  t4073 = t4071 + t4072;
  t4037 = -1.*t3893*t2950*t3324;
  t4038 = t3887*t3461;
  t4040 = t4037 + t4038;
  t4081 = t3469*t4060;
  t4082 = t3507*t4073;
  t4084 = t4081 + t4082;
  t4076 = -1.*t3507*t4060;
  t4077 = t3469*t4073;
  t4078 = t4076 + t4077;
  t4098 = t3090*t4040;
  t4106 = t3201*t4084;
  t4110 = t4098 + t4106;
  t4115 = t3581*t4078;
  t4116 = t3553*t4110;
  t4117 = t4115 + t4116;
  t4126 = t3553*t4078;
  t4130 = -1.*t3581*t4110;
  t4134 = t4126 + t4130;
  t4146 = -1.*t3743*t4117;
  t4150 = t3716*t4134;
  t4158 = t4146 + t4150;
  t4163 = t3716*t4117;
  t4165 = t3743*t4134;
  t4170 = t4163 + t4165;
  p_output1[0]=0. + t2425*t2950*t3277 + t3316*t3324 - 1.*t2425*t3457*t3461 + t3478*t3502 + t3529*t3546 + t3592*t3626 + t3649*t3660 - 0.1305*(-1.*t2425*t2950*t3201 + t3090*t3660) + t3696*t3707 + t3751*t3760 + t3788*t3804 + t3825*t3833 + t3842*t3870 + 0.0184*(t3823*t3833 + t3817*t3870) - 0.7055*(t3817*t3833 - 1.*t3823*t3870) + var1[0];
  p_output1[1]=0. - 1.*t2425*t3316*t3887 + t3277*t3895 + t3457*t3909 + t3478*t3922 + t3529*t3927 + t3592*t3931 + t3649*t3951 - 0.1305*(-1.*t3201*t3895 + t3090*t3951) + t3696*t3972 + t3751*t3980 + t3788*t3995 + t3825*t4005 + t3842*t4011 + 0.0184*(t3823*t4005 + t3817*t4011) - 0.7055*(t3817*t4005 - 1.*t3823*t4011) + var1[1];
  p_output1[2]=0. + t2425*t3316*t3893 + t3277*t4040 + t3457*t4051 + t3478*t4060 + t3529*t4073 + t3592*t4078 + t3649*t4084 - 0.1305*(-1.*t3201*t4040 + t3090*t4084) + t3696*t4110 + t3751*t4117 + t3788*t4134 + t3825*t4158 + t3842*t4170 + 0.0184*(t3823*t4158 + t3817*t4170) - 0.7055*(t3817*t4158 - 1.*t3823*t4170) + var1[2];
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

#include "p_ankle_joint_right.hh"

namespace SymExpression
{

void p_ankle_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
