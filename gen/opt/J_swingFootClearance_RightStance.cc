/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:28 GMT-04:00
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
  double t1021;
  double t759;
  double t996;
  double t1006;
  double t1010;
  double t1033;
  double t1060;
  double t1072;
  double t1075;
  double t1113;
  double t1116;
  double t1123;
  double t1176;
  double t1184;
  double t1189;
  double t1151;
  double t1160;
  double t1166;
  double t1200;
  double t1535;
  double t1539;
  double t1541;
  double t1545;
  double t1510;
  double t1513;
  double t1514;
  double t1572;
  double t1579;
  double t1581;
  double t1227;
  double t1239;
  double t1254;
  double t1270;
  double t1278;
  double t1286;
  double t1507;
  double t1682;
  double t1686;
  double t1688;
  double t1697;
  double t1699;
  double t1713;
  double t1718;
  double t1727;
  double t1734;
  double t1745;
  double t1758;
  double t1761;
  double t1762;
  double t1770;
  double t1780;
  double t1792;
  double t1794;
  double t1800;
  double t1820;
  double t1821;
  double t1822;
  double t1826;
  double t1827;
  double t1843;
  double t1847;
  double t1863;
  double t1864;
  double t1866;
  double t1877;
  double t1888;
  double t1891;
  double t1901;
  double t1915;
  double t1918;
  double t1924;
  double t1933;
  double t1934;
  double t1935;
  double t1950;
  double t1952;
  double t1958;
  double t827;
  double t967;
  double t1142;
  double t1147;
  double t1259;
  double t1273;
  double t1275;
  double t2004;
  double t2017;
  double t2022;
  double t1992;
  double t1994;
  double t1995;
  double t1543;
  double t1553;
  double t1564;
  double t1587;
  double t1588;
  double t1596;
  double t2044;
  double t2045;
  double t2063;
  double t1649;
  double t1653;
  double t1661;
  double t1715;
  double t1723;
  double t1725;
  double t2027;
  double t2032;
  double t2038;
  double t2086;
  double t2087;
  double t2089;
  double t1748;
  double t1749;
  double t1757;
  double t1775;
  double t1778;
  double t1779;
  double t1781;
  double t1790;
  double t2097;
  double t2098;
  double t2102;
  double t2110;
  double t2114;
  double t2120;
  double t1806;
  double t1816;
  double t1818;
  double t1819;
  double t1845;
  double t1849;
  double t1851;
  double t2124;
  double t2134;
  double t2138;
  double t2140;
  double t2145;
  double t2146;
  double t1869;
  double t1872;
  double t1874;
  double t1920;
  double t1928;
  double t1929;
  double t2152;
  double t2153;
  double t2157;
  double t2160;
  double t2177;
  double t2180;
  double t1942;
  double t1946;
  double t1949;
  double t2183;
  double t2186;
  double t2191;
  double t2194;
  double t2196;
  double t2197;
  double t2227;
  double t2228;
  double t2232;
  double t2267;
  double t2273;
  double t2279;
  double t2292;
  double t2299;
  double t2303;
  double t2247;
  double t2256;
  double t2259;
  double t2330;
  double t2331;
  double t2334;
  double t2350;
  double t2356;
  double t2358;
  double t2362;
  double t2363;
  double t2370;
  double t2387;
  double t2389;
  double t2391;
  double t2399;
  double t2400;
  double t2403;
  double t2411;
  double t2421;
  double t2427;
  double t2436;
  double t2441;
  double t2451;
  double t2454;
  double t2455;
  double t2462;
  double t2482;
  double t2488;
  double t2495;
  double t2568;
  double t2572;
  double t2573;
  double t2576;
  double t2577;
  double t2582;
  double t2586;
  double t2597;
  double t2598;
  double t2606;
  double t2608;
  double t2609;
  double t2617;
  double t2619;
  double t2622;
  double t2628;
  double t2630;
  double t2632;
  double t2636;
  double t2638;
  double t2639;
  double t2644;
  double t2648;
  double t2650;
  double t2653;
  double t2654;
  double t2655;
  double t2657;
  double t2659;
  double t2661;
  double t2663;
  double t2664;
  double t2666;
  double t2668;
  double t2669;
  double t2671;
  double t2690;
  double t2691;
  double t2692;
  double t2694;
  double t2696;
  double t2699;
  double t2700;
  double t2707;
  double t2708;
  double t2711;
  double t2713;
  double t2715;
  double t2716;
  double t2722;
  double t2729;
  double t2738;
  double t2750;
  double t2752;
  double t2754;
  double t2762;
  double t2763;
  double t2765;
  double t2776;
  double t2777;
  double t2781;
  double t2786;
  double t2788;
  double t2789;
  double t2796;
  double t2798;
  double t2799;
  double t2836;
  double t2839;
  double t2840;
  double t2820;
  double t2821;
  double t2825;
  double t2845;
  double t2847;
  double t2848;
  double t2862;
  double t2864;
  double t2865;
  double t2868;
  double t2871;
  double t2872;
  double t2875;
  double t2876;
  double t2878;
  double t2882;
  double t2884;
  double t2887;
  double t2894;
  double t2896;
  double t2897;
  double t2902;
  double t2906;
  double t2908;
  double t2953;
  double t2957;
  double t2958;
  double t2965;
  double t2970;
  double t2974;
  double t2981;
  double t2986;
  double t2989;
  double t2994;
  double t2995;
  double t2997;
  double t3002;
  double t3005;
  double t3006;
  double t3012;
  double t3013;
  double t3014;
  double t3032;
  double t3037;
  double t3040;
  double t3045;
  double t3050;
  double t3057;
  double t3060;
  double t3062;
  double t3068;
  double t3160;
  double t3169;
  double t3173;
  double t3212;
  double t3246;
  double t3283;
  double t3287;
  double t3304;
  double t3308;
  double t3326;
  double t3329;
  double t3331;
  double t3332;
  double t3377;
  double t3380;
  double t3383;
  double t3385;
  double t3386;
  double t3396;
  double t3539;
  double t3546;
  double t3547;
  double t3560;
  double t3580;
  double t3588;
  double t3604;
  double t3612;
  double t3616;
  double t3621;
  double t3624;
  double t3627;
  double t3629;
  double t3694;
  double t3697;
  double t3702;
  double t3739;
  double t3751;
  double t3759;
  double t3761;
  double t3766;
  double t3929;
  double t3931;
  double t3951;
  double t3808;
  t1021 = Sin(var1[3]);
  t759 = Cos(var1[6]);
  t996 = Cos(var1[3]);
  t1006 = Cos(var1[5]);
  t1010 = t996*t1006;
  t1033 = Sin(var1[4]);
  t1060 = Sin(var1[5]);
  t1072 = -1.*t1021*t1033*t1060;
  t1075 = t1010 + t1072;
  t1113 = Cos(var1[4]);
  t1116 = Sin(var1[6]);
  t1123 = Cos(var1[7]);
  t1176 = -1.*t1113*t759*t1021;
  t1184 = -1.*t1075*t1116;
  t1189 = t1176 + t1184;
  t1151 = t759*t1075;
  t1160 = -1.*t1113*t1021*t1116;
  t1166 = t1151 + t1160;
  t1200 = Sin(var1[7]);
  t1535 = Cos(var1[8]);
  t1539 = -1.*t1535;
  t1541 = 1. + t1539;
  t1545 = Sin(var1[8]);
  t1510 = t1123*t1166;
  t1513 = t1189*t1200;
  t1514 = t1510 + t1513;
  t1572 = t1006*t1021*t1033;
  t1579 = t996*t1060;
  t1581 = t1572 + t1579;
  t1227 = Cos(var1[9]);
  t1239 = -1.*t1227;
  t1254 = 1. + t1239;
  t1270 = Sin(var1[9]);
  t1278 = t1123*t1189;
  t1286 = -1.*t1166*t1200;
  t1507 = t1278 + t1286;
  t1682 = t1535*t1581;
  t1686 = t1514*t1545;
  t1688 = t1682 + t1686;
  t1697 = Cos(var1[10]);
  t1699 = -1.*t1697;
  t1713 = 1. + t1699;
  t1718 = Sin(var1[10]);
  t1727 = t1270*t1507;
  t1734 = t1227*t1688;
  t1745 = t1727 + t1734;
  t1758 = t1227*t1507;
  t1761 = -1.*t1270*t1688;
  t1762 = t1758 + t1761;
  t1770 = Cos(var1[11]);
  t1780 = Sin(var1[11]);
  t1792 = -1.*t1718*t1745;
  t1794 = t1697*t1762;
  t1800 = t1792 + t1794;
  t1820 = t1697*t1745;
  t1821 = t1718*t1762;
  t1822 = t1820 + t1821;
  t1826 = Cos(var1[12]);
  t1827 = -1.*t1826;
  t1843 = 1. + t1827;
  t1847 = Sin(var1[12]);
  t1863 = t1780*t1800;
  t1864 = t1770*t1822;
  t1866 = t1863 + t1864;
  t1877 = t1770*t1800;
  t1888 = -1.*t1780*t1822;
  t1891 = t1877 + t1888;
  t1901 = Cos(var1[13]);
  t1915 = -1.*t1901;
  t1918 = 1. + t1915;
  t1924 = Sin(var1[13]);
  t1933 = -1.*t1847*t1866;
  t1934 = t1826*t1891;
  t1935 = t1933 + t1934;
  t1950 = t1826*t1866;
  t1952 = t1847*t1891;
  t1958 = t1950 + t1952;
  t827 = -1.*t759;
  t967 = 1. + t827;
  t1142 = -1.*t1123;
  t1147 = 1. + t1142;
  t1259 = -0.09*t1254;
  t1273 = 0.049*t1270;
  t1275 = t1259 + t1273;
  t2004 = -1.*t996*t759*t1033;
  t2017 = -1.*t996*t1113*t1060*t1116;
  t2022 = t2004 + t2017;
  t1992 = t996*t1113*t759*t1060;
  t1994 = -1.*t996*t1033*t1116;
  t1995 = t1992 + t1994;
  t1543 = 0.135*t1541;
  t1553 = 0.049*t1545;
  t1564 = t1543 + t1553;
  t1587 = -0.049*t1541;
  t1588 = 0.135*t1545;
  t1596 = t1587 + t1588;
  t2044 = t1123*t1995;
  t2045 = t2022*t1200;
  t2063 = t2044 + t2045;
  t1649 = -0.049*t1254;
  t1653 = -0.09*t1270;
  t1661 = t1649 + t1653;
  t1715 = -0.049*t1713;
  t1723 = -0.21*t1718;
  t1725 = t1715 + t1723;
  t2027 = t1123*t2022;
  t2032 = -1.*t1995*t1200;
  t2038 = t2027 + t2032;
  t2086 = -1.*t996*t1113*t1006*t1535;
  t2087 = t2063*t1545;
  t2089 = t2086 + t2087;
  t1748 = -0.21*t1713;
  t1749 = 0.049*t1718;
  t1757 = t1748 + t1749;
  t1775 = -1.*t1770;
  t1778 = 1. + t1775;
  t1779 = -0.2707*t1778;
  t1781 = 0.0016*t1780;
  t1790 = t1779 + t1781;
  t2097 = t1270*t2038;
  t2098 = t1227*t2089;
  t2102 = t2097 + t2098;
  t2110 = t1227*t2038;
  t2114 = -1.*t1270*t2089;
  t2120 = t2110 + t2114;
  t1806 = -1. + t1770;
  t1816 = 0.0016*t1806;
  t1818 = -0.2707*t1780;
  t1819 = t1816 + t1818;
  t1845 = 0.0184*t1843;
  t1849 = -0.7055*t1847;
  t1851 = t1845 + t1849;
  t2124 = -1.*t1718*t2102;
  t2134 = t1697*t2120;
  t2138 = t2124 + t2134;
  t2140 = t1697*t2102;
  t2145 = t1718*t2120;
  t2146 = t2140 + t2145;
  t1869 = -0.7055*t1843;
  t1872 = -0.0184*t1847;
  t1874 = t1869 + t1872;
  t1920 = -1.1135*t1918;
  t1928 = 0.0216*t1924;
  t1929 = t1920 + t1928;
  t2152 = t1780*t2138;
  t2153 = t1770*t2146;
  t2157 = t2152 + t2153;
  t2160 = t1770*t2138;
  t2177 = -1.*t1780*t2146;
  t2180 = t2160 + t2177;
  t1942 = -0.0216*t1918;
  t1946 = -1.1135*t1924;
  t1949 = t1942 + t1946;
  t2183 = -1.*t1847*t2157;
  t2186 = t1826*t2180;
  t2191 = t2183 + t2186;
  t2194 = t1826*t2157;
  t2196 = t1847*t2180;
  t2197 = t2194 + t2196;
  t2227 = t996*t1006*t1033;
  t2228 = -1.*t1021*t1060;
  t2232 = t2227 + t2228;
  t2267 = t759*t1123*t2232;
  t2273 = -1.*t2232*t1116*t1200;
  t2279 = t2267 + t2273;
  t2292 = t1006*t1021;
  t2299 = t996*t1033*t1060;
  t2303 = t2292 + t2299;
  t2247 = -1.*t1123*t2232*t1116;
  t2256 = -1.*t759*t2232*t1200;
  t2259 = t2247 + t2256;
  t2330 = t1535*t2303;
  t2331 = t2279*t1545;
  t2334 = t2330 + t2331;
  t2350 = t1270*t2259;
  t2356 = t1227*t2334;
  t2358 = t2350 + t2356;
  t2362 = t1227*t2259;
  t2363 = -1.*t1270*t2334;
  t2370 = t2362 + t2363;
  t2387 = -1.*t1718*t2358;
  t2389 = t1697*t2370;
  t2391 = t2387 + t2389;
  t2399 = t1697*t2358;
  t2400 = t1718*t2370;
  t2403 = t2399 + t2400;
  t2411 = t1780*t2391;
  t2421 = t1770*t2403;
  t2427 = t2411 + t2421;
  t2436 = t1770*t2391;
  t2441 = -1.*t1780*t2403;
  t2451 = t2436 + t2441;
  t2454 = -1.*t1847*t2427;
  t2455 = t1826*t2451;
  t2462 = t2454 + t2455;
  t2482 = t1826*t2427;
  t2488 = t1847*t2451;
  t2495 = t2482 + t2488;
  t2568 = t996*t1113*t759;
  t2572 = -1.*t2303*t1116;
  t2573 = t2568 + t2572;
  t2576 = -1.*t759*t2303;
  t2577 = -1.*t996*t1113*t1116;
  t2582 = t2576 + t2577;
  t2586 = t1123*t2573;
  t2597 = t2582*t1200;
  t2598 = t2586 + t2597;
  t2606 = t1123*t2582;
  t2608 = -1.*t2573*t1200;
  t2609 = t2606 + t2608;
  t2617 = t1270*t2609;
  t2619 = t1227*t2598*t1545;
  t2622 = t2617 + t2619;
  t2628 = t1227*t2609;
  t2630 = -1.*t1270*t2598*t1545;
  t2632 = t2628 + t2630;
  t2636 = -1.*t1718*t2622;
  t2638 = t1697*t2632;
  t2639 = t2636 + t2638;
  t2644 = t1697*t2622;
  t2648 = t1718*t2632;
  t2650 = t2644 + t2648;
  t2653 = t1780*t2639;
  t2654 = t1770*t2650;
  t2655 = t2653 + t2654;
  t2657 = t1770*t2639;
  t2659 = -1.*t1780*t2650;
  t2661 = t2657 + t2659;
  t2663 = -1.*t1847*t2655;
  t2664 = t1826*t2661;
  t2666 = t2663 + t2664;
  t2668 = t1826*t2655;
  t2669 = t1847*t2661;
  t2671 = t2668 + t2669;
  t2690 = t759*t2303;
  t2691 = t996*t1113*t1116;
  t2692 = t2690 + t2691;
  t2694 = -1.*t2692*t1200;
  t2696 = t2586 + t2694;
  t2699 = -1.*t1123*t2692;
  t2700 = t2699 + t2608;
  t2707 = t1270*t2700;
  t2708 = t1227*t2696*t1545;
  t2711 = t2707 + t2708;
  t2713 = t1227*t2700;
  t2715 = -1.*t1270*t2696*t1545;
  t2716 = t2713 + t2715;
  t2722 = -1.*t1718*t2711;
  t2729 = t1697*t2716;
  t2738 = t2722 + t2729;
  t2750 = t1697*t2711;
  t2752 = t1718*t2716;
  t2754 = t2750 + t2752;
  t2762 = t1780*t2738;
  t2763 = t1770*t2754;
  t2765 = t2762 + t2763;
  t2776 = t1770*t2738;
  t2777 = -1.*t1780*t2754;
  t2781 = t2776 + t2777;
  t2786 = -1.*t1847*t2765;
  t2788 = t1826*t2781;
  t2789 = t2786 + t2788;
  t2796 = t1826*t2765;
  t2798 = t1847*t2781;
  t2799 = t2796 + t2798;
  t2836 = t1123*t2692;
  t2839 = t2573*t1200;
  t2840 = t2836 + t2839;
  t2820 = -1.*t996*t1006*t1033;
  t2821 = t1021*t1060;
  t2825 = t2820 + t2821;
  t2845 = t1535*t2840;
  t2847 = -1.*t2825*t1545;
  t2848 = t2845 + t2847;
  t2862 = -1.*t1697*t1270*t2848;
  t2864 = -1.*t1227*t1718*t2848;
  t2865 = t2862 + t2864;
  t2868 = t1227*t1697*t2848;
  t2871 = -1.*t1270*t1718*t2848;
  t2872 = t2868 + t2871;
  t2875 = t1780*t2865;
  t2876 = t1770*t2872;
  t2878 = t2875 + t2876;
  t2882 = t1770*t2865;
  t2884 = -1.*t1780*t2872;
  t2887 = t2882 + t2884;
  t2894 = -1.*t1847*t2878;
  t2896 = t1826*t2887;
  t2897 = t2894 + t2896;
  t2902 = t1826*t2878;
  t2906 = t1847*t2887;
  t2908 = t2902 + t2906;
  t2953 = t1535*t2825;
  t2957 = t2840*t1545;
  t2958 = t2953 + t2957;
  t2965 = -1.*t1270*t2696;
  t2970 = -1.*t1227*t2958;
  t2974 = t2965 + t2970;
  t2981 = t1227*t2696;
  t2986 = -1.*t1270*t2958;
  t2989 = t2981 + t2986;
  t2994 = t1718*t2974;
  t2995 = t1697*t2989;
  t2997 = t2994 + t2995;
  t3002 = t1697*t2974;
  t3005 = -1.*t1718*t2989;
  t3006 = t3002 + t3005;
  t3012 = -1.*t1780*t2997;
  t3013 = t1770*t3006;
  t3014 = t3012 + t3013;
  t3032 = t1770*t2997;
  t3037 = t1780*t3006;
  t3040 = t3032 + t3037;
  t3045 = t1847*t3014;
  t3050 = t1826*t3040;
  t3057 = t3045 + t3050;
  t3060 = t1826*t3014;
  t3062 = -1.*t1847*t3040;
  t3068 = t3060 + t3062;
  t3160 = t1270*t2696;
  t3169 = t1227*t2958;
  t3173 = t3160 + t3169;
  t3212 = -1.*t1718*t3173;
  t3246 = t3212 + t2995;
  t3283 = -1.*t1697*t3173;
  t3287 = t3283 + t3005;
  t3304 = -1.*t1780*t3246;
  t3308 = t1770*t3287;
  t3326 = t3304 + t3308;
  t3329 = t1770*t3246;
  t3331 = t1780*t3287;
  t3332 = t3329 + t3331;
  t3377 = t1847*t3326;
  t3380 = t1826*t3332;
  t3383 = t3377 + t3380;
  t3385 = t1826*t3326;
  t3386 = -1.*t1847*t3332;
  t3396 = t3385 + t3386;
  t3539 = t1697*t3173;
  t3546 = t1718*t2989;
  t3547 = t3539 + t3546;
  t3560 = -1.*t1770*t3547;
  t3580 = t3304 + t3560;
  t3588 = -1.*t1780*t3547;
  t3604 = t3329 + t3588;
  t3612 = t1847*t3580;
  t3616 = t1826*t3604;
  t3621 = t3612 + t3616;
  t3624 = t1826*t3580;
  t3627 = -1.*t1847*t3604;
  t3629 = t3624 + t3627;
  t3694 = t1780*t3246;
  t3697 = t1770*t3547;
  t3702 = t3694 + t3697;
  t3739 = -1.*t1847*t3702;
  t3751 = t3739 + t3616;
  t3759 = -1.*t1826*t3702;
  t3761 = t3759 + t3627;
  t3766 = -1.*t1924*t3751;
  t3929 = t1826*t3702;
  t3931 = t1847*t3604;
  t3951 = t3929 + t3931;
  t3808 = t1901*t3751;
  p_output1[0]=1.;
  p_output1[1]=0.135*t1021*t1113*t1116 + 0.135*t1147*t1166 - 0.135*t1189*t1200 + t1275*t1507 + t1514*t1564 + 0.1305*(t1514*t1535 - 1.*t1545*t1581) + t1581*t1596 + t1661*t1688 + t1725*t1745 + t1757*t1762 + t1790*t1800 + t1819*t1822 + t1851*t1866 + t1874*t1891 + t1929*t1935 + t1949*t1958 + 0.0306*(t1924*t1935 + t1901*t1958) - 1.1312*(t1901*t1935 - 1.*t1924*t1958) + 0.135*t1075*t967;
  p_output1[2]=0.135*t1147*t1995 - 0.135*t1200*t2022 + t1275*t2038 + t1564*t2063 + t1661*t2089 + t1725*t2102 + t1757*t2120 + t1790*t2138 + t1819*t2146 + t1851*t2157 + t1874*t2180 + t1929*t2191 + t1949*t2197 + 0.0306*(t1924*t2191 + t1901*t2197) - 1.1312*(t1901*t2191 - 1.*t1924*t2197) + 0.135*t1033*t1116*t996 - 1.*t1006*t1113*t1596*t996 + 0.135*t1060*t1113*t967*t996 + 0.1305*(t1535*t2063 + t1006*t1113*t1545*t996);
  p_output1[3]=0.135*t1116*t1200*t2232 + t1275*t2259 + t1564*t2279 + t1596*t2303 + 0.1305*(t1535*t2279 - 1.*t1545*t2303) + t1661*t2334 + t1725*t2358 + t1757*t2370 + t1790*t2391 + t1819*t2403 + t1851*t2427 + t1874*t2451 + t1929*t2462 + t1949*t2495 + 0.0306*(t1924*t2462 + t1901*t2495) - 1.1312*(t1901*t2462 - 1.*t1924*t2495) + 0.135*t1147*t2232*t759 + 0.135*t2232*t967;
  p_output1[4]=0.135*t1116*t2303 + 0.135*t1147*t2573 - 0.135*t1200*t2582 + 0.1305*t1535*t2598 + t1564*t2598 + t1545*t1661*t2598 + t1275*t2609 + t1725*t2622 + t1757*t2632 + t1790*t2639 + t1819*t2650 + t1851*t2655 + t1874*t2661 + t1929*t2666 + t1949*t2671 + 0.0306*(t1924*t2666 + t1901*t2671) - 1.1312*(t1901*t2666 - 1.*t1924*t2671) - 0.135*t1113*t759*t996;
  p_output1[5]=-0.135*t1123*t2573 + 0.135*t1200*t2692 + 0.1305*t1535*t2696 + t1564*t2696 + t1545*t1661*t2696 + t1275*t2700 + t1725*t2711 + t1757*t2716 + t1790*t2738 + t1819*t2754 + t1851*t2765 + t1874*t2781 + t1929*t2789 + t1949*t2799 + 0.0306*(t1924*t2789 + t1901*t2799) - 1.1312*(t1901*t2789 - 1.*t1924*t2799);
  p_output1[6]=(0.135*t1535 - 0.049*t1545)*t2825 + (0.049*t1535 + t1588)*t2840 + 0.1305*(-1.*t1535*t2825 - 1.*t1545*t2840) + t1661*t2848 + t1227*t1725*t2848 - 1.*t1270*t1757*t2848 + t1790*t2865 + t1819*t2872 + t1851*t2878 + t1874*t2887 + t1929*t2897 + t1949*t2908 + 0.0306*(t1924*t2897 + t1901*t2908) - 1.1312*(t1901*t2897 - 1.*t1924*t2908);
  p_output1[7]=(0.049*t1227 + t1653)*t2696 + (-0.09*t1227 - 0.049*t1270)*t2958 + t1757*t2974 + t1725*t2989 + t1819*t2997 + t1790*t3006 + t1874*t3014 + t1851*t3040 + t1949*t3057 + t1929*t3068 - 1.1312*(-1.*t1924*t3057 + t1901*t3068) + 0.0306*(t1901*t3057 + t1924*t3068);
  p_output1[8]=(0.049*t1697 + t1723)*t2989 + (-0.21*t1697 - 0.049*t1718)*t3173 + t1819*t3246 + t1790*t3287 + t1874*t3326 + t1851*t3332 + t1949*t3383 + t1929*t3396 - 1.1312*(-1.*t1924*t3383 + t1901*t3396) + 0.0306*(t1901*t3383 + t1924*t3396);
  p_output1[9]=(0.0016*t1770 + t1818)*t3246 + (-0.2707*t1770 - 0.0016*t1780)*t3547 + t1874*t3580 + t1851*t3604 + t1949*t3621 + t1929*t3629 - 1.1312*(-1.*t1924*t3621 + t1901*t3629) + 0.0306*(t1901*t3621 + t1924*t3629);
  p_output1[10]=(-0.0184*t1826 + t1849)*t3604 + (-0.7055*t1826 + 0.0184*t1847)*t3702 + t1949*t3751 + t1929*t3761 - 1.1312*(t1901*t3761 + t3766) + 0.0306*(t1924*t3761 + t3808);
  p_output1[11]=(0.0216*t1901 + t1946)*t3751 + (-1.1135*t1901 - 0.0216*t1924)*t3951 - 1.1312*(t3766 - 1.*t1901*t3951) + 0.0306*(t3808 - 1.*t1924*t3951);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 12, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_swingFootClearance_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void J_swingFootClearance_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
