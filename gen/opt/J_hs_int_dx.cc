/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:37:04 GMT-04:00
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
  double t72;
  double t78;
  double t80;
  double t142;
  double t428;
  double t436;
  double t444;
  double t829;
  double t1049;
  double t708;
  double t1118;
  double t1124;
  double t1442;
  double t1556;
  double t1711;
  double t1774;
  double t1961;
  double t2036;
  double t2100;
  double t2123;
  double t2444;
  double t2473;
  double t2544;
  double t2556;
  double t3800;
  double t3970;
  double t5028;
  double t5064;
  double t5167;
  double t5217;
  double t5449;
  double t5463;
  double t5838;
  double t5905;
  double t6315;
  double t6421;
  double t6538;
  double t6836;
  double t6924;
  double t7148;
  double t7588;
  double t7610;
  double t7638;
  double t7639;
  double t7705;
  double t7724;
  double t7764;
  double t7774;
  double t7802;
  double t7803;
  double t7822;
  double t7827;
  double t7895;
  double t7899;
  double t7862;
  double t7864;
  double t7934;
  double t7943;
  double t7987;
  double t7988;
  double t8007;
  double t8016;
  double t8040;
  double t8041;
  double t8070;
  double t8071;
  double t8084;
  double t8085;
  double t8096;
  double t8104;
  double t8118;
  double t8127;
  double t8144;
  double t8150;
  double t8164;
  double t8165;
  double t8168;
  double t8175;
  double t8180;
  double t8186;
  double t8192;
  double t8198;
  double t8207;
  double t8208;
  double t8216;
  double t8218;
  double t8230;
  double t8234;
  double t8242;
  double t8245;
  double t8248;
  double t8249;
  double t8253;
  double t8254;
  double t8260;
  double t8261;
  t72 = 4.*var5[0];
  t78 = var3[0] + t72 + var7[0];
  t80 = -1. + var8[0];
  t142 = 1/t80;
  t428 = -1.*var1[0];
  t436 = t428 + var1[1];
  t444 = -0.333333333333333*t142*t436;
  t829 = 4.*var5[1];
  t1049 = var3[1] + t829 + var7[1];
  t708 = -1.33333333333333*t142*t436;
  t1118 = 4.*var5[2];
  t1124 = var3[2] + t1118 + var7[2];
  t1442 = 4.*var5[3];
  t1556 = var3[3] + t1442 + var7[3];
  t1711 = 4.*var5[4];
  t1774 = var3[4] + t1711 + var7[4];
  t1961 = 4.*var5[5];
  t2036 = var3[5] + t1961 + var7[5];
  t2100 = 4.*var5[6];
  t2123 = var3[6] + t2100 + var7[6];
  t2444 = 4.*var5[7];
  t2473 = var3[7] + t2444 + var7[7];
  t2544 = 4.*var5[8];
  t2556 = var3[8] + t2544 + var7[8];
  t3800 = 4.*var5[9];
  t3970 = var3[9] + t3800 + var7[9];
  t5028 = 4.*var5[10];
  t5064 = var3[10] + t5028 + var7[10];
  t5167 = 4.*var5[11];
  t5217 = var3[11] + t5167 + var7[11];
  t5449 = 4.*var5[12];
  t5463 = var3[12] + t5449 + var7[12];
  t5838 = 4.*var5[13];
  t5905 = var3[13] + t5838 + var7[13];
  t6315 = 4.*var5[14];
  t6421 = var3[14] + t6315 + var7[14];
  t6538 = 4.*var5[15];
  t6836 = var3[15] + t6538 + var7[15];
  t6924 = 4.*var5[16];
  t7148 = var3[16] + t6924 + var7[16];
  t7588 = 4.*var5[17];
  t7610 = var3[17] + t7588 + var7[17];
  t7638 = 4.*var5[18];
  t7639 = var3[18] + t7638 + var7[18];
  t7705 = 4.*var5[19];
  t7724 = var3[19] + t7705 + var7[19];
  t7764 = 4.*var5[20];
  t7774 = var3[20] + t7764 + var7[20];
  t7802 = 4.*var5[21];
  t7803 = var3[21] + t7802 + var7[21];
  t7822 = -1.*var7[0];
  t7827 = var3[0] + t7822;
  t7895 = -1.*var7[1];
  t7899 = var3[1] + t7895;
  t7862 = -0.25*t142*t436;
  t7864 = 0.25*t142*t436;
  t7934 = -1.*var7[2];
  t7943 = var3[2] + t7934;
  t7987 = -1.*var7[3];
  t7988 = var3[3] + t7987;
  t8007 = -1.*var7[4];
  t8016 = var3[4] + t8007;
  t8040 = -1.*var7[5];
  t8041 = var3[5] + t8040;
  t8070 = -1.*var7[6];
  t8071 = var3[6] + t8070;
  t8084 = -1.*var7[7];
  t8085 = var3[7] + t8084;
  t8096 = -1.*var7[8];
  t8104 = var3[8] + t8096;
  t8118 = -1.*var7[9];
  t8127 = var3[9] + t8118;
  t8144 = -1.*var7[10];
  t8150 = var3[10] + t8144;
  t8164 = -1.*var7[11];
  t8165 = var3[11] + t8164;
  t8168 = -1.*var7[12];
  t8175 = var3[12] + t8168;
  t8180 = -1.*var7[13];
  t8186 = var3[13] + t8180;
  t8192 = -1.*var7[14];
  t8198 = var3[14] + t8192;
  t8207 = -1.*var7[15];
  t8208 = var3[15] + t8207;
  t8216 = -1.*var7[16];
  t8218 = var3[16] + t8216;
  t8230 = -1.*var7[17];
  t8234 = var3[17] + t8230;
  t8242 = -1.*var7[18];
  t8245 = var3[18] + t8242;
  t8248 = -1.*var7[19];
  t8249 = var3[19] + t8248;
  t8253 = -1.*var7[20];
  t8254 = var3[20] + t8253;
  t8260 = -1.*var7[21];
  t8261 = var3[21] + t8260;
  p_output1[0]=0.333333333333333*t142*t78;
  p_output1[1]=-0.333333333333333*t142*t78;
  p_output1[2]=-1.;
  p_output1[3]=t444;
  p_output1[4]=t708;
  p_output1[5]=1.;
  p_output1[6]=t444;
  p_output1[7]=0.333333333333333*t1049*t142;
  p_output1[8]=-0.333333333333333*t1049*t142;
  p_output1[9]=-1.;
  p_output1[10]=t444;
  p_output1[11]=t708;
  p_output1[12]=1.;
  p_output1[13]=t444;
  p_output1[14]=0.333333333333333*t1124*t142;
  p_output1[15]=-0.333333333333333*t1124*t142;
  p_output1[16]=-1.;
  p_output1[17]=t444;
  p_output1[18]=t708;
  p_output1[19]=1.;
  p_output1[20]=t444;
  p_output1[21]=0.333333333333333*t142*t1556;
  p_output1[22]=-0.333333333333333*t142*t1556;
  p_output1[23]=-1.;
  p_output1[24]=t444;
  p_output1[25]=t708;
  p_output1[26]=1.;
  p_output1[27]=t444;
  p_output1[28]=0.333333333333333*t142*t1774;
  p_output1[29]=-0.333333333333333*t142*t1774;
  p_output1[30]=-1.;
  p_output1[31]=t444;
  p_output1[32]=t708;
  p_output1[33]=1.;
  p_output1[34]=t444;
  p_output1[35]=0.333333333333333*t142*t2036;
  p_output1[36]=-0.333333333333333*t142*t2036;
  p_output1[37]=-1.;
  p_output1[38]=t444;
  p_output1[39]=t708;
  p_output1[40]=1.;
  p_output1[41]=t444;
  p_output1[42]=0.333333333333333*t142*t2123;
  p_output1[43]=-0.333333333333333*t142*t2123;
  p_output1[44]=-1.;
  p_output1[45]=t444;
  p_output1[46]=t708;
  p_output1[47]=1.;
  p_output1[48]=t444;
  p_output1[49]=0.333333333333333*t142*t2473;
  p_output1[50]=-0.333333333333333*t142*t2473;
  p_output1[51]=-1.;
  p_output1[52]=t444;
  p_output1[53]=t708;
  p_output1[54]=1.;
  p_output1[55]=t444;
  p_output1[56]=0.333333333333333*t142*t2556;
  p_output1[57]=-0.333333333333333*t142*t2556;
  p_output1[58]=-1.;
  p_output1[59]=t444;
  p_output1[60]=t708;
  p_output1[61]=1.;
  p_output1[62]=t444;
  p_output1[63]=0.333333333333333*t142*t3970;
  p_output1[64]=-0.333333333333333*t142*t3970;
  p_output1[65]=-1.;
  p_output1[66]=t444;
  p_output1[67]=t708;
  p_output1[68]=1.;
  p_output1[69]=t444;
  p_output1[70]=0.333333333333333*t142*t5064;
  p_output1[71]=-0.333333333333333*t142*t5064;
  p_output1[72]=-1.;
  p_output1[73]=t444;
  p_output1[74]=t708;
  p_output1[75]=1.;
  p_output1[76]=t444;
  p_output1[77]=0.333333333333333*t142*t5217;
  p_output1[78]=-0.333333333333333*t142*t5217;
  p_output1[79]=-1.;
  p_output1[80]=t444;
  p_output1[81]=t708;
  p_output1[82]=1.;
  p_output1[83]=t444;
  p_output1[84]=0.333333333333333*t142*t5463;
  p_output1[85]=-0.333333333333333*t142*t5463;
  p_output1[86]=-1.;
  p_output1[87]=t444;
  p_output1[88]=t708;
  p_output1[89]=1.;
  p_output1[90]=t444;
  p_output1[91]=0.333333333333333*t142*t5905;
  p_output1[92]=-0.333333333333333*t142*t5905;
  p_output1[93]=-1.;
  p_output1[94]=t444;
  p_output1[95]=t708;
  p_output1[96]=1.;
  p_output1[97]=t444;
  p_output1[98]=0.333333333333333*t142*t6421;
  p_output1[99]=-0.333333333333333*t142*t6421;
  p_output1[100]=-1.;
  p_output1[101]=t444;
  p_output1[102]=t708;
  p_output1[103]=1.;
  p_output1[104]=t444;
  p_output1[105]=0.333333333333333*t142*t6836;
  p_output1[106]=-0.333333333333333*t142*t6836;
  p_output1[107]=-1.;
  p_output1[108]=t444;
  p_output1[109]=t708;
  p_output1[110]=1.;
  p_output1[111]=t444;
  p_output1[112]=0.333333333333333*t142*t7148;
  p_output1[113]=-0.333333333333333*t142*t7148;
  p_output1[114]=-1.;
  p_output1[115]=t444;
  p_output1[116]=t708;
  p_output1[117]=1.;
  p_output1[118]=t444;
  p_output1[119]=0.333333333333333*t142*t7610;
  p_output1[120]=-0.333333333333333*t142*t7610;
  p_output1[121]=-1.;
  p_output1[122]=t444;
  p_output1[123]=t708;
  p_output1[124]=1.;
  p_output1[125]=t444;
  p_output1[126]=0.333333333333333*t142*t7639;
  p_output1[127]=-0.333333333333333*t142*t7639;
  p_output1[128]=-1.;
  p_output1[129]=t444;
  p_output1[130]=t708;
  p_output1[131]=1.;
  p_output1[132]=t444;
  p_output1[133]=0.333333333333333*t142*t7724;
  p_output1[134]=-0.333333333333333*t142*t7724;
  p_output1[135]=-1.;
  p_output1[136]=t444;
  p_output1[137]=t708;
  p_output1[138]=1.;
  p_output1[139]=t444;
  p_output1[140]=0.333333333333333*t142*t7774;
  p_output1[141]=-0.333333333333333*t142*t7774;
  p_output1[142]=-1.;
  p_output1[143]=t444;
  p_output1[144]=t708;
  p_output1[145]=1.;
  p_output1[146]=t444;
  p_output1[147]=0.333333333333333*t142*t7803;
  p_output1[148]=-0.333333333333333*t142*t7803;
  p_output1[149]=-1.;
  p_output1[150]=t444;
  p_output1[151]=t708;
  p_output1[152]=1.;
  p_output1[153]=t444;
  p_output1[154]=0.25*t142*t7827;
  p_output1[155]=-0.25*t142*t7827;
  p_output1[156]=-0.5;
  p_output1[157]=t7862;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t7864;
  p_output1[161]=0.25*t142*t7899;
  p_output1[162]=-0.25*t142*t7899;
  p_output1[163]=-0.5;
  p_output1[164]=t7862;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t7864;
  p_output1[168]=0.25*t142*t7943;
  p_output1[169]=-0.25*t142*t7943;
  p_output1[170]=-0.5;
  p_output1[171]=t7862;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t7864;
  p_output1[175]=0.25*t142*t7988;
  p_output1[176]=-0.25*t142*t7988;
  p_output1[177]=-0.5;
  p_output1[178]=t7862;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t7864;
  p_output1[182]=0.25*t142*t8016;
  p_output1[183]=-0.25*t142*t8016;
  p_output1[184]=-0.5;
  p_output1[185]=t7862;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t7864;
  p_output1[189]=0.25*t142*t8041;
  p_output1[190]=-0.25*t142*t8041;
  p_output1[191]=-0.5;
  p_output1[192]=t7862;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t7864;
  p_output1[196]=0.25*t142*t8071;
  p_output1[197]=-0.25*t142*t8071;
  p_output1[198]=-0.5;
  p_output1[199]=t7862;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t7864;
  p_output1[203]=0.25*t142*t8085;
  p_output1[204]=-0.25*t142*t8085;
  p_output1[205]=-0.5;
  p_output1[206]=t7862;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t7864;
  p_output1[210]=0.25*t142*t8104;
  p_output1[211]=-0.25*t142*t8104;
  p_output1[212]=-0.5;
  p_output1[213]=t7862;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t7864;
  p_output1[217]=0.25*t142*t8127;
  p_output1[218]=-0.25*t142*t8127;
  p_output1[219]=-0.5;
  p_output1[220]=t7862;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t7864;
  p_output1[224]=0.25*t142*t8150;
  p_output1[225]=-0.25*t142*t8150;
  p_output1[226]=-0.5;
  p_output1[227]=t7862;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t7864;
  p_output1[231]=0.25*t142*t8165;
  p_output1[232]=-0.25*t142*t8165;
  p_output1[233]=-0.5;
  p_output1[234]=t7862;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t7864;
  p_output1[238]=0.25*t142*t8175;
  p_output1[239]=-0.25*t142*t8175;
  p_output1[240]=-0.5;
  p_output1[241]=t7862;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t7864;
  p_output1[245]=0.25*t142*t8186;
  p_output1[246]=-0.25*t142*t8186;
  p_output1[247]=-0.5;
  p_output1[248]=t7862;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t7864;
  p_output1[252]=0.25*t142*t8198;
  p_output1[253]=-0.25*t142*t8198;
  p_output1[254]=-0.5;
  p_output1[255]=t7862;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t7864;
  p_output1[259]=0.25*t142*t8208;
  p_output1[260]=-0.25*t142*t8208;
  p_output1[261]=-0.5;
  p_output1[262]=t7862;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t7864;
  p_output1[266]=0.25*t142*t8218;
  p_output1[267]=-0.25*t142*t8218;
  p_output1[268]=-0.5;
  p_output1[269]=t7862;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t7864;
  p_output1[273]=0.25*t142*t8234;
  p_output1[274]=-0.25*t142*t8234;
  p_output1[275]=-0.5;
  p_output1[276]=t7862;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t7864;
  p_output1[280]=0.25*t142*t8245;
  p_output1[281]=-0.25*t142*t8245;
  p_output1[282]=-0.5;
  p_output1[283]=t7862;
  p_output1[284]=1.;
  p_output1[285]=-0.5;
  p_output1[286]=t7864;
  p_output1[287]=0.25*t142*t8249;
  p_output1[288]=-0.25*t142*t8249;
  p_output1[289]=-0.5;
  p_output1[290]=t7862;
  p_output1[291]=1.;
  p_output1[292]=-0.5;
  p_output1[293]=t7864;
  p_output1[294]=0.25*t142*t8254;
  p_output1[295]=-0.25*t142*t8254;
  p_output1[296]=-0.5;
  p_output1[297]=t7862;
  p_output1[298]=1.;
  p_output1[299]=-0.5;
  p_output1[300]=t7864;
  p_output1[301]=0.25*t142*t8261;
  p_output1[302]=-0.25*t142*t8261;
  p_output1[303]=-0.5;
  p_output1[304]=t7862;
  p_output1[305]=1.;
  p_output1[306]=-0.5;
  p_output1[307]=t7864;
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
