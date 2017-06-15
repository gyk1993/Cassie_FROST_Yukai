/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:10:37 GMT-04:00
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
  double t1253;
  double t1225;
  double t1254;
  double t1209;
  double t1256;
  double t1275;
  double t1248;
  double t1262;
  double t1269;
  double t1193;
  double t1277;
  double t1280;
  double t1283;
  double t1299;
  double t1270;
  double t1287;
  double t1293;
  double t1181;
  double t1301;
  double t1304;
  double t1307;
  double t1309;
  double t1310;
  double t1315;
  double t1318;
  double t1321;
  double t1323;
  double t1329;
  double t1297;
  double t1325;
  double t1326;
  double t1179;
  double t1331;
  double t1332;
  double t1333;
  double t1347;
  double t1328;
  double t1338;
  double t1343;
  double t1177;
  double t1348;
  double t1349;
  double t1351;
  double t1163;
  double t1384;
  double t1386;
  double t1387;
  double t1388;
  double t1389;
  double t1385;
  double t1390;
  double t1391;
  double t1397;
  double t1399;
  double t1402;
  double t1393;
  double t1403;
  double t1404;
  double t1407;
  double t1408;
  double t1409;
  double t1412;
  double t1415;
  double t1416;
  double t1417;
  double t1418;
  double t1419;
  double t1406;
  double t1420;
  double t1421;
  double t1423;
  double t1424;
  double t1426;
  double t1360;
  double t1422;
  double t1427;
  double t1429;
  double t1431;
  double t1432;
  double t1435;
  double t1451;
  double t1452;
  double t1453;
  double t1449;
  double t1454;
  double t1455;
  double t1459;
  double t1460;
  double t1461;
  double t1456;
  double t1463;
  double t1464;
  double t1467;
  double t1469;
  double t1470;
  double t1471;
  double t1472;
  double t1473;
  double t1475;
  double t1476;
  double t1477;
  double t1466;
  double t1479;
  double t1480;
  double t1484;
  double t1485;
  double t1486;
  double t1483;
  double t1487;
  double t1488;
  double t1490;
  double t1491;
  double t1492;
  double t1345;
  double t1352;
  double t1357;
  double t1363;
  double t1367;
  double t1377;
  double t1430;
  double t1437;
  double t1439;
  double t1443;
  double t1445;
  double t1446;
  double t1489;
  double t1493;
  double t1495;
  double t1497;
  double t1498;
  double t1499;
  double t1527;
  double t1529;
  double t1556;
  double t1557;
  double t1574;
  double t1575;
  double t1584;
  double t1585;
  double t1594;
  double t1595;
  double t1503;
  double t1505;
  double t1506;
  double t1536;
  double t1537;
  double t1530;
  double t1532;
  double t1533;
  double t1539;
  double t1541;
  double t1542;
  double t1543;
  double t1546;
  double t1549;
  double t1550;
  double t1551;
  double t1553;
  double t1554;
  double t1558;
  double t1559;
  double t1560;
  double t1562;
  double t1563;
  double t1564;
  double t1570;
  double t1571;
  double t1572;
  double t1576;
  double t1577;
  double t1578;
  double t1580;
  double t1581;
  double t1582;
  double t1586;
  double t1587;
  double t1588;
  double t1590;
  double t1591;
  double t1592;
  double t1596;
  double t1597;
  double t1598;
  double t1600;
  double t1601;
  double t1602;
  double t1508;
  double t1509;
  double t1511;
  double t1512;
  double t1513;
  double t1514;
  t1253 = Cos(var1[14]);
  t1225 = Sin(var1[4]);
  t1254 = Cos(var1[4]);
  t1209 = Sin(var1[14]);
  t1256 = Sin(var1[5]);
  t1275 = Cos(var1[15]);
  t1248 = t1209*t1225;
  t1262 = -1.*t1253*t1254*t1256;
  t1269 = t1248 + t1262;
  t1193 = Sin(var1[15]);
  t1277 = t1253*t1225;
  t1280 = t1254*t1209*t1256;
  t1283 = t1277 + t1280;
  t1299 = Cos(var1[17]);
  t1270 = -1.*t1193*t1269;
  t1287 = t1275*t1283;
  t1293 = t1270 + t1287;
  t1181 = Sin(var1[17]);
  t1301 = Cos(var1[16]);
  t1304 = Cos(var1[5]);
  t1307 = t1301*t1254*t1304;
  t1309 = Sin(var1[16]);
  t1310 = t1275*t1269;
  t1315 = t1193*t1283;
  t1318 = t1310 + t1315;
  t1321 = -1.*t1309*t1318;
  t1323 = t1307 + t1321;
  t1329 = Cos(var1[18]);
  t1297 = t1181*t1293;
  t1325 = t1299*t1323;
  t1326 = t1297 + t1325;
  t1179 = Sin(var1[18]);
  t1331 = t1299*t1293;
  t1332 = -1.*t1181*t1323;
  t1333 = t1331 + t1332;
  t1347 = Cos(var1[19]);
  t1328 = -1.*t1179*t1326;
  t1338 = t1329*t1333;
  t1343 = t1328 + t1338;
  t1177 = Sin(var1[19]);
  t1348 = t1329*t1326;
  t1349 = t1179*t1333;
  t1351 = t1348 + t1349;
  t1163 = Sin(var1[20]);
  t1384 = Sin(var1[3]);
  t1386 = Cos(var1[3]);
  t1387 = t1386*t1304;
  t1388 = -1.*t1384*t1225*t1256;
  t1389 = t1387 + t1388;
  t1385 = -1.*t1254*t1209*t1384;
  t1390 = t1253*t1389;
  t1391 = t1385 + t1390;
  t1397 = -1.*t1253*t1254*t1384;
  t1399 = -1.*t1209*t1389;
  t1402 = t1397 + t1399;
  t1393 = -1.*t1193*t1391;
  t1403 = t1275*t1402;
  t1404 = t1393 + t1403;
  t1407 = t1304*t1384*t1225;
  t1408 = t1386*t1256;
  t1409 = t1407 + t1408;
  t1412 = t1301*t1409;
  t1415 = t1275*t1391;
  t1416 = t1193*t1402;
  t1417 = t1415 + t1416;
  t1418 = -1.*t1309*t1417;
  t1419 = t1412 + t1418;
  t1406 = t1181*t1404;
  t1420 = t1299*t1419;
  t1421 = t1406 + t1420;
  t1423 = t1299*t1404;
  t1424 = -1.*t1181*t1419;
  t1426 = t1423 + t1424;
  t1360 = Cos(var1[20]);
  t1422 = -1.*t1179*t1421;
  t1427 = t1329*t1426;
  t1429 = t1422 + t1427;
  t1431 = t1329*t1421;
  t1432 = t1179*t1426;
  t1435 = t1431 + t1432;
  t1451 = t1304*t1384;
  t1452 = t1386*t1225*t1256;
  t1453 = t1451 + t1452;
  t1449 = t1386*t1254*t1209;
  t1454 = t1253*t1453;
  t1455 = t1449 + t1454;
  t1459 = t1253*t1386*t1254;
  t1460 = -1.*t1209*t1453;
  t1461 = t1459 + t1460;
  t1456 = -1.*t1193*t1455;
  t1463 = t1275*t1461;
  t1464 = t1456 + t1463;
  t1467 = -1.*t1386*t1304*t1225;
  t1469 = t1384*t1256;
  t1470 = t1467 + t1469;
  t1471 = t1301*t1470;
  t1472 = t1275*t1455;
  t1473 = t1193*t1461;
  t1475 = t1472 + t1473;
  t1476 = -1.*t1309*t1475;
  t1477 = t1471 + t1476;
  t1466 = t1181*t1464;
  t1479 = t1299*t1477;
  t1480 = t1466 + t1479;
  t1484 = t1299*t1464;
  t1485 = -1.*t1181*t1477;
  t1486 = t1484 + t1485;
  t1483 = -1.*t1179*t1480;
  t1487 = t1329*t1486;
  t1488 = t1483 + t1487;
  t1490 = t1329*t1480;
  t1491 = t1179*t1486;
  t1492 = t1490 + t1491;
  t1345 = t1177*t1343;
  t1352 = t1347*t1351;
  t1357 = t1345 + t1352;
  t1363 = t1347*t1343;
  t1367 = -1.*t1177*t1351;
  t1377 = t1363 + t1367;
  t1430 = t1177*t1429;
  t1437 = t1347*t1435;
  t1439 = t1430 + t1437;
  t1443 = t1347*t1429;
  t1445 = -1.*t1177*t1435;
  t1446 = t1443 + t1445;
  t1489 = t1177*t1488;
  t1493 = t1347*t1492;
  t1495 = t1489 + t1493;
  t1497 = t1347*t1488;
  t1498 = -1.*t1177*t1492;
  t1499 = t1497 + t1498;
  t1527 = -1.*t1301;
  t1529 = 1. + t1527;
  t1556 = -1.*t1299;
  t1557 = 1. + t1556;
  t1574 = -1.*t1329;
  t1575 = 1. + t1574;
  t1584 = -1.*t1347;
  t1585 = 1. + t1584;
  t1594 = -1.*t1360;
  t1595 = 1. + t1594;
  t1503 = t1360*t1357;
  t1505 = t1163*t1377;
  t1506 = t1503 + t1505;
  t1536 = 0.135*t1209;
  t1537 = 0. + t1536;
  t1530 = -0.049*t1529;
  t1532 = 0.135*t1309;
  t1533 = 0. + t1530 + t1532;
  t1539 = -1.*t1253;
  t1541 = 1. + t1539;
  t1542 = -0.135*t1541;
  t1543 = 0. + t1542;
  t1546 = -1.*t1275;
  t1549 = 1. + t1546;
  t1550 = -0.135*t1549;
  t1551 = 0. + t1550;
  t1553 = 0.135*t1193;
  t1554 = 0. + t1553;
  t1558 = -0.09*t1557;
  t1559 = 0.049*t1181;
  t1560 = 0. + t1558 + t1559;
  t1562 = -0.135*t1529;
  t1563 = -0.049*t1309;
  t1564 = 0. + t1562 + t1563;
  t1570 = -0.049*t1557;
  t1571 = -0.09*t1181;
  t1572 = 0. + t1570 + t1571;
  t1576 = -0.049*t1575;
  t1577 = -0.21*t1179;
  t1578 = 0. + t1576 + t1577;
  t1580 = -0.21*t1575;
  t1581 = 0.049*t1179;
  t1582 = 0. + t1580 + t1581;
  t1586 = -0.2707*t1585;
  t1587 = 0.0016*t1177;
  t1588 = 0. + t1586 + t1587;
  t1590 = -0.0016*t1585;
  t1591 = -0.2707*t1177;
  t1592 = 0. + t1590 + t1591;
  t1596 = 0.0184*t1595;
  t1597 = -0.7055*t1163;
  t1598 = 0. + t1596 + t1597;
  t1600 = -0.7055*t1595;
  t1601 = -0.0184*t1163;
  t1602 = 0. + t1600 + t1601;
  t1508 = t1360*t1439;
  t1509 = t1163*t1446;
  t1511 = t1508 + t1509;
  t1512 = t1360*t1495;
  t1513 = t1163*t1499;
  t1514 = t1512 + t1513;
  p_output1[0]=t1163*t1357 - 1.*t1360*t1377;
  p_output1[1]=t1163*t1439 - 1.*t1360*t1446;
  p_output1[2]=t1163*t1495 - 1.*t1360*t1499;
  p_output1[3]=0.;
  p_output1[4]=t1506;
  p_output1[5]=t1511;
  p_output1[6]=t1514;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1254*t1304*t1309 - 1.*t1301*t1318;
  p_output1[9]=-1.*t1309*t1409 - 1.*t1301*t1417;
  p_output1[10]=-1.*t1309*t1470 - 1.*t1301*t1475;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(t1254*t1304*t1309 + t1301*t1318) - 1.1135*(-1.*t1163*t1357 + t1360*t1377) - 0.0216*t1506 + t1254*t1304*t1533 + t1225*t1537 - 1.*t1254*t1256*t1543 + t1269*t1551 + t1283*t1554 + t1293*t1560 + t1318*t1564 + t1323*t1572 + t1326*t1578 + t1333*t1582 + t1343*t1588 + t1351*t1592 + t1357*t1598 + t1377*t1602 + var1[0];
  p_output1[13]=0. - 0.1305*(t1309*t1409 + t1301*t1417) - 1.1135*(-1.*t1163*t1439 + t1360*t1446) - 0.0216*t1511 + t1409*t1533 - 1.*t1254*t1384*t1537 + t1389*t1543 + t1391*t1551 + t1402*t1554 + t1404*t1560 + t1417*t1564 + t1419*t1572 + t1421*t1578 + t1426*t1582 + t1429*t1588 + t1435*t1592 + t1439*t1598 + t1446*t1602 + var1[1];
  p_output1[14]=0. - 0.1305*(t1309*t1470 + t1301*t1475) - 1.1135*(-1.*t1163*t1495 + t1360*t1499) - 0.0216*t1514 + t1470*t1533 + t1254*t1386*t1537 + t1453*t1543 + t1455*t1551 + t1461*t1554 + t1464*t1560 + t1475*t1564 + t1477*t1572 + t1480*t1578 + t1486*t1582 + t1488*t1588 + t1492*t1592 + t1495*t1598 + t1499*t1602 + var1[2];
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

#include "H_toe_joint_right.hh"

namespace SymExpression
{

void H_toe_joint_right_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
