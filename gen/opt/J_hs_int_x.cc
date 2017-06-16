/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:49 GMT-04:00
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
  double t2471;
  double t2477;
  double t2502;
  double t2506;
  double t2518;
  double t2520;
  double t2521;
  double t2526;
  double t2536;
  double t2523;
  double t2546;
  double t2548;
  double t2553;
  double t2555;
  double t2565;
  double t2568;
  double t2574;
  double t2577;
  double t2590;
  double t2593;
  double t2596;
  double t2601;
  double t2607;
  double t2610;
  double t2615;
  double t2618;
  double t2622;
  double t2624;
  double t2628;
  double t2630;
  double t2635;
  double t2638;
  double t2645;
  double t2647;
  double t2657;
  double t2663;
  double t2667;
  double t2671;
  double t2674;
  double t2676;
  double t2679;
  double t2681;
  double t2684;
  double t2686;
  double t2691;
  double t2693;
  double t2696;
  double t2700;
  double t2703;
  double t2704;
  double t2709;
  double t2710;
  double t2715;
  double t2716;
  double t2713;
  double t2714;
  double t2721;
  double t2722;
  double t2725;
  double t2726;
  double t2729;
  double t2730;
  double t2733;
  double t2734;
  double t2737;
  double t2738;
  double t2741;
  double t2742;
  double t2745;
  double t2746;
  double t2749;
  double t2750;
  double t2753;
  double t2754;
  double t2757;
  double t2758;
  double t2761;
  double t2762;
  double t2765;
  double t2766;
  double t2769;
  double t2770;
  double t2773;
  double t2774;
  double t2777;
  double t2778;
  double t2781;
  double t2782;
  double t2785;
  double t2786;
  double t2789;
  double t2790;
  double t2793;
  double t2794;
  double t2797;
  double t2798;
  t2471 = 4.*var5[0];
  t2477 = t2471 + var7[0] + var3[0];
  t2502 = -1. + var8[0];
  t2506 = 1/t2502;
  t2518 = -1.*var1[0];
  t2520 = t2518 + var1[1];
  t2521 = -0.333333333333333*t2506*t2520;
  t2526 = 4.*var5[1];
  t2536 = t2526 + var7[1] + var3[1];
  t2523 = -1.33333333333333*t2506*t2520;
  t2546 = 4.*var5[2];
  t2548 = t2546 + var7[2] + var3[2];
  t2553 = 4.*var5[3];
  t2555 = t2553 + var7[3] + var3[3];
  t2565 = 4.*var5[4];
  t2568 = t2565 + var7[4] + var3[4];
  t2574 = 4.*var5[5];
  t2577 = t2574 + var7[5] + var3[5];
  t2590 = 4.*var5[6];
  t2593 = t2590 + var7[6] + var3[6];
  t2596 = 4.*var5[7];
  t2601 = t2596 + var7[7] + var3[7];
  t2607 = 4.*var5[8];
  t2610 = t2607 + var7[8] + var3[8];
  t2615 = 4.*var5[9];
  t2618 = t2615 + var7[9] + var3[9];
  t2622 = 4.*var5[10];
  t2624 = t2622 + var7[10] + var3[10];
  t2628 = 4.*var5[11];
  t2630 = t2628 + var7[11] + var3[11];
  t2635 = 4.*var5[12];
  t2638 = t2635 + var7[12] + var3[12];
  t2645 = 4.*var5[13];
  t2647 = t2645 + var7[13] + var3[13];
  t2657 = 4.*var5[14];
  t2663 = t2657 + var7[14] + var3[14];
  t2667 = 4.*var5[15];
  t2671 = t2667 + var7[15] + var3[15];
  t2674 = 4.*var5[16];
  t2676 = t2674 + var7[16] + var3[16];
  t2679 = 4.*var5[17];
  t2681 = t2679 + var7[17] + var3[17];
  t2684 = 4.*var5[18];
  t2686 = t2684 + var7[18] + var3[18];
  t2691 = 4.*var5[19];
  t2693 = t2691 + var7[19] + var3[19];
  t2696 = 4.*var5[20];
  t2700 = t2696 + var7[20] + var3[20];
  t2703 = 4.*var5[21];
  t2704 = t2703 + var7[21] + var3[21];
  t2709 = -1.*var7[0];
  t2710 = t2709 + var3[0];
  t2715 = -1.*var7[1];
  t2716 = t2715 + var3[1];
  t2713 = -0.25*t2506*t2520;
  t2714 = 0.25*t2506*t2520;
  t2721 = -1.*var7[2];
  t2722 = t2721 + var3[2];
  t2725 = -1.*var7[3];
  t2726 = t2725 + var3[3];
  t2729 = -1.*var7[4];
  t2730 = t2729 + var3[4];
  t2733 = -1.*var7[5];
  t2734 = t2733 + var3[5];
  t2737 = -1.*var7[6];
  t2738 = t2737 + var3[6];
  t2741 = -1.*var7[7];
  t2742 = t2741 + var3[7];
  t2745 = -1.*var7[8];
  t2746 = t2745 + var3[8];
  t2749 = -1.*var7[9];
  t2750 = t2749 + var3[9];
  t2753 = -1.*var7[10];
  t2754 = t2753 + var3[10];
  t2757 = -1.*var7[11];
  t2758 = t2757 + var3[11];
  t2761 = -1.*var7[12];
  t2762 = t2761 + var3[12];
  t2765 = -1.*var7[13];
  t2766 = t2765 + var3[13];
  t2769 = -1.*var7[14];
  t2770 = t2769 + var3[14];
  t2773 = -1.*var7[15];
  t2774 = t2773 + var3[15];
  t2777 = -1.*var7[16];
  t2778 = t2777 + var3[16];
  t2781 = -1.*var7[17];
  t2782 = t2781 + var3[17];
  t2785 = -1.*var7[18];
  t2786 = t2785 + var3[18];
  t2789 = -1.*var7[19];
  t2790 = t2789 + var3[19];
  t2793 = -1.*var7[20];
  t2794 = t2793 + var3[20];
  t2797 = -1.*var7[21];
  t2798 = t2797 + var3[21];
  p_output1[0]=0.333333333333333*t2477*t2506;
  p_output1[1]=-0.333333333333333*t2477*t2506;
  p_output1[2]=-1.;
  p_output1[3]=t2521;
  p_output1[4]=t2523;
  p_output1[5]=1.;
  p_output1[6]=t2521;
  p_output1[7]=0.333333333333333*t2506*t2536;
  p_output1[8]=-0.333333333333333*t2506*t2536;
  p_output1[9]=-1.;
  p_output1[10]=t2521;
  p_output1[11]=t2523;
  p_output1[12]=1.;
  p_output1[13]=t2521;
  p_output1[14]=0.333333333333333*t2506*t2548;
  p_output1[15]=-0.333333333333333*t2506*t2548;
  p_output1[16]=-1.;
  p_output1[17]=t2521;
  p_output1[18]=t2523;
  p_output1[19]=1.;
  p_output1[20]=t2521;
  p_output1[21]=0.333333333333333*t2506*t2555;
  p_output1[22]=-0.333333333333333*t2506*t2555;
  p_output1[23]=-1.;
  p_output1[24]=t2521;
  p_output1[25]=t2523;
  p_output1[26]=1.;
  p_output1[27]=t2521;
  p_output1[28]=0.333333333333333*t2506*t2568;
  p_output1[29]=-0.333333333333333*t2506*t2568;
  p_output1[30]=-1.;
  p_output1[31]=t2521;
  p_output1[32]=t2523;
  p_output1[33]=1.;
  p_output1[34]=t2521;
  p_output1[35]=0.333333333333333*t2506*t2577;
  p_output1[36]=-0.333333333333333*t2506*t2577;
  p_output1[37]=-1.;
  p_output1[38]=t2521;
  p_output1[39]=t2523;
  p_output1[40]=1.;
  p_output1[41]=t2521;
  p_output1[42]=0.333333333333333*t2506*t2593;
  p_output1[43]=-0.333333333333333*t2506*t2593;
  p_output1[44]=-1.;
  p_output1[45]=t2521;
  p_output1[46]=t2523;
  p_output1[47]=1.;
  p_output1[48]=t2521;
  p_output1[49]=0.333333333333333*t2506*t2601;
  p_output1[50]=-0.333333333333333*t2506*t2601;
  p_output1[51]=-1.;
  p_output1[52]=t2521;
  p_output1[53]=t2523;
  p_output1[54]=1.;
  p_output1[55]=t2521;
  p_output1[56]=0.333333333333333*t2506*t2610;
  p_output1[57]=-0.333333333333333*t2506*t2610;
  p_output1[58]=-1.;
  p_output1[59]=t2521;
  p_output1[60]=t2523;
  p_output1[61]=1.;
  p_output1[62]=t2521;
  p_output1[63]=0.333333333333333*t2506*t2618;
  p_output1[64]=-0.333333333333333*t2506*t2618;
  p_output1[65]=-1.;
  p_output1[66]=t2521;
  p_output1[67]=t2523;
  p_output1[68]=1.;
  p_output1[69]=t2521;
  p_output1[70]=0.333333333333333*t2506*t2624;
  p_output1[71]=-0.333333333333333*t2506*t2624;
  p_output1[72]=-1.;
  p_output1[73]=t2521;
  p_output1[74]=t2523;
  p_output1[75]=1.;
  p_output1[76]=t2521;
  p_output1[77]=0.333333333333333*t2506*t2630;
  p_output1[78]=-0.333333333333333*t2506*t2630;
  p_output1[79]=-1.;
  p_output1[80]=t2521;
  p_output1[81]=t2523;
  p_output1[82]=1.;
  p_output1[83]=t2521;
  p_output1[84]=0.333333333333333*t2506*t2638;
  p_output1[85]=-0.333333333333333*t2506*t2638;
  p_output1[86]=-1.;
  p_output1[87]=t2521;
  p_output1[88]=t2523;
  p_output1[89]=1.;
  p_output1[90]=t2521;
  p_output1[91]=0.333333333333333*t2506*t2647;
  p_output1[92]=-0.333333333333333*t2506*t2647;
  p_output1[93]=-1.;
  p_output1[94]=t2521;
  p_output1[95]=t2523;
  p_output1[96]=1.;
  p_output1[97]=t2521;
  p_output1[98]=0.333333333333333*t2506*t2663;
  p_output1[99]=-0.333333333333333*t2506*t2663;
  p_output1[100]=-1.;
  p_output1[101]=t2521;
  p_output1[102]=t2523;
  p_output1[103]=1.;
  p_output1[104]=t2521;
  p_output1[105]=0.333333333333333*t2506*t2671;
  p_output1[106]=-0.333333333333333*t2506*t2671;
  p_output1[107]=-1.;
  p_output1[108]=t2521;
  p_output1[109]=t2523;
  p_output1[110]=1.;
  p_output1[111]=t2521;
  p_output1[112]=0.333333333333333*t2506*t2676;
  p_output1[113]=-0.333333333333333*t2506*t2676;
  p_output1[114]=-1.;
  p_output1[115]=t2521;
  p_output1[116]=t2523;
  p_output1[117]=1.;
  p_output1[118]=t2521;
  p_output1[119]=0.333333333333333*t2506*t2681;
  p_output1[120]=-0.333333333333333*t2506*t2681;
  p_output1[121]=-1.;
  p_output1[122]=t2521;
  p_output1[123]=t2523;
  p_output1[124]=1.;
  p_output1[125]=t2521;
  p_output1[126]=0.333333333333333*t2506*t2686;
  p_output1[127]=-0.333333333333333*t2506*t2686;
  p_output1[128]=-1.;
  p_output1[129]=t2521;
  p_output1[130]=t2523;
  p_output1[131]=1.;
  p_output1[132]=t2521;
  p_output1[133]=0.333333333333333*t2506*t2693;
  p_output1[134]=-0.333333333333333*t2506*t2693;
  p_output1[135]=-1.;
  p_output1[136]=t2521;
  p_output1[137]=t2523;
  p_output1[138]=1.;
  p_output1[139]=t2521;
  p_output1[140]=0.333333333333333*t2506*t2700;
  p_output1[141]=-0.333333333333333*t2506*t2700;
  p_output1[142]=-1.;
  p_output1[143]=t2521;
  p_output1[144]=t2523;
  p_output1[145]=1.;
  p_output1[146]=t2521;
  p_output1[147]=0.333333333333333*t2506*t2704;
  p_output1[148]=-0.333333333333333*t2506*t2704;
  p_output1[149]=-1.;
  p_output1[150]=t2521;
  p_output1[151]=t2523;
  p_output1[152]=1.;
  p_output1[153]=t2521;
  p_output1[154]=0.25*t2506*t2710;
  p_output1[155]=-0.25*t2506*t2710;
  p_output1[156]=-0.5;
  p_output1[157]=t2713;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t2714;
  p_output1[161]=0.25*t2506*t2716;
  p_output1[162]=-0.25*t2506*t2716;
  p_output1[163]=-0.5;
  p_output1[164]=t2713;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t2714;
  p_output1[168]=0.25*t2506*t2722;
  p_output1[169]=-0.25*t2506*t2722;
  p_output1[170]=-0.5;
  p_output1[171]=t2713;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t2714;
  p_output1[175]=0.25*t2506*t2726;
  p_output1[176]=-0.25*t2506*t2726;
  p_output1[177]=-0.5;
  p_output1[178]=t2713;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t2714;
  p_output1[182]=0.25*t2506*t2730;
  p_output1[183]=-0.25*t2506*t2730;
  p_output1[184]=-0.5;
  p_output1[185]=t2713;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t2714;
  p_output1[189]=0.25*t2506*t2734;
  p_output1[190]=-0.25*t2506*t2734;
  p_output1[191]=-0.5;
  p_output1[192]=t2713;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t2714;
  p_output1[196]=0.25*t2506*t2738;
  p_output1[197]=-0.25*t2506*t2738;
  p_output1[198]=-0.5;
  p_output1[199]=t2713;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t2714;
  p_output1[203]=0.25*t2506*t2742;
  p_output1[204]=-0.25*t2506*t2742;
  p_output1[205]=-0.5;
  p_output1[206]=t2713;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t2714;
  p_output1[210]=0.25*t2506*t2746;
  p_output1[211]=-0.25*t2506*t2746;
  p_output1[212]=-0.5;
  p_output1[213]=t2713;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t2714;
  p_output1[217]=0.25*t2506*t2750;
  p_output1[218]=-0.25*t2506*t2750;
  p_output1[219]=-0.5;
  p_output1[220]=t2713;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t2714;
  p_output1[224]=0.25*t2506*t2754;
  p_output1[225]=-0.25*t2506*t2754;
  p_output1[226]=-0.5;
  p_output1[227]=t2713;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t2714;
  p_output1[231]=0.25*t2506*t2758;
  p_output1[232]=-0.25*t2506*t2758;
  p_output1[233]=-0.5;
  p_output1[234]=t2713;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t2714;
  p_output1[238]=0.25*t2506*t2762;
  p_output1[239]=-0.25*t2506*t2762;
  p_output1[240]=-0.5;
  p_output1[241]=t2713;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t2714;
  p_output1[245]=0.25*t2506*t2766;
  p_output1[246]=-0.25*t2506*t2766;
  p_output1[247]=-0.5;
  p_output1[248]=t2713;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t2714;
  p_output1[252]=0.25*t2506*t2770;
  p_output1[253]=-0.25*t2506*t2770;
  p_output1[254]=-0.5;
  p_output1[255]=t2713;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t2714;
  p_output1[259]=0.25*t2506*t2774;
  p_output1[260]=-0.25*t2506*t2774;
  p_output1[261]=-0.5;
  p_output1[262]=t2713;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t2714;
  p_output1[266]=0.25*t2506*t2778;
  p_output1[267]=-0.25*t2506*t2778;
  p_output1[268]=-0.5;
  p_output1[269]=t2713;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t2714;
  p_output1[273]=0.25*t2506*t2782;
  p_output1[274]=-0.25*t2506*t2782;
  p_output1[275]=-0.5;
  p_output1[276]=t2713;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t2714;
  p_output1[280]=0.25*t2506*t2786;
  p_output1[281]=-0.25*t2506*t2786;
  p_output1[282]=-0.5;
  p_output1[283]=t2713;
  p_output1[284]=1.;
  p_output1[285]=-0.5;
  p_output1[286]=t2714;
  p_output1[287]=0.25*t2506*t2790;
  p_output1[288]=-0.25*t2506*t2790;
  p_output1[289]=-0.5;
  p_output1[290]=t2713;
  p_output1[291]=1.;
  p_output1[292]=-0.5;
  p_output1[293]=t2714;
  p_output1[294]=0.25*t2506*t2794;
  p_output1[295]=-0.25*t2506*t2794;
  p_output1[296]=-0.5;
  p_output1[297]=t2713;
  p_output1[298]=1.;
  p_output1[299]=-0.5;
  p_output1[300]=t2714;
  p_output1[301]=0.25*t2506*t2798;
  p_output1[302]=-0.25*t2506*t2798;
  p_output1[303]=-0.5;
  p_output1[304]=t2713;
  p_output1[305]=1.;
  p_output1[306]=-0.5;
  p_output1[307]=t2714;
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
