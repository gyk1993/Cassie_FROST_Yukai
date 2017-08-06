/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:22 GMT-04:00
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
  double t2954;
  double t2931;
  double t2985;
  double t2923;
  double t3006;
  double t3082;
  double t2950;
  double t3058;
  double t3066;
  double t1152;
  double t3090;
  double t3112;
  double t3159;
  double t3224;
  double t3077;
  double t3177;
  double t3201;
  double t619;
  double t3233;
  double t3273;
  double t3277;
  double t3278;
  double t3284;
  double t3288;
  double t3292;
  double t3300;
  double t3304;
  double t617;
  double t3365;
  double t3382;
  double t3383;
  double t3385;
  double t3430;
  double t3381;
  double t3434;
  double t3435;
  double t3437;
  double t3453;
  double t3457;
  double t3328;
  double t3436;
  double t3461;
  double t3465;
  double t3473;
  double t3474;
  double t3475;
  double t3477;
  double t3478;
  double t3481;
  double t3488;
  double t3491;
  double t3494;
  double t3536;
  double t3546;
  double t3548;
  double t3531;
  double t3549;
  double t3550;
  double t3553;
  double t3564;
  double t3568;
  double t3552;
  double t3572;
  double t3576;
  double t3582;
  double t3583;
  double t3588;
  double t3592;
  double t3596;
  double t3620;
  double t3621;
  double t3626;
  double t3627;
  double t3218;
  double t3316;
  double t3320;
  double t3331;
  double t3332;
  double t3337;
  double t3469;
  double t3502;
  double t3504;
  double t3507;
  double t3510;
  double t3511;
  double t3581;
  double t3628;
  double t3631;
  double t3636;
  double t3640;
  double t3648;
  double t3731;
  double t3739;
  double t3812;
  double t3816;
  double t3854;
  double t3862;
  double t3652;
  double t3660;
  double t3672;
  double t3758;
  double t3759;
  double t3743;
  double t3747;
  double t3751;
  double t3762;
  double t3763;
  double t3766;
  double t3770;
  double t3778;
  double t3779;
  double t3784;
  double t3788;
  double t3796;
  double t3804;
  double t3817;
  double t3818;
  double t3820;
  double t3823;
  double t3824;
  double t3825;
  double t3838;
  double t3842;
  double t3846;
  double t3870;
  double t3871;
  double t3872;
  double t3874;
  double t3875;
  double t3876;
  double t3676;
  double t3680;
  double t3688;
  double t3689;
  double t3690;
  double t3695;
  t2954 = Cos(var1[14]);
  t2931 = Sin(var1[4]);
  t2985 = Cos(var1[4]);
  t2923 = Sin(var1[14]);
  t3006 = Sin(var1[5]);
  t3082 = Cos(var1[15]);
  t2950 = t2923*t2931;
  t3058 = -1.*t2954*t2985*t3006;
  t3066 = t2950 + t3058;
  t1152 = Sin(var1[15]);
  t3090 = t2954*t2931;
  t3112 = t2985*t2923*t3006;
  t3159 = t3090 + t3112;
  t3224 = Cos(var1[17]);
  t3077 = -1.*t1152*t3066;
  t3177 = t3082*t3159;
  t3201 = t3077 + t3177;
  t619 = Sin(var1[17]);
  t3233 = Cos(var1[16]);
  t3273 = Cos(var1[5]);
  t3277 = t3233*t2985*t3273;
  t3278 = Sin(var1[16]);
  t3284 = t3082*t3066;
  t3288 = t1152*t3159;
  t3292 = t3284 + t3288;
  t3300 = t3278*t3292;
  t3304 = t3277 + t3300;
  t617 = Sin(var1[18]);
  t3365 = Sin(var1[3]);
  t3382 = Cos(var1[3]);
  t3383 = t3382*t3273;
  t3385 = -1.*t3365*t2931*t3006;
  t3430 = t3383 + t3385;
  t3381 = -1.*t2985*t2923*t3365;
  t3434 = t2954*t3430;
  t3435 = t3381 + t3434;
  t3437 = -1.*t2954*t2985*t3365;
  t3453 = -1.*t2923*t3430;
  t3457 = t3437 + t3453;
  t3328 = Cos(var1[18]);
  t3436 = -1.*t1152*t3435;
  t3461 = t3082*t3457;
  t3465 = t3436 + t3461;
  t3473 = t3273*t3365*t2931;
  t3474 = t3382*t3006;
  t3475 = t3473 + t3474;
  t3477 = t3233*t3475;
  t3478 = t3082*t3435;
  t3481 = t1152*t3457;
  t3488 = t3478 + t3481;
  t3491 = t3278*t3488;
  t3494 = t3477 + t3491;
  t3536 = t3273*t3365;
  t3546 = t3382*t2931*t3006;
  t3548 = t3536 + t3546;
  t3531 = t3382*t2985*t2923;
  t3549 = t2954*t3548;
  t3550 = t3531 + t3549;
  t3553 = t2954*t3382*t2985;
  t3564 = -1.*t2923*t3548;
  t3568 = t3553 + t3564;
  t3552 = -1.*t1152*t3550;
  t3572 = t3082*t3568;
  t3576 = t3552 + t3572;
  t3582 = -1.*t3382*t3273*t2931;
  t3583 = t3365*t3006;
  t3588 = t3582 + t3583;
  t3592 = t3233*t3588;
  t3596 = t3082*t3550;
  t3620 = t1152*t3568;
  t3621 = t3596 + t3620;
  t3626 = t3278*t3621;
  t3627 = t3592 + t3626;
  t3218 = t619*t3201;
  t3316 = t3224*t3304;
  t3320 = t3218 + t3316;
  t3331 = t3224*t3201;
  t3332 = -1.*t619*t3304;
  t3337 = t3331 + t3332;
  t3469 = t619*t3465;
  t3502 = t3224*t3494;
  t3504 = t3469 + t3502;
  t3507 = t3224*t3465;
  t3510 = -1.*t619*t3494;
  t3511 = t3507 + t3510;
  t3581 = t619*t3576;
  t3628 = t3224*t3627;
  t3631 = t3581 + t3628;
  t3636 = t3224*t3576;
  t3640 = -1.*t619*t3627;
  t3648 = t3636 + t3640;
  t3731 = -1.*t3233;
  t3739 = 1. + t3731;
  t3812 = -1.*t3224;
  t3816 = 1. + t3812;
  t3854 = -1.*t3328;
  t3862 = 1. + t3854;
  t3652 = t3328*t3320;
  t3660 = t617*t3337;
  t3672 = t3652 + t3660;
  t3758 = 0.135*t2923;
  t3759 = 0. + t3758;
  t3743 = -0.049*t3739;
  t3747 = -0.135*t3278;
  t3751 = 0. + t3743 + t3747;
  t3762 = -1.*t2954;
  t3763 = 1. + t3762;
  t3766 = -0.135*t3763;
  t3770 = 0. + t3766;
  t3778 = -1.*t3082;
  t3779 = 1. + t3778;
  t3784 = -0.135*t3779;
  t3788 = 0. + t3784;
  t3796 = 0.135*t1152;
  t3804 = 0. + t3796;
  t3817 = -0.09*t3816;
  t3818 = 0.049*t619;
  t3820 = 0. + t3817 + t3818;
  t3823 = -0.135*t3739;
  t3824 = 0.049*t3278;
  t3825 = 0. + t3823 + t3824;
  t3838 = -0.049*t3816;
  t3842 = -0.09*t619;
  t3846 = 0. + t3838 + t3842;
  t3870 = -0.049*t3862;
  t3871 = -0.21*t617;
  t3872 = 0. + t3870 + t3871;
  t3874 = -0.21*t3862;
  t3875 = 0.049*t617;
  t3876 = 0. + t3874 + t3875;
  t3676 = t3328*t3504;
  t3680 = t617*t3511;
  t3688 = t3676 + t3680;
  t3689 = t3328*t3631;
  t3690 = t617*t3648;
  t3695 = t3689 + t3690;
  p_output1[0]=-1.*t3328*t3337 + t3320*t617;
  p_output1[1]=-1.*t3328*t3511 + t3504*t617;
  p_output1[2]=-1.*t3328*t3648 + t3631*t617;
  p_output1[3]=0.;
  p_output1[4]=t3672;
  p_output1[5]=t3688;
  p_output1[6]=t3695;
  p_output1[7]=0.;
  p_output1[8]=t2985*t3273*t3278 - 1.*t3233*t3292;
  p_output1[9]=t3278*t3475 - 1.*t3233*t3488;
  p_output1[10]=t3278*t3588 - 1.*t3233*t3621;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(-1.*t2985*t3273*t3278 + t3233*t3292) - 0.0016*t3672 + t2985*t3273*t3751 + t2931*t3759 - 1.*t2985*t3006*t3770 + t3066*t3788 + t3159*t3804 + t3201*t3820 + t3292*t3825 + t3304*t3846 + t3320*t3872 + t3337*t3876 - 0.2707*(t3328*t3337 - 1.*t3320*t617) + var1[0];
  p_output1[13]=0. - 0.1305*(-1.*t3278*t3475 + t3233*t3488) - 0.0016*t3688 + t3475*t3751 - 1.*t2985*t3365*t3759 + t3430*t3770 + t3435*t3788 + t3457*t3804 + t3465*t3820 + t3488*t3825 + t3494*t3846 + t3504*t3872 + t3511*t3876 - 0.2707*(t3328*t3511 - 1.*t3504*t617) + var1[1];
  p_output1[14]=0. - 0.1305*(-1.*t3278*t3588 + t3233*t3621) - 0.0016*t3695 + t3588*t3751 + t2985*t3382*t3759 + t3548*t3770 + t3550*t3788 + t3568*t3804 + t3576*t3820 + t3621*t3825 + t3627*t3846 + t3631*t3872 + t3648*t3876 - 0.2707*(t3328*t3648 - 1.*t3631*t617) + var1[2];
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

#include "H_fixed_knee_to_shin_right.hh"

namespace SymExpression
{

void H_fixed_knee_to_shin_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
