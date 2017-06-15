/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:10:32 GMT-04:00
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
  double t897;
  double t891;
  double t910;
  double t886;
  double t919;
  double t938;
  double t893;
  double t927;
  double t928;
  double t884;
  double t940;
  double t944;
  double t946;
  double t867;
  double t961;
  double t980;
  double t982;
  double t983;
  double t984;
  double t985;
  double t955;
  double t960;
  double t966;
  double t981;
  double t986;
  double t989;
  double t991;
  double t992;
  double t993;
  double t1017;
  double t1019;
  double t1021;
  double t1016;
  double t1022;
  double t1023;
  double t1026;
  double t1027;
  double t1028;
  double t929;
  double t947;
  double t950;
  double t963;
  double t969;
  double t971;
  double t974;
  double t975;
  double t976;
  double t990;
  double t994;
  double t995;
  double t997;
  double t998;
  double t1000;
  double t1001;
  double t1003;
  double t1004;
  double t1005;
  double t1006;
  double t1009;
  double t1025;
  double t1029;
  double t1030;
  double t1034;
  double t1035;
  double t1036;
  double t1037;
  double t1038;
  double t1039;
  double t1040;
  double t1041;
  double t1042;
  double t1070;
  double t1071;
  double t1094;
  double t1095;
  double t1046;
  double t1047;
  double t1048;
  double t1078;
  double t1079;
  double t1072;
  double t1075;
  double t1076;
  double t1081;
  double t1082;
  double t1083;
  double t1084;
  double t1086;
  double t1087;
  double t1088;
  double t1089;
  double t1091;
  double t1092;
  double t1096;
  double t1097;
  double t1098;
  double t1100;
  double t1101;
  double t1102;
  double t1108;
  double t1109;
  double t1110;
  double t1049;
  double t1051;
  double t1052;
  double t1053;
  double t1055;
  double t1056;
  t897 = Cos(var1[14]);
  t891 = Sin(var1[4]);
  t910 = Cos(var1[4]);
  t886 = Sin(var1[14]);
  t919 = Sin(var1[5]);
  t938 = Cos(var1[15]);
  t893 = t886*t891;
  t927 = -1.*t897*t910*t919;
  t928 = t893 + t927;
  t884 = Sin(var1[15]);
  t940 = t897*t891;
  t944 = t910*t886*t919;
  t946 = t940 + t944;
  t867 = Cos(var1[17]);
  t961 = Cos(var1[5]);
  t980 = Sin(var1[3]);
  t982 = Cos(var1[3]);
  t983 = t982*t961;
  t984 = -1.*t980*t891*t919;
  t985 = t983 + t984;
  t955 = Sin(var1[17]);
  t960 = Cos(var1[16]);
  t966 = Sin(var1[16]);
  t981 = -1.*t910*t886*t980;
  t986 = t897*t985;
  t989 = t981 + t986;
  t991 = -1.*t897*t910*t980;
  t992 = -1.*t886*t985;
  t993 = t991 + t992;
  t1017 = t961*t980;
  t1019 = t982*t891*t919;
  t1021 = t1017 + t1019;
  t1016 = t982*t910*t886;
  t1022 = t897*t1021;
  t1023 = t1016 + t1022;
  t1026 = t897*t982*t910;
  t1027 = -1.*t886*t1021;
  t1028 = t1026 + t1027;
  t929 = -1.*t884*t928;
  t947 = t938*t946;
  t950 = t929 + t947;
  t963 = t960*t910*t961;
  t969 = t938*t928;
  t971 = t884*t946;
  t974 = t969 + t971;
  t975 = -1.*t966*t974;
  t976 = t963 + t975;
  t990 = -1.*t884*t989;
  t994 = t938*t993;
  t995 = t990 + t994;
  t997 = t961*t980*t891;
  t998 = t982*t919;
  t1000 = t997 + t998;
  t1001 = t960*t1000;
  t1003 = t938*t989;
  t1004 = t884*t993;
  t1005 = t1003 + t1004;
  t1006 = -1.*t966*t1005;
  t1009 = t1001 + t1006;
  t1025 = -1.*t884*t1023;
  t1029 = t938*t1028;
  t1030 = t1025 + t1029;
  t1034 = -1.*t982*t961*t891;
  t1035 = t980*t919;
  t1036 = t1034 + t1035;
  t1037 = t960*t1036;
  t1038 = t938*t1023;
  t1039 = t884*t1028;
  t1040 = t1038 + t1039;
  t1041 = -1.*t966*t1040;
  t1042 = t1037 + t1041;
  t1070 = -1.*t960;
  t1071 = 1. + t1070;
  t1094 = -1.*t867;
  t1095 = 1. + t1094;
  t1046 = t955*t950;
  t1047 = t867*t976;
  t1048 = t1046 + t1047;
  t1078 = 0.135*t886;
  t1079 = 0. + t1078;
  t1072 = -0.049*t1071;
  t1075 = 0.135*t966;
  t1076 = 0. + t1072 + t1075;
  t1081 = -1.*t897;
  t1082 = 1. + t1081;
  t1083 = -0.135*t1082;
  t1084 = 0. + t1083;
  t1086 = -1.*t938;
  t1087 = 1. + t1086;
  t1088 = -0.135*t1087;
  t1089 = 0. + t1088;
  t1091 = 0.135*t884;
  t1092 = 0. + t1091;
  t1096 = -0.09*t1095;
  t1097 = 0.049*t955;
  t1098 = 0. + t1096 + t1097;
  t1100 = -0.135*t1071;
  t1101 = -0.049*t966;
  t1102 = 0. + t1100 + t1101;
  t1108 = -0.049*t1095;
  t1109 = -0.09*t955;
  t1110 = 0. + t1108 + t1109;
  t1049 = t955*t995;
  t1051 = t867*t1009;
  t1052 = t1049 + t1051;
  t1053 = t955*t1030;
  t1055 = t867*t1042;
  t1056 = t1053 + t1055;
  p_output1[0]=-1.*t867*t950 + t955*t976;
  p_output1[1]=t1009*t955 - 1.*t867*t995;
  p_output1[2]=-1.*t1030*t867 + t1042*t955;
  p_output1[3]=0.;
  p_output1[4]=t1048;
  p_output1[5]=t1052;
  p_output1[6]=t1056;
  p_output1[7]=0.;
  p_output1[8]=-1.*t910*t961*t966 - 1.*t960*t974;
  p_output1[9]=-1.*t1005*t960 - 1.*t1000*t966;
  p_output1[10]=-1.*t1040*t960 - 1.*t1036*t966;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t1048 + t1079*t891 - 1.*t1084*t910*t919 + t1089*t928 + t1092*t946 + t1098*t950 + t1076*t910*t961 + t1102*t974 - 0.1305*(t910*t961*t966 + t960*t974) + t1110*t976 - 0.21*(t867*t950 - 1.*t955*t976) + var1[0];
  p_output1[13]=0. - 0.049*t1052 + t1000*t1076 + t1005*t1102 + t1009*t1110 - 0.1305*(t1005*t960 + t1000*t966) - 1.*t1079*t910*t980 + t1084*t985 + t1089*t989 + t1092*t993 + t1098*t995 - 0.21*(-1.*t1009*t955 + t867*t995) + var1[1];
  p_output1[14]=0. - 0.049*t1056 + t1036*t1076 + t1021*t1084 + t1023*t1089 + t1028*t1092 + t1030*t1098 + t1040*t1102 + t1042*t1110 - 0.21*(t1030*t867 - 1.*t1042*t955) - 0.1305*(t1040*t960 + t1036*t966) + t1079*t910*t982 + var1[2];
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

#include "H_knee_joint_right.hh"

namespace SymExpression
{

void H_knee_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
