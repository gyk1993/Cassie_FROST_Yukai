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
  double t1008;
  double t3620;
  double t3649;
  double t3688;
  double t3723;
  double t3850;
  double t3834;
  double t3835;
  double t3838;
  double t3766;
  double t3875;
  double t3878;
  double t3883;
  double t3277;
  double t3481;
  double t3505;
  double t3529;
  double t1019;
  double t3973;
  double t3976;
  double t3984;
  double t3894;
  double t3897;
  double t3901;
  double t3923;
  double t3930;
  double t3939;
  double t3955;
  double t4033;
  double t4035;
  double t4036;
  double t4044;
  double t4045;
  double t4048;
  double t4058;
  double t4071;
  double t4073;
  double t4074;
  double t4082;
  double t4085;
  double t4086;
  double t4098;
  double t4106;
  double t4114;
  double t4118;
  double t4174;
  double t4178;
  double t4179;
  double t4222;
  double t4226;
  double t4228;
  double t4236;
  double t4242;
  double t4246;
  double t4262;
  double t4278;
  double t4282;
  double t4286;
  double t4336;
  double t4340;
  double t4345;
  double t3626;
  double t3632;
  double t3524;
  double t3531;
  double t3536;
  double t4405;
  double t3689;
  double t3695;
  double t3701;
  double t3702;
  double t4465;
  double t3788;
  double t3824;
  double t3825;
  double t3830;
  double t4479;
  double t4482;
  double t4485;
  double t3871;
  double t3873;
  double t3921;
  double t3927;
  double t3928;
  double t4502;
  double t4521;
  double t4522;
  double t4577;
  double t4579;
  double t4581;
  double t3967;
  double t3968;
  double t3969;
  double t4433;
  double t4469;
  double t4473;
  double t4590;
  double t4591;
  double t4593;
  double t4020;
  double t4027;
  double t4031;
  double t4053;
  double t4059;
  double t4067;
  double t4584;
  double t4585;
  double t4586;
  double t4603;
  double t4604;
  double t4609;
  double t4078;
  double t4080;
  double t4081;
  double t4115;
  double t4142;
  double t4162;
  double t4611;
  double t4612;
  double t4613;
  double t4615;
  double t4616;
  double t4617;
  double t4181;
  double t4182;
  double t4206;
  double t4250;
  double t4266;
  double t4270;
  double t4619;
  double t4622;
  double t4623;
  double t4625;
  double t4628;
  double t4629;
  double t4320;
  double t4324;
  double t4332;
  double t4636;
  double t4642;
  double t4643;
  double t4651;
  double t4653;
  double t4664;
  double t4704;
  double t4706;
  double t4707;
  double t4712;
  double t4713;
  double t4715;
  double t4718;
  double t4720;
  double t4721;
  double t4699;
  double t4700;
  double t4701;
  double t4762;
  double t4764;
  double t4765;
  double t4753;
  double t4754;
  double t4760;
  double t4795;
  double t4796;
  double t4797;
  double t4801;
  double t4802;
  double t4803;
  double t4806;
  double t4810;
  double t4811;
  double t4816;
  double t4817;
  double t4818;
  double t4823;
  double t4827;
  double t4828;
  double t4831;
  double t4833;
  double t4836;
  double t4847;
  double t4848;
  double t4849;
  t1008 = Cos(var1[4]);
  t3620 = Sin(var1[14]);
  t3649 = Sin(var1[4]);
  t3688 = Cos(var1[14]);
  t3723 = Sin(var1[5]);
  t3850 = Sin(var1[15]);
  t3834 = t3620*t3649;
  t3835 = -1.*t3688*t1008*t3723;
  t3838 = t3834 + t3835;
  t3766 = Cos(var1[15]);
  t3875 = t3688*t3649;
  t3878 = t1008*t3620*t3723;
  t3883 = t3875 + t3878;
  t3277 = Cos(var1[16]);
  t3481 = -1.*t3277;
  t3505 = 1. + t3481;
  t3529 = Sin(var1[16]);
  t1019 = Cos(var1[5]);
  t3973 = t3766*t3838;
  t3976 = t3850*t3883;
  t3984 = t3973 + t3976;
  t3894 = Cos(var1[17]);
  t3897 = -1.*t3894;
  t3901 = 1. + t3897;
  t3923 = Sin(var1[17]);
  t3930 = -1.*t3850*t3838;
  t3939 = t3766*t3883;
  t3955 = t3930 + t3939;
  t4033 = t3277*t1008*t1019;
  t4035 = t3529*t3984;
  t4036 = t4033 + t4035;
  t4044 = Cos(var1[18]);
  t4045 = -1.*t4044;
  t4048 = 1. + t4045;
  t4058 = Sin(var1[18]);
  t4071 = t3923*t3955;
  t4073 = t3894*t4036;
  t4074 = t4071 + t4073;
  t4082 = t3894*t3955;
  t4085 = -1.*t3923*t4036;
  t4086 = t4082 + t4085;
  t4098 = Cos(var1[19]);
  t4106 = -1.*t4098;
  t4114 = 1. + t4106;
  t4118 = Sin(var1[19]);
  t4174 = -1.*t4058*t4074;
  t4178 = t4044*t4086;
  t4179 = t4174 + t4178;
  t4222 = t4044*t4074;
  t4226 = t4058*t4086;
  t4228 = t4222 + t4226;
  t4236 = Cos(var1[20]);
  t4242 = -1.*t4236;
  t4246 = 1. + t4242;
  t4262 = Sin(var1[20]);
  t4278 = t4118*t4179;
  t4282 = t4098*t4228;
  t4286 = t4278 + t4282;
  t4336 = t4098*t4179;
  t4340 = -1.*t4118*t4228;
  t4345 = t4336 + t4340;
  t3626 = 0.135*t3620;
  t3632 = 0. + t3626;
  t3524 = -0.049*t3505;
  t3531 = -0.135*t3529;
  t3536 = 0. + t3524 + t3531;
  t4405 = Sin(var1[3]);
  t3689 = -1.*t3688;
  t3695 = 1. + t3689;
  t3701 = -0.135*t3695;
  t3702 = 0. + t3701;
  t4465 = Cos(var1[3]);
  t3788 = -1.*t3766;
  t3824 = 1. + t3788;
  t3825 = -0.135*t3824;
  t3830 = 0. + t3825;
  t4479 = t4465*t1019;
  t4482 = -1.*t4405*t3649*t3723;
  t4485 = t4479 + t4482;
  t3871 = 0.135*t3850;
  t3873 = 0. + t3871;
  t3921 = -0.09*t3901;
  t3927 = 0.049*t3923;
  t3928 = 0. + t3921 + t3927;
  t4502 = -1.*t1008*t3620*t4405;
  t4521 = t3688*t4485;
  t4522 = t4502 + t4521;
  t4577 = -1.*t3688*t1008*t4405;
  t4579 = -1.*t3620*t4485;
  t4581 = t4577 + t4579;
  t3967 = -0.135*t3505;
  t3968 = 0.049*t3529;
  t3969 = 0. + t3967 + t3968;
  t4433 = t1019*t4405*t3649;
  t4469 = t4465*t3723;
  t4473 = t4433 + t4469;
  t4590 = t3766*t4522;
  t4591 = t3850*t4581;
  t4593 = t4590 + t4591;
  t4020 = -0.049*t3901;
  t4027 = -0.09*t3923;
  t4031 = 0. + t4020 + t4027;
  t4053 = -0.049*t4048;
  t4059 = -0.21*t4058;
  t4067 = 0. + t4053 + t4059;
  t4584 = -1.*t3850*t4522;
  t4585 = t3766*t4581;
  t4586 = t4584 + t4585;
  t4603 = t3277*t4473;
  t4604 = t3529*t4593;
  t4609 = t4603 + t4604;
  t4078 = -0.21*t4048;
  t4080 = 0.049*t4058;
  t4081 = 0. + t4078 + t4080;
  t4115 = -0.2707*t4114;
  t4142 = 0.0016*t4118;
  t4162 = 0. + t4115 + t4142;
  t4611 = t3923*t4586;
  t4612 = t3894*t4609;
  t4613 = t4611 + t4612;
  t4615 = t3894*t4586;
  t4616 = -1.*t3923*t4609;
  t4617 = t4615 + t4616;
  t4181 = -0.0016*t4114;
  t4182 = -0.2707*t4118;
  t4206 = 0. + t4181 + t4182;
  t4250 = 0.0184*t4246;
  t4266 = -0.7055*t4262;
  t4270 = 0. + t4250 + t4266;
  t4619 = -1.*t4058*t4613;
  t4622 = t4044*t4617;
  t4623 = t4619 + t4622;
  t4625 = t4044*t4613;
  t4628 = t4058*t4617;
  t4629 = t4625 + t4628;
  t4320 = -0.7055*t4246;
  t4324 = -0.0184*t4262;
  t4332 = 0. + t4320 + t4324;
  t4636 = t4118*t4623;
  t4642 = t4098*t4629;
  t4643 = t4636 + t4642;
  t4651 = t4098*t4623;
  t4653 = -1.*t4118*t4629;
  t4664 = t4651 + t4653;
  t4704 = t1019*t4405;
  t4706 = t4465*t3649*t3723;
  t4707 = t4704 + t4706;
  t4712 = t4465*t1008*t3620;
  t4713 = t3688*t4707;
  t4715 = t4712 + t4713;
  t4718 = t3688*t4465*t1008;
  t4720 = -1.*t3620*t4707;
  t4721 = t4718 + t4720;
  t4699 = -1.*t4465*t1019*t3649;
  t4700 = t4405*t3723;
  t4701 = t4699 + t4700;
  t4762 = t3766*t4715;
  t4764 = t3850*t4721;
  t4765 = t4762 + t4764;
  t4753 = -1.*t3850*t4715;
  t4754 = t3766*t4721;
  t4760 = t4753 + t4754;
  t4795 = t3277*t4701;
  t4796 = t3529*t4765;
  t4797 = t4795 + t4796;
  t4801 = t3923*t4760;
  t4802 = t3894*t4797;
  t4803 = t4801 + t4802;
  t4806 = t3894*t4760;
  t4810 = -1.*t3923*t4797;
  t4811 = t4806 + t4810;
  t4816 = -1.*t4058*t4803;
  t4817 = t4044*t4811;
  t4818 = t4816 + t4817;
  t4823 = t4044*t4803;
  t4827 = t4058*t4811;
  t4828 = t4823 + t4827;
  t4831 = t4118*t4818;
  t4833 = t4098*t4828;
  t4836 = t4831 + t4833;
  t4847 = t4098*t4818;
  t4848 = -1.*t4118*t4828;
  t4849 = t4847 + t4848;
  p_output1[0]=0. + t1008*t1019*t3536 + t3632*t3649 - 1.*t1008*t3702*t3723 + t3830*t3838 + t3873*t3883 + t3928*t3955 + t3969*t3984 - 0.1305*(-1.*t1008*t1019*t3529 + t3277*t3984) + t4031*t4036 + t4067*t4074 + t4081*t4086 + t4162*t4179 + t4206*t4228 + t4270*t4286 + t4332*t4345 - 1.1135*(-1.*t4262*t4286 + t4236*t4345) - 0.0216*(t4236*t4286 + t4262*t4345) + var1[0];
  p_output1[1]=0. - 1.*t1008*t3632*t4405 + t3536*t4473 + t3702*t4485 + t3830*t4522 + t3873*t4581 + t3928*t4586 + t3969*t4593 - 0.1305*(-1.*t3529*t4473 + t3277*t4593) + t4031*t4609 + t4067*t4613 + t4081*t4617 + t4162*t4623 + t4206*t4629 + t4270*t4643 + t4332*t4664 - 1.1135*(-1.*t4262*t4643 + t4236*t4664) - 0.0216*(t4236*t4643 + t4262*t4664) + var1[1];
  p_output1[2]=0. + t1008*t3632*t4465 + t3536*t4701 + t3702*t4707 + t3830*t4715 + t3873*t4721 + t3928*t4760 + t3969*t4765 - 0.1305*(-1.*t3529*t4701 + t3277*t4765) + t4031*t4797 + t4067*t4803 + t4081*t4811 + t4162*t4818 + t4206*t4828 + t4270*t4836 + t4332*t4849 - 1.1135*(-1.*t4262*t4836 + t4236*t4849) - 0.0216*(t4236*t4836 + t4262*t4849) + var1[2];
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

#include "p_toe_joint_right.hh"

namespace SymExpression
{

void p_toe_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
