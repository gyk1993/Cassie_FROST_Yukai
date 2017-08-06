/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:37:01 GMT-04:00
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
  double t225;
  double t295;
  double t450;
  double t673;
  double t918;
  double t938;
  double t1093;
  double t1239;
  double t1341;
  double t1151;
  double t1511;
  double t1686;
  double t1924;
  double t1934;
  double t2045;
  double t2089;
  double t2562;
  double t2754;
  double t5700;
  double t6142;
  double t6575;
  double t6819;
  double t7602;
  double t7605;
  double t7629;
  double t7634;
  double t7657;
  double t7677;
  double t7690;
  double t7692;
  double t7707;
  double t7719;
  double t7741;
  double t7742;
  double t7748;
  double t7757;
  double t7784;
  double t7787;
  double t7800;
  double t7801;
  double t7805;
  double t7806;
  double t7818;
  double t7826;
  double t7836;
  double t7838;
  double t7856;
  double t7860;
  double t7884;
  double t7888;
  double t7902;
  double t7903;
  double t7920;
  double t7924;
  double t7914;
  double t7915;
  double t7937;
  double t7939;
  double t7949;
  double t7955;
  double t7976;
  double t7982;
  double t7989;
  double t7990;
  double t8002;
  double t8004;
  double t8013;
  double t8015;
  double t8021;
  double t8025;
  double t8037;
  double t8039;
  double t8043;
  double t8047;
  double t8065;
  double t8069;
  double t8073;
  double t8074;
  double t8078;
  double t8079;
  double t8087;
  double t8088;
  double t8095;
  double t8097;
  double t8105;
  double t8107;
  double t8112;
  double t8115;
  double t8122;
  double t8123;
  double t8132;
  double t8136;
  double t8145;
  double t8146;
  double t8157;
  double t8158;
  t225 = 4.*var5[0];
  t295 = t225 + var7[0] + var3[0];
  t450 = -1. + var8[0];
  t673 = 1/t450;
  t918 = -1.*var1[0];
  t938 = t918 + var1[1];
  t1093 = -0.333333333333333*t673*t938;
  t1239 = 4.*var5[1];
  t1341 = t1239 + var7[1] + var3[1];
  t1151 = -1.33333333333333*t673*t938;
  t1511 = 4.*var5[2];
  t1686 = t1511 + var7[2] + var3[2];
  t1924 = 4.*var5[3];
  t1934 = t1924 + var7[3] + var3[3];
  t2045 = 4.*var5[4];
  t2089 = t2045 + var7[4] + var3[4];
  t2562 = 4.*var5[5];
  t2754 = t2562 + var7[5] + var3[5];
  t5700 = 4.*var5[6];
  t6142 = t5700 + var7[6] + var3[6];
  t6575 = 4.*var5[7];
  t6819 = t6575 + var7[7] + var3[7];
  t7602 = 4.*var5[8];
  t7605 = t7602 + var7[8] + var3[8];
  t7629 = 4.*var5[9];
  t7634 = t7629 + var7[9] + var3[9];
  t7657 = 4.*var5[10];
  t7677 = t7657 + var7[10] + var3[10];
  t7690 = 4.*var5[11];
  t7692 = t7690 + var7[11] + var3[11];
  t7707 = 4.*var5[12];
  t7719 = t7707 + var7[12] + var3[12];
  t7741 = 4.*var5[13];
  t7742 = t7741 + var7[13] + var3[13];
  t7748 = 4.*var5[14];
  t7757 = t7748 + var7[14] + var3[14];
  t7784 = 4.*var5[15];
  t7787 = t7784 + var7[15] + var3[15];
  t7800 = 4.*var5[16];
  t7801 = t7800 + var7[16] + var3[16];
  t7805 = 4.*var5[17];
  t7806 = t7805 + var7[17] + var3[17];
  t7818 = 4.*var5[18];
  t7826 = t7818 + var7[18] + var3[18];
  t7836 = 4.*var5[19];
  t7838 = t7836 + var7[19] + var3[19];
  t7856 = 4.*var5[20];
  t7860 = t7856 + var7[20] + var3[20];
  t7884 = 4.*var5[21];
  t7888 = t7884 + var7[21] + var3[21];
  t7902 = -1.*var7[0];
  t7903 = t7902 + var3[0];
  t7920 = -1.*var7[1];
  t7924 = t7920 + var3[1];
  t7914 = -0.25*t673*t938;
  t7915 = 0.25*t673*t938;
  t7937 = -1.*var7[2];
  t7939 = t7937 + var3[2];
  t7949 = -1.*var7[3];
  t7955 = t7949 + var3[3];
  t7976 = -1.*var7[4];
  t7982 = t7976 + var3[4];
  t7989 = -1.*var7[5];
  t7990 = t7989 + var3[5];
  t8002 = -1.*var7[6];
  t8004 = t8002 + var3[6];
  t8013 = -1.*var7[7];
  t8015 = t8013 + var3[7];
  t8021 = -1.*var7[8];
  t8025 = t8021 + var3[8];
  t8037 = -1.*var7[9];
  t8039 = t8037 + var3[9];
  t8043 = -1.*var7[10];
  t8047 = t8043 + var3[10];
  t8065 = -1.*var7[11];
  t8069 = t8065 + var3[11];
  t8073 = -1.*var7[12];
  t8074 = t8073 + var3[12];
  t8078 = -1.*var7[13];
  t8079 = t8078 + var3[13];
  t8087 = -1.*var7[14];
  t8088 = t8087 + var3[14];
  t8095 = -1.*var7[15];
  t8097 = t8095 + var3[15];
  t8105 = -1.*var7[16];
  t8107 = t8105 + var3[16];
  t8112 = -1.*var7[17];
  t8115 = t8112 + var3[17];
  t8122 = -1.*var7[18];
  t8123 = t8122 + var3[18];
  t8132 = -1.*var7[19];
  t8136 = t8132 + var3[19];
  t8145 = -1.*var7[20];
  t8146 = t8145 + var3[20];
  t8157 = -1.*var7[21];
  t8158 = t8157 + var3[21];
  p_output1[0]=0.333333333333333*t295*t673;
  p_output1[1]=-0.333333333333333*t295*t673;
  p_output1[2]=-1.;
  p_output1[3]=t1093;
  p_output1[4]=t1151;
  p_output1[5]=1.;
  p_output1[6]=t1093;
  p_output1[7]=0.333333333333333*t1341*t673;
  p_output1[8]=-0.333333333333333*t1341*t673;
  p_output1[9]=-1.;
  p_output1[10]=t1093;
  p_output1[11]=t1151;
  p_output1[12]=1.;
  p_output1[13]=t1093;
  p_output1[14]=0.333333333333333*t1686*t673;
  p_output1[15]=-0.333333333333333*t1686*t673;
  p_output1[16]=-1.;
  p_output1[17]=t1093;
  p_output1[18]=t1151;
  p_output1[19]=1.;
  p_output1[20]=t1093;
  p_output1[21]=0.333333333333333*t1934*t673;
  p_output1[22]=-0.333333333333333*t1934*t673;
  p_output1[23]=-1.;
  p_output1[24]=t1093;
  p_output1[25]=t1151;
  p_output1[26]=1.;
  p_output1[27]=t1093;
  p_output1[28]=0.333333333333333*t2089*t673;
  p_output1[29]=-0.333333333333333*t2089*t673;
  p_output1[30]=-1.;
  p_output1[31]=t1093;
  p_output1[32]=t1151;
  p_output1[33]=1.;
  p_output1[34]=t1093;
  p_output1[35]=0.333333333333333*t2754*t673;
  p_output1[36]=-0.333333333333333*t2754*t673;
  p_output1[37]=-1.;
  p_output1[38]=t1093;
  p_output1[39]=t1151;
  p_output1[40]=1.;
  p_output1[41]=t1093;
  p_output1[42]=0.333333333333333*t6142*t673;
  p_output1[43]=-0.333333333333333*t6142*t673;
  p_output1[44]=-1.;
  p_output1[45]=t1093;
  p_output1[46]=t1151;
  p_output1[47]=1.;
  p_output1[48]=t1093;
  p_output1[49]=0.333333333333333*t673*t6819;
  p_output1[50]=-0.333333333333333*t673*t6819;
  p_output1[51]=-1.;
  p_output1[52]=t1093;
  p_output1[53]=t1151;
  p_output1[54]=1.;
  p_output1[55]=t1093;
  p_output1[56]=0.333333333333333*t673*t7605;
  p_output1[57]=-0.333333333333333*t673*t7605;
  p_output1[58]=-1.;
  p_output1[59]=t1093;
  p_output1[60]=t1151;
  p_output1[61]=1.;
  p_output1[62]=t1093;
  p_output1[63]=0.333333333333333*t673*t7634;
  p_output1[64]=-0.333333333333333*t673*t7634;
  p_output1[65]=-1.;
  p_output1[66]=t1093;
  p_output1[67]=t1151;
  p_output1[68]=1.;
  p_output1[69]=t1093;
  p_output1[70]=0.333333333333333*t673*t7677;
  p_output1[71]=-0.333333333333333*t673*t7677;
  p_output1[72]=-1.;
  p_output1[73]=t1093;
  p_output1[74]=t1151;
  p_output1[75]=1.;
  p_output1[76]=t1093;
  p_output1[77]=0.333333333333333*t673*t7692;
  p_output1[78]=-0.333333333333333*t673*t7692;
  p_output1[79]=-1.;
  p_output1[80]=t1093;
  p_output1[81]=t1151;
  p_output1[82]=1.;
  p_output1[83]=t1093;
  p_output1[84]=0.333333333333333*t673*t7719;
  p_output1[85]=-0.333333333333333*t673*t7719;
  p_output1[86]=-1.;
  p_output1[87]=t1093;
  p_output1[88]=t1151;
  p_output1[89]=1.;
  p_output1[90]=t1093;
  p_output1[91]=0.333333333333333*t673*t7742;
  p_output1[92]=-0.333333333333333*t673*t7742;
  p_output1[93]=-1.;
  p_output1[94]=t1093;
  p_output1[95]=t1151;
  p_output1[96]=1.;
  p_output1[97]=t1093;
  p_output1[98]=0.333333333333333*t673*t7757;
  p_output1[99]=-0.333333333333333*t673*t7757;
  p_output1[100]=-1.;
  p_output1[101]=t1093;
  p_output1[102]=t1151;
  p_output1[103]=1.;
  p_output1[104]=t1093;
  p_output1[105]=0.333333333333333*t673*t7787;
  p_output1[106]=-0.333333333333333*t673*t7787;
  p_output1[107]=-1.;
  p_output1[108]=t1093;
  p_output1[109]=t1151;
  p_output1[110]=1.;
  p_output1[111]=t1093;
  p_output1[112]=0.333333333333333*t673*t7801;
  p_output1[113]=-0.333333333333333*t673*t7801;
  p_output1[114]=-1.;
  p_output1[115]=t1093;
  p_output1[116]=t1151;
  p_output1[117]=1.;
  p_output1[118]=t1093;
  p_output1[119]=0.333333333333333*t673*t7806;
  p_output1[120]=-0.333333333333333*t673*t7806;
  p_output1[121]=-1.;
  p_output1[122]=t1093;
  p_output1[123]=t1151;
  p_output1[124]=1.;
  p_output1[125]=t1093;
  p_output1[126]=0.333333333333333*t673*t7826;
  p_output1[127]=-0.333333333333333*t673*t7826;
  p_output1[128]=-1.;
  p_output1[129]=t1093;
  p_output1[130]=t1151;
  p_output1[131]=1.;
  p_output1[132]=t1093;
  p_output1[133]=0.333333333333333*t673*t7838;
  p_output1[134]=-0.333333333333333*t673*t7838;
  p_output1[135]=-1.;
  p_output1[136]=t1093;
  p_output1[137]=t1151;
  p_output1[138]=1.;
  p_output1[139]=t1093;
  p_output1[140]=0.333333333333333*t673*t7860;
  p_output1[141]=-0.333333333333333*t673*t7860;
  p_output1[142]=-1.;
  p_output1[143]=t1093;
  p_output1[144]=t1151;
  p_output1[145]=1.;
  p_output1[146]=t1093;
  p_output1[147]=0.333333333333333*t673*t7888;
  p_output1[148]=-0.333333333333333*t673*t7888;
  p_output1[149]=-1.;
  p_output1[150]=t1093;
  p_output1[151]=t1151;
  p_output1[152]=1.;
  p_output1[153]=t1093;
  p_output1[154]=0.25*t673*t7903;
  p_output1[155]=-0.25*t673*t7903;
  p_output1[156]=-0.5;
  p_output1[157]=t7914;
  p_output1[158]=1.;
  p_output1[159]=-0.5;
  p_output1[160]=t7915;
  p_output1[161]=0.25*t673*t7924;
  p_output1[162]=-0.25*t673*t7924;
  p_output1[163]=-0.5;
  p_output1[164]=t7914;
  p_output1[165]=1.;
  p_output1[166]=-0.5;
  p_output1[167]=t7915;
  p_output1[168]=0.25*t673*t7939;
  p_output1[169]=-0.25*t673*t7939;
  p_output1[170]=-0.5;
  p_output1[171]=t7914;
  p_output1[172]=1.;
  p_output1[173]=-0.5;
  p_output1[174]=t7915;
  p_output1[175]=0.25*t673*t7955;
  p_output1[176]=-0.25*t673*t7955;
  p_output1[177]=-0.5;
  p_output1[178]=t7914;
  p_output1[179]=1.;
  p_output1[180]=-0.5;
  p_output1[181]=t7915;
  p_output1[182]=0.25*t673*t7982;
  p_output1[183]=-0.25*t673*t7982;
  p_output1[184]=-0.5;
  p_output1[185]=t7914;
  p_output1[186]=1.;
  p_output1[187]=-0.5;
  p_output1[188]=t7915;
  p_output1[189]=0.25*t673*t7990;
  p_output1[190]=-0.25*t673*t7990;
  p_output1[191]=-0.5;
  p_output1[192]=t7914;
  p_output1[193]=1.;
  p_output1[194]=-0.5;
  p_output1[195]=t7915;
  p_output1[196]=0.25*t673*t8004;
  p_output1[197]=-0.25*t673*t8004;
  p_output1[198]=-0.5;
  p_output1[199]=t7914;
  p_output1[200]=1.;
  p_output1[201]=-0.5;
  p_output1[202]=t7915;
  p_output1[203]=0.25*t673*t8015;
  p_output1[204]=-0.25*t673*t8015;
  p_output1[205]=-0.5;
  p_output1[206]=t7914;
  p_output1[207]=1.;
  p_output1[208]=-0.5;
  p_output1[209]=t7915;
  p_output1[210]=0.25*t673*t8025;
  p_output1[211]=-0.25*t673*t8025;
  p_output1[212]=-0.5;
  p_output1[213]=t7914;
  p_output1[214]=1.;
  p_output1[215]=-0.5;
  p_output1[216]=t7915;
  p_output1[217]=0.25*t673*t8039;
  p_output1[218]=-0.25*t673*t8039;
  p_output1[219]=-0.5;
  p_output1[220]=t7914;
  p_output1[221]=1.;
  p_output1[222]=-0.5;
  p_output1[223]=t7915;
  p_output1[224]=0.25*t673*t8047;
  p_output1[225]=-0.25*t673*t8047;
  p_output1[226]=-0.5;
  p_output1[227]=t7914;
  p_output1[228]=1.;
  p_output1[229]=-0.5;
  p_output1[230]=t7915;
  p_output1[231]=0.25*t673*t8069;
  p_output1[232]=-0.25*t673*t8069;
  p_output1[233]=-0.5;
  p_output1[234]=t7914;
  p_output1[235]=1.;
  p_output1[236]=-0.5;
  p_output1[237]=t7915;
  p_output1[238]=0.25*t673*t8074;
  p_output1[239]=-0.25*t673*t8074;
  p_output1[240]=-0.5;
  p_output1[241]=t7914;
  p_output1[242]=1.;
  p_output1[243]=-0.5;
  p_output1[244]=t7915;
  p_output1[245]=0.25*t673*t8079;
  p_output1[246]=-0.25*t673*t8079;
  p_output1[247]=-0.5;
  p_output1[248]=t7914;
  p_output1[249]=1.;
  p_output1[250]=-0.5;
  p_output1[251]=t7915;
  p_output1[252]=0.25*t673*t8088;
  p_output1[253]=-0.25*t673*t8088;
  p_output1[254]=-0.5;
  p_output1[255]=t7914;
  p_output1[256]=1.;
  p_output1[257]=-0.5;
  p_output1[258]=t7915;
  p_output1[259]=0.25*t673*t8097;
  p_output1[260]=-0.25*t673*t8097;
  p_output1[261]=-0.5;
  p_output1[262]=t7914;
  p_output1[263]=1.;
  p_output1[264]=-0.5;
  p_output1[265]=t7915;
  p_output1[266]=0.25*t673*t8107;
  p_output1[267]=-0.25*t673*t8107;
  p_output1[268]=-0.5;
  p_output1[269]=t7914;
  p_output1[270]=1.;
  p_output1[271]=-0.5;
  p_output1[272]=t7915;
  p_output1[273]=0.25*t673*t8115;
  p_output1[274]=-0.25*t673*t8115;
  p_output1[275]=-0.5;
  p_output1[276]=t7914;
  p_output1[277]=1.;
  p_output1[278]=-0.5;
  p_output1[279]=t7915;
  p_output1[280]=0.25*t673*t8123;
  p_output1[281]=-0.25*t673*t8123;
  p_output1[282]=-0.5;
  p_output1[283]=t7914;
  p_output1[284]=1.;
  p_output1[285]=-0.5;
  p_output1[286]=t7915;
  p_output1[287]=0.25*t673*t8136;
  p_output1[288]=-0.25*t673*t8136;
  p_output1[289]=-0.5;
  p_output1[290]=t7914;
  p_output1[291]=1.;
  p_output1[292]=-0.5;
  p_output1[293]=t7915;
  p_output1[294]=0.25*t673*t8146;
  p_output1[295]=-0.25*t673*t8146;
  p_output1[296]=-0.5;
  p_output1[297]=t7914;
  p_output1[298]=1.;
  p_output1[299]=-0.5;
  p_output1[300]=t7915;
  p_output1[301]=0.25*t673*t8158;
  p_output1[302]=-0.25*t673*t8158;
  p_output1[303]=-0.5;
  p_output1[304]=t7914;
  p_output1[305]=1.;
  p_output1[306]=-0.5;
  p_output1[307]=t7915;
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
