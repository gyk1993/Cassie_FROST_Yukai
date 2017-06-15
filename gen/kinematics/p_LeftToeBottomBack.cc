/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:10:41 GMT-04:00
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
  double t1451;
  double t1522;
  double t1593;
  double t1606;
  double t1612;
  double t1630;
  double t1675;
  double t1676;
  double t1680;
  double t1664;
  double t1667;
  double t1673;
  double t1694;
  double t1771;
  double t1773;
  double t1775;
  double t1781;
  double t1790;
  double t1791;
  double t1795;
  double t1767;
  double t1705;
  double t1709;
  double t1729;
  double t1733;
  double t1758;
  double t1764;
  double t1765;
  double t1827;
  double t1830;
  double t1832;
  double t1835;
  double t1836;
  double t1837;
  double t1843;
  double t1849;
  double t1851;
  double t1853;
  double t1860;
  double t1862;
  double t1863;
  double t1866;
  double t1867;
  double t1869;
  double t1873;
  double t1882;
  double t1883;
  double t1885;
  double t1895;
  double t1896;
  double t1899;
  double t1901;
  double t1903;
  double t1906;
  double t1909;
  double t1913;
  double t1915;
  double t1916;
  double t1923;
  double t1925;
  double t1927;
  double t1932;
  double t1933;
  double t1934;
  double t1936;
  double t1943;
  double t1946;
  double t1947;
  double t1954;
  double t1955;
  double t1956;
  double t1566;
  double t1572;
  double t1582;
  double t1588;
  double t1969;
  double t1617;
  double t1622;
  double t1634;
  double t1643;
  double t1649;
  double t1662;
  double t1967;
  double t1968;
  double t1972;
  double t1973;
  double t1696;
  double t1701;
  double t1731;
  double t1736;
  double t1743;
  double t1982;
  double t1983;
  double t1984;
  double t1976;
  double t1977;
  double t1978;
  double t1779;
  double t1782;
  double t1784;
  double t1799;
  double t1801;
  double t1804;
  double t1996;
  double t1997;
  double t1998;
  double t1992;
  double t1993;
  double t1994;
  double t1818;
  double t1819;
  double t1822;
  double t1839;
  double t1846;
  double t1848;
  double t1986;
  double t1987;
  double t1988;
  double t2007;
  double t2008;
  double t2009;
  double t1857;
  double t1858;
  double t1859;
  double t1870;
  double t1877;
  double t1880;
  double t2011;
  double t2012;
  double t2013;
  double t2015;
  double t2016;
  double t2017;
  double t1887;
  double t1889;
  double t1893;
  double t1907;
  double t1910;
  double t1912;
  double t2019;
  double t2020;
  double t2021;
  double t2023;
  double t2024;
  double t2025;
  double t1919;
  double t1920;
  double t1922;
  double t1935;
  double t1938;
  double t1941;
  double t2027;
  double t2028;
  double t2029;
  double t2031;
  double t2032;
  double t2033;
  double t1949;
  double t1950;
  double t1951;
  double t2035;
  double t2036;
  double t2037;
  double t2039;
  double t2040;
  double t2041;
  double t2052;
  double t2053;
  double t2054;
  double t2061;
  double t2062;
  double t2063;
  double t2057;
  double t2058;
  double t2059;
  double t2073;
  double t2074;
  double t2075;
  double t2069;
  double t2070;
  double t2071;
  double t2065;
  double t2066;
  double t2067;
  double t2081;
  double t2082;
  double t2083;
  double t2085;
  double t2086;
  double t2087;
  double t2089;
  double t2090;
  double t2091;
  double t2093;
  double t2094;
  double t2095;
  double t2097;
  double t2098;
  double t2099;
  double t2101;
  double t2102;
  double t2103;
  double t2105;
  double t2106;
  double t2107;
  double t2109;
  double t2110;
  double t2111;
  double t2113;
  double t2114;
  double t2115;
  t1451 = Cos(var1[4]);
  t1522 = Cos(var1[6]);
  t1593 = Sin(var1[5]);
  t1606 = Sin(var1[4]);
  t1612 = Sin(var1[6]);
  t1630 = Cos(var1[7]);
  t1675 = t1522*t1606;
  t1676 = t1451*t1593*t1612;
  t1680 = t1675 + t1676;
  t1664 = -1.*t1451*t1522*t1593;
  t1667 = t1606*t1612;
  t1673 = t1664 + t1667;
  t1694 = Sin(var1[7]);
  t1771 = Cos(var1[8]);
  t1773 = -1.*t1771;
  t1775 = 1. + t1773;
  t1781 = Sin(var1[8]);
  t1790 = t1630*t1673;
  t1791 = t1680*t1694;
  t1795 = t1790 + t1791;
  t1767 = Cos(var1[5]);
  t1705 = Cos(var1[9]);
  t1709 = -1.*t1705;
  t1729 = 1. + t1709;
  t1733 = Sin(var1[9]);
  t1758 = t1630*t1680;
  t1764 = -1.*t1673*t1694;
  t1765 = t1758 + t1764;
  t1827 = t1451*t1767*t1771;
  t1830 = -1.*t1795*t1781;
  t1832 = t1827 + t1830;
  t1835 = Cos(var1[10]);
  t1836 = -1.*t1835;
  t1837 = 1. + t1836;
  t1843 = Sin(var1[10]);
  t1849 = t1733*t1765;
  t1851 = t1705*t1832;
  t1853 = t1849 + t1851;
  t1860 = t1705*t1765;
  t1862 = -1.*t1733*t1832;
  t1863 = t1860 + t1862;
  t1866 = Cos(var1[11]);
  t1867 = -1.*t1866;
  t1869 = 1. + t1867;
  t1873 = Sin(var1[11]);
  t1882 = -1.*t1843*t1853;
  t1883 = t1835*t1863;
  t1885 = t1882 + t1883;
  t1895 = t1835*t1853;
  t1896 = t1843*t1863;
  t1899 = t1895 + t1896;
  t1901 = Cos(var1[12]);
  t1903 = -1.*t1901;
  t1906 = 1. + t1903;
  t1909 = Sin(var1[12]);
  t1913 = t1873*t1885;
  t1915 = t1866*t1899;
  t1916 = t1913 + t1915;
  t1923 = t1866*t1885;
  t1925 = -1.*t1873*t1899;
  t1927 = t1923 + t1925;
  t1932 = Cos(var1[13]);
  t1933 = -1.*t1932;
  t1934 = 1. + t1933;
  t1936 = Sin(var1[13]);
  t1943 = -1.*t1909*t1916;
  t1946 = t1901*t1927;
  t1947 = t1943 + t1946;
  t1954 = t1901*t1916;
  t1955 = t1909*t1927;
  t1956 = t1954 + t1955;
  t1566 = -1.*t1522;
  t1572 = 1. + t1566;
  t1582 = 0.135*t1572;
  t1588 = 0. + t1582;
  t1969 = Sin(var1[3]);
  t1617 = -0.135*t1612;
  t1622 = 0. + t1617;
  t1634 = -1.*t1630;
  t1643 = 1. + t1634;
  t1649 = 0.135*t1643;
  t1662 = 0. + t1649;
  t1967 = Cos(var1[3]);
  t1968 = t1967*t1767;
  t1972 = -1.*t1969*t1606*t1593;
  t1973 = t1968 + t1972;
  t1696 = -0.135*t1694;
  t1701 = 0. + t1696;
  t1731 = -0.09*t1729;
  t1736 = 0.049*t1733;
  t1743 = 0. + t1731 + t1736;
  t1982 = -1.*t1451*t1522*t1969;
  t1983 = -1.*t1973*t1612;
  t1984 = t1982 + t1983;
  t1976 = t1522*t1973;
  t1977 = -1.*t1451*t1969*t1612;
  t1978 = t1976 + t1977;
  t1779 = -0.049*t1775;
  t1782 = -0.135*t1781;
  t1784 = 0. + t1779 + t1782;
  t1799 = 0.135*t1775;
  t1801 = -0.049*t1781;
  t1804 = 0. + t1799 + t1801;
  t1996 = t1630*t1978;
  t1997 = t1984*t1694;
  t1998 = t1996 + t1997;
  t1992 = t1767*t1969*t1606;
  t1993 = t1967*t1593;
  t1994 = t1992 + t1993;
  t1818 = -0.049*t1729;
  t1819 = -0.09*t1733;
  t1822 = 0. + t1818 + t1819;
  t1839 = -0.049*t1837;
  t1846 = -0.21*t1843;
  t1848 = 0. + t1839 + t1846;
  t1986 = t1630*t1984;
  t1987 = -1.*t1978*t1694;
  t1988 = t1986 + t1987;
  t2007 = t1771*t1994;
  t2008 = -1.*t1998*t1781;
  t2009 = t2007 + t2008;
  t1857 = -0.21*t1837;
  t1858 = 0.049*t1843;
  t1859 = 0. + t1857 + t1858;
  t1870 = -0.2707*t1869;
  t1877 = 0.0016*t1873;
  t1880 = 0. + t1870 + t1877;
  t2011 = t1733*t1988;
  t2012 = t1705*t2009;
  t2013 = t2011 + t2012;
  t2015 = t1705*t1988;
  t2016 = -1.*t1733*t2009;
  t2017 = t2015 + t2016;
  t1887 = -0.0016*t1869;
  t1889 = -0.2707*t1873;
  t1893 = 0. + t1887 + t1889;
  t1907 = 0.0184*t1906;
  t1910 = -0.7055*t1909;
  t1912 = 0. + t1907 + t1910;
  t2019 = -1.*t1843*t2013;
  t2020 = t1835*t2017;
  t2021 = t2019 + t2020;
  t2023 = t1835*t2013;
  t2024 = t1843*t2017;
  t2025 = t2023 + t2024;
  t1919 = -0.7055*t1906;
  t1920 = -0.0184*t1909;
  t1922 = 0. + t1919 + t1920;
  t1935 = -1.1135*t1934;
  t1938 = 0.0216*t1936;
  t1941 = 0. + t1935 + t1938;
  t2027 = t1873*t2021;
  t2028 = t1866*t2025;
  t2029 = t2027 + t2028;
  t2031 = t1866*t2021;
  t2032 = -1.*t1873*t2025;
  t2033 = t2031 + t2032;
  t1949 = -0.0216*t1934;
  t1950 = -1.1135*t1936;
  t1951 = 0. + t1949 + t1950;
  t2035 = -1.*t1909*t2029;
  t2036 = t1901*t2033;
  t2037 = t2035 + t2036;
  t2039 = t1901*t2029;
  t2040 = t1909*t2033;
  t2041 = t2039 + t2040;
  t2052 = t1767*t1969;
  t2053 = t1967*t1606*t1593;
  t2054 = t2052 + t2053;
  t2061 = t1967*t1451*t1522;
  t2062 = -1.*t2054*t1612;
  t2063 = t2061 + t2062;
  t2057 = t1522*t2054;
  t2058 = t1967*t1451*t1612;
  t2059 = t2057 + t2058;
  t2073 = t1630*t2059;
  t2074 = t2063*t1694;
  t2075 = t2073 + t2074;
  t2069 = -1.*t1967*t1767*t1606;
  t2070 = t1969*t1593;
  t2071 = t2069 + t2070;
  t2065 = t1630*t2063;
  t2066 = -1.*t2059*t1694;
  t2067 = t2065 + t2066;
  t2081 = t1771*t2071;
  t2082 = -1.*t2075*t1781;
  t2083 = t2081 + t2082;
  t2085 = t1733*t2067;
  t2086 = t1705*t2083;
  t2087 = t2085 + t2086;
  t2089 = t1705*t2067;
  t2090 = -1.*t1733*t2083;
  t2091 = t2089 + t2090;
  t2093 = -1.*t1843*t2087;
  t2094 = t1835*t2091;
  t2095 = t2093 + t2094;
  t2097 = t1835*t2087;
  t2098 = t1843*t2091;
  t2099 = t2097 + t2098;
  t2101 = t1873*t2095;
  t2102 = t1866*t2099;
  t2103 = t2101 + t2102;
  t2105 = t1866*t2095;
  t2106 = -1.*t1873*t2099;
  t2107 = t2105 + t2106;
  t2109 = -1.*t1909*t2103;
  t2110 = t1901*t2107;
  t2111 = t2109 + t2110;
  t2113 = t1901*t2103;
  t2114 = t1909*t2107;
  t2115 = t2113 + t2114;
  p_output1[0]=0. - 1.*t1451*t1588*t1593 + t1606*t1622 + t1662*t1673 + t1680*t1701 + t1743*t1765 + t1451*t1767*t1784 + 0.1305*(t1451*t1767*t1781 + t1771*t1795) + t1795*t1804 + t1822*t1832 + t1848*t1853 + t1859*t1863 + t1880*t1885 + t1893*t1899 + t1912*t1916 + t1922*t1927 + t1941*t1947 + t1951*t1956 - 0.0216*(t1936*t1947 + t1932*t1956) - 1.193387*(t1932*t1947 - 1.*t1936*t1956) + var1[0];
  p_output1[1]=0. - 1.*t1451*t1622*t1969 + t1588*t1973 + t1662*t1978 + t1701*t1984 + t1743*t1988 + t1784*t1994 + t1804*t1998 + 0.1305*(t1781*t1994 + t1771*t1998) + t1822*t2009 + t1848*t2013 + t1859*t2017 + t1880*t2021 + t1893*t2025 + t1912*t2029 + t1922*t2033 + t1941*t2037 + t1951*t2041 - 0.0216*(t1936*t2037 + t1932*t2041) - 1.193387*(t1932*t2037 - 1.*t1936*t2041) + var1[1];
  p_output1[2]=0. + t1451*t1622*t1967 + t1588*t2054 + t1662*t2059 + t1701*t2063 + t1743*t2067 + t1784*t2071 + t1804*t2075 + 0.1305*(t1781*t2071 + t1771*t2075) + t1822*t2083 + t1848*t2087 + t1859*t2091 + t1880*t2095 + t1893*t2099 + t1912*t2103 + t1922*t2107 + t1941*t2111 + t1951*t2115 - 0.0216*(t1936*t2111 + t1932*t2115) - 1.193387*(t1932*t2111 - 1.*t1936*t2115) + var1[2];
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

#include "p_LeftToeBottomBack.hh"

namespace SymExpression
{

void p_LeftToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
