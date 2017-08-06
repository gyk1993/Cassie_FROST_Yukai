/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:26 GMT-04:00
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
  double t8;
  double t2230;
  double t3963;
  double t3999;
  double t4206;
  double t4600;
  double t4585;
  double t4590;
  double t4598;
  double t4320;
  double t4628;
  double t4642;
  double t4644;
  double t25;
  double t262;
  double t788;
  double t1087;
  double t14;
  double t4867;
  double t4887;
  double t4891;
  double t4688;
  double t4694;
  double t4698;
  double t4713;
  double t4770;
  double t4811;
  double t4821;
  double t4932;
  double t4936;
  double t4942;
  double t4956;
  double t4967;
  double t4979;
  double t4982;
  double t4989;
  double t4992;
  double t4995;
  double t5010;
  double t5012;
  double t5015;
  double t5026;
  double t5029;
  double t5033;
  double t5036;
  double t5071;
  double t5083;
  double t5084;
  double t5107;
  double t5111;
  double t5116;
  double t5120;
  double t5124;
  double t5139;
  double t5176;
  double t5188;
  double t5192;
  double t5195;
  double t5242;
  double t5252;
  double t5260;
  double t5265;
  double t5274;
  double t5282;
  double t5303;
  double t5310;
  double t5315;
  double t5316;
  double t5334;
  double t5337;
  double t5349;
  double t3552;
  double t3846;
  double t794;
  double t1207;
  double t1212;
  double t5393;
  double t4012;
  double t4027;
  double t4059;
  double t4181;
  double t5406;
  double t4397;
  double t4493;
  double t4521;
  double t4581;
  double t5423;
  double t5424;
  double t5427;
  double t4603;
  double t4612;
  double t4709;
  double t4761;
  double t4769;
  double t5430;
  double t5441;
  double t5448;
  double t5455;
  double t5456;
  double t5457;
  double t4852;
  double t4862;
  double t4866;
  double t5399;
  double t5407;
  double t5408;
  double t5486;
  double t5488;
  double t5498;
  double t4922;
  double t4923;
  double t4925;
  double t4980;
  double t4986;
  double t4987;
  double t5473;
  double t5474;
  double t5478;
  double t5529;
  double t5530;
  double t5532;
  double t5005;
  double t5006;
  double t5007;
  double t5034;
  double t5041;
  double t5065;
  double t5544;
  double t5547;
  double t5548;
  double t5551;
  double t5558;
  double t5560;
  double t5097;
  double t5099;
  double t5103;
  double t5173;
  double t5179;
  double t5186;
  double t5576;
  double t5577;
  double t5579;
  double t5581;
  double t5582;
  double t5583;
  double t5219;
  double t5222;
  double t5226;
  double t5295;
  double t5305;
  double t5306;
  double t5591;
  double t5593;
  double t5595;
  double t5597;
  double t5602;
  double t5609;
  double t5320;
  double t5327;
  double t5329;
  double t5614;
  double t5618;
  double t5619;
  double t5621;
  double t5626;
  double t5628;
  double t5662;
  double t5663;
  double t5664;
  double t5666;
  double t5667;
  double t5668;
  double t5670;
  double t5671;
  double t5678;
  double t5654;
  double t5655;
  double t5658;
  double t5710;
  double t5716;
  double t5718;
  double t5696;
  double t5703;
  double t5705;
  double t5738;
  double t5740;
  double t5744;
  double t5748;
  double t5749;
  double t5755;
  double t5764;
  double t5765;
  double t5768;
  double t5770;
  double t5771;
  double t5773;
  double t5780;
  double t5783;
  double t5784;
  double t5787;
  double t5789;
  double t5795;
  double t5798;
  double t5799;
  double t5800;
  double t5804;
  double t5805;
  double t5807;
  double t5811;
  double t5812;
  double t5814;
  t8 = Cos(var1[4]);
  t2230 = Sin(var1[14]);
  t3963 = Sin(var1[4]);
  t3999 = Cos(var1[14]);
  t4206 = Sin(var1[5]);
  t4600 = Sin(var1[15]);
  t4585 = t2230*t3963;
  t4590 = -1.*t3999*t8*t4206;
  t4598 = t4585 + t4590;
  t4320 = Cos(var1[15]);
  t4628 = t3999*t3963;
  t4642 = t8*t2230*t4206;
  t4644 = t4628 + t4642;
  t25 = Cos(var1[16]);
  t262 = -1.*t25;
  t788 = 1. + t262;
  t1087 = Sin(var1[16]);
  t14 = Cos(var1[5]);
  t4867 = t4320*t4598;
  t4887 = t4600*t4644;
  t4891 = t4867 + t4887;
  t4688 = Cos(var1[17]);
  t4694 = -1.*t4688;
  t4698 = 1. + t4694;
  t4713 = Sin(var1[17]);
  t4770 = -1.*t4600*t4598;
  t4811 = t4320*t4644;
  t4821 = t4770 + t4811;
  t4932 = t25*t8*t14;
  t4936 = t1087*t4891;
  t4942 = t4932 + t4936;
  t4956 = Cos(var1[18]);
  t4967 = -1.*t4956;
  t4979 = 1. + t4967;
  t4982 = Sin(var1[18]);
  t4989 = t4713*t4821;
  t4992 = t4688*t4942;
  t4995 = t4989 + t4992;
  t5010 = t4688*t4821;
  t5012 = -1.*t4713*t4942;
  t5015 = t5010 + t5012;
  t5026 = Cos(var1[19]);
  t5029 = -1.*t5026;
  t5033 = 1. + t5029;
  t5036 = Sin(var1[19]);
  t5071 = -1.*t4982*t4995;
  t5083 = t4956*t5015;
  t5084 = t5071 + t5083;
  t5107 = t4956*t4995;
  t5111 = t4982*t5015;
  t5116 = t5107 + t5111;
  t5120 = Cos(var1[20]);
  t5124 = -1.*t5120;
  t5139 = 1. + t5124;
  t5176 = Sin(var1[20]);
  t5188 = t5036*t5084;
  t5192 = t5026*t5116;
  t5195 = t5188 + t5192;
  t5242 = t5026*t5084;
  t5252 = -1.*t5036*t5116;
  t5260 = t5242 + t5252;
  t5265 = Cos(var1[21]);
  t5274 = -1.*t5265;
  t5282 = 1. + t5274;
  t5303 = Sin(var1[21]);
  t5310 = -1.*t5176*t5195;
  t5315 = t5120*t5260;
  t5316 = t5310 + t5315;
  t5334 = t5120*t5195;
  t5337 = t5176*t5260;
  t5349 = t5334 + t5337;
  t3552 = 0.135*t2230;
  t3846 = 0. + t3552;
  t794 = -0.049*t788;
  t1207 = -0.135*t1087;
  t1212 = 0. + t794 + t1207;
  t5393 = Sin(var1[3]);
  t4012 = -1.*t3999;
  t4027 = 1. + t4012;
  t4059 = -0.135*t4027;
  t4181 = 0. + t4059;
  t5406 = Cos(var1[3]);
  t4397 = -1.*t4320;
  t4493 = 1. + t4397;
  t4521 = -0.135*t4493;
  t4581 = 0. + t4521;
  t5423 = t5406*t14;
  t5424 = -1.*t5393*t3963*t4206;
  t5427 = t5423 + t5424;
  t4603 = 0.135*t4600;
  t4612 = 0. + t4603;
  t4709 = -0.09*t4698;
  t4761 = 0.049*t4713;
  t4769 = 0. + t4709 + t4761;
  t5430 = -1.*t8*t2230*t5393;
  t5441 = t3999*t5427;
  t5448 = t5430 + t5441;
  t5455 = -1.*t3999*t8*t5393;
  t5456 = -1.*t2230*t5427;
  t5457 = t5455 + t5456;
  t4852 = -0.135*t788;
  t4862 = 0.049*t1087;
  t4866 = 0. + t4852 + t4862;
  t5399 = t14*t5393*t3963;
  t5407 = t5406*t4206;
  t5408 = t5399 + t5407;
  t5486 = t4320*t5448;
  t5488 = t4600*t5457;
  t5498 = t5486 + t5488;
  t4922 = -0.049*t4698;
  t4923 = -0.09*t4713;
  t4925 = 0. + t4922 + t4923;
  t4980 = -0.049*t4979;
  t4986 = -0.21*t4982;
  t4987 = 0. + t4980 + t4986;
  t5473 = -1.*t4600*t5448;
  t5474 = t4320*t5457;
  t5478 = t5473 + t5474;
  t5529 = t25*t5408;
  t5530 = t1087*t5498;
  t5532 = t5529 + t5530;
  t5005 = -0.21*t4979;
  t5006 = 0.049*t4982;
  t5007 = 0. + t5005 + t5006;
  t5034 = -0.2707*t5033;
  t5041 = 0.0016*t5036;
  t5065 = 0. + t5034 + t5041;
  t5544 = t4713*t5478;
  t5547 = t4688*t5532;
  t5548 = t5544 + t5547;
  t5551 = t4688*t5478;
  t5558 = -1.*t4713*t5532;
  t5560 = t5551 + t5558;
  t5097 = -0.0016*t5033;
  t5099 = -0.2707*t5036;
  t5103 = 0. + t5097 + t5099;
  t5173 = 0.0184*t5139;
  t5179 = -0.7055*t5176;
  t5186 = 0. + t5173 + t5179;
  t5576 = -1.*t4982*t5548;
  t5577 = t4956*t5560;
  t5579 = t5576 + t5577;
  t5581 = t4956*t5548;
  t5582 = t4982*t5560;
  t5583 = t5581 + t5582;
  t5219 = -0.7055*t5139;
  t5222 = -0.0184*t5176;
  t5226 = 0. + t5219 + t5222;
  t5295 = -1.1135*t5282;
  t5305 = 0.0216*t5303;
  t5306 = 0. + t5295 + t5305;
  t5591 = t5036*t5579;
  t5593 = t5026*t5583;
  t5595 = t5591 + t5593;
  t5597 = t5026*t5579;
  t5602 = -1.*t5036*t5583;
  t5609 = t5597 + t5602;
  t5320 = -0.0216*t5282;
  t5327 = -1.1135*t5303;
  t5329 = 0. + t5320 + t5327;
  t5614 = -1.*t5176*t5595;
  t5618 = t5120*t5609;
  t5619 = t5614 + t5618;
  t5621 = t5120*t5595;
  t5626 = t5176*t5609;
  t5628 = t5621 + t5626;
  t5662 = t14*t5393;
  t5663 = t5406*t3963*t4206;
  t5664 = t5662 + t5663;
  t5666 = t5406*t8*t2230;
  t5667 = t3999*t5664;
  t5668 = t5666 + t5667;
  t5670 = t3999*t5406*t8;
  t5671 = -1.*t2230*t5664;
  t5678 = t5670 + t5671;
  t5654 = -1.*t5406*t14*t3963;
  t5655 = t5393*t4206;
  t5658 = t5654 + t5655;
  t5710 = t4320*t5668;
  t5716 = t4600*t5678;
  t5718 = t5710 + t5716;
  t5696 = -1.*t4600*t5668;
  t5703 = t4320*t5678;
  t5705 = t5696 + t5703;
  t5738 = t25*t5658;
  t5740 = t1087*t5718;
  t5744 = t5738 + t5740;
  t5748 = t4713*t5705;
  t5749 = t4688*t5744;
  t5755 = t5748 + t5749;
  t5764 = t4688*t5705;
  t5765 = -1.*t4713*t5744;
  t5768 = t5764 + t5765;
  t5770 = -1.*t4982*t5755;
  t5771 = t4956*t5768;
  t5773 = t5770 + t5771;
  t5780 = t4956*t5755;
  t5783 = t4982*t5768;
  t5784 = t5780 + t5783;
  t5787 = t5036*t5773;
  t5789 = t5026*t5784;
  t5795 = t5787 + t5789;
  t5798 = t5026*t5773;
  t5799 = -1.*t5036*t5784;
  t5800 = t5798 + t5799;
  t5804 = -1.*t5176*t5795;
  t5805 = t5120*t5800;
  t5807 = t5804 + t5805;
  t5811 = t5120*t5795;
  t5812 = t5176*t5800;
  t5814 = t5811 + t5812;
  p_output1[0]=0. + t3846*t3963 + t4581*t4598 + t4612*t4644 + t4769*t4821 + t4866*t4891 + t4925*t4942 + t4987*t4995 + t5007*t5015 + t5065*t5084 + t5103*t5116 + t5186*t5195 + t5226*t5260 + t5306*t5316 + t5329*t5349 + 0.0306*(t5303*t5316 + t5265*t5349) - 1.1312*(t5265*t5316 - 1.*t5303*t5349) + t1212*t14*t8 - 1.*t4181*t4206*t8 - 0.1305*(t25*t4891 - 1.*t1087*t14*t8) + var1[0];
  p_output1[1]=0. + t1212*t5408 + t4181*t5427 + t4581*t5448 + t4612*t5457 + t4769*t5478 + t4866*t5498 - 0.1305*(-1.*t1087*t5408 + t25*t5498) + t4925*t5532 + t4987*t5548 + t5007*t5560 + t5065*t5579 + t5103*t5583 + t5186*t5595 + t5226*t5609 + t5306*t5619 + t5329*t5628 + 0.0306*(t5303*t5619 + t5265*t5628) - 1.1312*(t5265*t5619 - 1.*t5303*t5628) - 1.*t3846*t5393*t8 + var1[1];
  p_output1[2]=0. + t1212*t5658 + t4181*t5664 + t4581*t5668 + t4612*t5678 + t4769*t5705 + t4866*t5718 - 0.1305*(-1.*t1087*t5658 + t25*t5718) + t4925*t5744 + t4987*t5755 + t5007*t5768 + t5065*t5773 + t5103*t5784 + t5186*t5795 + t5226*t5800 + t5306*t5807 + t5329*t5814 + 0.0306*(t5303*t5807 + t5265*t5814) - 1.1312*(t5265*t5807 - 1.*t5303*t5814) + t3846*t5406*t8 + var1[2];
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

#include "p_RightToeBottom.hh"

namespace SymExpression
{

void p_RightToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
