/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:15 GMT-04:00
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
  double t1112;
  double t1188;
  double t1197;
  double t1217;
  double t1239;
  double t1267;
  double t1256;
  double t1257;
  double t1258;
  double t1249;
  double t1275;
  double t1277;
  double t1280;
  double t1149;
  double t1151;
  double t1152;
  double t1165;
  double t1145;
  double t1315;
  double t1318;
  double t1320;
  double t1284;
  double t1285;
  double t1286;
  double t1290;
  double t1298;
  double t1299;
  double t1301;
  double t1333;
  double t1335;
  double t1336;
  double t1339;
  double t1341;
  double t1342;
  double t1344;
  double t1348;
  double t1349;
  double t1350;
  double t1360;
  double t1362;
  double t1363;
  double t1371;
  double t1373;
  double t1376;
  double t1378;
  double t1381;
  double t1384;
  double t1385;
  double t1390;
  double t1391;
  double t1392;
  double t1394;
  double t1395;
  double t1396;
  double t1398;
  double t1403;
  double t1404;
  double t1405;
  double t1412;
  double t1413;
  double t1414;
  double t1193;
  double t1195;
  double t1163;
  double t1177;
  double t1179;
  double t1425;
  double t1219;
  double t1224;
  double t1225;
  double t1232;
  double t1428;
  double t1250;
  double t1251;
  double t1253;
  double t1254;
  double t1432;
  double t1433;
  double t1434;
  double t1269;
  double t1270;
  double t1287;
  double t1293;
  double t1297;
  double t1436;
  double t1437;
  double t1438;
  double t1440;
  double t1441;
  double t1442;
  double t1307;
  double t1309;
  double t1310;
  double t1427;
  double t1429;
  double t1430;
  double t1448;
  double t1449;
  double t1450;
  double t1329;
  double t1331;
  double t1332;
  double t1343;
  double t1345;
  double t1347;
  double t1444;
  double t1445;
  double t1446;
  double t1456;
  double t1457;
  double t1458;
  double t1352;
  double t1357;
  double t1359;
  double t1377;
  double t1379;
  double t1380;
  double t1460;
  double t1461;
  double t1462;
  double t1464;
  double t1465;
  double t1466;
  double t1387;
  double t1388;
  double t1389;
  double t1397;
  double t1399;
  double t1402;
  double t1468;
  double t1469;
  double t1470;
  double t1472;
  double t1473;
  double t1474;
  double t1407;
  double t1408;
  double t1409;
  double t1476;
  double t1477;
  double t1478;
  double t1480;
  double t1481;
  double t1482;
  double t1498;
  double t1499;
  double t1500;
  double t1502;
  double t1503;
  double t1504;
  double t1506;
  double t1507;
  double t1508;
  double t1494;
  double t1495;
  double t1496;
  double t1514;
  double t1515;
  double t1516;
  double t1510;
  double t1511;
  double t1512;
  double t1522;
  double t1523;
  double t1524;
  double t1526;
  double t1527;
  double t1528;
  double t1530;
  double t1531;
  double t1532;
  double t1534;
  double t1535;
  double t1536;
  double t1538;
  double t1539;
  double t1540;
  double t1542;
  double t1543;
  double t1544;
  double t1546;
  double t1547;
  double t1548;
  t1112 = Cos(var1[4]);
  t1188 = Sin(var1[14]);
  t1197 = Sin(var1[4]);
  t1217 = Cos(var1[14]);
  t1239 = Sin(var1[5]);
  t1267 = Sin(var1[15]);
  t1256 = t1188*t1197;
  t1257 = -1.*t1217*t1112*t1239;
  t1258 = t1256 + t1257;
  t1249 = Cos(var1[15]);
  t1275 = t1217*t1197;
  t1277 = t1112*t1188*t1239;
  t1280 = t1275 + t1277;
  t1149 = Cos(var1[16]);
  t1151 = -1.*t1149;
  t1152 = 1. + t1151;
  t1165 = Sin(var1[16]);
  t1145 = Cos(var1[5]);
  t1315 = t1249*t1258;
  t1318 = t1267*t1280;
  t1320 = t1315 + t1318;
  t1284 = Cos(var1[17]);
  t1285 = -1.*t1284;
  t1286 = 1. + t1285;
  t1290 = Sin(var1[17]);
  t1298 = -1.*t1267*t1258;
  t1299 = t1249*t1280;
  t1301 = t1298 + t1299;
  t1333 = t1149*t1112*t1145;
  t1335 = -1.*t1165*t1320;
  t1336 = t1333 + t1335;
  t1339 = Cos(var1[18]);
  t1341 = -1.*t1339;
  t1342 = 1. + t1341;
  t1344 = Sin(var1[18]);
  t1348 = t1290*t1301;
  t1349 = t1284*t1336;
  t1350 = t1348 + t1349;
  t1360 = t1284*t1301;
  t1362 = -1.*t1290*t1336;
  t1363 = t1360 + t1362;
  t1371 = Cos(var1[19]);
  t1373 = -1.*t1371;
  t1376 = 1. + t1373;
  t1378 = Sin(var1[19]);
  t1381 = -1.*t1344*t1350;
  t1384 = t1339*t1363;
  t1385 = t1381 + t1384;
  t1390 = t1339*t1350;
  t1391 = t1344*t1363;
  t1392 = t1390 + t1391;
  t1394 = Cos(var1[20]);
  t1395 = -1.*t1394;
  t1396 = 1. + t1395;
  t1398 = Sin(var1[20]);
  t1403 = t1378*t1385;
  t1404 = t1371*t1392;
  t1405 = t1403 + t1404;
  t1412 = t1371*t1385;
  t1413 = -1.*t1378*t1392;
  t1414 = t1412 + t1413;
  t1193 = 0.135*t1188;
  t1195 = 0. + t1193;
  t1163 = -0.049*t1152;
  t1177 = 0.135*t1165;
  t1179 = 0. + t1163 + t1177;
  t1425 = Sin(var1[3]);
  t1219 = -1.*t1217;
  t1224 = 1. + t1219;
  t1225 = -0.135*t1224;
  t1232 = 0. + t1225;
  t1428 = Cos(var1[3]);
  t1250 = -1.*t1249;
  t1251 = 1. + t1250;
  t1253 = -0.135*t1251;
  t1254 = 0. + t1253;
  t1432 = t1428*t1145;
  t1433 = -1.*t1425*t1197*t1239;
  t1434 = t1432 + t1433;
  t1269 = 0.135*t1267;
  t1270 = 0. + t1269;
  t1287 = -0.09*t1286;
  t1293 = 0.049*t1290;
  t1297 = 0. + t1287 + t1293;
  t1436 = -1.*t1112*t1188*t1425;
  t1437 = t1217*t1434;
  t1438 = t1436 + t1437;
  t1440 = -1.*t1217*t1112*t1425;
  t1441 = -1.*t1188*t1434;
  t1442 = t1440 + t1441;
  t1307 = -0.135*t1152;
  t1309 = -0.049*t1165;
  t1310 = 0. + t1307 + t1309;
  t1427 = t1145*t1425*t1197;
  t1429 = t1428*t1239;
  t1430 = t1427 + t1429;
  t1448 = t1249*t1438;
  t1449 = t1267*t1442;
  t1450 = t1448 + t1449;
  t1329 = -0.049*t1286;
  t1331 = -0.09*t1290;
  t1332 = 0. + t1329 + t1331;
  t1343 = -0.049*t1342;
  t1345 = -0.21*t1344;
  t1347 = 0. + t1343 + t1345;
  t1444 = -1.*t1267*t1438;
  t1445 = t1249*t1442;
  t1446 = t1444 + t1445;
  t1456 = t1149*t1430;
  t1457 = -1.*t1165*t1450;
  t1458 = t1456 + t1457;
  t1352 = -0.21*t1342;
  t1357 = 0.049*t1344;
  t1359 = 0. + t1352 + t1357;
  t1377 = -0.2707*t1376;
  t1379 = 0.0016*t1378;
  t1380 = 0. + t1377 + t1379;
  t1460 = t1290*t1446;
  t1461 = t1284*t1458;
  t1462 = t1460 + t1461;
  t1464 = t1284*t1446;
  t1465 = -1.*t1290*t1458;
  t1466 = t1464 + t1465;
  t1387 = -0.0016*t1376;
  t1388 = -0.2707*t1378;
  t1389 = 0. + t1387 + t1388;
  t1397 = 0.0184*t1396;
  t1399 = -0.7055*t1398;
  t1402 = 0. + t1397 + t1399;
  t1468 = -1.*t1344*t1462;
  t1469 = t1339*t1466;
  t1470 = t1468 + t1469;
  t1472 = t1339*t1462;
  t1473 = t1344*t1466;
  t1474 = t1472 + t1473;
  t1407 = -0.7055*t1396;
  t1408 = -0.0184*t1398;
  t1409 = 0. + t1407 + t1408;
  t1476 = t1378*t1470;
  t1477 = t1371*t1474;
  t1478 = t1476 + t1477;
  t1480 = t1371*t1470;
  t1481 = -1.*t1378*t1474;
  t1482 = t1480 + t1481;
  t1498 = t1145*t1425;
  t1499 = t1428*t1197*t1239;
  t1500 = t1498 + t1499;
  t1502 = t1428*t1112*t1188;
  t1503 = t1217*t1500;
  t1504 = t1502 + t1503;
  t1506 = t1217*t1428*t1112;
  t1507 = -1.*t1188*t1500;
  t1508 = t1506 + t1507;
  t1494 = -1.*t1428*t1145*t1197;
  t1495 = t1425*t1239;
  t1496 = t1494 + t1495;
  t1514 = t1249*t1504;
  t1515 = t1267*t1508;
  t1516 = t1514 + t1515;
  t1510 = -1.*t1267*t1504;
  t1511 = t1249*t1508;
  t1512 = t1510 + t1511;
  t1522 = t1149*t1496;
  t1523 = -1.*t1165*t1516;
  t1524 = t1522 + t1523;
  t1526 = t1290*t1512;
  t1527 = t1284*t1524;
  t1528 = t1526 + t1527;
  t1530 = t1284*t1512;
  t1531 = -1.*t1290*t1524;
  t1532 = t1530 + t1531;
  t1534 = -1.*t1344*t1528;
  t1535 = t1339*t1532;
  t1536 = t1534 + t1535;
  t1538 = t1339*t1528;
  t1539 = t1344*t1532;
  t1540 = t1538 + t1539;
  t1542 = t1378*t1536;
  t1543 = t1371*t1540;
  t1544 = t1542 + t1543;
  t1546 = t1371*t1536;
  t1547 = -1.*t1378*t1540;
  t1548 = t1546 + t1547;
  p_output1[0]=0. + t1112*t1145*t1179 + t1195*t1197 - 1.*t1112*t1232*t1239 + t1254*t1258 + t1270*t1280 + t1297*t1301 + t1310*t1320 - 0.1305*(t1112*t1145*t1165 + t1149*t1320) + t1332*t1336 + t1347*t1350 + t1359*t1363 + t1380*t1385 + t1389*t1392 + t1402*t1405 + t1409*t1414 - 1.1135*(-1.*t1398*t1405 + t1394*t1414) - 0.0216*(t1394*t1405 + t1398*t1414) + var1[0];
  p_output1[1]=0. - 1.*t1112*t1195*t1425 + t1179*t1430 + t1232*t1434 + t1254*t1438 + t1270*t1442 + t1297*t1446 + t1310*t1450 - 0.1305*(t1165*t1430 + t1149*t1450) + t1332*t1458 + t1347*t1462 + t1359*t1466 + t1380*t1470 + t1389*t1474 + t1402*t1478 + t1409*t1482 - 1.1135*(-1.*t1398*t1478 + t1394*t1482) - 0.0216*(t1394*t1478 + t1398*t1482) + var1[1];
  p_output1[2]=0. + t1112*t1195*t1428 + t1179*t1496 + t1232*t1500 + t1254*t1504 + t1270*t1508 + t1297*t1512 + t1310*t1516 - 0.1305*(t1165*t1496 + t1149*t1516) + t1332*t1524 + t1347*t1528 + t1359*t1532 + t1380*t1536 + t1389*t1540 + t1402*t1544 + t1409*t1548 - 1.1135*(-1.*t1398*t1544 + t1394*t1548) - 0.0216*(t1394*t1544 + t1398*t1548) + var1[2];
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

#include "p_toe_joint_right.hh"

namespace SymExpression
{

void p_toe_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
