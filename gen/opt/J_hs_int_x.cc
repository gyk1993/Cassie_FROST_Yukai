/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:54 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t206;
  double t2567;
  double t2568;
  double t2588;
  double t2594;
  double t2595;
  double t2598;
  double t2604;
  double t2605;
  double t2601;
  double t2612;
  double t2614;
  double t2620;
  double t2621;
  double t2626;
  double t2627;
  double t2631;
  double t2634;
  double t2642;
  double t2644;
  double t2650;
  double t2654;
  double t2664;
  double t2666;
  double t2672;
  double t2673;
  double t2677;
  double t2678;
  double t2682;
  double t2683;
  double t2689;
  double t2690;
  double t2694;
  double t2695;
  double t2701;
  double t2702;
  double t2706;
  double t2709;
  double t2713;
  double t2714;
  double t2720;
  double t2721;
  double t2725;
  double t2726;
  double t2730;
  double t2731;
  double t2735;
  double t2736;
  double t2740;
  double t2741;
  double t2744;
  double t2745;
  double t2750;
  double t2751;
  double t2748;
  double t2749;
  double t2754;
  double t2755;
  double t2758;
  double t2759;
  double t2762;
  double t2763;
  double t2766;
  double t2767;
  double t2770;
  double t2771;
  double t2774;
  double t2775;
  double t2778;
  double t2779;
  double t2782;
  double t2783;
  double t2786;
  double t2787;
  double t2790;
  double t2791;
  double t2794;
  double t2795;
  double t2798;
  double t2799;
  double t2802;
  double t2803;
  double t2806;
  double t2807;
  double t2810;
  double t2811;
  double t2814;
  double t2815;
  double t2818;
  double t2819;
  double t2822;
  double t2823;
  double t2826;
  double t2827;
  double t2830;
  double t2831;
  t206 = 4.*var5[0];
  t2567 = t206 + var7[0] + var3[0];
  t2568 = -1. + var8[0];
  t2588 = 1/t2568;
  t2594 = -1.*var1[0];
  t2595 = t2594 + var1[1];
  t2598 = -0.333333333333333*t2588*t2595;
  t2604 = 4.*var5[1];
  t2605 = t2604 + var7[1] + var3[1];
  t2601 = -1.33333333333333*t2588*t2595;
  t2612 = 4.*var5[2];
  t2614 = t2612 + var7[2] + var3[2];
  t2620 = 4.*var5[3];
  t2621 = t2620 + var7[3] + var3[3];
  t2626 = 4.*var5[4];
  t2627 = t2626 + var7[4] + var3[4];
  t2631 = 4.*var5[5];
  t2634 = t2631 + var7[5] + var3[5];
  t2642 = 4.*var5[6];
  t2644 = t2642 + var7[6] + var3[6];
  t2650 = 4.*var5[7];
  t2654 = t2650 + var7[7] + var3[7];
  t2664 = 4.*var5[8];
  t2666 = t2664 + var7[8] + var3[8];
  t2672 = 4.*var5[9];
  t2673 = t2672 + var7[9] + var3[9];
  t2677 = 4.*var5[10];
  t2678 = t2677 + var7[10] + var3[10];
  t2682 = 4.*var5[11];
  t2683 = t2682 + var7[11] + var3[11];
  t2689 = 4.*var5[12];
  t2690 = t2689 + var7[12] + var3[12];
  t2694 = 4.*var5[13];
  t2695 = t2694 + var7[13] + var3[13];
  t2701 = 4.*var5[14];
  t2702 = t2701 + var7[14] + var3[14];
  t2706 = 4.*var5[15];
  t2709 = t2706 + var7[15] + var3[15];
  t2713 = 4.*var5[16];
  t2714 = t2713 + var7[16] + var3[16];
  t2720 = 4.*var5[17];
  t2721 = t2720 + var7[17] + var3[17];
  t2725 = 4.*var5[18];
  t2726 = t2725 + var7[18] + var3[18];
  t2730 = 4.*var5[19];
  t2731 = t2730 + var7[19] + var3[19];
  t2735 = 4.*var5[20];
  t2736 = t2735 + var7[20] + var3[20];
  t2740 = 4.*var5[21];
  t2741 = t2740 + var7[21] + var3[21];
  t2744 = -1.*var7[0];
  t2745 = t2744 + var3[0];
  t2750 = -1.*var7[1];
  t2751 = t2750 + var3[1];
  t2748 = -0.25*t2588*t2595;
  t2749 = 0.25*t2588*t2595;
  t2754 = -1.*var7[2];
  t2755 = t2754 + var3[2];
  t2758 = -1.*var7[3];
  t2759 = t2758 + var3[3];
  t2762 = -1.*var7[4];
  t2763 = t2762 + var3[4];
  t2766 = -1.*var7[5];
  t2767 = t2766 + var3[5];
  t2770 = -1.*var7[6];
  t2771 = t2770 + var3[6];
  t2774 = -1.*var7[7];
  t2775 = t2774 + var3[7];
  t2778 = -1.*var7[8];
  t2779 = t2778 + var3[8];
  t2782 = -1.*var7[9];
  t2783 = t2782 + var3[9];
  t2786 = -1.*var7[10];
  t2787 = t2786 + var3[10];
  t2790 = -1.*var7[11];
  t2791 = t2790 + var3[11];
  t2794 = -1.*var7[12];
  t2795 = t2794 + var3[12];
  t2798 = -1.*var7[13];
  t2799 = t2798 + var3[13];
  t2802 = -1.*var7[14];
  t2803 = t2802 + var3[14];
  t2806 = -1.*var7[15];
  t2807 = t2806 + var3[15];
  t2810 = -1.*var7[16];
  t2811 = t2810 + var3[16];
  t2814 = -1.*var7[17];
  t2815 = t2814 + var3[17];
  t2818 = -1.*var7[18];
  t2819 = t2818 + var3[18];
  t2822 = -1.*var7[19];
  t2823 = t2822 + var3[19];
  t2826 = -1.*var7[20];
  t2827 = t2826 + var3[20];
  t2830 = -1.*var7[21];
  t2831 = t2830 + var3[21];
  p_output1[0]=0.333333333333333*t2567*t2588;
  p_output1[1]=-0.333333333333333*t2567*t2588;
  p_output1[2]=-1.;
  p_output1[3]=t2598;
  p_output1[4]=t2601;
  p_output1[5]=1.;
  p_output1[6]=t2598;
  p_output1[7]=0.333333333333333*t2588*t2605;
  p_output1[8]=-0.333333333333333*t2588*t2605;
  p_output1[9]=-1.;
  p_output1[10]=t2598;
  p_output1[11]=t2601;
  p_output1[12]=1.;
  p_output1[13]=t2598;
  p_output1[14]=0.333333333333333*t2588*t2614;
  p_output1[15]=-0.333333333333333*t2588*t2614;
  p_output1[16]=-1.;
  p_output1[17]=t2598;
  p_output1[18]=t2601;
  p_output1[19]=1.;
  p_output1[20]=t2598;
  p_output1[21]=0.333333333333333*t2588*t2621;
  p_output1[22]=-0.333333333333333*t2588*t2621;
  p_output1[23]=-1.;
  p_output1[24]=t2598;
  p_output1[25]=t2601;
  p_output1[26]=1.;
  p_output1[27]=t2598;
  p_output1[28]=0.333333333333333*t2588*t2627;
  p_output1[29]=-0.333333333333333*t2588*t2627;
  p_output1[30]=-1.;
  p_output1[31]=t2598;
  p_output1[32]=t2601;
  p_output1[33]=1.;
  p_output1[34]=t2598;
  p_output1[35]=0.333333333333333*t2588*t2634;
  p_output1[36]=-0.333333333333333*t2588*t2634;
  p_output1[37]=-1.;
  p_output1[38]=t2598;
  p_output1[39]=t2601;
  p_output1[40]=1.;
  p_output1[41]=t2598;
  p_output1[42]=0.333333333333333*t2588*t2644;
  p_output1[43]=-0.333333333333333*t2588*t2644;
  p_output1[44]=-1.;
  p_output1[45]=t2598;
  p_output1[46]=t2601;
  p_output1[47]=1.;
  p_output1[48]=t2598;
  p_output1[49]=0.333333333333333*t2588*t2654;
  p_output1[50]=-0.333333333333333*t2588*t2654;
  p_output1[51]=-1.;
  p_output1[52]=t2598;
  p_output1[53]=t2601;
  p_output1[54]=1.;
  p_output1[55]=t2598;
  p_output1[56]=0.333333333333333*t2588*t2666;
  p_output1[57]=-0.333333333333333*t2588*t2666;
  p_output1[58]=-1.;
  p_output1[59]=t2598;
  p_output1[60]=t2601;
  p_output1[61]=1.;
  p_output1[62]=t2598;
  p_output1[63]=0.333333333333333*t2588*t2673;
  p_output1[64]=-0.333333333333333*t2588*t2673;
  p_output1[65]=-1.;
  p_output1[66]=t2598;
  p_output1[67]=t2601;
  p_output1[68]=1.;
  p_output1[69]=t2598;
  p_output1[70]=0.333333333333333*t2588*t2678;
  p_output1[71]=-0.333333333333333*t2588*t2678;
  p_output1[72]=-1.;
  p_output1[73]=t2598;
  p_output1[74]=t2601;
  p_output1[75]=1.;
  p_output1[76]=t2598;
  p_output1[77]=0.333333333333333*t2588*t2683;
  p_output1[78]=-0.333333333333333*t2588*t2683;
  p_output1[79]=-1.;
  p_output1[80]=t2598;
  p_output1[81]=t2601;
  p_output1[82]=1.;
  p_output1[83]=t2598;
  p_output1[84]=0.333333333333333*t2588*t2690;
  p_output1[85]=-0.333333333333333*t2588*t2690;
  p_output1[86]=-1.;
  p_output1[87]=t2598;
  p_output1[88]=t2601;
  p_output1[89]=1.;
  p_output1[90]=t2598;
  p_output1[91]=0.333333333333333*t2588*t2695;
  p_output1[92]=-0.333333333333333*t2588*t2695;
  p_output1[93]=-1.;
  p_output1[94]=t2598;
  p_output1[95]=t2601;
  p_output1[96]=1.;
  p_output1[97]=t2598;
  p_output1[98]=0.333333333333333*t2588*t2702;
  p_output1[99]=-0.333333333333333*t2588*t2702;
  p_output1[100]=-1.;
  p_output1[101]=t2598;
  p_output1[102]=t2601;
  p_output1[103]=1.;
  p_output1[104]=t2598;
  p_output1[105]=0.333333333333333*t2588*t2709;
  p_output1[106]=-0.333333333333333*t2588*t2709;
  p_output1[107]=-1.;
  p_output1[108]=t2598;
  p_output1[109]=t2601;
  p_output1[110]=1.;
  p_output1[111]=t2598;
  p_output1[112]=0.333333333333333*t2588*t2714;
  p_output1[113]=-0.333333333333333*t2588*t2714;
  p_output1[114]=-1.;
  p_output1[115]=t2598;
  p_output1[116]=t2601;
  p_output1[117]=1.;
  p_output1[118]=t2598;
  p_output1[119]=0.333333333333333*t2588*t2721;
  p_output1[120]=-0.333333333333333*t2588*t2721;
  p_output1[121]=-1.;
  p_output1[122]=t2598;
  p_output1[123]=t2601;
  p_output1[124]=1.;
  p_output1[125]=t2598;
  p_output1[126]=0.333333333333333*t2588*t2726;
  p_output1[127]=-0.333333333333333*t2588*t2726;
  p_output1[128]=-1.;
  p_output1[129]=t2598;
  p_output1[130]=t2601;
  p_output1[131]=1.;
  p_output1[132]=t2598;
  p_output1[133]=0.333333333333333*t2588*t2731;
  p_output1[134]=-0.333333333333333*t2588*t2731;
  p_output1[135]=-1.;
  p_output1[136]=t2598;
  p_output1[137]=t2601;
  p_output1[138]=1.;
  p_output1[139]=t2598;
  p_output1[140]=0.333333333333333*t2588*t2736;
  p_output1[141]=-0.333333333333333*t2588*t2736;
  p_output1[142]=-1.;
  p_output1[143]=t2598;
  p_output1[144]=t2601;
  p_output1[145]=1.;
  p_output1[146]=t2598;
  p_output1[147]=0.333333333333333*t2588*t2741;
  p_output1[148]=-0.333333333333333*t2588*t2741;
  p_output1[149]=-1.;
  p_output1[150]=t2598;
  p_output1[151]=t2601;
  p_output1[152]=1.;
  p_output1[153]=t2598;
  p_output1[154]=0.25*t2588*t2745;
  p_output1[155]=-0.25*t2588*t2745;
  p_output1[156]=-0.5;
  p_output1[157]=t2748;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t2749;
  p_output1[161]=0.25*t2588*t2751;
  p_output1[162]=-0.25*t2588*t2751;
  p_output1[163]=-0.5;
  p_output1[164]=t2748;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t2749;
  p_output1[168]=0.25*t2588*t2755;
  p_output1[169]=-0.25*t2588*t2755;
  p_output1[170]=-0.5;
  p_output1[171]=t2748;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t2749;
  p_output1[175]=0.25*t2588*t2759;
  p_output1[176]=-0.25*t2588*t2759;
  p_output1[177]=-0.5;
  p_output1[178]=t2748;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t2749;
  p_output1[182]=0.25*t2588*t2763;
  p_output1[183]=-0.25*t2588*t2763;
  p_output1[184]=-0.5;
  p_output1[185]=t2748;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t2749;
  p_output1[189]=0.25*t2588*t2767;
  p_output1[190]=-0.25*t2588*t2767;
  p_output1[191]=-0.5;
  p_output1[192]=t2748;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t2749;
  p_output1[196]=0.25*t2588*t2771;
  p_output1[197]=-0.25*t2588*t2771;
  p_output1[198]=-0.5;
  p_output1[199]=t2748;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t2749;
  p_output1[203]=0.25*t2588*t2775;
  p_output1[204]=-0.25*t2588*t2775;
  p_output1[205]=-0.5;
  p_output1[206]=t2748;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t2749;
  p_output1[210]=0.25*t2588*t2779;
  p_output1[211]=-0.25*t2588*t2779;
  p_output1[212]=-0.5;
  p_output1[213]=t2748;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t2749;
  p_output1[217]=0.25*t2588*t2783;
  p_output1[218]=-0.25*t2588*t2783;
  p_output1[219]=-0.5;
  p_output1[220]=t2748;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t2749;
  p_output1[224]=0.25*t2588*t2787;
  p_output1[225]=-0.25*t2588*t2787;
  p_output1[226]=-0.5;
  p_output1[227]=t2748;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t2749;
  p_output1[231]=0.25*t2588*t2791;
  p_output1[232]=-0.25*t2588*t2791;
  p_output1[233]=-0.5;
  p_output1[234]=t2748;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t2749;
  p_output1[238]=0.25*t2588*t2795;
  p_output1[239]=-0.25*t2588*t2795;
  p_output1[240]=-0.5;
  p_output1[241]=t2748;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t2749;
  p_output1[245]=0.25*t2588*t2799;
  p_output1[246]=-0.25*t2588*t2799;
  p_output1[247]=-0.5;
  p_output1[248]=t2748;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t2749;
  p_output1[252]=0.25*t2588*t2803;
  p_output1[253]=-0.25*t2588*t2803;
  p_output1[254]=-0.5;
  p_output1[255]=t2748;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t2749;
  p_output1[259]=0.25*t2588*t2807;
  p_output1[260]=-0.25*t2588*t2807;
  p_output1[261]=-0.5;
  p_output1[262]=t2748;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t2749;
  p_output1[266]=0.25*t2588*t2811;
  p_output1[267]=-0.25*t2588*t2811;
  p_output1[268]=-0.5;
  p_output1[269]=t2748;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t2749;
  p_output1[273]=0.25*t2588*t2815;
  p_output1[274]=-0.25*t2588*t2815;
  p_output1[275]=-0.5;
  p_output1[276]=t2748;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t2749;
  p_output1[280]=0.25*t2588*t2819;
  p_output1[281]=-0.25*t2588*t2819;
  p_output1[282]=-0.5;
  p_output1[283]=t2748;
  p_output1[284]=1.;
  p_output1[285]=-0.5;
  p_output1[286]=t2749;
  p_output1[287]=0.25*t2588*t2823;
  p_output1[288]=-0.25*t2588*t2823;
  p_output1[289]=-0.5;
  p_output1[290]=t2748;
  p_output1[291]=1.;
  p_output1[292]=-0.5;
  p_output1[293]=t2749;
  p_output1[294]=0.25*t2588*t2827;
  p_output1[295]=-0.25*t2588*t2827;
  p_output1[296]=-0.5;
  p_output1[297]=t2748;
  p_output1[298]=1.;
  p_output1[299]=-0.5;
  p_output1[300]=t2749;
  p_output1[301]=0.25*t2588*t2831;
  p_output1[302]=-0.25*t2588*t2831;
  p_output1[303]=-0.5;
  p_output1[304]=t2748;
  p_output1[305]=1.;
  p_output1[306]=-0.5;
  p_output1[307]=t2749;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 308, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_x.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
