/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:13 GMT-04:00
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
  double t1001;
  double t983;
  double t1011;
  double t978;
  double t1019;
  double t1037;
  double t994;
  double t1022;
  double t1026;
  double t971;
  double t1038;
  double t1039;
  double t1043;
  double t1053;
  double t1033;
  double t1045;
  double t1046;
  double t969;
  double t1055;
  double t1058;
  double t1059;
  double t1061;
  double t1063;
  double t1064;
  double t1065;
  double t1067;
  double t1068;
  double t951;
  double t1091;
  double t1099;
  double t1100;
  double t1101;
  double t1102;
  double t1097;
  double t1104;
  double t1105;
  double t1107;
  double t1108;
  double t1111;
  double t1077;
  double t1106;
  double t1112;
  double t1113;
  double t1115;
  double t1116;
  double t1117;
  double t1118;
  double t1119;
  double t1120;
  double t1122;
  double t1123;
  double t1125;
  double t1142;
  double t1143;
  double t1144;
  double t1141;
  double t1145;
  double t1147;
  double t1149;
  double t1150;
  double t1151;
  double t1148;
  double t1152;
  double t1155;
  double t1157;
  double t1159;
  double t1160;
  double t1163;
  double t1164;
  double t1165;
  double t1166;
  double t1167;
  double t1168;
  double t1051;
  double t1072;
  double t1075;
  double t1078;
  double t1080;
  double t1083;
  double t1114;
  double t1126;
  double t1127;
  double t1131;
  double t1133;
  double t1135;
  double t1156;
  double t1169;
  double t1170;
  double t1172;
  double t1173;
  double t1175;
  double t1201;
  double t1202;
  double t1228;
  double t1229;
  double t1246;
  double t1247;
  double t1178;
  double t1179;
  double t1181;
  double t1210;
  double t1213;
  double t1205;
  double t1206;
  double t1207;
  double t1215;
  double t1216;
  double t1217;
  double t1218;
  double t1220;
  double t1221;
  double t1222;
  double t1223;
  double t1225;
  double t1226;
  double t1230;
  double t1231;
  double t1232;
  double t1234;
  double t1235;
  double t1236;
  double t1242;
  double t1243;
  double t1244;
  double t1248;
  double t1249;
  double t1250;
  double t1252;
  double t1253;
  double t1254;
  double t1182;
  double t1183;
  double t1185;
  double t1186;
  double t1188;
  double t1189;
  t1001 = Cos(var1[14]);
  t983 = Sin(var1[4]);
  t1011 = Cos(var1[4]);
  t978 = Sin(var1[14]);
  t1019 = Sin(var1[5]);
  t1037 = Cos(var1[15]);
  t994 = t978*t983;
  t1022 = -1.*t1001*t1011*t1019;
  t1026 = t994 + t1022;
  t971 = Sin(var1[15]);
  t1038 = t1001*t983;
  t1039 = t1011*t978*t1019;
  t1043 = t1038 + t1039;
  t1053 = Cos(var1[17]);
  t1033 = -1.*t971*t1026;
  t1045 = t1037*t1043;
  t1046 = t1033 + t1045;
  t969 = Sin(var1[17]);
  t1055 = Cos(var1[16]);
  t1058 = Cos(var1[5]);
  t1059 = t1055*t1011*t1058;
  t1061 = Sin(var1[16]);
  t1063 = t1037*t1026;
  t1064 = t971*t1043;
  t1065 = t1063 + t1064;
  t1067 = -1.*t1061*t1065;
  t1068 = t1059 + t1067;
  t951 = Sin(var1[18]);
  t1091 = Sin(var1[3]);
  t1099 = Cos(var1[3]);
  t1100 = t1099*t1058;
  t1101 = -1.*t1091*t983*t1019;
  t1102 = t1100 + t1101;
  t1097 = -1.*t1011*t978*t1091;
  t1104 = t1001*t1102;
  t1105 = t1097 + t1104;
  t1107 = -1.*t1001*t1011*t1091;
  t1108 = -1.*t978*t1102;
  t1111 = t1107 + t1108;
  t1077 = Cos(var1[18]);
  t1106 = -1.*t971*t1105;
  t1112 = t1037*t1111;
  t1113 = t1106 + t1112;
  t1115 = t1058*t1091*t983;
  t1116 = t1099*t1019;
  t1117 = t1115 + t1116;
  t1118 = t1055*t1117;
  t1119 = t1037*t1105;
  t1120 = t971*t1111;
  t1122 = t1119 + t1120;
  t1123 = -1.*t1061*t1122;
  t1125 = t1118 + t1123;
  t1142 = t1058*t1091;
  t1143 = t1099*t983*t1019;
  t1144 = t1142 + t1143;
  t1141 = t1099*t1011*t978;
  t1145 = t1001*t1144;
  t1147 = t1141 + t1145;
  t1149 = t1001*t1099*t1011;
  t1150 = -1.*t978*t1144;
  t1151 = t1149 + t1150;
  t1148 = -1.*t971*t1147;
  t1152 = t1037*t1151;
  t1155 = t1148 + t1152;
  t1157 = -1.*t1099*t1058*t983;
  t1159 = t1091*t1019;
  t1160 = t1157 + t1159;
  t1163 = t1055*t1160;
  t1164 = t1037*t1147;
  t1165 = t971*t1151;
  t1166 = t1164 + t1165;
  t1167 = -1.*t1061*t1166;
  t1168 = t1163 + t1167;
  t1051 = t969*t1046;
  t1072 = t1053*t1068;
  t1075 = t1051 + t1072;
  t1078 = t1053*t1046;
  t1080 = -1.*t969*t1068;
  t1083 = t1078 + t1080;
  t1114 = t969*t1113;
  t1126 = t1053*t1125;
  t1127 = t1114 + t1126;
  t1131 = t1053*t1113;
  t1133 = -1.*t969*t1125;
  t1135 = t1131 + t1133;
  t1156 = t969*t1155;
  t1169 = t1053*t1168;
  t1170 = t1156 + t1169;
  t1172 = t1053*t1155;
  t1173 = -1.*t969*t1168;
  t1175 = t1172 + t1173;
  t1201 = -1.*t1055;
  t1202 = 1. + t1201;
  t1228 = -1.*t1053;
  t1229 = 1. + t1228;
  t1246 = -1.*t1077;
  t1247 = 1. + t1246;
  t1178 = t1077*t1075;
  t1179 = t951*t1083;
  t1181 = t1178 + t1179;
  t1210 = 0.135*t978;
  t1213 = 0. + t1210;
  t1205 = -0.049*t1202;
  t1206 = 0.135*t1061;
  t1207 = 0. + t1205 + t1206;
  t1215 = -1.*t1001;
  t1216 = 1. + t1215;
  t1217 = -0.135*t1216;
  t1218 = 0. + t1217;
  t1220 = -1.*t1037;
  t1221 = 1. + t1220;
  t1222 = -0.135*t1221;
  t1223 = 0. + t1222;
  t1225 = 0.135*t971;
  t1226 = 0. + t1225;
  t1230 = -0.09*t1229;
  t1231 = 0.049*t969;
  t1232 = 0. + t1230 + t1231;
  t1234 = -0.135*t1202;
  t1235 = -0.049*t1061;
  t1236 = 0. + t1234 + t1235;
  t1242 = -0.049*t1229;
  t1243 = -0.09*t969;
  t1244 = 0. + t1242 + t1243;
  t1248 = -0.049*t1247;
  t1249 = -0.21*t951;
  t1250 = 0. + t1248 + t1249;
  t1252 = -0.21*t1247;
  t1253 = 0.049*t951;
  t1254 = 0. + t1252 + t1253;
  t1182 = t1077*t1127;
  t1183 = t951*t1135;
  t1185 = t1182 + t1183;
  t1186 = t1077*t1170;
  t1188 = t951*t1175;
  t1189 = t1186 + t1188;
  p_output1[0]=-1.*t1077*t1083 + t1075*t951;
  p_output1[1]=-1.*t1077*t1135 + t1127*t951;
  p_output1[2]=-1.*t1077*t1175 + t1170*t951;
  p_output1[3]=0.;
  p_output1[4]=t1181;
  p_output1[5]=t1185;
  p_output1[6]=t1189;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1011*t1058*t1061 - 1.*t1055*t1065;
  p_output1[9]=-1.*t1061*t1117 - 1.*t1055*t1122;
  p_output1[10]=-1.*t1061*t1160 - 1.*t1055*t1166;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(t1011*t1058*t1061 + t1055*t1065) - 0.0016*t1181 + t1011*t1058*t1207 - 1.*t1011*t1019*t1218 + t1026*t1223 + t1043*t1226 + t1046*t1232 + t1065*t1236 + t1068*t1244 + t1075*t1250 + t1083*t1254 - 0.2707*(t1077*t1083 - 1.*t1075*t951) + t1213*t983 + var1[0];
  p_output1[13]=0. - 0.1305*(t1061*t1117 + t1055*t1122) - 0.0016*t1185 + t1117*t1207 - 1.*t1011*t1091*t1213 + t1102*t1218 + t1105*t1223 + t1111*t1226 + t1113*t1232 + t1122*t1236 + t1125*t1244 + t1127*t1250 + t1135*t1254 - 0.2707*(t1077*t1135 - 1.*t1127*t951) + var1[1];
  p_output1[14]=0. - 0.1305*(t1061*t1160 + t1055*t1166) - 0.0016*t1189 + t1160*t1207 + t1011*t1099*t1213 + t1144*t1218 + t1147*t1223 + t1151*t1226 + t1155*t1232 + t1166*t1236 + t1168*t1244 + t1170*t1250 + t1175*t1254 - 0.2707*(t1077*t1175 - 1.*t1170*t951) + var1[2];
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

#include "H_fixed_knee_to_shin_right.hh"

namespace SymExpression
{

void H_fixed_knee_to_shin_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
