/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:27 GMT-04:00
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
  double t537;
  double t2604;
  double t1212;
  double t1207;
  double t2608;
  double t544;
  double t541;
  double t917;
  double t923;
  double t4612;
  double t4642;
  double t4059;
  double t4769;
  double t4811;
  double t4821;
  double t4936;
  double t4955;
  double t4980;
  double t1313;
  double t3552;
  double t3780;
  double t4164;
  double t4226;
  double t4521;
  double t3973;
  double t4581;
  double t4585;
  double t5103;
  double t5084;
  double t5087;
  double t5097;
  double t5083;
  double t5107;
  double t5111;
  double t5118;
  double t5188;
  double t5099;
  double t5173;
  double t5179;
  double t5065;
  double t5192;
  double t5204;
  double t5219;
  double t5259;
  double t5186;
  double t5222;
  double t5226;
  double t5041;
  double t5260;
  double t5263;
  double t5295;
  double t5319;
  double t5242;
  double t5305;
  double t5306;
  double t5034;
  double t5320;
  double t5327;
  double t5329;
  double t5363;
  double t5315;
  double t5334;
  double t5337;
  double t5019;
  double t5372;
  double t5379;
  double t5380;
  double t4761;
  double t4827;
  double t4852;
  double t4866;
  double t4867;
  double t4887;
  double t4628;
  double t4644;
  double t4687;
  double t4862;
  double t4898;
  double t4904;
  double t5419;
  double t5423;
  double t5429;
  double t5451;
  double t5457;
  double t5461;
  double t5441;
  double t5474;
  double t5478;
  double t5486;
  double t5488;
  double t5502;
  double t5483;
  double t5513;
  double t5515;
  double t5528;
  double t5529;
  double t5530;
  double t5516;
  double t5534;
  double t5544;
  double t5550;
  double t5551;
  double t5560;
  double t5547;
  double t5564;
  double t5577;
  double t5580;
  double t5581;
  double t5582;
  double t4932;
  double t4986;
  double t4987;
  double t4992;
  double t5000;
  double t5005;
  double t4920;
  double t4922;
  double t4923;
  double t4989;
  double t5006;
  double t5007;
  double t5620;
  double t5621;
  double t5626;
  double t5631;
  double t5634;
  double t5636;
  double t5630;
  double t5638;
  double t5640;
  double t5643;
  double t5644;
  double t5647;
  double t5642;
  double t5652;
  double t5655;
  double t5662;
  double t5663;
  double t5665;
  double t5659;
  double t5666;
  double t5667;
  double t5670;
  double t5678;
  double t5686;
  double t5669;
  double t5703;
  double t5705;
  double t5710;
  double t5716;
  double t5719;
  double t5355;
  double t5381;
  double t5383;
  double t5385;
  double t5391;
  double t5396;
  double t5579;
  double t5586;
  double t5591;
  double t5596;
  double t5597;
  double t5609;
  double t5706;
  double t5720;
  double t5725;
  double t5737;
  double t5738;
  double t5740;
  double t5783;
  double t5785;
  double t5837;
  double t5842;
  double t5891;
  double t5892;
  double t5977;
  double t5978;
  double t6017;
  double t6025;
  double t6051;
  double t6052;
  double t5800;
  double t5801;
  double t5787;
  double t5789;
  double t5796;
  double t5808;
  double t5811;
  double t5812;
  double t5817;
  double t5820;
  double t5824;
  double t5825;
  double t5826;
  double t5832;
  double t5833;
  double t5844;
  double t5845;
  double t5846;
  double t5851;
  double t5853;
  double t5858;
  double t5875;
  double t5883;
  double t5884;
  double t5894;
  double t5895;
  double t5911;
  double t5955;
  double t5959;
  double t5967;
  double t5981;
  double t5982;
  double t5983;
  double t5989;
  double t5990;
  double t5997;
  double t6026;
  double t6027;
  double t6033;
  double t6041;
  double t6042;
  double t6045;
  double t6053;
  double t6058;
  double t6062;
  double t6064;
  double t6065;
  double t6072;
  t537 = Cos(var1[4]);
  t2604 = Cos(var1[14]);
  t1212 = Sin(var1[4]);
  t1207 = Sin(var1[14]);
  t2608 = Sin(var1[5]);
  t544 = Sin(var1[16]);
  t541 = Cos(var1[5]);
  t917 = Cos(var1[16]);
  t923 = Cos(var1[15]);
  t4612 = Sin(var1[3]);
  t4642 = Cos(var1[3]);
  t4059 = Sin(var1[15]);
  t4769 = t4642*t541;
  t4811 = -1.*t4612*t1212*t2608;
  t4821 = t4769 + t4811;
  t4936 = t541*t4612;
  t4955 = t4642*t1212*t2608;
  t4980 = t4936 + t4955;
  t1313 = t1207*t1212;
  t3552 = -1.*t2604*t537*t2608;
  t3780 = t1313 + t3552;
  t4164 = t2604*t1212;
  t4226 = t537*t1207*t2608;
  t4521 = t4164 + t4226;
  t3973 = t923*t3780;
  t4581 = t4059*t4521;
  t4585 = t3973 + t4581;
  t5103 = Cos(var1[17]);
  t5084 = -1.*t4059*t3780;
  t5087 = t923*t4521;
  t5097 = t5084 + t5087;
  t5083 = Sin(var1[17]);
  t5107 = t917*t537*t541;
  t5111 = t544*t4585;
  t5118 = t5107 + t5111;
  t5188 = Cos(var1[18]);
  t5099 = t5083*t5097;
  t5173 = t5103*t5118;
  t5179 = t5099 + t5173;
  t5065 = Sin(var1[18]);
  t5192 = t5103*t5097;
  t5204 = -1.*t5083*t5118;
  t5219 = t5192 + t5204;
  t5259 = Cos(var1[19]);
  t5186 = -1.*t5065*t5179;
  t5222 = t5188*t5219;
  t5226 = t5186 + t5222;
  t5041 = Sin(var1[19]);
  t5260 = t5188*t5179;
  t5263 = t5065*t5219;
  t5295 = t5260 + t5263;
  t5319 = Cos(var1[20]);
  t5242 = t5041*t5226;
  t5305 = t5259*t5295;
  t5306 = t5242 + t5305;
  t5034 = Sin(var1[20]);
  t5320 = t5259*t5226;
  t5327 = -1.*t5041*t5295;
  t5329 = t5320 + t5327;
  t5363 = Cos(var1[21]);
  t5315 = -1.*t5034*t5306;
  t5334 = t5319*t5329;
  t5337 = t5315 + t5334;
  t5019 = Sin(var1[21]);
  t5372 = t5319*t5306;
  t5379 = t5034*t5329;
  t5380 = t5372 + t5379;
  t4761 = -1.*t537*t1207*t4612;
  t4827 = t2604*t4821;
  t4852 = t4761 + t4827;
  t4866 = -1.*t2604*t537*t4612;
  t4867 = -1.*t1207*t4821;
  t4887 = t4866 + t4867;
  t4628 = t541*t4612*t1212;
  t4644 = t4642*t2608;
  t4687 = t4628 + t4644;
  t4862 = t923*t4852;
  t4898 = t4059*t4887;
  t4904 = t4862 + t4898;
  t5419 = -1.*t4059*t4852;
  t5423 = t923*t4887;
  t5429 = t5419 + t5423;
  t5451 = t917*t4687;
  t5457 = t544*t4904;
  t5461 = t5451 + t5457;
  t5441 = t5083*t5429;
  t5474 = t5103*t5461;
  t5478 = t5441 + t5474;
  t5486 = t5103*t5429;
  t5488 = -1.*t5083*t5461;
  t5502 = t5486 + t5488;
  t5483 = -1.*t5065*t5478;
  t5513 = t5188*t5502;
  t5515 = t5483 + t5513;
  t5528 = t5188*t5478;
  t5529 = t5065*t5502;
  t5530 = t5528 + t5529;
  t5516 = t5041*t5515;
  t5534 = t5259*t5530;
  t5544 = t5516 + t5534;
  t5550 = t5259*t5515;
  t5551 = -1.*t5041*t5530;
  t5560 = t5550 + t5551;
  t5547 = -1.*t5034*t5544;
  t5564 = t5319*t5560;
  t5577 = t5547 + t5564;
  t5580 = t5319*t5544;
  t5581 = t5034*t5560;
  t5582 = t5580 + t5581;
  t4932 = t4642*t537*t1207;
  t4986 = t2604*t4980;
  t4987 = t4932 + t4986;
  t4992 = t2604*t4642*t537;
  t5000 = -1.*t1207*t4980;
  t5005 = t4992 + t5000;
  t4920 = -1.*t4642*t541*t1212;
  t4922 = t4612*t2608;
  t4923 = t4920 + t4922;
  t4989 = t923*t4987;
  t5006 = t4059*t5005;
  t5007 = t4989 + t5006;
  t5620 = -1.*t4059*t4987;
  t5621 = t923*t5005;
  t5626 = t5620 + t5621;
  t5631 = t917*t4923;
  t5634 = t544*t5007;
  t5636 = t5631 + t5634;
  t5630 = t5083*t5626;
  t5638 = t5103*t5636;
  t5640 = t5630 + t5638;
  t5643 = t5103*t5626;
  t5644 = -1.*t5083*t5636;
  t5647 = t5643 + t5644;
  t5642 = -1.*t5065*t5640;
  t5652 = t5188*t5647;
  t5655 = t5642 + t5652;
  t5662 = t5188*t5640;
  t5663 = t5065*t5647;
  t5665 = t5662 + t5663;
  t5659 = t5041*t5655;
  t5666 = t5259*t5665;
  t5667 = t5659 + t5666;
  t5670 = t5259*t5655;
  t5678 = -1.*t5041*t5665;
  t5686 = t5670 + t5678;
  t5669 = -1.*t5034*t5667;
  t5703 = t5319*t5686;
  t5705 = t5669 + t5703;
  t5710 = t5319*t5667;
  t5716 = t5034*t5686;
  t5719 = t5710 + t5716;
  t5355 = t5019*t5337;
  t5381 = t5363*t5380;
  t5383 = t5355 + t5381;
  t5385 = t5363*t5337;
  t5391 = -1.*t5019*t5380;
  t5396 = t5385 + t5391;
  t5579 = t5019*t5577;
  t5586 = t5363*t5582;
  t5591 = t5579 + t5586;
  t5596 = t5363*t5577;
  t5597 = -1.*t5019*t5582;
  t5609 = t5596 + t5597;
  t5706 = t5019*t5705;
  t5720 = t5363*t5719;
  t5725 = t5706 + t5720;
  t5737 = t5363*t5705;
  t5738 = -1.*t5019*t5719;
  t5740 = t5737 + t5738;
  t5783 = -1.*t917;
  t5785 = 1. + t5783;
  t5837 = -1.*t5103;
  t5842 = 1. + t5837;
  t5891 = -1.*t5188;
  t5892 = 1. + t5891;
  t5977 = -1.*t5259;
  t5978 = 1. + t5977;
  t6017 = -1.*t5319;
  t6025 = 1. + t6017;
  t6051 = -1.*t5363;
  t6052 = 1. + t6051;
  t5800 = 0.135*t1207;
  t5801 = 0. + t5800;
  t5787 = -0.049*t5785;
  t5789 = -0.135*t544;
  t5796 = 0. + t5787 + t5789;
  t5808 = -1.*t2604;
  t5811 = 1. + t5808;
  t5812 = -0.135*t5811;
  t5817 = 0. + t5812;
  t5820 = -1.*t923;
  t5824 = 1. + t5820;
  t5825 = -0.135*t5824;
  t5826 = 0. + t5825;
  t5832 = 0.135*t4059;
  t5833 = 0. + t5832;
  t5844 = -0.09*t5842;
  t5845 = 0.049*t5083;
  t5846 = 0. + t5844 + t5845;
  t5851 = -0.135*t5785;
  t5853 = 0.049*t544;
  t5858 = 0. + t5851 + t5853;
  t5875 = -0.049*t5842;
  t5883 = -0.09*t5083;
  t5884 = 0. + t5875 + t5883;
  t5894 = -0.049*t5892;
  t5895 = -0.21*t5065;
  t5911 = 0. + t5894 + t5895;
  t5955 = -0.21*t5892;
  t5959 = 0.049*t5065;
  t5967 = 0. + t5955 + t5959;
  t5981 = -0.2707*t5978;
  t5982 = 0.0016*t5041;
  t5983 = 0. + t5981 + t5982;
  t5989 = -0.0016*t5978;
  t5990 = -0.2707*t5041;
  t5997 = 0. + t5989 + t5990;
  t6026 = 0.0184*t6025;
  t6027 = -0.7055*t5034;
  t6033 = 0. + t6026 + t6027;
  t6041 = -0.7055*t6025;
  t6042 = -0.0184*t5034;
  t6045 = 0. + t6041 + t6042;
  t6053 = -1.1135*t6052;
  t6058 = 0.0216*t5019;
  t6062 = 0. + t6053 + t6058;
  t6064 = -0.0216*t6052;
  t6065 = -1.1135*t5019;
  t6072 = 0. + t6064 + t6065;
  p_output1[0]=t537*t541*t544 - 1.*t4585*t917;
  p_output1[1]=t4687*t544 - 1.*t4904*t917;
  p_output1[2]=t4923*t544 - 1.*t5007*t917;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t5383 + 0.766044*t5396;
  p_output1[5]=0.642788*t5591 + 0.766044*t5609;
  p_output1[6]=0.642788*t5725 + 0.766044*t5740;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t5383 + 0.642788*t5396;
  p_output1[9]=-0.766044*t5591 + 0.642788*t5609;
  p_output1[10]=-0.766044*t5725 + 0.642788*t5740;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t5383 - 1.1312*t5396 + t537*t541*t5796 + t1212*t5801 - 1.*t2608*t537*t5817 + t3780*t5826 + t4521*t5833 + t5097*t5846 + t4585*t5858 + t5118*t5884 + t5179*t5911 + t5219*t5967 + t5226*t5983 + t5295*t5997 + t5306*t6033 + t5329*t6045 + t5337*t6062 + t5380*t6072 - 0.1305*(-1.*t537*t541*t544 + t4585*t917) + var1[0];
  p_output1[13]=0. + 0.0306*t5591 - 1.1312*t5609 + t4687*t5796 - 1.*t4612*t537*t5801 + t4821*t5817 + t4852*t5826 + t4887*t5833 + t5429*t5846 + t4904*t5858 + t5461*t5884 + t5478*t5911 + t5502*t5967 + t5515*t5983 + t5530*t5997 + t5544*t6033 + t5560*t6045 + t5577*t6062 + t5582*t6072 - 0.1305*(-1.*t4687*t544 + t4904*t917) + var1[1];
  p_output1[14]=0. + 0.0306*t5725 - 1.1312*t5740 + t4923*t5796 + t4642*t537*t5801 + t4980*t5817 + t4987*t5826 + t5005*t5833 + t5626*t5846 + t5007*t5858 + t5636*t5884 + t5640*t5911 + t5647*t5967 + t5655*t5983 + t5665*t5997 + t5667*t6033 + t5686*t6045 + t5705*t6062 + t5719*t6072 - 0.1305*(-1.*t4923*t544 + t5007*t917) + var1[2];
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

#include "H_RightToeBottom.hh"

namespace SymExpression
{

void H_RightToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
