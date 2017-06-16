/*
 * Automatically Generated from Mathematica.
 * Fri 16 Jun 2017 12:28:22 GMT-04:00
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
  double t1676;
  double t1667;
  double t1680;
  double t1674;
  double t1696;
  double t1662;
  double t1736;
  double t1743;
  double t1758;
  double t1675;
  double t1701;
  double t1702;
  double t1765;
  double t1784;
  double t1731;
  double t1766;
  double t1779;
  double t1649;
  double t1785;
  double t1790;
  double t1791;
  double t1799;
  double t1801;
  double t1804;
  double t1809;
  double t1810;
  double t1811;
  double t1819;
  double t1782;
  double t1813;
  double t1815;
  double t1627;
  double t1822;
  double t1827;
  double t1833;
  double t1849;
  double t1818;
  double t1839;
  double t1846;
  double t1617;
  double t1851;
  double t1854;
  double t1857;
  double t1863;
  double t1848;
  double t1858;
  double t1859;
  double t1603;
  double t1864;
  double t1870;
  double t1877;
  double t1582;
  double t1900;
  double t1910;
  double t1912;
  double t1913;
  double t1915;
  double t1922;
  double t1923;
  double t1927;
  double t1907;
  double t1917;
  double t1919;
  double t1920;
  double t1928;
  double t1935;
  double t1941;
  double t1946;
  double t1948;
  double t1949;
  double t1950;
  double t1951;
  double t1954;
  double t1955;
  double t1957;
  double t1938;
  double t1958;
  double t1959;
  double t1961;
  double t1962;
  double t1963;
  double t1960;
  double t1964;
  double t1965;
  double t1968;
  double t1974;
  double t1975;
  double t1886;
  double t1966;
  double t1976;
  double t1979;
  double t1985;
  double t1986;
  double t1988;
  double t2004;
  double t2005;
  double t2006;
  double t2012;
  double t2014;
  double t2015;
  double t2003;
  double t2007;
  double t2010;
  double t2011;
  double t2017;
  double t2018;
  double t2021;
  double t2022;
  double t2023;
  double t2024;
  double t2026;
  double t2027;
  double t2028;
  double t2030;
  double t2031;
  double t2020;
  double t2033;
  double t2034;
  double t2038;
  double t2039;
  double t2040;
  double t2036;
  double t2042;
  double t2043;
  double t2045;
  double t2046;
  double t2047;
  double t2044;
  double t2048;
  double t2049;
  double t2051;
  double t2052;
  double t2053;
  double t1860;
  double t1880;
  double t1883;
  double t1887;
  double t1889;
  double t1893;
  double t1984;
  double t1989;
  double t1992;
  double t1994;
  double t1995;
  double t1996;
  double t2050;
  double t2055;
  double t2056;
  double t2058;
  double t2060;
  double t2061;
  double t2119;
  double t2120;
  double t2112;
  double t2113;
  double t2137;
  double t2138;
  double t2147;
  double t2148;
  double t2157;
  double t2158;
  double t2167;
  double t2168;
  double t1885;
  double t1895;
  double t1896;
  double t2089;
  double t2091;
  double t2092;
  double t2094;
  double t2096;
  double t2097;
  double t2100;
  double t2101;
  double t2102;
  double t2104;
  double t2107;
  double t2108;
  double t2114;
  double t2116;
  double t2117;
  double t2121;
  double t2122;
  double t2123;
  double t2125;
  double t2126;
  double t2127;
  double t2133;
  double t2134;
  double t2135;
  double t2139;
  double t2140;
  double t2141;
  double t2143;
  double t2144;
  double t2145;
  double t2149;
  double t2150;
  double t2151;
  double t2153;
  double t2154;
  double t2155;
  double t2159;
  double t2160;
  double t2161;
  double t2163;
  double t2164;
  double t2165;
  double t2169;
  double t2170;
  double t2171;
  double t2173;
  double t2174;
  double t2175;
  double t1993;
  double t1997;
  double t1999;
  double t2057;
  double t2063;
  double t2064;
  t1676 = Cos(var1[4]);
  t1667 = Cos(var1[6]);
  t1680 = Sin(var1[5]);
  t1674 = Sin(var1[4]);
  t1696 = Sin(var1[6]);
  t1662 = Cos(var1[7]);
  t1736 = -1.*t1676*t1667*t1680;
  t1743 = t1674*t1696;
  t1758 = t1736 + t1743;
  t1675 = t1667*t1674;
  t1701 = t1676*t1680*t1696;
  t1702 = t1675 + t1701;
  t1765 = Sin(var1[7]);
  t1784 = Cos(var1[9]);
  t1731 = t1662*t1702;
  t1766 = -1.*t1758*t1765;
  t1779 = t1731 + t1766;
  t1649 = Sin(var1[9]);
  t1785 = Cos(var1[5]);
  t1790 = Cos(var1[8]);
  t1791 = t1676*t1785*t1790;
  t1799 = t1662*t1758;
  t1801 = t1702*t1765;
  t1804 = t1799 + t1801;
  t1809 = Sin(var1[8]);
  t1810 = -1.*t1804*t1809;
  t1811 = t1791 + t1810;
  t1819 = Cos(var1[10]);
  t1782 = t1649*t1779;
  t1813 = t1784*t1811;
  t1815 = t1782 + t1813;
  t1627 = Sin(var1[10]);
  t1822 = t1784*t1779;
  t1827 = -1.*t1649*t1811;
  t1833 = t1822 + t1827;
  t1849 = Cos(var1[11]);
  t1818 = -1.*t1627*t1815;
  t1839 = t1819*t1833;
  t1846 = t1818 + t1839;
  t1617 = Sin(var1[11]);
  t1851 = t1819*t1815;
  t1854 = t1627*t1833;
  t1857 = t1851 + t1854;
  t1863 = Cos(var1[12]);
  t1848 = t1617*t1846;
  t1858 = t1849*t1857;
  t1859 = t1848 + t1858;
  t1603 = Sin(var1[12]);
  t1864 = t1849*t1846;
  t1870 = -1.*t1617*t1857;
  t1877 = t1864 + t1870;
  t1582 = Sin(var1[13]);
  t1900 = Sin(var1[3]);
  t1910 = Cos(var1[3]);
  t1912 = t1910*t1785;
  t1913 = -1.*t1900*t1674*t1680;
  t1915 = t1912 + t1913;
  t1922 = t1667*t1915;
  t1923 = -1.*t1676*t1900*t1696;
  t1927 = t1922 + t1923;
  t1907 = -1.*t1676*t1667*t1900;
  t1917 = -1.*t1915*t1696;
  t1919 = t1907 + t1917;
  t1920 = t1662*t1919;
  t1928 = -1.*t1927*t1765;
  t1935 = t1920 + t1928;
  t1941 = t1785*t1900*t1674;
  t1946 = t1910*t1680;
  t1948 = t1941 + t1946;
  t1949 = t1790*t1948;
  t1950 = t1662*t1927;
  t1951 = t1919*t1765;
  t1954 = t1950 + t1951;
  t1955 = -1.*t1954*t1809;
  t1957 = t1949 + t1955;
  t1938 = t1649*t1935;
  t1958 = t1784*t1957;
  t1959 = t1938 + t1958;
  t1961 = t1784*t1935;
  t1962 = -1.*t1649*t1957;
  t1963 = t1961 + t1962;
  t1960 = -1.*t1627*t1959;
  t1964 = t1819*t1963;
  t1965 = t1960 + t1964;
  t1968 = t1819*t1959;
  t1974 = t1627*t1963;
  t1975 = t1968 + t1974;
  t1886 = Cos(var1[13]);
  t1966 = t1617*t1965;
  t1976 = t1849*t1975;
  t1979 = t1966 + t1976;
  t1985 = t1849*t1965;
  t1986 = -1.*t1617*t1975;
  t1988 = t1985 + t1986;
  t2004 = t1785*t1900;
  t2005 = t1910*t1674*t1680;
  t2006 = t2004 + t2005;
  t2012 = t1667*t2006;
  t2014 = t1910*t1676*t1696;
  t2015 = t2012 + t2014;
  t2003 = t1910*t1676*t1667;
  t2007 = -1.*t2006*t1696;
  t2010 = t2003 + t2007;
  t2011 = t1662*t2010;
  t2017 = -1.*t2015*t1765;
  t2018 = t2011 + t2017;
  t2021 = -1.*t1910*t1785*t1674;
  t2022 = t1900*t1680;
  t2023 = t2021 + t2022;
  t2024 = t1790*t2023;
  t2026 = t1662*t2015;
  t2027 = t2010*t1765;
  t2028 = t2026 + t2027;
  t2030 = -1.*t2028*t1809;
  t2031 = t2024 + t2030;
  t2020 = t1649*t2018;
  t2033 = t1784*t2031;
  t2034 = t2020 + t2033;
  t2038 = t1784*t2018;
  t2039 = -1.*t1649*t2031;
  t2040 = t2038 + t2039;
  t2036 = -1.*t1627*t2034;
  t2042 = t1819*t2040;
  t2043 = t2036 + t2042;
  t2045 = t1819*t2034;
  t2046 = t1627*t2040;
  t2047 = t2045 + t2046;
  t2044 = t1617*t2043;
  t2048 = t1849*t2047;
  t2049 = t2044 + t2048;
  t2051 = t1849*t2043;
  t2052 = -1.*t1617*t2047;
  t2053 = t2051 + t2052;
  t1860 = -1.*t1603*t1859;
  t1880 = t1863*t1877;
  t1883 = t1860 + t1880;
  t1887 = t1863*t1859;
  t1889 = t1603*t1877;
  t1893 = t1887 + t1889;
  t1984 = -1.*t1603*t1979;
  t1989 = t1863*t1988;
  t1992 = t1984 + t1989;
  t1994 = t1863*t1979;
  t1995 = t1603*t1988;
  t1996 = t1994 + t1995;
  t2050 = -1.*t1603*t2049;
  t2055 = t1863*t2053;
  t2056 = t2050 + t2055;
  t2058 = t1863*t2049;
  t2060 = t1603*t2053;
  t2061 = t2058 + t2060;
  t2119 = -1.*t1790;
  t2120 = 1. + t2119;
  t2112 = -1.*t1784;
  t2113 = 1. + t2112;
  t2137 = -1.*t1819;
  t2138 = 1. + t2137;
  t2147 = -1.*t1849;
  t2148 = 1. + t2147;
  t2157 = -1.*t1863;
  t2158 = 1. + t2157;
  t2167 = -1.*t1886;
  t2168 = 1. + t2167;
  t1885 = t1582*t1883;
  t1895 = t1886*t1893;
  t1896 = t1885 + t1895;
  t2089 = -1.*t1667;
  t2091 = 1. + t2089;
  t2092 = 0.135*t2091;
  t2094 = 0. + t2092;
  t2096 = -0.135*t1696;
  t2097 = 0. + t2096;
  t2100 = -1.*t1662;
  t2101 = 1. + t2100;
  t2102 = 0.135*t2101;
  t2104 = 0. + t2102;
  t2107 = -0.135*t1765;
  t2108 = 0. + t2107;
  t2114 = -0.09*t2113;
  t2116 = 0.049*t1649;
  t2117 = 0. + t2114 + t2116;
  t2121 = -0.049*t2120;
  t2122 = -0.135*t1809;
  t2123 = 0. + t2121 + t2122;
  t2125 = 0.135*t2120;
  t2126 = -0.049*t1809;
  t2127 = 0. + t2125 + t2126;
  t2133 = -0.049*t2113;
  t2134 = -0.09*t1649;
  t2135 = 0. + t2133 + t2134;
  t2139 = -0.049*t2138;
  t2140 = -0.21*t1627;
  t2141 = 0. + t2139 + t2140;
  t2143 = -0.21*t2138;
  t2144 = 0.049*t1627;
  t2145 = 0. + t2143 + t2144;
  t2149 = -0.2707*t2148;
  t2150 = 0.0016*t1617;
  t2151 = 0. + t2149 + t2150;
  t2153 = -0.0016*t2148;
  t2154 = -0.2707*t1617;
  t2155 = 0. + t2153 + t2154;
  t2159 = 0.0184*t2158;
  t2160 = -0.7055*t1603;
  t2161 = 0. + t2159 + t2160;
  t2163 = -0.7055*t2158;
  t2164 = -0.0184*t1603;
  t2165 = 0. + t2163 + t2164;
  t2169 = -1.1135*t2168;
  t2170 = 0.0216*t1582;
  t2171 = 0. + t2169 + t2170;
  t2173 = -0.0216*t2168;
  t2174 = -1.1135*t1582;
  t2175 = 0. + t2173 + t2174;
  t1993 = t1582*t1992;
  t1997 = t1886*t1996;
  t1999 = t1993 + t1997;
  t2057 = t1582*t2056;
  t2063 = t1886*t2061;
  t2064 = t2057 + t2063;
  p_output1[0]=t1896;
  p_output1[1]=t1999;
  p_output1[2]=t2064;
  p_output1[3]=0.;
  p_output1[4]=-1.*t1790*t1804 - 1.*t1676*t1785*t1809;
  p_output1[5]=-1.*t1809*t1948 - 1.*t1790*t1954;
  p_output1[6]=-1.*t1809*t2023 - 1.*t1790*t2028;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1883*t1886 + t1582*t1893;
  p_output1[9]=-1.*t1886*t1992 + t1582*t1996;
  p_output1[10]=-1.*t1886*t2056 + t1582*t2061;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*(t1790*t1804 + t1676*t1785*t1809) - 1.193387*(t1883*t1886 - 1.*t1582*t1893) - 0.0216*t1896 - 1.*t1676*t1680*t2094 + t1674*t2097 + t1758*t2104 + t1702*t2108 + t1779*t2117 + t1676*t1785*t2123 + t1804*t2127 + t1811*t2135 + t1815*t2141 + t1833*t2145 + t1846*t2151 + t1857*t2155 + t1859*t2161 + t1877*t2165 + t1883*t2171 + t1893*t2175 + var1[0];
  p_output1[13]=0. + 0.1305*(t1809*t1948 + t1790*t1954) - 1.193387*(t1886*t1992 - 1.*t1582*t1996) - 0.0216*t1999 + t1915*t2094 - 1.*t1676*t1900*t2097 + t1927*t2104 + t1919*t2108 + t1935*t2117 + t1948*t2123 + t1954*t2127 + t1957*t2135 + t1959*t2141 + t1963*t2145 + t1965*t2151 + t1975*t2155 + t1979*t2161 + t1988*t2165 + t1992*t2171 + t1996*t2175 + var1[1];
  p_output1[14]=0. + 0.1305*(t1809*t2023 + t1790*t2028) - 1.193387*(t1886*t2056 - 1.*t1582*t2061) - 0.0216*t2064 + t2006*t2094 + t1676*t1910*t2097 + t2015*t2104 + t2010*t2108 + t2018*t2117 + t2023*t2123 + t2028*t2127 + t2031*t2135 + t2034*t2141 + t2040*t2145 + t2043*t2151 + t2047*t2155 + t2049*t2161 + t2053*t2165 + t2056*t2171 + t2061*t2175 + var1[2];
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

#include "H_LeftToeBottomBack.hh"

namespace SymExpression
{

void H_LeftToeBottomBack_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
