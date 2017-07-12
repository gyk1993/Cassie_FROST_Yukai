/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:56 GMT-04:00
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
  double t2593;
  double t2608;
  double t2624;
  double t2629;
  double t2646;
  double t2647;
  double t2663;
  double t2671;
  double t2675;
  double t2668;
  double t2685;
  double t2686;
  double t2700;
  double t2704;
  double t2716;
  double t2719;
  double t2729;
  double t2733;
  double t2742;
  double t2743;
  double t2753;
  double t2756;
  double t2764;
  double t2765;
  double t2773;
  double t2776;
  double t2784;
  double t2785;
  double t2793;
  double t2796;
  double t2804;
  double t2805;
  double t2813;
  double t2816;
  double t2824;
  double t2825;
  double t2833;
  double t2834;
  double t2838;
  double t2839;
  double t2843;
  double t2844;
  double t2848;
  double t2849;
  double t2853;
  double t2854;
  double t2858;
  double t2859;
  double t2862;
  double t2863;
  double t2866;
  double t2867;
  double t2872;
  double t2873;
  double t2870;
  double t2871;
  double t2876;
  double t2877;
  double t2880;
  double t2881;
  double t2884;
  double t2885;
  double t2888;
  double t2889;
  double t2892;
  double t2893;
  double t2896;
  double t2897;
  double t2900;
  double t2901;
  double t2904;
  double t2905;
  double t2908;
  double t2909;
  double t2912;
  double t2913;
  double t2916;
  double t2917;
  double t2920;
  double t2921;
  double t2924;
  double t2925;
  double t2928;
  double t2929;
  double t2932;
  double t2933;
  double t2936;
  double t2937;
  double t2940;
  double t2941;
  double t2944;
  double t2945;
  double t2948;
  double t2949;
  double t2952;
  double t2953;
  t2593 = 4.*var5[0];
  t2608 = var3[0] + t2593 + var7[0];
  t2624 = -1. + var8[0];
  t2629 = 1/t2624;
  t2646 = -1.*var1[0];
  t2647 = t2646 + var1[1];
  t2663 = -0.333333333333333*t2629*t2647;
  t2671 = 4.*var5[1];
  t2675 = var3[1] + t2671 + var7[1];
  t2668 = -1.33333333333333*t2629*t2647;
  t2685 = 4.*var5[2];
  t2686 = var3[2] + t2685 + var7[2];
  t2700 = 4.*var5[3];
  t2704 = var3[3] + t2700 + var7[3];
  t2716 = 4.*var5[4];
  t2719 = var3[4] + t2716 + var7[4];
  t2729 = 4.*var5[5];
  t2733 = var3[5] + t2729 + var7[5];
  t2742 = 4.*var5[6];
  t2743 = var3[6] + t2742 + var7[6];
  t2753 = 4.*var5[7];
  t2756 = var3[7] + t2753 + var7[7];
  t2764 = 4.*var5[8];
  t2765 = var3[8] + t2764 + var7[8];
  t2773 = 4.*var5[9];
  t2776 = var3[9] + t2773 + var7[9];
  t2784 = 4.*var5[10];
  t2785 = var3[10] + t2784 + var7[10];
  t2793 = 4.*var5[11];
  t2796 = var3[11] + t2793 + var7[11];
  t2804 = 4.*var5[12];
  t2805 = var3[12] + t2804 + var7[12];
  t2813 = 4.*var5[13];
  t2816 = var3[13] + t2813 + var7[13];
  t2824 = 4.*var5[14];
  t2825 = var3[14] + t2824 + var7[14];
  t2833 = 4.*var5[15];
  t2834 = var3[15] + t2833 + var7[15];
  t2838 = 4.*var5[16];
  t2839 = var3[16] + t2838 + var7[16];
  t2843 = 4.*var5[17];
  t2844 = var3[17] + t2843 + var7[17];
  t2848 = 4.*var5[18];
  t2849 = var3[18] + t2848 + var7[18];
  t2853 = 4.*var5[19];
  t2854 = var3[19] + t2853 + var7[19];
  t2858 = 4.*var5[20];
  t2859 = var3[20] + t2858 + var7[20];
  t2862 = 4.*var5[21];
  t2863 = var3[21] + t2862 + var7[21];
  t2866 = -1.*var7[0];
  t2867 = var3[0] + t2866;
  t2872 = -1.*var7[1];
  t2873 = var3[1] + t2872;
  t2870 = -0.25*t2629*t2647;
  t2871 = 0.25*t2629*t2647;
  t2876 = -1.*var7[2];
  t2877 = var3[2] + t2876;
  t2880 = -1.*var7[3];
  t2881 = var3[3] + t2880;
  t2884 = -1.*var7[4];
  t2885 = var3[4] + t2884;
  t2888 = -1.*var7[5];
  t2889 = var3[5] + t2888;
  t2892 = -1.*var7[6];
  t2893 = var3[6] + t2892;
  t2896 = -1.*var7[7];
  t2897 = var3[7] + t2896;
  t2900 = -1.*var7[8];
  t2901 = var3[8] + t2900;
  t2904 = -1.*var7[9];
  t2905 = var3[9] + t2904;
  t2908 = -1.*var7[10];
  t2909 = var3[10] + t2908;
  t2912 = -1.*var7[11];
  t2913 = var3[11] + t2912;
  t2916 = -1.*var7[12];
  t2917 = var3[12] + t2916;
  t2920 = -1.*var7[13];
  t2921 = var3[13] + t2920;
  t2924 = -1.*var7[14];
  t2925 = var3[14] + t2924;
  t2928 = -1.*var7[15];
  t2929 = var3[15] + t2928;
  t2932 = -1.*var7[16];
  t2933 = var3[16] + t2932;
  t2936 = -1.*var7[17];
  t2937 = var3[17] + t2936;
  t2940 = -1.*var7[18];
  t2941 = var3[18] + t2940;
  t2944 = -1.*var7[19];
  t2945 = var3[19] + t2944;
  t2948 = -1.*var7[20];
  t2949 = var3[20] + t2948;
  t2952 = -1.*var7[21];
  t2953 = var3[21] + t2952;
  p_output1[0]=0.333333333333333*t2608*t2629;
  p_output1[1]=-0.333333333333333*t2608*t2629;
  p_output1[2]=-1.;
  p_output1[3]=t2663;
  p_output1[4]=t2668;
  p_output1[5]=1.;
  p_output1[6]=t2663;
  p_output1[7]=0.333333333333333*t2629*t2675;
  p_output1[8]=-0.333333333333333*t2629*t2675;
  p_output1[9]=-1.;
  p_output1[10]=t2663;
  p_output1[11]=t2668;
  p_output1[12]=1.;
  p_output1[13]=t2663;
  p_output1[14]=0.333333333333333*t2629*t2686;
  p_output1[15]=-0.333333333333333*t2629*t2686;
  p_output1[16]=-1.;
  p_output1[17]=t2663;
  p_output1[18]=t2668;
  p_output1[19]=1.;
  p_output1[20]=t2663;
  p_output1[21]=0.333333333333333*t2629*t2704;
  p_output1[22]=-0.333333333333333*t2629*t2704;
  p_output1[23]=-1.;
  p_output1[24]=t2663;
  p_output1[25]=t2668;
  p_output1[26]=1.;
  p_output1[27]=t2663;
  p_output1[28]=0.333333333333333*t2629*t2719;
  p_output1[29]=-0.333333333333333*t2629*t2719;
  p_output1[30]=-1.;
  p_output1[31]=t2663;
  p_output1[32]=t2668;
  p_output1[33]=1.;
  p_output1[34]=t2663;
  p_output1[35]=0.333333333333333*t2629*t2733;
  p_output1[36]=-0.333333333333333*t2629*t2733;
  p_output1[37]=-1.;
  p_output1[38]=t2663;
  p_output1[39]=t2668;
  p_output1[40]=1.;
  p_output1[41]=t2663;
  p_output1[42]=0.333333333333333*t2629*t2743;
  p_output1[43]=-0.333333333333333*t2629*t2743;
  p_output1[44]=-1.;
  p_output1[45]=t2663;
  p_output1[46]=t2668;
  p_output1[47]=1.;
  p_output1[48]=t2663;
  p_output1[49]=0.333333333333333*t2629*t2756;
  p_output1[50]=-0.333333333333333*t2629*t2756;
  p_output1[51]=-1.;
  p_output1[52]=t2663;
  p_output1[53]=t2668;
  p_output1[54]=1.;
  p_output1[55]=t2663;
  p_output1[56]=0.333333333333333*t2629*t2765;
  p_output1[57]=-0.333333333333333*t2629*t2765;
  p_output1[58]=-1.;
  p_output1[59]=t2663;
  p_output1[60]=t2668;
  p_output1[61]=1.;
  p_output1[62]=t2663;
  p_output1[63]=0.333333333333333*t2629*t2776;
  p_output1[64]=-0.333333333333333*t2629*t2776;
  p_output1[65]=-1.;
  p_output1[66]=t2663;
  p_output1[67]=t2668;
  p_output1[68]=1.;
  p_output1[69]=t2663;
  p_output1[70]=0.333333333333333*t2629*t2785;
  p_output1[71]=-0.333333333333333*t2629*t2785;
  p_output1[72]=-1.;
  p_output1[73]=t2663;
  p_output1[74]=t2668;
  p_output1[75]=1.;
  p_output1[76]=t2663;
  p_output1[77]=0.333333333333333*t2629*t2796;
  p_output1[78]=-0.333333333333333*t2629*t2796;
  p_output1[79]=-1.;
  p_output1[80]=t2663;
  p_output1[81]=t2668;
  p_output1[82]=1.;
  p_output1[83]=t2663;
  p_output1[84]=0.333333333333333*t2629*t2805;
  p_output1[85]=-0.333333333333333*t2629*t2805;
  p_output1[86]=-1.;
  p_output1[87]=t2663;
  p_output1[88]=t2668;
  p_output1[89]=1.;
  p_output1[90]=t2663;
  p_output1[91]=0.333333333333333*t2629*t2816;
  p_output1[92]=-0.333333333333333*t2629*t2816;
  p_output1[93]=-1.;
  p_output1[94]=t2663;
  p_output1[95]=t2668;
  p_output1[96]=1.;
  p_output1[97]=t2663;
  p_output1[98]=0.333333333333333*t2629*t2825;
  p_output1[99]=-0.333333333333333*t2629*t2825;
  p_output1[100]=-1.;
  p_output1[101]=t2663;
  p_output1[102]=t2668;
  p_output1[103]=1.;
  p_output1[104]=t2663;
  p_output1[105]=0.333333333333333*t2629*t2834;
  p_output1[106]=-0.333333333333333*t2629*t2834;
  p_output1[107]=-1.;
  p_output1[108]=t2663;
  p_output1[109]=t2668;
  p_output1[110]=1.;
  p_output1[111]=t2663;
  p_output1[112]=0.333333333333333*t2629*t2839;
  p_output1[113]=-0.333333333333333*t2629*t2839;
  p_output1[114]=-1.;
  p_output1[115]=t2663;
  p_output1[116]=t2668;
  p_output1[117]=1.;
  p_output1[118]=t2663;
  p_output1[119]=0.333333333333333*t2629*t2844;
  p_output1[120]=-0.333333333333333*t2629*t2844;
  p_output1[121]=-1.;
  p_output1[122]=t2663;
  p_output1[123]=t2668;
  p_output1[124]=1.;
  p_output1[125]=t2663;
  p_output1[126]=0.333333333333333*t2629*t2849;
  p_output1[127]=-0.333333333333333*t2629*t2849;
  p_output1[128]=-1.;
  p_output1[129]=t2663;
  p_output1[130]=t2668;
  p_output1[131]=1.;
  p_output1[132]=t2663;
  p_output1[133]=0.333333333333333*t2629*t2854;
  p_output1[134]=-0.333333333333333*t2629*t2854;
  p_output1[135]=-1.;
  p_output1[136]=t2663;
  p_output1[137]=t2668;
  p_output1[138]=1.;
  p_output1[139]=t2663;
  p_output1[140]=0.333333333333333*t2629*t2859;
  p_output1[141]=-0.333333333333333*t2629*t2859;
  p_output1[142]=-1.;
  p_output1[143]=t2663;
  p_output1[144]=t2668;
  p_output1[145]=1.;
  p_output1[146]=t2663;
  p_output1[147]=0.333333333333333*t2629*t2863;
  p_output1[148]=-0.333333333333333*t2629*t2863;
  p_output1[149]=-1.;
  p_output1[150]=t2663;
  p_output1[151]=t2668;
  p_output1[152]=1.;
  p_output1[153]=t2663;
  p_output1[154]=0.25*t2629*t2867;
  p_output1[155]=-0.25*t2629*t2867;
  p_output1[156]=-0.5;
  p_output1[157]=t2870;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t2871;
  p_output1[161]=0.25*t2629*t2873;
  p_output1[162]=-0.25*t2629*t2873;
  p_output1[163]=-0.5;
  p_output1[164]=t2870;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t2871;
  p_output1[168]=0.25*t2629*t2877;
  p_output1[169]=-0.25*t2629*t2877;
  p_output1[170]=-0.5;
  p_output1[171]=t2870;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t2871;
  p_output1[175]=0.25*t2629*t2881;
  p_output1[176]=-0.25*t2629*t2881;
  p_output1[177]=-0.5;
  p_output1[178]=t2870;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t2871;
  p_output1[182]=0.25*t2629*t2885;
  p_output1[183]=-0.25*t2629*t2885;
  p_output1[184]=-0.5;
  p_output1[185]=t2870;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t2871;
  p_output1[189]=0.25*t2629*t2889;
  p_output1[190]=-0.25*t2629*t2889;
  p_output1[191]=-0.5;
  p_output1[192]=t2870;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t2871;
  p_output1[196]=0.25*t2629*t2893;
  p_output1[197]=-0.25*t2629*t2893;
  p_output1[198]=-0.5;
  p_output1[199]=t2870;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t2871;
  p_output1[203]=0.25*t2629*t2897;
  p_output1[204]=-0.25*t2629*t2897;
  p_output1[205]=-0.5;
  p_output1[206]=t2870;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t2871;
  p_output1[210]=0.25*t2629*t2901;
  p_output1[211]=-0.25*t2629*t2901;
  p_output1[212]=-0.5;
  p_output1[213]=t2870;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t2871;
  p_output1[217]=0.25*t2629*t2905;
  p_output1[218]=-0.25*t2629*t2905;
  p_output1[219]=-0.5;
  p_output1[220]=t2870;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t2871;
  p_output1[224]=0.25*t2629*t2909;
  p_output1[225]=-0.25*t2629*t2909;
  p_output1[226]=-0.5;
  p_output1[227]=t2870;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t2871;
  p_output1[231]=0.25*t2629*t2913;
  p_output1[232]=-0.25*t2629*t2913;
  p_output1[233]=-0.5;
  p_output1[234]=t2870;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t2871;
  p_output1[238]=0.25*t2629*t2917;
  p_output1[239]=-0.25*t2629*t2917;
  p_output1[240]=-0.5;
  p_output1[241]=t2870;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t2871;
  p_output1[245]=0.25*t2629*t2921;
  p_output1[246]=-0.25*t2629*t2921;
  p_output1[247]=-0.5;
  p_output1[248]=t2870;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t2871;
  p_output1[252]=0.25*t2629*t2925;
  p_output1[253]=-0.25*t2629*t2925;
  p_output1[254]=-0.5;
  p_output1[255]=t2870;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t2871;
  p_output1[259]=0.25*t2629*t2929;
  p_output1[260]=-0.25*t2629*t2929;
  p_output1[261]=-0.5;
  p_output1[262]=t2870;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t2871;
  p_output1[266]=0.25*t2629*t2933;
  p_output1[267]=-0.25*t2629*t2933;
  p_output1[268]=-0.5;
  p_output1[269]=t2870;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t2871;
  p_output1[273]=0.25*t2629*t2937;
  p_output1[274]=-0.25*t2629*t2937;
  p_output1[275]=-0.5;
  p_output1[276]=t2870;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t2871;
  p_output1[280]=0.25*t2629*t2941;
  p_output1[281]=-0.25*t2629*t2941;
  p_output1[282]=-0.5;
  p_output1[283]=t2870;
  p_output1[284]=1.;
  p_output1[285]=-0.5;
  p_output1[286]=t2871;
  p_output1[287]=0.25*t2629*t2945;
  p_output1[288]=-0.25*t2629*t2945;
  p_output1[289]=-0.5;
  p_output1[290]=t2870;
  p_output1[291]=1.;
  p_output1[292]=-0.5;
  p_output1[293]=t2871;
  p_output1[294]=0.25*t2629*t2949;
  p_output1[295]=-0.25*t2629*t2949;
  p_output1[296]=-0.5;
  p_output1[297]=t2870;
  p_output1[298]=1.;
  p_output1[299]=-0.5;
  p_output1[300]=t2871;
  p_output1[301]=0.25*t2629*t2953;
  p_output1[302]=-0.25*t2629*t2953;
  p_output1[303]=-0.5;
  p_output1[304]=t2870;
  p_output1[305]=1.;
  p_output1[306]=-0.5;
  p_output1[307]=t2871;
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
