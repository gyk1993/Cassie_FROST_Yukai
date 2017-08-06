/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:28 GMT-04:00
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
  double t4164;
  double t1197;
  double t4521;
  double t1279;
  double t4628;
  double t803;
  double t4774;
  double t4862;
  double t4887;
  double t1297;
  double t4644;
  double t4676;
  double t4898;
  double t4932;
  double t4769;
  double t4911;
  double t4922;
  double t789;
  double t4989;
  double t5005;
  double t5006;
  double t5010;
  double t5087;
  double t5097;
  double t5099;
  double t5107;
  double t5222;
  double t5301;
  double t4925;
  double t5242;
  double t5260;
  double t691;
  double t5320;
  double t5329;
  double t5334;
  double t5379;
  double t5263;
  double t5337;
  double t5355;
  double t670;
  double t5381;
  double t5383;
  double t5384;
  double t5423;
  double t5372;
  double t5385;
  double t5396;
  double t430;
  double t5457;
  double t5486;
  double t5502;
  double t426;
  double t5591;
  double t5609;
  double t5618;
  double t5621;
  double t5622;
  double t5634;
  double t5638;
  double t5643;
  double t5596;
  double t5626;
  double t5630;
  double t5631;
  double t5652;
  double t5663;
  double t5686;
  double t5703;
  double t5705;
  double t5710;
  double t5716;
  double t5720;
  double t5725;
  double t5734;
  double t5740;
  double t5670;
  double t5745;
  double t5764;
  double t5771;
  double t5778;
  double t5787;
  double t5769;
  double t5789;
  double t5796;
  double t5800;
  double t5805;
  double t5818;
  double t5529;
  double t5798;
  double t5825;
  double t5826;
  double t5832;
  double t5833;
  double t5836;
  double t5895;
  double t5911;
  double t5955;
  double t5982;
  double t5983;
  double t5984;
  double t5894;
  double t5959;
  double t5967;
  double t5976;
  double t5990;
  double t5997;
  double t6026;
  double t6027;
  double t6033;
  double t6035;
  double t6042;
  double t6045;
  double t6050;
  double t6058;
  double t6062;
  double t6005;
  double t6064;
  double t6065;
  double t6074;
  double t6075;
  double t6076;
  double t6073;
  double t6080;
  double t6092;
  double t6098;
  double t6101;
  double t6110;
  double t6096;
  double t6121;
  double t6122;
  double t6146;
  double t6147;
  double t6149;
  double t5399;
  double t5513;
  double t5515;
  double t5534;
  double t5550;
  double t5560;
  double t5830;
  double t5844;
  double t5845;
  double t5851;
  double t5862;
  double t5865;
  double t6139;
  double t6173;
  double t6174;
  double t6185;
  double t6188;
  double t6190;
  double t6400;
  double t6401;
  double t6374;
  double t6378;
  double t6544;
  double t6548;
  double t6565;
  double t6566;
  double t6602;
  double t6610;
  double t6653;
  double t6657;
  double t5528;
  double t5577;
  double t5579;
  double t6313;
  double t6316;
  double t6317;
  double t6318;
  double t6324;
  double t6327;
  double t6338;
  double t6340;
  double t6344;
  double t6348;
  double t6359;
  double t6364;
  double t6386;
  double t6387;
  double t6390;
  double t6402;
  double t6408;
  double t6409;
  double t6440;
  double t6442;
  double t6447;
  double t6530;
  double t6531;
  double t6537;
  double t6550;
  double t6551;
  double t6552;
  double t6554;
  double t6557;
  double t6558;
  double t6568;
  double t6577;
  double t6580;
  double t6583;
  double t6585;
  double t6597;
  double t6618;
  double t6619;
  double t6622;
  double t6624;
  double t6629;
  double t6637;
  double t6660;
  double t6683;
  double t6714;
  double t6733;
  double t6748;
  double t6755;
  double t5846;
  double t5868;
  double t5883;
  double t6177;
  double t6206;
  double t6215;
  t4164 = Cos(var1[4]);
  t1197 = Cos(var1[6]);
  t4521 = Sin(var1[5]);
  t1279 = Sin(var1[4]);
  t4628 = Sin(var1[6]);
  t803 = Cos(var1[7]);
  t4774 = -1.*t4164*t1197*t4521;
  t4862 = t1279*t4628;
  t4887 = t4774 + t4862;
  t1297 = t1197*t1279;
  t4644 = t4164*t4521*t4628;
  t4676 = t1297 + t4644;
  t4898 = Sin(var1[7]);
  t4932 = Cos(var1[9]);
  t4769 = t803*t4676;
  t4911 = -1.*t4887*t4898;
  t4922 = t4769 + t4911;
  t789 = Sin(var1[9]);
  t4989 = Cos(var1[5]);
  t5005 = Cos(var1[8]);
  t5006 = t4164*t4989*t5005;
  t5010 = t803*t4887;
  t5087 = t4676*t4898;
  t5097 = t5010 + t5087;
  t5099 = Sin(var1[8]);
  t5107 = t5097*t5099;
  t5222 = t5006 + t5107;
  t5301 = Cos(var1[10]);
  t4925 = t789*t4922;
  t5242 = t4932*t5222;
  t5260 = t4925 + t5242;
  t691 = Sin(var1[10]);
  t5320 = t4932*t4922;
  t5329 = -1.*t789*t5222;
  t5334 = t5320 + t5329;
  t5379 = Cos(var1[11]);
  t5263 = -1.*t691*t5260;
  t5337 = t5301*t5334;
  t5355 = t5263 + t5337;
  t670 = Sin(var1[11]);
  t5381 = t5301*t5260;
  t5383 = t691*t5334;
  t5384 = t5381 + t5383;
  t5423 = Cos(var1[12]);
  t5372 = t670*t5355;
  t5385 = t5379*t5384;
  t5396 = t5372 + t5385;
  t430 = Sin(var1[12]);
  t5457 = t5379*t5355;
  t5486 = -1.*t670*t5384;
  t5502 = t5457 + t5486;
  t426 = Sin(var1[13]);
  t5591 = Sin(var1[3]);
  t5609 = Cos(var1[3]);
  t5618 = t5609*t4989;
  t5621 = -1.*t5591*t1279*t4521;
  t5622 = t5618 + t5621;
  t5634 = t1197*t5622;
  t5638 = -1.*t4164*t5591*t4628;
  t5643 = t5634 + t5638;
  t5596 = -1.*t4164*t1197*t5591;
  t5626 = -1.*t5622*t4628;
  t5630 = t5596 + t5626;
  t5631 = t803*t5630;
  t5652 = -1.*t5643*t4898;
  t5663 = t5631 + t5652;
  t5686 = t4989*t5591*t1279;
  t5703 = t5609*t4521;
  t5705 = t5686 + t5703;
  t5710 = t5005*t5705;
  t5716 = t803*t5643;
  t5720 = t5630*t4898;
  t5725 = t5716 + t5720;
  t5734 = t5725*t5099;
  t5740 = t5710 + t5734;
  t5670 = t789*t5663;
  t5745 = t4932*t5740;
  t5764 = t5670 + t5745;
  t5771 = t4932*t5663;
  t5778 = -1.*t789*t5740;
  t5787 = t5771 + t5778;
  t5769 = -1.*t691*t5764;
  t5789 = t5301*t5787;
  t5796 = t5769 + t5789;
  t5800 = t5301*t5764;
  t5805 = t691*t5787;
  t5818 = t5800 + t5805;
  t5529 = Cos(var1[13]);
  t5798 = t670*t5796;
  t5825 = t5379*t5818;
  t5826 = t5798 + t5825;
  t5832 = t5379*t5796;
  t5833 = -1.*t670*t5818;
  t5836 = t5832 + t5833;
  t5895 = t4989*t5591;
  t5911 = t5609*t1279*t4521;
  t5955 = t5895 + t5911;
  t5982 = t1197*t5955;
  t5983 = t5609*t4164*t4628;
  t5984 = t5982 + t5983;
  t5894 = t5609*t4164*t1197;
  t5959 = -1.*t5955*t4628;
  t5967 = t5894 + t5959;
  t5976 = t803*t5967;
  t5990 = -1.*t5984*t4898;
  t5997 = t5976 + t5990;
  t6026 = -1.*t5609*t4989*t1279;
  t6027 = t5591*t4521;
  t6033 = t6026 + t6027;
  t6035 = t5005*t6033;
  t6042 = t803*t5984;
  t6045 = t5967*t4898;
  t6050 = t6042 + t6045;
  t6058 = t6050*t5099;
  t6062 = t6035 + t6058;
  t6005 = t789*t5997;
  t6064 = t4932*t6062;
  t6065 = t6005 + t6064;
  t6074 = t4932*t5997;
  t6075 = -1.*t789*t6062;
  t6076 = t6074 + t6075;
  t6073 = -1.*t691*t6065;
  t6080 = t5301*t6076;
  t6092 = t6073 + t6080;
  t6098 = t5301*t6065;
  t6101 = t691*t6076;
  t6110 = t6098 + t6101;
  t6096 = t670*t6092;
  t6121 = t5379*t6110;
  t6122 = t6096 + t6121;
  t6146 = t5379*t6092;
  t6147 = -1.*t670*t6110;
  t6149 = t6146 + t6147;
  t5399 = -1.*t430*t5396;
  t5513 = t5423*t5502;
  t5515 = t5399 + t5513;
  t5534 = t5423*t5396;
  t5550 = t430*t5502;
  t5560 = t5534 + t5550;
  t5830 = -1.*t430*t5826;
  t5844 = t5423*t5836;
  t5845 = t5830 + t5844;
  t5851 = t5423*t5826;
  t5862 = t430*t5836;
  t5865 = t5851 + t5862;
  t6139 = -1.*t430*t6122;
  t6173 = t5423*t6149;
  t6174 = t6139 + t6173;
  t6185 = t5423*t6122;
  t6188 = t430*t6149;
  t6190 = t6185 + t6188;
  t6400 = -1.*t5005;
  t6401 = 1. + t6400;
  t6374 = -1.*t4932;
  t6378 = 1. + t6374;
  t6544 = -1.*t5301;
  t6548 = 1. + t6544;
  t6565 = -1.*t5379;
  t6566 = 1. + t6565;
  t6602 = -1.*t5423;
  t6610 = 1. + t6602;
  t6653 = -1.*t5529;
  t6657 = 1. + t6653;
  t5528 = t426*t5515;
  t5577 = t5529*t5560;
  t5579 = t5528 + t5577;
  t6313 = -1.*t1197;
  t6316 = 1. + t6313;
  t6317 = 0.135*t6316;
  t6318 = 0. + t6317;
  t6324 = -0.135*t4628;
  t6327 = 0. + t6324;
  t6338 = -1.*t803;
  t6340 = 1. + t6338;
  t6344 = 0.135*t6340;
  t6348 = 0. + t6344;
  t6359 = -0.135*t4898;
  t6364 = 0. + t6359;
  t6386 = -0.09*t6378;
  t6387 = 0.049*t789;
  t6390 = 0. + t6386 + t6387;
  t6402 = 0.135*t6401;
  t6408 = 0.049*t5099;
  t6409 = 0. + t6402 + t6408;
  t6440 = -0.049*t6401;
  t6442 = 0.135*t5099;
  t6447 = 0. + t6440 + t6442;
  t6530 = -0.049*t6378;
  t6531 = -0.09*t789;
  t6537 = 0. + t6530 + t6531;
  t6550 = -0.049*t6548;
  t6551 = -0.21*t691;
  t6552 = 0. + t6550 + t6551;
  t6554 = -0.21*t6548;
  t6557 = 0.049*t691;
  t6558 = 0. + t6554 + t6557;
  t6568 = -0.2707*t6566;
  t6577 = 0.0016*t670;
  t6580 = 0. + t6568 + t6577;
  t6583 = -0.0016*t6566;
  t6585 = -0.2707*t670;
  t6597 = 0. + t6583 + t6585;
  t6618 = 0.0184*t6610;
  t6619 = -0.7055*t430;
  t6622 = 0. + t6618 + t6619;
  t6624 = -0.7055*t6610;
  t6629 = -0.0184*t430;
  t6637 = 0. + t6624 + t6629;
  t6660 = -1.1135*t6657;
  t6683 = 0.0216*t426;
  t6714 = 0. + t6660 + t6683;
  t6733 = -0.0216*t6657;
  t6748 = -1.1135*t426;
  t6755 = 0. + t6733 + t6748;
  t5846 = t426*t5845;
  t5868 = t5529*t5865;
  t5883 = t5846 + t5868;
  t6177 = t426*t6174;
  t6206 = t5529*t6190;
  t6215 = t6177 + t6206;
  p_output1[0]=t5579;
  p_output1[1]=t5883;
  p_output1[2]=t6215;
  p_output1[3]=0.;
  p_output1[4]=-1.*t5005*t5097 + t4164*t4989*t5099;
  p_output1[5]=t5099*t5705 - 1.*t5005*t5725;
  p_output1[6]=t5099*t6033 - 1.*t5005*t6050;
  p_output1[7]=0.;
  p_output1[8]=-1.*t5515*t5529 + t426*t5560;
  p_output1[9]=-1.*t5529*t5845 + t426*t5865;
  p_output1[10]=-1.*t5529*t6174 + t426*t6190;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t5005*t5097 - 1.*t4164*t4989*t5099) - 1.193387*(t5515*t5529 - 1.*t426*t5560) - 0.0216*t5579 - 1.*t4164*t4521*t6318 + t1279*t6327 + t4887*t6348 + t4676*t6364 + t4922*t6390 + t5097*t6409 + t4164*t4989*t6447 + t5222*t6537 + t5260*t6552 + t5334*t6558 + t5355*t6580 + t5384*t6597 + t5396*t6622 + t5502*t6637 + t5515*t6714 + t5560*t6755 + var1[0];
  p_output1[13]=0. + 0.1305*(-1.*t5099*t5705 + t5005*t5725) - 1.193387*(t5529*t5845 - 1.*t426*t5865) - 0.0216*t5883 + t5622*t6318 - 1.*t4164*t5591*t6327 + t5643*t6348 + t5630*t6364 + t5663*t6390 + t5725*t6409 + t5705*t6447 + t5740*t6537 + t5764*t6552 + t5787*t6558 + t5796*t6580 + t5818*t6597 + t5826*t6622 + t5836*t6637 + t5845*t6714 + t5865*t6755 + var1[1];
  p_output1[14]=0. + 0.1305*(-1.*t5099*t6033 + t5005*t6050) - 1.193387*(t5529*t6174 - 1.*t426*t6190) - 0.0216*t6215 + t5955*t6318 + t4164*t5609*t6327 + t5984*t6348 + t5967*t6364 + t5997*t6390 + t6050*t6409 + t6033*t6447 + t6062*t6537 + t6065*t6552 + t6076*t6558 + t6092*t6580 + t6110*t6597 + t6122*t6622 + t6149*t6637 + t6174*t6714 + t6190*t6755 + var1[2];
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

#include "H_LeftToeBottomBack.hh"

namespace SymExpression
{

void H_LeftToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
