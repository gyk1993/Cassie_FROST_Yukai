/*
 * Automatically Generated from Mathematica.
 * Tue 13 Jun 2017 13:36:56 GMT-04:00
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
  double t708;
  double t1520;
  double t1595;
  double t1622;
  double t1735;
  double t1855;
  double t1835;
  double t1847;
  double t1848;
  double t1749;
  double t1875;
  double t1989;
  double t2027;
  double t1005;
  double t1091;
  double t1186;
  double t1242;
  double t751;
  double t2854;
  double t2892;
  double t2942;
  double t2054;
  double t2081;
  double t2092;
  double t2176;
  double t2236;
  double t2268;
  double t2377;
  double t3353;
  double t3386;
  double t3425;
  double t3462;
  double t3477;
  double t3478;
  double t3518;
  double t3721;
  double t3741;
  double t3747;
  double t3860;
  double t3867;
  double t3888;
  double t3946;
  double t3958;
  double t4008;
  double t4018;
  double t4097;
  double t4110;
  double t4120;
  double t4313;
  double t4329;
  double t4392;
  double t4406;
  double t4499;
  double t4574;
  double t4651;
  double t4705;
  double t4714;
  double t4736;
  double t4884;
  double t4898;
  double t4931;
  double t5055;
  double t5235;
  double t5259;
  double t5316;
  double t5358;
  double t5374;
  double t5426;
  double t5530;
  double t5571;
  double t5604;
  double t1557;
  double t1581;
  double t1241;
  double t1245;
  double t1510;
  double t5840;
  double t1651;
  double t1708;
  double t1728;
  double t1732;
  double t6005;
  double t1758;
  double t1767;
  double t1769;
  double t1811;
  double t6059;
  double t6068;
  double t6108;
  double t1857;
  double t1870;
  double t2097;
  double t2230;
  double t2234;
  double t6155;
  double t6210;
  double t6223;
  double t6276;
  double t6282;
  double t6294;
  double t2682;
  double t2685;
  double t2765;
  double t5969;
  double t6013;
  double t6055;
  double t6432;
  double t6456;
  double t6460;
  double t3312;
  double t3318;
  double t3345;
  double t3493;
  double t3665;
  double t3682;
  double t6382;
  double t6395;
  double t6406;
  double t6486;
  double t6490;
  double t6495;
  double t3827;
  double t3852;
  double t3854;
  double t4013;
  double t4031;
  double t4072;
  double t6515;
  double t6533;
  double t6547;
  double t6576;
  double t6577;
  double t6580;
  double t4175;
  double t4217;
  double t4261;
  double t4630;
  double t4683;
  double t4686;
  double t6588;
  double t6599;
  double t6601;
  double t6611;
  double t6617;
  double t6628;
  double t4753;
  double t4783;
  double t4788;
  double t5295;
  double t5320;
  double t5357;
  double t6642;
  double t6645;
  double t6656;
  double t6663;
  double t6671;
  double t6680;
  double t5467;
  double t5497;
  double t5516;
  double t6702;
  double t6704;
  double t6713;
  double t6719;
  double t6724;
  double t6726;
  double t6856;
  double t6858;
  double t6861;
  double t6869;
  double t6873;
  double t6874;
  double t6879;
  double t6880;
  double t6885;
  double t6839;
  double t6841;
  double t6848;
  double t6902;
  double t6924;
  double t6936;
  double t6892;
  double t6893;
  double t6895;
  double t6999;
  double t7007;
  double t7012;
  double t7024;
  double t7032;
  double t7035;
  double t7061;
  double t7094;
  double t7105;
  double t7112;
  double t7141;
  double t7143;
  double t7154;
  double t7161;
  double t7164;
  double t7192;
  double t7222;
  double t7252;
  double t7269;
  double t7282;
  double t7297;
  double t7323;
  double t7324;
  double t7325;
  double t7343;
  double t7347;
  double t7348;
  t708 = Cos(var1[4]);
  t1520 = Sin(var1[14]);
  t1595 = Sin(var1[4]);
  t1622 = Cos(var1[14]);
  t1735 = Sin(var1[5]);
  t1855 = Sin(var1[15]);
  t1835 = t1520*t1595;
  t1847 = -1.*t1622*t708*t1735;
  t1848 = t1835 + t1847;
  t1749 = Cos(var1[15]);
  t1875 = t1622*t1595;
  t1989 = t708*t1520*t1735;
  t2027 = t1875 + t1989;
  t1005 = Cos(var1[16]);
  t1091 = -1.*t1005;
  t1186 = 1. + t1091;
  t1242 = Sin(var1[16]);
  t751 = Cos(var1[5]);
  t2854 = t1749*t1848;
  t2892 = t1855*t2027;
  t2942 = t2854 + t2892;
  t2054 = Cos(var1[17]);
  t2081 = -1.*t2054;
  t2092 = 1. + t2081;
  t2176 = Sin(var1[17]);
  t2236 = -1.*t1855*t1848;
  t2268 = t1749*t2027;
  t2377 = t2236 + t2268;
  t3353 = t1005*t708*t751;
  t3386 = -1.*t1242*t2942;
  t3425 = t3353 + t3386;
  t3462 = Cos(var1[18]);
  t3477 = -1.*t3462;
  t3478 = 1. + t3477;
  t3518 = Sin(var1[18]);
  t3721 = t2176*t2377;
  t3741 = t2054*t3425;
  t3747 = t3721 + t3741;
  t3860 = t2054*t2377;
  t3867 = -1.*t2176*t3425;
  t3888 = t3860 + t3867;
  t3946 = Cos(var1[19]);
  t3958 = -1.*t3946;
  t4008 = 1. + t3958;
  t4018 = Sin(var1[19]);
  t4097 = -1.*t3518*t3747;
  t4110 = t3462*t3888;
  t4120 = t4097 + t4110;
  t4313 = t3462*t3747;
  t4329 = t3518*t3888;
  t4392 = t4313 + t4329;
  t4406 = Cos(var1[20]);
  t4499 = -1.*t4406;
  t4574 = 1. + t4499;
  t4651 = Sin(var1[20]);
  t4705 = t4018*t4120;
  t4714 = t3946*t4392;
  t4736 = t4705 + t4714;
  t4884 = t3946*t4120;
  t4898 = -1.*t4018*t4392;
  t4931 = t4884 + t4898;
  t5055 = Cos(var1[21]);
  t5235 = -1.*t5055;
  t5259 = 1. + t5235;
  t5316 = Sin(var1[21]);
  t5358 = -1.*t4651*t4736;
  t5374 = t4406*t4931;
  t5426 = t5358 + t5374;
  t5530 = t4406*t4736;
  t5571 = t4651*t4931;
  t5604 = t5530 + t5571;
  t1557 = 0.135*t1520;
  t1581 = 0. + t1557;
  t1241 = -0.049*t1186;
  t1245 = 0.135*t1242;
  t1510 = 0. + t1241 + t1245;
  t5840 = Cos(var1[3]);
  t1651 = -1.*t1622;
  t1708 = 1. + t1651;
  t1728 = -0.135*t1708;
  t1732 = 0. + t1728;
  t6005 = Sin(var1[3]);
  t1758 = -1.*t1749;
  t1767 = 1. + t1758;
  t1769 = -0.135*t1767;
  t1811 = 0. + t1769;
  t6059 = t751*t6005;
  t6068 = t5840*t1595*t1735;
  t6108 = t6059 + t6068;
  t1857 = 0.135*t1855;
  t1870 = 0. + t1857;
  t2097 = -0.09*t2092;
  t2230 = 0.049*t2176;
  t2234 = 0. + t2097 + t2230;
  t6155 = t5840*t708*t1520;
  t6210 = t1622*t6108;
  t6223 = t6155 + t6210;
  t6276 = t1622*t5840*t708;
  t6282 = -1.*t1520*t6108;
  t6294 = t6276 + t6282;
  t2682 = -0.135*t1186;
  t2685 = -0.049*t1242;
  t2765 = 0. + t2682 + t2685;
  t5969 = -1.*t5840*t751*t1595;
  t6013 = t6005*t1735;
  t6055 = t5969 + t6013;
  t6432 = t1749*t6223;
  t6456 = t1855*t6294;
  t6460 = t6432 + t6456;
  t3312 = -0.049*t2092;
  t3318 = -0.09*t2176;
  t3345 = 0. + t3312 + t3318;
  t3493 = -0.049*t3478;
  t3665 = -0.21*t3518;
  t3682 = 0. + t3493 + t3665;
  t6382 = -1.*t1855*t6223;
  t6395 = t1749*t6294;
  t6406 = t6382 + t6395;
  t6486 = t1005*t6055;
  t6490 = -1.*t1242*t6460;
  t6495 = t6486 + t6490;
  t3827 = -0.21*t3478;
  t3852 = 0.049*t3518;
  t3854 = 0. + t3827 + t3852;
  t4013 = -0.2707*t4008;
  t4031 = 0.0016*t4018;
  t4072 = 0. + t4013 + t4031;
  t6515 = t2176*t6406;
  t6533 = t2054*t6495;
  t6547 = t6515 + t6533;
  t6576 = t2054*t6406;
  t6577 = -1.*t2176*t6495;
  t6580 = t6576 + t6577;
  t4175 = -0.0016*t4008;
  t4217 = -0.2707*t4018;
  t4261 = 0. + t4175 + t4217;
  t4630 = 0.0184*t4574;
  t4683 = -0.7055*t4651;
  t4686 = 0. + t4630 + t4683;
  t6588 = -1.*t3518*t6547;
  t6599 = t3462*t6580;
  t6601 = t6588 + t6599;
  t6611 = t3462*t6547;
  t6617 = t3518*t6580;
  t6628 = t6611 + t6617;
  t4753 = -0.7055*t4574;
  t4783 = -0.0184*t4651;
  t4788 = 0. + t4753 + t4783;
  t5295 = -1.1135*t5259;
  t5320 = 0.0216*t5316;
  t5357 = 0. + t5295 + t5320;
  t6642 = t4018*t6601;
  t6645 = t3946*t6628;
  t6656 = t6642 + t6645;
  t6663 = t3946*t6601;
  t6671 = -1.*t4018*t6628;
  t6680 = t6663 + t6671;
  t5467 = -0.0216*t5259;
  t5497 = -1.1135*t5316;
  t5516 = 0. + t5467 + t5497;
  t6702 = -1.*t4651*t6656;
  t6704 = t4406*t6680;
  t6713 = t6702 + t6704;
  t6719 = t4406*t6656;
  t6724 = t4651*t6680;
  t6726 = t6719 + t6724;
  t6856 = t5840*t751;
  t6858 = -1.*t6005*t1595*t1735;
  t6861 = t6856 + t6858;
  t6869 = -1.*t708*t1520*t6005;
  t6873 = t1622*t6861;
  t6874 = t6869 + t6873;
  t6879 = -1.*t1622*t708*t6005;
  t6880 = -1.*t1520*t6861;
  t6885 = t6879 + t6880;
  t6839 = t751*t6005*t1595;
  t6841 = t5840*t1735;
  t6848 = t6839 + t6841;
  t6902 = t1749*t6874;
  t6924 = t1855*t6885;
  t6936 = t6902 + t6924;
  t6892 = -1.*t1855*t6874;
  t6893 = t1749*t6885;
  t6895 = t6892 + t6893;
  t6999 = t1005*t6848;
  t7007 = -1.*t1242*t6936;
  t7012 = t6999 + t7007;
  t7024 = t2176*t6895;
  t7032 = t2054*t7012;
  t7035 = t7024 + t7032;
  t7061 = t2054*t6895;
  t7094 = -1.*t2176*t7012;
  t7105 = t7061 + t7094;
  t7112 = -1.*t3518*t7035;
  t7141 = t3462*t7105;
  t7143 = t7112 + t7141;
  t7154 = t3462*t7035;
  t7161 = t3518*t7105;
  t7164 = t7154 + t7161;
  t7192 = t4018*t7143;
  t7222 = t3946*t7164;
  t7252 = t7192 + t7222;
  t7269 = t3946*t7143;
  t7282 = -1.*t4018*t7164;
  t7297 = t7269 + t7282;
  t7323 = -1.*t4651*t7252;
  t7324 = t4406*t7297;
  t7325 = t7323 + t7324;
  t7343 = t4406*t7252;
  t7347 = t4651*t7297;
  t7348 = t7343 + t7347;
  p_output1[0]=Sqrt(Power(0. + t1510*t6055 + t1732*t6108 + t1811*t6223 + t1870*t6294 + t2234*t6406 + t2765*t6460 - 0.1305*(t1242*t6055 + t1005*t6460) + t3345*t6495 + t3682*t6547 + t3854*t6580 + t4072*t6601 + t4261*t6628 + t4686*t6656 + t4788*t6680 + t5357*t6713 + t5516*t6726 + 0.0306*(t5316*t6713 + t5055*t6726) - 1.1312*(t5055*t6713 - 1.*t5316*t6726) + t1581*t5840*t708,2) + Power(0. + t1510*t6848 + t1732*t6861 + t1811*t6874 + t1870*t6885 + t2234*t6895 + t2765*t6936 - 0.1305*(t1242*t6848 + t1005*t6936) + t3345*t7012 + t3682*t7035 - 1.*t1581*t6005*t708 + t3854*t7105 + t4072*t7143 + t4261*t7164 + t4686*t7252 + t4788*t7297 + t5357*t7325 + t5516*t7348 + 0.0306*(t5316*t7325 + t5055*t7348) - 1.1312*(t5055*t7325 - 1.*t5316*t7348),2) + Power(0. + t1581*t1595 + t1811*t1848 + t1870*t2027 + t2234*t2377 + t2765*t2942 + t3345*t3425 + t3682*t3747 + t3854*t3888 + t4072*t4120 + t4261*t4392 + t4686*t4736 + t4788*t4931 + t5357*t5426 + t5516*t5604 + 0.0306*(t5316*t5426 + t5055*t5604) - 1.1312*(t5055*t5426 - 1.*t5316*t5604) - 1.*t1732*t1735*t708 + t1510*t708*t751 - 0.1305*(t1005*t2942 + t1242*t708*t751),2));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Body2ToeDistance_RightStance.hh"

namespace RightStance
{

void Body2ToeDistance_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
