/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:16 GMT-04:00
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
  double t1248;
  double t1277;
  double t1297;
  double t1310;
  double t1315;
  double t1338;
  double t1380;
  double t1387;
  double t1390;
  double t1352;
  double t1359;
  double t1363;
  double t1402;
  double t1432;
  double t1437;
  double t1442;
  double t1447;
  double t1452;
  double t1454;
  double t1459;
  double t1431;
  double t1407;
  double t1408;
  double t1412;
  double t1416;
  double t1426;
  double t1427;
  double t1429;
  double t1487;
  double t1488;
  double t1489;
  double t1491;
  double t1493;
  double t1496;
  double t1501;
  double t1505;
  double t1506;
  double t1508;
  double t1514;
  double t1515;
  double t1517;
  double t1519;
  double t1520;
  double t1521;
  double t1525;
  double t1532;
  double t1533;
  double t1535;
  double t1550;
  double t1551;
  double t1552;
  double t1554;
  double t1555;
  double t1558;
  double t1560;
  double t1563;
  double t1564;
  double t1565;
  double t1570;
  double t1571;
  double t1572;
  double t1576;
  double t1577;
  double t1578;
  double t1580;
  double t1583;
  double t1586;
  double t1587;
  double t1592;
  double t1593;
  double t1596;
  double t1280;
  double t1283;
  double t1287;
  double t1293;
  double t1609;
  double t1325;
  double t1331;
  double t1343;
  double t1345;
  double t1348;
  double t1349;
  double t1607;
  double t1608;
  double t1610;
  double t1611;
  double t1403;
  double t1404;
  double t1415;
  double t1420;
  double t1423;
  double t1618;
  double t1619;
  double t1620;
  double t1614;
  double t1615;
  double t1616;
  double t1443;
  double t1448;
  double t1449;
  double t1461;
  double t1463;
  double t1464;
  double t1630;
  double t1631;
  double t1632;
  double t1626;
  double t1627;
  double t1628;
  double t1479;
  double t1484;
  double t1486;
  double t1497;
  double t1502;
  double t1503;
  double t1622;
  double t1623;
  double t1624;
  double t1638;
  double t1639;
  double t1640;
  double t1511;
  double t1512;
  double t1513;
  double t1522;
  double t1526;
  double t1530;
  double t1642;
  double t1643;
  double t1644;
  double t1646;
  double t1647;
  double t1648;
  double t1538;
  double t1542;
  double t1545;
  double t1559;
  double t1561;
  double t1562;
  double t1650;
  double t1651;
  double t1652;
  double t1654;
  double t1655;
  double t1656;
  double t1567;
  double t1568;
  double t1569;
  double t1579;
  double t1581;
  double t1582;
  double t1658;
  double t1659;
  double t1660;
  double t1662;
  double t1663;
  double t1664;
  double t1589;
  double t1590;
  double t1591;
  double t1666;
  double t1667;
  double t1668;
  double t1670;
  double t1671;
  double t1672;
  double t1683;
  double t1684;
  double t1685;
  double t1692;
  double t1693;
  double t1694;
  double t1688;
  double t1689;
  double t1690;
  double t1704;
  double t1705;
  double t1706;
  double t1700;
  double t1701;
  double t1702;
  double t1696;
  double t1697;
  double t1698;
  double t1712;
  double t1713;
  double t1714;
  double t1716;
  double t1717;
  double t1718;
  double t1720;
  double t1721;
  double t1722;
  double t1724;
  double t1725;
  double t1726;
  double t1728;
  double t1729;
  double t1730;
  double t1732;
  double t1733;
  double t1734;
  double t1736;
  double t1737;
  double t1738;
  double t1740;
  double t1741;
  double t1742;
  double t1744;
  double t1745;
  double t1746;
  t1248 = Cos(var1[4]);
  t1277 = Cos(var1[6]);
  t1297 = Sin(var1[5]);
  t1310 = Sin(var1[4]);
  t1315 = Sin(var1[6]);
  t1338 = Cos(var1[7]);
  t1380 = t1277*t1310;
  t1387 = t1248*t1297*t1315;
  t1390 = t1380 + t1387;
  t1352 = -1.*t1248*t1277*t1297;
  t1359 = t1310*t1315;
  t1363 = t1352 + t1359;
  t1402 = Sin(var1[7]);
  t1432 = Cos(var1[8]);
  t1437 = -1.*t1432;
  t1442 = 1. + t1437;
  t1447 = Sin(var1[8]);
  t1452 = t1338*t1363;
  t1454 = t1390*t1402;
  t1459 = t1452 + t1454;
  t1431 = Cos(var1[5]);
  t1407 = Cos(var1[9]);
  t1408 = -1.*t1407;
  t1412 = 1. + t1408;
  t1416 = Sin(var1[9]);
  t1426 = t1338*t1390;
  t1427 = -1.*t1363*t1402;
  t1429 = t1426 + t1427;
  t1487 = t1248*t1431*t1432;
  t1488 = -1.*t1459*t1447;
  t1489 = t1487 + t1488;
  t1491 = Cos(var1[10]);
  t1493 = -1.*t1491;
  t1496 = 1. + t1493;
  t1501 = Sin(var1[10]);
  t1505 = t1416*t1429;
  t1506 = t1407*t1489;
  t1508 = t1505 + t1506;
  t1514 = t1407*t1429;
  t1515 = -1.*t1416*t1489;
  t1517 = t1514 + t1515;
  t1519 = Cos(var1[11]);
  t1520 = -1.*t1519;
  t1521 = 1. + t1520;
  t1525 = Sin(var1[11]);
  t1532 = -1.*t1501*t1508;
  t1533 = t1491*t1517;
  t1535 = t1532 + t1533;
  t1550 = t1491*t1508;
  t1551 = t1501*t1517;
  t1552 = t1550 + t1551;
  t1554 = Cos(var1[12]);
  t1555 = -1.*t1554;
  t1558 = 1. + t1555;
  t1560 = Sin(var1[12]);
  t1563 = t1525*t1535;
  t1564 = t1519*t1552;
  t1565 = t1563 + t1564;
  t1570 = t1519*t1535;
  t1571 = -1.*t1525*t1552;
  t1572 = t1570 + t1571;
  t1576 = Cos(var1[13]);
  t1577 = -1.*t1576;
  t1578 = 1. + t1577;
  t1580 = Sin(var1[13]);
  t1583 = -1.*t1560*t1565;
  t1586 = t1554*t1572;
  t1587 = t1583 + t1586;
  t1592 = t1554*t1565;
  t1593 = t1560*t1572;
  t1596 = t1592 + t1593;
  t1280 = -1.*t1277;
  t1283 = 1. + t1280;
  t1287 = 0.135*t1283;
  t1293 = 0. + t1287;
  t1609 = Sin(var1[3]);
  t1325 = -0.135*t1315;
  t1331 = 0. + t1325;
  t1343 = -1.*t1338;
  t1345 = 1. + t1343;
  t1348 = 0.135*t1345;
  t1349 = 0. + t1348;
  t1607 = Cos(var1[3]);
  t1608 = t1607*t1431;
  t1610 = -1.*t1609*t1310*t1297;
  t1611 = t1608 + t1610;
  t1403 = -0.135*t1402;
  t1404 = 0. + t1403;
  t1415 = -0.09*t1412;
  t1420 = 0.049*t1416;
  t1423 = 0. + t1415 + t1420;
  t1618 = -1.*t1248*t1277*t1609;
  t1619 = -1.*t1611*t1315;
  t1620 = t1618 + t1619;
  t1614 = t1277*t1611;
  t1615 = -1.*t1248*t1609*t1315;
  t1616 = t1614 + t1615;
  t1443 = -0.049*t1442;
  t1448 = -0.135*t1447;
  t1449 = 0. + t1443 + t1448;
  t1461 = 0.135*t1442;
  t1463 = -0.049*t1447;
  t1464 = 0. + t1461 + t1463;
  t1630 = t1338*t1616;
  t1631 = t1620*t1402;
  t1632 = t1630 + t1631;
  t1626 = t1431*t1609*t1310;
  t1627 = t1607*t1297;
  t1628 = t1626 + t1627;
  t1479 = -0.049*t1412;
  t1484 = -0.09*t1416;
  t1486 = 0. + t1479 + t1484;
  t1497 = -0.049*t1496;
  t1502 = -0.21*t1501;
  t1503 = 0. + t1497 + t1502;
  t1622 = t1338*t1620;
  t1623 = -1.*t1616*t1402;
  t1624 = t1622 + t1623;
  t1638 = t1432*t1628;
  t1639 = -1.*t1632*t1447;
  t1640 = t1638 + t1639;
  t1511 = -0.21*t1496;
  t1512 = 0.049*t1501;
  t1513 = 0. + t1511 + t1512;
  t1522 = -0.2707*t1521;
  t1526 = 0.0016*t1525;
  t1530 = 0. + t1522 + t1526;
  t1642 = t1416*t1624;
  t1643 = t1407*t1640;
  t1644 = t1642 + t1643;
  t1646 = t1407*t1624;
  t1647 = -1.*t1416*t1640;
  t1648 = t1646 + t1647;
  t1538 = -0.0016*t1521;
  t1542 = -0.2707*t1525;
  t1545 = 0. + t1538 + t1542;
  t1559 = 0.0184*t1558;
  t1561 = -0.7055*t1560;
  t1562 = 0. + t1559 + t1561;
  t1650 = -1.*t1501*t1644;
  t1651 = t1491*t1648;
  t1652 = t1650 + t1651;
  t1654 = t1491*t1644;
  t1655 = t1501*t1648;
  t1656 = t1654 + t1655;
  t1567 = -0.7055*t1558;
  t1568 = -0.0184*t1560;
  t1569 = 0. + t1567 + t1568;
  t1579 = -1.1135*t1578;
  t1581 = 0.0216*t1580;
  t1582 = 0. + t1579 + t1581;
  t1658 = t1525*t1652;
  t1659 = t1519*t1656;
  t1660 = t1658 + t1659;
  t1662 = t1519*t1652;
  t1663 = -1.*t1525*t1656;
  t1664 = t1662 + t1663;
  t1589 = -0.0216*t1578;
  t1590 = -1.1135*t1580;
  t1591 = 0. + t1589 + t1590;
  t1666 = -1.*t1560*t1660;
  t1667 = t1554*t1664;
  t1668 = t1666 + t1667;
  t1670 = t1554*t1660;
  t1671 = t1560*t1664;
  t1672 = t1670 + t1671;
  t1683 = t1431*t1609;
  t1684 = t1607*t1310*t1297;
  t1685 = t1683 + t1684;
  t1692 = t1607*t1248*t1277;
  t1693 = -1.*t1685*t1315;
  t1694 = t1692 + t1693;
  t1688 = t1277*t1685;
  t1689 = t1607*t1248*t1315;
  t1690 = t1688 + t1689;
  t1704 = t1338*t1690;
  t1705 = t1694*t1402;
  t1706 = t1704 + t1705;
  t1700 = -1.*t1607*t1431*t1310;
  t1701 = t1609*t1297;
  t1702 = t1700 + t1701;
  t1696 = t1338*t1694;
  t1697 = -1.*t1690*t1402;
  t1698 = t1696 + t1697;
  t1712 = t1432*t1702;
  t1713 = -1.*t1706*t1447;
  t1714 = t1712 + t1713;
  t1716 = t1416*t1698;
  t1717 = t1407*t1714;
  t1718 = t1716 + t1717;
  t1720 = t1407*t1698;
  t1721 = -1.*t1416*t1714;
  t1722 = t1720 + t1721;
  t1724 = -1.*t1501*t1718;
  t1725 = t1491*t1722;
  t1726 = t1724 + t1725;
  t1728 = t1491*t1718;
  t1729 = t1501*t1722;
  t1730 = t1728 + t1729;
  t1732 = t1525*t1726;
  t1733 = t1519*t1730;
  t1734 = t1732 + t1733;
  t1736 = t1519*t1726;
  t1737 = -1.*t1525*t1730;
  t1738 = t1736 + t1737;
  t1740 = -1.*t1560*t1734;
  t1741 = t1554*t1738;
  t1742 = t1740 + t1741;
  t1744 = t1554*t1734;
  t1745 = t1560*t1738;
  t1746 = t1744 + t1745;
  p_output1[0]=0. - 1.*t1248*t1293*t1297 + t1310*t1331 + t1349*t1363 + t1390*t1404 + t1423*t1429 + t1248*t1431*t1449 + 0.1305*(t1248*t1431*t1447 + t1432*t1459) + t1459*t1464 + t1486*t1489 + t1503*t1508 + t1513*t1517 + t1530*t1535 + t1545*t1552 + t1562*t1565 + t1569*t1572 + t1582*t1587 + t1591*t1596 + 0.0306*(t1580*t1587 + t1576*t1596) - 1.1312*(t1576*t1587 - 1.*t1580*t1596) + var1[0];
  p_output1[1]=0. - 1.*t1248*t1331*t1609 + t1293*t1611 + t1349*t1616 + t1404*t1620 + t1423*t1624 + t1449*t1628 + t1464*t1632 + 0.1305*(t1447*t1628 + t1432*t1632) + t1486*t1640 + t1503*t1644 + t1513*t1648 + t1530*t1652 + t1545*t1656 + t1562*t1660 + t1569*t1664 + t1582*t1668 + t1591*t1672 + 0.0306*(t1580*t1668 + t1576*t1672) - 1.1312*(t1576*t1668 - 1.*t1580*t1672) + var1[1];
  p_output1[2]=0. + t1248*t1331*t1607 + t1293*t1685 + t1349*t1690 + t1404*t1694 + t1423*t1698 + t1449*t1702 + t1464*t1706 + 0.1305*(t1447*t1702 + t1432*t1706) + t1486*t1714 + t1503*t1718 + t1513*t1722 + t1530*t1726 + t1545*t1730 + t1562*t1734 + t1569*t1738 + t1582*t1742 + t1591*t1746 + 0.0306*(t1580*t1742 + t1576*t1746) - 1.1312*(t1576*t1742 - 1.*t1580*t1746) + var1[2];
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

#include "p_LeftToeBottom.hh"

namespace SymExpression
{

void p_LeftToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
