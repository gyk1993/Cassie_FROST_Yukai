/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:14 GMT-04:00
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
  double t994;
  double t1072;
  double t1085;
  double t1100;
  double t1114;
  double t1141;
  double t1128;
  double t1131;
  double t1138;
  double t1116;
  double t1145;
  double t1149;
  double t1151;
  double t1039;
  double t1043;
  double t1045;
  double t1051;
  double t1038;
  double t1182;
  double t1183;
  double t1185;
  double t1155;
  double t1156;
  double t1159;
  double t1164;
  double t1171;
  double t1172;
  double t1176;
  double t1197;
  double t1198;
  double t1199;
  double t1205;
  double t1206;
  double t1207;
  double t1210;
  double t1219;
  double t1222;
  double t1223;
  double t1230;
  double t1231;
  double t1232;
  double t1234;
  double t1235;
  double t1236;
  double t1238;
  double t1241;
  double t1242;
  double t1243;
  double t1250;
  double t1251;
  double t1252;
  double t1076;
  double t1078;
  double t1046;
  double t1059;
  double t1063;
  double t1263;
  double t1104;
  double t1111;
  double t1112;
  double t1113;
  double t1266;
  double t1118;
  double t1119;
  double t1120;
  double t1126;
  double t1270;
  double t1271;
  double t1272;
  double t1142;
  double t1143;
  double t1163;
  double t1165;
  double t1169;
  double t1274;
  double t1275;
  double t1276;
  double t1278;
  double t1279;
  double t1280;
  double t1178;
  double t1179;
  double t1181;
  double t1265;
  double t1267;
  double t1268;
  double t1286;
  double t1287;
  double t1288;
  double t1193;
  double t1194;
  double t1195;
  double t1209;
  double t1214;
  double t1217;
  double t1282;
  double t1283;
  double t1284;
  double t1294;
  double t1295;
  double t1296;
  double t1225;
  double t1226;
  double t1227;
  double t1237;
  double t1239;
  double t1240;
  double t1298;
  double t1299;
  double t1300;
  double t1302;
  double t1303;
  double t1304;
  double t1245;
  double t1248;
  double t1249;
  double t1306;
  double t1307;
  double t1308;
  double t1310;
  double t1311;
  double t1312;
  double t1328;
  double t1329;
  double t1330;
  double t1332;
  double t1333;
  double t1334;
  double t1336;
  double t1337;
  double t1338;
  double t1324;
  double t1325;
  double t1326;
  double t1344;
  double t1345;
  double t1346;
  double t1340;
  double t1341;
  double t1342;
  double t1352;
  double t1353;
  double t1354;
  double t1356;
  double t1357;
  double t1358;
  double t1360;
  double t1361;
  double t1362;
  double t1364;
  double t1365;
  double t1366;
  double t1368;
  double t1369;
  double t1370;
  t994 = Cos(var1[4]);
  t1072 = Sin(var1[14]);
  t1085 = Sin(var1[4]);
  t1100 = Cos(var1[14]);
  t1114 = Sin(var1[5]);
  t1141 = Sin(var1[15]);
  t1128 = t1072*t1085;
  t1131 = -1.*t1100*t994*t1114;
  t1138 = t1128 + t1131;
  t1116 = Cos(var1[15]);
  t1145 = t1100*t1085;
  t1149 = t994*t1072*t1114;
  t1151 = t1145 + t1149;
  t1039 = Cos(var1[16]);
  t1043 = -1.*t1039;
  t1045 = 1. + t1043;
  t1051 = Sin(var1[16]);
  t1038 = Cos(var1[5]);
  t1182 = t1116*t1138;
  t1183 = t1141*t1151;
  t1185 = t1182 + t1183;
  t1155 = Cos(var1[17]);
  t1156 = -1.*t1155;
  t1159 = 1. + t1156;
  t1164 = Sin(var1[17]);
  t1171 = -1.*t1141*t1138;
  t1172 = t1116*t1151;
  t1176 = t1171 + t1172;
  t1197 = t1039*t994*t1038;
  t1198 = -1.*t1051*t1185;
  t1199 = t1197 + t1198;
  t1205 = Cos(var1[18]);
  t1206 = -1.*t1205;
  t1207 = 1. + t1206;
  t1210 = Sin(var1[18]);
  t1219 = t1164*t1176;
  t1222 = t1155*t1199;
  t1223 = t1219 + t1222;
  t1230 = t1155*t1176;
  t1231 = -1.*t1164*t1199;
  t1232 = t1230 + t1231;
  t1234 = Cos(var1[19]);
  t1235 = -1.*t1234;
  t1236 = 1. + t1235;
  t1238 = Sin(var1[19]);
  t1241 = -1.*t1210*t1223;
  t1242 = t1205*t1232;
  t1243 = t1241 + t1242;
  t1250 = t1205*t1223;
  t1251 = t1210*t1232;
  t1252 = t1250 + t1251;
  t1076 = 0.135*t1072;
  t1078 = 0. + t1076;
  t1046 = -0.049*t1045;
  t1059 = 0.135*t1051;
  t1063 = 0. + t1046 + t1059;
  t1263 = Sin(var1[3]);
  t1104 = -1.*t1100;
  t1111 = 1. + t1104;
  t1112 = -0.135*t1111;
  t1113 = 0. + t1112;
  t1266 = Cos(var1[3]);
  t1118 = -1.*t1116;
  t1119 = 1. + t1118;
  t1120 = -0.135*t1119;
  t1126 = 0. + t1120;
  t1270 = t1266*t1038;
  t1271 = -1.*t1263*t1085*t1114;
  t1272 = t1270 + t1271;
  t1142 = 0.135*t1141;
  t1143 = 0. + t1142;
  t1163 = -0.09*t1159;
  t1165 = 0.049*t1164;
  t1169 = 0. + t1163 + t1165;
  t1274 = -1.*t994*t1072*t1263;
  t1275 = t1100*t1272;
  t1276 = t1274 + t1275;
  t1278 = -1.*t1100*t994*t1263;
  t1279 = -1.*t1072*t1272;
  t1280 = t1278 + t1279;
  t1178 = -0.135*t1045;
  t1179 = -0.049*t1051;
  t1181 = 0. + t1178 + t1179;
  t1265 = t1038*t1263*t1085;
  t1267 = t1266*t1114;
  t1268 = t1265 + t1267;
  t1286 = t1116*t1276;
  t1287 = t1141*t1280;
  t1288 = t1286 + t1287;
  t1193 = -0.049*t1159;
  t1194 = -0.09*t1164;
  t1195 = 0. + t1193 + t1194;
  t1209 = -0.049*t1207;
  t1214 = -0.21*t1210;
  t1217 = 0. + t1209 + t1214;
  t1282 = -1.*t1141*t1276;
  t1283 = t1116*t1280;
  t1284 = t1282 + t1283;
  t1294 = t1039*t1268;
  t1295 = -1.*t1051*t1288;
  t1296 = t1294 + t1295;
  t1225 = -0.21*t1207;
  t1226 = 0.049*t1210;
  t1227 = 0. + t1225 + t1226;
  t1237 = -0.2707*t1236;
  t1239 = 0.0016*t1238;
  t1240 = 0. + t1237 + t1239;
  t1298 = t1164*t1284;
  t1299 = t1155*t1296;
  t1300 = t1298 + t1299;
  t1302 = t1155*t1284;
  t1303 = -1.*t1164*t1296;
  t1304 = t1302 + t1303;
  t1245 = -0.0016*t1236;
  t1248 = -0.2707*t1238;
  t1249 = 0. + t1245 + t1248;
  t1306 = -1.*t1210*t1300;
  t1307 = t1205*t1304;
  t1308 = t1306 + t1307;
  t1310 = t1205*t1300;
  t1311 = t1210*t1304;
  t1312 = t1310 + t1311;
  t1328 = t1038*t1263;
  t1329 = t1266*t1085*t1114;
  t1330 = t1328 + t1329;
  t1332 = t1266*t994*t1072;
  t1333 = t1100*t1330;
  t1334 = t1332 + t1333;
  t1336 = t1100*t1266*t994;
  t1337 = -1.*t1072*t1330;
  t1338 = t1336 + t1337;
  t1324 = -1.*t1266*t1038*t1085;
  t1325 = t1263*t1114;
  t1326 = t1324 + t1325;
  t1344 = t1116*t1334;
  t1345 = t1141*t1338;
  t1346 = t1344 + t1345;
  t1340 = -1.*t1141*t1334;
  t1341 = t1116*t1338;
  t1342 = t1340 + t1341;
  t1352 = t1039*t1326;
  t1353 = -1.*t1051*t1346;
  t1354 = t1352 + t1353;
  t1356 = t1164*t1342;
  t1357 = t1155*t1354;
  t1358 = t1356 + t1357;
  t1360 = t1155*t1342;
  t1361 = -1.*t1164*t1354;
  t1362 = t1360 + t1361;
  t1364 = -1.*t1210*t1358;
  t1365 = t1205*t1362;
  t1366 = t1364 + t1365;
  t1368 = t1205*t1358;
  t1369 = t1210*t1362;
  t1370 = t1368 + t1369;
  p_output1[0]=0. + t1078*t1085 + t1126*t1138 + t1143*t1151 + t1169*t1176 + t1181*t1185 + t1195*t1199 + t1217*t1223 + t1227*t1232 + t1240*t1243 + t1249*t1252 + 0.0184*(t1238*t1243 + t1234*t1252) - 0.7055*(t1234*t1243 - 1.*t1238*t1252) + t1038*t1063*t994 - 1.*t1113*t1114*t994 - 0.1305*(t1039*t1185 + t1038*t1051*t994) + var1[0];
  p_output1[1]=0. + t1063*t1268 + t1113*t1272 + t1126*t1276 + t1143*t1280 + t1169*t1284 + t1181*t1288 - 0.1305*(t1051*t1268 + t1039*t1288) + t1195*t1296 + t1217*t1300 + t1227*t1304 + t1240*t1308 + t1249*t1312 + 0.0184*(t1238*t1308 + t1234*t1312) - 0.7055*(t1234*t1308 - 1.*t1238*t1312) - 1.*t1078*t1263*t994 + var1[1];
  p_output1[2]=0. + t1063*t1326 + t1113*t1330 + t1126*t1334 + t1143*t1338 + t1169*t1342 + t1181*t1346 - 0.1305*(t1051*t1326 + t1039*t1346) + t1195*t1354 + t1217*t1358 + t1227*t1362 + t1240*t1366 + t1249*t1370 + 0.0184*(t1238*t1366 + t1234*t1370) - 0.7055*(t1234*t1366 - 1.*t1238*t1370) + t1078*t1266*t994 + var1[2];
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

#include "p_ankle_joint_right.hh"

namespace SymExpression
{

void p_ankle_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
