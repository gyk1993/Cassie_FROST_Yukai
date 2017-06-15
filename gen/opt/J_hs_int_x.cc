/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:09:43 GMT-04:00
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
  double t585;
  double t634;
  double t1186;
  double t1259;
  double t1416;
  double t1510;
  double t1557;
  double t1562;
  double t1581;
  double t1559;
  double t1622;
  double t1684;
  double t1733;
  double t1978;
  double t2004;
  double t2062;
  double t2081;
  double t2139;
  double t2176;
  double t2181;
  double t2188;
  double t2205;
  double t2240;
  double t2268;
  double t2318;
  double t2480;
  double t2682;
  double t2723;
  double t2988;
  double t3017;
  double t3202;
  double t3345;
  double t3431;
  double t3497;
  double t4686;
  double t5306;
  double t5762;
  double t5794;
  double t6148;
  double t6284;
  double t6603;
  double t6610;
  double t6639;
  double t6724;
  double t6792;
  double t6807;
  double t6897;
  double t7018;
  double t7183;
  double t7252;
  double t7325;
  double t7329;
  double t7830;
  double t7837;
  double t7651;
  double t7816;
  double t7854;
  double t7855;
  double t8108;
  double t8189;
  double t8365;
  double t8404;
  double t8533;
  double t8547;
  double t8585;
  double t8716;
  double t8745;
  double t8796;
  double t8898;
  double t8920;
  double t9034;
  double t9049;
  double t9640;
  double t9678;
  double t10000;
  double t10018;
  double t10167;
  double t10198;
  double t10622;
  double t10631;
  double t10695;
  double t10707;
  double t10761;
  double t10773;
  double t11141;
  double t11199;
  double t11286;
  double t11356;
  double t11581;
  double t11583;
  double t11720;
  double t11826;
  double t11960;
  double t11962;
  double t12000;
  double t12081;
  t585 = 4.*var5[0];
  t634 = t585 + var7[0] + var3[0];
  t1186 = -1. + var8[0];
  t1259 = 1/t1186;
  t1416 = -1.*var1[0];
  t1510 = t1416 + var1[1];
  t1557 = -0.333333333333333*t1259*t1510;
  t1562 = 4.*var5[1];
  t1581 = t1562 + var7[1] + var3[1];
  t1559 = -1.33333333333333*t1259*t1510;
  t1622 = 4.*var5[2];
  t1684 = t1622 + var7[2] + var3[2];
  t1733 = 4.*var5[3];
  t1978 = t1733 + var7[3] + var3[3];
  t2004 = 4.*var5[4];
  t2062 = t2004 + var7[4] + var3[4];
  t2081 = 4.*var5[5];
  t2139 = t2081 + var7[5] + var3[5];
  t2176 = 4.*var5[6];
  t2181 = t2176 + var7[6] + var3[6];
  t2188 = 4.*var5[7];
  t2205 = t2188 + var7[7] + var3[7];
  t2240 = 4.*var5[8];
  t2268 = t2240 + var7[8] + var3[8];
  t2318 = 4.*var5[9];
  t2480 = t2318 + var7[9] + var3[9];
  t2682 = 4.*var5[10];
  t2723 = t2682 + var7[10] + var3[10];
  t2988 = 4.*var5[11];
  t3017 = t2988 + var7[11] + var3[11];
  t3202 = 4.*var5[12];
  t3345 = t3202 + var7[12] + var3[12];
  t3431 = 4.*var5[13];
  t3497 = t3431 + var7[13] + var3[13];
  t4686 = 4.*var5[14];
  t5306 = t4686 + var7[14] + var3[14];
  t5762 = 4.*var5[15];
  t5794 = t5762 + var7[15] + var3[15];
  t6148 = 4.*var5[16];
  t6284 = t6148 + var7[16] + var3[16];
  t6603 = 4.*var5[17];
  t6610 = t6603 + var7[17] + var3[17];
  t6639 = 4.*var5[18];
  t6724 = t6639 + var7[18] + var3[18];
  t6792 = 4.*var5[19];
  t6807 = t6792 + var7[19] + var3[19];
  t6897 = 4.*var5[20];
  t7018 = t6897 + var7[20] + var3[20];
  t7183 = 4.*var5[21];
  t7252 = t7183 + var7[21] + var3[21];
  t7325 = -1.*var7[0];
  t7329 = t7325 + var3[0];
  t7830 = -1.*var7[1];
  t7837 = t7830 + var3[1];
  t7651 = -0.25*t1259*t1510;
  t7816 = 0.25*t1259*t1510;
  t7854 = -1.*var7[2];
  t7855 = t7854 + var3[2];
  t8108 = -1.*var7[3];
  t8189 = t8108 + var3[3];
  t8365 = -1.*var7[4];
  t8404 = t8365 + var3[4];
  t8533 = -1.*var7[5];
  t8547 = t8533 + var3[5];
  t8585 = -1.*var7[6];
  t8716 = t8585 + var3[6];
  t8745 = -1.*var7[7];
  t8796 = t8745 + var3[7];
  t8898 = -1.*var7[8];
  t8920 = t8898 + var3[8];
  t9034 = -1.*var7[9];
  t9049 = t9034 + var3[9];
  t9640 = -1.*var7[10];
  t9678 = t9640 + var3[10];
  t10000 = -1.*var7[11];
  t10018 = t10000 + var3[11];
  t10167 = -1.*var7[12];
  t10198 = t10167 + var3[12];
  t10622 = -1.*var7[13];
  t10631 = t10622 + var3[13];
  t10695 = -1.*var7[14];
  t10707 = t10695 + var3[14];
  t10761 = -1.*var7[15];
  t10773 = t10761 + var3[15];
  t11141 = -1.*var7[16];
  t11199 = t11141 + var3[16];
  t11286 = -1.*var7[17];
  t11356 = t11286 + var3[17];
  t11581 = -1.*var7[18];
  t11583 = t11581 + var3[18];
  t11720 = -1.*var7[19];
  t11826 = t11720 + var3[19];
  t11960 = -1.*var7[20];
  t11962 = t11960 + var3[20];
  t12000 = -1.*var7[21];
  t12081 = t12000 + var3[21];
  p_output1[0]=0.333333333333333*t1259*t634;
  p_output1[1]=-0.333333333333333*t1259*t634;
  p_output1[2]=-1.;
  p_output1[3]=t1557;
  p_output1[4]=t1559;
  p_output1[5]=1.;
  p_output1[6]=t1557;
  p_output1[7]=0.333333333333333*t1259*t1581;
  p_output1[8]=-0.333333333333333*t1259*t1581;
  p_output1[9]=-1.;
  p_output1[10]=t1557;
  p_output1[11]=t1559;
  p_output1[12]=1.;
  p_output1[13]=t1557;
  p_output1[14]=0.333333333333333*t1259*t1684;
  p_output1[15]=-0.333333333333333*t1259*t1684;
  p_output1[16]=-1.;
  p_output1[17]=t1557;
  p_output1[18]=t1559;
  p_output1[19]=1.;
  p_output1[20]=t1557;
  p_output1[21]=0.333333333333333*t1259*t1978;
  p_output1[22]=-0.333333333333333*t1259*t1978;
  p_output1[23]=-1.;
  p_output1[24]=t1557;
  p_output1[25]=t1559;
  p_output1[26]=1.;
  p_output1[27]=t1557;
  p_output1[28]=0.333333333333333*t1259*t2062;
  p_output1[29]=-0.333333333333333*t1259*t2062;
  p_output1[30]=-1.;
  p_output1[31]=t1557;
  p_output1[32]=t1559;
  p_output1[33]=1.;
  p_output1[34]=t1557;
  p_output1[35]=0.333333333333333*t1259*t2139;
  p_output1[36]=-0.333333333333333*t1259*t2139;
  p_output1[37]=-1.;
  p_output1[38]=t1557;
  p_output1[39]=t1559;
  p_output1[40]=1.;
  p_output1[41]=t1557;
  p_output1[42]=0.333333333333333*t1259*t2181;
  p_output1[43]=-0.333333333333333*t1259*t2181;
  p_output1[44]=-1.;
  p_output1[45]=t1557;
  p_output1[46]=t1559;
  p_output1[47]=1.;
  p_output1[48]=t1557;
  p_output1[49]=0.333333333333333*t1259*t2205;
  p_output1[50]=-0.333333333333333*t1259*t2205;
  p_output1[51]=-1.;
  p_output1[52]=t1557;
  p_output1[53]=t1559;
  p_output1[54]=1.;
  p_output1[55]=t1557;
  p_output1[56]=0.333333333333333*t1259*t2268;
  p_output1[57]=-0.333333333333333*t1259*t2268;
  p_output1[58]=-1.;
  p_output1[59]=t1557;
  p_output1[60]=t1559;
  p_output1[61]=1.;
  p_output1[62]=t1557;
  p_output1[63]=0.333333333333333*t1259*t2480;
  p_output1[64]=-0.333333333333333*t1259*t2480;
  p_output1[65]=-1.;
  p_output1[66]=t1557;
  p_output1[67]=t1559;
  p_output1[68]=1.;
  p_output1[69]=t1557;
  p_output1[70]=0.333333333333333*t1259*t2723;
  p_output1[71]=-0.333333333333333*t1259*t2723;
  p_output1[72]=-1.;
  p_output1[73]=t1557;
  p_output1[74]=t1559;
  p_output1[75]=1.;
  p_output1[76]=t1557;
  p_output1[77]=0.333333333333333*t1259*t3017;
  p_output1[78]=-0.333333333333333*t1259*t3017;
  p_output1[79]=-1.;
  p_output1[80]=t1557;
  p_output1[81]=t1559;
  p_output1[82]=1.;
  p_output1[83]=t1557;
  p_output1[84]=0.333333333333333*t1259*t3345;
  p_output1[85]=-0.333333333333333*t1259*t3345;
  p_output1[86]=-1.;
  p_output1[87]=t1557;
  p_output1[88]=t1559;
  p_output1[89]=1.;
  p_output1[90]=t1557;
  p_output1[91]=0.333333333333333*t1259*t3497;
  p_output1[92]=-0.333333333333333*t1259*t3497;
  p_output1[93]=-1.;
  p_output1[94]=t1557;
  p_output1[95]=t1559;
  p_output1[96]=1.;
  p_output1[97]=t1557;
  p_output1[98]=0.333333333333333*t1259*t5306;
  p_output1[99]=-0.333333333333333*t1259*t5306;
  p_output1[100]=-1.;
  p_output1[101]=t1557;
  p_output1[102]=t1559;
  p_output1[103]=1.;
  p_output1[104]=t1557;
  p_output1[105]=0.333333333333333*t1259*t5794;
  p_output1[106]=-0.333333333333333*t1259*t5794;
  p_output1[107]=-1.;
  p_output1[108]=t1557;
  p_output1[109]=t1559;
  p_output1[110]=1.;
  p_output1[111]=t1557;
  p_output1[112]=0.333333333333333*t1259*t6284;
  p_output1[113]=-0.333333333333333*t1259*t6284;
  p_output1[114]=-1.;
  p_output1[115]=t1557;
  p_output1[116]=t1559;
  p_output1[117]=1.;
  p_output1[118]=t1557;
  p_output1[119]=0.333333333333333*t1259*t6610;
  p_output1[120]=-0.333333333333333*t1259*t6610;
  p_output1[121]=-1.;
  p_output1[122]=t1557;
  p_output1[123]=t1559;
  p_output1[124]=1.;
  p_output1[125]=t1557;
  p_output1[126]=0.333333333333333*t1259*t6724;
  p_output1[127]=-0.333333333333333*t1259*t6724;
  p_output1[128]=-1.;
  p_output1[129]=t1557;
  p_output1[130]=t1559;
  p_output1[131]=1.;
  p_output1[132]=t1557;
  p_output1[133]=0.333333333333333*t1259*t6807;
  p_output1[134]=-0.333333333333333*t1259*t6807;
  p_output1[135]=-1.;
  p_output1[136]=t1557;
  p_output1[137]=t1559;
  p_output1[138]=1.;
  p_output1[139]=t1557;
  p_output1[140]=0.333333333333333*t1259*t7018;
  p_output1[141]=-0.333333333333333*t1259*t7018;
  p_output1[142]=-1.;
  p_output1[143]=t1557;
  p_output1[144]=t1559;
  p_output1[145]=1.;
  p_output1[146]=t1557;
  p_output1[147]=0.333333333333333*t1259*t7252;
  p_output1[148]=-0.333333333333333*t1259*t7252;
  p_output1[149]=-1.;
  p_output1[150]=t1557;
  p_output1[151]=t1559;
  p_output1[152]=1.;
  p_output1[153]=t1557;
  p_output1[154]=0.25*t1259*t7329;
  p_output1[155]=-0.25*t1259*t7329;
  p_output1[156]=-0.5;
  p_output1[157]=t7651;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t7816;
  p_output1[161]=0.25*t1259*t7837;
  p_output1[162]=-0.25*t1259*t7837;
  p_output1[163]=-0.5;
  p_output1[164]=t7651;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t7816;
  p_output1[168]=0.25*t1259*t7855;
  p_output1[169]=-0.25*t1259*t7855;
  p_output1[170]=-0.5;
  p_output1[171]=t7651;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t7816;
  p_output1[175]=0.25*t1259*t8189;
  p_output1[176]=-0.25*t1259*t8189;
  p_output1[177]=-0.5;
  p_output1[178]=t7651;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t7816;
  p_output1[182]=0.25*t1259*t8404;
  p_output1[183]=-0.25*t1259*t8404;
  p_output1[184]=-0.5;
  p_output1[185]=t7651;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t7816;
  p_output1[189]=0.25*t1259*t8547;
  p_output1[190]=-0.25*t1259*t8547;
  p_output1[191]=-0.5;
  p_output1[192]=t7651;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t7816;
  p_output1[196]=0.25*t1259*t8716;
  p_output1[197]=-0.25*t1259*t8716;
  p_output1[198]=-0.5;
  p_output1[199]=t7651;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t7816;
  p_output1[203]=0.25*t1259*t8796;
  p_output1[204]=-0.25*t1259*t8796;
  p_output1[205]=-0.5;
  p_output1[206]=t7651;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t7816;
  p_output1[210]=0.25*t1259*t8920;
  p_output1[211]=-0.25*t1259*t8920;
  p_output1[212]=-0.5;
  p_output1[213]=t7651;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t7816;
  p_output1[217]=0.25*t1259*t9049;
  p_output1[218]=-0.25*t1259*t9049;
  p_output1[219]=-0.5;
  p_output1[220]=t7651;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t7816;
  p_output1[224]=0.25*t1259*t9678;
  p_output1[225]=-0.25*t1259*t9678;
  p_output1[226]=-0.5;
  p_output1[227]=t7651;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t7816;
  p_output1[231]=0.25*t10018*t1259;
  p_output1[232]=-0.25*t10018*t1259;
  p_output1[233]=-0.5;
  p_output1[234]=t7651;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t7816;
  p_output1[238]=0.25*t10198*t1259;
  p_output1[239]=-0.25*t10198*t1259;
  p_output1[240]=-0.5;
  p_output1[241]=t7651;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t7816;
  p_output1[245]=0.25*t10631*t1259;
  p_output1[246]=-0.25*t10631*t1259;
  p_output1[247]=-0.5;
  p_output1[248]=t7651;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t7816;
  p_output1[252]=0.25*t10707*t1259;
  p_output1[253]=-0.25*t10707*t1259;
  p_output1[254]=-0.5;
  p_output1[255]=t7651;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t7816;
  p_output1[259]=0.25*t10773*t1259;
  p_output1[260]=-0.25*t10773*t1259;
  p_output1[261]=-0.5;
  p_output1[262]=t7651;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t7816;
  p_output1[266]=0.25*t11199*t1259;
  p_output1[267]=-0.25*t11199*t1259;
  p_output1[268]=-0.5;
  p_output1[269]=t7651;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t7816;
  p_output1[273]=0.25*t11356*t1259;
  p_output1[274]=-0.25*t11356*t1259;
  p_output1[275]=-0.5;
  p_output1[276]=t7651;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t7816;
  p_output1[280]=0.25*t11583*t1259;
  p_output1[281]=-0.25*t11583*t1259;
  p_output1[282]=-0.5;
  p_output1[283]=t7651;
  p_output1[284]=1.;
  p_output1[285]=-0.5;
  p_output1[286]=t7816;
  p_output1[287]=0.25*t11826*t1259;
  p_output1[288]=-0.25*t11826*t1259;
  p_output1[289]=-0.5;
  p_output1[290]=t7651;
  p_output1[291]=1.;
  p_output1[292]=-0.5;
  p_output1[293]=t7816;
  p_output1[294]=0.25*t11962*t1259;
  p_output1[295]=-0.25*t11962*t1259;
  p_output1[296]=-0.5;
  p_output1[297]=t7651;
  p_output1[298]=1.;
  p_output1[299]=-0.5;
  p_output1[300]=t7816;
  p_output1[301]=0.25*t12081*t1259;
  p_output1[302]=-0.25*t12081*t1259;
  p_output1[303]=-0.5;
  p_output1[304]=t7651;
  p_output1[305]=1.;
  p_output1[306]=-0.5;
  p_output1[307]=t7816;
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

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void J_hs_int_x_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
