/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:04:21 GMT-04:00
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
  double t174;
  double t356;
  double t389;
  double t391;
  double t429;
  double t654;
  double t521;
  double t571;
  double t619;
  double t459;
  double t698;
  double t737;
  double t743;
  double t180;
  double t183;
  double t192;
  double t243;
  double t178;
  double t1102;
  double t1108;
  double t1114;
  double t773;
  double t777;
  double t793;
  double t878;
  double t928;
  double t929;
  double t978;
  double t1448;
  double t1473;
  double t1511;
  double t1573;
  double t1579;
  double t1582;
  double t1618;
  double t1739;
  double t1760;
  double t1782;
  double t2125;
  double t2166;
  double t2175;
  double t2242;
  double t2348;
  double t2573;
  double t2669;
  double t2670;
  double t2971;
  double t3049;
  double t3060;
  double t3121;
  double t3156;
  double t3170;
  double t3295;
  double t3332;
  double t3503;
  double t3523;
  double t3631;
  double t3661;
  double t3685;
  double t3750;
  double t3781;
  double t3910;
  double t4190;
  double t4464;
  double t4490;
  double t4549;
  double t4794;
  double t4818;
  double t4824;
  double t228;
  double t279;
  double t296;
  double t5414;
  double t395;
  double t425;
  double t5609;
  double t460;
  double t479;
  double t5801;
  double t5847;
  double t5894;
  double t805;
  double t884;
  double t893;
  double t5961;
  double t6052;
  double t6067;
  double t6204;
  double t6269;
  double t6286;
  double t1004;
  double t1028;
  double t1085;
  double t5540;
  double t5704;
  double t5705;
  double t6625;
  double t6744;
  double t6748;
  double t1277;
  double t1297;
  double t1399;
  double t1609;
  double t1644;
  double t1650;
  double t6352;
  double t6454;
  double t6511;
  double t6995;
  double t7009;
  double t7013;
  double t1841;
  double t2037;
  double t2070;
  double t2280;
  double t2296;
  double t2315;
  double t2476;
  double t2525;
  double t7337;
  double t7338;
  double t7339;
  double t7618;
  double t7656;
  double t7711;
  double t2756;
  double t2786;
  double t2918;
  double t2940;
  double t3223;
  double t3316;
  double t3320;
  double t8007;
  double t8027;
  double t8083;
  double t8211;
  double t8260;
  double t8333;
  double t3567;
  double t3581;
  double t3612;
  double t4024;
  double t4289;
  double t4295;
  double t8615;
  double t8938;
  double t8994;
  double t9229;
  double t9453;
  double t9566;
  double t4631;
  double t4728;
  double t4740;
  double t9717;
  double t9742;
  double t9781;
  double t9790;
  double t9804;
  double t9811;
  double t10548;
  double t10933;
  double t10961;
  double t11026;
  double t11191;
  double t11210;
  double t11305;
  double t11394;
  double t11562;
  double t10298;
  double t10388;
  double t10390;
  double t12007;
  double t12011;
  double t12070;
  double t11752;
  double t11904;
  double t11999;
  double t12443;
  double t12531;
  double t12549;
  double t12654;
  double t12714;
  double t12739;
  double t12929;
  double t12930;
  double t12931;
  double t12977;
  double t13016;
  double t13027;
  double t13103;
  double t13104;
  double t13108;
  double t13178;
  double t13208;
  double t13265;
  double t13282;
  double t13285;
  double t13300;
  double t13311;
  double t13313;
  double t13425;
  double t13449;
  double t13457;
  double t13463;
  double t13479;
  double t13542;
  double t13553;
  double t13656;
  double t13678;
  double t13793;
  t174 = Cos(var1[4]);
  t356 = Sin(var1[14]);
  t389 = Sin(var1[4]);
  t391 = Cos(var1[14]);
  t429 = Sin(var1[5]);
  t654 = Sin(var1[15]);
  t521 = t356*t389;
  t571 = -1.*t391*t174*t429;
  t619 = t521 + t571;
  t459 = Cos(var1[15]);
  t698 = t391*t389;
  t737 = t174*t356*t429;
  t743 = t698 + t737;
  t180 = Cos(var1[16]);
  t183 = -1.*t180;
  t192 = 1. + t183;
  t243 = Sin(var1[16]);
  t178 = Cos(var1[5]);
  t1102 = t459*t619;
  t1108 = t654*t743;
  t1114 = t1102 + t1108;
  t773 = Cos(var1[17]);
  t777 = -1.*t773;
  t793 = 1. + t777;
  t878 = Sin(var1[17]);
  t928 = -1.*t654*t619;
  t929 = t459*t743;
  t978 = t928 + t929;
  t1448 = t180*t174*t178;
  t1473 = -1.*t243*t1114;
  t1511 = t1448 + t1473;
  t1573 = Cos(var1[18]);
  t1579 = -1.*t1573;
  t1582 = 1. + t1579;
  t1618 = Sin(var1[18]);
  t1739 = t878*t978;
  t1760 = t773*t1511;
  t1782 = t1739 + t1760;
  t2125 = t773*t978;
  t2166 = -1.*t878*t1511;
  t2175 = t2125 + t2166;
  t2242 = Cos(var1[19]);
  t2348 = Sin(var1[19]);
  t2573 = -1.*t1618*t1782;
  t2669 = t1573*t2175;
  t2670 = t2573 + t2669;
  t2971 = t1573*t1782;
  t3049 = t1618*t2175;
  t3060 = t2971 + t3049;
  t3121 = Cos(var1[20]);
  t3156 = -1.*t3121;
  t3170 = 1. + t3156;
  t3295 = Sin(var1[20]);
  t3332 = t2348*t2670;
  t3503 = t2242*t3060;
  t3523 = t3332 + t3503;
  t3631 = t2242*t2670;
  t3661 = -1.*t2348*t3060;
  t3685 = t3631 + t3661;
  t3750 = Cos(var1[21]);
  t3781 = -1.*t3750;
  t3910 = 1. + t3781;
  t4190 = Sin(var1[21]);
  t4464 = -1.*t3295*t3523;
  t4490 = t3121*t3685;
  t4549 = t4464 + t4490;
  t4794 = t3121*t3523;
  t4818 = t3295*t3685;
  t4824 = t4794 + t4818;
  t228 = -0.049*t192;
  t279 = 0.135*t243;
  t296 = t228 + t279;
  t5414 = Sin(var1[3]);
  t395 = -1.*t391;
  t425 = 1. + t395;
  t5609 = Cos(var1[3]);
  t460 = -1.*t459;
  t479 = 1. + t460;
  t5801 = t5609*t178;
  t5847 = -1.*t5414*t389*t429;
  t5894 = t5801 + t5847;
  t805 = -0.09*t793;
  t884 = 0.049*t878;
  t893 = t805 + t884;
  t5961 = -1.*t174*t356*t5414;
  t6052 = t391*t5894;
  t6067 = t5961 + t6052;
  t6204 = -1.*t391*t174*t5414;
  t6269 = -1.*t356*t5894;
  t6286 = t6204 + t6269;
  t1004 = -0.135*t192;
  t1028 = -0.049*t243;
  t1085 = t1004 + t1028;
  t5540 = t178*t5414*t389;
  t5704 = t5609*t429;
  t5705 = t5540 + t5704;
  t6625 = t459*t6067;
  t6744 = t654*t6286;
  t6748 = t6625 + t6744;
  t1277 = -0.049*t793;
  t1297 = -0.09*t878;
  t1399 = t1277 + t1297;
  t1609 = -0.049*t1582;
  t1644 = -0.21*t1618;
  t1650 = t1609 + t1644;
  t6352 = -1.*t654*t6067;
  t6454 = t459*t6286;
  t6511 = t6352 + t6454;
  t6995 = t180*t5705;
  t7009 = -1.*t243*t6748;
  t7013 = t6995 + t7009;
  t1841 = -0.21*t1582;
  t2037 = 0.049*t1618;
  t2070 = t1841 + t2037;
  t2280 = -1.*t2242;
  t2296 = 1. + t2280;
  t2315 = -0.2707*t2296;
  t2476 = 0.0016*t2348;
  t2525 = t2315 + t2476;
  t7337 = t878*t6511;
  t7338 = t773*t7013;
  t7339 = t7337 + t7338;
  t7618 = t773*t6511;
  t7656 = -1.*t878*t7013;
  t7711 = t7618 + t7656;
  t2756 = -1. + t2242;
  t2786 = 0.0016*t2756;
  t2918 = -0.2707*t2348;
  t2940 = t2786 + t2918;
  t3223 = 0.0184*t3170;
  t3316 = -0.7055*t3295;
  t3320 = t3223 + t3316;
  t8007 = -1.*t1618*t7339;
  t8027 = t1573*t7711;
  t8083 = t8007 + t8027;
  t8211 = t1573*t7339;
  t8260 = t1618*t7711;
  t8333 = t8211 + t8260;
  t3567 = -0.7055*t3170;
  t3581 = -0.0184*t3295;
  t3612 = t3567 + t3581;
  t4024 = -1.1135*t3910;
  t4289 = 0.0216*t4190;
  t4295 = t4024 + t4289;
  t8615 = t2348*t8083;
  t8938 = t2242*t8333;
  t8994 = t8615 + t8938;
  t9229 = t2242*t8083;
  t9453 = -1.*t2348*t8333;
  t9566 = t9229 + t9453;
  t4631 = -0.0216*t3910;
  t4728 = -1.1135*t4190;
  t4740 = t4631 + t4728;
  t9717 = -1.*t3295*t8994;
  t9742 = t3121*t9566;
  t9781 = t9717 + t9742;
  t9790 = t3121*t8994;
  t9804 = t3295*t9566;
  t9811 = t9790 + t9804;
  t10548 = t178*t5414;
  t10933 = t5609*t389*t429;
  t10961 = t10548 + t10933;
  t11026 = t5609*t174*t356;
  t11191 = t391*t10961;
  t11210 = t11026 + t11191;
  t11305 = t391*t5609*t174;
  t11394 = -1.*t356*t10961;
  t11562 = t11305 + t11394;
  t10298 = -1.*t5609*t178*t389;
  t10388 = t5414*t429;
  t10390 = t10298 + t10388;
  t12007 = t459*t11210;
  t12011 = t654*t11562;
  t12070 = t12007 + t12011;
  t11752 = -1.*t654*t11210;
  t11904 = t459*t11562;
  t11999 = t11752 + t11904;
  t12443 = t180*t10390;
  t12531 = -1.*t243*t12070;
  t12549 = t12443 + t12531;
  t12654 = t878*t11999;
  t12714 = t773*t12549;
  t12739 = t12654 + t12714;
  t12929 = t773*t11999;
  t12930 = -1.*t878*t12549;
  t12931 = t12929 + t12930;
  t12977 = -1.*t1618*t12739;
  t13016 = t1573*t12931;
  t13027 = t12977 + t13016;
  t13103 = t1573*t12739;
  t13104 = t1618*t12931;
  t13108 = t13103 + t13104;
  t13178 = t2348*t13027;
  t13208 = t2242*t13108;
  t13265 = t13178 + t13208;
  t13282 = t2242*t13027;
  t13285 = -1.*t2348*t13108;
  t13300 = t13282 + t13285;
  t13311 = -1.*t3295*t13265;
  t13313 = t3121*t13300;
  t13425 = t13311 + t13313;
  t13449 = t3121*t13265;
  t13457 = t3295*t13300;
  t13463 = t13449 + t13457;
  t13479 = t4190*t13425;
  t13542 = t3750*t13463;
  t13553 = t13479 + t13542;
  t13656 = t3750*t13425;
  t13678 = -1.*t4190*t13463;
  t13793 = t13656 + t13678;
  p_output1[0]=t1085*t1114 + t1399*t1511 + t1650*t1782 + t2070*t2175 - 0.1305*(t1114*t180 + t174*t178*t243) + t2525*t2670 + t174*t178*t296 + t2940*t3060 + t3320*t3523 + t3612*t3685 + 0.135*t356*t389 + 0.135*t174*t425*t429 + t4295*t4549 + t4740*t4824 + 0.0306*(t4190*t4549 + t3750*t4824) - 1.1312*(t3750*t4549 - 1.*t4190*t4824) - 0.135*t479*t619 + 0.135*t654*t743 + t893*t978 + var1[0] - 1.*var2[0];
  p_output1[1]=-0.135*t174*t356*t5414 + t296*t5705 - 0.135*t425*t5894 - 0.135*t479*t6067 + 0.135*t6286*t654 + t1085*t6748 - 0.1305*(t243*t5705 + t180*t6748) + t1399*t7013 + t1650*t7339 + t2070*t7711 + t2525*t8083 + t2940*t8333 + t6511*t893 + t3320*t8994 + t3612*t9566 + t4295*t9781 + t4740*t9811 + 0.0306*(t4190*t9781 + t3750*t9811) - 1.1312*(t3750*t9781 - 1.*t4190*t9811) + var1[1] - 1.*var2[1];
  p_output1[2]=t1085*t12070 + 0.0306*t13553 - 1.1312*t13793 + t12549*t1399 + t12739*t1650 + t12931*t2070 - 0.1305*(t12070*t180 + t10390*t243) + t13027*t2525 + t13108*t2940 + t10390*t296 + t13265*t3320 + t13300*t3612 - 0.135*t10961*t425 + t13425*t4295 + t13463*t4740 - 0.135*t11210*t479 + 0.135*t174*t356*t5609 + 0.135*t11562*t654 + t11999*t893 + var1[2] - 1.*var2[2];
  p_output1[3]=ArcTan(-0.766044*t13553 + 0.642788*t13793,0.642788*t13553 + 0.766044*t13793) - 1.*var2[3];
  p_output1[4]=ArcTan(-1.*t1114*t180 - 1.*t174*t178*t243,-1.*t243*t5705 - 1.*t180*t6748) - 1.*var2[4];
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

#include "h_RightToeBottom_RightStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void h_RightToeBottom_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
