/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:40:18 GMT-04:00
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
  double t1420;
  double t1526;
  double t1511;
  double t1503;
  double t1533;
  double t1448;
  double t1443;
  double t1469;
  double t1486;
  double t1608;
  double t1614;
  double t1568;
  double t1627;
  double t1628;
  double t1629;
  double t1675;
  double t1676;
  double t1679;
  double t1522;
  double t1545;
  double t1564;
  double t1572;
  double t1582;
  double t1588;
  double t1566;
  double t1593;
  double t1599;
  double t1735;
  double t1728;
  double t1729;
  double t1731;
  double t1726;
  double t1736;
  double t1738;
  double t1739;
  double t1757;
  double t1733;
  double t1743;
  double t1744;
  double t1723;
  double t1758;
  double t1760;
  double t1764;
  double t1770;
  double t1753;
  double t1765;
  double t1766;
  double t1716;
  double t1771;
  double t1773;
  double t1774;
  double t1778;
  double t1767;
  double t1775;
  double t1776;
  double t1712;
  double t1779;
  double t1780;
  double t1781;
  double t1789;
  double t1777;
  double t1782;
  double t1784;
  double t1711;
  double t1790;
  double t1791;
  double t1792;
  double t1624;
  double t1630;
  double t1633;
  double t1635;
  double t1638;
  double t1643;
  double t1612;
  double t1617;
  double t1621;
  double t1634;
  double t1649;
  double t1655;
  double t1812;
  double t1813;
  double t1815;
  double t1819;
  double t1820;
  double t1821;
  double t1818;
  double t1822;
  double t1825;
  double t1827;
  double t1829;
  double t1830;
  double t1826;
  double t1832;
  double t1833;
  double t1836;
  double t1837;
  double t1838;
  double t1835;
  double t1839;
  double t1841;
  double t1843;
  double t1845;
  double t1846;
  double t1842;
  double t1848;
  double t1849;
  double t1853;
  double t1854;
  double t1855;
  double t1674;
  double t1680;
  double t1686;
  double t1696;
  double t1699;
  double t1701;
  double t1665;
  double t1667;
  double t1670;
  double t1694;
  double t1702;
  double t1703;
  double t1865;
  double t1866;
  double t1867;
  double t1870;
  double t1871;
  double t1872;
  double t1869;
  double t1873;
  double t1875;
  double t1877;
  double t1879;
  double t1880;
  double t1876;
  double t1882;
  double t1883;
  double t1886;
  double t1887;
  double t1888;
  double t1885;
  double t1889;
  double t1891;
  double t1893;
  double t1894;
  double t1895;
  double t1892;
  double t1896;
  double t1899;
  double t1901;
  double t1903;
  double t1904;
  double t1785;
  double t1795;
  double t1799;
  double t1804;
  double t1805;
  double t1809;
  double t1851;
  double t1857;
  double t1858;
  double t1860;
  double t1861;
  double t1862;
  double t1900;
  double t1906;
  double t1907;
  double t1910;
  double t1911;
  double t1912;
  double t1929;
  double t1931;
  double t1952;
  double t1953;
  double t1970;
  double t1971;
  double t1980;
  double t1981;
  double t1990;
  double t1991;
  double t2001;
  double t2002;
  double t1936;
  double t1937;
  double t1932;
  double t1933;
  double t1934;
  double t1939;
  double t1940;
  double t1941;
  double t1942;
  double t1944;
  double t1945;
  double t1946;
  double t1947;
  double t1949;
  double t1950;
  double t1954;
  double t1955;
  double t1956;
  double t1958;
  double t1959;
  double t1960;
  double t1966;
  double t1967;
  double t1968;
  double t1972;
  double t1973;
  double t1974;
  double t1976;
  double t1977;
  double t1978;
  double t1982;
  double t1983;
  double t1984;
  double t1986;
  double t1987;
  double t1988;
  double t1992;
  double t1993;
  double t1994;
  double t1996;
  double t1997;
  double t1998;
  double t2003;
  double t2004;
  double t2005;
  double t2007;
  double t2008;
  double t2009;
  t1420 = Cos(var1[4]);
  t1526 = Cos(var1[14]);
  t1511 = Sin(var1[4]);
  t1503 = Sin(var1[14]);
  t1533 = Sin(var1[5]);
  t1448 = Sin(var1[16]);
  t1443 = Cos(var1[5]);
  t1469 = Cos(var1[16]);
  t1486 = Cos(var1[15]);
  t1608 = Sin(var1[3]);
  t1614 = Cos(var1[3]);
  t1568 = Sin(var1[15]);
  t1627 = t1614*t1443;
  t1628 = -1.*t1608*t1511*t1533;
  t1629 = t1627 + t1628;
  t1675 = t1443*t1608;
  t1676 = t1614*t1511*t1533;
  t1679 = t1675 + t1676;
  t1522 = t1503*t1511;
  t1545 = -1.*t1526*t1420*t1533;
  t1564 = t1522 + t1545;
  t1572 = t1526*t1511;
  t1582 = t1420*t1503*t1533;
  t1588 = t1572 + t1582;
  t1566 = t1486*t1564;
  t1593 = t1568*t1588;
  t1599 = t1566 + t1593;
  t1735 = Cos(var1[17]);
  t1728 = -1.*t1568*t1564;
  t1729 = t1486*t1588;
  t1731 = t1728 + t1729;
  t1726 = Sin(var1[17]);
  t1736 = t1469*t1420*t1443;
  t1738 = -1.*t1448*t1599;
  t1739 = t1736 + t1738;
  t1757 = Cos(var1[18]);
  t1733 = t1726*t1731;
  t1743 = t1735*t1739;
  t1744 = t1733 + t1743;
  t1723 = Sin(var1[18]);
  t1758 = t1735*t1731;
  t1760 = -1.*t1726*t1739;
  t1764 = t1758 + t1760;
  t1770 = Cos(var1[19]);
  t1753 = -1.*t1723*t1744;
  t1765 = t1757*t1764;
  t1766 = t1753 + t1765;
  t1716 = Sin(var1[19]);
  t1771 = t1757*t1744;
  t1773 = t1723*t1764;
  t1774 = t1771 + t1773;
  t1778 = Cos(var1[20]);
  t1767 = t1716*t1766;
  t1775 = t1770*t1774;
  t1776 = t1767 + t1775;
  t1712 = Sin(var1[20]);
  t1779 = t1770*t1766;
  t1780 = -1.*t1716*t1774;
  t1781 = t1779 + t1780;
  t1789 = Cos(var1[21]);
  t1777 = -1.*t1712*t1776;
  t1782 = t1778*t1781;
  t1784 = t1777 + t1782;
  t1711 = Sin(var1[21]);
  t1790 = t1778*t1776;
  t1791 = t1712*t1781;
  t1792 = t1790 + t1791;
  t1624 = -1.*t1420*t1503*t1608;
  t1630 = t1526*t1629;
  t1633 = t1624 + t1630;
  t1635 = -1.*t1526*t1420*t1608;
  t1638 = -1.*t1503*t1629;
  t1643 = t1635 + t1638;
  t1612 = t1443*t1608*t1511;
  t1617 = t1614*t1533;
  t1621 = t1612 + t1617;
  t1634 = t1486*t1633;
  t1649 = t1568*t1643;
  t1655 = t1634 + t1649;
  t1812 = -1.*t1568*t1633;
  t1813 = t1486*t1643;
  t1815 = t1812 + t1813;
  t1819 = t1469*t1621;
  t1820 = -1.*t1448*t1655;
  t1821 = t1819 + t1820;
  t1818 = t1726*t1815;
  t1822 = t1735*t1821;
  t1825 = t1818 + t1822;
  t1827 = t1735*t1815;
  t1829 = -1.*t1726*t1821;
  t1830 = t1827 + t1829;
  t1826 = -1.*t1723*t1825;
  t1832 = t1757*t1830;
  t1833 = t1826 + t1832;
  t1836 = t1757*t1825;
  t1837 = t1723*t1830;
  t1838 = t1836 + t1837;
  t1835 = t1716*t1833;
  t1839 = t1770*t1838;
  t1841 = t1835 + t1839;
  t1843 = t1770*t1833;
  t1845 = -1.*t1716*t1838;
  t1846 = t1843 + t1845;
  t1842 = -1.*t1712*t1841;
  t1848 = t1778*t1846;
  t1849 = t1842 + t1848;
  t1853 = t1778*t1841;
  t1854 = t1712*t1846;
  t1855 = t1853 + t1854;
  t1674 = t1614*t1420*t1503;
  t1680 = t1526*t1679;
  t1686 = t1674 + t1680;
  t1696 = t1526*t1614*t1420;
  t1699 = -1.*t1503*t1679;
  t1701 = t1696 + t1699;
  t1665 = -1.*t1614*t1443*t1511;
  t1667 = t1608*t1533;
  t1670 = t1665 + t1667;
  t1694 = t1486*t1686;
  t1702 = t1568*t1701;
  t1703 = t1694 + t1702;
  t1865 = -1.*t1568*t1686;
  t1866 = t1486*t1701;
  t1867 = t1865 + t1866;
  t1870 = t1469*t1670;
  t1871 = -1.*t1448*t1703;
  t1872 = t1870 + t1871;
  t1869 = t1726*t1867;
  t1873 = t1735*t1872;
  t1875 = t1869 + t1873;
  t1877 = t1735*t1867;
  t1879 = -1.*t1726*t1872;
  t1880 = t1877 + t1879;
  t1876 = -1.*t1723*t1875;
  t1882 = t1757*t1880;
  t1883 = t1876 + t1882;
  t1886 = t1757*t1875;
  t1887 = t1723*t1880;
  t1888 = t1886 + t1887;
  t1885 = t1716*t1883;
  t1889 = t1770*t1888;
  t1891 = t1885 + t1889;
  t1893 = t1770*t1883;
  t1894 = -1.*t1716*t1888;
  t1895 = t1893 + t1894;
  t1892 = -1.*t1712*t1891;
  t1896 = t1778*t1895;
  t1899 = t1892 + t1896;
  t1901 = t1778*t1891;
  t1903 = t1712*t1895;
  t1904 = t1901 + t1903;
  t1785 = t1711*t1784;
  t1795 = t1789*t1792;
  t1799 = t1785 + t1795;
  t1804 = t1789*t1784;
  t1805 = -1.*t1711*t1792;
  t1809 = t1804 + t1805;
  t1851 = t1711*t1849;
  t1857 = t1789*t1855;
  t1858 = t1851 + t1857;
  t1860 = t1789*t1849;
  t1861 = -1.*t1711*t1855;
  t1862 = t1860 + t1861;
  t1900 = t1711*t1899;
  t1906 = t1789*t1904;
  t1907 = t1900 + t1906;
  t1910 = t1789*t1899;
  t1911 = -1.*t1711*t1904;
  t1912 = t1910 + t1911;
  t1929 = -1.*t1469;
  t1931 = 1. + t1929;
  t1952 = -1.*t1735;
  t1953 = 1. + t1952;
  t1970 = -1.*t1757;
  t1971 = 1. + t1970;
  t1980 = -1.*t1770;
  t1981 = 1. + t1980;
  t1990 = -1.*t1778;
  t1991 = 1. + t1990;
  t2001 = -1.*t1789;
  t2002 = 1. + t2001;
  t1936 = 0.135*t1503;
  t1937 = 0. + t1936;
  t1932 = -0.049*t1931;
  t1933 = 0.135*t1448;
  t1934 = 0. + t1932 + t1933;
  t1939 = -1.*t1526;
  t1940 = 1. + t1939;
  t1941 = -0.135*t1940;
  t1942 = 0. + t1941;
  t1944 = -1.*t1486;
  t1945 = 1. + t1944;
  t1946 = -0.135*t1945;
  t1947 = 0. + t1946;
  t1949 = 0.135*t1568;
  t1950 = 0. + t1949;
  t1954 = -0.09*t1953;
  t1955 = 0.049*t1726;
  t1956 = 0. + t1954 + t1955;
  t1958 = -0.135*t1931;
  t1959 = -0.049*t1448;
  t1960 = 0. + t1958 + t1959;
  t1966 = -0.049*t1953;
  t1967 = -0.09*t1726;
  t1968 = 0. + t1966 + t1967;
  t1972 = -0.049*t1971;
  t1973 = -0.21*t1723;
  t1974 = 0. + t1972 + t1973;
  t1976 = -0.21*t1971;
  t1977 = 0.049*t1723;
  t1978 = 0. + t1976 + t1977;
  t1982 = -0.2707*t1981;
  t1983 = 0.0016*t1716;
  t1984 = 0. + t1982 + t1983;
  t1986 = -0.0016*t1981;
  t1987 = -0.2707*t1716;
  t1988 = 0. + t1986 + t1987;
  t1992 = 0.0184*t1991;
  t1993 = -0.7055*t1712;
  t1994 = 0. + t1992 + t1993;
  t1996 = -0.7055*t1991;
  t1997 = -0.0184*t1712;
  t1998 = 0. + t1996 + t1997;
  t2003 = -1.1135*t2002;
  t2004 = 0.0216*t1711;
  t2005 = 0. + t2003 + t2004;
  t2007 = -0.0216*t2002;
  t2008 = -1.1135*t1711;
  t2009 = 0. + t2007 + t2008;
  p_output1[0]=-1.*t1420*t1443*t1448 - 1.*t1469*t1599;
  p_output1[1]=-1.*t1448*t1621 - 1.*t1469*t1655;
  p_output1[2]=-1.*t1448*t1670 - 1.*t1469*t1703;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1799 + 0.766044*t1809;
  p_output1[5]=0.642788*t1858 + 0.766044*t1862;
  p_output1[6]=0.642788*t1907 + 0.766044*t1912;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1799 + 0.642788*t1809;
  p_output1[9]=-0.766044*t1858 + 0.642788*t1862;
  p_output1[10]=-0.766044*t1907 + 0.642788*t1912;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*(t1420*t1443*t1448 + t1469*t1599) + 0.0306*t1799 - 1.1312*t1809 + t1420*t1443*t1934 + t1511*t1937 - 1.*t1420*t1533*t1942 + t1564*t1947 + t1588*t1950 + t1731*t1956 + t1599*t1960 + t1739*t1968 + t1744*t1974 + t1764*t1978 + t1766*t1984 + t1774*t1988 + t1776*t1994 + t1781*t1998 + t1784*t2005 + t1792*t2009 + var1[0];
  p_output1[13]=0. - 0.1305*(t1448*t1621 + t1469*t1655) + 0.0306*t1858 - 1.1312*t1862 + t1621*t1934 - 1.*t1420*t1608*t1937 + t1629*t1942 + t1633*t1947 + t1643*t1950 + t1815*t1956 + t1655*t1960 + t1821*t1968 + t1825*t1974 + t1830*t1978 + t1833*t1984 + t1838*t1988 + t1841*t1994 + t1846*t1998 + t1849*t2005 + t1855*t2009 + var1[1];
  p_output1[14]=0. - 0.1305*(t1448*t1670 + t1469*t1703) + 0.0306*t1907 - 1.1312*t1912 + t1670*t1934 + t1420*t1614*t1937 + t1679*t1942 + t1686*t1947 + t1701*t1950 + t1867*t1956 + t1703*t1960 + t1872*t1968 + t1875*t1974 + t1880*t1978 + t1883*t1984 + t1888*t1988 + t1891*t1994 + t1895*t1998 + t1899*t2005 + t1904*t2009 + var1[2];
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

#include "H_RightToeBottom.hh"

namespace SymExpression
{

void H_RightToeBottom_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
