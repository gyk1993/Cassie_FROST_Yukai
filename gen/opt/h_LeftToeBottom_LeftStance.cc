/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:09:59 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1008;
  double t2679;
  double t2881;
  double t3154;
  double t4077;
  double t4812;
  double t10363;
  double t11072;
  double t11897;
  double t6782;
  double t6958;
  double t8584;
  double t12146;
  double t17037;
  double t17055;
  double t17077;
  double t17173;
  double t17724;
  double t17736;
  double t17845;
  double t17027;
  double t14193;
  double t14195;
  double t15138;
  double t15646;
  double t16299;
  double t16306;
  double t16589;
  double t19336;
  double t19486;
  double t19517;
  double t19540;
  double t19557;
  double t19588;
  double t19714;
  double t19992;
  double t20016;
  double t20029;
  double t20274;
  double t20282;
  double t20289;
  double t20295;
  double t20321;
  double t20355;
  double t20359;
  double t20361;
  double t20402;
  double t20403;
  double t20420;
  double t20449;
  double t20452;
  double t20453;
  double t20469;
  double t20478;
  double t20493;
  double t20502;
  double t20542;
  double t20547;
  double t20551;
  double t20595;
  double t20605;
  double t20615;
  double t20618;
  double t20645;
  double t20647;
  double t20654;
  double t20700;
  double t20720;
  double t20743;
  double t2781;
  double t2787;
  double t20834;
  double t4816;
  double t6413;
  double t20821;
  double t20833;
  double t20835;
  double t20841;
  double t15513;
  double t15861;
  double t16255;
  double t20966;
  double t20985;
  double t21004;
  double t20886;
  double t20888;
  double t20897;
  double t17083;
  double t17302;
  double t17322;
  double t17925;
  double t17974;
  double t17983;
  double t21107;
  double t21117;
  double t21120;
  double t21068;
  double t21071;
  double t21092;
  double t19161;
  double t19204;
  double t19299;
  double t19655;
  double t19726;
  double t19784;
  double t21031;
  double t21054;
  double t21063;
  double t21267;
  double t21268;
  double t21269;
  double t20113;
  double t20160;
  double t20199;
  double t20307;
  double t20312;
  double t20320;
  double t20328;
  double t20353;
  double t21321;
  double t21346;
  double t21352;
  double t21379;
  double t21409;
  double t21426;
  double t20383;
  double t20390;
  double t20400;
  double t20401;
  double t20467;
  double t20471;
  double t20477;
  double t21455;
  double t21472;
  double t21520;
  double t21544;
  double t21546;
  double t21547;
  double t20506;
  double t20537;
  double t20538;
  double t20616;
  double t20632;
  double t20644;
  double t21577;
  double t21579;
  double t21588;
  double t21604;
  double t21614;
  double t21615;
  double t20683;
  double t20692;
  double t20698;
  double t21623;
  double t21628;
  double t21630;
  double t21635;
  double t21640;
  double t21642;
  double t21726;
  double t21745;
  double t21757;
  double t21789;
  double t21792;
  double t21794;
  double t21779;
  double t21780;
  double t21782;
  double t21815;
  double t21816;
  double t21817;
  double t21808;
  double t21809;
  double t21812;
  double t21798;
  double t21800;
  double t21805;
  double t21833;
  double t21834;
  double t21846;
  double t21856;
  double t21865;
  double t21925;
  double t21933;
  double t21952;
  double t21959;
  double t21971;
  double t21973;
  double t21978;
  double t21991;
  double t21993;
  double t21997;
  double t22007;
  double t22009;
  double t22073;
  double t22122;
  double t22138;
  double t22147;
  double t22160;
  double t22169;
  double t22170;
  double t22182;
  double t22191;
  double t22201;
  double t22255;
  double t22274;
  double t22305;
  double t22331;
  double t22351;
  double t22383;
  t1008 = Cos(var1[4]);
  t2679 = Cos(var1[6]);
  t2881 = Sin(var1[5]);
  t3154 = Sin(var1[4]);
  t4077 = Sin(var1[6]);
  t4812 = Cos(var1[7]);
  t10363 = t2679*t3154;
  t11072 = t1008*t2881*t4077;
  t11897 = t10363 + t11072;
  t6782 = -1.*t1008*t2679*t2881;
  t6958 = t3154*t4077;
  t8584 = t6782 + t6958;
  t12146 = Sin(var1[7]);
  t17037 = Cos(var1[8]);
  t17055 = -1.*t17037;
  t17077 = 1. + t17055;
  t17173 = Sin(var1[8]);
  t17724 = t4812*t8584;
  t17736 = t11897*t12146;
  t17845 = t17724 + t17736;
  t17027 = Cos(var1[5]);
  t14193 = Cos(var1[9]);
  t14195 = -1.*t14193;
  t15138 = 1. + t14195;
  t15646 = Sin(var1[9]);
  t16299 = t4812*t11897;
  t16306 = -1.*t8584*t12146;
  t16589 = t16299 + t16306;
  t19336 = t1008*t17027*t17037;
  t19486 = -1.*t17845*t17173;
  t19517 = t19336 + t19486;
  t19540 = Cos(var1[10]);
  t19557 = -1.*t19540;
  t19588 = 1. + t19557;
  t19714 = Sin(var1[10]);
  t19992 = t15646*t16589;
  t20016 = t14193*t19517;
  t20029 = t19992 + t20016;
  t20274 = t14193*t16589;
  t20282 = -1.*t15646*t19517;
  t20289 = t20274 + t20282;
  t20295 = Cos(var1[11]);
  t20321 = Sin(var1[11]);
  t20355 = -1.*t19714*t20029;
  t20359 = t19540*t20289;
  t20361 = t20355 + t20359;
  t20402 = t19540*t20029;
  t20403 = t19714*t20289;
  t20420 = t20402 + t20403;
  t20449 = Cos(var1[12]);
  t20452 = -1.*t20449;
  t20453 = 1. + t20452;
  t20469 = Sin(var1[12]);
  t20478 = t20321*t20361;
  t20493 = t20295*t20420;
  t20502 = t20478 + t20493;
  t20542 = t20295*t20361;
  t20547 = -1.*t20321*t20420;
  t20551 = t20542 + t20547;
  t20595 = Cos(var1[13]);
  t20605 = -1.*t20595;
  t20615 = 1. + t20605;
  t20618 = Sin(var1[13]);
  t20645 = -1.*t20469*t20502;
  t20647 = t20449*t20551;
  t20654 = t20645 + t20647;
  t20700 = t20449*t20502;
  t20720 = t20469*t20551;
  t20743 = t20700 + t20720;
  t2781 = -1.*t2679;
  t2787 = 1. + t2781;
  t20834 = Sin(var1[3]);
  t4816 = -1.*t4812;
  t6413 = 1. + t4816;
  t20821 = Cos(var1[3]);
  t20833 = t20821*t17027;
  t20835 = -1.*t20834*t3154*t2881;
  t20841 = t20833 + t20835;
  t15513 = -0.09*t15138;
  t15861 = 0.049*t15646;
  t16255 = t15513 + t15861;
  t20966 = -1.*t1008*t2679*t20834;
  t20985 = -1.*t20841*t4077;
  t21004 = t20966 + t20985;
  t20886 = t2679*t20841;
  t20888 = -1.*t1008*t20834*t4077;
  t20897 = t20886 + t20888;
  t17083 = -0.049*t17077;
  t17302 = -0.135*t17173;
  t17322 = t17083 + t17302;
  t17925 = 0.135*t17077;
  t17974 = -0.049*t17173;
  t17983 = t17925 + t17974;
  t21107 = t4812*t20897;
  t21117 = t21004*t12146;
  t21120 = t21107 + t21117;
  t21068 = t17027*t20834*t3154;
  t21071 = t20821*t2881;
  t21092 = t21068 + t21071;
  t19161 = -0.049*t15138;
  t19204 = -0.09*t15646;
  t19299 = t19161 + t19204;
  t19655 = -0.049*t19588;
  t19726 = -0.21*t19714;
  t19784 = t19655 + t19726;
  t21031 = t4812*t21004;
  t21054 = -1.*t20897*t12146;
  t21063 = t21031 + t21054;
  t21267 = t17037*t21092;
  t21268 = -1.*t21120*t17173;
  t21269 = t21267 + t21268;
  t20113 = -0.21*t19588;
  t20160 = 0.049*t19714;
  t20199 = t20113 + t20160;
  t20307 = -1.*t20295;
  t20312 = 1. + t20307;
  t20320 = -0.2707*t20312;
  t20328 = 0.0016*t20321;
  t20353 = t20320 + t20328;
  t21321 = t15646*t21063;
  t21346 = t14193*t21269;
  t21352 = t21321 + t21346;
  t21379 = t14193*t21063;
  t21409 = -1.*t15646*t21269;
  t21426 = t21379 + t21409;
  t20383 = -1. + t20295;
  t20390 = 0.0016*t20383;
  t20400 = -0.2707*t20321;
  t20401 = t20390 + t20400;
  t20467 = 0.0184*t20453;
  t20471 = -0.7055*t20469;
  t20477 = t20467 + t20471;
  t21455 = -1.*t19714*t21352;
  t21472 = t19540*t21426;
  t21520 = t21455 + t21472;
  t21544 = t19540*t21352;
  t21546 = t19714*t21426;
  t21547 = t21544 + t21546;
  t20506 = -0.7055*t20453;
  t20537 = -0.0184*t20469;
  t20538 = t20506 + t20537;
  t20616 = -1.1135*t20615;
  t20632 = 0.0216*t20618;
  t20644 = t20616 + t20632;
  t21577 = t20321*t21520;
  t21579 = t20295*t21547;
  t21588 = t21577 + t21579;
  t21604 = t20295*t21520;
  t21614 = -1.*t20321*t21547;
  t21615 = t21604 + t21614;
  t20683 = -0.0216*t20615;
  t20692 = -1.1135*t20618;
  t20698 = t20683 + t20692;
  t21623 = -1.*t20469*t21588;
  t21628 = t20449*t21615;
  t21630 = t21623 + t21628;
  t21635 = t20449*t21588;
  t21640 = t20469*t21615;
  t21642 = t21635 + t21640;
  t21726 = t17027*t20834;
  t21745 = t20821*t3154*t2881;
  t21757 = t21726 + t21745;
  t21789 = t20821*t1008*t2679;
  t21792 = -1.*t21757*t4077;
  t21794 = t21789 + t21792;
  t21779 = t2679*t21757;
  t21780 = t20821*t1008*t4077;
  t21782 = t21779 + t21780;
  t21815 = t4812*t21782;
  t21816 = t21794*t12146;
  t21817 = t21815 + t21816;
  t21808 = -1.*t20821*t17027*t3154;
  t21809 = t20834*t2881;
  t21812 = t21808 + t21809;
  t21798 = t4812*t21794;
  t21800 = -1.*t21782*t12146;
  t21805 = t21798 + t21800;
  t21833 = t17037*t21812;
  t21834 = -1.*t21817*t17173;
  t21846 = t21833 + t21834;
  t21856 = t15646*t21805;
  t21865 = t14193*t21846;
  t21925 = t21856 + t21865;
  t21933 = t14193*t21805;
  t21952 = -1.*t15646*t21846;
  t21959 = t21933 + t21952;
  t21971 = -1.*t19714*t21925;
  t21973 = t19540*t21959;
  t21978 = t21971 + t21973;
  t21991 = t19540*t21925;
  t21993 = t19714*t21959;
  t21997 = t21991 + t21993;
  t22007 = t20321*t21978;
  t22009 = t20295*t21997;
  t22073 = t22007 + t22009;
  t22122 = t20295*t21978;
  t22138 = -1.*t20321*t21997;
  t22147 = t22122 + t22138;
  t22160 = -1.*t20469*t22073;
  t22169 = t20449*t22147;
  t22170 = t22160 + t22169;
  t22182 = t20449*t22073;
  t22191 = t20469*t22147;
  t22201 = t22182 + t22191;
  t22255 = t20618*t22170;
  t22274 = t20595*t22201;
  t22305 = t22255 + t22274;
  t22331 = t20595*t22170;
  t22351 = -1.*t20618*t22201;
  t22383 = t22331 + t22351;
  p_output1[0]=-0.135*t11897*t12146 + t16255*t16589 + t1008*t17027*t17322 + 0.1305*(t1008*t17027*t17173 + t17037*t17845) + t17845*t17983 + t19299*t19517 + t19784*t20029 + t20199*t20289 + t20353*t20361 + t20401*t20420 + t20477*t20502 + t20538*t20551 + t20644*t20654 + t20698*t20743 + 0.0306*(t20618*t20654 + t20595*t20743) - 1.1312*(t20595*t20654 - 1.*t20618*t20743) - 0.135*t1008*t2787*t2881 - 0.135*t3154*t4077 + 0.135*t6413*t8584 + var1[0] - 1.*var2[0];
  p_output1[1]=-0.135*t12146*t21004 + t16255*t21063 + t17322*t21092 + t17983*t21120 + 0.1305*(t17173*t21092 + t17037*t21120) + t19299*t21269 + t19784*t21352 + t20199*t21426 + t20353*t21520 + t20401*t21547 + t20477*t21588 + t20538*t21615 + t20644*t21630 + t20698*t21642 + 0.0306*(t20618*t21630 + t20595*t21642) - 1.1312*(t20595*t21630 - 1.*t20618*t21642) + 0.135*t20841*t2787 + 0.135*t1008*t20834*t4077 + 0.135*t20897*t6413 + var1[1] - 1.*var2[1];
  p_output1[2]=-0.135*t12146*t21794 + t16255*t21805 + t17322*t21812 + t17983*t21817 + 0.1305*(t17173*t21812 + t17037*t21817) + t19299*t21846 + t19784*t21925 + t20199*t21959 + t20353*t21978 + t20401*t21997 + t20477*t22073 + t20538*t22147 + t20644*t22170 + t20698*t22201 + 0.0306*t22305 - 1.1312*t22383 + 0.135*t21757*t2787 - 0.135*t1008*t20821*t4077 + 0.135*t21782*t6413 + var1[2] - 1.*var2[2];
  p_output1[3]=ArcTan(-0.766044*t22305 + 0.642788*t22383,0.642788*t22305 + 0.766044*t22383) - 1.*var2[3];
  p_output1[4]=ArcTan(-1.*t1008*t17027*t17173 - 1.*t17037*t17845,-1.*t17173*t21092 - 1.*t17037*t21120) - 1.*var2[4];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 5 && ncols == 1) && 
      !(mrows == 1 && ncols == 5))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_LeftToeBottom_LeftStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void h_LeftToeBottom_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
