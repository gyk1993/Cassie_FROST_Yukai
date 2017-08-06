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
  double t794;
  double t976;
  double t1291;
  double t1313;
  double t3973;
  double t4581;
  double t4887;
  double t4898;
  double t4911;
  double t4709;
  double t4769;
  double t4827;
  double t4919;
  double t5173;
  double t5192;
  double t5219;
  double t5226;
  double t5099;
  double t5107;
  double t5111;
  double t5305;
  double t4936;
  double t4955;
  double t4986;
  double t4992;
  double t5010;
  double t5015;
  double t5087;
  double t5396;
  double t5399;
  double t5407;
  double t5429;
  double t5441;
  double t5451;
  double t5474;
  double t5513;
  double t5515;
  double t5516;
  double t5560;
  double t5564;
  double t5577;
  double t5580;
  double t5581;
  double t5586;
  double t5593;
  double t5612;
  double t5618;
  double t5621;
  double t5638;
  double t5643;
  double t5647;
  double t5655;
  double t5659;
  double t5662;
  double t5666;
  double t5703;
  double t5705;
  double t5706;
  double t5734;
  double t5737;
  double t5740;
  double t5748;
  double t5749;
  double t5756;
  double t5768;
  double t5773;
  double t5778;
  double t5780;
  double t5800;
  double t5805;
  double t5812;
  double t983;
  double t1142;
  double t1197;
  double t1271;
  double t5853;
  double t4164;
  double t4226;
  double t4599;
  double t4603;
  double t4628;
  double t4644;
  double t5849;
  double t5851;
  double t5858;
  double t5861;
  double t4922;
  double t4925;
  double t4989;
  double t5005;
  double t5006;
  double t5884;
  double t5887;
  double t5894;
  double t5868;
  double t5872;
  double t5875;
  double t5222;
  double t5242;
  double t5260;
  double t5320;
  double t5329;
  double t5334;
  double t5967;
  double t5976;
  double t5981;
  double t5983;
  double t5984;
  double t5989;
  double t5383;
  double t5384;
  double t5385;
  double t5457;
  double t5486;
  double t5502;
  double t5911;
  double t5925;
  double t5955;
  double t6033;
  double t6035;
  double t6041;
  double t5529;
  double t5534;
  double t5550;
  double t5591;
  double t5596;
  double t5609;
  double t6045;
  double t6050;
  double t6053;
  double t6062;
  double t6063;
  double t6064;
  double t5630;
  double t5631;
  double t5634;
  double t5663;
  double t5670;
  double t5686;
  double t6072;
  double t6073;
  double t6074;
  double t6076;
  double t6080;
  double t6084;
  double t5716;
  double t5720;
  double t5725;
  double t5764;
  double t5769;
  double t5771;
  double t6096;
  double t6098;
  double t6100;
  double t6110;
  double t6115;
  double t6121;
  double t5789;
  double t5796;
  double t5798;
  double t6126;
  double t6139;
  double t6141;
  double t6147;
  double t6149;
  double t6165;
  double t6240;
  double t6251;
  double t6261;
  double t6286;
  double t6287;
  double t6289;
  double t6274;
  double t6276;
  double t6278;
  double t6297;
  double t6304;
  double t6305;
  double t6307;
  double t6313;
  double t6314;
  double t6292;
  double t6293;
  double t6294;
  double t6327;
  double t6329;
  double t6334;
  double t6340;
  double t6344;
  double t6346;
  double t6357;
  double t6358;
  double t6364;
  double t6368;
  double t6374;
  double t6378;
  double t6387;
  double t6393;
  double t6396;
  double t6401;
  double t6402;
  double t6407;
  double t6409;
  double t6418;
  double t6424;
  double t6441;
  double t6442;
  double t6443;
  double t6448;
  double t6464;
  double t6483;
  t794 = Cos(var1[4]);
  t976 = Cos(var1[6]);
  t1291 = Sin(var1[5]);
  t1313 = Sin(var1[4]);
  t3973 = Sin(var1[6]);
  t4581 = Cos(var1[7]);
  t4887 = t976*t1313;
  t4898 = t794*t1291*t3973;
  t4911 = t4887 + t4898;
  t4709 = -1.*t794*t976*t1291;
  t4769 = t1313*t3973;
  t4827 = t4709 + t4769;
  t4919 = Sin(var1[7]);
  t5173 = Cos(var1[8]);
  t5192 = -1.*t5173;
  t5219 = 1. + t5192;
  t5226 = Sin(var1[8]);
  t5099 = t4581*t4827;
  t5107 = t4911*t4919;
  t5111 = t5099 + t5107;
  t5305 = Cos(var1[5]);
  t4936 = Cos(var1[9]);
  t4955 = -1.*t4936;
  t4986 = 1. + t4955;
  t4992 = Sin(var1[9]);
  t5010 = t4581*t4911;
  t5015 = -1.*t4827*t4919;
  t5087 = t5010 + t5015;
  t5396 = t794*t5305*t5173;
  t5399 = t5111*t5226;
  t5407 = t5396 + t5399;
  t5429 = Cos(var1[10]);
  t5441 = -1.*t5429;
  t5451 = 1. + t5441;
  t5474 = Sin(var1[10]);
  t5513 = t4992*t5087;
  t5515 = t4936*t5407;
  t5516 = t5513 + t5515;
  t5560 = t4936*t5087;
  t5564 = -1.*t4992*t5407;
  t5577 = t5560 + t5564;
  t5580 = Cos(var1[11]);
  t5581 = -1.*t5580;
  t5586 = 1. + t5581;
  t5593 = Sin(var1[11]);
  t5612 = -1.*t5474*t5516;
  t5618 = t5429*t5577;
  t5621 = t5612 + t5618;
  t5638 = t5429*t5516;
  t5643 = t5474*t5577;
  t5647 = t5638 + t5643;
  t5655 = Cos(var1[12]);
  t5659 = -1.*t5655;
  t5662 = 1. + t5659;
  t5666 = Sin(var1[12]);
  t5703 = t5593*t5621;
  t5705 = t5580*t5647;
  t5706 = t5703 + t5705;
  t5734 = t5580*t5621;
  t5737 = -1.*t5593*t5647;
  t5740 = t5734 + t5737;
  t5748 = Cos(var1[13]);
  t5749 = -1.*t5748;
  t5756 = 1. + t5749;
  t5768 = Sin(var1[13]);
  t5773 = -1.*t5666*t5706;
  t5778 = t5655*t5740;
  t5780 = t5773 + t5778;
  t5800 = t5655*t5706;
  t5805 = t5666*t5740;
  t5812 = t5800 + t5805;
  t983 = -1.*t976;
  t1142 = 1. + t983;
  t1197 = 0.135*t1142;
  t1271 = 0. + t1197;
  t5853 = Sin(var1[3]);
  t4164 = -0.135*t3973;
  t4226 = 0. + t4164;
  t4599 = -1.*t4581;
  t4603 = 1. + t4599;
  t4628 = 0.135*t4603;
  t4644 = 0. + t4628;
  t5849 = Cos(var1[3]);
  t5851 = t5849*t5305;
  t5858 = -1.*t5853*t1313*t1291;
  t5861 = t5851 + t5858;
  t4922 = -0.135*t4919;
  t4925 = 0. + t4922;
  t4989 = -0.09*t4986;
  t5005 = 0.049*t4992;
  t5006 = 0. + t4989 + t5005;
  t5884 = -1.*t794*t976*t5853;
  t5887 = -1.*t5861*t3973;
  t5894 = t5884 + t5887;
  t5868 = t976*t5861;
  t5872 = -1.*t794*t5853*t3973;
  t5875 = t5868 + t5872;
  t5222 = 0.135*t5219;
  t5242 = 0.049*t5226;
  t5260 = 0. + t5222 + t5242;
  t5320 = -0.049*t5219;
  t5329 = 0.135*t5226;
  t5334 = 0. + t5320 + t5329;
  t5967 = t4581*t5875;
  t5976 = t5894*t4919;
  t5981 = t5967 + t5976;
  t5983 = t5305*t5853*t1313;
  t5984 = t5849*t1291;
  t5989 = t5983 + t5984;
  t5383 = -0.049*t4986;
  t5384 = -0.09*t4992;
  t5385 = 0. + t5383 + t5384;
  t5457 = -0.049*t5451;
  t5486 = -0.21*t5474;
  t5502 = 0. + t5457 + t5486;
  t5911 = t4581*t5894;
  t5925 = -1.*t5875*t4919;
  t5955 = t5911 + t5925;
  t6033 = t5173*t5989;
  t6035 = t5981*t5226;
  t6041 = t6033 + t6035;
  t5529 = -0.21*t5451;
  t5534 = 0.049*t5474;
  t5550 = 0. + t5529 + t5534;
  t5591 = -0.2707*t5586;
  t5596 = 0.0016*t5593;
  t5609 = 0. + t5591 + t5596;
  t6045 = t4992*t5955;
  t6050 = t4936*t6041;
  t6053 = t6045 + t6050;
  t6062 = t4936*t5955;
  t6063 = -1.*t4992*t6041;
  t6064 = t6062 + t6063;
  t5630 = -0.0016*t5586;
  t5631 = -0.2707*t5593;
  t5634 = 0. + t5630 + t5631;
  t5663 = 0.0184*t5662;
  t5670 = -0.7055*t5666;
  t5686 = 0. + t5663 + t5670;
  t6072 = -1.*t5474*t6053;
  t6073 = t5429*t6064;
  t6074 = t6072 + t6073;
  t6076 = t5429*t6053;
  t6080 = t5474*t6064;
  t6084 = t6076 + t6080;
  t5716 = -0.7055*t5662;
  t5720 = -0.0184*t5666;
  t5725 = 0. + t5716 + t5720;
  t5764 = -1.1135*t5756;
  t5769 = 0.0216*t5768;
  t5771 = 0. + t5764 + t5769;
  t6096 = t5593*t6074;
  t6098 = t5580*t6084;
  t6100 = t6096 + t6098;
  t6110 = t5580*t6074;
  t6115 = -1.*t5593*t6084;
  t6121 = t6110 + t6115;
  t5789 = -0.0216*t5756;
  t5796 = -1.1135*t5768;
  t5798 = 0. + t5789 + t5796;
  t6126 = -1.*t5666*t6100;
  t6139 = t5655*t6121;
  t6141 = t6126 + t6139;
  t6147 = t5655*t6100;
  t6149 = t5666*t6121;
  t6165 = t6147 + t6149;
  t6240 = t5305*t5853;
  t6251 = t5849*t1313*t1291;
  t6261 = t6240 + t6251;
  t6286 = t5849*t794*t976;
  t6287 = -1.*t6261*t3973;
  t6289 = t6286 + t6287;
  t6274 = t976*t6261;
  t6276 = t5849*t794*t3973;
  t6278 = t6274 + t6276;
  t6297 = t4581*t6278;
  t6304 = t6289*t4919;
  t6305 = t6297 + t6304;
  t6307 = -1.*t5849*t5305*t1313;
  t6313 = t5853*t1291;
  t6314 = t6307 + t6313;
  t6292 = t4581*t6289;
  t6293 = -1.*t6278*t4919;
  t6294 = t6292 + t6293;
  t6327 = t5173*t6314;
  t6329 = t6305*t5226;
  t6334 = t6327 + t6329;
  t6340 = t4992*t6294;
  t6344 = t4936*t6334;
  t6346 = t6340 + t6344;
  t6357 = t4936*t6294;
  t6358 = -1.*t4992*t6334;
  t6364 = t6357 + t6358;
  t6368 = -1.*t5474*t6346;
  t6374 = t5429*t6364;
  t6378 = t6368 + t6374;
  t6387 = t5429*t6346;
  t6393 = t5474*t6364;
  t6396 = t6387 + t6393;
  t6401 = t5593*t6378;
  t6402 = t5580*t6396;
  t6407 = t6401 + t6402;
  t6409 = t5580*t6378;
  t6418 = -1.*t5593*t6396;
  t6424 = t6409 + t6418;
  t6441 = -1.*t5666*t6407;
  t6442 = t5655*t6424;
  t6443 = t6441 + t6442;
  t6448 = t5655*t6407;
  t6464 = t5666*t6424;
  t6483 = t6448 + t6464;
  p_output1[0]=0. + t1313*t4226 + t4644*t4827 + t4911*t4925 + t5006*t5087 + t5111*t5260 + t5385*t5407 + t5502*t5516 + t5550*t5577 + t5609*t5621 + t5634*t5647 + t5686*t5706 + t5725*t5740 + t5771*t5780 + t5798*t5812 - 0.0216*(t5768*t5780 + t5748*t5812) - 1.193387*(t5748*t5780 - 1.*t5768*t5812) - 1.*t1271*t1291*t794 + t5305*t5334*t794 + 0.1305*(t5111*t5173 - 1.*t5226*t5305*t794) + var1[0];
  p_output1[1]=0. + t1271*t5861 + t4644*t5875 + t4925*t5894 + t5006*t5955 + t5260*t5981 + t5334*t5989 + 0.1305*(t5173*t5981 - 1.*t5226*t5989) + t5385*t6041 + t5502*t6053 + t5550*t6064 + t5609*t6074 + t5634*t6084 + t5686*t6100 + t5725*t6121 + t5771*t6141 + t5798*t6165 - 0.0216*(t5768*t6141 + t5748*t6165) - 1.193387*(t5748*t6141 - 1.*t5768*t6165) - 1.*t4226*t5853*t794 + var1[1];
  p_output1[2]=0. + t1271*t6261 + t4644*t6278 + t4925*t6289 + t5006*t6294 + t5260*t6305 + t5334*t6314 + 0.1305*(t5173*t6305 - 1.*t5226*t6314) + t5385*t6334 + t5502*t6346 + t5550*t6364 + t5609*t6378 + t5634*t6396 + t5686*t6407 + t5725*t6424 + t5771*t6443 + t5798*t6483 - 0.0216*(t5768*t6443 + t5748*t6483) - 1.193387*(t5748*t6443 - 1.*t5768*t6483) + t4226*t5849*t794 + var1[2];
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

#include "p_LeftToeBottomBack.hh"

namespace SymExpression
{

void p_LeftToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
