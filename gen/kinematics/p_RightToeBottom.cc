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
  double t1380;
  double t1463;
  double t1479;
  double t1487;
  double t1506;
  double t1562;
  double t1533;
  double t1536;
  double t1542;
  double t1512;
  double t1568;
  double t1572;
  double t1582;
  double t1403;
  double t1404;
  double t1406;
  double t1426;
  double t1390;
  double t1622;
  double t1624;
  double t1625;
  double t1589;
  double t1590;
  double t1591;
  double t1597;
  double t1605;
  double t1606;
  double t1608;
  double t1643;
  double t1646;
  double t1648;
  double t1651;
  double t1652;
  double t1653;
  double t1659;
  double t1665;
  double t1667;
  double t1669;
  double t1676;
  double t1678;
  double t1679;
  double t1681;
  double t1683;
  double t1684;
  double t1689;
  double t1698;
  double t1699;
  double t1701;
  double t1711;
  double t1712;
  double t1715;
  double t1717;
  double t1719;
  double t1722;
  double t1725;
  double t1729;
  double t1731;
  double t1732;
  double t1739;
  double t1741;
  double t1743;
  double t1748;
  double t1750;
  double t1751;
  double t1756;
  double t1759;
  double t1760;
  double t1761;
  double t1770;
  double t1771;
  double t1772;
  double t1469;
  double t1473;
  double t1420;
  double t1443;
  double t1448;
  double t1783;
  double t1490;
  double t1502;
  double t1503;
  double t1505;
  double t1788;
  double t1514;
  double t1517;
  double t1522;
  double t1526;
  double t1792;
  double t1793;
  double t1794;
  double t1564;
  double t1566;
  double t1593;
  double t1599;
  double t1603;
  double t1798;
  double t1799;
  double t1800;
  double t1802;
  double t1803;
  double t1804;
  double t1614;
  double t1617;
  double t1621;
  double t1785;
  double t1789;
  double t1790;
  double t1812;
  double t1813;
  double t1814;
  double t1634;
  double t1635;
  double t1638;
  double t1655;
  double t1662;
  double t1664;
  double t1808;
  double t1809;
  double t1810;
  double t1822;
  double t1823;
  double t1824;
  double t1673;
  double t1674;
  double t1675;
  double t1686;
  double t1694;
  double t1696;
  double t1826;
  double t1827;
  double t1828;
  double t1830;
  double t1831;
  double t1832;
  double t1703;
  double t1705;
  double t1709;
  double t1723;
  double t1726;
  double t1728;
  double t1834;
  double t1835;
  double t1836;
  double t1838;
  double t1839;
  double t1840;
  double t1735;
  double t1736;
  double t1738;
  double t1753;
  double t1757;
  double t1758;
  double t1842;
  double t1843;
  double t1844;
  double t1846;
  double t1847;
  double t1848;
  double t1765;
  double t1766;
  double t1767;
  double t1850;
  double t1851;
  double t1852;
  double t1854;
  double t1855;
  double t1856;
  double t1872;
  double t1873;
  double t1874;
  double t1876;
  double t1877;
  double t1878;
  double t1880;
  double t1881;
  double t1882;
  double t1868;
  double t1869;
  double t1870;
  double t1888;
  double t1889;
  double t1890;
  double t1884;
  double t1885;
  double t1886;
  double t1896;
  double t1897;
  double t1898;
  double t1900;
  double t1901;
  double t1902;
  double t1904;
  double t1905;
  double t1906;
  double t1908;
  double t1909;
  double t1910;
  double t1912;
  double t1913;
  double t1914;
  double t1916;
  double t1917;
  double t1918;
  double t1920;
  double t1921;
  double t1922;
  double t1924;
  double t1925;
  double t1926;
  double t1928;
  double t1929;
  double t1930;
  t1380 = Cos(var1[4]);
  t1463 = Sin(var1[14]);
  t1479 = Sin(var1[4]);
  t1487 = Cos(var1[14]);
  t1506 = Sin(var1[5]);
  t1562 = Sin(var1[15]);
  t1533 = t1463*t1479;
  t1536 = -1.*t1487*t1380*t1506;
  t1542 = t1533 + t1536;
  t1512 = Cos(var1[15]);
  t1568 = t1487*t1479;
  t1572 = t1380*t1463*t1506;
  t1582 = t1568 + t1572;
  t1403 = Cos(var1[16]);
  t1404 = -1.*t1403;
  t1406 = 1. + t1404;
  t1426 = Sin(var1[16]);
  t1390 = Cos(var1[5]);
  t1622 = t1512*t1542;
  t1624 = t1562*t1582;
  t1625 = t1622 + t1624;
  t1589 = Cos(var1[17]);
  t1590 = -1.*t1589;
  t1591 = 1. + t1590;
  t1597 = Sin(var1[17]);
  t1605 = -1.*t1562*t1542;
  t1606 = t1512*t1582;
  t1608 = t1605 + t1606;
  t1643 = t1403*t1380*t1390;
  t1646 = -1.*t1426*t1625;
  t1648 = t1643 + t1646;
  t1651 = Cos(var1[18]);
  t1652 = -1.*t1651;
  t1653 = 1. + t1652;
  t1659 = Sin(var1[18]);
  t1665 = t1597*t1608;
  t1667 = t1589*t1648;
  t1669 = t1665 + t1667;
  t1676 = t1589*t1608;
  t1678 = -1.*t1597*t1648;
  t1679 = t1676 + t1678;
  t1681 = Cos(var1[19]);
  t1683 = -1.*t1681;
  t1684 = 1. + t1683;
  t1689 = Sin(var1[19]);
  t1698 = -1.*t1659*t1669;
  t1699 = t1651*t1679;
  t1701 = t1698 + t1699;
  t1711 = t1651*t1669;
  t1712 = t1659*t1679;
  t1715 = t1711 + t1712;
  t1717 = Cos(var1[20]);
  t1719 = -1.*t1717;
  t1722 = 1. + t1719;
  t1725 = Sin(var1[20]);
  t1729 = t1689*t1701;
  t1731 = t1681*t1715;
  t1732 = t1729 + t1731;
  t1739 = t1681*t1701;
  t1741 = -1.*t1689*t1715;
  t1743 = t1739 + t1741;
  t1748 = Cos(var1[21]);
  t1750 = -1.*t1748;
  t1751 = 1. + t1750;
  t1756 = Sin(var1[21]);
  t1759 = -1.*t1725*t1732;
  t1760 = t1717*t1743;
  t1761 = t1759 + t1760;
  t1770 = t1717*t1732;
  t1771 = t1725*t1743;
  t1772 = t1770 + t1771;
  t1469 = 0.135*t1463;
  t1473 = 0. + t1469;
  t1420 = -0.049*t1406;
  t1443 = 0.135*t1426;
  t1448 = 0. + t1420 + t1443;
  t1783 = Sin(var1[3]);
  t1490 = -1.*t1487;
  t1502 = 1. + t1490;
  t1503 = -0.135*t1502;
  t1505 = 0. + t1503;
  t1788 = Cos(var1[3]);
  t1514 = -1.*t1512;
  t1517 = 1. + t1514;
  t1522 = -0.135*t1517;
  t1526 = 0. + t1522;
  t1792 = t1788*t1390;
  t1793 = -1.*t1783*t1479*t1506;
  t1794 = t1792 + t1793;
  t1564 = 0.135*t1562;
  t1566 = 0. + t1564;
  t1593 = -0.09*t1591;
  t1599 = 0.049*t1597;
  t1603 = 0. + t1593 + t1599;
  t1798 = -1.*t1380*t1463*t1783;
  t1799 = t1487*t1794;
  t1800 = t1798 + t1799;
  t1802 = -1.*t1487*t1380*t1783;
  t1803 = -1.*t1463*t1794;
  t1804 = t1802 + t1803;
  t1614 = -0.135*t1406;
  t1617 = -0.049*t1426;
  t1621 = 0. + t1614 + t1617;
  t1785 = t1390*t1783*t1479;
  t1789 = t1788*t1506;
  t1790 = t1785 + t1789;
  t1812 = t1512*t1800;
  t1813 = t1562*t1804;
  t1814 = t1812 + t1813;
  t1634 = -0.049*t1591;
  t1635 = -0.09*t1597;
  t1638 = 0. + t1634 + t1635;
  t1655 = -0.049*t1653;
  t1662 = -0.21*t1659;
  t1664 = 0. + t1655 + t1662;
  t1808 = -1.*t1562*t1800;
  t1809 = t1512*t1804;
  t1810 = t1808 + t1809;
  t1822 = t1403*t1790;
  t1823 = -1.*t1426*t1814;
  t1824 = t1822 + t1823;
  t1673 = -0.21*t1653;
  t1674 = 0.049*t1659;
  t1675 = 0. + t1673 + t1674;
  t1686 = -0.2707*t1684;
  t1694 = 0.0016*t1689;
  t1696 = 0. + t1686 + t1694;
  t1826 = t1597*t1810;
  t1827 = t1589*t1824;
  t1828 = t1826 + t1827;
  t1830 = t1589*t1810;
  t1831 = -1.*t1597*t1824;
  t1832 = t1830 + t1831;
  t1703 = -0.0016*t1684;
  t1705 = -0.2707*t1689;
  t1709 = 0. + t1703 + t1705;
  t1723 = 0.0184*t1722;
  t1726 = -0.7055*t1725;
  t1728 = 0. + t1723 + t1726;
  t1834 = -1.*t1659*t1828;
  t1835 = t1651*t1832;
  t1836 = t1834 + t1835;
  t1838 = t1651*t1828;
  t1839 = t1659*t1832;
  t1840 = t1838 + t1839;
  t1735 = -0.7055*t1722;
  t1736 = -0.0184*t1725;
  t1738 = 0. + t1735 + t1736;
  t1753 = -1.1135*t1751;
  t1757 = 0.0216*t1756;
  t1758 = 0. + t1753 + t1757;
  t1842 = t1689*t1836;
  t1843 = t1681*t1840;
  t1844 = t1842 + t1843;
  t1846 = t1681*t1836;
  t1847 = -1.*t1689*t1840;
  t1848 = t1846 + t1847;
  t1765 = -0.0216*t1751;
  t1766 = -1.1135*t1756;
  t1767 = 0. + t1765 + t1766;
  t1850 = -1.*t1725*t1844;
  t1851 = t1717*t1848;
  t1852 = t1850 + t1851;
  t1854 = t1717*t1844;
  t1855 = t1725*t1848;
  t1856 = t1854 + t1855;
  t1872 = t1390*t1783;
  t1873 = t1788*t1479*t1506;
  t1874 = t1872 + t1873;
  t1876 = t1788*t1380*t1463;
  t1877 = t1487*t1874;
  t1878 = t1876 + t1877;
  t1880 = t1487*t1788*t1380;
  t1881 = -1.*t1463*t1874;
  t1882 = t1880 + t1881;
  t1868 = -1.*t1788*t1390*t1479;
  t1869 = t1783*t1506;
  t1870 = t1868 + t1869;
  t1888 = t1512*t1878;
  t1889 = t1562*t1882;
  t1890 = t1888 + t1889;
  t1884 = -1.*t1562*t1878;
  t1885 = t1512*t1882;
  t1886 = t1884 + t1885;
  t1896 = t1403*t1870;
  t1897 = -1.*t1426*t1890;
  t1898 = t1896 + t1897;
  t1900 = t1597*t1886;
  t1901 = t1589*t1898;
  t1902 = t1900 + t1901;
  t1904 = t1589*t1886;
  t1905 = -1.*t1597*t1898;
  t1906 = t1904 + t1905;
  t1908 = -1.*t1659*t1902;
  t1909 = t1651*t1906;
  t1910 = t1908 + t1909;
  t1912 = t1651*t1902;
  t1913 = t1659*t1906;
  t1914 = t1912 + t1913;
  t1916 = t1689*t1910;
  t1917 = t1681*t1914;
  t1918 = t1916 + t1917;
  t1920 = t1681*t1910;
  t1921 = -1.*t1689*t1914;
  t1922 = t1920 + t1921;
  t1924 = -1.*t1725*t1918;
  t1925 = t1717*t1922;
  t1926 = t1924 + t1925;
  t1928 = t1717*t1918;
  t1929 = t1725*t1922;
  t1930 = t1928 + t1929;
  p_output1[0]=0. + t1380*t1390*t1448 + t1473*t1479 - 1.*t1380*t1505*t1506 + t1526*t1542 + t1566*t1582 + t1603*t1608 + t1621*t1625 - 0.1305*(t1380*t1390*t1426 + t1403*t1625) + t1638*t1648 + t1664*t1669 + t1675*t1679 + t1696*t1701 + t1709*t1715 + t1728*t1732 + t1738*t1743 + t1758*t1761 + t1767*t1772 + 0.0306*(t1756*t1761 + t1748*t1772) - 1.1312*(t1748*t1761 - 1.*t1756*t1772) + var1[0];
  p_output1[1]=0. - 1.*t1380*t1473*t1783 + t1448*t1790 + t1505*t1794 + t1526*t1800 + t1566*t1804 + t1603*t1810 + t1621*t1814 - 0.1305*(t1426*t1790 + t1403*t1814) + t1638*t1824 + t1664*t1828 + t1675*t1832 + t1696*t1836 + t1709*t1840 + t1728*t1844 + t1738*t1848 + t1758*t1852 + t1767*t1856 + 0.0306*(t1756*t1852 + t1748*t1856) - 1.1312*(t1748*t1852 - 1.*t1756*t1856) + var1[1];
  p_output1[2]=0. + t1380*t1473*t1788 + t1448*t1870 + t1505*t1874 + t1526*t1878 + t1566*t1882 + t1603*t1886 + t1621*t1890 - 0.1305*(t1426*t1870 + t1403*t1890) + t1638*t1898 + t1664*t1902 + t1675*t1906 + t1696*t1910 + t1709*t1914 + t1728*t1918 + t1738*t1922 + t1758*t1926 + t1767*t1930 + 0.0306*(t1756*t1926 + t1748*t1930) - 1.1312*(t1748*t1926 - 1.*t1756*t1930) + var1[2];
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

#include "p_RightToeBottom.hh"

namespace SymExpression
{

void p_RightToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
