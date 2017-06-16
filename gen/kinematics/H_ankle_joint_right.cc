/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:16 GMT-04:00
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
  double t1115;
  double t1088;
  double t1120;
  double t1076;
  double t1126;
  double t1143;
  double t1112;
  double t1128;
  double t1139;
  double t1064;
  double t1145;
  double t1149;
  double t1151;
  double t1169;
  double t1142;
  double t1152;
  double t1163;
  double t1063;
  double t1172;
  double t1176;
  double t1177;
  double t1178;
  double t1179;
  double t1181;
  double t1182;
  double t1183;
  double t1186;
  double t1192;
  double t1165;
  double t1188;
  double t1189;
  double t1059;
  double t1193;
  double t1194;
  double t1195;
  double t1046;
  double t1226;
  double t1230;
  double t1232;
  double t1233;
  double t1237;
  double t1227;
  double t1239;
  double t1240;
  double t1244;
  double t1245;
  double t1248;
  double t1242;
  double t1249;
  double t1250;
  double t1253;
  double t1254;
  double t1255;
  double t1256;
  double t1257;
  double t1258;
  double t1259;
  double t1260;
  double t1261;
  double t1214;
  double t1251;
  double t1262;
  double t1264;
  double t1267;
  double t1268;
  double t1269;
  double t1286;
  double t1287;
  double t1289;
  double t1285;
  double t1290;
  double t1291;
  double t1293;
  double t1294;
  double t1297;
  double t1292;
  double t1298;
  double t1299;
  double t1302;
  double t1304;
  double t1305;
  double t1307;
  double t1309;
  double t1310;
  double t1311;
  double t1313;
  double t1314;
  double t1301;
  double t1315;
  double t1316;
  double t1318;
  double t1319;
  double t1320;
  double t1191;
  double t1197;
  double t1200;
  double t1217;
  double t1219;
  double t1222;
  double t1265;
  double t1270;
  double t1273;
  double t1277;
  double t1280;
  double t1281;
  double t1317;
  double t1321;
  double t1322;
  double t1325;
  double t1326;
  double t1327;
  double t1355;
  double t1356;
  double t1382;
  double t1383;
  double t1400;
  double t1401;
  double t1410;
  double t1411;
  double t1331;
  double t1332;
  double t1333;
  double t1363;
  double t1365;
  double t1357;
  double t1359;
  double t1360;
  double t1368;
  double t1369;
  double t1371;
  double t1372;
  double t1374;
  double t1375;
  double t1376;
  double t1377;
  double t1379;
  double t1380;
  double t1384;
  double t1385;
  double t1386;
  double t1388;
  double t1389;
  double t1390;
  double t1396;
  double t1397;
  double t1398;
  double t1402;
  double t1403;
  double t1404;
  double t1406;
  double t1407;
  double t1408;
  double t1412;
  double t1413;
  double t1414;
  double t1416;
  double t1417;
  double t1418;
  double t1335;
  double t1336;
  double t1338;
  double t1339;
  double t1341;
  double t1342;
  t1115 = Cos(var1[14]);
  t1088 = Sin(var1[4]);
  t1120 = Cos(var1[4]);
  t1076 = Sin(var1[14]);
  t1126 = Sin(var1[5]);
  t1143 = Cos(var1[15]);
  t1112 = t1076*t1088;
  t1128 = -1.*t1115*t1120*t1126;
  t1139 = t1112 + t1128;
  t1064 = Sin(var1[15]);
  t1145 = t1115*t1088;
  t1149 = t1120*t1076*t1126;
  t1151 = t1145 + t1149;
  t1169 = Cos(var1[17]);
  t1142 = -1.*t1064*t1139;
  t1152 = t1143*t1151;
  t1163 = t1142 + t1152;
  t1063 = Sin(var1[17]);
  t1172 = Cos(var1[16]);
  t1176 = Cos(var1[5]);
  t1177 = t1172*t1120*t1176;
  t1178 = Sin(var1[16]);
  t1179 = t1143*t1139;
  t1181 = t1064*t1151;
  t1182 = t1179 + t1181;
  t1183 = -1.*t1178*t1182;
  t1186 = t1177 + t1183;
  t1192 = Cos(var1[18]);
  t1165 = t1063*t1163;
  t1188 = t1169*t1186;
  t1189 = t1165 + t1188;
  t1059 = Sin(var1[18]);
  t1193 = t1169*t1163;
  t1194 = -1.*t1063*t1186;
  t1195 = t1193 + t1194;
  t1046 = Cos(var1[19]);
  t1226 = Sin(var1[3]);
  t1230 = Cos(var1[3]);
  t1232 = t1230*t1176;
  t1233 = -1.*t1226*t1088*t1126;
  t1237 = t1232 + t1233;
  t1227 = -1.*t1120*t1076*t1226;
  t1239 = t1115*t1237;
  t1240 = t1227 + t1239;
  t1244 = -1.*t1115*t1120*t1226;
  t1245 = -1.*t1076*t1237;
  t1248 = t1244 + t1245;
  t1242 = -1.*t1064*t1240;
  t1249 = t1143*t1248;
  t1250 = t1242 + t1249;
  t1253 = t1176*t1226*t1088;
  t1254 = t1230*t1126;
  t1255 = t1253 + t1254;
  t1256 = t1172*t1255;
  t1257 = t1143*t1240;
  t1258 = t1064*t1248;
  t1259 = t1257 + t1258;
  t1260 = -1.*t1178*t1259;
  t1261 = t1256 + t1260;
  t1214 = Sin(var1[19]);
  t1251 = t1063*t1250;
  t1262 = t1169*t1261;
  t1264 = t1251 + t1262;
  t1267 = t1169*t1250;
  t1268 = -1.*t1063*t1261;
  t1269 = t1267 + t1268;
  t1286 = t1176*t1226;
  t1287 = t1230*t1088*t1126;
  t1289 = t1286 + t1287;
  t1285 = t1230*t1120*t1076;
  t1290 = t1115*t1289;
  t1291 = t1285 + t1290;
  t1293 = t1115*t1230*t1120;
  t1294 = -1.*t1076*t1289;
  t1297 = t1293 + t1294;
  t1292 = -1.*t1064*t1291;
  t1298 = t1143*t1297;
  t1299 = t1292 + t1298;
  t1302 = -1.*t1230*t1176*t1088;
  t1304 = t1226*t1126;
  t1305 = t1302 + t1304;
  t1307 = t1172*t1305;
  t1309 = t1143*t1291;
  t1310 = t1064*t1297;
  t1311 = t1309 + t1310;
  t1313 = -1.*t1178*t1311;
  t1314 = t1307 + t1313;
  t1301 = t1063*t1299;
  t1315 = t1169*t1314;
  t1316 = t1301 + t1315;
  t1318 = t1169*t1299;
  t1319 = -1.*t1063*t1314;
  t1320 = t1318 + t1319;
  t1191 = -1.*t1059*t1189;
  t1197 = t1192*t1195;
  t1200 = t1191 + t1197;
  t1217 = t1192*t1189;
  t1219 = t1059*t1195;
  t1222 = t1217 + t1219;
  t1265 = -1.*t1059*t1264;
  t1270 = t1192*t1269;
  t1273 = t1265 + t1270;
  t1277 = t1192*t1264;
  t1280 = t1059*t1269;
  t1281 = t1277 + t1280;
  t1317 = -1.*t1059*t1316;
  t1321 = t1192*t1320;
  t1322 = t1317 + t1321;
  t1325 = t1192*t1316;
  t1326 = t1059*t1320;
  t1327 = t1325 + t1326;
  t1355 = -1.*t1172;
  t1356 = 1. + t1355;
  t1382 = -1.*t1169;
  t1383 = 1. + t1382;
  t1400 = -1.*t1192;
  t1401 = 1. + t1400;
  t1410 = -1.*t1046;
  t1411 = 1. + t1410;
  t1331 = t1214*t1200;
  t1332 = t1046*t1222;
  t1333 = t1331 + t1332;
  t1363 = 0.135*t1076;
  t1365 = 0. + t1363;
  t1357 = -0.049*t1356;
  t1359 = 0.135*t1178;
  t1360 = 0. + t1357 + t1359;
  t1368 = -1.*t1115;
  t1369 = 1. + t1368;
  t1371 = -0.135*t1369;
  t1372 = 0. + t1371;
  t1374 = -1.*t1143;
  t1375 = 1. + t1374;
  t1376 = -0.135*t1375;
  t1377 = 0. + t1376;
  t1379 = 0.135*t1064;
  t1380 = 0. + t1379;
  t1384 = -0.09*t1383;
  t1385 = 0.049*t1063;
  t1386 = 0. + t1384 + t1385;
  t1388 = -0.135*t1356;
  t1389 = -0.049*t1178;
  t1390 = 0. + t1388 + t1389;
  t1396 = -0.049*t1383;
  t1397 = -0.09*t1063;
  t1398 = 0. + t1396 + t1397;
  t1402 = -0.049*t1401;
  t1403 = -0.21*t1059;
  t1404 = 0. + t1402 + t1403;
  t1406 = -0.21*t1401;
  t1407 = 0.049*t1059;
  t1408 = 0. + t1406 + t1407;
  t1412 = -0.2707*t1411;
  t1413 = 0.0016*t1214;
  t1414 = 0. + t1412 + t1413;
  t1416 = -0.0016*t1411;
  t1417 = -0.2707*t1214;
  t1418 = 0. + t1416 + t1417;
  t1335 = t1214*t1273;
  t1336 = t1046*t1281;
  t1338 = t1335 + t1336;
  t1339 = t1214*t1322;
  t1341 = t1046*t1327;
  t1342 = t1339 + t1341;
  p_output1[0]=-1.*t1046*t1200 + t1214*t1222;
  p_output1[1]=-1.*t1046*t1273 + t1214*t1281;
  p_output1[2]=-1.*t1046*t1322 + t1214*t1327;
  p_output1[3]=0.;
  p_output1[4]=t1333;
  p_output1[5]=t1338;
  p_output1[6]=t1342;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1120*t1176*t1178 - 1.*t1172*t1182;
  p_output1[9]=-1.*t1178*t1255 - 1.*t1172*t1259;
  p_output1[10]=-1.*t1178*t1305 - 1.*t1172*t1311;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(t1120*t1176*t1178 + t1172*t1182) - 0.7055*(t1046*t1200 - 1.*t1214*t1222) + 0.0184*t1333 + t1120*t1176*t1360 + t1088*t1365 - 1.*t1120*t1126*t1372 + t1139*t1377 + t1151*t1380 + t1163*t1386 + t1182*t1390 + t1186*t1398 + t1189*t1404 + t1195*t1408 + t1200*t1414 + t1222*t1418 + var1[0];
  p_output1[13]=0. - 0.1305*(t1178*t1255 + t1172*t1259) - 0.7055*(t1046*t1273 - 1.*t1214*t1281) + 0.0184*t1338 + t1255*t1360 - 1.*t1120*t1226*t1365 + t1237*t1372 + t1240*t1377 + t1248*t1380 + t1250*t1386 + t1259*t1390 + t1261*t1398 + t1264*t1404 + t1269*t1408 + t1273*t1414 + t1281*t1418 + var1[1];
  p_output1[14]=0. - 0.1305*(t1178*t1305 + t1172*t1311) - 0.7055*(t1046*t1322 - 1.*t1214*t1327) + 0.0184*t1342 + t1305*t1360 + t1120*t1230*t1365 + t1289*t1372 + t1291*t1377 + t1297*t1380 + t1299*t1386 + t1311*t1390 + t1314*t1398 + t1316*t1404 + t1320*t1408 + t1322*t1414 + t1327*t1418 + var1[2];
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

#include "H_ankle_joint_right.hh"

namespace SymExpression
{

void H_ankle_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
