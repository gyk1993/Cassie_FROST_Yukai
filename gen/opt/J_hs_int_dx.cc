/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:51 GMT-04:00
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
  double t149;
  double t2516;
  double t2540;
  double t2562;
  double t2588;
  double t2594;
  double t2595;
  double t2612;
  double t2614;
  double t2605;
  double t2627;
  double t2631;
  double t2650;
  double t2654;
  double t2673;
  double t2677;
  double t2689;
  double t2690;
  double t2702;
  double t2705;
  double t2719;
  double t2720;
  double t2728;
  double t2731;
  double t2739;
  double t2740;
  double t2748;
  double t2751;
  double t2759;
  double t2760;
  double t2768;
  double t2771;
  double t2779;
  double t2780;
  double t2788;
  double t2791;
  double t2799;
  double t2800;
  double t2804;
  double t2805;
  double t2809;
  double t2810;
  double t2814;
  double t2815;
  double t2819;
  double t2820;
  double t2824;
  double t2825;
  double t2828;
  double t2829;
  double t2832;
  double t2833;
  double t2838;
  double t2839;
  double t2836;
  double t2837;
  double t2842;
  double t2843;
  double t2846;
  double t2847;
  double t2850;
  double t2851;
  double t2854;
  double t2855;
  double t2858;
  double t2859;
  double t2862;
  double t2863;
  double t2866;
  double t2867;
  double t2870;
  double t2871;
  double t2874;
  double t2875;
  double t2878;
  double t2879;
  double t2882;
  double t2883;
  double t2886;
  double t2887;
  double t2890;
  double t2891;
  double t2894;
  double t2895;
  double t2898;
  double t2899;
  double t2902;
  double t2903;
  double t2906;
  double t2907;
  double t2910;
  double t2911;
  double t2914;
  double t2915;
  double t2918;
  double t2919;
  t149 = 4.*var5[0];
  t2516 = var3[0] + t149 + var7[0];
  t2540 = -1. + var8[0];
  t2562 = 1/t2540;
  t2588 = -1.*var1[0];
  t2594 = t2588 + var1[1];
  t2595 = -0.333333333333333*t2562*t2594;
  t2612 = 4.*var5[1];
  t2614 = var3[1] + t2612 + var7[1];
  t2605 = -1.33333333333333*t2562*t2594;
  t2627 = 4.*var5[2];
  t2631 = var3[2] + t2627 + var7[2];
  t2650 = 4.*var5[3];
  t2654 = var3[3] + t2650 + var7[3];
  t2673 = 4.*var5[4];
  t2677 = var3[4] + t2673 + var7[4];
  t2689 = 4.*var5[5];
  t2690 = var3[5] + t2689 + var7[5];
  t2702 = 4.*var5[6];
  t2705 = var3[6] + t2702 + var7[6];
  t2719 = 4.*var5[7];
  t2720 = var3[7] + t2719 + var7[7];
  t2728 = 4.*var5[8];
  t2731 = var3[8] + t2728 + var7[8];
  t2739 = 4.*var5[9];
  t2740 = var3[9] + t2739 + var7[9];
  t2748 = 4.*var5[10];
  t2751 = var3[10] + t2748 + var7[10];
  t2759 = 4.*var5[11];
  t2760 = var3[11] + t2759 + var7[11];
  t2768 = 4.*var5[12];
  t2771 = var3[12] + t2768 + var7[12];
  t2779 = 4.*var5[13];
  t2780 = var3[13] + t2779 + var7[13];
  t2788 = 4.*var5[14];
  t2791 = var3[14] + t2788 + var7[14];
  t2799 = 4.*var5[15];
  t2800 = var3[15] + t2799 + var7[15];
  t2804 = 4.*var5[16];
  t2805 = var3[16] + t2804 + var7[16];
  t2809 = 4.*var5[17];
  t2810 = var3[17] + t2809 + var7[17];
  t2814 = 4.*var5[18];
  t2815 = var3[18] + t2814 + var7[18];
  t2819 = 4.*var5[19];
  t2820 = var3[19] + t2819 + var7[19];
  t2824 = 4.*var5[20];
  t2825 = var3[20] + t2824 + var7[20];
  t2828 = 4.*var5[21];
  t2829 = var3[21] + t2828 + var7[21];
  t2832 = -1.*var7[0];
  t2833 = var3[0] + t2832;
  t2838 = -1.*var7[1];
  t2839 = var3[1] + t2838;
  t2836 = -0.25*t2562*t2594;
  t2837 = 0.25*t2562*t2594;
  t2842 = -1.*var7[2];
  t2843 = var3[2] + t2842;
  t2846 = -1.*var7[3];
  t2847 = var3[3] + t2846;
  t2850 = -1.*var7[4];
  t2851 = var3[4] + t2850;
  t2854 = -1.*var7[5];
  t2855 = var3[5] + t2854;
  t2858 = -1.*var7[6];
  t2859 = var3[6] + t2858;
  t2862 = -1.*var7[7];
  t2863 = var3[7] + t2862;
  t2866 = -1.*var7[8];
  t2867 = var3[8] + t2866;
  t2870 = -1.*var7[9];
  t2871 = var3[9] + t2870;
  t2874 = -1.*var7[10];
  t2875 = var3[10] + t2874;
  t2878 = -1.*var7[11];
  t2879 = var3[11] + t2878;
  t2882 = -1.*var7[12];
  t2883 = var3[12] + t2882;
  t2886 = -1.*var7[13];
  t2887 = var3[13] + t2886;
  t2890 = -1.*var7[14];
  t2891 = var3[14] + t2890;
  t2894 = -1.*var7[15];
  t2895 = var3[15] + t2894;
  t2898 = -1.*var7[16];
  t2899 = var3[16] + t2898;
  t2902 = -1.*var7[17];
  t2903 = var3[17] + t2902;
  t2906 = -1.*var7[18];
  t2907 = var3[18] + t2906;
  t2910 = -1.*var7[19];
  t2911 = var3[19] + t2910;
  t2914 = -1.*var7[20];
  t2915 = var3[20] + t2914;
  t2918 = -1.*var7[21];
  t2919 = var3[21] + t2918;
  p_output1[0]=0.333333333333333*t2516*t2562;
  p_output1[1]=-0.333333333333333*t2516*t2562;
  p_output1[2]=-1.;
  p_output1[3]=t2595;
  p_output1[4]=t2605;
  p_output1[5]=1.;
  p_output1[6]=t2595;
  p_output1[7]=0.333333333333333*t2562*t2614;
  p_output1[8]=-0.333333333333333*t2562*t2614;
  p_output1[9]=-1.;
  p_output1[10]=t2595;
  p_output1[11]=t2605;
  p_output1[12]=1.;
  p_output1[13]=t2595;
  p_output1[14]=0.333333333333333*t2562*t2631;
  p_output1[15]=-0.333333333333333*t2562*t2631;
  p_output1[16]=-1.;
  p_output1[17]=t2595;
  p_output1[18]=t2605;
  p_output1[19]=1.;
  p_output1[20]=t2595;
  p_output1[21]=0.333333333333333*t2562*t2654;
  p_output1[22]=-0.333333333333333*t2562*t2654;
  p_output1[23]=-1.;
  p_output1[24]=t2595;
  p_output1[25]=t2605;
  p_output1[26]=1.;
  p_output1[27]=t2595;
  p_output1[28]=0.333333333333333*t2562*t2677;
  p_output1[29]=-0.333333333333333*t2562*t2677;
  p_output1[30]=-1.;
  p_output1[31]=t2595;
  p_output1[32]=t2605;
  p_output1[33]=1.;
  p_output1[34]=t2595;
  p_output1[35]=0.333333333333333*t2562*t2690;
  p_output1[36]=-0.333333333333333*t2562*t2690;
  p_output1[37]=-1.;
  p_output1[38]=t2595;
  p_output1[39]=t2605;
  p_output1[40]=1.;
  p_output1[41]=t2595;
  p_output1[42]=0.333333333333333*t2562*t2705;
  p_output1[43]=-0.333333333333333*t2562*t2705;
  p_output1[44]=-1.;
  p_output1[45]=t2595;
  p_output1[46]=t2605;
  p_output1[47]=1.;
  p_output1[48]=t2595;
  p_output1[49]=0.333333333333333*t2562*t2720;
  p_output1[50]=-0.333333333333333*t2562*t2720;
  p_output1[51]=-1.;
  p_output1[52]=t2595;
  p_output1[53]=t2605;
  p_output1[54]=1.;
  p_output1[55]=t2595;
  p_output1[56]=0.333333333333333*t2562*t2731;
  p_output1[57]=-0.333333333333333*t2562*t2731;
  p_output1[58]=-1.;
  p_output1[59]=t2595;
  p_output1[60]=t2605;
  p_output1[61]=1.;
  p_output1[62]=t2595;
  p_output1[63]=0.333333333333333*t2562*t2740;
  p_output1[64]=-0.333333333333333*t2562*t2740;
  p_output1[65]=-1.;
  p_output1[66]=t2595;
  p_output1[67]=t2605;
  p_output1[68]=1.;
  p_output1[69]=t2595;
  p_output1[70]=0.333333333333333*t2562*t2751;
  p_output1[71]=-0.333333333333333*t2562*t2751;
  p_output1[72]=-1.;
  p_output1[73]=t2595;
  p_output1[74]=t2605;
  p_output1[75]=1.;
  p_output1[76]=t2595;
  p_output1[77]=0.333333333333333*t2562*t2760;
  p_output1[78]=-0.333333333333333*t2562*t2760;
  p_output1[79]=-1.;
  p_output1[80]=t2595;
  p_output1[81]=t2605;
  p_output1[82]=1.;
  p_output1[83]=t2595;
  p_output1[84]=0.333333333333333*t2562*t2771;
  p_output1[85]=-0.333333333333333*t2562*t2771;
  p_output1[86]=-1.;
  p_output1[87]=t2595;
  p_output1[88]=t2605;
  p_output1[89]=1.;
  p_output1[90]=t2595;
  p_output1[91]=0.333333333333333*t2562*t2780;
  p_output1[92]=-0.333333333333333*t2562*t2780;
  p_output1[93]=-1.;
  p_output1[94]=t2595;
  p_output1[95]=t2605;
  p_output1[96]=1.;
  p_output1[97]=t2595;
  p_output1[98]=0.333333333333333*t2562*t2791;
  p_output1[99]=-0.333333333333333*t2562*t2791;
  p_output1[100]=-1.;
  p_output1[101]=t2595;
  p_output1[102]=t2605;
  p_output1[103]=1.;
  p_output1[104]=t2595;
  p_output1[105]=0.333333333333333*t2562*t2800;
  p_output1[106]=-0.333333333333333*t2562*t2800;
  p_output1[107]=-1.;
  p_output1[108]=t2595;
  p_output1[109]=t2605;
  p_output1[110]=1.;
  p_output1[111]=t2595;
  p_output1[112]=0.333333333333333*t2562*t2805;
  p_output1[113]=-0.333333333333333*t2562*t2805;
  p_output1[114]=-1.;
  p_output1[115]=t2595;
  p_output1[116]=t2605;
  p_output1[117]=1.;
  p_output1[118]=t2595;
  p_output1[119]=0.333333333333333*t2562*t2810;
  p_output1[120]=-0.333333333333333*t2562*t2810;
  p_output1[121]=-1.;
  p_output1[122]=t2595;
  p_output1[123]=t2605;
  p_output1[124]=1.;
  p_output1[125]=t2595;
  p_output1[126]=0.333333333333333*t2562*t2815;
  p_output1[127]=-0.333333333333333*t2562*t2815;
  p_output1[128]=-1.;
  p_output1[129]=t2595;
  p_output1[130]=t2605;
  p_output1[131]=1.;
  p_output1[132]=t2595;
  p_output1[133]=0.333333333333333*t2562*t2820;
  p_output1[134]=-0.333333333333333*t2562*t2820;
  p_output1[135]=-1.;
  p_output1[136]=t2595;
  p_output1[137]=t2605;
  p_output1[138]=1.;
  p_output1[139]=t2595;
  p_output1[140]=0.333333333333333*t2562*t2825;
  p_output1[141]=-0.333333333333333*t2562*t2825;
  p_output1[142]=-1.;
  p_output1[143]=t2595;
  p_output1[144]=t2605;
  p_output1[145]=1.;
  p_output1[146]=t2595;
  p_output1[147]=0.333333333333333*t2562*t2829;
  p_output1[148]=-0.333333333333333*t2562*t2829;
  p_output1[149]=-1.;
  p_output1[150]=t2595;
  p_output1[151]=t2605;
  p_output1[152]=1.;
  p_output1[153]=t2595;
  p_output1[154]=0.25*t2562*t2833;
  p_output1[155]=-0.25*t2562*t2833;
  p_output1[156]=-0.5;
  p_output1[157]=t2836;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t2837;
  p_output1[161]=0.25*t2562*t2839;
  p_output1[162]=-0.25*t2562*t2839;
  p_output1[163]=-0.5;
  p_output1[164]=t2836;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t2837;
  p_output1[168]=0.25*t2562*t2843;
  p_output1[169]=-0.25*t2562*t2843;
  p_output1[170]=-0.5;
  p_output1[171]=t2836;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t2837;
  p_output1[175]=0.25*t2562*t2847;
  p_output1[176]=-0.25*t2562*t2847;
  p_output1[177]=-0.5;
  p_output1[178]=t2836;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t2837;
  p_output1[182]=0.25*t2562*t2851;
  p_output1[183]=-0.25*t2562*t2851;
  p_output1[184]=-0.5;
  p_output1[185]=t2836;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t2837;
  p_output1[189]=0.25*t2562*t2855;
  p_output1[190]=-0.25*t2562*t2855;
  p_output1[191]=-0.5;
  p_output1[192]=t2836;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t2837;
  p_output1[196]=0.25*t2562*t2859;
  p_output1[197]=-0.25*t2562*t2859;
  p_output1[198]=-0.5;
  p_output1[199]=t2836;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t2837;
  p_output1[203]=0.25*t2562*t2863;
  p_output1[204]=-0.25*t2562*t2863;
  p_output1[205]=-0.5;
  p_output1[206]=t2836;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t2837;
  p_output1[210]=0.25*t2562*t2867;
  p_output1[211]=-0.25*t2562*t2867;
  p_output1[212]=-0.5;
  p_output1[213]=t2836;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t2837;
  p_output1[217]=0.25*t2562*t2871;
  p_output1[218]=-0.25*t2562*t2871;
  p_output1[219]=-0.5;
  p_output1[220]=t2836;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t2837;
  p_output1[224]=0.25*t2562*t2875;
  p_output1[225]=-0.25*t2562*t2875;
  p_output1[226]=-0.5;
  p_output1[227]=t2836;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t2837;
  p_output1[231]=0.25*t2562*t2879;
  p_output1[232]=-0.25*t2562*t2879;
  p_output1[233]=-0.5;
  p_output1[234]=t2836;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t2837;
  p_output1[238]=0.25*t2562*t2883;
  p_output1[239]=-0.25*t2562*t2883;
  p_output1[240]=-0.5;
  p_output1[241]=t2836;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t2837;
  p_output1[245]=0.25*t2562*t2887;
  p_output1[246]=-0.25*t2562*t2887;
  p_output1[247]=-0.5;
  p_output1[248]=t2836;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t2837;
  p_output1[252]=0.25*t2562*t2891;
  p_output1[253]=-0.25*t2562*t2891;
  p_output1[254]=-0.5;
  p_output1[255]=t2836;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t2837;
  p_output1[259]=0.25*t2562*t2895;
  p_output1[260]=-0.25*t2562*t2895;
  p_output1[261]=-0.5;
  p_output1[262]=t2836;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t2837;
  p_output1[266]=0.25*t2562*t2899;
  p_output1[267]=-0.25*t2562*t2899;
  p_output1[268]=-0.5;
  p_output1[269]=t2836;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t2837;
  p_output1[273]=0.25*t2562*t2903;
  p_output1[274]=-0.25*t2562*t2903;
  p_output1[275]=-0.5;
  p_output1[276]=t2836;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t2837;
  p_output1[280]=0.25*t2562*t2907;
  p_output1[281]=-0.25*t2562*t2907;
  p_output1[282]=-0.5;
  p_output1[283]=t2836;
  p_output1[284]=1.;
  p_output1[285]=-0.5;
  p_output1[286]=t2837;
  p_output1[287]=0.25*t2562*t2911;
  p_output1[288]=-0.25*t2562*t2911;
  p_output1[289]=-0.5;
  p_output1[290]=t2836;
  p_output1[291]=1.;
  p_output1[292]=-0.5;
  p_output1[293]=t2837;
  p_output1[294]=0.25*t2562*t2915;
  p_output1[295]=-0.25*t2562*t2915;
  p_output1[296]=-0.5;
  p_output1[297]=t2836;
  p_output1[298]=1.;
  p_output1[299]=-0.5;
  p_output1[300]=t2837;
  p_output1[301]=0.25*t2562*t2919;
  p_output1[302]=-0.25*t2562*t2919;
  p_output1[303]=-0.5;
  p_output1[304]=t2836;
  p_output1[305]=1.;
  p_output1[306]=-0.5;
  p_output1[307]=t2837;
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

#include "J_hs_int_dx.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void J_hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
