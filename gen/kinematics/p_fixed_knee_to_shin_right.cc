/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:10:33 GMT-04:00
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
  double t893;
  double t979;
  double t993;
  double t996;
  double t1004;
  double t1035;
  double t1026;
  double t1028;
  double t1029;
  double t1013;
  double t1039;
  double t1043;
  double t1045;
  double t944;
  double t946;
  double t947;
  double t963;
  double t940;
  double t1067;
  double t1068;
  double t1069;
  double t1047;
  double t1048;
  double t1049;
  double t1052;
  double t1056;
  double t1058;
  double t1059;
  double t1088;
  double t1089;
  double t1090;
  double t1092;
  double t1093;
  double t1096;
  double t1098;
  double t1101;
  double t1102;
  double t1103;
  double t1108;
  double t1109;
  double t1110;
  double t983;
  double t986;
  double t951;
  double t969;
  double t971;
  double t1121;
  double t997;
  double t998;
  double t1001;
  double t1003;
  double t1124;
  double t1016;
  double t1017;
  double t1019;
  double t1022;
  double t1128;
  double t1129;
  double t1130;
  double t1037;
  double t1038;
  double t1051;
  double t1053;
  double t1055;
  double t1132;
  double t1133;
  double t1134;
  double t1136;
  double t1137;
  double t1138;
  double t1063;
  double t1064;
  double t1065;
  double t1123;
  double t1125;
  double t1126;
  double t1144;
  double t1145;
  double t1146;
  double t1080;
  double t1083;
  double t1085;
  double t1097;
  double t1099;
  double t1100;
  double t1140;
  double t1141;
  double t1142;
  double t1152;
  double t1153;
  double t1154;
  double t1105;
  double t1106;
  double t1107;
  double t1156;
  double t1157;
  double t1158;
  double t1160;
  double t1161;
  double t1162;
  double t1178;
  double t1179;
  double t1180;
  double t1182;
  double t1183;
  double t1184;
  double t1186;
  double t1187;
  double t1188;
  double t1174;
  double t1175;
  double t1176;
  double t1194;
  double t1195;
  double t1196;
  double t1190;
  double t1191;
  double t1192;
  double t1202;
  double t1203;
  double t1204;
  double t1206;
  double t1207;
  double t1208;
  double t1210;
  double t1211;
  double t1212;
  t893 = Cos(var1[4]);
  t979 = Sin(var1[14]);
  t993 = Sin(var1[4]);
  t996 = Cos(var1[14]);
  t1004 = Sin(var1[5]);
  t1035 = Sin(var1[15]);
  t1026 = t979*t993;
  t1028 = -1.*t996*t893*t1004;
  t1029 = t1026 + t1028;
  t1013 = Cos(var1[15]);
  t1039 = t996*t993;
  t1043 = t893*t979*t1004;
  t1045 = t1039 + t1043;
  t944 = Cos(var1[16]);
  t946 = -1.*t944;
  t947 = 1. + t946;
  t963 = Sin(var1[16]);
  t940 = Cos(var1[5]);
  t1067 = t1013*t1029;
  t1068 = t1035*t1045;
  t1069 = t1067 + t1068;
  t1047 = Cos(var1[17]);
  t1048 = -1.*t1047;
  t1049 = 1. + t1048;
  t1052 = Sin(var1[17]);
  t1056 = -1.*t1035*t1029;
  t1058 = t1013*t1045;
  t1059 = t1056 + t1058;
  t1088 = t944*t893*t940;
  t1089 = -1.*t963*t1069;
  t1090 = t1088 + t1089;
  t1092 = Cos(var1[18]);
  t1093 = -1.*t1092;
  t1096 = 1. + t1093;
  t1098 = Sin(var1[18]);
  t1101 = t1052*t1059;
  t1102 = t1047*t1090;
  t1103 = t1101 + t1102;
  t1108 = t1047*t1059;
  t1109 = -1.*t1052*t1090;
  t1110 = t1108 + t1109;
  t983 = 0.135*t979;
  t986 = 0. + t983;
  t951 = -0.049*t947;
  t969 = 0.135*t963;
  t971 = 0. + t951 + t969;
  t1121 = Sin(var1[3]);
  t997 = -1.*t996;
  t998 = 1. + t997;
  t1001 = -0.135*t998;
  t1003 = 0. + t1001;
  t1124 = Cos(var1[3]);
  t1016 = -1.*t1013;
  t1017 = 1. + t1016;
  t1019 = -0.135*t1017;
  t1022 = 0. + t1019;
  t1128 = t1124*t940;
  t1129 = -1.*t1121*t993*t1004;
  t1130 = t1128 + t1129;
  t1037 = 0.135*t1035;
  t1038 = 0. + t1037;
  t1051 = -0.09*t1049;
  t1053 = 0.049*t1052;
  t1055 = 0. + t1051 + t1053;
  t1132 = -1.*t893*t979*t1121;
  t1133 = t996*t1130;
  t1134 = t1132 + t1133;
  t1136 = -1.*t996*t893*t1121;
  t1137 = -1.*t979*t1130;
  t1138 = t1136 + t1137;
  t1063 = -0.135*t947;
  t1064 = -0.049*t963;
  t1065 = 0. + t1063 + t1064;
  t1123 = t940*t1121*t993;
  t1125 = t1124*t1004;
  t1126 = t1123 + t1125;
  t1144 = t1013*t1134;
  t1145 = t1035*t1138;
  t1146 = t1144 + t1145;
  t1080 = -0.049*t1049;
  t1083 = -0.09*t1052;
  t1085 = 0. + t1080 + t1083;
  t1097 = -0.049*t1096;
  t1099 = -0.21*t1098;
  t1100 = 0. + t1097 + t1099;
  t1140 = -1.*t1035*t1134;
  t1141 = t1013*t1138;
  t1142 = t1140 + t1141;
  t1152 = t944*t1126;
  t1153 = -1.*t963*t1146;
  t1154 = t1152 + t1153;
  t1105 = -0.21*t1096;
  t1106 = 0.049*t1098;
  t1107 = 0. + t1105 + t1106;
  t1156 = t1052*t1142;
  t1157 = t1047*t1154;
  t1158 = t1156 + t1157;
  t1160 = t1047*t1142;
  t1161 = -1.*t1052*t1154;
  t1162 = t1160 + t1161;
  t1178 = t940*t1121;
  t1179 = t1124*t993*t1004;
  t1180 = t1178 + t1179;
  t1182 = t1124*t893*t979;
  t1183 = t996*t1180;
  t1184 = t1182 + t1183;
  t1186 = t996*t1124*t893;
  t1187 = -1.*t979*t1180;
  t1188 = t1186 + t1187;
  t1174 = -1.*t1124*t940*t993;
  t1175 = t1121*t1004;
  t1176 = t1174 + t1175;
  t1194 = t1013*t1184;
  t1195 = t1035*t1188;
  t1196 = t1194 + t1195;
  t1190 = -1.*t1035*t1184;
  t1191 = t1013*t1188;
  t1192 = t1190 + t1191;
  t1202 = t944*t1176;
  t1203 = -1.*t963*t1196;
  t1204 = t1202 + t1203;
  t1206 = t1052*t1192;
  t1207 = t1047*t1204;
  t1208 = t1206 + t1207;
  t1210 = t1047*t1192;
  t1211 = -1.*t1052*t1204;
  t1212 = t1210 + t1211;
  p_output1[0]=0. + t1022*t1029 + t1038*t1045 + t1055*t1059 + t1065*t1069 + t1085*t1090 + t1100*t1103 + t1107*t1110 - 0.2707*(-1.*t1098*t1103 + t1092*t1110) - 0.0016*(t1092*t1103 + t1098*t1110) - 1.*t1003*t1004*t893 - 0.1305*(t1069*t944 + t893*t940*t963) + t893*t940*t971 + t986*t993 + var1[0];
  p_output1[1]=0. + t1003*t1130 + t1022*t1134 + t1038*t1138 + t1055*t1142 + t1065*t1146 + t1085*t1154 + t1100*t1158 + t1107*t1162 - 0.2707*(-1.*t1098*t1158 + t1092*t1162) - 0.0016*(t1092*t1158 + t1098*t1162) - 0.1305*(t1146*t944 + t1126*t963) + t1126*t971 - 1.*t1121*t893*t986 + var1[1];
  p_output1[2]=0. + t1003*t1180 + t1022*t1184 + t1038*t1188 + t1055*t1192 + t1065*t1196 + t1085*t1204 + t1100*t1208 + t1107*t1212 - 0.2707*(-1.*t1098*t1208 + t1092*t1212) - 0.0016*(t1092*t1208 + t1098*t1212) - 0.1305*(t1196*t944 + t1176*t963) + t1176*t971 + t1124*t893*t986 + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_fixed_knee_to_shin_right.hh"

namespace SymExpression
{

void p_fixed_knee_to_shin_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
