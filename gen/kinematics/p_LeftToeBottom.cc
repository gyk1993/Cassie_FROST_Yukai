/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:25 GMT-04:00
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
  double t335;
  double t577;
  double t3747;
  double t3830;
  double t3834;
  double t3921;
  double t4020;
  double t4027;
  double t4033;
  double t3987;
  double t3999;
  double t4007;
  double t4038;
  double t4353;
  double t4358;
  double t4359;
  double t4391;
  double t4282;
  double t4320;
  double t4336;
  double t4433;
  double t4082;
  double t4115;
  double t4180;
  double t4182;
  double t4226;
  double t4250;
  double t4266;
  double t4603;
  double t4610;
  double t4611;
  double t4615;
  double t4618;
  double t4624;
  double t4635;
  double t4644;
  double t4646;
  double t4665;
  double t4695;
  double t4696;
  double t4698;
  double t4703;
  double t4704;
  double t4706;
  double t4712;
  double t4718;
  double t4721;
  double t4746;
  double t4769;
  double t4770;
  double t4772;
  double t4795;
  double t4798;
  double t4805;
  double t4818;
  double t4827;
  double t4830;
  double t4831;
  double t4862;
  double t4863;
  double t4866;
  double t4875;
  double t4879;
  double t4883;
  double t4889;
  double t4894;
  double t4898;
  double t4899;
  double t4909;
  double t4911;
  double t4915;
  double t582;
  double t843;
  double t844;
  double t3524;
  double t4947;
  double t3846;
  double t3871;
  double t3927;
  double t3939;
  double t3963;
  double t3973;
  double t4941;
  double t4942;
  double t4951;
  double t4953;
  double t4059;
  double t4073;
  double t4181;
  double t4206;
  double t4222;
  double t4976;
  double t4977;
  double t4979;
  double t4958;
  double t4959;
  double t4960;
  double t4387;
  double t4392;
  double t4397;
  double t4479;
  double t4493;
  double t4521;
  double t4987;
  double t4989;
  double t4991;
  double t4993;
  double t4995;
  double t4996;
  double t4598;
  double t4599;
  double t4600;
  double t4628;
  double t4636;
  double t4642;
  double t4982;
  double t4983;
  double t4984;
  double t5006;
  double t5007;
  double t5008;
  double t4688;
  double t4692;
  double t4694;
  double t4709;
  double t4713;
  double t4716;
  double t5012;
  double t5015;
  double t5016;
  double t5019;
  double t5020;
  double t5022;
  double t4760;
  double t4761;
  double t4762;
  double t4811;
  double t4821;
  double t4823;
  double t5025;
  double t5026;
  double t5027;
  double t5033;
  double t5034;
  double t5035;
  double t4851;
  double t4852;
  double t4857;
  double t4887;
  double t4890;
  double t4891;
  double t5041;
  double t5065;
  double t5068;
  double t5071;
  double t5073;
  double t5083;
  double t4904;
  double t4905;
  double t4908;
  double t5086;
  double t5087;
  double t5095;
  double t5097;
  double t5099;
  double t5101;
  double t5135;
  double t5139;
  double t5153;
  double t5188;
  double t5190;
  double t5192;
  double t5176;
  double t5179;
  double t5180;
  double t5204;
  double t5213;
  double t5215;
  double t5221;
  double t5222;
  double t5223;
  double t5195;
  double t5196;
  double t5199;
  double t5263;
  double t5265;
  double t5268;
  double t5282;
  double t5291;
  double t5293;
  double t5303;
  double t5304;
  double t5305;
  double t5309;
  double t5310;
  double t5315;
  double t5319;
  double t5320;
  double t5325;
  double t5329;
  double t5334;
  double t5338;
  double t5341;
  double t5346;
  double t5349;
  double t5353;
  double t5355;
  double t5361;
  double t5368;
  double t5372;
  double t5373;
  t335 = Cos(var1[4]);
  t577 = Cos(var1[6]);
  t3747 = Sin(var1[5]);
  t3830 = Sin(var1[4]);
  t3834 = Sin(var1[6]);
  t3921 = Cos(var1[7]);
  t4020 = t577*t3830;
  t4027 = t335*t3747*t3834;
  t4033 = t4020 + t4027;
  t3987 = -1.*t335*t577*t3747;
  t3999 = t3830*t3834;
  t4007 = t3987 + t3999;
  t4038 = Sin(var1[7]);
  t4353 = Cos(var1[8]);
  t4358 = -1.*t4353;
  t4359 = 1. + t4358;
  t4391 = Sin(var1[8]);
  t4282 = t3921*t4007;
  t4320 = t4033*t4038;
  t4336 = t4282 + t4320;
  t4433 = Cos(var1[5]);
  t4082 = Cos(var1[9]);
  t4115 = -1.*t4082;
  t4180 = 1. + t4115;
  t4182 = Sin(var1[9]);
  t4226 = t3921*t4033;
  t4250 = -1.*t4007*t4038;
  t4266 = t4226 + t4250;
  t4603 = t335*t4433*t4353;
  t4610 = t4336*t4391;
  t4611 = t4603 + t4610;
  t4615 = Cos(var1[10]);
  t4618 = -1.*t4615;
  t4624 = 1. + t4618;
  t4635 = Sin(var1[10]);
  t4644 = t4182*t4266;
  t4646 = t4082*t4611;
  t4665 = t4644 + t4646;
  t4695 = t4082*t4266;
  t4696 = -1.*t4182*t4611;
  t4698 = t4695 + t4696;
  t4703 = Cos(var1[11]);
  t4704 = -1.*t4703;
  t4706 = 1. + t4704;
  t4712 = Sin(var1[11]);
  t4718 = -1.*t4635*t4665;
  t4721 = t4615*t4698;
  t4746 = t4718 + t4721;
  t4769 = t4615*t4665;
  t4770 = t4635*t4698;
  t4772 = t4769 + t4770;
  t4795 = Cos(var1[12]);
  t4798 = -1.*t4795;
  t4805 = 1. + t4798;
  t4818 = Sin(var1[12]);
  t4827 = t4712*t4746;
  t4830 = t4703*t4772;
  t4831 = t4827 + t4830;
  t4862 = t4703*t4746;
  t4863 = -1.*t4712*t4772;
  t4866 = t4862 + t4863;
  t4875 = Cos(var1[13]);
  t4879 = -1.*t4875;
  t4883 = 1. + t4879;
  t4889 = Sin(var1[13]);
  t4894 = -1.*t4818*t4831;
  t4898 = t4795*t4866;
  t4899 = t4894 + t4898;
  t4909 = t4795*t4831;
  t4911 = t4818*t4866;
  t4915 = t4909 + t4911;
  t582 = -1.*t577;
  t843 = 1. + t582;
  t844 = 0.135*t843;
  t3524 = 0. + t844;
  t4947 = Sin(var1[3]);
  t3846 = -0.135*t3834;
  t3871 = 0. + t3846;
  t3927 = -1.*t3921;
  t3939 = 1. + t3927;
  t3963 = 0.135*t3939;
  t3973 = 0. + t3963;
  t4941 = Cos(var1[3]);
  t4942 = t4941*t4433;
  t4951 = -1.*t4947*t3830*t3747;
  t4953 = t4942 + t4951;
  t4059 = -0.135*t4038;
  t4073 = 0. + t4059;
  t4181 = -0.09*t4180;
  t4206 = 0.049*t4182;
  t4222 = 0. + t4181 + t4206;
  t4976 = -1.*t335*t577*t4947;
  t4977 = -1.*t4953*t3834;
  t4979 = t4976 + t4977;
  t4958 = t577*t4953;
  t4959 = -1.*t335*t4947*t3834;
  t4960 = t4958 + t4959;
  t4387 = 0.135*t4359;
  t4392 = 0.049*t4391;
  t4397 = 0. + t4387 + t4392;
  t4479 = -0.049*t4359;
  t4493 = 0.135*t4391;
  t4521 = 0. + t4479 + t4493;
  t4987 = t3921*t4960;
  t4989 = t4979*t4038;
  t4991 = t4987 + t4989;
  t4993 = t4433*t4947*t3830;
  t4995 = t4941*t3747;
  t4996 = t4993 + t4995;
  t4598 = -0.049*t4180;
  t4599 = -0.09*t4182;
  t4600 = 0. + t4598 + t4599;
  t4628 = -0.049*t4624;
  t4636 = -0.21*t4635;
  t4642 = 0. + t4628 + t4636;
  t4982 = t3921*t4979;
  t4983 = -1.*t4960*t4038;
  t4984 = t4982 + t4983;
  t5006 = t4353*t4996;
  t5007 = t4991*t4391;
  t5008 = t5006 + t5007;
  t4688 = -0.21*t4624;
  t4692 = 0.049*t4635;
  t4694 = 0. + t4688 + t4692;
  t4709 = -0.2707*t4706;
  t4713 = 0.0016*t4712;
  t4716 = 0. + t4709 + t4713;
  t5012 = t4182*t4984;
  t5015 = t4082*t5008;
  t5016 = t5012 + t5015;
  t5019 = t4082*t4984;
  t5020 = -1.*t4182*t5008;
  t5022 = t5019 + t5020;
  t4760 = -0.0016*t4706;
  t4761 = -0.2707*t4712;
  t4762 = 0. + t4760 + t4761;
  t4811 = 0.0184*t4805;
  t4821 = -0.7055*t4818;
  t4823 = 0. + t4811 + t4821;
  t5025 = -1.*t4635*t5016;
  t5026 = t4615*t5022;
  t5027 = t5025 + t5026;
  t5033 = t4615*t5016;
  t5034 = t4635*t5022;
  t5035 = t5033 + t5034;
  t4851 = -0.7055*t4805;
  t4852 = -0.0184*t4818;
  t4857 = 0. + t4851 + t4852;
  t4887 = -1.1135*t4883;
  t4890 = 0.0216*t4889;
  t4891 = 0. + t4887 + t4890;
  t5041 = t4712*t5027;
  t5065 = t4703*t5035;
  t5068 = t5041 + t5065;
  t5071 = t4703*t5027;
  t5073 = -1.*t4712*t5035;
  t5083 = t5071 + t5073;
  t4904 = -0.0216*t4883;
  t4905 = -1.1135*t4889;
  t4908 = 0. + t4904 + t4905;
  t5086 = -1.*t4818*t5068;
  t5087 = t4795*t5083;
  t5095 = t5086 + t5087;
  t5097 = t4795*t5068;
  t5099 = t4818*t5083;
  t5101 = t5097 + t5099;
  t5135 = t4433*t4947;
  t5139 = t4941*t3830*t3747;
  t5153 = t5135 + t5139;
  t5188 = t4941*t335*t577;
  t5190 = -1.*t5153*t3834;
  t5192 = t5188 + t5190;
  t5176 = t577*t5153;
  t5179 = t4941*t335*t3834;
  t5180 = t5176 + t5179;
  t5204 = t3921*t5180;
  t5213 = t5192*t4038;
  t5215 = t5204 + t5213;
  t5221 = -1.*t4941*t4433*t3830;
  t5222 = t4947*t3747;
  t5223 = t5221 + t5222;
  t5195 = t3921*t5192;
  t5196 = -1.*t5180*t4038;
  t5199 = t5195 + t5196;
  t5263 = t4353*t5223;
  t5265 = t5215*t4391;
  t5268 = t5263 + t5265;
  t5282 = t4182*t5199;
  t5291 = t4082*t5268;
  t5293 = t5282 + t5291;
  t5303 = t4082*t5199;
  t5304 = -1.*t4182*t5268;
  t5305 = t5303 + t5304;
  t5309 = -1.*t4635*t5293;
  t5310 = t4615*t5305;
  t5315 = t5309 + t5310;
  t5319 = t4615*t5293;
  t5320 = t4635*t5305;
  t5325 = t5319 + t5320;
  t5329 = t4712*t5315;
  t5334 = t4703*t5325;
  t5338 = t5329 + t5334;
  t5341 = t4703*t5315;
  t5346 = -1.*t4712*t5325;
  t5349 = t5341 + t5346;
  t5353 = -1.*t4818*t5338;
  t5355 = t4795*t5349;
  t5361 = t5353 + t5355;
  t5368 = t4795*t5338;
  t5372 = t4818*t5349;
  t5373 = t5368 + t5372;
  p_output1[0]=0. - 1.*t335*t3524*t3747 + t3830*t3871 + t3973*t4007 + t4033*t4073 + t4222*t4266 + t4336*t4397 + 0.1305*(t4336*t4353 - 1.*t335*t4391*t4433) + t335*t4433*t4521 + t4600*t4611 + t4642*t4665 + t4694*t4698 + t4716*t4746 + t4762*t4772 + t4823*t4831 + t4857*t4866 + t4891*t4899 + t4908*t4915 + 0.0306*(t4889*t4899 + t4875*t4915) - 1.1312*(t4875*t4899 - 1.*t4889*t4915) + var1[0];
  p_output1[1]=0. - 1.*t335*t3871*t4947 + t3524*t4953 + t3973*t4960 + t4073*t4979 + t4222*t4984 + t4397*t4991 + t4521*t4996 + 0.1305*(t4353*t4991 - 1.*t4391*t4996) + t4600*t5008 + t4642*t5016 + t4694*t5022 + t4716*t5027 + t4762*t5035 + t4823*t5068 + t4857*t5083 + t4891*t5095 + t4908*t5101 + 0.0306*(t4889*t5095 + t4875*t5101) - 1.1312*(t4875*t5095 - 1.*t4889*t5101) + var1[1];
  p_output1[2]=0. + t335*t3871*t4941 + t3524*t5153 + t3973*t5180 + t4073*t5192 + t4222*t5199 + t4397*t5215 + t4521*t5223 + 0.1305*(t4353*t5215 - 1.*t4391*t5223) + t4600*t5268 + t4642*t5293 + t4694*t5305 + t4716*t5315 + t4762*t5325 + t4823*t5338 + t4857*t5349 + t4891*t5361 + t4908*t5373 + 0.0306*(t4889*t5361 + t4875*t5373) - 1.1312*(t4875*t5361 - 1.*t4889*t5373) + var1[2];
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

#include "p_LeftToeBottom.hh"

namespace SymExpression
{

void p_LeftToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
