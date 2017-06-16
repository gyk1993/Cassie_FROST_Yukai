/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:19 GMT-04:00
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
  double t1333;
  double t1359;
  double t1325;
  double t1348;
  double t1379;
  double t1287;
  double t1307;
  double t1429;
  double t1452;
  double t1449;
  double t1451;
  double t1454;
  double t1461;
  double t1415;
  double t1430;
  double t1505;
  double t1506;
  double t1509;
  double t1403;
  double t1404;
  double t1406;
  double t1349;
  double t1380;
  double t1387;
  double t1390;
  double t1420;
  double t1423;
  double t1567;
  double t1562;
  double t1563;
  double t1564;
  double t1561;
  double t1568;
  double t1569;
  double t1570;
  double t1581;
  double t1566;
  double t1572;
  double t1573;
  double t1559;
  double t1582;
  double t1586;
  double t1588;
  double t1592;
  double t1579;
  double t1589;
  double t1590;
  double t1553;
  double t1593;
  double t1597;
  double t1598;
  double t1602;
  double t1591;
  double t1599;
  double t1600;
  double t1551;
  double t1603;
  double t1604;
  double t1605;
  double t1613;
  double t1601;
  double t1606;
  double t1608;
  double t1550;
  double t1614;
  double t1617;
  double t1620;
  double t1471;
  double t1472;
  double t1473;
  double t1463;
  double t1464;
  double t1466;
  double t1487;
  double t1490;
  double t1497;
  double t1469;
  double t1479;
  double t1484;
  double t1630;
  double t1631;
  double t1633;
  double t1635;
  double t1636;
  double t1637;
  double t1634;
  double t1638;
  double t1641;
  double t1643;
  double t1645;
  double t1646;
  double t1642;
  double t1648;
  double t1649;
  double t1652;
  double t1653;
  double t1654;
  double t1651;
  double t1655;
  double t1657;
  double t1659;
  double t1661;
  double t1662;
  double t1658;
  double t1664;
  double t1665;
  double t1669;
  double t1670;
  double t1671;
  double t1517;
  double t1518;
  double t1522;
  double t1511;
  double t1512;
  double t1513;
  double t1535;
  double t1536;
  double t1538;
  double t1514;
  double t1526;
  double t1530;
  double t1681;
  double t1682;
  double t1683;
  double t1686;
  double t1687;
  double t1688;
  double t1684;
  double t1689;
  double t1691;
  double t1694;
  double t1695;
  double t1696;
  double t1692;
  double t1698;
  double t1699;
  double t1702;
  double t1703;
  double t1704;
  double t1701;
  double t1705;
  double t1707;
  double t1709;
  double t1710;
  double t1711;
  double t1708;
  double t1712;
  double t1715;
  double t1717;
  double t1719;
  double t1720;
  double t1612;
  double t1621;
  double t1622;
  double t1625;
  double t1626;
  double t1627;
  double t1667;
  double t1673;
  double t1674;
  double t1676;
  double t1677;
  double t1678;
  double t1716;
  double t1722;
  double t1723;
  double t1726;
  double t1727;
  double t1728;
  double t1768;
  double t1769;
  double t1762;
  double t1763;
  double t1786;
  double t1787;
  double t1796;
  double t1797;
  double t1806;
  double t1807;
  double t1816;
  double t1817;
  double t1745;
  double t1747;
  double t1748;
  double t1749;
  double t1751;
  double t1752;
  double t1754;
  double t1755;
  double t1756;
  double t1757;
  double t1759;
  double t1760;
  double t1764;
  double t1765;
  double t1766;
  double t1770;
  double t1771;
  double t1772;
  double t1774;
  double t1775;
  double t1776;
  double t1782;
  double t1783;
  double t1784;
  double t1788;
  double t1789;
  double t1790;
  double t1792;
  double t1793;
  double t1794;
  double t1798;
  double t1799;
  double t1800;
  double t1802;
  double t1803;
  double t1804;
  double t1808;
  double t1809;
  double t1810;
  double t1812;
  double t1813;
  double t1814;
  double t1818;
  double t1819;
  double t1820;
  double t1822;
  double t1823;
  double t1824;
  t1333 = Cos(var1[6]);
  t1359 = Sin(var1[4]);
  t1325 = Cos(var1[4]);
  t1348 = Sin(var1[5]);
  t1379 = Sin(var1[6]);
  t1287 = Cos(var1[8]);
  t1307 = Cos(var1[7]);
  t1429 = Cos(var1[5]);
  t1452 = Sin(var1[3]);
  t1449 = Cos(var1[3]);
  t1451 = t1449*t1429;
  t1454 = -1.*t1452*t1359*t1348;
  t1461 = t1451 + t1454;
  t1415 = Sin(var1[7]);
  t1430 = Sin(var1[8]);
  t1505 = t1429*t1452;
  t1506 = t1449*t1359*t1348;
  t1509 = t1505 + t1506;
  t1403 = t1333*t1359;
  t1404 = t1325*t1348*t1379;
  t1406 = t1403 + t1404;
  t1349 = -1.*t1325*t1333*t1348;
  t1380 = t1359*t1379;
  t1387 = t1349 + t1380;
  t1390 = t1307*t1387;
  t1420 = t1406*t1415;
  t1423 = t1390 + t1420;
  t1567 = Cos(var1[9]);
  t1562 = t1307*t1406;
  t1563 = -1.*t1387*t1415;
  t1564 = t1562 + t1563;
  t1561 = Sin(var1[9]);
  t1568 = t1325*t1429*t1287;
  t1569 = -1.*t1423*t1430;
  t1570 = t1568 + t1569;
  t1581 = Cos(var1[10]);
  t1566 = t1561*t1564;
  t1572 = t1567*t1570;
  t1573 = t1566 + t1572;
  t1559 = Sin(var1[10]);
  t1582 = t1567*t1564;
  t1586 = -1.*t1561*t1570;
  t1588 = t1582 + t1586;
  t1592 = Cos(var1[11]);
  t1579 = -1.*t1559*t1573;
  t1589 = t1581*t1588;
  t1590 = t1579 + t1589;
  t1553 = Sin(var1[11]);
  t1593 = t1581*t1573;
  t1597 = t1559*t1588;
  t1598 = t1593 + t1597;
  t1602 = Cos(var1[12]);
  t1591 = t1553*t1590;
  t1599 = t1592*t1598;
  t1600 = t1591 + t1599;
  t1551 = Sin(var1[12]);
  t1603 = t1592*t1590;
  t1604 = -1.*t1553*t1598;
  t1605 = t1603 + t1604;
  t1613 = Cos(var1[13]);
  t1601 = -1.*t1551*t1600;
  t1606 = t1602*t1605;
  t1608 = t1601 + t1606;
  t1550 = Sin(var1[13]);
  t1614 = t1602*t1600;
  t1617 = t1551*t1605;
  t1620 = t1614 + t1617;
  t1471 = -1.*t1325*t1333*t1452;
  t1472 = -1.*t1461*t1379;
  t1473 = t1471 + t1472;
  t1463 = t1333*t1461;
  t1464 = -1.*t1325*t1452*t1379;
  t1466 = t1463 + t1464;
  t1487 = t1429*t1452*t1359;
  t1490 = t1449*t1348;
  t1497 = t1487 + t1490;
  t1469 = t1307*t1466;
  t1479 = t1473*t1415;
  t1484 = t1469 + t1479;
  t1630 = t1307*t1473;
  t1631 = -1.*t1466*t1415;
  t1633 = t1630 + t1631;
  t1635 = t1287*t1497;
  t1636 = -1.*t1484*t1430;
  t1637 = t1635 + t1636;
  t1634 = t1561*t1633;
  t1638 = t1567*t1637;
  t1641 = t1634 + t1638;
  t1643 = t1567*t1633;
  t1645 = -1.*t1561*t1637;
  t1646 = t1643 + t1645;
  t1642 = -1.*t1559*t1641;
  t1648 = t1581*t1646;
  t1649 = t1642 + t1648;
  t1652 = t1581*t1641;
  t1653 = t1559*t1646;
  t1654 = t1652 + t1653;
  t1651 = t1553*t1649;
  t1655 = t1592*t1654;
  t1657 = t1651 + t1655;
  t1659 = t1592*t1649;
  t1661 = -1.*t1553*t1654;
  t1662 = t1659 + t1661;
  t1658 = -1.*t1551*t1657;
  t1664 = t1602*t1662;
  t1665 = t1658 + t1664;
  t1669 = t1602*t1657;
  t1670 = t1551*t1662;
  t1671 = t1669 + t1670;
  t1517 = t1449*t1325*t1333;
  t1518 = -1.*t1509*t1379;
  t1522 = t1517 + t1518;
  t1511 = t1333*t1509;
  t1512 = t1449*t1325*t1379;
  t1513 = t1511 + t1512;
  t1535 = -1.*t1449*t1429*t1359;
  t1536 = t1452*t1348;
  t1538 = t1535 + t1536;
  t1514 = t1307*t1513;
  t1526 = t1522*t1415;
  t1530 = t1514 + t1526;
  t1681 = t1307*t1522;
  t1682 = -1.*t1513*t1415;
  t1683 = t1681 + t1682;
  t1686 = t1287*t1538;
  t1687 = -1.*t1530*t1430;
  t1688 = t1686 + t1687;
  t1684 = t1561*t1683;
  t1689 = t1567*t1688;
  t1691 = t1684 + t1689;
  t1694 = t1567*t1683;
  t1695 = -1.*t1561*t1688;
  t1696 = t1694 + t1695;
  t1692 = -1.*t1559*t1691;
  t1698 = t1581*t1696;
  t1699 = t1692 + t1698;
  t1702 = t1581*t1691;
  t1703 = t1559*t1696;
  t1704 = t1702 + t1703;
  t1701 = t1553*t1699;
  t1705 = t1592*t1704;
  t1707 = t1701 + t1705;
  t1709 = t1592*t1699;
  t1710 = -1.*t1553*t1704;
  t1711 = t1709 + t1710;
  t1708 = -1.*t1551*t1707;
  t1712 = t1602*t1711;
  t1715 = t1708 + t1712;
  t1717 = t1602*t1707;
  t1719 = t1551*t1711;
  t1720 = t1717 + t1719;
  t1612 = t1550*t1608;
  t1621 = t1613*t1620;
  t1622 = t1612 + t1621;
  t1625 = t1613*t1608;
  t1626 = -1.*t1550*t1620;
  t1627 = t1625 + t1626;
  t1667 = t1550*t1665;
  t1673 = t1613*t1671;
  t1674 = t1667 + t1673;
  t1676 = t1613*t1665;
  t1677 = -1.*t1550*t1671;
  t1678 = t1676 + t1677;
  t1716 = t1550*t1715;
  t1722 = t1613*t1720;
  t1723 = t1716 + t1722;
  t1726 = t1613*t1715;
  t1727 = -1.*t1550*t1720;
  t1728 = t1726 + t1727;
  t1768 = -1.*t1287;
  t1769 = 1. + t1768;
  t1762 = -1.*t1567;
  t1763 = 1. + t1762;
  t1786 = -1.*t1581;
  t1787 = 1. + t1786;
  t1796 = -1.*t1592;
  t1797 = 1. + t1796;
  t1806 = -1.*t1602;
  t1807 = 1. + t1806;
  t1816 = -1.*t1613;
  t1817 = 1. + t1816;
  t1745 = -1.*t1333;
  t1747 = 1. + t1745;
  t1748 = 0.135*t1747;
  t1749 = 0. + t1748;
  t1751 = -0.135*t1379;
  t1752 = 0. + t1751;
  t1754 = -1.*t1307;
  t1755 = 1. + t1754;
  t1756 = 0.135*t1755;
  t1757 = 0. + t1756;
  t1759 = -0.135*t1415;
  t1760 = 0. + t1759;
  t1764 = -0.09*t1763;
  t1765 = 0.049*t1561;
  t1766 = 0. + t1764 + t1765;
  t1770 = -0.049*t1769;
  t1771 = -0.135*t1430;
  t1772 = 0. + t1770 + t1771;
  t1774 = 0.135*t1769;
  t1775 = -0.049*t1430;
  t1776 = 0. + t1774 + t1775;
  t1782 = -0.049*t1763;
  t1783 = -0.09*t1561;
  t1784 = 0. + t1782 + t1783;
  t1788 = -0.049*t1787;
  t1789 = -0.21*t1559;
  t1790 = 0. + t1788 + t1789;
  t1792 = -0.21*t1787;
  t1793 = 0.049*t1559;
  t1794 = 0. + t1792 + t1793;
  t1798 = -0.2707*t1797;
  t1799 = 0.0016*t1553;
  t1800 = 0. + t1798 + t1799;
  t1802 = -0.0016*t1797;
  t1803 = -0.2707*t1553;
  t1804 = 0. + t1802 + t1803;
  t1808 = 0.0184*t1807;
  t1809 = -0.7055*t1551;
  t1810 = 0. + t1808 + t1809;
  t1812 = -0.7055*t1807;
  t1813 = -0.0184*t1551;
  t1814 = 0. + t1812 + t1813;
  t1818 = -1.1135*t1817;
  t1819 = 0.0216*t1550;
  t1820 = 0. + t1818 + t1819;
  t1822 = -0.0216*t1817;
  t1823 = -1.1135*t1550;
  t1824 = 0. + t1822 + t1823;
  p_output1[0]=-1.*t1287*t1423 - 1.*t1325*t1429*t1430;
  p_output1[1]=-1.*t1287*t1484 - 1.*t1430*t1497;
  p_output1[2]=-1.*t1287*t1530 - 1.*t1430*t1538;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1622 + 0.766044*t1627;
  p_output1[5]=0.642788*t1674 + 0.766044*t1678;
  p_output1[6]=0.642788*t1723 + 0.766044*t1728;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1622 + 0.642788*t1627;
  p_output1[9]=-0.766044*t1674 + 0.642788*t1678;
  p_output1[10]=-0.766044*t1723 + 0.642788*t1728;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1287*t1423 + t1325*t1429*t1430) + 0.0306*t1622 - 1.1312*t1627 - 1.*t1325*t1348*t1749 + t1359*t1752 + t1387*t1757 + t1406*t1760 + t1564*t1766 + t1325*t1429*t1772 + t1423*t1776 + t1570*t1784 + t1573*t1790 + t1588*t1794 + t1590*t1800 + t1598*t1804 + t1600*t1810 + t1605*t1814 + t1608*t1820 + t1620*t1824 + var1[0];
  p_output1[13]=0. + 0.1305*(t1287*t1484 + t1430*t1497) + 0.0306*t1674 - 1.1312*t1678 + t1461*t1749 - 1.*t1325*t1452*t1752 + t1466*t1757 + t1473*t1760 + t1633*t1766 + t1497*t1772 + t1484*t1776 + t1637*t1784 + t1641*t1790 + t1646*t1794 + t1649*t1800 + t1654*t1804 + t1657*t1810 + t1662*t1814 + t1665*t1820 + t1671*t1824 + var1[1];
  p_output1[14]=0. + 0.1305*(t1287*t1530 + t1430*t1538) + 0.0306*t1723 - 1.1312*t1728 + t1509*t1749 + t1325*t1449*t1752 + t1513*t1757 + t1522*t1760 + t1683*t1766 + t1538*t1772 + t1530*t1776 + t1688*t1784 + t1691*t1790 + t1696*t1794 + t1699*t1800 + t1704*t1804 + t1707*t1810 + t1711*t1814 + t1715*t1820 + t1720*t1824 + var1[2];
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

#include "H_LeftToeBottom.hh"

namespace SymExpression
{

void H_LeftToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
