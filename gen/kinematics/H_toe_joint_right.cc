/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:24 GMT-04:00
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
  double t3531;
  double t1815;
  double t3536;
  double t1783;
  double t3583;
  double t3701;
  double t3524;
  double t3626;
  double t3676;
  double t1372;
  double t3747;
  double t3825;
  double t3830;
  double t3873;
  double t3695;
  double t3834;
  double t3846;
  double t1368;
  double t3875;
  double t3878;
  double t3883;
  double t3891;
  double t3921;
  double t3927;
  double t3928;
  double t3939;
  double t3955;
  double t3969;
  double t3871;
  double t3963;
  double t3967;
  double t1053;
  double t3973;
  double t3976;
  double t3987;
  double t4017;
  double t3968;
  double t3999;
  double t4007;
  double t1042;
  double t4020;
  double t4027;
  double t4031;
  double t894;
  double t4078;
  double t4081;
  double t4082;
  double t4086;
  double t4097;
  double t4080;
  double t4115;
  double t4142;
  double t4178;
  double t4179;
  double t4180;
  double t4162;
  double t4181;
  double t4182;
  double t4222;
  double t4226;
  double t4229;
  double t4250;
  double t4266;
  double t4270;
  double t4278;
  double t4282;
  double t4287;
  double t4206;
  double t4320;
  double t4324;
  double t4336;
  double t4349;
  double t4353;
  double t4053;
  double t4332;
  double t4358;
  double t4359;
  double t4391;
  double t4392;
  double t4393;
  double t4576;
  double t4581;
  double t4582;
  double t4521;
  double t4585;
  double t4586;
  double t4590;
  double t4591;
  double t4595;
  double t4589;
  double t4598;
  double t4599;
  double t4602;
  double t4603;
  double t4604;
  double t4610;
  double t4611;
  double t4612;
  double t4614;
  double t4615;
  double t4617;
  double t4600;
  double t4618;
  double t4622;
  double t4624;
  double t4625;
  double t4628;
  double t4623;
  double t4635;
  double t4636;
  double t4644;
  double t4646;
  double t4651;
  double t4012;
  double t4033;
  double t4035;
  double t4059;
  double t4067;
  double t4071;
  double t4387;
  double t4397;
  double t4401;
  double t4433;
  double t4469;
  double t4475;
  double t4642;
  double t4665;
  double t4670;
  double t4688;
  double t4689;
  double t4691;
  double t4764;
  double t4768;
  double t4833;
  double t4841;
  double t4895;
  double t4897;
  double t4912;
  double t4913;
  double t4926;
  double t4931;
  double t4695;
  double t4696;
  double t4698;
  double t4795;
  double t4796;
  double t4769;
  double t4770;
  double t4772;
  double t4801;
  double t4802;
  double t4805;
  double t4806;
  double t4813;
  double t4817;
  double t4818;
  double t4821;
  double t4827;
  double t4830;
  double t4847;
  double t4851;
  double t4852;
  double t4862;
  double t4863;
  double t4866;
  double t4889;
  double t4890;
  double t4891;
  double t4898;
  double t4899;
  double t4903;
  double t4905;
  double t4908;
  double t4909;
  double t4915;
  double t4917;
  double t4919;
  double t4922;
  double t4923;
  double t4924;
  double t4932;
  double t4935;
  double t4936;
  double t4942;
  double t4947;
  double t4951;
  double t4700;
  double t4703;
  double t4704;
  double t4706;
  double t4709;
  double t4712;
  t3531 = Cos(var1[14]);
  t1815 = Sin(var1[4]);
  t3536 = Cos(var1[4]);
  t1783 = Sin(var1[14]);
  t3583 = Sin(var1[5]);
  t3701 = Cos(var1[15]);
  t3524 = t1783*t1815;
  t3626 = -1.*t3531*t3536*t3583;
  t3676 = t3524 + t3626;
  t1372 = Sin(var1[15]);
  t3747 = t3531*t1815;
  t3825 = t3536*t1783*t3583;
  t3830 = t3747 + t3825;
  t3873 = Cos(var1[17]);
  t3695 = -1.*t1372*t3676;
  t3834 = t3701*t3830;
  t3846 = t3695 + t3834;
  t1368 = Sin(var1[17]);
  t3875 = Cos(var1[16]);
  t3878 = Cos(var1[5]);
  t3883 = t3875*t3536*t3878;
  t3891 = Sin(var1[16]);
  t3921 = t3701*t3676;
  t3927 = t1372*t3830;
  t3928 = t3921 + t3927;
  t3939 = t3891*t3928;
  t3955 = t3883 + t3939;
  t3969 = Cos(var1[18]);
  t3871 = t1368*t3846;
  t3963 = t3873*t3955;
  t3967 = t3871 + t3963;
  t1053 = Sin(var1[18]);
  t3973 = t3873*t3846;
  t3976 = -1.*t1368*t3955;
  t3987 = t3973 + t3976;
  t4017 = Cos(var1[19]);
  t3968 = -1.*t1053*t3967;
  t3999 = t3969*t3987;
  t4007 = t3968 + t3999;
  t1042 = Sin(var1[19]);
  t4020 = t3969*t3967;
  t4027 = t1053*t3987;
  t4031 = t4020 + t4027;
  t894 = Sin(var1[20]);
  t4078 = Sin(var1[3]);
  t4081 = Cos(var1[3]);
  t4082 = t4081*t3878;
  t4086 = -1.*t4078*t1815*t3583;
  t4097 = t4082 + t4086;
  t4080 = -1.*t3536*t1783*t4078;
  t4115 = t3531*t4097;
  t4142 = t4080 + t4115;
  t4178 = -1.*t3531*t3536*t4078;
  t4179 = -1.*t1783*t4097;
  t4180 = t4178 + t4179;
  t4162 = -1.*t1372*t4142;
  t4181 = t3701*t4180;
  t4182 = t4162 + t4181;
  t4222 = t3878*t4078*t1815;
  t4226 = t4081*t3583;
  t4229 = t4222 + t4226;
  t4250 = t3875*t4229;
  t4266 = t3701*t4142;
  t4270 = t1372*t4180;
  t4278 = t4266 + t4270;
  t4282 = t3891*t4278;
  t4287 = t4250 + t4282;
  t4206 = t1368*t4182;
  t4320 = t3873*t4287;
  t4324 = t4206 + t4320;
  t4336 = t3873*t4182;
  t4349 = -1.*t1368*t4287;
  t4353 = t4336 + t4349;
  t4053 = Cos(var1[20]);
  t4332 = -1.*t1053*t4324;
  t4358 = t3969*t4353;
  t4359 = t4332 + t4358;
  t4391 = t3969*t4324;
  t4392 = t1053*t4353;
  t4393 = t4391 + t4392;
  t4576 = t3878*t4078;
  t4581 = t4081*t1815*t3583;
  t4582 = t4576 + t4581;
  t4521 = t4081*t3536*t1783;
  t4585 = t3531*t4582;
  t4586 = t4521 + t4585;
  t4590 = t3531*t4081*t3536;
  t4591 = -1.*t1783*t4582;
  t4595 = t4590 + t4591;
  t4589 = -1.*t1372*t4586;
  t4598 = t3701*t4595;
  t4599 = t4589 + t4598;
  t4602 = -1.*t4081*t3878*t1815;
  t4603 = t4078*t3583;
  t4604 = t4602 + t4603;
  t4610 = t3875*t4604;
  t4611 = t3701*t4586;
  t4612 = t1372*t4595;
  t4614 = t4611 + t4612;
  t4615 = t3891*t4614;
  t4617 = t4610 + t4615;
  t4600 = t1368*t4599;
  t4618 = t3873*t4617;
  t4622 = t4600 + t4618;
  t4624 = t3873*t4599;
  t4625 = -1.*t1368*t4617;
  t4628 = t4624 + t4625;
  t4623 = -1.*t1053*t4622;
  t4635 = t3969*t4628;
  t4636 = t4623 + t4635;
  t4644 = t3969*t4622;
  t4646 = t1053*t4628;
  t4651 = t4644 + t4646;
  t4012 = t1042*t4007;
  t4033 = t4017*t4031;
  t4035 = t4012 + t4033;
  t4059 = t4017*t4007;
  t4067 = -1.*t1042*t4031;
  t4071 = t4059 + t4067;
  t4387 = t1042*t4359;
  t4397 = t4017*t4393;
  t4401 = t4387 + t4397;
  t4433 = t4017*t4359;
  t4469 = -1.*t1042*t4393;
  t4475 = t4433 + t4469;
  t4642 = t1042*t4636;
  t4665 = t4017*t4651;
  t4670 = t4642 + t4665;
  t4688 = t4017*t4636;
  t4689 = -1.*t1042*t4651;
  t4691 = t4688 + t4689;
  t4764 = -1.*t3875;
  t4768 = 1. + t4764;
  t4833 = -1.*t3873;
  t4841 = 1. + t4833;
  t4895 = -1.*t3969;
  t4897 = 1. + t4895;
  t4912 = -1.*t4017;
  t4913 = 1. + t4912;
  t4926 = -1.*t4053;
  t4931 = 1. + t4926;
  t4695 = t4053*t4035;
  t4696 = t894*t4071;
  t4698 = t4695 + t4696;
  t4795 = 0.135*t1783;
  t4796 = 0. + t4795;
  t4769 = -0.049*t4768;
  t4770 = -0.135*t3891;
  t4772 = 0. + t4769 + t4770;
  t4801 = -1.*t3531;
  t4802 = 1. + t4801;
  t4805 = -0.135*t4802;
  t4806 = 0. + t4805;
  t4813 = -1.*t3701;
  t4817 = 1. + t4813;
  t4818 = -0.135*t4817;
  t4821 = 0. + t4818;
  t4827 = 0.135*t1372;
  t4830 = 0. + t4827;
  t4847 = -0.09*t4841;
  t4851 = 0.049*t1368;
  t4852 = 0. + t4847 + t4851;
  t4862 = -0.135*t4768;
  t4863 = 0.049*t3891;
  t4866 = 0. + t4862 + t4863;
  t4889 = -0.049*t4841;
  t4890 = -0.09*t1368;
  t4891 = 0. + t4889 + t4890;
  t4898 = -0.049*t4897;
  t4899 = -0.21*t1053;
  t4903 = 0. + t4898 + t4899;
  t4905 = -0.21*t4897;
  t4908 = 0.049*t1053;
  t4909 = 0. + t4905 + t4908;
  t4915 = -0.2707*t4913;
  t4917 = 0.0016*t1042;
  t4919 = 0. + t4915 + t4917;
  t4922 = -0.0016*t4913;
  t4923 = -0.2707*t1042;
  t4924 = 0. + t4922 + t4923;
  t4932 = 0.0184*t4931;
  t4935 = -0.7055*t894;
  t4936 = 0. + t4932 + t4935;
  t4942 = -0.7055*t4931;
  t4947 = -0.0184*t894;
  t4951 = 0. + t4942 + t4947;
  t4700 = t4053*t4401;
  t4703 = t894*t4475;
  t4704 = t4700 + t4703;
  t4706 = t4053*t4670;
  t4709 = t894*t4691;
  t4712 = t4706 + t4709;
  p_output1[0]=-1.*t4053*t4071 + t4035*t894;
  p_output1[1]=-1.*t4053*t4475 + t4401*t894;
  p_output1[2]=-1.*t4053*t4691 + t4670*t894;
  p_output1[3]=0.;
  p_output1[4]=t4698;
  p_output1[5]=t4704;
  p_output1[6]=t4712;
  p_output1[7]=0.;
  p_output1[8]=t3536*t3878*t3891 - 1.*t3875*t3928;
  p_output1[9]=t3891*t4229 - 1.*t3875*t4278;
  p_output1[10]=t3891*t4604 - 1.*t3875*t4614;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(-1.*t3536*t3878*t3891 + t3875*t3928) - 0.0216*t4698 + t3536*t3878*t4772 + t1815*t4796 - 1.*t3536*t3583*t4806 + t3676*t4821 + t3830*t4830 + t3846*t4852 + t3928*t4866 + t3955*t4891 + t3967*t4903 + t3987*t4909 + t4007*t4919 + t4031*t4924 + t4035*t4936 + t4071*t4951 - 1.1135*(t4053*t4071 - 1.*t4035*t894) + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t3891*t4229 + t3875*t4278) - 0.0216*t4704 + t4229*t4772 - 1.*t3536*t4078*t4796 + t4097*t4806 + t4142*t4821 + t4180*t4830 + t4182*t4852 + t4278*t4866 + t4287*t4891 + t4324*t4903 + t4353*t4909 + t4359*t4919 + t4393*t4924 + t4401*t4936 + t4475*t4951 - 1.1135*(t4053*t4475 - 1.*t4401*t894) + var1[1];
  p_output1[14]=0. - 0.1305*(-1.*t3891*t4604 + t3875*t4614) - 0.0216*t4712 + t4604*t4772 + t3536*t4081*t4796 + t4582*t4806 + t4586*t4821 + t4595*t4830 + t4599*t4852 + t4614*t4866 + t4617*t4891 + t4622*t4903 + t4628*t4909 + t4636*t4919 + t4651*t4924 + t4670*t4936 + t4691*t4951 - 1.1135*(t4053*t4691 - 1.*t4670*t894) + var1[2];
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

#include "H_toe_joint_right.hh"

namespace SymExpression
{

void H_toe_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
