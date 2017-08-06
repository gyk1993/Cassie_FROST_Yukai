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
  double t304;
  double t1241;
  double t288;
  double t375;
  double t3825;
  double t206;
  double t213;
  double t4073;
  double t4266;
  double t4222;
  double t4226;
  double t4270;
  double t4282;
  double t4020;
  double t4077;
  double t4600;
  double t4603;
  double t4610;
  double t3973;
  double t3999;
  double t4012;
  double t844;
  double t3846;
  double t3883;
  double t3963;
  double t4027;
  double t4033;
  double t4780;
  double t4761;
  double t4762;
  double t4769;
  double t4760;
  double t4811;
  double t4821;
  double t4823;
  double t4851;
  double t4770;
  double t4827;
  double t4830;
  double t4754;
  double t4852;
  double t4857;
  double t4862;
  double t4890;
  double t4847;
  double t4866;
  double t4867;
  double t4746;
  double t4891;
  double t4898;
  double t4903;
  double t4909;
  double t4887;
  double t4904;
  double t4905;
  double t4721;
  double t4911;
  double t4917;
  double t4919;
  double t4924;
  double t4908;
  double t4920;
  double t4922;
  double t4716;
  double t4925;
  double t4932;
  double t4935;
  double t4429;
  double t4479;
  double t4493;
  double t4320;
  double t4387;
  double t4392;
  double t4585;
  double t4590;
  double t4595;
  double t4397;
  double t4521;
  double t4576;
  double t4982;
  double t4984;
  double t4986;
  double t4989;
  double t4992;
  double t4993;
  double t4987;
  double t4995;
  double t4997;
  double t5000;
  double t5001;
  double t5005;
  double t4999;
  double t5006;
  double t5007;
  double t5012;
  double t5015;
  double t5017;
  double t5010;
  double t5019;
  double t5022;
  double t5026;
  double t5027;
  double t5029;
  double t5023;
  double t5033;
  double t5034;
  double t5041;
  double t5065;
  double t5070;
  double t4644;
  double t4646;
  double t4687;
  double t4612;
  double t4628;
  double t4636;
  double t4695;
  double t4698;
  double t4700;
  double t4642;
  double t4688;
  double t4692;
  double t5107;
  double t5109;
  double t5111;
  double t5118;
  double t5120;
  double t5123;
  double t5116;
  double t5124;
  double t5128;
  double t5139;
  double t5165;
  double t5173;
  double t5135;
  double t5176;
  double t5179;
  double t5188;
  double t5192;
  double t5194;
  double t5186;
  double t5195;
  double t5199;
  double t5204;
  double t5213;
  double t5219;
  double t5201;
  double t5222;
  double t5226;
  double t5252;
  double t5260;
  double t5261;
  double t4923;
  double t4936;
  double t4942;
  double t4956;
  double t4958;
  double t4967;
  double t5036;
  double t5071;
  double t5083;
  double t5087;
  double t5096;
  double t5097;
  double t5242;
  double t5263;
  double t5265;
  double t5282;
  double t5291;
  double t5295;
  double t5400;
  double t5404;
  double t5386;
  double t5390;
  double t5462;
  double t5468;
  double t5504;
  double t5509;
  double t5539;
  double t5540;
  double t5567;
  double t5574;
  double t5339;
  double t5341;
  double t5349;
  double t5351;
  double t5363;
  double t5368;
  double t5374;
  double t5378;
  double t5379;
  double t5380;
  double t5383;
  double t5384;
  double t5391;
  double t5393;
  double t5396;
  double t5406;
  double t5407;
  double t5408;
  double t5423;
  double t5424;
  double t5427;
  double t5455;
  double t5456;
  double t5457;
  double t5473;
  double t5474;
  double t5478;
  double t5486;
  double t5488;
  double t5498;
  double t5513;
  double t5515;
  double t5516;
  double t5529;
  double t5530;
  double t5532;
  double t5544;
  double t5547;
  double t5548;
  double t5551;
  double t5558;
  double t5560;
  double t5576;
  double t5577;
  double t5579;
  double t5581;
  double t5582;
  double t5583;
  t304 = Cos(var1[6]);
  t1241 = Sin(var1[4]);
  t288 = Cos(var1[4]);
  t375 = Sin(var1[5]);
  t3825 = Sin(var1[6]);
  t206 = Cos(var1[8]);
  t213 = Cos(var1[7]);
  t4073 = Cos(var1[5]);
  t4266 = Sin(var1[3]);
  t4222 = Cos(var1[3]);
  t4226 = t4222*t4073;
  t4270 = -1.*t4266*t1241*t375;
  t4282 = t4226 + t4270;
  t4020 = Sin(var1[7]);
  t4077 = Sin(var1[8]);
  t4600 = t4073*t4266;
  t4603 = t4222*t1241*t375;
  t4610 = t4600 + t4603;
  t3973 = t304*t1241;
  t3999 = t288*t375*t3825;
  t4012 = t3973 + t3999;
  t844 = -1.*t288*t304*t375;
  t3846 = t1241*t3825;
  t3883 = t844 + t3846;
  t3963 = t213*t3883;
  t4027 = t4012*t4020;
  t4033 = t3963 + t4027;
  t4780 = Cos(var1[9]);
  t4761 = t213*t4012;
  t4762 = -1.*t3883*t4020;
  t4769 = t4761 + t4762;
  t4760 = Sin(var1[9]);
  t4811 = t288*t4073*t206;
  t4821 = t4033*t4077;
  t4823 = t4811 + t4821;
  t4851 = Cos(var1[10]);
  t4770 = t4760*t4769;
  t4827 = t4780*t4823;
  t4830 = t4770 + t4827;
  t4754 = Sin(var1[10]);
  t4852 = t4780*t4769;
  t4857 = -1.*t4760*t4823;
  t4862 = t4852 + t4857;
  t4890 = Cos(var1[11]);
  t4847 = -1.*t4754*t4830;
  t4866 = t4851*t4862;
  t4867 = t4847 + t4866;
  t4746 = Sin(var1[11]);
  t4891 = t4851*t4830;
  t4898 = t4754*t4862;
  t4903 = t4891 + t4898;
  t4909 = Cos(var1[12]);
  t4887 = t4746*t4867;
  t4904 = t4890*t4903;
  t4905 = t4887 + t4904;
  t4721 = Sin(var1[12]);
  t4911 = t4890*t4867;
  t4917 = -1.*t4746*t4903;
  t4919 = t4911 + t4917;
  t4924 = Cos(var1[13]);
  t4908 = -1.*t4721*t4905;
  t4920 = t4909*t4919;
  t4922 = t4908 + t4920;
  t4716 = Sin(var1[13]);
  t4925 = t4909*t4905;
  t4932 = t4721*t4919;
  t4935 = t4925 + t4932;
  t4429 = -1.*t288*t304*t4266;
  t4479 = -1.*t4282*t3825;
  t4493 = t4429 + t4479;
  t4320 = t304*t4282;
  t4387 = -1.*t288*t4266*t3825;
  t4392 = t4320 + t4387;
  t4585 = t4073*t4266*t1241;
  t4590 = t4222*t375;
  t4595 = t4585 + t4590;
  t4397 = t213*t4392;
  t4521 = t4493*t4020;
  t4576 = t4397 + t4521;
  t4982 = t213*t4493;
  t4984 = -1.*t4392*t4020;
  t4986 = t4982 + t4984;
  t4989 = t206*t4595;
  t4992 = t4576*t4077;
  t4993 = t4989 + t4992;
  t4987 = t4760*t4986;
  t4995 = t4780*t4993;
  t4997 = t4987 + t4995;
  t5000 = t4780*t4986;
  t5001 = -1.*t4760*t4993;
  t5005 = t5000 + t5001;
  t4999 = -1.*t4754*t4997;
  t5006 = t4851*t5005;
  t5007 = t4999 + t5006;
  t5012 = t4851*t4997;
  t5015 = t4754*t5005;
  t5017 = t5012 + t5015;
  t5010 = t4746*t5007;
  t5019 = t4890*t5017;
  t5022 = t5010 + t5019;
  t5026 = t4890*t5007;
  t5027 = -1.*t4746*t5017;
  t5029 = t5026 + t5027;
  t5023 = -1.*t4721*t5022;
  t5033 = t4909*t5029;
  t5034 = t5023 + t5033;
  t5041 = t4909*t5022;
  t5065 = t4721*t5029;
  t5070 = t5041 + t5065;
  t4644 = t4222*t288*t304;
  t4646 = -1.*t4610*t3825;
  t4687 = t4644 + t4646;
  t4612 = t304*t4610;
  t4628 = t4222*t288*t3825;
  t4636 = t4612 + t4628;
  t4695 = -1.*t4222*t4073*t1241;
  t4698 = t4266*t375;
  t4700 = t4695 + t4698;
  t4642 = t213*t4636;
  t4688 = t4687*t4020;
  t4692 = t4642 + t4688;
  t5107 = t213*t4687;
  t5109 = -1.*t4636*t4020;
  t5111 = t5107 + t5109;
  t5118 = t206*t4700;
  t5120 = t4692*t4077;
  t5123 = t5118 + t5120;
  t5116 = t4760*t5111;
  t5124 = t4780*t5123;
  t5128 = t5116 + t5124;
  t5139 = t4780*t5111;
  t5165 = -1.*t4760*t5123;
  t5173 = t5139 + t5165;
  t5135 = -1.*t4754*t5128;
  t5176 = t4851*t5173;
  t5179 = t5135 + t5176;
  t5188 = t4851*t5128;
  t5192 = t4754*t5173;
  t5194 = t5188 + t5192;
  t5186 = t4746*t5179;
  t5195 = t4890*t5194;
  t5199 = t5186 + t5195;
  t5204 = t4890*t5179;
  t5213 = -1.*t4746*t5194;
  t5219 = t5204 + t5213;
  t5201 = -1.*t4721*t5199;
  t5222 = t4909*t5219;
  t5226 = t5201 + t5222;
  t5252 = t4909*t5199;
  t5260 = t4721*t5219;
  t5261 = t5252 + t5260;
  t4923 = t4716*t4922;
  t4936 = t4924*t4935;
  t4942 = t4923 + t4936;
  t4956 = t4924*t4922;
  t4958 = -1.*t4716*t4935;
  t4967 = t4956 + t4958;
  t5036 = t4716*t5034;
  t5071 = t4924*t5070;
  t5083 = t5036 + t5071;
  t5087 = t4924*t5034;
  t5096 = -1.*t4716*t5070;
  t5097 = t5087 + t5096;
  t5242 = t4716*t5226;
  t5263 = t4924*t5261;
  t5265 = t5242 + t5263;
  t5282 = t4924*t5226;
  t5291 = -1.*t4716*t5261;
  t5295 = t5282 + t5291;
  t5400 = -1.*t206;
  t5404 = 1. + t5400;
  t5386 = -1.*t4780;
  t5390 = 1. + t5386;
  t5462 = -1.*t4851;
  t5468 = 1. + t5462;
  t5504 = -1.*t4890;
  t5509 = 1. + t5504;
  t5539 = -1.*t4909;
  t5540 = 1. + t5539;
  t5567 = -1.*t4924;
  t5574 = 1. + t5567;
  t5339 = -1.*t304;
  t5341 = 1. + t5339;
  t5349 = 0.135*t5341;
  t5351 = 0. + t5349;
  t5363 = -0.135*t3825;
  t5368 = 0. + t5363;
  t5374 = -1.*t213;
  t5378 = 1. + t5374;
  t5379 = 0.135*t5378;
  t5380 = 0. + t5379;
  t5383 = -0.135*t4020;
  t5384 = 0. + t5383;
  t5391 = -0.09*t5390;
  t5393 = 0.049*t4760;
  t5396 = 0. + t5391 + t5393;
  t5406 = 0.135*t5404;
  t5407 = 0.049*t4077;
  t5408 = 0. + t5406 + t5407;
  t5423 = -0.049*t5404;
  t5424 = 0.135*t4077;
  t5427 = 0. + t5423 + t5424;
  t5455 = -0.049*t5390;
  t5456 = -0.09*t4760;
  t5457 = 0. + t5455 + t5456;
  t5473 = -0.049*t5468;
  t5474 = -0.21*t4754;
  t5478 = 0. + t5473 + t5474;
  t5486 = -0.21*t5468;
  t5488 = 0.049*t4754;
  t5498 = 0. + t5486 + t5488;
  t5513 = -0.2707*t5509;
  t5515 = 0.0016*t4746;
  t5516 = 0. + t5513 + t5515;
  t5529 = -0.0016*t5509;
  t5530 = -0.2707*t4746;
  t5532 = 0. + t5529 + t5530;
  t5544 = 0.0184*t5540;
  t5547 = -0.7055*t4721;
  t5548 = 0. + t5544 + t5547;
  t5551 = -0.7055*t5540;
  t5558 = -0.0184*t4721;
  t5560 = 0. + t5551 + t5558;
  t5576 = -1.1135*t5574;
  t5577 = 0.0216*t4716;
  t5579 = 0. + t5576 + t5577;
  t5581 = -0.0216*t5574;
  t5582 = -1.1135*t4716;
  t5583 = 0. + t5581 + t5582;
  p_output1[0]=-1.*t206*t4033 + t288*t4073*t4077;
  p_output1[1]=-1.*t206*t4576 + t4077*t4595;
  p_output1[2]=-1.*t206*t4692 + t4077*t4700;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t4942 + 0.766044*t4967;
  p_output1[5]=0.642788*t5083 + 0.766044*t5097;
  p_output1[6]=0.642788*t5265 + 0.766044*t5295;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t4942 + 0.642788*t4967;
  p_output1[9]=-0.766044*t5083 + 0.642788*t5097;
  p_output1[10]=-0.766044*t5265 + 0.642788*t5295;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t206*t4033 - 1.*t288*t4073*t4077) + 0.0306*t4942 - 1.1312*t4967 - 1.*t288*t375*t5351 + t1241*t5368 + t3883*t5380 + t4012*t5384 + t4769*t5396 + t4033*t5408 + t288*t4073*t5427 + t4823*t5457 + t4830*t5478 + t4862*t5498 + t4867*t5516 + t4903*t5532 + t4905*t5548 + t4919*t5560 + t4922*t5579 + t4935*t5583 + var1[0];
  p_output1[13]=0. + 0.1305*(t206*t4576 - 1.*t4077*t4595) + 0.0306*t5083 - 1.1312*t5097 + t4282*t5351 - 1.*t288*t4266*t5368 + t4392*t5380 + t4493*t5384 + t4986*t5396 + t4576*t5408 + t4595*t5427 + t4993*t5457 + t4997*t5478 + t5005*t5498 + t5007*t5516 + t5017*t5532 + t5022*t5548 + t5029*t5560 + t5034*t5579 + t5070*t5583 + var1[1];
  p_output1[14]=0. + 0.1305*(t206*t4692 - 1.*t4077*t4700) + 0.0306*t5265 - 1.1312*t5295 + t4610*t5351 + t288*t4222*t5368 + t4636*t5380 + t4687*t5384 + t5111*t5396 + t4692*t5408 + t4700*t5427 + t5123*t5457 + t5128*t5478 + t5173*t5498 + t5179*t5516 + t5194*t5532 + t5199*t5548 + t5219*t5560 + t5226*t5579 + t5261*t5583 + var1[2];
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

#include "H_LeftToeBottom.hh"

namespace SymExpression
{

void H_LeftToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
