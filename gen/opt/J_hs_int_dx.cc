/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:09:45 GMT-04:00
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
  double t1376;
  double t1596;
  double t2003;
  double t2071;
  double t2182;
  double t2187;
  double t2214;
  double t2305;
  double t2508;
  double t2284;
  double t3018;
  double t3051;
  double t4594;
  double t5519;
  double t6497;
  double t6569;
  double t6785;
  double t6817;
  double t7306;
  double t7309;
  double t7847;
  double t7927;
  double t8472;
  double t8497;
  double t8728;
  double t8805;
  double t9144;
  double t9340;
  double t10133;
  double t10207;
  double t10733;
  double t10740;
  double t11221;
  double t11441;
  double t11859;
  double t11935;
  double t12133;
  double t12134;
  double t12202;
  double t12288;
  double t12402;
  double t12409;
  double t12416;
  double t12417;
  double t12446;
  double t12456;
  double t12547;
  double t12569;
  double t12688;
  double t12773;
  double t12914;
  double t12917;
  double t12938;
  double t12973;
  double t12923;
  double t12924;
  double t13030;
  double t13064;
  double t13089;
  double t13098;
  double t13238;
  double t13277;
  double t13444;
  double t13466;
  double t13499;
  double t13520;
  double t13584;
  double t13600;
  double t13764;
  double t13770;
  double t13835;
  double t13850;
  double t13905;
  double t13907;
  double t13984;
  double t14007;
  double t14099;
  double t14101;
  double t14136;
  double t14141;
  double t14150;
  double t14163;
  double t14182;
  double t14191;
  double t14204;
  double t14216;
  double t14251;
  double t14300;
  double t14403;
  double t14424;
  double t14503;
  double t14526;
  double t14545;
  double t14549;
  double t14653;
  double t14701;
  t1376 = 4.*var5[0];
  t1596 = var3[0] + t1376 + var7[0];
  t2003 = -1. + var8[0];
  t2071 = 1/t2003;
  t2182 = -1.*var1[0];
  t2187 = t2182 + var1[1];
  t2214 = -0.333333333333333*t2071*t2187;
  t2305 = 4.*var5[1];
  t2508 = var3[1] + t2305 + var7[1];
  t2284 = -1.33333333333333*t2071*t2187;
  t3018 = 4.*var5[2];
  t3051 = var3[2] + t3018 + var7[2];
  t4594 = 4.*var5[3];
  t5519 = var3[3] + t4594 + var7[3];
  t6497 = 4.*var5[4];
  t6569 = var3[4] + t6497 + var7[4];
  t6785 = 4.*var5[5];
  t6817 = var3[5] + t6785 + var7[5];
  t7306 = 4.*var5[6];
  t7309 = var3[6] + t7306 + var7[6];
  t7847 = 4.*var5[7];
  t7927 = var3[7] + t7847 + var7[7];
  t8472 = 4.*var5[8];
  t8497 = var3[8] + t8472 + var7[8];
  t8728 = 4.*var5[9];
  t8805 = var3[9] + t8728 + var7[9];
  t9144 = 4.*var5[10];
  t9340 = var3[10] + t9144 + var7[10];
  t10133 = 4.*var5[11];
  t10207 = var3[11] + t10133 + var7[11];
  t10733 = 4.*var5[12];
  t10740 = var3[12] + t10733 + var7[12];
  t11221 = 4.*var5[13];
  t11441 = var3[13] + t11221 + var7[13];
  t11859 = 4.*var5[14];
  t11935 = var3[14] + t11859 + var7[14];
  t12133 = 4.*var5[15];
  t12134 = var3[15] + t12133 + var7[15];
  t12202 = 4.*var5[16];
  t12288 = var3[16] + t12202 + var7[16];
  t12402 = 4.*var5[17];
  t12409 = var3[17] + t12402 + var7[17];
  t12416 = 4.*var5[18];
  t12417 = var3[18] + t12416 + var7[18];
  t12446 = 4.*var5[19];
  t12456 = var3[19] + t12446 + var7[19];
  t12547 = 4.*var5[20];
  t12569 = var3[20] + t12547 + var7[20];
  t12688 = 4.*var5[21];
  t12773 = var3[21] + t12688 + var7[21];
  t12914 = -1.*var7[0];
  t12917 = var3[0] + t12914;
  t12938 = -1.*var7[1];
  t12973 = var3[1] + t12938;
  t12923 = -0.25*t2071*t2187;
  t12924 = 0.25*t2071*t2187;
  t13030 = -1.*var7[2];
  t13064 = var3[2] + t13030;
  t13089 = -1.*var7[3];
  t13098 = var3[3] + t13089;
  t13238 = -1.*var7[4];
  t13277 = var3[4] + t13238;
  t13444 = -1.*var7[5];
  t13466 = var3[5] + t13444;
  t13499 = -1.*var7[6];
  t13520 = var3[6] + t13499;
  t13584 = -1.*var7[7];
  t13600 = var3[7] + t13584;
  t13764 = -1.*var7[8];
  t13770 = var3[8] + t13764;
  t13835 = -1.*var7[9];
  t13850 = var3[9] + t13835;
  t13905 = -1.*var7[10];
  t13907 = var3[10] + t13905;
  t13984 = -1.*var7[11];
  t14007 = var3[11] + t13984;
  t14099 = -1.*var7[12];
  t14101 = var3[12] + t14099;
  t14136 = -1.*var7[13];
  t14141 = var3[13] + t14136;
  t14150 = -1.*var7[14];
  t14163 = var3[14] + t14150;
  t14182 = -1.*var7[15];
  t14191 = var3[15] + t14182;
  t14204 = -1.*var7[16];
  t14216 = var3[16] + t14204;
  t14251 = -1.*var7[17];
  t14300 = var3[17] + t14251;
  t14403 = -1.*var7[18];
  t14424 = var3[18] + t14403;
  t14503 = -1.*var7[19];
  t14526 = var3[19] + t14503;
  t14545 = -1.*var7[20];
  t14549 = var3[20] + t14545;
  t14653 = -1.*var7[21];
  t14701 = var3[21] + t14653;
  p_output1[0]=0.333333333333333*t1596*t2071;
  p_output1[1]=-0.333333333333333*t1596*t2071;
  p_output1[2]=-1.;
  p_output1[3]=t2214;
  p_output1[4]=t2284;
  p_output1[5]=1.;
  p_output1[6]=t2214;
  p_output1[7]=0.333333333333333*t2071*t2508;
  p_output1[8]=-0.333333333333333*t2071*t2508;
  p_output1[9]=-1.;
  p_output1[10]=t2214;
  p_output1[11]=t2284;
  p_output1[12]=1.;
  p_output1[13]=t2214;
  p_output1[14]=0.333333333333333*t2071*t3051;
  p_output1[15]=-0.333333333333333*t2071*t3051;
  p_output1[16]=-1.;
  p_output1[17]=t2214;
  p_output1[18]=t2284;
  p_output1[19]=1.;
  p_output1[20]=t2214;
  p_output1[21]=0.333333333333333*t2071*t5519;
  p_output1[22]=-0.333333333333333*t2071*t5519;
  p_output1[23]=-1.;
  p_output1[24]=t2214;
  p_output1[25]=t2284;
  p_output1[26]=1.;
  p_output1[27]=t2214;
  p_output1[28]=0.333333333333333*t2071*t6569;
  p_output1[29]=-0.333333333333333*t2071*t6569;
  p_output1[30]=-1.;
  p_output1[31]=t2214;
  p_output1[32]=t2284;
  p_output1[33]=1.;
  p_output1[34]=t2214;
  p_output1[35]=0.333333333333333*t2071*t6817;
  p_output1[36]=-0.333333333333333*t2071*t6817;
  p_output1[37]=-1.;
  p_output1[38]=t2214;
  p_output1[39]=t2284;
  p_output1[40]=1.;
  p_output1[41]=t2214;
  p_output1[42]=0.333333333333333*t2071*t7309;
  p_output1[43]=-0.333333333333333*t2071*t7309;
  p_output1[44]=-1.;
  p_output1[45]=t2214;
  p_output1[46]=t2284;
  p_output1[47]=1.;
  p_output1[48]=t2214;
  p_output1[49]=0.333333333333333*t2071*t7927;
  p_output1[50]=-0.333333333333333*t2071*t7927;
  p_output1[51]=-1.;
  p_output1[52]=t2214;
  p_output1[53]=t2284;
  p_output1[54]=1.;
  p_output1[55]=t2214;
  p_output1[56]=0.333333333333333*t2071*t8497;
  p_output1[57]=-0.333333333333333*t2071*t8497;
  p_output1[58]=-1.;
  p_output1[59]=t2214;
  p_output1[60]=t2284;
  p_output1[61]=1.;
  p_output1[62]=t2214;
  p_output1[63]=0.333333333333333*t2071*t8805;
  p_output1[64]=-0.333333333333333*t2071*t8805;
  p_output1[65]=-1.;
  p_output1[66]=t2214;
  p_output1[67]=t2284;
  p_output1[68]=1.;
  p_output1[69]=t2214;
  p_output1[70]=0.333333333333333*t2071*t9340;
  p_output1[71]=-0.333333333333333*t2071*t9340;
  p_output1[72]=-1.;
  p_output1[73]=t2214;
  p_output1[74]=t2284;
  p_output1[75]=1.;
  p_output1[76]=t2214;
  p_output1[77]=0.333333333333333*t10207*t2071;
  p_output1[78]=-0.333333333333333*t10207*t2071;
  p_output1[79]=-1.;
  p_output1[80]=t2214;
  p_output1[81]=t2284;
  p_output1[82]=1.;
  p_output1[83]=t2214;
  p_output1[84]=0.333333333333333*t10740*t2071;
  p_output1[85]=-0.333333333333333*t10740*t2071;
  p_output1[86]=-1.;
  p_output1[87]=t2214;
  p_output1[88]=t2284;
  p_output1[89]=1.;
  p_output1[90]=t2214;
  p_output1[91]=0.333333333333333*t11441*t2071;
  p_output1[92]=-0.333333333333333*t11441*t2071;
  p_output1[93]=-1.;
  p_output1[94]=t2214;
  p_output1[95]=t2284;
  p_output1[96]=1.;
  p_output1[97]=t2214;
  p_output1[98]=0.333333333333333*t11935*t2071;
  p_output1[99]=-0.333333333333333*t11935*t2071;
  p_output1[100]=-1.;
  p_output1[101]=t2214;
  p_output1[102]=t2284;
  p_output1[103]=1.;
  p_output1[104]=t2214;
  p_output1[105]=0.333333333333333*t12134*t2071;
  p_output1[106]=-0.333333333333333*t12134*t2071;
  p_output1[107]=-1.;
  p_output1[108]=t2214;
  p_output1[109]=t2284;
  p_output1[110]=1.;
  p_output1[111]=t2214;
  p_output1[112]=0.333333333333333*t12288*t2071;
  p_output1[113]=-0.333333333333333*t12288*t2071;
  p_output1[114]=-1.;
  p_output1[115]=t2214;
  p_output1[116]=t2284;
  p_output1[117]=1.;
  p_output1[118]=t2214;
  p_output1[119]=0.333333333333333*t12409*t2071;
  p_output1[120]=-0.333333333333333*t12409*t2071;
  p_output1[121]=-1.;
  p_output1[122]=t2214;
  p_output1[123]=t2284;
  p_output1[124]=1.;
  p_output1[125]=t2214;
  p_output1[126]=0.333333333333333*t12417*t2071;
  p_output1[127]=-0.333333333333333*t12417*t2071;
  p_output1[128]=-1.;
  p_output1[129]=t2214;
  p_output1[130]=t2284;
  p_output1[131]=1.;
  p_output1[132]=t2214;
  p_output1[133]=0.333333333333333*t12456*t2071;
  p_output1[134]=-0.333333333333333*t12456*t2071;
  p_output1[135]=-1.;
  p_output1[136]=t2214;
  p_output1[137]=t2284;
  p_output1[138]=1.;
  p_output1[139]=t2214;
  p_output1[140]=0.333333333333333*t12569*t2071;
  p_output1[141]=-0.333333333333333*t12569*t2071;
  p_output1[142]=-1.;
  p_output1[143]=t2214;
  p_output1[144]=t2284;
  p_output1[145]=1.;
  p_output1[146]=t2214;
  p_output1[147]=0.333333333333333*t12773*t2071;
  p_output1[148]=-0.333333333333333*t12773*t2071;
  p_output1[149]=-1.;
  p_output1[150]=t2214;
  p_output1[151]=t2284;
  p_output1[152]=1.;
  p_output1[153]=t2214;
  p_output1[154]=0.25*t12917*t2071;
  p_output1[155]=-0.25*t12917*t2071;
  p_output1[156]=-0.5;
  p_output1[157]=t12923;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t12924;
  p_output1[161]=0.25*t12973*t2071;
  p_output1[162]=-0.25*t12973*t2071;
  p_output1[163]=-0.5;
  p_output1[164]=t12923;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t12924;
  p_output1[168]=0.25*t13064*t2071;
  p_output1[169]=-0.25*t13064*t2071;
  p_output1[170]=-0.5;
  p_output1[171]=t12923;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t12924;
  p_output1[175]=0.25*t13098*t2071;
  p_output1[176]=-0.25*t13098*t2071;
  p_output1[177]=-0.5;
  p_output1[178]=t12923;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t12924;
  p_output1[182]=0.25*t13277*t2071;
  p_output1[183]=-0.25*t13277*t2071;
  p_output1[184]=-0.5;
  p_output1[185]=t12923;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t12924;
  p_output1[189]=0.25*t13466*t2071;
  p_output1[190]=-0.25*t13466*t2071;
  p_output1[191]=-0.5;
  p_output1[192]=t12923;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t12924;
  p_output1[196]=0.25*t13520*t2071;
  p_output1[197]=-0.25*t13520*t2071;
  p_output1[198]=-0.5;
  p_output1[199]=t12923;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t12924;
  p_output1[203]=0.25*t13600*t2071;
  p_output1[204]=-0.25*t13600*t2071;
  p_output1[205]=-0.5;
  p_output1[206]=t12923;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t12924;
  p_output1[210]=0.25*t13770*t2071;
  p_output1[211]=-0.25*t13770*t2071;
  p_output1[212]=-0.5;
  p_output1[213]=t12923;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t12924;
  p_output1[217]=0.25*t13850*t2071;
  p_output1[218]=-0.25*t13850*t2071;
  p_output1[219]=-0.5;
  p_output1[220]=t12923;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t12924;
  p_output1[224]=0.25*t13907*t2071;
  p_output1[225]=-0.25*t13907*t2071;
  p_output1[226]=-0.5;
  p_output1[227]=t12923;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t12924;
  p_output1[231]=0.25*t14007*t2071;
  p_output1[232]=-0.25*t14007*t2071;
  p_output1[233]=-0.5;
  p_output1[234]=t12923;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t12924;
  p_output1[238]=0.25*t14101*t2071;
  p_output1[239]=-0.25*t14101*t2071;
  p_output1[240]=-0.5;
  p_output1[241]=t12923;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t12924;
  p_output1[245]=0.25*t14141*t2071;
  p_output1[246]=-0.25*t14141*t2071;
  p_output1[247]=-0.5;
  p_output1[248]=t12923;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t12924;
  p_output1[252]=0.25*t14163*t2071;
  p_output1[253]=-0.25*t14163*t2071;
  p_output1[254]=-0.5;
  p_output1[255]=t12923;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t12924;
  p_output1[259]=0.25*t14191*t2071;
  p_output1[260]=-0.25*t14191*t2071;
  p_output1[261]=-0.5;
  p_output1[262]=t12923;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t12924;
  p_output1[266]=0.25*t14216*t2071;
  p_output1[267]=-0.25*t14216*t2071;
  p_output1[268]=-0.5;
  p_output1[269]=t12923;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t12924;
  p_output1[273]=0.25*t14300*t2071;
  p_output1[274]=-0.25*t14300*t2071;
  p_output1[275]=-0.5;
  p_output1[276]=t12923;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t12924;
  p_output1[280]=0.25*t14424*t2071;
  p_output1[281]=-0.25*t14424*t2071;
  p_output1[282]=-0.5;
  p_output1[283]=t12923;
  p_output1[284]=1.;
  p_output1[285]=-0.5;
  p_output1[286]=t12924;
  p_output1[287]=0.25*t14526*t2071;
  p_output1[288]=-0.25*t14526*t2071;
  p_output1[289]=-0.5;
  p_output1[290]=t12923;
  p_output1[291]=1.;
  p_output1[292]=-0.5;
  p_output1[293]=t12924;
  p_output1[294]=0.25*t14549*t2071;
  p_output1[295]=-0.25*t14549*t2071;
  p_output1[296]=-0.5;
  p_output1[297]=t12923;
  p_output1[298]=1.;
  p_output1[299]=-0.5;
  p_output1[300]=t12924;
  p_output1[301]=0.25*t14701*t2071;
  p_output1[302]=-0.25*t14701*t2071;
  p_output1[303]=-0.5;
  p_output1[304]=t12923;
  p_output1[305]=1.;
  p_output1[306]=-0.5;
  p_output1[307]=t12924;
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

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void J_hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
