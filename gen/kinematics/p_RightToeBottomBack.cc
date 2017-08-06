/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:29 GMT-04:00
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
  double t1297;
  double t4769;
  double t4925;
  double t5010;
  double t5334;
  double t5534;
  double t5457;
  double t5502;
  double t5513;
  double t5355;
  double t5579;
  double t5618;
  double t5630;
  double t1495;
  double t1573;
  double t1581;
  double t1685;
  double t1486;
  double t5798;
  double t5800;
  double t5805;
  double t5634;
  double t5663;
  double t5670;
  double t5703;
  double t5720;
  double t5734;
  double t5745;
  double t5883;
  double t5894;
  double t5895;
  double t5967;
  double t5976;
  double t5982;
  double t5997;
  double t6035;
  double t6042;
  double t6045;
  double t6080;
  double t6092;
  double t6096;
  double t6101;
  double t6121;
  double t6146;
  double t6173;
  double t6188;
  double t6206;
  double t6215;
  double t6262;
  double t6269;
  double t6274;
  double t6282;
  double t6286;
  double t6289;
  double t6292;
  double t6297;
  double t6304;
  double t6306;
  double t6344;
  double t6348;
  double t6357;
  double t6364;
  double t6367;
  double t6386;
  double t6390;
  double t6408;
  double t6409;
  double t6424;
  double t6464;
  double t6506;
  double t6509;
  double t4862;
  double t4922;
  double t1679;
  double t1776;
  double t4644;
  double t6557;
  double t5087;
  double t5107;
  double t5242;
  double t5320;
  double t6568;
  double t5372;
  double t5381;
  double t5383;
  double t5385;
  double t6583;
  double t6585;
  double t6597;
  double t5550;
  double t5577;
  double t5686;
  double t5710;
  double t5716;
  double t6618;
  double t6619;
  double t6622;
  double t6624;
  double t6629;
  double t6637;
  double t5787;
  double t5789;
  double t5796;
  double t6561;
  double t6577;
  double t6580;
  double t6729;
  double t6733;
  double t6748;
  double t5851;
  double t5862;
  double t5868;
  double t5983;
  double t6005;
  double t6027;
  double t6660;
  double t6683;
  double t6692;
  double t6772;
  double t6781;
  double t6784;
  double t6064;
  double t6074;
  double t6076;
  double t6149;
  double t6177;
  double t6185;
  double t6786;
  double t6787;
  double t6791;
  double t6795;
  double t6800;
  double t6801;
  double t6235;
  double t6240;
  double t6251;
  double t6291;
  double t6294;
  double t6295;
  double t6806;
  double t6807;
  double t6809;
  double t6814;
  double t6815;
  double t6820;
  double t6319;
  double t6324;
  double t6329;
  double t6387;
  double t6393;
  double t6402;
  double t6822;
  double t6823;
  double t6825;
  double t6830;
  double t6831;
  double t6832;
  double t6442;
  double t6447;
  double t6448;
  double t6839;
  double t6840;
  double t6841;
  double t6846;
  double t6847;
  double t6850;
  double t6920;
  double t6932;
  double t6933;
  double t6938;
  double t6940;
  double t6943;
  double t6947;
  double t6950;
  double t6957;
  double t6904;
  double t6909;
  double t6918;
  double t7059;
  double t7062;
  double t7063;
  double t6981;
  double t7041;
  double t7042;
  double t7075;
  double t7076;
  double t7077;
  double t7082;
  double t7084;
  double t7085;
  double t7087;
  double t7092;
  double t7094;
  double t7100;
  double t7103;
  double t7104;
  double t7111;
  double t7112;
  double t7114;
  double t7120;
  double t7122;
  double t7125;
  double t7127;
  double t7133;
  double t7138;
  double t7146;
  double t7150;
  double t7157;
  double t7159;
  double t7167;
  double t7171;
  t1297 = Cos(var1[4]);
  t4769 = Sin(var1[14]);
  t4925 = Sin(var1[4]);
  t5010 = Cos(var1[14]);
  t5334 = Sin(var1[5]);
  t5534 = Sin(var1[15]);
  t5457 = t4769*t4925;
  t5502 = -1.*t5010*t1297*t5334;
  t5513 = t5457 + t5502;
  t5355 = Cos(var1[15]);
  t5579 = t5010*t4925;
  t5618 = t1297*t4769*t5334;
  t5630 = t5579 + t5618;
  t1495 = Cos(var1[16]);
  t1573 = -1.*t1495;
  t1581 = 1. + t1573;
  t1685 = Sin(var1[16]);
  t1486 = Cos(var1[5]);
  t5798 = t5355*t5513;
  t5800 = t5534*t5630;
  t5805 = t5798 + t5800;
  t5634 = Cos(var1[17]);
  t5663 = -1.*t5634;
  t5670 = 1. + t5663;
  t5703 = Sin(var1[17]);
  t5720 = -1.*t5534*t5513;
  t5734 = t5355*t5630;
  t5745 = t5720 + t5734;
  t5883 = t1495*t1297*t1486;
  t5894 = t1685*t5805;
  t5895 = t5883 + t5894;
  t5967 = Cos(var1[18]);
  t5976 = -1.*t5967;
  t5982 = 1. + t5976;
  t5997 = Sin(var1[18]);
  t6035 = t5703*t5745;
  t6042 = t5634*t5895;
  t6045 = t6035 + t6042;
  t6080 = t5634*t5745;
  t6092 = -1.*t5703*t5895;
  t6096 = t6080 + t6092;
  t6101 = Cos(var1[19]);
  t6121 = -1.*t6101;
  t6146 = 1. + t6121;
  t6173 = Sin(var1[19]);
  t6188 = -1.*t5997*t6045;
  t6206 = t5967*t6096;
  t6215 = t6188 + t6206;
  t6262 = t5967*t6045;
  t6269 = t5997*t6096;
  t6274 = t6262 + t6269;
  t6282 = Cos(var1[20]);
  t6286 = -1.*t6282;
  t6289 = 1. + t6286;
  t6292 = Sin(var1[20]);
  t6297 = t6173*t6215;
  t6304 = t6101*t6274;
  t6306 = t6297 + t6304;
  t6344 = t6101*t6215;
  t6348 = -1.*t6173*t6274;
  t6357 = t6344 + t6348;
  t6364 = Cos(var1[21]);
  t6367 = -1.*t6364;
  t6386 = 1. + t6367;
  t6390 = Sin(var1[21]);
  t6408 = -1.*t6292*t6306;
  t6409 = t6282*t6357;
  t6424 = t6408 + t6409;
  t6464 = t6282*t6306;
  t6506 = t6292*t6357;
  t6509 = t6464 + t6506;
  t4862 = 0.135*t4769;
  t4922 = 0. + t4862;
  t1679 = -0.049*t1581;
  t1776 = -0.135*t1685;
  t4644 = 0. + t1679 + t1776;
  t6557 = Sin(var1[3]);
  t5087 = -1.*t5010;
  t5107 = 1. + t5087;
  t5242 = -0.135*t5107;
  t5320 = 0. + t5242;
  t6568 = Cos(var1[3]);
  t5372 = -1.*t5355;
  t5381 = 1. + t5372;
  t5383 = -0.135*t5381;
  t5385 = 0. + t5383;
  t6583 = t6568*t1486;
  t6585 = -1.*t6557*t4925*t5334;
  t6597 = t6583 + t6585;
  t5550 = 0.135*t5534;
  t5577 = 0. + t5550;
  t5686 = -0.09*t5670;
  t5710 = 0.049*t5703;
  t5716 = 0. + t5686 + t5710;
  t6618 = -1.*t1297*t4769*t6557;
  t6619 = t5010*t6597;
  t6622 = t6618 + t6619;
  t6624 = -1.*t5010*t1297*t6557;
  t6629 = -1.*t4769*t6597;
  t6637 = t6624 + t6629;
  t5787 = -0.135*t1581;
  t5789 = 0.049*t1685;
  t5796 = 0. + t5787 + t5789;
  t6561 = t1486*t6557*t4925;
  t6577 = t6568*t5334;
  t6580 = t6561 + t6577;
  t6729 = t5355*t6622;
  t6733 = t5534*t6637;
  t6748 = t6729 + t6733;
  t5851 = -0.049*t5670;
  t5862 = -0.09*t5703;
  t5868 = 0. + t5851 + t5862;
  t5983 = -0.049*t5982;
  t6005 = -0.21*t5997;
  t6027 = 0. + t5983 + t6005;
  t6660 = -1.*t5534*t6622;
  t6683 = t5355*t6637;
  t6692 = t6660 + t6683;
  t6772 = t1495*t6580;
  t6781 = t1685*t6748;
  t6784 = t6772 + t6781;
  t6064 = -0.21*t5982;
  t6074 = 0.049*t5997;
  t6076 = 0. + t6064 + t6074;
  t6149 = -0.2707*t6146;
  t6177 = 0.0016*t6173;
  t6185 = 0. + t6149 + t6177;
  t6786 = t5703*t6692;
  t6787 = t5634*t6784;
  t6791 = t6786 + t6787;
  t6795 = t5634*t6692;
  t6800 = -1.*t5703*t6784;
  t6801 = t6795 + t6800;
  t6235 = -0.0016*t6146;
  t6240 = -0.2707*t6173;
  t6251 = 0. + t6235 + t6240;
  t6291 = 0.0184*t6289;
  t6294 = -0.7055*t6292;
  t6295 = 0. + t6291 + t6294;
  t6806 = -1.*t5997*t6791;
  t6807 = t5967*t6801;
  t6809 = t6806 + t6807;
  t6814 = t5967*t6791;
  t6815 = t5997*t6801;
  t6820 = t6814 + t6815;
  t6319 = -0.7055*t6289;
  t6324 = -0.0184*t6292;
  t6329 = 0. + t6319 + t6324;
  t6387 = -1.1135*t6386;
  t6393 = 0.0216*t6390;
  t6402 = 0. + t6387 + t6393;
  t6822 = t6173*t6809;
  t6823 = t6101*t6820;
  t6825 = t6822 + t6823;
  t6830 = t6101*t6809;
  t6831 = -1.*t6173*t6820;
  t6832 = t6830 + t6831;
  t6442 = -0.0216*t6386;
  t6447 = -1.1135*t6390;
  t6448 = 0. + t6442 + t6447;
  t6839 = -1.*t6292*t6825;
  t6840 = t6282*t6832;
  t6841 = t6839 + t6840;
  t6846 = t6282*t6825;
  t6847 = t6292*t6832;
  t6850 = t6846 + t6847;
  t6920 = t1486*t6557;
  t6932 = t6568*t4925*t5334;
  t6933 = t6920 + t6932;
  t6938 = t6568*t1297*t4769;
  t6940 = t5010*t6933;
  t6943 = t6938 + t6940;
  t6947 = t5010*t6568*t1297;
  t6950 = -1.*t4769*t6933;
  t6957 = t6947 + t6950;
  t6904 = -1.*t6568*t1486*t4925;
  t6909 = t6557*t5334;
  t6918 = t6904 + t6909;
  t7059 = t5355*t6943;
  t7062 = t5534*t6957;
  t7063 = t7059 + t7062;
  t6981 = -1.*t5534*t6943;
  t7041 = t5355*t6957;
  t7042 = t6981 + t7041;
  t7075 = t1495*t6918;
  t7076 = t1685*t7063;
  t7077 = t7075 + t7076;
  t7082 = t5703*t7042;
  t7084 = t5634*t7077;
  t7085 = t7082 + t7084;
  t7087 = t5634*t7042;
  t7092 = -1.*t5703*t7077;
  t7094 = t7087 + t7092;
  t7100 = -1.*t5997*t7085;
  t7103 = t5967*t7094;
  t7104 = t7100 + t7103;
  t7111 = t5967*t7085;
  t7112 = t5997*t7094;
  t7114 = t7111 + t7112;
  t7120 = t6173*t7104;
  t7122 = t6101*t7114;
  t7125 = t7120 + t7122;
  t7127 = t6101*t7104;
  t7133 = -1.*t6173*t7114;
  t7138 = t7127 + t7133;
  t7146 = -1.*t6292*t7125;
  t7150 = t6282*t7138;
  t7157 = t7146 + t7150;
  t7159 = t6282*t7125;
  t7167 = t6292*t7138;
  t7171 = t7159 + t7167;
  p_output1[0]=0. + t1297*t1486*t4644 + t4922*t4925 - 1.*t1297*t5320*t5334 + t5385*t5513 + t5577*t5630 + t5716*t5745 + t5796*t5805 - 0.1305*(-1.*t1297*t1486*t1685 + t1495*t5805) + t5868*t5895 + t6027*t6045 + t6076*t6096 + t6185*t6215 + t6251*t6274 + t6295*t6306 + t6329*t6357 + t6402*t6424 + t6448*t6509 - 0.0216*(t6390*t6424 + t6364*t6509) - 1.193387*(t6364*t6424 - 1.*t6390*t6509) + var1[0];
  p_output1[1]=0. - 1.*t1297*t4922*t6557 + t4644*t6580 + t5320*t6597 + t5385*t6622 + t5577*t6637 + t5716*t6692 + t5796*t6748 - 0.1305*(-1.*t1685*t6580 + t1495*t6748) + t5868*t6784 + t6027*t6791 + t6076*t6801 + t6185*t6809 + t6251*t6820 + t6295*t6825 + t6329*t6832 + t6402*t6841 + t6448*t6850 - 0.0216*(t6390*t6841 + t6364*t6850) - 1.193387*(t6364*t6841 - 1.*t6390*t6850) + var1[1];
  p_output1[2]=0. + t1297*t4922*t6568 + t4644*t6918 + t5320*t6933 + t5385*t6943 + t5577*t6957 + t5716*t7042 + t5796*t7063 - 0.1305*(-1.*t1685*t6918 + t1495*t7063) + t5868*t7077 + t6027*t7085 + t6076*t7094 + t6185*t7104 + t6251*t7114 + t6295*t7125 + t6329*t7138 + t6402*t7157 + t6448*t7171 - 0.0216*(t6390*t7157 + t6364*t7171) - 1.193387*(t6364*t7157 - 1.*t6390*t7171) + var1[2];
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

#include "p_RightToeBottomBack.hh"

namespace SymExpression
{

void p_RightToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
