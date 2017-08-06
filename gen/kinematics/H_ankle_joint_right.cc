/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:23 GMT-04:00
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
  double t3284;
  double t3218;
  double t3300;
  double t3177;
  double t3331;
  double t3478;
  double t3277;
  double t3434;
  double t3465;
  double t3078;
  double t3481;
  double t3505;
  double t3524;
  double t3546;
  double t3477;
  double t3529;
  double t3531;
  double t2452;
  double t3549;
  double t3576;
  double t3583;
  double t3592;
  double t3620;
  double t3626;
  double t3628;
  double t3632;
  double t3636;
  double t3672;
  double t3536;
  double t3649;
  double t3650;
  double t2443;
  double t3676;
  double t3680;
  double t3688;
  double t236;
  double t3751;
  double t3758;
  double t3766;
  double t3774;
  double t3784;
  double t3755;
  double t3788;
  double t3792;
  double t3808;
  double t3822;
  double t3824;
  double t3804;
  double t3825;
  double t3830;
  double t3835;
  double t3838;
  double t3842;
  double t3846;
  double t3850;
  double t3871;
  double t3872;
  double t3873;
  double t3874;
  double t3696;
  double t3834;
  double t3875;
  double t3876;
  double t3878;
  double t3879;
  double t3883;
  double t3928;
  double t3930;
  double t3931;
  double t3927;
  double t3939;
  double t3943;
  double t3955;
  double t3959;
  double t3963;
  double t3947;
  double t3967;
  double t3968;
  double t3971;
  double t3973;
  double t3975;
  double t3976;
  double t3984;
  double t3987;
  double t3995;
  double t3999;
  double t4004;
  double t3969;
  double t4007;
  double t4009;
  double t4012;
  double t4013;
  double t4017;
  double t3652;
  double t3689;
  double t3690;
  double t3701;
  double t3702;
  double t3711;
  double t3877;
  double t3891;
  double t3892;
  double t3897;
  double t3901;
  double t3913;
  double t4010;
  double t4020;
  double t4023;
  double t4031;
  double t4033;
  double t4034;
  double t4095;
  double t4096;
  double t4186;
  double t4190;
  double t4300;
  double t4316;
  double t4355;
  double t4357;
  double t4038;
  double t4044;
  double t4045;
  double t4115;
  double t4116;
  double t4097;
  double t4098;
  double t4106;
  double t4126;
  double t4134;
  double t4142;
  double t4150;
  double t4163;
  double t4165;
  double t4174;
  double t4178;
  double t4180;
  double t4181;
  double t4206;
  double t4222;
  double t4226;
  double t4229;
  double t4236;
  double t4242;
  double t4278;
  double t4282;
  double t4286;
  double t4320;
  double t4324;
  double t4332;
  double t4340;
  double t4345;
  double t4349;
  double t4358;
  double t4359;
  double t4387;
  double t4392;
  double t4393;
  double t4397;
  double t4048;
  double t4053;
  double t4058;
  double t4059;
  double t4067;
  double t4071;
  t3284 = Cos(var1[14]);
  t3218 = Sin(var1[4]);
  t3300 = Cos(var1[4]);
  t3177 = Sin(var1[14]);
  t3331 = Sin(var1[5]);
  t3478 = Cos(var1[15]);
  t3277 = t3177*t3218;
  t3434 = -1.*t3284*t3300*t3331;
  t3465 = t3277 + t3434;
  t3078 = Sin(var1[15]);
  t3481 = t3284*t3218;
  t3505 = t3300*t3177*t3331;
  t3524 = t3481 + t3505;
  t3546 = Cos(var1[17]);
  t3477 = -1.*t3078*t3465;
  t3529 = t3478*t3524;
  t3531 = t3477 + t3529;
  t2452 = Sin(var1[17]);
  t3549 = Cos(var1[16]);
  t3576 = Cos(var1[5]);
  t3583 = t3549*t3300*t3576;
  t3592 = Sin(var1[16]);
  t3620 = t3478*t3465;
  t3626 = t3078*t3524;
  t3628 = t3620 + t3626;
  t3632 = t3592*t3628;
  t3636 = t3583 + t3632;
  t3672 = Cos(var1[18]);
  t3536 = t2452*t3531;
  t3649 = t3546*t3636;
  t3650 = t3536 + t3649;
  t2443 = Sin(var1[18]);
  t3676 = t3546*t3531;
  t3680 = -1.*t2452*t3636;
  t3688 = t3676 + t3680;
  t236 = Cos(var1[19]);
  t3751 = Sin(var1[3]);
  t3758 = Cos(var1[3]);
  t3766 = t3758*t3576;
  t3774 = -1.*t3751*t3218*t3331;
  t3784 = t3766 + t3774;
  t3755 = -1.*t3300*t3177*t3751;
  t3788 = t3284*t3784;
  t3792 = t3755 + t3788;
  t3808 = -1.*t3284*t3300*t3751;
  t3822 = -1.*t3177*t3784;
  t3824 = t3808 + t3822;
  t3804 = -1.*t3078*t3792;
  t3825 = t3478*t3824;
  t3830 = t3804 + t3825;
  t3835 = t3576*t3751*t3218;
  t3838 = t3758*t3331;
  t3842 = t3835 + t3838;
  t3846 = t3549*t3842;
  t3850 = t3478*t3792;
  t3871 = t3078*t3824;
  t3872 = t3850 + t3871;
  t3873 = t3592*t3872;
  t3874 = t3846 + t3873;
  t3696 = Sin(var1[19]);
  t3834 = t2452*t3830;
  t3875 = t3546*t3874;
  t3876 = t3834 + t3875;
  t3878 = t3546*t3830;
  t3879 = -1.*t2452*t3874;
  t3883 = t3878 + t3879;
  t3928 = t3576*t3751;
  t3930 = t3758*t3218*t3331;
  t3931 = t3928 + t3930;
  t3927 = t3758*t3300*t3177;
  t3939 = t3284*t3931;
  t3943 = t3927 + t3939;
  t3955 = t3284*t3758*t3300;
  t3959 = -1.*t3177*t3931;
  t3963 = t3955 + t3959;
  t3947 = -1.*t3078*t3943;
  t3967 = t3478*t3963;
  t3968 = t3947 + t3967;
  t3971 = -1.*t3758*t3576*t3218;
  t3973 = t3751*t3331;
  t3975 = t3971 + t3973;
  t3976 = t3549*t3975;
  t3984 = t3478*t3943;
  t3987 = t3078*t3963;
  t3995 = t3984 + t3987;
  t3999 = t3592*t3995;
  t4004 = t3976 + t3999;
  t3969 = t2452*t3968;
  t4007 = t3546*t4004;
  t4009 = t3969 + t4007;
  t4012 = t3546*t3968;
  t4013 = -1.*t2452*t4004;
  t4017 = t4012 + t4013;
  t3652 = -1.*t2443*t3650;
  t3689 = t3672*t3688;
  t3690 = t3652 + t3689;
  t3701 = t3672*t3650;
  t3702 = t2443*t3688;
  t3711 = t3701 + t3702;
  t3877 = -1.*t2443*t3876;
  t3891 = t3672*t3883;
  t3892 = t3877 + t3891;
  t3897 = t3672*t3876;
  t3901 = t2443*t3883;
  t3913 = t3897 + t3901;
  t4010 = -1.*t2443*t4009;
  t4020 = t3672*t4017;
  t4023 = t4010 + t4020;
  t4031 = t3672*t4009;
  t4033 = t2443*t4017;
  t4034 = t4031 + t4033;
  t4095 = -1.*t3549;
  t4096 = 1. + t4095;
  t4186 = -1.*t3546;
  t4190 = 1. + t4186;
  t4300 = -1.*t3672;
  t4316 = 1. + t4300;
  t4355 = -1.*t236;
  t4357 = 1. + t4355;
  t4038 = t3696*t3690;
  t4044 = t236*t3711;
  t4045 = t4038 + t4044;
  t4115 = 0.135*t3177;
  t4116 = 0. + t4115;
  t4097 = -0.049*t4096;
  t4098 = -0.135*t3592;
  t4106 = 0. + t4097 + t4098;
  t4126 = -1.*t3284;
  t4134 = 1. + t4126;
  t4142 = -0.135*t4134;
  t4150 = 0. + t4142;
  t4163 = -1.*t3478;
  t4165 = 1. + t4163;
  t4174 = -0.135*t4165;
  t4178 = 0. + t4174;
  t4180 = 0.135*t3078;
  t4181 = 0. + t4180;
  t4206 = -0.09*t4190;
  t4222 = 0.049*t2452;
  t4226 = 0. + t4206 + t4222;
  t4229 = -0.135*t4096;
  t4236 = 0.049*t3592;
  t4242 = 0. + t4229 + t4236;
  t4278 = -0.049*t4190;
  t4282 = -0.09*t2452;
  t4286 = 0. + t4278 + t4282;
  t4320 = -0.049*t4316;
  t4324 = -0.21*t2443;
  t4332 = 0. + t4320 + t4324;
  t4340 = -0.21*t4316;
  t4345 = 0.049*t2443;
  t4349 = 0. + t4340 + t4345;
  t4358 = -0.2707*t4357;
  t4359 = 0.0016*t3696;
  t4387 = 0. + t4358 + t4359;
  t4392 = -0.0016*t4357;
  t4393 = -0.2707*t3696;
  t4397 = 0. + t4392 + t4393;
  t4048 = t3696*t3892;
  t4053 = t236*t3913;
  t4058 = t4048 + t4053;
  t4059 = t3696*t4023;
  t4067 = t236*t4034;
  t4071 = t4059 + t4067;
  p_output1[0]=-1.*t236*t3690 + t3696*t3711;
  p_output1[1]=-1.*t236*t3892 + t3696*t3913;
  p_output1[2]=-1.*t236*t4023 + t3696*t4034;
  p_output1[3]=0.;
  p_output1[4]=t4045;
  p_output1[5]=t4058;
  p_output1[6]=t4071;
  p_output1[7]=0.;
  p_output1[8]=t3300*t3576*t3592 - 1.*t3549*t3628;
  p_output1[9]=t3592*t3842 - 1.*t3549*t3872;
  p_output1[10]=t3592*t3975 - 1.*t3549*t3995;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(-1.*t3300*t3576*t3592 + t3549*t3628) - 0.7055*(t236*t3690 - 1.*t3696*t3711) + 0.0184*t4045 + t3300*t3576*t4106 + t3218*t4116 - 1.*t3300*t3331*t4150 + t3465*t4178 + t3524*t4181 + t3531*t4226 + t3628*t4242 + t3636*t4286 + t3650*t4332 + t3688*t4349 + t3690*t4387 + t3711*t4397 + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t3592*t3842 + t3549*t3872) - 0.7055*(t236*t3892 - 1.*t3696*t3913) + 0.0184*t4058 + t3842*t4106 - 1.*t3300*t3751*t4116 + t3784*t4150 + t3792*t4178 + t3824*t4181 + t3830*t4226 + t3872*t4242 + t3874*t4286 + t3876*t4332 + t3883*t4349 + t3892*t4387 + t3913*t4397 + var1[1];
  p_output1[14]=0. - 0.1305*(-1.*t3592*t3975 + t3549*t3995) - 0.7055*(t236*t4023 - 1.*t3696*t4034) + 0.0184*t4071 + t3975*t4106 + t3300*t3758*t4116 + t3931*t4150 + t3943*t4178 + t3963*t4181 + t3968*t4226 + t3995*t4242 + t4004*t4286 + t4009*t4332 + t4017*t4349 + t4023*t4387 + t4034*t4397 + var1[2];
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

#include "H_ankle_joint_right.hh"

namespace SymExpression
{

void H_ankle_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
